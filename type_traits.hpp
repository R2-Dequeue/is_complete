#pragma once

namespace cdp
{
	template <typename T>
	constexpr auto is_complete_impl(int = 0) -> decltype(!sizeof(T))
	{
		return true;
	}

	template <typename T>
	constexpr bool is_complete_impl(...)
	{
		return false;
	}

	template <typename T>
	constexpr bool is_complete()
	{
		return is_complete_impl<T>(0);
	}
}
