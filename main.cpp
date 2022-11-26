#include <iostream>
#include "vectors.h"
#include "optimism.h"

int main() {
	std::vector<int> v = makeVector(5);	
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}

	return 0;
}
