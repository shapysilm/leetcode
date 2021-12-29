#include "Solution.hpp"
#define MOD (int)(1e9+7)

//int Solution::a = 0;

int main()
{
	/*Solution sol(20);
	Solution sol1;
	Solution sol2(50);*/
	//三数之和
	/*vector <int> nums = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> threesum;
	threesum = sol.threeSum(nums);
	for (vector<vector<int>>::iterator i = threesum.begin(); i != threesum.end(); i++)
	{
		cout << (*i)[0] << " " << (*i)[1] << " " << (*i)[2] << " " << endl;
	}*/

	//电话号码的字母组合
	/*vector<string> vec = sol.letterCombinations("23");
	for (vector<string>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		cout << *i << endl;
	}*/

	//四数之和
	/*vector <int> nums = { 0,0,0 };
	vector<vector<int>> foursum;
	foursum = sol.fourSum(nums,0);
	for (vector<vector<int>>::iterator i = foursum.begin(); i != foursum.end(); i++)
	{
		cout << (*i)[0] << " " << (*i)[1] << " " << (*i)[2] << " " << (*i)[3] << " "  << endl;
	}*/

	//括号生成
	/*vector<string> result = sol.generateParenthesis(4);
	for (vector<string>::iterator i = result.begin(); i != result.end(); ++i)
	{
		cout << *i << endl;
	}*/


	//串联所有单词的子串
	/*vector<string> words = {"word","good","best","word"};
	vector<int> result=sol.findSubstring("wordgoodgoodgoodbestword",words );
	for (vector<int>::iterator i = result.begin(); i != result.end(); ++i)
	{
		cout << *i << endl;
	}*/


	//在排序数组中查找元素的第一个和最后一个位置
	/*vector<int> nums = { 5,7,7,8,8,10 };
	vector<int> result = sol.searchRange(nums, 6);
	cout << result[0] <<endl<< result[1];*/

	//vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
	//vector<vector<char>> board = {{'5', '3', '4', '6', '7', '8', '9', '1', '2'}, {'6', '7', '2', '1', '9', '5', '3', '4', '8'}, {'1', '9', '8', '3', '4', '2', '5', '6', '7'}, {'8', '5', '9', '7', '6', '1', '4', '2', '3'}, {'4', '2', '6', '8', '5', '3', '7', '9', '1'}, {'7', '1', '3', '9', '2', '4', '8', '5', '6'}, {'9', '6', '1', '5', '3', '7', '2', '8', '4'}, {'2', '8', '7', '4', '1', '9', '6', '3', '5'}, {'3', '4', '5', '2', '8', '6', '1', '7', '9'}};
	//cout << sol.isValidSudoku(board);

	//解数独
	/*sol.solveSudoku(board);
	for (int i = 0; i < 9; ++i)
	{
		cout << endl;
		for (int j = 0; j < 9; ++j)
		{
			cout << board[i][j] << " ";
		}
	}*/

	//外观数列
	//cout << sol.countAndSay(4);

	//组合总数
	/*vector<int> candidatas({ 10,1,2,7,6,1,5 });
	vector<vector<int>> result = sol.combinationSum2(candidatas, 8);
	for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << " ";
		}
	}
	*/

	//缺失的第一个正数
	//vector<int> result({ 1, 2, 0 });
	//vector<int> result({ 3,4,-1,1 });
	//vector<int> result({ 7,8,9,11,12 });
	//vector<int> result({ 1 });
	//vector<int> result({ 1,2,6,3,5,4 });
	/*vector<int> result({ 2,1 });
	cout << sol.firstMissingPositive(result);*/

	//接雨水
	//vector<int> height({ 0,0,1, 2, 0 });
	//int height[12] = { 0,1,0,2,1,0,1,3,2,1,2,1 };
	/*int height[12] = { 4,2,0,3,2,5 };
	cout<<sol.trap(height,12);*/
	//copy(height.begin(), height.end(), ostream_iterator(cout, ","));
	//for_each(height.begin(), height.end(), [](const int& val) {cout << val << endl; });

	//字符串相乘
	//cout << sol.multiply("123", "456");

	//通配符匹配
	//cout << sol.isMatch("aa","*");
	//cout << sol.isMatch("cb","?a");
	//cout << sol.isMatch("adceb","*a*b");
	//cout << sol.isMatch("acdcb", "a*c?b");
	//cout << sol.isMatch("ab", "*?*?*");
	//cout << sol.isMatch("abcabczzzde", "*abc???de*");

	//跳跃游戏
	//cout << sol.jump({5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5});
	//cout << sol.jump({2,3,0,1,4});
	//cout << sol.jump({2,1,1,1,1});

	//全排
	//vector<int> candidatas({ 10,1,2,7,6,1,5 });
	/*vector<int> candidatas({ 1,3,2});
	vector<vector<int>> result = sol.permute(candidatas);
	for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << " ";
		}
	}*/

	//旋转图像
	/*vector<vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
	sol.rotate(matrix);
	for (vector<vector<int>>::iterator i = matrix.begin(); i != matrix.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << '\t';
		}
	}*/

	//字母异位词同组
	/*vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	vector<vector<string>> result = sol.groupAnagrams(strs);
	for (vector<vector<string>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<string>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << " ";
		}
	}*/

	//pow(x,n)
	//cout << sol.myPow(2, 3);

	//n皇后
	/*vector<vector<string>> result = sol.solveNQueens(1);
	for (vector<vector<string>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<string>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << endl;
		}
	}*/

	//最大子序和
	//cout<<sol.maxSubArray({ -2,1,-3,4,-1,2,1,-5,4 });

	//螺旋矩阵
	/*vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	vector<int> result = sol.spiralOrder(matrix);
	for (auto i = result.begin(); i != result.end(); ++i)
	{
		cout << *i << " ";
	}*/

	//跳跃游戏
	//vector<int> nums = { 2,3,1,1,4 };
	//vector<int> nums = { 3,2,1,0,4 };
	/*vector<int> nums = {2,4,4,3,1,1,2,1,4,1,4,1,4,3,3,3,3,4,1,4,4,4,3,3,4,3,2,4,4,2,4,4,1,4,4,2,1,4,2,4,4,4,1,3,3,2,1,3,3,2,3,3,2,4,2,4,4,4,4,1,4,3,4,1,1,2,1,1,4,3,1,1,1,2,3,4,3,2,1,2,1,3,2,1,1,4,2,3,1,4,1,2,1,4,3,3,1,2,3,3,1,1,4,3,3,3,1,2,1,3,4,1,1,3,2,3,3,4,4,3,3,2,1,2,2,3,1,4,1,3,2,4,3,3,1,3,4,3,1,4,4,3,4,1,4,1,1,2,3,3,2,2,2,1,1,3,3,4,1,2,2,3,3,2,1,3,1,1,4,4,2,1,4,1,2,1,2,2,3,4,2,4,1,2,4,4,2,4,4,2,3,3,2,1,3,1,2,1,3,3,2,1,2,2,4,3,2,2,3,3,2,2,3,3,4,3,3,1,2,1,3,1,4,3,3,1,3,3,3,2,3,4,3,4,1,2,1,1,4,2,3,3,1,4,3,1,1,4,3,4,3,3,2,2,3,2,2,2,4,2,0,0,0,0};
	cout << sol.canJump(nums);*/

	//合并区间
	//vector<vector<int>> intervals = { {2, 6},{1, 3},{8, 10},{15, 18} };
	/*vector<vector<int>> intervals = { {4, 5},{1, 4}};
	vector<vector<int>> result=sol.merge(intervals);
	for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << " ";
		}
	}*/


	//插入区间
	/*vector<vector<int>> intervals = { {1,5} };
	vector<int> newintervals = { 2,7 };
	vector<vector<int>> result = sol.insert(intervals, newintervals);
	for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j << " ";
		}
	}*/


	//螺旋矩阵2
	/*vector<vector<int>> result = sol.generateMatrix(4);
	for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	{
		cout << endl;
		for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
		{
			cout << *j <<'\t';
		}
	}*/

	//排列序列
	/*string result = sol.getPermutation(3, 4);
	cout << result;*/

	//路径总数2
	//vector<vector<int>> obstacleGrid = { {0,0,0},{0,1,0},{0,0,0} };
	////vector<vector<int>> obstacleGrid = { {0,0,0},{0,1,0},{0,0,0} };
	//cout << sol.uniquePathsWithObstacles(obstacleGrid);

	//最短路径
	//vector<vector<int>> Grid = { {1, 3, 1},{1, 5, 1},{4, 2, 1} };
	//cout << sol.minPathSum(Grid);

	//有效数字
	//cout << sol.isNumber("1e");

	//二进制求和
	//cout << sol.addBinary("1011010100100011110000101110101101000010010110001001000011011","11001011101011001000100100111111011110001000100011101111100101");

	//单词排版
	/*vector<string> words = { "This", "is", "an", "example", "of", "text", "justification." };
	vector<string> result = sol.fullJustify(words, 16);
	for (auto i = result.begin(); i != result.end(); ++i) cout << *i << endl;*/

	//cout << sol.climbStairs(1);

	//简化路径
	//cout << sol.simplifyPath("/home/");
	//cout << sol.simplifyPath("/../");
	//cout << sol.simplifyPath("/home//foo/");
	//cout << sol.simplifyPath("/a//b////c/d//././/..");

	//编辑距离
	//cout << sol.minDistance("horse", "");
	//cout << sol.minDistance("intention", "execution");
	//cout << sol.minDistance("plasma", "altruism");

	//矩阵置0
	//vector<vector<int>> result = { {0, 1, 2, 0},{3, 4, 5, 2 }, { 1, 3, 1, 5 }};
	//sol.setZeroes(result);
	//for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	//{
	//	cout << endl;
	//	for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
	//	{
	//		cout << *j << '\t';
	//	}
	//}

	//最小覆盖子串
	//cout << sol.minWindow("ADOBECODEBANC", "ABC")<<endl;
	//cout << sol.minWindow("a", "aa")<<endl;

	//组合
	//vector<vector<int>> result = sol.combine(4, 3);
	//for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	//{
	//	cout << endl;
	//	for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
	//	{
	//		cout << *j << '\t';
	//	}
	//}

	//子集
	//vector<int> nums = { 1,2,3 };
	//vector<vector<int>> result = sol.subsets(nums);
	//for (vector<vector<int>>::iterator i = result.begin(); i != result.end(); i++)
	//{
	//	cout << endl;
	//	for (vector<int>::iterator j = (*i).begin(); j != (*i).end(); j++)
	//	{
	//		cout << *j << '\t';
	//	}
	//}

	//最大矩阵面积
	//vector<vector<char>> result = { {'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'} };
	//cout << sol.maximalRectangle(result);

	//扰乱字符串
	//cout << sol.isScramble("great", "rgeat");

	//交错字符串
	//cout << sol.isInterleave("aabcc", "dbbca", "aadbbcbcac");

	//最长连续序列
	//vector<int> nums = { 100,4,200,1,3,2 };
	//cout << sol.longestConsecutive(nums);

	//雀魂
	//int flag=0;
	//vector<int> nums(13);
	//for (int i = 0; i < 13; ++i)cin >> nums[i];
	//for (int i = 1; i <= 9; ++i)
	//{
	//	if (sol.isresult(i,nums))
	//	{
	//		flag = 1;
	//		cout << i << " ";
	//	}
	//}
	//if (flag == 0) cout << 0;

	//逛街
	//vector<int> heights = { 84712,79992,63888,91958,9767,29297,82337,6189,9874,37228,59319,95862,19239,18782,14589,74166,50455,83034,13226,31881,444,56143,28848,78980,23208,21682,59621,73398,15547,80619,82003,35380,18053,10432,17141,10584,40412,41503,77712,81751,88210,94887,4245,33767,15636,18152,8088,46529,49553,20422,41407,32212,39118,75176,23429,14402,84928,6669,48376,80607,77297,7492,57699,99974,54609,16380,54683,70990,50846,44254,55447,67201,18219,63540,79398,72081,99886,64247,1069,65058,28542,71977,79,54703,59739,35452,65111,28680,76777,45444,17097,80713,12957,65813,76038,29191,72418,35474,73640,26674 };
	//vector<int> heights = { 5,3,8,3,2,5 };
	//vector<int> result = sol.findBuilding(heights);
	//for (auto i = result.begin(); i != result.end(); ++i) cout << *i << " ";

	//第k小子串
	//string s;
	//int k;
	//cin >> s >> k;
	//cout << sol.minkson(s, k);

	//
	//int a = 3;
	//shared_ptr<int> p3 = make_shared<int>(a);
	//shared_ptr<int> p4(p3);
	//p3 = p4;
	//cout << p4.operator*()<<"\t"<<p3.operator bool()<<"\n"<<p3.use_count()<<"\t" <<p3.unique()<<"\n";
	//p3.reset();
	//cout << p4.use_count();
	//unique_ptr<string> p4 = p3;
//#ifdef __cplusplus
//	cout << "c++";
//#else cout<<"c";
//#endif // __cplusplus


//sol.prin();
//cout << Solution::a << endl;




	return 0;
}