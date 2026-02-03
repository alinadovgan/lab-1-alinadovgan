// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);

/*int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (isPrime(a)) {
        cout << a << " is a prime number.";
    }
    else {
        cout << a << " is not a prime number. Closest prime number is: " << closestPrime(a) << ".\n";
    }

    if (isPrime(b)) {
        cout << b << " is a prime number.";
    }
    else {
        cout << b << " is not a prme number. Closest prime number is: " << closestPrime(b) << ".\n";
    }
    return 0;
}
    */

bool isPrime(int x) {
    if(x<=1) 
    return false;

    for (int i = 2; i * i <= x; i++) {
        if (x%i == 0)
        return false;
    }
    return true;
}

int closestPrime(int x) {
    if (isPrime(x)) 
    return x;

    int next = x+1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}