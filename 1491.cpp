#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        ios_base::sync_with_stdio(false);
        sort(salary.begin(),salary.end());
        double sum = 0;
        int count=0;
        for(int i=1;i+1<salary.size();i++){
            sum+=salary[i];count++;
        }
        double res = sum/double(count);

        return res;
    }
};