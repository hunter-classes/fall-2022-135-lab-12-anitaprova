/*
Author: Anita Prova
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 12
Makes a vector
*/

#include <iostream>
#include <vector>

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
	std::vector<int> v;
	for (int i = 0; i < v1.size(); i++) {
		v.push_back(v1[i] + v2[i]);
	}
	
	return v;
}
