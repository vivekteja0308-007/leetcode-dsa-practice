class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i: stones)
            {
                pq.push(i);
            }
        while(pq.size()>1)
        {
            int max=pq.top();
            pq.pop();
            int secMax=pq.top();
            pq.pop();
            if(max!=secMax)
            {
                pq.push(max-secMax);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};