#include <iostream>
#include <complex>
#include <vector>

#include "type_traits.hpp"

class A;
union B;
enum temp1 : bool
{
	C = cdp::is_complete<temp1>()
};
enum class temp2 : bool
{
	D = cdp::is_complete<temp2>()
};
enum temp3
{
	E = cdp::is_complete<temp3>()
};
using F = int[];
using G = A[7];
using H = void;
using I = const void;
using J = volatile void;
using K = const volatile void;


class R {};
using S = double[11];

int main()
{
	std::cout << std::boolalpha;

	std::cout << "is_complete<T>() should return false:" << '\n';
	std::cout << cdp::is_complete<A>() << '\n';
	std::cout << cdp::is_complete<B>() << '\n';
	std::cout << static_cast<bool>(C) << '\n';
	std::cout << static_cast<bool>(temp2::D) << '\n';
	std::cout << static_cast<bool>(E) << '\n';
	std::cout << cdp::is_complete<F>() << '\n';
	std::cout << cdp::is_complete<G>() << '\n';
	std::cout << cdp::is_complete<H>() << '\n';
	std::cout << cdp::is_complete<I>() << '\n';
	std::cout << cdp::is_complete<J>() << '\n';
	std::cout << cdp::is_complete<K>() << '\n';

	std::cout << '\n';

	std::cout << "is_complete<T>() should return true:" << '\n';
	std::cout << cdp::is_complete<R>() << '\n';
	std::cout << cdp::is_complete<S>() << '\n';
	std::cout << cdp::is_complete<int>() << '\n';
	std::cout << cdp::is_complete<std::complex<float>>() << '\n';
	std::cout << cdp::is_complete<std::vector<double>>() << std::endl;

	return 0;
}
