#include "Solution.hpp"

//vector<vector<int>> Solution:: threeSum(vector<int>& nums)
//{
	/*sort(nums.begin(), nums.end());
	vector<vector<int>> result;
	vector<int> temp(3,-1);*/
	//for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
	//{
	//	if (*i > 0) break;
	//	if (i != nums.begin())
	//	{
	//		/*while (i != nums.end())
	//		{
	//			if (*i == *(i - 1))
	//				i++;
	//			else break;
	//		}*/
	//	}
	//	if (i == nums.end())break;
	//	for (vector<int>::iterator j = i + 1; j != nums.end(); j++)
	//	{
	//		if (*i + *j > 0) break;
	//		while (j != i+1&& j != nums.end())
	//		{
	//			if (*j == *(j - 1))
	//				j++;
	//			else break;
	//		}
	//		if (j == nums.end())break;
	//		for (vector<int>::iterator r = j + 1; r != nums.end(); r++)
	//		{
	//			if (*i + *j +*r> 0) break;
	//			while (r != j + 1 &&r != nums.end())
	//			{
	//				if (*r == *(r - 1))
	//					r++;
	//				else break;
	//			}
	//			if (r == nums.end())break;
	//			if (*i + *j + *r == 0)
	//			{
	//				temp.clear();
	//				/*temp[0] = *i;
	//				temp[1] = *j;
	//				temp[2] = *r;*/
	//				result.push_back(temp);
	//				break;
	//			}
	//		}
	//	}
	//		
	//}
//		
//	return result;
//}


vector<vector<int>> Solution::threeSum(vector<int>& nums) const
{
	sort(nums.begin(), nums.end());
	vector<vector<int>> result;
	vector<int> temp(3, -1);
	int fix;
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
	{
		fix = 0 - *i;
		vector<int>::iterator j, r;
		if (nums.empty()) break;
		for (j = nums.begin(), r = nums.end() - 1; j < r;)
		{
			if (j == i) j++;
			else if (r == i) r--;
			else if (*j + *r > fix)
			{
				r--;
				while (r != nums.begin())
				{
					if (*r == *(r + 1))
						r--;
					else break;
				}
			}
			else if (*j + *r < fix)
			{
				j++;
				while (j != nums.end())
				{
					if (*j == *(j - 1))
						j++;
					else break;
				}
			}
			else
			{
				temp[0] = *i;
				temp[1] = *j;
				temp[2] = *r;
				sort(temp.begin(), temp.end());
				result.push_back(temp);
				for (vector<vector<int>>::iterator t = result.begin(); t + 1 != result.end(); t++)
				{
					if ((*t)[0] == temp[0] && (*t)[1] == temp[1] && (*t)[2] == temp[2])
					{
						result.pop_back();
						break;
					}
				}

				j++;
				while (j != nums.end())
				{
					if (*j == *(j - 1))
						j++;
					else break;
				}
				r--;
				while (r != nums.begin())
				{
					if (*r == *(r + 1))
						r--;
					else break;
				}
			}
		}
	}
	return result;
}

vector<string> letter(char c, vector<string> vec)
{
	if (vec.empty()) vec = { "" };
	for (vector<string>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		(*i) += c;
	}
	return vec;
}

vector<string> Solution::letterCombinations(string digits)
{
	vector<string> vec, vec1;
	if (digits.empty()) return vec;
	vector<string> convert = { "2abc","3def","4ghi","5jkl","6mno","7pqrs","8tuv","9wxyz" };
	const char* c = digits.c_str();
	string temp;
	for (vector<string>::iterator i = convert.begin(); i != convert.end(); i++)
	{
		if ((*i)[0] == digits.back()) temp = *i;
	}
	for (int i = 1; i < temp.length(); i++)
	{
		vec1 = letter(temp[i], letterCombinations(digits.substr(0, digits.length() - 1)));
		vec.insert(vec.end(), vec1.begin(), vec1.end());
	}
	return vec;
}

//四数之和暴力版
//vector<vector<int>> Solution::fourSum(vector<int>& nums, int target) {
//	sort(nums.begin(), nums.end());
//	vector<vector<int>> result;
//	vector<int> temp(4, -1);
//	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
//	{
//		if (*i > target) break;
//		if (i != nums.begin())
//		{
//			while (i != nums.end())
//			{
//				if (*i == *(i - 1))
//					i++;
//				else break;
//			}
//		}
//		if (i == nums.end())break;
//		for (vector<int>::iterator j = i + 1; j != nums.end(); j++)
//		{
//			if (*i + *j > target) break;
//			while (j != i + 1 && j != nums.end())
//			{
//				if (*j == *(j - 1))
//					j++;
//				else break;
//			}
//			if (j == nums.end())break;
//			for (vector<int>::iterator r = j + 1; r != nums.end(); r++)
//			{
//				if (*i + *j + *r > target) break;
//				while (r != j + 1 && r != nums.end())
//				{
//					if (*r == *(r - 1))
//						r++;
//					else break;
//				}
//				if (r == nums.end())break;
//				for (vector<int>::iterator t = r + 1; t != nums.end(); t++)
//				{
//					if (*i + *j + *r+*t > target) break;
//					while (t != r + 1 && t != nums.end())
//					{
//						if (*t == *(t - 1))
//							t++;
//						else break;
//					}
//					if (t == nums.end())break;
//					if (*i + *j + *r+*t == target)
//					{
//						/*temp.clear();*/
//						temp[0] = *i;
//						temp[1] = *j;
//						temp[2] = *r;
//						temp[3] = *t;
//						result.push_back(temp);
//						break;
//					}
//				}
//
//				
//			}
//		}
//
//	}
//	return result;
//}

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target)
{
	sort(nums.begin(), nums.end());
	vector<vector<int>> result;
	vector<int> temp(4, -1);
	int fix;
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); ++i)
	{
		if (nums.empty()) break;
		for (vector<int>::iterator t = i + 1; t != nums.end(); ++t)
		{
			fix = target - *i - *t;
			vector<int>::iterator j, r;

			for (j = nums.begin(), r = nums.end() - 1; j < r;)
			{
				if (j == i || j == t) ++j;
				else if (r == i || r == t) --r;
				else if (*j + *r > fix)
				{
					r--;
					while (r != nums.begin())
					{
						if (*r == *(r + 1))
							r--;
						else break;
					}
				}
				else if (*j + *r < fix)
				{
					j++;
					while (j != nums.end())
					{
						if (*j == *(j - 1))
							j++;
						else break;
					}
				}
				else
				{
					temp[0] = *i;
					temp[1] = *j;
					temp[2] = *r;
					temp[3] = *t;
					sort(temp.begin(), temp.end());
					result.push_back(temp);
					for (vector<vector<int>>::iterator t = result.begin(); t + 1 != result.end(); t++)
					{
						if ((*t)[0] == temp[0] && (*t)[1] == temp[1] && (*t)[2] == temp[2] && (*t)[3] == temp[3])
						{
							result.pop_back();
							break;
						}
					}

					j++;
					while (j != nums.end())
					{
						if (*j == *(j - 1))
							j++;
						else break;
					}
					r--;
					while (r != nums.begin())
					{
						if (*r == *(r + 1))
							r--;
						else break;
					}
				}
			}
		}
	}
	return result;
}


//vector<string> Solution::generateParenthesis(int n) {
//	if (n == 1) return { "()" };
//	vector <string> smalsol = generateParenthesis(n - 1);
//	vector <string> result;
//	string temp1,temp2,temp3;
//	for (vector <string>::iterator i = smalsol.begin(); i != smalsol.end(); ++i)
//	{
//		temp1 = "()" + *i;
//		result.push_back(temp1);
//		temp2 = *i + "()";
//		if(temp2!=temp1) result.push_back(temp2);
//		temp3 = "(" + *i + ")";
//		if (temp3 != temp1&&temp3!=temp2)result.push_back(temp3);
//	}
//	sort(result.begin(), result.end());
//	result.erase(unique(result.begin(), result.end()), result.end());
//	
//	return result;
//}



//int limit;
////int out = 0;
////int in = 0;
//struct MyStruct
//{
//	int in = 0;
//	string str="";
//}zero;
//
//vector<MyStruct> generate(int n,int m)
//{
//	vector <MyStruct> myresult;
//	if (m == 0)
//	{
//		myresult.push_back(zero);
//		return myresult;
//	}
//	vector <MyStruct> rresult=generate(n,m-1);	
//	limit = n / 2;
//	MyStruct temp;
//	for (vector<MyStruct>::iterator i = rresult.begin(); i != rresult.end(); ++i)
//	{
//		if ((*i).in <= limit&&m!=n)
//		{
//			temp.str = ")" + (*i).str + "(";
//			temp.in = (*i).in + 1;
//			myresult.push_back(temp);
//		}
//		temp.str= "(" + (*i).str + ")";
//		temp.in = (*i).in;
//		myresult.push_back(temp);
//	}
//	return myresult;
//}
//vector<string> Solution::generateParenthesis(int n) {
//	if (n == 1) return { "()" };
//	vector <MyStruct> result;
//	vector <string> theresult;
//	result = generate(n, n);
	/*for (vector<MyStruct>::iterator i = result.begin(); i != result.end(); ++i)
	{
		theresult.push_back((*i).str);
	}*/
	/*sort(theresult.begin(), theresult.end());
	theresult.erase(unique(theresult.begin(), theresult.end()), theresult.end());
	return theresult;*/
	//}


