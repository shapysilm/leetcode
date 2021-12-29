#include <bits/stdc++.h>
using namespace std;

template<typename T> concept number = std::is_arithmetic<T>::value; // 对模板类型T添加std::is_arithmetic<T>::value为true的约束，并对具有约束的新的类型声明number

// 使用具有约束的类型，调用该函数时，T类型必须符合std::is_arithmetic<T>::value等于true，否则编译报错
template<number T> void func(T t)
{
	cout << t + 1<<endl;
}


consteval int compileconst(int n) { return n + 1; }
constexpr int runcompileconst(int n) { return n + 1; }

int main()
{
//#ifdef __cplusplus 
//	cout << __cplusplus;
//#else cout << "不是c++";
//#endif // __cplusplus 

	// 声明一个数值类型的concept

	// 调用
	//func<int>(10); // 正确，std::is_arithmetic<int>::value为true
	//func<double>(20.0); // 正确，std::is_arithmetic<double>::value为true
	//func<string>("ab");

	//struct A
	//{ };
	//func<A>(A()); // 错误，std::is_arithmetic<A>::value为false
	int nn = compileconst(100);
	cout << nn << endl;
	//int nnn= compileconst (nn);   //error , nn is not const
	int nnn = runcompileconst(nn);
	cout << nnn;
	return 0;

}


//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//#include <unordered_map>
//
//using namespace std;
//class Solution {
//public:
//    /* Write Code Here */
//    vector < int > checkDependency(int n, vector < vector < int > > relations, vector < vector < int > > queries) {
//        unordered_map<int, int> mp;
//        for (auto i : relations)
//        {
//            mp[i[1]] = i[0];
//        }
//        int x, y;
//        vector<int>result;
//        for (auto i : queries)
//        {
//            x = i[1];
//            y = i[0];
//            while (mp.count(x) && mp[x] != y)
//            {
//                x = mp[x];
//            }
//            if (mp.count(x)) result.push_back(1);
//            else result.push_back(0);
//        }
//        return result;
//    }
//};
//int main() {
//    vector < int > res;
//
//    int n;
//    cin >> n;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//    int relations_rows = 0;
//    int relations_cols = 0;
//    cin >> relations_rows >> relations_cols;
//    vector< vector < int > > relations(relations_rows);
//    for (int relations_i = 0; relations_i < relations_rows; relations_i++) {
//        for (int relations_j = 0; relations_j < relations_cols; relations_j++) {
//            int relations_tmp;
//            cin >> relations_tmp;
//            relations[relations_i].push_back(relations_tmp);
//        }
//    }
//    int queries_rows = 0;
//    int queries_cols = 0;
//    cin >> queries_rows >> queries_cols;
//    vector< vector < int > > queries(queries_rows);
//    for (int queries_i = 0; queries_i < queries_rows; queries_i++) {
//        for (int queries_j = 0; queries_j < queries_cols; queries_j++) {
//            int queries_tmp;
//            cin >> queries_tmp;
//            queries[queries_i].push_back(queries_tmp);
//        }
//    }
//    Solution* s = new Solution();
//    res = s->checkDependency(n, relations, queries);
//    for (int res_i = 0; res_i < res.size(); res_i++) {
//        cout << res[res_i] << endl;;
//    }
//
//    return 0;
//
//}











































//
//
//
//int search(vector<int> a, int k)
//{
//	int n = a.size();
//	int i = 0, j = n - 1,r=0;
//	if (k<a[0] || k>a[n - 1]) return -1;
//	while (a[r] != k)
//	{
//		r = (i + j) / 2;
//		if (a[r] < k) j = r - 1;
//		else if (a[r] > k) i = r + 1;
//		else return r;
//	}
//	return -1;
//}



















//给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
//
//
//示例 1：
//
//输入：nums = [1, 2, 3]
//输出： [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]]
//
//
//示例 2：
//
//输入：nums = [0, 1]
//输出： [[0, 1], [1, 0]]
//
//
//示例 3：
//
//输入：nums = [1]
//输出： [[1]]
//class Solution {
//public:
//	vector<vector<int>> permute(vector<int>& nums) {
//
//	}
//};
//vector<vector<int>> result;
//void dfs(vector<int>& nums, int loc)
//{
//	int n = nums.size();
//	if (loc == n - 1)
//	{
//		result.push_back(nums);
//		return;
//	}
//	for (int i = loc; i < n; ++i)
//	{
//		swap(nums[loc], nums[i]);
//		dfs(nums, loc + 1);
//		swap(nums[loc], nums[i]);
//	}
//}
//
//vector<vector<int>> permute(vector<int>& nums)
//{
//	dfs(nums,0);
//	return result;
//}
//
//int main()
//{
//	vector<int> nums = { 1, 2, 3 };
//	vector<vector<int>> result0=permute(nums);
//	for (auto i = result.begin(); i!=result.end(); ++i)
//	{
//		for (auto j = i->begin(); j != i->end(); ++j)
//		{
//			cout << *j << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}























//int main()
//{
//	long long a = 13987654321;
//	string result;
//	string temp;
//	while (a > 999)
//	{
//		for (int i = 0; i < 4; ++i)
//		{
//			temp.push_back(a % 10 + '0');
//			a = a / 10;
//		}
//		temp.push_back('-');
//	}
//	while (a > 0)
//	{
//		temp.push_back(a % 10 + '0');
//		a = a / 10;
//	}
//	reverse(temp.begin(), temp.end());
//	result = temp;
//	cout << result;
//	return 0;
//}


























//int main()
//{
//	int n, k, x;
//	cin >> n >> k >> x;
//	vector<int> weight(n);
//	for (int i = 0; i < n; ++i) cin >> weight[i];
//	sort(weight.begin(), weight.end());
//	vector<int> distance;
//	for (int i = 0; i < n-1; ++i)
//	{
//		if (weight[i + 1] - weight[i] > x) distance.push_back(weight[i + 1] - weight[i]);
//	}
//	sort(distance.begin(),distance.end());
//	int cnt = 0;
//	for (int i = 0; i < distance.size(); ++i)
//	{
//		if (k >= (distance[i]-1) / x)
//		{
//			k -= (distance[i]-1) / x;
//			++cnt;
//		}
//	}
//	cout << distance.size() - cnt + 1;
//	return 0;
//}


































//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; ++i) cin >> a[i];
//	unordered_map<int, int> m1, m2, m3;
//	int mx = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (!m3.count(a[i]))m1[a[i]] = i + 1;
//		m2[a[i]] = i + 1;
//		++m3[a[i]];
//		mx = max(mx, m3[a[i]]);
//	}
//	int flag1=0, flag2=INT_MAX;
//	for (auto i =m3.begin();i!=m3.end();++i)
//	{
//		if (i->second == mx)
//		{
//			if (m2[i->first] - m1[i->first] < flag2 - flag1)
//			{
//				flag2 = m2[i->first];
//				flag1 = m1[i->first];
//			}
//		}
//	}
//	cout << flag1 << flag2;
//	return 0;
//}





























//int getJumpCount(int a, int b, int c, int n) {
//	// write code here
//	if (n >= c) return getJumpCount(a, b, c, n - c) + 1;
//	if (n >= b) return getJumpCount(a, b, c, n - b) + 1;
//	if (n >= a) return getJumpCount(a, b, c, n - a) + 1;
//	return 0;
//}
//
//int main()
//{
//	cout << getJumpCount(1,3,5,14);
//	return 0;
//}




