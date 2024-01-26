#include <iostream>
#include <vector>

using namespace std;

int main()  {

    vector <int> arr={1,2,3,4,6,7,8,9};

    int target=3;

    int idx=-1;
    
    int low=0;
    int high=1;

    while(low <=high) {
        if(target>=low && target<=high) {
            break;
        }
        else if(target>high) {
            low=high;
            high*=2;
        }
    }

    while(low<=high) {
        int mid=low+(high-low)/2;
        if(arr[mid]==target) {
            idx=mid;
            break;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }

    cout << idx;

    return 0;
}