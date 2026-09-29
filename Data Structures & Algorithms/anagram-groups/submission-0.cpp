class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> anagramGroup;
        for( const string & word : strs){
            string key =word;
            sort(key.begin(), key.end());
            anagramGroup[key].push_back(word);

        }
        vector<vector<string>> result;
        result.reserve(anagramGroup.size());
        for( auto & pair : anagramGroup){
            result.push_back(move(pair.second));
        }
         return result;


    }
};
