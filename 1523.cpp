class Solution {
public:
    int countOdds(int low, int high) {
        ios_base::sync_with_stdio(false);
        int count = 0 ;
        while(low<=high){
            if(low&1){
                low+=2;
                count++;
            }
            else{
                low+=1;
            }
        }
        return count;
    }
};