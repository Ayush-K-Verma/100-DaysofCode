/*
Find the Union - brute force
*/


#include<bits/stdc++.h>
using namespace std;

int* find_union(int arr1[], int arr2[], int size_of_arr1, int size_of_arr2, int &union_size)
{
    set<int> st;

    //adding first array
    for (int i = 0; i < size_of_arr1; i++)
    {
        st.insert(arr1[i]);
    }
    
    //adding second array
    for (int i = 0; i < size_of_arr2; i++)
    {
        st.insert(arr2[i]);
    }

    // Create a dynamic array
    union_size = st.size();
    int* u = new int[union_size];
    int i=0;

    for(auto it:st)
    {
        u[i++] = it;
    }

    return u;
}

void print_Array(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[]={1,1,2,3,4,4,5}, size_of_arr1=7;
    int arr2[]={2,2,3,4,4,5,6,6}, size_of_arr2=8;

    int union_size;
    int* un = find_union(arr1, arr2, size_of_arr1, size_of_arr2, union_size);
    cout << "The union is: ";
    print_Array(un, union_size);

    // Free the dynamically allocated memory
    delete[] un;

    return 0;
}

/*
MISTAKES DONE:
1. Returning a local array: The array u is declared within the function find_union and is returned at the end of the function. This is problematic because u is a local variable, and returning its address results in undefined behavior since the memory is no longer valid once the function exits. CORRECTED BY Using dynamic memory allocation for the union array.
2. Incorrect size calculation in print_Array function: The sizeof operator used in print_Array does not work as intended for array pointers passed to a function. It will not give the correct size of the array. The size should be passed as an additional parameter to the function. CORRECTED BY Passing the size of the union array to the print_Array function.

NOTE: All the above points were known already but I was not careful.
*/