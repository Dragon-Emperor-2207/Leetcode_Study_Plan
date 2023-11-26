#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        int n = mat.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            vector<int>v = mat[i];
            if(i!=v.size()-i-1){
                sum+=v[i];
                sum+=v[v.size()-i-1];
            }
            else{
                sum+=v[i];
            }
            
        }
        return sum;
    }
};