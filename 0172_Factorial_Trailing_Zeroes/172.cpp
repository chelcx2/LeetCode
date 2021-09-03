#include <bits/stdc++.h>
using namespace std;
int T = 0, F = 0;
void two_five_cnt(int i)
{
    // vector<int> ans;
    // ans.clear();
    // int t = 0, f = 0;
    while (i % 2 == 0)
    {
        i /= 2;
        T++;
    }
    while (i % 5 == 0)
    {
        i /= 5;
        F++;
    }
    // ans.push_back(t);
    // ans.push_back(f);
    // return ans;
}

int trailingZeroes(int n)
{
    int num_of_two = 0;
    int num_of_five = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 || i % 5 == 0)
        {
            // vector<int> res = two_five_cnt(i);
            // cout << i << " " << num_of_two << " " << num_of_five << "\n";
            two_five_cnt(i);
            num_of_two += T;
            num_of_five += F;
            T = 0;
            F = 0;
        }
    }
    return num_of_two < num_of_five ? num_of_two : num_of_five;
}
int main()
{
    cout << trailingZeroes(0) << " " << trailingZeroes(3) << " " << trailingZeroes(5) << " " << trailingZeroes(10) << " " << trailingZeroes(30);
    return 0;
}