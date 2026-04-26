#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newNum(m+n);
        int m1 = 0, n1 = 0,k =0;
        while (m1 < m && n1 < n){
            if (nums1[m1]< nums2[n1]){
                newNum[k]=nums1[m1];    
                m1++;
                k++;
            }else if(nums2[n1] < nums1[m1]){
                newNum[k]=nums2[n1];    
                n1++;
                k++;
            }else{
                newNum[k]=nums1[m1];    
                m1++;
                k++;
                newNum[k]=nums2[n1];    
                n1++;
                k++;
            }
        }
        while (m1 < m){
            newNum[k]=nums1[m1];    
            m1++;
            k++;
        }
        while (n1 < n){
            newNum[k]=nums2[n1];
            n1++;
            k++;
        }
        for (int i = 0; i< (m+n); i ++){
            cout << newNum[i] << " " <<endl;
        }
        /*
        solusion en leetcode 
           for (int i = 0; i< (m+n); i ++){
            nums1[i] = newNum[i];
        }
        */

    }
};
int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    
    return 0;
}

