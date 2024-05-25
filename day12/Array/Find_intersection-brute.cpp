/*
Find the Union - brute force
*/


#include<bits/stdc++.h>
using namespace std;

vector<int> find_intersection(int arr1[], int arr2[], int size_of_arr1, int size_of_arr2)
{
    vector<int> ans;
    int visited[size_of_arr2] = {0};
    for (int i = 0; i < size_of_arr1; i++)
    {
        for (int j = 0; j < size_of_arr2; j++)
        {
            if(arr1[i]==arr2[j] && visited[j]!=1)
            {
                visited[j]=1;
                ans.push_back(arr2[j]);
                break;
            }
            
            if(arr1[i]<arr2[j])
                break;
        }
    }
    return ans;
}


int main()
{
    int arr1[]={1,1,2,3,4,4,5}, size_of_arr1=7;
    int arr2[]={2,2,3,4,4,5,6,6}, size_of_arr2=8;

    vector<int> ans = find_intersection(arr1, arr2, size_of_arr1, size_of_arr2);
    cout << "The union is: ";
    for (auto & it: ans)
    {
        cout << it << " ";
    }

    return 0;
}

/*
Mistakes: the code fails when there is a number repeated more than one in both the array.
*/