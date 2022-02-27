//find the position of the number which comes only once in an array
//which have all the elements same(except one)(n>=3)(all no.s are positive)
//expected time complexity:- O(n)
//expected auxiliary space:- O(1)
#include <iostream>
using namespace std;
int once(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            if(arr[i]!=arr[i-1]&&res==0)
                res=i+1;
        }
        else
        {
            if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1])
                res=i+1;
            else if(arr[i]!=arr[i-1]&&arr[i]==arr[i+1])
                res=i;
        }
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	cout<<once(arr, n)<<endl;
    }
	return 0;
}
