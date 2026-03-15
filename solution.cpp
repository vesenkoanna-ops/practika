#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

        int weights[1001] = { 0 };

        for (int i = 0; i < items1.size(); i++) {
            int val = items1[i][0];
            int w = items1[i][1];
            weights[val] += w;
        }

        for (int i = 0; i < items2.size(); i++) {
            int val = items2[i][0];
            int w = items2[i][1];
            weights[val] += w;
        }

        vector<vector<int>> result;
        for (int v = 0; v <= 1000; v++) {
            if (weights[v] > 0) {
                result.push_back({ v, weights[v] });
            }
        }

        return result;
    }
};