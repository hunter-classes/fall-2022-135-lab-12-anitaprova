#include <iostream>
#include "vectors.h"
#include "optimism.h"

int main() {
	//TASK A
	std::vector<int> v = makeVector(5);	
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}
	std::cout << "\n";

	//TASK B
	const std::vector<int> v2{1,2,-1,3,4,-1,6};
	goodVibes(v2);

	//TASK C
	
	return 0;
}
