
/*
 * prog6_1.cpp
 *
 *  Created on: Jun 10, 2015
 *      Author: kaushik
 */

#include <iostream>
#include <cmath>

using namespace std;

long long countFibs(int a, int b){


    long long fib_1 = 2;
    long long fib_2 = 1;
    long long fib = fib_1 + fib_2;
    long long count = 0;

    while (fib <= b){
        if (fib >= a){

            count++;
        }
        fib = fib_1 + fib_2;
        fib_2 = fib_1;
        fib_1 = fib;

        //cout<< "Fib-1: " << fib_1 << " Fib-2: " << fib_2 << endl;
        //cout << fib << endl;
    }
    return count;
}

double countFibsWithFn(int n){

    const double root5 = sqrt(5.0);
//    cout<< root5 <<endl;
    const double golden = (1 + root5)/2;
//    cout<< golden <<endl;
    const double ungolden = (1 - root5)/2;
    const double Fn = 1/root5 * (pow(golden, n) );
    cout<<"Fn("<<n<<")  =" << Fn <<endl;
    const double logFn = log(1/root5) + n * log(golden);
    cout <<  pow(10, logFn) <<endl;



    return (Fn);
}
int main() {

    int a, b;
    cin >>a >>b;

    while (a!=b!=0){
        cout<< (countFibsWithFn(b) - countFibsWithFn(a));
        cin >> a>> b;
    }
    return (0);
}

