// Code chef link https://www.codechef.com/SNCKEL17/problems/PLUSMUL


//SnackDown 2017 Online Elimination Round  » Add or Multiply

/*Problem Statement:

Hussain was feeling very bored in his physics class. Just hearing theorems and formulas about mechanics and electronics makes him utterly sick.

He was very bored so he just started writing random numbers separated by spaces on the pages of his physics book. For example, he wrote the sequence 1 2 3 four times. Each one with different sequence of arithmetic operations between numbers, i.e. he wrote { (1+2+3) , (1+2*3) , (1*2+3) , (1*2*3) } .

He wondered if he wrote a sequence of N positive integers, separated by question marks ?. Each question mark may stand for a plus sign + or a multiplication sign *.

Hussain knows that there are possible 2^(n-1) different expressions. He wondered if he wrote each expression and computed their values and summed up all the values. With what value he will end up with? Since answer may be huge, output it modulo 10^9+7

Input
First line of the input contains a single integer T , denotes the number of testcases. The description of T test cases follow.
The first line of each testcase contains an integer N denoting how many numbers in the current expression. You may assume that all numbers in the current expression are separated by question marks, and each question mark stands for a plus sign or a multiplication sign.
The second line of each testcase contains N space separated integers, denoting integers in Hussain's expression.
Output
For each testcase, output a single line containing the sum of results of all possible 2^(n-1) different expressions considering that each question mark stands for a plus or a multiplication sign.

Constraints
1 ≤ T ≤ 500
1 ≤ n ≤ 100000
All numbers forming expressions are positive numbers less than 109
The sum of n over all test cases won't exceed 106
Example
Input:
2
3
1 2 4
4
1 1 1 1

Output:
30
20
Explanation
Example case 1. There can be following four expressions.

1 + 2 + 4 = 7
1 + 2 * 4 = 9
1 * 2 + 4 = 6
1 * 2 * 4 = 8
Total sum of results = 30

*/

// C++ Solution:
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define modinv2 500000004

#define div2mod(n) ((n * modinv2)%mod)
using namespace std;

ll power(ll base, ll exp)
{
    ll r = 1;
    for(ll i = 0; i < exp; i++)
        r = (r*base)%mod;
    // cout << endl << base << '^' << exp << '=' << r << endl;
    return r;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> A(n,0);

        for(ll i=0; i<n; i++)
            cin>>A[i];
        if(n==1)
        {
            cout << A[0] << endl;
            continue;
        }
        ll S = 0, s = 0, coeff=0;
        ll coeff1 = power(2, n-2);
        ll coeff2 = power(2, n-3);
        for(ll i=0; i<n; i++)
        {
            if(i==0 || i==n-1)
                coeff = coeff1;
            else
                coeff = coeff2;

            if(i==n-1)
                s = (A[i] * ((coeff + s)%mod)) % mod;
            else
                s = (A[i] * ((coeff + div2mod(s))%mod)) % mod;
            S = (S+s)%mod;
        }
        cout<< S <<endl;
    }
    return 0;
}