struct MyStruct
{
	string str = "";
	int right = 0;
	int left = 0;
}zero;
vector <MyStruct> generate(int n, int m)
{
	vector <MyStruct>newresult;
	if (m == 0)
	{
		newresult.push_back(zero);
		return newresult;
	}
	vector <MyStruct> oldresult = generate(n, m - 1);
	MyStruct temp;

	for (vector <MyStruct>::iterator i = oldresult.begin(); i != oldresult.end(); ++i)
	{
		if ((*i).right < (*i).left)
		{
			temp.str = (*i).str + ")";
			temp.left = (*i).left;
			temp.right = (*i).right + 1;
			newresult.push_back(temp);
		}
		if ((*i).left != n)
		{
			temp.str = (*i).str + "(";
			temp.left = (*i).left + 1;
			temp.right = (*i).right;
			newresult.push_back(temp);
		}
	}
	return newresult;
}

vector<string> Solution::generateParenthesis(int n) {
	vector <MyStruct> result;
	result = generate(n, 2 * n);
	vector <string> theresult;
	for (vector<MyStruct>::iterator i = result.begin(); i != result.end(); ++i)
	{
		theresult.push_back((*i).str);
	}
	/*sort(theresult.begin(), theresult.end());
	theresult.erase(unique(theresult.begin(), theresult.end()), theresult.end());*/
	return theresult;
}

bool findit(string s, int localtion, vector<string>& words)
{
	string temp;
	int x = words[0].length();
	vector <int> flag(words.size(), 0);
	for (int i = 0; i < words.size(); ++i)
	{
		temp = s.substr(localtion + i * x, x);
		int j;
		for (j = 0; j < s.size() - words.size() * x + 1; ++j)
		{
			if (flag[j] == 0 && temp == words[j])
			{
				flag[j] = 1;
				break;
			}
		}
		if (j == words.size()) return false;
	}
	return true;
}

//vector<int> Solution::findSubstring(string s, vector<string>& words)
//{
//	/*vector<string> oldwords;
//	oldwords.assign(words.begin(), words.end()-1);
//	vector <int>oldresult = findSubstring(s, oldwords);*/
//	vector <int> result;
//	int x = words[0].length();
//	for (int i = 0; i < s.size()-words.size()*x; ++i)
//	{
//		if (findit(s, i, words)) result.push_back(i);
//	}
//	return result;
//}

//滑动窗口
vector<int> Solution::findSubstring(string s, vector<string>& words)
{
	vector<int> result;
	int strsize = s.length();
	if (strsize == 0 || words.empty()) return result;
	int wordnum = words.size();
	int wordsize = words[0].length();
	unordered_map<string, int> wordmap, currentmap;
	int left, right, cnt;
	string currentword;
	for (string i : words)
	{
		++wordmap[i];
	}
	for (int i = 0; i < wordsize; ++i)
	{
		currentmap.clear();
		left = i;
		right = i;
		cnt = 0;
		while (right + wordsize <= strsize)
		{
			currentword = s.substr(right, wordsize);
			if (wordmap.find(currentword) != wordmap.end())
			{
				while (currentmap.find(currentword) != currentmap.end() && currentmap[currentword] == wordmap[currentword])
				{
					--currentmap[s.substr(left, wordsize)];
					--cnt;
					left += wordsize;
				}
				right += wordsize;
				++currentmap[currentword];
				++cnt;
				if (cnt == wordnum)
				{
					result.push_back(left);
				}
			}
			else
			{
				right += wordsize;
				left = right;
				cnt = 0;
				currentmap.clear();
			}
		}
	}
	return result;
}

vector<int> Solution::searchRange(vector<int>& nums, int target)
{

	vector <int> result(2, -1);
	if (nums.empty()) return result;
	int i = 0, j = nums.size() - 1, r;
	if (target<nums[i] || target>nums[j])return result;
	if (nums[i] == target && nums[j] == target)
	{
		result[0] = i;
		result[1] = j;
		return result;
	}
	else if (nums[i] == target)r = i;
	else if (nums[j] == target)r = j;
	else r = (i + j) / 2;
	while (nums[r] != target)
	{
		if (i == j || j - i == 1) return result;
		if (nums[r] < target)i = r;
		else j = r;
		r = (i + j) / 2;
	}
	i = r, j = r;
	while (i != 0 && nums[--i] == target);
	while (j != nums.size() - 1 && nums[++j] == target);
	if (i == 0 && nums[i] == target) result[0] = i;
	else result[0] = ++i;
	if (j == nums.size() - 1 && nums[j] == target) result[1] = j;
	else result[1] = --j;
	return result;
}






//bool isValidA(vector<vector<char>>& board)
//{
//	for (int i = 0; i < 9; ++i)
//	{
//		int temp[10] = { 0 };
//		int temp1[10] = { 0 };
//		int temp2[10] = { 0 };
//		int m, n;
//		for (int j = 0; j < 9; ++j)
//		{
//			if (board[j][i] != '.')
//			{
//				if (temp[board[j][i] - '0'] == 1)return false;
//				temp[board[j][i] - '0'] = 1;
//			}
//			if (board[i][j] != '.')
//			{
//				if (temp1[board[i][j] - '0'] == 1)return false;
//				temp1[board[i][j] - '0'] = 1;
//			}
//			m = j / 3 + i / 3 * 3;
//			n = j % 3 + i % 3 * 3;
//			if (board[m][n] != '.')
//			{
//				if (temp2[board[m][n] - '0'] == 1)return false;
//				temp2[board[m][n] - '0'] = 1;
//			}
//		}
//	}
//	return true;
//}
//bool isValidB(vector<vector<char>>& board)
//{
//	for (int i = 0; i < 9; ++i)
//	{
//		int temp[10] = { 0 };
//		for (int j = 0; j < 9; ++j)
//		{
//			if (board[i][j] != '.')
//			{
//				if (temp[board[i][j] - '0'] == 1)return false;
//				temp[board[i][j] - '0'] = 1;
//			}
//		}
//	}
//	return true;
//}
//bool isValidC(vector<vector<char>>& board)
//{
//
//}

bool Solution::isValidSudoku(vector<vector<char>>& board)
{
	for (int i = 0; i < 9; ++i)
	{
		int temp[10] = { 0 };
		int temp1[10] = { 0 };
		int temp2[10] = { 0 };
		int m, n;
		for (int j = 0; j < 9; ++j)
		{
			if (board[j][i] != '.')
			{
				if (temp[board[j][i] - '0'] == 1)return false;
				temp[board[j][i] - '0'] = 1;
			}
			if (board[i][j] != '.')
			{
				if (temp1[board[i][j] - '0'] == 1)return false;
				temp1[board[i][j] - '0'] = 1;
			}
			m = j / 3 + i / 3 * 3;
			n = j % 3 + i % 3 * 3;
			if (board[m][n] != '.')
			{
				if (temp2[board[m][n] - '0'] == 1)return false;
				temp2[board[m][n] - '0'] = 1;
			}
		}
	}
	return true;
}

bool isValidSudoku(vector<vector<char>>& board, int i, int j)
{
	for (int m = 0; m < 9; ++m)
	{
		if (m != j && board[i][j] == board[i][m]) return false;
		if (m != i && board[m][j] == board[i][j]) return false;
		if ((i / 3 * 3 + m / 3 != i || j / 3 * 3 + m % 3 != j) && board[i / 3 * 3 + m / 3][j / 3 * 3 + m % 3] == board[i][j]) return false;
	}
	return true;
}


vector<vector<char>> temp;
vector<int> locmap;
vector<vector<int>> t;
int deep = -1;

void solveit(vector<vector<char>>& board)
{
	++deep;
	if (deep > locmap.size() - 1) return;
	int i, j;
	for (vector<int>::iterator r = t[deep].begin(); r != t[deep].end(); ++r)
	{
		i = locmap[deep] / 9;
		j = locmap[deep] % 9;
		board[i][j] = *r + '0';
		if (isValidSudoku(board, i, j))
		{
			if (deep == locmap.size() - 1)
			{
				cout << "有解" << endl;
				temp.assign(board.begin(), board.end());
				deep = 100;
				return;
			}
			solveit(board);
			if (deep == 100) return;
			--deep;
		}

		if (r == t[deep].end() - 1) board[i][j] = '.';
	}

	if (!temp.empty()) board.assign(temp.begin(), temp.end());
}
void Solution::solveSudoku(vector<vector<char>>& board)
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (board[i][j] == '.')
			{
				locmap.push_back(i * 9 + j);
				vector<int> temp(10, 1);
				for (int m = 0; m <= 9; ++m)
				{
					temp[m] = m;
				}
				for (int m = 0; m < 9; ++m)
				{
					if (board[i][m] != '.') temp[board[i][m] - '0'] = 0;
					if (board[m][j] != '.') temp[board[m][j] - '0'] = 0;
					else if (board[i / 3 * 3 + m / 3][j / 3 * 3 + m % 3] != '.') temp[board[i / 3 * 3 + m / 3][j / 3 * 3 + m % 3] - '0'] = 0;
				}
				temp.erase(remove(temp.begin(), temp.end(), 0), temp.end());
				//sort(temp.begin(), temp.end(), greater<int>());
				//while (*(temp.rbegin()) == 0) temp.pop_back();
				t.push_back(temp);
			}

		}
	}
	solveit(board);
}

//递归
//string Solution::countAndSay(int n)
//{
//	if (n == 1) return "1";
//	string before= countAndSay(n - 1);
//	int cnt = 0;
//	char temp;
//	string now = "";
	/*for (string::iterator i = before.begin(); i != before.end(); ++i)
	{
		if (i == before.begin())
		{
			temp = *i;
			++cnt;
		}
		else if (*i == *(i - 1)) ++cnt;
		else
		{
			now = now + (char)(cnt + '0') + temp;
			cnt = 1;
			temp = *i;
		}
		if (i == before.end()-1) now = now + (char)(cnt + '0') + temp;
	}*/
	//	return now;
	//}

	//循环
string Solution::countAndSay(int n)
{
	//if (n == 1) return "1";
	string temp = "1";
	string temp1 = "";
	char temp2;
	int cnt = 0;
	for (int m = 0; m < n - 1; ++m)
	{
		for (string::iterator i = temp.begin(); i != temp.end(); ++i)
		{
			if (i == temp.begin())
			{
				temp2 = *i;
				++cnt;
			}
			else if (*i == temp2) ++cnt;
			else
			{
				temp1.push_back(cnt + '0');
				temp1.push_back(temp2);
				cnt = 1;
				temp2 = *i;
			}
			if (i == temp.end() - 1)
			{
				temp1.push_back(cnt + '0');
				temp1.push_back(temp2);
			}
		}
		temp = temp1;
		temp1 = "";
		cnt = 0;
	}
	return temp;
}

vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target)
{
	vector<int> candidates1(candidates);
	vector<vector<int>> result, temp;
	/*sort(candidates1.begin(), candidates1.end());
	while ((!candidates1.empty())&&*(candidates1.rbegin()) > target) candidates1.pop_back();*/
	/*for (vector<int>::iterator i = candidates1.begin(); i != candidates1.end();)
	{
		if (*i > target) i=candidates1.erase(i);
		else ++i;
	}*/
	candidates1.erase(remove_if(candidates1.begin(), candidates1.end(), [target](int n) {return n > target; }), candidates1.end());
	if (candidates1.empty()) return result;
	int last = candidates1.back();
	candidates1.pop_back();
	//result = combinationSum(candidates1, target);
	/*temp = combinationSum(candidates1, target - last);
	if (!temp.empty())
	{
		for (vector<vector<int>>::iterator i = temp.begin(); i != temp.end(); ++i) (*i).push_back(last);
	}
	else if(last==target)
	{
		temp = { {last} };
	}
	result.insert(result.end(), temp.begin(), temp.end());*/
	int cnt = target / last;
	vector<int> temp2;
	if (cnt * last == target)
	{
		for (int m = 0; m < cnt; ++m)
			temp2.push_back(last);
		result.push_back(temp2);
	}
	for (int i = 0; i <= cnt; ++i)
	{
		temp = combinationSum(candidates1, target - i * last);
		temp2.clear();
		for (int m = 0; m < i; ++m)
			temp2.push_back(last);
		for (vector<vector<int>>::iterator j = temp.begin(); j != temp.end(); ++j)
		{
			(*j).insert((*j).end(), temp2.begin(), temp2.end());
		}
		result.insert(result.end(), temp.begin(), temp.end());
	}
	return result;
}

vector<vector<int>> Solution::combinationSum2(vector<int> candidates, int target)
{
	vector<vector<int>> result, temp;
	sort(candidates.begin(), candidates.end());
	while ((!candidates.empty()) && *(candidates.rbegin()) > target) candidates.pop_back();
	if (candidates.empty()) return result;
	if (accumulate(candidates.begin(), candidates.end(), 0) < target) return result;
	int last = candidates.back();
	int cnt1 = 0;
	while ((!candidates.empty()) && candidates.back() == last)
	{
		candidates.pop_back();
		++cnt1;
	}
	int cnt = target / last;
	if (cnt > cnt1)cnt = cnt1;
	vector<int> temp2;
	if (cnt * last == target)
	{
		for (int m = 0; m < cnt; ++m)
			temp2.push_back(last);
		result.push_back(temp2);
	}
	for (int i = 0; i <= cnt; ++i)
	{
		temp = combinationSum2(candidates, target - i * last);
		temp2.clear();
		for (int m = 0; m < i; ++m)
			temp2.push_back(last);
		for (vector<vector<int>>::iterator j = temp.begin(); j != temp.end(); ++j)
		{
			(*j).insert((*j).end(), temp2.begin(), temp2.end());
		}
		result.insert(result.end(), temp.begin(), temp.end());
	}
	return result;
}

//int Solution::firstMissingPositive(vector<int>& nums)
//{
//	int i;
//	nums.push_back(-1);
//	/*if (nums.size() > 1)
//	{*/
//		for (i = 0; i < nums.size()-1; ++i)
//		{
//			if (nums[i] > 0 && nums[i] != i)
//			{
//				int temp = nums[i];
//				nums[i] = -1;
//				while (temp<nums.size()&&nums[temp] > 0 && nums[temp] != temp)
//				{
//					int temp1 = nums[temp];
//					nums[temp] = temp;
//					temp = temp1;
//					//if(temp < nums.size()) nums[temp] = temp;
//				}
//				if (temp < nums.size())nums[temp] = temp;
//			}
//		}
//		for (i = 1; i < nums.size(); ++i)
//		{
//			if (nums[i] != i) return i;
//		}
//		return nums[i - 1] + 1;
//	/*}
//	else return nums[0] == 1 ? 2 : 1;*/
//
//}

//交换
//int Solution::firstMissingPositive(vector<int>& nums)
//{
//	int i;
//	nums.push_back(-1);
//	for (i = 0; i < nums.size() - 1; ++i)
//	{
//		while (nums[i] > 0 && nums[i] != i && nums[i] < nums.size() && nums[i] != nums[nums[i]])
//		{
//			swap(nums[i], nums[nums[i]]);
//		}
//	}
//	for (i = 1; i < nums.size(); ++i)
//	{
//		if (nums[i] != i) return i;
//	}
//	return i;
//}

//哈希
int Solution::firstMissingPositive(vector<int>& nums)
{
	//nums.push_back(-1);
	int n = nums.size();
	vector<int>::iterator i;
	for (i = nums.begin(); i != nums.end(); ++i)
	{
		if (*i <= 0) *i = n + 1;
	}
	for (i = nums.begin(); i != nums.end(); ++i)
	{
		if (abs(*i) - 1 < n) nums[abs(*i) - 1] = 0 - abs(nums[abs(*i) - 1]);
	}
	for (int i = 0; i < n; i++)
	{
		if (nums[i] > 0)return i + 1;
	}
	return n + 1;
}

int Solution::trap(int* height, int heightSize)
{
	int result = 0;
	int i;
	for (i = 0; i < heightSize; i++)
	{
		if (height[i] != 0) break;
	}
	if (i <= heightSize && i >= heightSize - 2) return result;
	int temp = height[i];
	int first = i;
	int end;
	while (++i < heightSize && height[i] < temp);
	if (i < heightSize)
	{
		end = i;
		for (i = first + 1; i < end; ++i)
		{
			result += temp - height[i];
		}
		result += trap(height + end, heightSize - end);
	}
	else
	{
		int* p = height + first;
		heightSize = heightSize - first;
		for (i = 0; i < heightSize / 2; ++i)
			swap(p[i], p[heightSize - 1 - i]);
		result = trap(p, heightSize);
	}
	return result;
}


