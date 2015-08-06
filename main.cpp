#include <iostream>
#include <complex>
#include <vector>

#include "type_traits.hpp"

class X;
using Y = int[];
enum Z;
class W {};

int main()
{
	std::cout << std::boolalpha;

	std::cout << cdp::is_complete<X>() << std::endl;
	std::cout << cdp::is_complete<Y>() << std::endl;
	std::cout << cdp::is_complete<Z>() << std::endl;
	std::cout << cdp::is_complete<W>() << std::endl;
	std::cout << cdp::is_complete<int>() << std::endl;
	std::cout << cdp::is_complete<std::complex<float>>() << std::endl;
	std::cout << cdp::is_complete<std::vector<double>>() << std::endl;

	return 0;
}
