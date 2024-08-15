//Timus 1086//>>>>CRYPTOGRAPHY>>>>>HAPPY CODING GUYS

// #include <bits/stdc++.h>
// using namespace std;

// #define MAX_SIZE 1000005

// vector<int> primes;

// void Sieveoferatosthenes() {
//     vector<bool> is_prime(MAX_SIZE, true);
//     is_prime[0] = is_prime[1] = false;

//     for (int i = 2; i * i < MAX_SIZE; i++) {
//         if (is_prime[i]) {
//             for (int j = i * i; j < MAX_SIZE; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (int i = 2; i < MAX_SIZE; i++) {
//         if (is_prime[i]) {
//             primes.push_back(i);
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     Sieveoferatosthenes();

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         // Output the n-th prime
//         cout << primes[n - 1] << endl;
//     }

//     return 0;
// }
//In timus it does not accept #include <bits/stdc++.h> .We have to manually implement it >>
#include <iostream>  
#include <vector>     
#include <algorithm>   
#include <cmath>       
#include <limits> 
using namespace std;

#define MAX_SIZE 1000005

vector<int> primes;

void Sieveoferatosthenes() {
    vector<bool> is_prime(MAX_SIZE, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < MAX_SIZE; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_SIZE; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAX_SIZE; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute all primes up to MAX_SIZE
    Sieveoferatosthenes();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Output the n-th prime
        cout << primes[n - 1] << endl;
    }

    return 0;
}