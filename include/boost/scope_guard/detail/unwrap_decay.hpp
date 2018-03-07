
//                     Copyright Yuri Kilochek 2018.
//        Distributed under the Boost Software License, Version 1.0.
//           (See accompanying file LICENSE_1_0.txt or copy at
//                 http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_SCOPE_GUARD_DETAIL_UNWRAP_DECAY_HPP
#define BOOST_SCOPE_GUARD_DETAIL_UNWRAP_DECAY_HPP

#include <tuple>
#include <utility>

#ifndef SCOPE_GUARD_STANDALONE
namespace boost::detail::scope_guard {
#else
namespace util::detail::scope_guard {
#endif
///////////////////////////////////////////////////////////////////////////////

template <typename T>
struct unwrap_decay
: std::tuple_element<0, decltype(std::make_tuple(std::declval<T>()))>
{};

template <typename T>
using unwrap_decay_t = typename unwrap_decay<T>::type;

///////////////////////////////////////////////////////////////////////////////
} // boost::detail::scope_guard

#endif

