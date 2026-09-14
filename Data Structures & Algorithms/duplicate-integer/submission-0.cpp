class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> temp;
    for (int num : nums)
    {
        if (temp.count(num)){
            return true;
        }

        temp.insert(num);
    }
    return false;
    }
};