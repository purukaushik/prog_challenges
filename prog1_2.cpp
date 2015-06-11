/*
 * prog1_2.cpp
 *
 *  Created on: Jun 9, 2015
 *      Author: kaushik
 */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MINE '*'
using namespace std;

int main() {

	int n, m;
	int count = 0;
	while (cin >> n >> m) {

		if (!m & !n) {
			return (0);
		} else if (count > 0) {
			cout << endl;
		}
		count++;
		char arr[102][102];
		int mines[102][102];
		int i, j;

		for (i = 1; i < n + 1; i++) {
			for (j = 1; j < m + 1; j++) {
				mines[i][j] = 0;
			}
		}

		for (i = 1; i < n + 1; i++) {

			for (j = 1; j < m + 1; j++) {

				char temp;
				cin >> temp;
				arr[i][j] = temp;
				if (temp == MINE) {

					mines[i - 1][j - 1]++;
					mines[i - 1][j]++;
					mines[i - 1][j + 1]++;
					mines[i][j - 1]++;
					mines[i][j + 1]++;
					mines[i + 1][j - 1]++;
					mines[i + 1][j]++;
					mines[i + 1][j + 1]++;

				}

			}

		}
		cout << "Field #" << count << ":\n";
		for (i = 1; i < n + 1; i++) {
			for (j = 1; j < m + 1; j++) {

				if (arr[i][j] == MINE) {
					cout << arr[i][j];
				} else {
					cout << mines[i][j];
				}
			}
			cout << endl;
		}
	}
	return (0);
}

