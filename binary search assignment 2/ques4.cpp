#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> nums={2,5,6,0,0,1,2};
    int n=nums.size();

    int target=0;

    bool flag=false;

    int low=0;
    int high=n-1;

    while(low<=high) {
        int mid=low+(high-low)/2;
        if(nums[mid]==target) flag=true;
        if(nums[low]==nums[mid] && nums[high]==nums[mid]) {
            high--;
            low++;
        }
        else if(nums[mid]<=nums[high]) {
            if(target>=nums[mid] && target<=nums[high]) {
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        else if(nums[low]<=nums[mid]) {
            if(target>=nums[low] && target<=nums[mid]) {
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
    }

    cout << flag;


    return 0;
}