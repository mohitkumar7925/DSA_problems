// LC-901
// https://leetcode.com/problems/online-stock-span/
class StockSpanner {
public:
    stack<pair<int,int>> prevHighPrice;
    StockSpanner() {}
    
    int next(int price) {
        int span = 1;
        while(!prevHighPrice.empty() && prevHighPrice.top().first <= price){
            span += prevHighPrice.top().second;
            prevHighPrice.pop();
        }
        prevHighPrice.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */