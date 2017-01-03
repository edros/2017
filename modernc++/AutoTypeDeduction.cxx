#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
 	const char name[] =  "R. N. Briggs";
	auto arr1 = name; 
	auto& arr2 = name;
	auto&& arr3 = name;

//	std::cout<<typeid(name).name()<<std::endl;
//	std::cout<<typeid(arr1).name()<<std::endl;
//	std::cout<<typeid(arr2).name()<<std::endl;
//	std::cout<<typeid(arr3).name()<<std::endl;


	auto x = 27;
	const auto cx = x;
	const auto& rx = x;

	auto&& uref1 = x;
	auto&& uref2 = cx;
	auto&& uref3 = 27;

	std::cout<<typeid(uref1).name()<<std::endl;
	std::cout<<typeid(uref2).name()<<std::endl;
	std::cout<<typeid(uref3).name()<<std::endl;
}
