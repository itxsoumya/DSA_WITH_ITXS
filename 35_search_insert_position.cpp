#include<iostream>
#include<vector>

using namespace std;

void searchInsert(vector<int> arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = (s+e)/2;

    while (s<=e)
    {
        if (target<=arr[mid] && target>arr[mid-1])
        {
            cout<<mid<<endl;
            break;
        }else if (target>arr[mid])
        {
            s=mid+1;
        }else{
            e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    
}

int main(){
    vector<int> arr = {1,3,5,6};
    searchInsert(arr,2);
}