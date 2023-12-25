#include<bits/stdc++.h>
using namespace std;


void read_write()
{
#ifndef ONLINE_JUDGE
    //FOR GETTING INPUT FROM INPUT.TXT
    freopen("input.txt", "r", stdin);
    //for getting output from output.txt
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int digiSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int rem = n % 10;

    return (rem + digiSum(n / 10 ));


}

int main()
{
    read_write();
    int n;
    cin >> n;
    int result = digiSum(n);
    cout << result;
}
