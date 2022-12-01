#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
#include <vector>

TEST_CASE("TASK A") {
	CHECK(makeVector(5) == std::vector<int>{0, 1, 2, 3, 4});
	CHECK(makeVector(8) == std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7});
	CHECK(makeVector(21) == std::vector<int> {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20});
}

TEST_CASE("TASK B") {
	std::vector<int> v{1,2,-1,3,4,-1,6};
	std::vector<int> result = goodVibes(v);
	std::vector<int> expected{1, 2, 3, 4, 6};
	CHECK(result == expected);
}

TEST_CASE("TASK C") {
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};
	gogeta(v1, v2);
	std::vector<int> expected{1, 2, 3, 4, 5};
	CHECK(v1 == expected);
	CHECK(v2.size() == 0);
}

TEST_CASE("TASK D") {
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};
	std::vector<int> expected{5, 7, 3};
	std::vector<int> result = sumPairWise(v1, v2);
	CHECK(result == expected);
	
}
