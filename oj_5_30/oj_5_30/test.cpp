//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int arr[20010];
//        for (int i = 0; i < 20010; i++)
//            arr[i] = 0;
//        vector<int>::iterator it = nums.begin();
//        while (it != nums.end())
//        {
//            if (arr[*it + 10000] == 0)
//            {
//                arr[*it + 10000]++;
//                ++it;
//            }
//            else if (arr[*it + 10000] == 1)
//            {
//                it = nums.erase(it);
//            }
//        }
//        return nums.size();
//    }
//};


//https://leetcode.cn/problems/pascals-triangle/description/
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> tmp;
//        tmp.resize(numRows);
//        for (size_t i = 0; i < numRows; ++i)
//        {
//            tmp[i].resize(i + 1, 0);
//            tmp[i][0] = tmp[i][tmp[i].size() - 1] = 1;
//        }
//        for (size_t i = 0; i < tmp.size(); ++i)
//        {
//            for (size_t j = 0; j < tmp[i].size(); ++j)
//            {
//                if (tmp[i][j] == 0)
//                    tmp[i][j] = tmp[i - 1][j] + tmp[i - 1][j - 1];
//            }
//        }
//        return tmp;
//    }
//};