//竖式
string add(string temp1, string temp2)
{
	if (temp2.empty()) return temp1;
	temp2.push_back('0');
	int size1 = temp1.size();
	int size2 = temp2.size();
	string result;
	for (int i = 0; i < size2 - size1; ++i)
	{
		result.push_back(temp2[i] - '0');
	}
	for (int i = size2 - size1; i < size2; ++i)
	{
		result.push_back(temp2[i] - '0' + temp1[i - size2 + size1] - '0');
	}
	for (auto i = result.rbegin(); i != result.rend() - 1; ++i)
	{
		*(i + 1) += (*i) / 10;
		*i = (*i) % 10 + '0';
	}
	if (result[0] > 9)
	{
		char temp = result[0] / 10 + '0';
		result[0] = result[0] % 10 + '0';
		result.insert(0, 1, temp);
	}
	else result[0] += '0';
	return result;
}

string multiply1(int num, string n)
{
	string result;
	if (num == 0) return "0";
	for (auto i = n.begin(); i != n.end(); ++i)
	{
		result.push_back((*i - '0') * num);
	}
	for (auto i = result.rbegin(); i != result.rend() - 1; ++i)
	{
		*(i + 1) += (*i) / 10;
		*i = (*i) % 10 + '0';
	}
	if (result[0] > 9)
	{
		char temp = result[0] / 10 + '0';
		result[0] = result[0] % 10 + '0';
		result.insert(0, 1, temp);
	}
	else result[0] += '0';
	return result;
}

//string Solution::multiply(string num1, string num2)
//{
//	//return to_string(atoi(num1.c_str())*atoi(num2.c_str()));
//	/*const char *n1 = num1.c_str();
//	const char *n2 = num2.c_str();*/
//	string result;
//	if (num1.empty() || num2.empty()) return result;
//	string temp1,temp2;
//	//vector<int> n1, n2;
	/*int size1 = num1.size();
	int size2 = num2.size();*/
	//	/*for (int i = 0; i < size1; ++i)
	//	{
	//		n1.push_back(num1[i] - '0');
	//	}
	//	for (int i = 0; i < size2; ++i)
	//	{
	//		n2.push_back(num2[i] - '0');
	//	}*/
	//	int num;
	//	if (size1 < size2)
	//	{
	//		num = num1.back()-'0';
	//		num1.pop_back();
	//		temp1 = multiply1(num, num2);
	//		temp2 = multiply(num1, num2);
	//	}
	//	else
	//	{
	//		num = num2.back() - '0';
	//		num2.pop_back();
	//		temp1 = multiply1(num, num1);
	//		temp2 = multiply(num1, num2);
	//	}
	//	result = add(temp1, temp2);
	//	return result;
	//
	//}

	//直接乘
string Solution::multiply(string num1, string num2)
{
	if (num1 == "0" || num2 == "0") return "0";
	int size1 = num1.size();
	int size2 = num2.size();
	int temp;
	string result(size1 + size2, '0');
	for (int i = size1 - 1; i >= 0; --i)
		for (int j = size2 - 1; j >= 0; --j)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] - '0';
			result[i + j] += temp / 10;
			result[i + j + 1] = temp % 10 + '0';
		}
	int i = -1;
	while (result[++i] == '0');
	result.erase(0, i);
	return result;
}

int* getnext(string p)
{
	int length = p.size();
	int* next = (int*)malloc(length * sizeof(int));
	next[0] = -1;
	int i = 0, j = -1;
	while (i < length - 1)
	{
		if (j == -1 || p[i] == '?' || p[j] == '?' || p[i] == p[j])
		{
			++i;
			++j;
			if (p[i] == p[j] || p[j] == '?') next[i] = next[j];
			else next[i] = j;
		}
		else j = next[j];
	}
	return next;
}

//int kmp(string s, string p)
//{
//	int* next = getnext(p);
//	int size1 = s.size();
//	int size2 = p.size();
//	int i = 0, j = 0;
//	while (i < size1 && j < size2)
//	{
//		if (j==-1||s[i] == '?' || p[j] == '?' || s[i] == p[j])
//		{
//			++i; ++j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j == size2)return i;
//	else return -1;
//}

int kmp(string s, string p)
{
	int size1 = s.size();
	int size2 = p.size();
	for (int i = 0; i < size1 - size2 + 1; ++i)
	{
		for (int j = 0; j < size2; ++j)
		{
			if (p[j] != '?' && s[i + j] != p[j]) break;
			if (j == size2 - 1) return i + j + 1;
		}
	}
	return -1;

}

bool Solution::isMatch(string s, string p)
{
	int size1 = s.size();
	int size2 = p.size();
	int i = 0, j = 0;
	int last, temp;
	bool result = false;
	while (i < size1 && j < size2)
	{
		if (p[j] == '*')
		{
			//if (j == size2 - 1) return true;
			while (j < size2 && p[j] == '*')++j;
			if (j == size2) return true;
			last = j;
			while (last < size2 && p[last] != '*') ++last;
			if (size1 - i >= last - j && last == size2)i = size1 - last + j;
			temp = kmp(s.substr(i), p.substr(j, last - j));
			if (temp == -1) return false;
			else
			{
				j = last;
				i = i + temp;
			}
			////while (j < size2 &&i<size1&& p[j] == '?') ++i, ++j;
			//if (j == size2) return true;
			////if (i == size1) break;
			//for (int r = 0; i + r < size1; ++r)
			//{
			//	//if (s[i + r] != p[j]);
			//	/*else*/ if (isMatch(s.substr(i + r), p.substr(j))) return true;
			//}
			//return false;
		}
		else if (p[j] == '?' || s[i] == p[j])
		{
			++i;
			++j;
		}
		else return false;
	}
	while (j < size2)
	{
		if (p[j] == '*') ++j;
		else break;
	}
	if (i == size1 && j == size2) return true;
	else return false;
}

int jumpit(int* nums, int length)
{
	int x = nums[0];
	int flag, cnt = 0, route = 0;
	int max1 = 0;
	while (route < length - 1)
	{
		if (route + nums[route] + 1 >= length)
		{
			cnt++;
			break;
		}
		max1 = 0;
		for (int i = 1; i <= x; ++i)
		{
			if (max1 < i + nums[i + route])
			{
				max1 = i + nums[i + route];
				flag = i;
			}
			//max1 = max(max1, i + nums[i + route]);
		}
		route += flag;
		x = nums[route];
		cnt++;
	}
	return cnt;
}

int Solution::jump(vector<int> nums)
{
	/*int x = nums[0];
	int min = nums.size();
	vector<int> nums1;
	int flag;
	int max = 0;
	if (min == 1) return 0;
	else if (x + 1 >= min) return 1;
	else
	{
		for (int i = 1; i <= x; ++i)
		{
			if (max < i + nums[i])
			{
				max = i + nums[i];
				flag = i;
			}
		}
		nums1.assign(nums.begin() + flag, nums.end());
		return 1 + jump(nums1);
	}*/
	return jumpit(&nums[0], nums.size());
}

vector<vector<int>> connect(vector<vector<int>> array, int num)
{
	for (auto i = array.begin(); i != array.end(); ++i)
	{
		(*i).push_back(num);
	}
	return array;
}

vector<vector<int>> permuteit(int* nums, int length)
{
	if (length == 1) return { {nums[0]} };
	vector<vector<int>> result, temp;
	for (int i = 0; i < length; ++i)
	{
		swap(nums[0], nums[i]);
		temp = connect(permuteit(nums + 1, length - 1), nums[0]);
		result.insert(result.end(), temp.begin(), temp.end());
		swap(nums[0], nums[i]);
	}
	return result;
}

vector<vector<int>> Solution::permute(vector<int>& nums)
{
	return permuteit(&nums[0], nums.size());
}

void Solution::rotate(vector<vector<int>>& matrix)
{
	int n = matrix.size();
	int limt1, limit2 = n / 2, temp;
	if ((n & 1) == 1) limt1 = n / 2 + 1;
	else limt1 = n / 2;
	for (int i = 0; i < limt1; ++i)
		for (int j = 0; j < limit2; ++j)
		{
			temp = matrix[i][j];
			matrix[i][j] = matrix[n - 1 - j][i];
			matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
			matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
			matrix[j][n - 1 - i] = temp;
		}
}

//bool isequal(string& a, string& b)
//{
//	int a1 = 0, a2 = 0;
//	int m1 = 1, m2 = 1;
//}

//vector<vector<string>> Solution::groupAnagrams(vector<string>& strs)
//{
//	vector<vector<string>> result;
//	vector<string> temp;
//	int n = strs.size();
//	vector<string> strs2;
//	string removeit,removeit2;
//	for (auto i = strs.begin(); i != strs.end(); ++i)
//	{
//		strs2.push_back(*i);
//		sort(strs2.back().begin(), strs2.back().end());
//	}
//	while (!strs.empty())
//	{
//		removeit = *(strs.begin());
//		removeit2 = *(strs2.begin());
//		temp.assign(strs.begin(), strs.begin()+1);
//		strs.erase(strs.begin());
//		strs2.erase(strs2.begin());
//		for (int i = 0; i<strs.size();)
//		{
//			if (strs2[i] == removeit2)
//			{
//				temp.push_back(strs[i]);
//				strs.erase(strs.begin() + i);
//				strs2.erase(strs2.begin() + i);
//			}
//			else ++i;
//		}
//		result.push_back(temp);
//	}
//	return result;
//}

