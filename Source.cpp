#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>

#include <set>
#include <map>
#include <vector>
#include <queue>
#include <string>

#include <cmath>
#include <algorithm>

#include ".h"

int main() {
	int TEST_NUMBER = ;
	std::string PROBLEM_NAME = "";
	std::string PROBLEM_DIR = "datasets\\";
	for (int i = 0; i < TEST_NUMBER; i++) {
		std::stringstream number;
		number << std::setfill('0') << std::setw(2) << i;
		solve(PROBLEM_DIR + '\\' + PROBLEM_NAME + number.str());
	}
}