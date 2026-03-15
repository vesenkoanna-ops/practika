#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> weightMap;

        for (const auto& item : items1) {
            int value = item[0];
            int weight = item[1];
            weightMap[value] += weight;
        }

        for (const auto& item : items2) {
            int value = item[0];
            int weight = item[1];
            weightMap[value] += weight;
        }

        vector<vector<int>> result;
        for (auto const& [value, totalWeight] : weightMap) {
            result.push_back({ value, totalWeight });
        }

        return result;
    }
};