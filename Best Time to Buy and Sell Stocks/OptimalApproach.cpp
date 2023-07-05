#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minsofar=prices[0];
    int maximumProfit=0;
    int profit;
    for(int i=1 ; i<prices.size() ; i++)
    {
        profit=prices[i]-minsofar;
        maximumProfit=max(profit,maximumProfit);
        minsofar=min(prices[i],minsofar);
    }
    return maximumProfit;
}