vector<vector<string>> Solution::groupAnagrams(vector<string>& strs)
{
	vector<vector<string>> result;
	unordered_map<string, vector<string>> strmap;
	string temp;
	for (auto i = strs.begin(); i != strs.end(); ++i)
	{
		temp = *i;
		sort(temp.begin(), temp.end());
		strmap[temp].push_back(*i);
	}
	for (auto i = strmap.begin(); i != strmap.end(); ++i)
	{
		result.push_back(i->second);
	}
	return result;
}

double Solution::myPow(double x, int n)
{
	double sum = 1;
	if (n < 0)
	{
		x = 1 / x;
		n = -1 - n;
		sum = x;
	}
	double temp = x;
	while (n)
	{
		if (n & 1)
		{
			sum *= temp;
		}
		temp *= temp;
		n = n >> 1;
	}
	return sum;
}

vector<string> general(int n, int* m)
{
	vector<string>temp;
	string temp1;
	for (int i = 0; i < n; ++i)
	{
		temp1.clear();
		for (int j = 0; j < n; ++j)
		{
			if (j == m[i])temp1.push_back('Q');
			else temp1.push_back('.');
		}
		temp.push_back(temp1);
	}
	return temp;
}

void setqueen(int n, int* m, int local, vector<vector<string>>& result)
{
	//int flag[n];
	if (local == n)
	{
		result.push_back(general(n, m));
		return;
	}
	vector<int> setlist;
	for (int i = 0; i < n; i++) setlist.push_back(i);
	for (int i = 0; i < local; ++i)
	{
		setlist.erase(remove(setlist.begin(), setlist.end(), m[i]), setlist.end());
		setlist.erase(remove(setlist.begin(), setlist.end(), m[i] - local + i), setlist.end());
		setlist.erase(remove(setlist.begin(), setlist.end(), m[i] + local - i), setlist.end());
	}
	if (setlist.empty()) return;
	for (auto i = setlist.begin(); i != setlist.end(); ++i)
	{
		m[local] = *i;
		setqueen(n, m, local + 1, result);
	}
}

vector<vector<string>> Solution::solveNQueens(int n)
{
	vector<vector<string>> result;
	int* temp = (int*)malloc(n * sizeof(int));
	setqueen(n, temp, 0, result);
	return result;
}

int Solution::maxSubArray(vector<int> nums)
{
	int max = nums[0];
	int sum = 0;
	int length = nums.size();
	auto last = nums.begin();
	while (last != nums.end())
	{
		sum += *last;
		if (sum > max) max = sum;
		++last;
		if (sum < 0)sum = 0;
	}
	return max;
}

void spiral(vector<vector<int>>& matrix, int x, int y, vector<int>& result)
{
	if (matrix[y][x] > 100)return;
	result.push_back(matrix[y][x]);
	matrix[y][x] = 101;
	int m = matrix.back().size(), n = matrix.size();
	if (x >= y - 1 && x < m - y - 1) spiral(matrix, x + 1, y, result);
	else if (y >= m - x - 1 && y < n - m + x) spiral(matrix, x, y + 1, result);
	else if (x >= n - y && x <= m - n + y) spiral(matrix, x - 1, y, result);
	else if (y >= x + 2 && y <= n - 1 - x) spiral(matrix, x, y - 1, result);
	return;
}

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix)
{
	vector<int> result;
	spiral(matrix, 0, 0, result);
	return result;
}

bool canJump1(int* nums, int size)
{
	//if (size == 1) return true;
	/*if (*nums >= size - 1) return true;
	for (int i = *nums; i >0 ; --i)
	{
		if (*(nums+i)+i>*nums&&canJump1(nums + i,size-i)) return true;
	}
	return false;*/
	if (*nums >= size - 1) return true;
	if (*nums == 0) return false;
	int flag = 0, max = 0;
	for (int i = 1; i <= *nums; ++i)
	{
		if (*(nums + i) + i > max)
		{
			max = *(nums + i) + i;
			flag = i;
		}
	}
	if (canJump1(nums + flag, size - flag)) return true;
	else return false;
}

bool Solution::canJump(vector<int>& nums)
{
	return canJump1(&nums[0], nums.size());
}

//vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
	/*int flag[10001] = { 0 };
	int min = 10000, max = 0;
	for (auto i = intervals.begin(); i != intervals.end(); ++i)
	{
		for (int j = (*i)[0]; j <= (*i)[1]; ++j) flag[j] = 1;
		if ((*i)[0] < min) min = (*i)[0];
		if ((*i)[1] > max) max = (*i)[1];
	}
	int begin = 0, end = 0;
	intervals.clear();
	for (int r = min; r <= max; ++r)
	{
		if (flag[r])
		{
			if (r == min || !flag[r - 1])
			{
				begin = r; end = r;
			}
			else end = r;
		}
		else
		{
			if (flag[r - 1])
			{
				intervals.push_back({ begin,end });
			}
		}
	}
	intervals.push_back({ begin,end });
	return intervals;*/
	//}

	//vector<vector<int>> Solution::merge(vector<vector<int>>& intervals)
	//{
		/*sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {return a[1] < b[1]; });
		for (auto i = intervals.rbegin(); i != intervals.rend(); ++i)
		{
			if (i != intervals.rbegin())
			{
				if ((*i)[1] >= (*(i - 1))[0])
				{
					(*i)[0] = min((*i)[0], (*(i - 1))[0]);
					(*i)[1] = (*(i - 1))[1];
					i = intervals.erase(i - 1);
				}
			}
		}
		return intervals;*/
		//}
vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {return a[0] < b[0]; });
	vector<vector<int>> result;
	for (auto i = intervals.begin(); i != intervals.end(); ++i)
	{
		if (i != intervals.begin())
		{
			if ((*i)[0] <= (*(i - 1))[1])
			{
				(*i)[0] = (*(i - 1))[0];
				(*i)[1] = max((*i)[1], (*(i - 1))[1]);
				result.back() = *i;
			}
			else result.push_back(*i);
		}
		else result.push_back(*i);
	}
	return result;
}


vector<vector<int>> Solution::insert(vector<vector<int>>& intervals, vector<int>& newInterval)
{
	if (intervals.empty()) return { newInterval };
	/*if (newInterval[1] < intervals[0][0])
	{
		intervals.insert(intervals.begin(), newInterval);
		return intervals;
	}
	else if (newInterval[0] > (*(intervals.end() - 1))[1])
	{
		intervals.push_back(newInterval);
		return intervals;
	}*/

	vector<vector<int>> result;
	vector<int> temp(2, -1);
	for (auto i = intervals.begin(); i != intervals.end(); ++i)
	{
		if (i == intervals.begin() && newInterval[1] < (*i)[0]) result.push_back(newInterval);
		if (newInterval[0] > (*i)[1] || newInterval[1] < (*i)[0])
		{
			result.push_back(*i);
		}
		if ((i == intervals.begin() && newInterval[0] < (*i)[0]) || (newInterval[0] > (*i)[1] && i != intervals.end() - 1 && newInterval[0] < (*(i + 1))[0]))temp[0] = newInterval[0];
		else if (newInterval[0] >= (*i)[0] && newInterval[0] <= (*i)[1]) temp[0] = (*i)[0];
		if (newInterval[1] > (*i)[1] && (i == intervals.end() - 1 || newInterval[1] < (*(i + 1))[0]))temp[1] = newInterval[1];
		else if (newInterval[1] >= (*i)[0] && newInterval[1] <= (*i)[1]) temp[1] = (*i)[1];
		if (temp[0] != -1 && temp[1] != -1)
		{
			result.push_back(temp);
			result.insert(result.end(), i + 1, intervals.end());
			return result;
		}
		if (i == intervals.end() - 1 && newInterval[0] > (*i)[1]) result.push_back(newInterval);
	}
	return result;
}

vector<vector<int>> Solution::generateMatrix(int n)
{
	vector<vector<int>>result(n, vector<int>(n));
	int i = 0, j = 0, temp = 0;
	while (temp < n * n)
	{
		result[i][j] = ++temp;
		if (/*i < (n + 1) / 2 &&*/ j < n - 1 - i && j >= i - 1)++j;
		else if (/*j>=(n+1)/2&&*/i >= n - 1 - j && i < j) ++i;
		else if (j > n - 1 - i && j <= i)--j;
		else --i;
	}
	return result;
}

