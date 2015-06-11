/*
 * prog1_3.cpp
 *
 *  Created on: Jun 10, 2015
 *      Author: kaushik
 */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>

using namespace std;
#define MAX_STUDENTS 1000
#define MAX_TRIPS 100

int main() {

	int n, tripNumber;
	double cost_trip[MAX_TRIPS];
	double average_trip[MAX_TRIPS];
	double deviation[MAX_STUDENTS][MAX_TRIPS];
	double expenses[MAX_STUDENTS][MAX_TRIPS];

	double pos_diff[MAX_TRIPS];
	double neg_diff[MAX_TRIPS];
	cin >> n;

	while (n != 0) {

		int i = 0;
		cost_trip[tripNumber] = 0.0f;

		for (i = 0; i < n; i++) {
			cin >> expenses[i][tripNumber];
			cost_trip[tripNumber] = cost_trip[tripNumber]
					+ expenses[i][tripNumber];
		}
		average_trip[tripNumber] = (cost_trip[tripNumber] / n);

		for (i = 0; i < n; i++) {
			deviation[i][tripNumber] = (double) (long) ((expenses[i][tripNumber]
					- average_trip[tripNumber]) * 100.0) / 100.0;
			if (deviation[i][tripNumber] > 0) {
				pos_diff[tripNumber] += deviation[i][tripNumber];
			} else {
				neg_diff[tripNumber] += deviation[i][tripNumber];
			}
		}

		cin >> n;
		tripNumber++;
	}

	int j = 0;

	for (j = 0; j < tripNumber; j++) {

		if (neg_diff[j] > pos_diff[j]) {
			printf("$%.2lf\n", pos_diff[j]);
		} else {
			printf("$%.2lf\n", -neg_diff[j]);
		}
	}
	return (0);
}

