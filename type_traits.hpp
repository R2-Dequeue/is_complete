#pragma once

namespace cdp
{
	template <typename T>
	constexpr auto _is_complete(int = 0) -> decltype(!sizeof(T))
	{
		return true;
	}

	template <typename T>
	constexpr bool _is_complete(...)
	{
		return false;
	}

	template <typename T>
	constexpr bool is_complete()
	{
		return _is_complete<T>(0);
	}
}
