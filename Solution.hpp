#pragma once
#include <bits/stdc++.h>

using namespace std;

class Solution {
    
private:
    
public:
    static int a;
    Solution(int x)
    {
        this->a = x;
    }
    Solution()
    {
        this->a = 10;
    }
    void prin()
    {
        cout << this->a << endl;
    }
    //三数之和
    vector<vector<int>> threeSum(vector<int>& nums) const;
    //电话号码的字母组合
    vector<string> letterCombinations(string digits);
    //四数之和
    vector<vector<int>> fourSum(vector<int>& nums, int target);
    //括号生成
    vector<string> generateParenthesis(int n);
    //串联所有单词的子串
    vector<int> findSubstring(string s, vector<string>& words);
    //在排序数组中查找元素的第一个和最后一个位置
    vector<int> searchRange(vector<int>& nums, int target);
    //有效的数独
    bool isValidSudoku(vector<vector<char>>& board);
    //解数独
    void solveSudoku(vector<vector<char>>& board);
    //外观数列
    string countAndSay(int n);
    //组合总数
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
    //组合总数2
    vector<vector<int>> combinationSum2(vector<int> candidates, int target);
    //缺失的第一个正数
    int firstMissingPositive(vector<int>& nums);
    //接雨水
    //int trap(vector<int>& height);
    int trap(int* height, int heightSize);
    //字符串相乘
    string multiply(string num1, string num2);
    //通配符匹配
    bool isMatch(string s, string p);
    //跳跃游戏
    int jump(vector<int> nums);
    //全排
    vector<vector<int>> permute(vector<int>& nums);
    //旋转图像
    void rotate(vector<vector<int>>& matrix);
    //字母异位词同组
    vector<vector<string>> groupAnagrams(vector<string>& strs);
    //pow(x,n)
    double myPow(double x, int n);
    //n皇后
    vector<vector<string>> solveNQueens(int n);
    //最大子序和
    int maxSubArray(vector<int> nums);
    //螺旋矩阵
    vector<int> spiralOrder(vector<vector<int>>& matrix);
    //跳跃游戏
    bool canJump(vector<int>& nums);
    //合并区间
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    //插入区间
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
    //螺旋矩阵2
    vector<vector<int>> generateMatrix(int n);
    //排列序列
    string getPermutation(int n, int k);
    //不同路径
    int uniquePaths(int m, int n);
    //不同路径2
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
    //最短路径
    int minPathSum(vector<vector<int>>& grid);
    //有效数字
    bool isNumber(string s);
    //二进制求和
    string addBinary(string a, string b);
    //单词排版
    vector<string> fullJustify(vector<string>& words, int maxWidth);
    //爬楼梯
    int climbStairs(int n);
    //简化路径
    string simplifyPath(string path);
    //最小编辑距离
    int minDistance(string word1, string word2);
    //矩阵置0
    void setZeroes(vector<vector<int>>& matrix);
    //最小覆盖子串
    string minWindow(string s, string t);
    //组合
    vector<vector<int>> combine(int n, int k);
    //子集
    vector<vector<int>> subsets(vector<int>& nums);
    //最大面积
    int largestRectangleArea(vector<int>& heights);
    //最大矩阵面积
    int maximalRectangle(vector<vector<char>>& matrix);
    //扰乱字符串
    bool isScramble(string s1, string s2);
    //交错字符串
    bool isInterleave(string s1, string s2, string s3);
    //最长连续序列
    int longestConsecutive(vector<int>& nums);
    //雀魂
    bool isresult(int i, vector<int>nums);
    //逛街
    vector<int> findBuilding(vector<int>& heights);
    //第k小子串
    string minkson(string s, int k);
    //最长递增子序列
    int lengthOfLIS(vector<int>& nums);
};