#include <iostream>
#include <vector>


using namespace std;

int main() {

    vector <vector <int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int target = 30;

    int m=matrix[0].size();
    int n=matrix.size();

    int low=0;
    int high=m*n-1;

   bool flag=false;

    while(low<=high) {
        int mid=low+(high-low)/2;
        if(matrix[mid/m][mid%m]==target){ 
            flag=true;
            break;
        }
        else if(matrix[mid/m][mid%m]>target) high=mid-1;
        else low=mid+1;
    }

    cout << flag;


    return 0;
}