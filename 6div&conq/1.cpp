#include<iostream>

#include<vector>

using namespace std;

void merge(vector<int> &arr, int s, int e)

{

    int i=s;

    int m=(s+e)/2;

    int j=m+1;

    vector<int> temp;

    while(i<=m && j<=e)

    {

        if(arr[i]<arr[j])

        {

            temp.push_back(arr[i]);

            i++;

        }

        else

        {

            temp.push_back(arr[j]);

            j++;

        }

    }

    while(i<=m)

    {

        temp.push_back(arr[i++]);

    }

    while(j<=e)

    {

        temp.push_back(arr[j++]);

    }

    int k=0;

    for(int index=s; index<=e; index++)

    {

        arr[index]=temp[k++];

    }

    return;

}

void merge_sort(vector<int> &arr, int s, int e)

{

    //Base case

    if(s>=e)

    {

        return;

    }

    //Recursive case

    int mid=(s+e)/2;

    merge_sort(arr,s,mid);

    merge_sort(arr,mid+1,e);

    return merge(arr,s,e);

}

int main()

{

    vector<int> arr{10,5,2,0,7,6,4};

    int s=0;

    int e=arr.size()-1;

    merge_sort(arr,s,e);

    for(int x:arr)

    {

        cout<<x<<" ";

    }

    cout<<endl;

    return 0;

}