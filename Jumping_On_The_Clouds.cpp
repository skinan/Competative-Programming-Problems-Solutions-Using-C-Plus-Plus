// HackerRank.com
// Practice > Interview Preparation Kit > Warm-up Challenges > Jumping On Clouds

#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(int n);

int main() {

    int n;
    cin >> n;  // Length of Array.
    int result;
    result = jumpingOnClouds(n);

    cout << result << endl;
}

int jumpingOnClouds(int n)
{
    vector <int> arr(n);
    int jump = 0;
    int result;
    int i;

    for(i = 0; i < n; i++)
    {
        cin>>arr[i];

    }

    i = 0;
    while(i < n - 1)
    {
        if ( i <= n - 3)
        {
            if (arr[i] == 0 && arr[ i + 2]  == 0)
            {
                jump += 1;
                i = i + 2;
            }
            else
            {
                i = i + 1;
                jump += 1;

            }
        }
        else
        {
            jump += 1;
            i = i + 1;

        }


    }
    result = jump;
    return result;

}
