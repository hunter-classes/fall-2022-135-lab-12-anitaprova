#include <iostream>
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

int main() {
	//TASK A
	std::vector<int> v = makeVector(5);	
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << std::endl;
	}
	std::cout << "\n";

	//TASK B
	const std::vector<int> vibes{1,2,-1,3,4,-1,6};
	goodVibes(vibes);

	//TASK C
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};

	gogeta(v1, v2);	
	
	for(int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << std::endl;
	}
	std::cout << "\n";	

	//TASK D
	std::vector<int> v3{1,2,3};
	std::vector<int> v4{};

	std::vector<int> sum = sumPairWise(v3, v4);
	for (int i = 0; i < sum.size(); i++) {
		std::cout << sum[i] << std::endl;
	}

	return 0;
}