//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	vector<pair<int, int>> tv;
//	string temp;
//	pair<int, int> temp1;
//	for (int i = 0; i < m+n; ++i)
//	{
//		cin >> temp;
//		temp1.first = (temp[0] - '0') * 1000 + (temp[1] - '0') * 100 + (temp[3] - '0') * 10 + (temp[4] - '0');
//		temp1.second = (temp[6] - '0') * 1000 + (temp[7] - '0') * 100 + (temp[9] - '0') * 10 + (temp[10] - '0');
//		tv.push_back(temp1);
//	}
//	sort(tv.begin(), tv.end(), [](pair<int, int> a, pair<int, int> b) {
//		if (a.second == b.second) return a.first > b.first;
//		else return a.second < b.second;
//	});
//	int flag = 0, cnt = 0;
//	for (int i = 0; i < m + n; ++i)
//	{
//		if (i == 0)
//		{
//			++cnt;
//			flag = tv[i].second;
//		}
//		else
//		{
//			if (tv[i].second >= flag)
//			{
//				++cnt;
//				flag = tv[i].second;
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}
















//int main()
//{
//	int n, a, b;
//	unordered_map<int,int> mp;
//	for (int i = 0; i < n-1; ++i) mp[i+1]=i+2;
//	mp[n] = 1;
//	int cnt = n;
//	int front = n;
//	while (cnt > 1)
//	{
//		for (int i = 0; i < a-1; ++i) front = mp[front];
//		mp[front] = mp[mp[front]];
//		--cnt;
//		if (cnt == 1) break;
//		for (int i = 0; i < b - 1; ++i) front = mp[front];
//		mp[front] = mp[mp[front]];
//		--cnt;
//	}
//	cout << front;
//	return 0;
//}


















//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> a(n);
//	for (int i = 0; i < n; ++i)cin >> a[i];
//	cout << n;
//	return 0;
//}

//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> a(n);
//	for (int i = 0; i < n; ++i) cin >> a[i];
//	sort(a.begin(), a.end());
//	int usenum = 0;
//	while (usenum<m)
//	{
//		++usenum;
//		++a[0];
//		int x = 1;
//		while (a[0] > a[x])++x;
//		swap(a[0], a[x - 1]);
//	}
//	cout << a[0];
//	return 0;
//}
































//vector<int> a;
//int flag=0;
//int n, m, val;
//
//void dfs(int i,int cnt,int cns)
//{
//	if (cnt>m) return;
//	if (i == n - 1)
//	{
//		if (cns + a[i] == val)
//		{
//			flag = 1;
//			return;
//		}
//		if(cnt+1<=m&& cns + a[i] * a[i] * a[i]==val)
//		{
//			flag = 1;
//			return;
//		}
//		return;
//	}
//	else
//	{
//		dfs(i + 1, cnt, cns + a[i]);
//		dfs(i + 1, cnt + 1, cns +  a[i] * a[i] * a[i]);
//	}
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		flag = 0;
//		cin >> n >> m >> val;
//		a= vector<int>(n);
//		for (int i = 0; i < n; ++i) cin >> a[i];
//		dfs(0,0,0);
//		if(flag==0) cout << "NO" << endl;
//		else cout << "YES" << endl;
//	}
//	return 0;
//}
































//vector<vector<int>> routemap;
//vector<int> route;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m, k;
//		cin >> n >> m >> k;
//		routemap = vector<vector<int>>(n + 1, vector<int>(n + 1,0));
//		int u, v;
//		while (m--)
//		{
//			cin >> u >> v;
//			routemap[u][v] = 1;
//			routemap[v][u] = 1;
//		}
//		route = vector<int>(k);
//		int flag = 0;
//		for (int i = 0; i < k; ++i)
//		{
//			cin >> route[i];
//			if (i > 0&&routemap[route[i]][route[i-1]]==0)
//			{
//				cout << "NO" << endl;
//				flag = 1;
//				break;
//			}
//		}
//		if(flag==0) cout << "YES" << endl;
//	}
//	return 0;
//}

//unordered_map<int, int> routemap;
//vector<int> route;
//
//int find(int u)
//{
//	if (u != routemap[u]) u = find(routemap[u]);
//	return u;
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m, k;
//		cin >> n >> m >> k;
//		routemap.clear();
//		int u, v;
//		while (m--)
//		{
//			cin >> u >> v;
//			if (!routemap.count(u) && !routemap.count(v))
//			{
//				routemap[u] = u;
//				routemap[v] = u;
//			}
//			else if(routemap.count(u) && !routemap.count(v))
//			{
//				u = find(u);
//				routemap[v] = u;
//			}
//			else if (!routemap.count(u) && routemap.count(v))
//			{
//				v = find(v);
//				routemap[u] = v;
//			}
//			else
//			{
//				u = find(u);
//				v = find(v);
//				if(u!=v) routemap[v] = u;
//			}
//		}
//		route = vector<int>(k);
//		int flag,temp=0;
//		for (int i = 0; i < k; ++i)
//		{
//			cin >> route[i];
//			if (temp == 0)
//			{
//				if (i == 0)
//				{
//					flag = find(route[i]);
//				}
//				else
//				{
//					if (find(route[i]) != flag)
//					{
//						cout << "NO" << endl;
//						temp = 1;
//					}
//				}
//			}
//			
//		}
//		if(temp==0) cout << "YES" << endl;
//	}
//	return 0;
//}






































//class MyClass
//{
//	short a;
//	int b;
//	void* c;
//};
//
//int main()
//{
//	MyClass* p = new MyClass[3];
//	//cout << sizeof(short) << endl << sizeof(int) << endl << sizeof(char*);
//	//cout << sizeof(p) <<endl<< sizeof(*p)<<endl << sizeof(p[0]) << endl;
//	map<char, char> a;
//	a[0] = 1;
//	cout << sizeof(*a.begin());
//	return 0;
//}





//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> t(n), dp(n);
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> t[i];
//        if (i == 0) dp[i] = t[i];
//        else dp[i] = t[i] + dp[i - 1];
//    }
//    int time;
//    while (m--)
//    {
//        cin >> time;
//        int i = 0;
//        while (i < n && dp[i] <= time)++i;
//        cout << i << endl;
//    }
//    return 0;
//}

















//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n, k;
//        cin >> n >> k;
//        vector<int> ini(n), outi(n), flag(n + 1, 0);
//        for (int i = 0; i < n; ++i) cin >> ini[i];
//        for (int i = 0; i < n; ++i) cin >> outi[i];
//        unordered_set<int> sta;
//        int i = 0, j = 0, cnt = 0;
//        while (j < n)
//        {
//            if (sta.count(outi[j]))
//            {
//                sta.erase(outi[j]);
//                ++j;
//            }
//            else
//            {
//                if (sta.size() < k)
//                {
//                    if (flag[ini[i]] == 0)sta.insert(ini[i]);
//                    ++i;
//                }
//                else
//                {
//                    flag[outi[j]] = 1;
//                    ++cnt;
//                    ++j;
//                }
//            }
//        }
//        cout << cnt << endl;
//    }
//    return 0;
//}

























//int main()
//{
//    int s=1;
//    int cnt=0;
//    cout << (1 ^ 0);
//    /*while (s > 0)
//    {
//        s = s ^ (s - 1);
//        ++cnt;
//    }
//    cout << cnt;*/
//    return 0;
//}

































//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> vec;
//    while (n > 0)
//    {
//        vec.push_back(n % 10);
//        n /= 10;
//    }
//    int cnt = 0;
//    for (int i = 0; i < vec.size(); ++i)
//    {
//        if (vec[i] != 0 && n % vec[i] == 0)++cnt;
//    }
//    cout << cnt;
//    return 0;
//}








































//int main()
//{
//	int r,n;
//	cin >> r>>n;
//	vector<pair<int, int>> xy(n);
//	int xmin=INT_MAX, ymin=INT_MAX,xmax=0,ymax=0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> xy[i].first >> xy[i].second;
//		xmin = min(xmin, xy[i].first);
//		ymin = min(ymin, xy[i].second);
//		xmax = max(xmax, xy[i].first);
//		ymax = max(xmax, xy[i].second);
//	}
//	int xlim = xmax + r, ylim = ymax + r;
//	int xresult = -1, yresult = -1;
//	int maxhit = 0;
//	for (int x = xlim; x >= xmin; --x)
//	{
//		for (int y = ylim; y >= ymin; --y)
//		{
//			int cnt = 0;
//			for (int i = 0; i < n; ++i)
//			{
//				if ((x - xy[i].first) * (x - xy[i].first) + (y - xy[i].second) * (y - xy[i].second) <= r * r)
//					++cnt;
//			}
//			if (cnt>maxhit)
//			{
//				xresult = x;
//				yresult = y;
//				maxhit = cnt;
//			}
//		}
//	}
//	cout << xresult << " " << yresult;
//	return 0;
//}


































