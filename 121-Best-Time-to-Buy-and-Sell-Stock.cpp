class Solution {
public:
    int maxProfit(vector<int>& price) {
    vector<int>bestbuy(100000);
    bestbuy[0] = INT_MAX;
    for(int i =1;i<price.size();i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
    }
    vector<int> profit(100000);
    for(int i=0;i<price.size();i++){
        profit[i]=price[i]-bestbuy[i];
    }
    int max=profit[0];
    for(int i=1;i<price.size();i++){
        if(profit[i]>max){
            max=profit[i];
        }
    }
    if(max<0) {
        return 0 ; 
    }
    else{
        return max;

    }
}
};