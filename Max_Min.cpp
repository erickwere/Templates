#include <iostream>
namespace J {
template <typename T>
T maximum(T a,T b) {

	return (a > b) ? a:b;
}
template <typename T>
T minimum(T a,T b) {

	return (a > b) ? a:b;
}
}
using namespace std;
int main ()  {
	cout << "max(3,5)=" << J::maximum(10, 5)
		<< endl;
	cout << "max(3.56, 3)=" << J::maximum<int>(8, 4)
		<< endl;
	cout << "max('a', 'A')=" << J::maximum('a','A')
		<< endl;
	cout << "min(3,5)=" << J::maximum(3, 5)
		<< endl;
	cout << "min(3.56, 3)=" << J::maximum<int>(12.5, 4)
		<< endl;
	cout << "min('a', 'A')=" << J::maximum('a','A')
		<< endl;
	system ("pause");
}