//vector<vector<int>> result;
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	vector<vector<int>> vec(n * m + 1, vector<int>(4));
//	for (int i = 1; i <= n * m; ++i)
//	{
//		cin >> i;
//		for (int j = 0; j < 4; ++j) cin >> vec[i][j];
//	}
//	result= vector<vector<int>>(n, vector<int>(m,-1));
//	queue<int> q;
//	for (int i = 1; i <= n * m; ++i)
//	{
//		if (vec[i][0] + vec[i][1] == 0) q.push(i);
//	}
//	result[0][0] = q.front();
//	unordered_map<int, int> mp;
//	mp[q.front()] = 0;
//	while (!q.empty())
//	{
//		int temp = q.front();
//		q.pop();
//		int a = mp[temp] / m;
//		int b = mp[temp] % m;
//		if (vec[temp][2] != 0 && result[a][b + 1] == -1)
//		{
//			result[a][b + 1] = vec[temp][2];
//			mp[vec[temp][2]] = mp[temp] + 1;
//			q.push(vec[temp][2]);
//		}
//		if (vec[temp][3] != 0 && result[a+1][b] == -1)
//		{
//			result[a+1][b] = vec[temp][3];
//			mp[vec[temp][3]] = mp[temp] + m;
//			q.push(vec[temp][3]);
//		}
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j) cout << result[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}









































//int* h;

//int cansee(int i, int j)
//{
//	int maxlength = 0;
//	for (int r = i + 1; r < j; ++r) maxlength = max(maxlength, h[r]);
//	if (maxlength > h[i] && maxlength > h[j]) return 0;
//	else return 1;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m;
//		cin >> n >> m;
//		h = new int[n];
//		for (int i = 0; i < n; ++i) cin >> h[i];
//		--m;
//		vector<int>flag;
//		int maxlength1 = 0, maxlength2 = 0;
//		int mlen = h[m];
//		for (int i = m + 1; i < n; ++i)
//		{
//			if (maxlength1 > h[m] && maxlength1 > h[i])flag.push_back(i);
//			else maxlength1 = max(h[m], h[i]);
//		}
//		for (int i = m - 1; i >= 0; --i)
//		{
//			if (maxlength2 > h[m] && maxlength2 > h[i])flag.push_back(i);
//			else maxlength2 = max(h[m], h[i]);
//		}
//		sort(flag.begin(), flag.end());
//		int flagsize = flag.size();
//		vector<int>eye(flagsize, 0);
//		for (int i = 0; i < flagsize; ++i)
//		{
//			for (int j = i + 1; j < flagsize; ++j)
//			{
//				if (eye[i] == 0 && eye[j] == 0  )
//				{
//					if (cansee(flag[i], flag[j]))
//					{
//						if (h[flag[i]] > h[flag[j]])
//						{
//							eye[j] = 1;
//						}
//						else eye[i] = 1;
//					}
//					
//				}
//			}
//		}
//		int cnt = 0;
//		for (int i = 0; i < flagsize; ++i)
//		{
//			if (eye[i] == 0) ++cnt;
//		}
//		cout << cnt<<endl;
//
//	}
//	return 0;
//}
