string getPermutation1(string str, int k)
{
	int n = str.size();
	/*if (n == 1) return str;
	int mult = 1;
	int n1 = n-1;
	while (n1 > 1)mult *= n1--;
	int m = (k - 1) / mult;
	string nextstr;
	for (int i = 0; i < n; ++i)
	{
		if (i != m) nextstr.push_back(str[i]);
	}
	return str[m] + getPermutation1(nextstr, (k-1) % mult+1);*/
	int mult = 1;
	int n1 = n - 1;
	while (n1 > 1)mult *= n1--;
	int m;
	for (int i = 0; i < n - 1; ++i)
	{
		m = (k - 1) / mult;
		for (int j = i + m; j > i; --j) swap(str[j], str[j - 1]);
		k = (k - 1) % mult + 1;
		mult /= n - 1 - i;
	}
	return str;
}

string Solution::getPermutation(int n, int k)
{
	string str;
	//int* p = NULL;
	for (int i = 1; i <= n; ++i)
	{
		str.push_back(i + '0');
	}
	return getPermutation1(str, k);
}

int Solution::uniquePaths(int m, int n)
{
	int temp1 = 1, temp2 = 1;
	for (int i = 1; i <= m - 1; ++i)
	{
		temp1 *= i;
		temp2 *= i + n - 1;
	}
	return temp2 / temp1;
}

int uniquePaths1(int m, int n, int x, int y, vector<vector<int>>& obstacleGrid)
{
	if (obstacleGrid[x][y]) return 0;
	if (x == m - 1 && y == n - 1) return 1;
	int result = 0;
	if (x != m - 1 && !obstacleGrid[x + 1][y])result += uniquePaths1(m, n, x + 1, y, obstacleGrid);
	if (y != n - 1 && !obstacleGrid[x][y + 1])result += uniquePaths1(m, n, x, y + 1, obstacleGrid);
	return result;
}

//int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
//{
	/*int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	return uniquePaths1(m,n,0, 0,obstacleGrid);*/
	//}
int uniquePaths2(int m, int n, int x, int y, vector<vector<int>>& obstacleGrid)
{
	if (obstacleGrid[x][y] || obstacleGrid[0][0]) return 0;
	if (x + y == 1)return 1;
	int result = 0;
	if (x > 0)result += uniquePaths2(m, n, x - 1, y, obstacleGrid);
	if (y > 0)result += uniquePaths2(m, n, x, y - 1, obstacleGrid);
}
int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
	int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	if (obstacleGrid[m - 1][n - 1] || obstacleGrid[0][0])return 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (obstacleGrid[i][j])
			{
				obstacleGrid[i][j] = 0;
				continue;
			}
			if (!i && !j) obstacleGrid[i][j] = 1;
			if (i > 0)obstacleGrid[i][j] = obstacleGrid[i - 1][j];
			if (j > 0) obstacleGrid[i][j] += obstacleGrid[i][j - 1];
		}
	}
	return obstacleGrid[m - 1][n - 1];
}

int Solution::minPathSum(vector<vector<int>>& grid)
{
	int m = grid.size();
	int n = grid[0].size();
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i == 0 && j == 0);
			else if (!i) grid[i][j] += grid[i][j - 1];
			else if (!j) grid[i][j] += grid[i - 1][j];
			else grid[i][j] += min(grid[i][j - 1], grid[i][j - 1]);
		}
	return grid[m - 1][n - 1];
}

bool isint(string s)
{
	int flag = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] == '+' || s[i] == '-') && i) return false;
		if (s[i] >= '0' && s[i] <= '9') flag = 1;
		else if (!(s[i] == '+' || s[i] == '-')) return false;
	}
	if (flag) return true;
	else return false;
}

bool isdouble(string s)
{
	int flag1 = 0, flag2 = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] == '+' || s[i] == '-') && i) return false;
		if (s[i] >= '0' && s[i] <= '9') flag1 = 1;
		else if (s[i] == '.')
		{
			if (flag2) return false;
			else flag2 = 1;
		}
		else if (!(s[i] == '+' || s[i] == '-'))return false;
	}
	if (flag1) return true;
	else return false;
}

bool Solution::isNumber(string s)
{
	int flag = -1;
	for (int i = 0; i < s.size(); ++i)
	{
		if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && s[i] != 'e' && s[i] != 'E')return false;
		if (s[i] == 'e' || s[i] == 'E')
		{
			if (flag == -1 && i < s.size() - 1) flag = i;
			else return false;
		}
	}
	if (flag == -1)
	{
		if (isdouble(s)) return true;
		else return false;
	}
	else
	{
		string temp1 = s.substr(0, flag);
		string temp2 = s.substr(flag + 1, s.size() - flag - 1);
		if (isdouble(temp1) && isint(temp2))return true;
		else return false;
	}
	return false;

}

string Solution::addBinary(string a, string b) {
	if (a.size() < b.size()) swap(a, b);
	auto i = a.rbegin(), j = b.rbegin();
	for (; j != b.rend(); ++i, ++j)
	{
		*i += *j - '0';
		if (i != a.rend() - 1)
		{
			*(i + 1) += (*i - '0') / 2;
			*i = (*i - '0') % 2 + '0';
		}
	}
	while (i != a.rend())
	{
		if (*i - '0' < 2) break;
		if (i == a.rend() - 1)
		{
			a.insert(a.begin(), '0');
			i--;
		}
		*(i + 1) += (*i - '0') / 2;
		*i = (*i - '0') % 2 + '0';
		++i;
	}
	return a;
}

string fullJustify1(vector<string> stack, int maxWidth, int cnt, int sumlong)
{
	string result = "";
	int blacknum = 0;
	for (auto i = stack.begin(); i != stack.end(); ++i)
	{
		result += *i;
		if (i != stack.end() - 1)
		{
			blacknum = (maxWidth - sumlong - 1) / (cnt - 1) + 1;
			result += string(blacknum, ' ');
			maxWidth -= (*i).size() + blacknum;
			--cnt;
			sumlong -= (*i).size();
		}
	}
	if (maxWidth > (*(stack.end() - 1)).size()) result += string(maxWidth - (*(stack.end() - 1)).size(), ' ');
	return result;
}

vector<string> Solution::fullJustify(vector<string>& words, int maxWidth)
{
	string temp;
	vector<string> result;
	vector<string> stack;
	int cnt = 0, sumlong = 0;
	for (auto i = words.begin(); i != words.end(); ++i)
	{
		if ((*i).size() + sumlong + cnt > maxWidth)
		{
			temp = fullJustify1(stack, maxWidth, cnt, sumlong);
			result.push_back(temp);
			stack.clear();
			cnt = 0;
			sumlong = 0;
		}
		stack.push_back(*i);
		++cnt;
		sumlong += (*i).size();
		if (i == words.end() - 1)
		{
			temp = "";
			for (auto j = stack.begin(); j != stack.end(); ++j)
			{
				if (j == stack.end() - 1)
				{
					temp += *j;
					temp += string(maxWidth - temp.size(), ' ');
				}
				else temp += *j + " ";
			}
			result.push_back(temp);
		}
	}
	return result;
}

int Solution::climbStairs(int n) {
	//int* temp = (int*)malloc((n + 1) * sizeof(int));
	int* temp = new int[n];
	temp[1] = 1;
	if (n > 1)temp[2] = 2;
	for (int i = 3; i <= n; ++i) temp[i] = temp[i - 1] + temp[i - 2];
	return temp[n];
}

string Solution::simplifyPath(string path)
{
	int length = path.size();
	string sppath, temp;
	vector<string> stack;
	int first = 0, last = 0;
	while (last < length)
	{
		while (first < length - 1 && path[first + 1] == '/') ++first, ++last;
		if ((last < length - 1 && path[last + 1] == '/') || (last == length - 1 && path[last] != '/'))
		{
			temp = path.substr(first, last - first + 1);
			if (temp == "/.." && !stack.empty()) stack.pop_back();
			else if (temp != "/." && temp != "/..")stack.push_back(temp);
			first = ++last;
		}
		else ++last;
	}
	if (stack.empty()) return "/";
	for (auto i = stack.begin(); i != stack.end(); ++i) sppath.insert(sppath.end(), (*i).begin(), (*i).end());
	return sppath;
}

//int Solution::minDistance(string word1, string word2)
//{
//	int i=0, j=0;
//	int size1 = word1.size();
//	int size2 = word2.size();
//	int result = 0;
//	while (i<size1&&j<size2)
//	{
//		if (word1[i] == word2[j])
//		{
//			++i;
//			++j;
//		}
//		else if (j < size2 - 1 && i < size1 - 1 && word1[i + 1] == word2[j + 1])
//		{
//			++result;
//			i+=2;
//			j += 2;
//		}
//		else if (j < size2 - 1 && word1[i] == word2[j + 1])
//		{
//			++result;
//			++i;
//			j += 2;
//		}
//		else if (i < size1 - 1 && word1[i + 1] == word2[j])
//		{
//			++result;
//			i += 2;
//			++j;
//		}
//		else
//		{
//			++result;
//			++i;
//			++j;
//		}
//	}
//	result += size1+size2 -i- j;
//	return result;
//}

