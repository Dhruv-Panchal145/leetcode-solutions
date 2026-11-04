class StockSpanner {
public: 
 stack<pair<int,int>> st; // this is the pair of {price,span}
    StockSpanner() {
        
    }

    
    int next(int price) {
            int span = 1; // previous values are nothing at the index 0 then curretly span value itself is 1 
            
      while(!st.empty() && st.top().first <= price){
         span = span + st.top().second;
         st.pop();
      }
      st.push({price,span});

      return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */