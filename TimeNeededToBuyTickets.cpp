class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ctr = 0, idx = 0;
        while(tickets[k] > 0){
            if(tickets[idx] > 0){
                tickets[idx]--;
                ctr++;
            }

            idx = (idx + 1) % tickets.size();
        }
        return ctr;
    }
};
