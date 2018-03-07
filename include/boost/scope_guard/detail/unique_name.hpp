
//                     Copyright Yuri Kilochek 2018.
//        Distributed under the Boost Software License, Version 1.0.
//           (See accompanying file LICENSE_1_0.txt or copy at
//                 http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_SCOPE_GUARD_DETAIL_UNIQUE_NAME_HPP
#define BOOST_SCOPE_GUARD_DETAIL_UNIQUE_NAME_HPP

#ifndef SCOPE_GUARD_STANDALONE
#include <boost/config.hpp>
#endif

///////////////////////////////////////////////////////////////////////////////

#ifndef SCOPE_GUARD_STANDALONE
#define BOOST_DETAIL_SCOPE_GUARD_UNIQUE_NAME \
    BOOST_JOIN(boost_detail_scope_guard_in_macro_on_line_, __LINE__)
#else

#define UTIL_JOIN( X, Y ) UTIL_DO_JOIN( X, Y )
#define UTIL_DO_JOIN( X, Y ) UTIL_DO_JOIN2(X,Y)
#define UTIL_DO_JOIN2( X, Y ) X##Y

#define UTIL_DETAIL_SCOPE_GUARD_UNIQUE_NAME \
    UTIL_JOIN(util_detail_scope_guard_in_macro_on_line_, __LINE__)
#endif

///////////////////////////////////////////////////////////////////////////////

#endif

