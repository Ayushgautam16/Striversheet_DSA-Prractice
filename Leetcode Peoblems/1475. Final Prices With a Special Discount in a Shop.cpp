// 1475. Final Prices With a Special Discount in a Shop

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices){

        vector<int> ans;

        for (int i = 0; i < prices.size(); i++){

            bool flag = false;

            for (int j = i + 1; j < prices.size(); j++){

                if (prices[i] >= prices[j]){ //HERE, CHECK THE CONDITION GIVEN IN QUESTION

                    int temp = prices[i] - prices[j];  
                    ans.push_back(temp);
                    flag = true; //MARK THE FLAG TRUE THAT WE GOT THE DISCOUNT
                    break;

                }
            }

            if (!flag){ // IF FLAG IS STILL FALSE THEN INSERT HE VALUR GIVEN IN VECTOR AS NO DISCOUNT WILL BE GIVEN
                ans.push_back(prices[i]);
            }
        }

        return ans;
    }
};