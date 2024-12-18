// 1475. Final Prices With a Special Discount in a Shop

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices){

        vector<int> ans;

        for (int i = 0; i < prices.size(); i++){

            bool flag = false;

            for (int j = i + 1; j < prices.size(); j++){

                