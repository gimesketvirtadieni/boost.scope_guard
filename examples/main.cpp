/*
 * Copyright 2017, Andrej Kislovskij
 *
 * This is PUBLIC DOMAIN software so use at your own risk as it comes
 * with no warranties. This code is yours to share, use and modify without
 * any restrictions or obligations.
 *
 * For more information see conwrap/LICENSE or refer refer to http://unlicense.org
 *
 * Author: gimesketvirtadieni at gmail dot com (Andrej Kislovskij)
 */

#include <scope_guard.hpp>


int main(int argc, char *argv[])
{
	{
		util::scope_guard guard = [&]
		{
		};
	}
	{
		SCOPE_GUARD [&]
		{
		};

		SCOPE_GUARD [&]
		{
		};
	}
	{
		util::scope_guard_failure guard = [&]
		{
		};
	}
	{
		util::scope_guard_success guard = [&]
		{
		};
	}
	{
		SCOPE_GUARD_SUCCESS [&]
		{
		};

		SCOPE_GUARD_SUCCESS [&]
		{
		};
	}
	{
		SCOPE_GUARD_FAILURE [&]
		{
		};

		SCOPE_GUARD_FAILURE [&]
		{
		};
	}
	return 0;
}