//int minDistance1(char *i, int size1,char *j,int size2)
//{
//	if (!size1 || !size2) return size1 + size2;
//	int temp = min(minDistance1(i, size1, j + 1, size2 - 1) + 1, minDistance1(i + 1, size1 - 1, j, size2) + 1);
//	cout << i << " " << j << " " << temp<<endl;
//	return min(temp, minDistance1(i + 1, size1 - 1, j + 1, size2 - 1) + *i == *j ? 0 : 1);
//	//return 0;
//}

int Solution::minDistance(string word1, string word2)
{
	//char* i = &(word1[0]);
	//char* j = &(word2[0]);
	int size1 = word1.size();
	int size2 = word2.size();
	int temp;
	vector<vector<int>> result(size1, vector<int>(size2));
	for (int i = size1 - 1; i >= 0; --i)
		for (int j = size2 - 1; j >= 0; --j)
		{
			//flag = word1[i] == word2[j];
			temp = size1 + size2;
			if (word1[i] == word2[j])
			{
				if (i < size1 - 1 && j < size2 - 1) temp = result[i + 1][j + 1];
				else temp = size1 + size2 - i - j - 2;
			}
			else
			{
				if (i < size1 - 1) temp = min(temp, result[i + 1][j] + 1);
				if (j < size2 - 1) temp = min(temp, result[i][j + 1] + 1);
				if (i < size1 - 1 && j < size2 - 1)temp = min(temp, result[i + 1][j + 1] + 1);
				if (i == size1 - 1 && j == size2 - 1)temp = 1;
			}
			result[i][j] = temp;
		}
	return result[0][0];
	//return minDistance1(i, word1.size(), j, word2.size());
	//return 0;
}

void Solution::setZeroes(vector<vector<int>>& matrix)
{
	int size1 = matrix.size(), size2 = matrix[0].size();
	int i, j, flag1 = 0, flag2 = 0;
	for (i = 0; i < size1; ++i)
		for (j = 0; j < size2; ++j)
			if (!matrix[i][j])
			{
				if (!i)flag1 = 1;
				if (!j)flag2 = 1;
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
	for (i = 1; i < size1; ++i)
	{
		if (!matrix[i][0])
			for (j = 0; j < size2; ++j)matrix[i][j] = 0;
	}
	for (j = 1; j < size2; ++j)
	{
		if (!matrix[0][j])
			for (i = 0; i < size1; ++i)matrix[i][j] = 0;
	}
	if (flag1)
		for (j = 0; j < size2; ++j)matrix[0][j] = 0;
	if (flag2)
		for (i = 0; i < size1; ++i)matrix[i][0] = 0;
}

string Solution::minWindow(string s, string t)
{
	int size1 = s.size();
	int size2 = t.size();
	unordered_map <char, int> strmap1, strmap2;
	vector<int> temp;
	int minlength = size1, local;
	for (auto i = t.begin(); i != t.end(); ++i)++strmap1[*i];
	for (int i = 0; i <= size1; ++i)
	{
		if (strmap1.find(s[i]) != strmap1.end())
		{
			temp.push_back(i);
		}
	}
	int m = 0, n = -1, num = strmap1.size(), num1 = 0;
	int size3 = temp.size();
	while (n < size3 - 1 && num1 < num)
	{
		++n;
		++strmap2[s[temp[n]]];
		if (strmap2[s[temp[n]]] == strmap1[s[temp[n]]])++num1;
	}
	if (num1 < num)return "";
	while (strmap2[s[temp[m]]] > strmap1[s[temp[m]]])
	{
		--strmap2[s[temp[m]]];
		++m;
	}
	local = temp[m];
	minlength = temp[n] - temp[m] + 1;
	while (n < size3)
	{
		--strmap2[s[temp[m]]];
		++m;
		--num1;
		while (n < size3 - 1 && num1 < num)
		{
			++n;
			++strmap2[s[temp[n]]];
			if (strmap2[s[temp[n]]] == strmap1[s[temp[n]]])++num1;
		}
		if (num1 < num)break;
		while (strmap2[s[temp[m]]] > strmap1[s[temp[m]]])
		{
			--strmap2[s[temp[m]]];
			++m;
		}
		if (minlength > temp[n] - temp[m] + 1)
		{
			minlength = temp[n] - temp[m] + 1;
			local = temp[m];
		}
	}
	return s.substr(local, minlength);
}

void combine1(int* s, vector<int> temp, int loc, int k, int size, vector<vector<int>>& result)
{
	if (size < k) return;
	if (k == 0)
	{
		result.push_back(temp);
		return;
	}
	for (int i = 0; i <= size - k; ++i)
	{
		temp[loc] = s[i];
		combine1(s + i + 1, temp, loc + 1, k - 1, size - i - 1, result);
	}
}

vector<vector<int>> Solution::combine(int n, int k) {
	vector<vector<int>> result;
	vector<int>temp(k);
	int* s = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)s[i] = i + 1;
	combine1(s, temp, 0, k, n, result);
	return result;
}

vector<vector<int>> subsetresult;
void dfs(vector<int> nums, int loc, vector<int>& temp)
{
	if (loc == nums.size())
	{
		subsetresult.push_back(temp);
		return;
	}
	dfs(nums, loc + 1, temp);
	temp.push_back(nums[loc]);
	dfs(nums, loc + 1, temp);
	temp.pop_back();
}
vector<vector<int>> Solution::subsets(vector<int>& nums) {
	vector<int> temp;
	dfs(nums, 0, temp);
	return subsetresult;
}

int maxlengths = -1;//定义一个全局变量来记录最大矩形的面积
void largestRectangleArea1(int* heights, int n)//把原函数数组参数换成指针，便于递归
{
	int minlength = heights[0], flag = 0, cnt = 0;//minlength记录序列最小值，flag记录最小值位置，cnt统计序列所有数之和
	for (int i = 0; i < n; ++i)
	{
		cnt += heights[i];
		if (heights[i] < minlength)
		{
			minlength = heights[i];
			flag = i;
		}
	}
	if (maxlengths == -1 || maxlengths < minlength * n) maxlengths = minlength * n;//当前序列面积大于最大矩形面积，更新最大矩形面积
	if (cnt == minlength * n)return;//序列所有数之和等于序列面积，即序列中每个数都相等，直接剪枝
	if (flag == 0) return largestRectangleArea1(heights + 1, n - 1);//如果flag在序列最左边，只考虑flag右边的子序列
	else if (flag == n - 1) largestRectangleArea1(heights, n - 1);//同理
	else//flag在中间，那么就需要考虑两边的情况
	{
		largestRectangleArea1(heights, flag);
		largestRectangleArea1(heights + flag + 1, n - flag - 1);
	}
}

int Solution::largestRectangleArea(vector<int>& heights) {
	int n = heights.size();
	largestRectangleArea1(&heights[0], n);
	return maxlengths;
}

int maximalRectangle1(vector<vector<char>>& matrix, int& i, int& j)
{
	int maxrectangle = 0;
	int m = matrix.size();
	int n = matrix[0].size();
	for (int a = i; a < m; ++a)
		for (int b = j; b < n; ++b)
		{
			if (matrix[a][b] == '1')maxrectangle = max(maxrectangle, (a - i + 1) * (b - j + 1));
			else n = b;
			if (n == j) m = i;
		}
	return maxrectangle;
}

int Solution::maximalRectangle(vector<vector<char>>& matrix)
{
	int maxrectangle = 0;
	if (matrix.empty()) return 0;
	for (int i = 0; i < matrix.size(); ++i)
		for (int j = 0; j < matrix[0].size(); ++j)
		{
			if (matrix[i][j] == '1')maxrectangle = max(maxrectangle, maximalRectangle1(matrix, i, j));
		}
	return maxrectangle;
}



//bool Solution::isScramble(string s1, string s2)
//{
//	int n = s1.size();
//	if (n == 1)
//	{
//		if (s1[0] == s2[0])return true;
//		else return false;
//	}
//	if (s1 == s2)return true;
//	string temp1, temp2, temp3, temp4, temp5, temp6, temp11, temp31, temp51;
//	temp1 = s1, temp2 = s2;
//	sort(temp1.begin(), temp1.end());
//	sort(temp2.begin(), temp2.end());
//	if (temp1 != temp2) return false;
//	int flag1=0, flag2=0;
//	for (int i = 0; i < n - 1; ++i)
//	{
//		temp1 = s1.substr(0, i + 1);
//		temp11 = temp1;
//		sort(temp11.begin(), temp11.end());
//		temp2 = s1.substr(i + 1, n - i - 1);
//		temp3 = s2.substr(0, i + 1);
//		temp31 = temp3;
//		sort(temp31.begin(), temp31.end());
//		temp4 = s2.substr(i + 1, n - i - 1);
//		temp5 = s2.substr(n - i - 1, i + 1);
//		temp6 = s2.substr(0, n - i - 1);
//		if (temp11 == temp31&&flag1==0)
//		{
//			flag1 = 1;
//			if (isScramble(temp1, temp3) && isScramble(temp2, temp4))return true;
//		}
//			
//		temp51 = temp5;
//		sort(temp51.begin(), temp51.end());
//		if (temp11 == temp51 && flag2 == 0)
//		{
//			flag2 = 1;
//			if (isScramble(temp1, temp5) && isScramble(temp2, temp6))return true;
//		}
//		if (flag1 && flag2) break;		
//	}
//	return false;
//}