//第一题
//int main()
//{
//	int t,n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n; 
//		string a;
//		if (n == 0) a = "0";
//		while (n > 0)
//		{
//			int temp = n % 10;
//			n = n / 10;
//			if (temp == 0) a.push_back('0');
//			while (temp>0)
//			{
//				int temp1 = temp % 2;
//				temp = temp / 2;
//				a.push_back(temp1 + '0');
//			}
//		}
//		/*int i;
//		for ( i = 0; i<a.size()&&a[i] == '0'; ++i);
//		string b = a.substr(i);*/
//		string c;
//		for (int j = 0; j < a.size(); ++j)
//		{
//			if (j == 0)
//			{
//				if (a[j] != '0') c.push_back(a[j]);
//			}
//			else
//			{
//				if(a[j]!=a[j-1]) c.push_back(a[j]);
//			}
//		}
//		cout << c<<endl;
//	}
//	return 0;
//}



































//int findit(int i,int j)
//{
//	int temp
//	if(i>0) 
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>> a(n, vector<int>(m));
//	vector<vector<int>> dp(n, vector<int>(m,INT_MAX));
//	vector<vector<int>> flag(n, vector<int>(m,0));
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			cin >> a[i][j];
//		}
//	}
//	cout << findit(n - 1, m - 1);
//
//	///*dp[0][0] = 0;
//	//flag[0][0] = 1;*/
//	//int cnt = 0;
//	//for (int i = 0; i < n; ++i)
//	//{
//	//	for (int j = 0; j < m; ++j)
//	//	{
//	//		if (a[i][j] == a[0][0])
//	//		{
//	//			dp[i][j] = 0;
//	//			flag[i][j] = 1;
//	//			++cnt;
//	//		}
//	//	}
//	//}
//	//while (cnt < n * m)
//	//{
	//	for (int i = 0; i < n; ++i)
	//	{
	//		for (int j = 0; j < m; ++j)
	//		{
	//			if(flag[i][j]==0)
	//		}
	//}
	
//}







































//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	vector<int> t(n);
//	vector<int> machine(m);
//	for (int i = 0; i < n; ++i) cin >> t[i];
//	sort(t.begin(), t.end());
//	int maxconsume = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		int minmachine = INT_MAX;
//		int flag = 0;
//		for (int j = 0; j < m; ++j)
//		{
//			if (machine[j] < minmachine)
//			{
//				minmachine = machine[j];
//				flag = j;
//			}
//		}
//		machine[flag] += t[i];
//		maxconsume = max(maxconsume, machine[flag]);
//	}
//	cout << maxconsume;
//}











































//int main()
//{
//	string a;
//	cin >> a;
//	vector<string> result;
//	int n = a.size();
//	vector<int> flag(n);
//	vector<int> themap1(26, 0);
//	vector<int> themap2(26, 0);
//	vector<int> b(26, 0);
//	for (int i = 0; i < n; ++i)
//	{
//		if (a[i] >= 'a' && a[i] <= 'z') ++themap1[a[i] - 'a'];
//		else if (a[i] >= 'A' && a[i] <= 'Z') ++themap2[a[i] - 'A'];
//	}
//	int cnt = 0;
//	for (int i = 0; i < 26; ++i)
//	{
//		b[i] = min(themap1[i], themap2[i]);
//		cnt += b[i];
//	}
//	while (cnt > 0)
//	{
//		int maxlength = 0;
//		int temp = 0;
//		int flag = 0;
//		int j=0;
//		while (flag<26)
//		{
//			if (b[flag])
//			{
//				if (++temp > maxlength)
//				{
//					maxlength = temp;
//					j = flag;
//				}
//			}
//			else
//			{
//				temp = 0;
//			}
//			++flag;
//		}
//		int i = j - maxlength+1;
//		string c;
//		for (int x = i; x <= j; ++x)
//		{
//			--b[x];
//			--cnt;
//			c.push_back('A' + x);
//			c.push_back('a' + x);
//		}
//		result.push_back(c);
//	}
//	sort(result.begin(), result.end(), [](string a, string b) 
//	{
//		if (a[0] < b[0] || (a[0] == b[0] && a.size() > b.size())) return 1;
//		else return 0;
//	}
//	);
//	for (auto i = result.begin(); i < result.end(); ++i) cout << *i << endl;
//	return 0;
//}

































