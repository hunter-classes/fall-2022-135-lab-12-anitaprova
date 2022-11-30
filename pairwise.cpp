/*
Author: Anita Prova
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 12
Makes a vector
*/

#include <iostream>
#include <vector>

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2) {
	std::vector<int> v;
	int size;
	if(v1.size() > v2.size()) {
		size = v1.size();
	}
	else {
		size = v2.size();
	}

	for (int i = 0; i < size; i++) {
		if(i >= v2.size()) {
			v.push_back(v1[i]);
		}
		else if(i >= v1.size()){
			v.push_back(v2[i]);
		}
		else {
			v.push_back(v1[i] + v2[i]);
		}
	}
	
	return v;
}
