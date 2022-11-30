#include <iostream>
#include <vector>

std::vector<int> goodVibes(const std::vector<int> v) {
	std::vector<int> vibes;
	for(int i = 0; i < v.size(); i++) {
		if(v[i] > 0) {
			vibes.push_back(v[i]);
		}
	}

	return vibes;
}