//int main()
//{
//	int n,m;
//	cin >> n;
//	vector<vector<int>> a(n, vector<int>(n));
//	for (auto i = a.begin(); i != a.end(); ++i)
//		for (auto j = i->begin(); j != i->end();++j) cin >> *j;
//	cin >> m;
//	m %= 4;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			if (m == 0) cout << a[i][j] << " ";
//			else if (m == 1)  cout << a[n - 1 - j][i] << " ";
//			else if (m == 2) cout << a[n - 1 - i][n - 1 - j] << " ";
//			else cout << a[j][n - 1 - i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}




//3
//1 2 3
//4 5 6
//7 8 9































//int main()
//{
//	int n=6;
//	int num[6] = {100,4,200,1,3,2};
//	//int num[10] = {0,3,7,2,5,8,4,6,0,1};
//	if (n == 0) cout << 0;
//	else
//	{
//		sort(num, num + n);
//		int j = 1, maxlength = 1, temp = 1;
//		while (j < n)
//		{
//			if (num[j] == num[j - 1] + 1)
//			{
//				++temp;
//				maxlength = max(maxlength, temp);
//				++j;
//			}
//			else
//			{
//				++j;
//				temp = 1;
//			}
//		}
//		cout << maxlength;
//	}
//	return 0;
//}




















//int findit(int* a, int n)
//{
//	unordered_map<int, int> map1;
//	for (int i = 0; i < n; ++i)
//	{
//		if (++map1[a[i]] > n / 2) return a[i];
//	}
//	return -1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; ++i) cin >> a[i];
//	cout << findit(a, n);
//	return 0;
//}























//int main()
//{
//	int n;
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; ++i) cin >> a[i];
//	sort(a, a + n);
//	int x=0, y=0, cnt=0;
//	for (int i = 0; i < n; ++i)
//	{
//		cnt += a[i];
//		if (n % 2 == 0)
//		{
//			if (i % 2)x += a[i];
//		}
//		else
//		{
//			if(x==0||x%2) x += a[i];
//		}
//	}
//	y = cnt - x;
//	if (x > y)swap(x, y);
//	cout << x << " " << y;
//	return 0;
//}

//int ReverseStr(char* pStr)
//{
//	string x = pStr;
//	int n = x.size();
//	if (n == 0) return 1;
//	_strrev(pStr);
//	//for (int i = 0, j = n - 1; i < j; ++i, --j) swap(pStr[i], pStr[j]);
//	return 0;
//}

//string order(int n, int** t)
//{
//
//}

//int main()
//{
//	int n,m;
//	cin >> n>>m;
//	int* result = new int[n + 1];
//	for (int i = 0; i <= n; ++i) result[i] = i;
//	int (*t)[2] = new int[m][2];
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> t[i][0] >> t[i][1];
//		if (result[t[i][0]] > result[t[i][1]])
//		{
//			result[t[i][1]] += ((result[t[i][0]] - result[t[i][1]]) / n + 1) * n;
//		}
//	}
//	sort(result + 1, result + n + 1);
//	for (int i = 1; i <= n; ++i)
//	{
//		result[i] = (result[i] - 1) % n + 1;
//		cout << result[i] << " ";
//	}
//	return 0;
//}



//int f(char* a, char* b)
//{
//	if (a[0] == '\0' || b[0] == '\0') return 0;
//	if (a[0] == b[0]) return f(a + 1, b + 1)+1;
//	else return max(f(a + 1, b), f(a, b + 1));
//}

//int main()
//{
//	/*string a, b;
//	cin >> a >> b;
//	cout << f(&a[0], &b[0]);*/
//	/*int a1 = a.size(),b1=b.size();
//	int maxlength = 0;
//	for (int i = 0; i < a1; ++i)
//	{
//		for (int j = 0; j < b1; ++j)
//		{
//			int m = i, n = j,temp=0;
//			while (m < a1 && n < b1 && a[m++] == b[n++])++temp;
//			maxlength = max(maxlength, temp);
//		}
//	}
//	cout << maxlength;*/
//	char* a = nullptr;
//	cout << a;
//	return 0;
//}




