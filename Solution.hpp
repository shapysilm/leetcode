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
    //����֮��
    vector<vector<int>> threeSum(vector<int>& nums) const;
    //�绰�������ĸ���
    vector<string> letterCombinations(string digits);
    //����֮��
    vector<vector<int>> fourSum(vector<int>& nums, int target);
    //��������
    vector<string> generateParenthesis(int n);
    //�������е��ʵ��Ӵ�
    vector<int> findSubstring(string s, vector<string>& words);
    //�����������в���Ԫ�صĵ�һ�������һ��λ��
    vector<int> searchRange(vector<int>& nums, int target);
    //��Ч������
    bool isValidSudoku(vector<vector<char>>& board);
    //������
    void solveSudoku(vector<vector<char>>& board);
    //�������
    string countAndSay(int n);
    //�������
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
    //�������2
    vector<vector<int>> combinationSum2(vector<int> candidates, int target);
    //ȱʧ�ĵ�һ������
    int firstMissingPositive(vector<int>& nums);
    //����ˮ
    //int trap(vector<int>& height);
    int trap(int* height, int heightSize);
    //�ַ������
    string multiply(string num1, string num2);
    //ͨ���ƥ��
    bool isMatch(string s, string p);
    //��Ծ��Ϸ
    int jump(vector<int> nums);
    //ȫ��
    vector<vector<int>> permute(vector<int>& nums);
    //��תͼ��
    void rotate(vector<vector<int>>& matrix);
    //��ĸ��λ��ͬ��
    vector<vector<string>> groupAnagrams(vector<string>& strs);
    //pow(x,n)
    double myPow(double x, int n);
    //n�ʺ�
    vector<vector<string>> solveNQueens(int n);
    //��������
    int maxSubArray(vector<int> nums);
    //��������
    vector<int> spiralOrder(vector<vector<int>>& matrix);
    //��Ծ��Ϸ
    bool canJump(vector<int>& nums);
    //�ϲ�����
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    //��������
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
    //��������2
    vector<vector<int>> generateMatrix(int n);
    //��������
    string getPermutation(int n, int k);
    //��ͬ·��
    int uniquePaths(int m, int n);
    //��ͬ·��2
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
    //���·��
    int minPathSum(vector<vector<int>>& grid);
    //��Ч����
    bool isNumber(string s);
    //���������
    string addBinary(string a, string b);
    //�����Ű�
    vector<string> fullJustify(vector<string>& words, int maxWidth);
    //��¥��
    int climbStairs(int n);
    //��·��
    string simplifyPath(string path);
    //��С�༭����
    int minDistance(string word1, string word2);
    //������0
    void setZeroes(vector<vector<int>>& matrix);
    //��С�����Ӵ�
    string minWindow(string s, string t);
    //���
    vector<vector<int>> combine(int n, int k);
    //�Ӽ�
    vector<vector<int>> subsets(vector<int>& nums);
    //������
    int largestRectangleArea(vector<int>& heights);
    //���������
    int maximalRectangle(vector<vector<char>>& matrix);
    //�����ַ���
    bool isScramble(string s1, string s2);
    //�����ַ���
    bool isInterleave(string s1, string s2, string s3);
    //���������
    int longestConsecutive(vector<int>& nums);
    //ȸ��
    bool isresult(int i, vector<int>nums);
    //���
    vector<int> findBuilding(vector<int>& heights);
    //��kС�Ӵ�
    string minkson(string s, int k);
    //�����������
    int lengthOfLIS(vector<int>& nums);
};