
//                     Copyright Yuri Kilochek 2018.
//        Distributed under the Boost Software License, Version 1.0.
//           (See accompanying file LICENSE_1_0.txt or copy at
//                 http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_SCOPE_GUARD_DETAIL_BASE_HPP
#define BOOST_SCOPE_GUARD_DETAIL_BASE_HPP

#ifndef SCOPE_GUARD_STANDALONE
#include <boost/scope_guard/detail/action.hpp>
#else
#include <scope_guard/detail/action.hpp>
#endif

#include <type_traits>
#include <utility>

#ifndef SCOPE_GUARD_STANDALONE
namespace boost::detail::scope_guard {
#else
namespace util::detail::scope_guard {
#endif
///////////////////////////////////////////////////////////////////////////////

template <typename... Params>
class base
{
protected:
    using action_type = detail::scope_guard::action<Params...>;

    action_type action_;

public:
    template <typename... Params_,
        std::enable_if_t<std::is_constructible_v<action_type, Params_...> &&
                         std::is_invocable_v<action_type>>*...>
    constexpr
    base(Params_&&... params)
    noexcept(std::is_nothrow_constructible_v<action_type, Params_...>)
    : action_(std::forward<Params_>(params)...)
    {}

    base(base const&) = delete;
    auto operator=(base const&)
    -> base&
    = delete;

    base(base&&) = delete;
    auto operator=(base&&)
    -> base&
    = delete;
};

///////////////////////////////////////////////////////////////////////////////
} // boost::detail::scope_guard

#endif