//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; ++i) cin >> a[i];
//	sort(a, a + 10);
//	for (int i = 0; i < 10; ++i) cout << a[i] << " ";
//	return 0;
//}































//int main()
//{
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	if (a > 0) cout << (b - a) * e;
//	else if (a < 0)
//	{
//		if (b <= 0) cout << (b - a) * c;
//		else cout << (0 - a) * c + d + b * e;
//	}
//	return 0;
//}
//int main()
//{
//	int l, r, a;
//	cin >> l >> r >> a;
//	int result = 0;
//	for (int i = l; i < r; ++i)
//	{
//		if (r - i < a) break;
//		result += (r - i) / a;
//	}
//	cout << result;
//	return 0;
//}
//int n, m;
//int* a;
//int main()
//{
//	cin >> n >> m;
//	a = new int[n];
//	for (int i = 0; i < n; ++i) cin >> a[i];
//
//}


//unordered_set<string> conceptset;
//unordered_map<string, string> parntmap, instansemap;
//
//void joinit(string resultclass)
//{
//	for (auto i = parntmap.begin(); i != parntmap.end(); ++i)
//	{
//		if (i->second == resultclass)
//		{
//			conceptset.insert(i->first);
//			joinit(i->first);
//		}
//	}
//}

//int main()
//{
//	
//	set<string> result;
//	string resultclass;
//	int n;
//	cin >> n;
//	string temp1, temp2, temp3;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> temp1 >> temp2 >> temp3;
//		if (temp2 == "subClassOf")parntmap[temp1] = temp3;
//		else instansemap[temp1] = temp3;
//	}
//	cin >> resultclass;
//	conceptset.insert(resultclass);
//	joinit(resultclass);
//	for (auto i = instansemap.begin(); i != instansemap.end(); ++i)
//	{
//		if (conceptset.find(i->second) != conceptset.end()) result.insert(i->first);
//	}
//	for (auto i = result.begin(); i != result.end(); ++i) cout << *i << " ";
//	return 0;
//}

//vector<vector<int>> map1,flag;
//vector<vector<char>> result;
//vector<unordered_set<int>> set1;
//int m, n;
//
//void joinit(int i, int j, unordered_set<int> &temp)
//{
//	flag[i][j] = 1;
//	temp.insert(i * m + j);
//	if (i > 0 && !flag[i - 1][j] && !map1[i-1][j]) joinit(i - 1, j, temp);
//	if (j > 0 && !flag[i][j - 1] && !map1[i][j - 1]) joinit(i, j - 1, temp);
//	if (i < m - 1 && !flag[i + 1][j] && !map1[i + 1][j]) joinit(i + 1, j, temp);
//	if(j<n-1&& !flag[i][j + 1] && !map1[i][j + 1]) joinit(i, j + 1, temp);
//}
//
//int main()
//{
//	cin >> m >> n;
//	map1 = vector<vector<int>>(m, vector<int>(n));
//	result= vector<vector<char>>(m, vector<char>(n));
//	for (int i = 0; i < m; ++i)
//		for (int j = 0; j < n; ++j)
//		{
//			cin >> map1[i][j];
//			if (map1[i][j]) result[i][j] = '_';
//			else result[i][j] = 'x';
//		}
//	int cnt;
//	flag= vector<vector<int>>(m, vector<int>(n, 0));
//	for (int i = 0; i < m; ++i)
//		for (int j = 0; j < n; ++j)
//		{
//			if (!flag[i][j] && !map1[i][j])
//			{
//				unordered_set<int> temp;
//				joinit(i, j,temp);
//				set1.push_back(temp);
//			}
//		}
//	for (auto i = set1.begin(); i != set1.end(); ++i)
//	{
//		for (auto j = i->begin(); j != i->end(); ++j)cout << (*j) / m << " " << (*j) % m<<"\t";
//		cout << endl;
//	}
//
//	//cout << (set1.size() - 1) * 2;
//	return 0;
//
//}