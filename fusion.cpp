/*
Author: Anita Prova
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 12
Makes a vector
*/

#include <iostream>
#include <vector>

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
	for(int i = 0; i < vegeta.size(); i++) {
		goku.push_back(vegeta[i]);
	}
}
