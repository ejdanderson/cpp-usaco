/*
ID: kzoevy1 
LANG: C++
PROG: ride
 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

using namespace std;


int char_to_int(char str) {
	return (int) str - 64;
}	

int main() {
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	// Larger than 6, needs to account for newlines and potnetial long strings
	char ufo[20] = {0}, comet[20] = {0};
	int ufo_tot = 1, comet_tot = 1;
	int temp;	
	fin >> ufo >> comet;
	for (int x = 0; x < 6; x++) {
		if (ufo[x] != 0) {
			ufo_tot =  ufo_tot * char_to_int(ufo[x]);
		}
		if (comet[x] != 0) {
			comet_tot = comet_tot * char_to_int(comet[x]);	
		}
	}
	if (comet_tot % 47 == ufo_tot % 47) {
		fout << "GO" << endl;
	}
	else {
		fout << "STAY" << endl;
	}
	fout.close();
	fin.close();
	return 0;
}

