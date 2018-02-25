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

#include "a.h"

int main() {
	int TEST_NUMBER = 1;
	std::string PROBLEM_NAME = "PROBE";
	std::string PROBLEM_DIR = "PROBE";
	for (int i = 0; i < TEST_NUMBER; i++) {
		std::stringstream number;
		number << std::setfill('0') << std::setw(2) << i;
		solve(PROBLEM_NAME + number.str());
	}
}