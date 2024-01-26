#include <iostream>
#include <vector>

using namespace std;

int search(vector <int> nums,int target) {
    int n=nums.size();
    
    int low=0;
    int high=n-1;

    while(low <=high) {
        int mid=low+(high-low)/2;
        if(nums[mid]==target) {
            return mid;
            break;
        }
        else if(nums[mid]>target){ 
            low=mid+1;
        }
        else high=mid-1;
    }

}

int main() {

    vector <int> arr={9,7,6,4,3,2};
    int x=3;

    cout << search(arr,x);

    return 0;
}