#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        set<double>s;
        set<int>m;
        for(int i=0;i+1<n;i++){
            vector<int>v1 = coordinates[i];
            vector<int>v2 = coordinates[i+1];
            double a = v1[0];double b=v1[1];
            double c = v2[0];double d=v2[1];
            if(a==c){
                s.insert(double(a));
                continue;
            }
            
            else{
                double res = (d-b)/(c-a);
                s.insert(res);
            }
        }
            

        

        if(s.size()==1) return true;

        return false;
    }
};