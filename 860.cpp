#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        ios_base::sync_with_stdio(false);
        int n = bills.size();
        if(bills[0]!=5){
            return false;
        }
        int five=1,ten=0,twenty=0;
        for(int i=1;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                ten++;
                five--;
            }
            else{
                twenty++;
                if(ten>=1){
                    ten--;
                    five--;
                }
                else{
                    five-=3;
                }
            }

            if(five<0 || ten<0){
                return false;
            }
            
        }
        return true;
    }
};