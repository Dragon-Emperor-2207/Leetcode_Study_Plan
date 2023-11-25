#include<bits/stdc++.h>
using namespace std;
class Solution {

    private:
    int sum(vector<int>arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        ios_base::sync_with_stdio(false);
        int m = accounts.size();
        int maxi=INT_MIN;
        for(int i=0;i<m;i++){
            vector<int>v = accounts[i];
            int temp=sum(v);
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};