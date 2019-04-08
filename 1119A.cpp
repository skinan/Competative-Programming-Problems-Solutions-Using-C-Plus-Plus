//1119A -  Ilya and a Colorful Walk
//Codeforces

#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
   
    int x;
    int i, j, n;
    
    scanf("%d", &x);
    
    vector<int> arr(x);


    for(i  = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
        
    }

    n = x - 1;
    j = n;
    while(arr[0] == arr[n - j] && arr[0] == arr[j] )
    {
        j = j - 1;
        
    }
    printf("%d", j);

   
}
