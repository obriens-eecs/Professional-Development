#include <iostream>

template <typename T>
T min(const T a, const T b) {
	return a < b ? a : b;
}

int main() { 
	std::cout << min<int>(3,2) << std::endl;
	return 0;
}