unordered_map<string, unordered_map<string, int>> isScramblemap;
bool Solution::isScramble(string s1, string s2)
{
	//string temp=s1+s2;
	if (isScramblemap.find(s1) != isScramblemap.end() && isScramblemap[s1].find(s2) != isScramblemap[s1].end())
	{
		if (isScramblemap[s1][s2])return true;
		else return false;
	}
	int n = s1.size();
	if (n == 1)
	{
		if (s1[0] == s2[0])
		{
			++isScramblemap[s1][s2];
			return true;
		}
		else
		{
			isScramblemap[s1][s2] = 0;
			return false;
		}
	}
	if (s1 == s2)
	{
		++isScramblemap[s1][s2];
		return true;
	}
	string temp1, temp2, temp3, temp4, temp5, temp6, temp11, temp31, temp51;
	temp1 = s1, temp2 = s2;
	sort(temp1.begin(), temp1.end());
	sort(temp2.begin(), temp2.end());
	if (temp1 != temp2)
	{
		isScramblemap[s1][s2] = 0;
		return false;
	}
	for (int i = 0; i < n - 1; ++i)
	{
		temp1 = s1.substr(0, i + 1);
		temp11 = temp1;
		sort(temp11.begin(), temp11.end());
		temp2 = s1.substr(i + 1, n - i - 1);
		temp3 = s2.substr(0, i + 1);
		temp31 = temp3;
		sort(temp31.begin(), temp31.end());
		temp4 = s2.substr(i + 1, n - i - 1);
		temp5 = s2.substr(n - i - 1, i + 1);
		temp6 = s2.substr(0, n - i - 1);
		if (temp11 == temp31)
		{
			if (isScramble(temp1, temp3) && isScramble(temp2, temp4))
			{
				++isScramblemap[s1][s2];
				return true;
			}
		}
		temp51 = temp5;
		sort(temp51.begin(), temp51.end());
		if (temp11 == temp51)
		{
			if (isScramble(temp1, temp5) && isScramble(temp2, temp6))
			{
				++isScramblemap[s1][s2];
				return true;
			}
		}
	}
	isScramblemap[s1][s2] = 0;
	return false;
}


vector<vector<int>> subsetsWithDup1(unordered_map <int, int> numsmap)
{
	if (numsmap.empty()) return { {} };
	else
	{
		int cnt = numsmap.begin()->second;
		int num = numsmap.begin()->first;
		numsmap.erase(numsmap.begin());
		vector<int> temp;
		vector<vector<int>> result = subsetsWithDup1(numsmap);
		if (numsmap.empty())
		{
			for (int i = 0; i < cnt; ++i)
			{
				temp.push_back(num);
				result.push_back(temp);
			}
		}
		else
		{
			int cns = result.size();
			for (int i = 0; i < cns; ++i)
			{
				vector<int> temp1;
				for (int i = 0; i < cnt; ++i)
				{
					temp.push_back(num);
					temp1 = temp;
					temp1.insert(temp1.end(), result[i].begin(), result[i].end());
					result.push_back(temp1);
				}
			}
		}
	}
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
	unordered_map <int, int> numsmap;
	for (auto i = nums.begin(); i != nums.end(); ++i) ++numsmap[*i];
	return subsetsWithDup1(numsmap);
}


bool Solution::isInterleave(string s1, string s2, string s3)
{
	int size1 = s1.size(), size2 = s2.size(), size3 = s3.size();
	if (size1 + size2 != size3) return false;
	if (s3 == s1 || s3 == s2) return true;
	vector<vector<bool>> result(size1 + 1, vector<bool>(size2 + 1));
	result[size1][size2] = true;
	for (int i = size1; i >= 0; --i)
		for (int j = i == size1 ? size2 - 1 : size2; j >= 0; --j)
		{
			if ((s1[i] == s3[i + j] && result[i + 1][j]) || (s2[j] == s3[i + j] && result[i][j + 1])) result[i][j] = true;
			else result[i][j] == false;
		}
	return result[0][0];
}

int Solution::longestConsecutive(vector<int>& nums) {
	if (nums.empty()) return 0;
	map<int, int> a;
	for (auto i = nums.begin(); i != nums.end(); ++i) a[*i] = 1;
	int ans = 0, result = 1, temp;
	for (auto j = a.begin(); j != a.end(); ++j)
	{
		if (j == a.begin())ans = 1, temp = j->first;
		else
		{
			if (j->first == temp)++ans;
			else ans = 1;
			result = max(result, ans);
			temp = j->first;
		}
	}
	return result;
}

map<int, int> themap, tempmap;

bool Solution::isresult(int i, vector<int>nums)
{
	nums.push_back(i);
	themap.clear();
	for (auto i = nums.begin(); i != nums.end(); ++i)
	{
		++themap[*i];
		if (themap[*i] > 4) return false;
	}
	for (auto i = themap.begin(); i != themap.end(); ++i)
	{
		if (i->second >= 2)
		{
			tempmap = themap;
			tempmap[i->first] -= 2;
			auto j = tempmap.begin();
			while (j != tempmap.end())
			{
				if (j->second == 0)++j;
				else if (j->second >= 3)
				{
					(j->second) -= 3;
				}
				else
				{
					if (tempmap.count(j->first + 1) && tempmap.count(j->first + 2) && tempmap[j->first + 1] * tempmap[j->first + 2])
					{
						--(j->second);
						--tempmap[j->first + 1];
						--tempmap[j->first + 2];
					}
					else break;
				}

			}
			if (j == tempmap.end()) return true;
		}
	}
	return false;
}

//vector<int> Solution::findBuilding(vector<int>& heights) {
//	// write code here
//	int n = heights.size();
//	vector<int> forword(n, 1), last(n, 1);
//	for (int i = n - 1; i >= 0; --i)
//	{
//		if (i == n - 1) forword[i] = 0;
//		else if (i == n - 2) forword[i] = 1;
//		else
//		{
//			for (int j = i + 2; j < n; ++j)
//			{
//				if (heights[i + 1] < heights[j])
//				{
//					forword[i] = forword[j - 1] + 1;
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		if (i == 0)
//		{
//			last[i] = 0;
//			forword[i] += last[i] + 1;
//		}
//		else if (i == 1)
//		{
//			last[i] = 1;
//			forword[i] += last[i] + 1;
//		}
//		else
//		{
//			for (int j = i - 2; j >=0; --j)
//			{
//				if (heights[i - 1] < heights[j])
//				{
//					last[i] = last[j + 1] + 1;
//					break;
//				}
//			}
//			forword[i] += last[i] + 1;
//		}
//	}
//	return forword;
//}

vector<int> Solution::findBuilding(vector<int>& heights)
{
	int n = heights.size();
	vector<int> stack1,forword(n), last(n);
	for (int i = 0; i < n; ++i)
	{
		if (i)
		{
			while (!stack1.empty() && heights[i - 1] >= stack1.back())stack1.pop_back();
			stack1.push_back(heights[i - 1]);
		}
		last[i] = stack1.size();
	}
	stack1.clear();
	for (int i = n - 1; i >= 0; --i)
	{
		if (i != n - 1)
		{
			while (!stack1.empty() && heights[i + 1] >= stack1.back())stack1.pop_back();
			stack1.push_back(heights[i + 1]);
		}
		forword[i] = stack1.size()+last[i]+1;
	}
	return forword;
}

string Solution::minkson(string s, int k)
{
	set<string> result;
	int n = s.size();
	string temp;
	int resultsize = 0;
	for (int i = 0; i < n; ++i)
	{
		temp.clear();
		for (int j = i; j < n && j < i + k; ++j)
		{
			temp.push_back(s[j]);
			result.insert(temp);
			++resultsize;
			if (resultsize > k)
			{
				result.erase(--result.end());
				--resultsize;
			}
		}
	}
	return *(result.rbegin());
}


int Solution::lengthOfLIS(vector<int>& nums)
{
	int n = nums.size();
	vector<int> dp(n,0);
	dp[0] = 1;
	int result = 1;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (nums[j] < nums[i]) dp[i] = max(dp[i], dp[j] + 1);
		}
		result = max(result, dp[i]);
	}
	return result;
}