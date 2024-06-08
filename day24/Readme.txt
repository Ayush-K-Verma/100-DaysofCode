1. Pair Sum
		https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM
	
Code:
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   int n = arr.size();
   for(int i=0;i<n;i++)
   {
      
      for(int j=i+1;j<n;j++)
      {
         if(arr[i]+arr[j]==s)
           {
               vector<int> pair;
               pair.push_back(min(arr[i], arr[j]));
               pair.push_back(max(arr[i], arr[j]));
               ans.push_back(pair);
            }
      }
   }

   sort(ans.begin(), ans.end());
   return ans;
}