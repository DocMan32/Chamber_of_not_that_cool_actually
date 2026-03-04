#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <random>
#include <map>
#include <algorithm>

// SO. This is the code Josiah wrote, so we offically have Boyfriend code in here i guess lol
// I have no idea what half of this means at all.

using namespace std;
using namespace chrono;

class GameTimer {
private:
	steady_clock::time_point start;
	int timeSpent = 0;

public:
	GameTimer() {
		start = steady_clock::now();
	}

	void consumeTime(int seconds) {
		timeSpent += seconds;
		this_thread::sleep_for(milliseconds(seconds * 500));//tension delay

	}

	int getTimeSpent() const {
		return timeSpent;
	}


};


