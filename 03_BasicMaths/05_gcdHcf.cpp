#include <bits/stdc++.h>
using namespace std;

int main()
{

    // GCD - Greatest Common Divisor
    // HCF - Highest Common Factor

    // Method 1 : Brute Force Method
    int n, m, gcd = 1;
    cin >> n >> m;

    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The gcd of " << n << " and " << m << " is " << gcd << endl;
    // Complexity is O(min(n,m))






    // Method 2 : Euclidean Algorithm
    // gcd(a,b) -- where a > b == gcd(a - b, b);     -> we go on doing this until a - b == 0 and other is zero

    // A better way is, gcd(a,b) -- where a > b == gcd(a % b, b);
    // Time Complexity - O(log phi min(a,b))

    int a = n, b = m;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << "The gcd is " << b;
    else
        cout << "The gcd is " << a;

    return 0;
}