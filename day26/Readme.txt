1. First and Last Position of an Element In Sorted Array
   https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTabValue=PROBLEM
Method 1 - Brute force linear search
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start=-1,end=-1,count=0;
    pair<int, int> ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count++;
            if(count==1)
            {
                start = i;
            }
            end = i;
        }
    }
    ans.first=start;
    ans.second=end;
    return ans;
}

Method 2 - Better Binary search

int firstOccurence(vector<int>& arr, int n, int k)
{
    int ans=-1,start=0,end=n-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            end = mid-1;
        }

        else if(arr[mid]>k)
        {
            end = mid-1;
        }
        else if(arr[mid]<k)
        {
            start = mid+1;
        }
    }
    return ans;
}

int lastOccurence(vector<int>& arr, int n, int k)
{
    int ans=-1,start=0,end=n-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            start = mid+1;
        }

        else if(arr[mid]>k)
        {
            end = mid-1;
        }
        else if(arr[mid]<k)
        {
            start = mid+1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> ans;
    ans.first = firstOccurence(arr, n, k);
    ans.second = lastOccurence(arr, n, k);
    return ans;
}

2. Peak Index in a Mountain Array
    https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        while(start<end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid]<arr[mid+1])
                start = mid+1;
            else
                end=mid;
        }
        return start;
    }
};