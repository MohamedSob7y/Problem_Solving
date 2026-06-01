#pragma region Old Way For Query Before Partial Sum
//https://www.canva.com/design/DAGDWuMi8dI/PWW6mC3Gekuoqv6DT_DgZA/view?utm_content=DAGDWuMi8dI&utm_campaign=designshare&utm_medium=link2&utm_source=uniquelinks&utlId=h34ddf14295#78 
//Sildes
//Enter Array has 2 6 -3 4 9  15 8 2 5   
//Query Add 3 in Rang[0,4]
//Add -2 in Range(4,8)
//Add 5 in Rang(2,3)
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cout << "Enter Size Of Array: \n";
//    cin >> n;
//
//    int arr[3000];
//
//    // إدخال المصفوفة
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter Element " << i + 1 << ": \n";;
//        cin >> arr[i];
//    }
//
//    int q;
//    cout << "Enter Number Of Query \n";
//    cin >> q; // عدد الـ queries
//
//    while (q--)
//    {
//        int l, r, val;
//        cout << "Enter Range \n";
//        cin >> l >> r;
//        cout << "Enter Val: \n";
//        cin >> val;
//
//        // التعديل المباشر
//        for (int i = l; i <= r; i++)
//        {
//            arr[i] += val;
//        }
//    }
//
//    // طباعة الناتج
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//	return 0;
//}

#pragma endregion
//=============================================
#pragma region  New Way Using Partial Sum
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, arr[15000], D[15000] = { 0 };
//	cout << "Enter Size of array: : \n";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Enter Element " << i + 1 << ": \n";
//		cin >> arr[i];
//	}
//	int Query;
//	cout << "Enter Number Of Query: \n";
//	cin >> Query;
//	while (Query--)
//	{
//		int l, r, val;
//		cout << "Enter Range : \n";
//		cin >> l >> r;
//		cout << "Enter Value: \n";
//		cin >> val;
//		D[l] += val;
//		//This Condtion عشان لو r هو اخر عنصر فى الarray ولو زودت عليه ابقى اعمله Ignore
//		if (r + 1 < n)
//			D[r + 1] -= val;
//	}
//	// Prefix Sum على D
//	//لازم ابدا من الواحد عشان لو بدات من صفر هبقى كدة بجيب index -1 ودا مش موجود فالبتالى Exception
//	for (int i = 1; i < n; i++)
//	{
//		D[i] += D[i - 1];
//	}
//
//	// تطبيق التعديلات على arr=> Prefix Summation 
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] += D[i];
//	}
//
//	// طباعة الناتج
//	cout << "Final Array:\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
#pragma endregion
//=============================================
#pragma region Before Frequncy_After FreqnecyWithVectorandMapWithInt_String_Chars
//#include<iostream>
//#include<map>
//#include<vector>
//#include<unordered_map>
//#include<string>
//using namespace std;
//int main()
//{
     #pragma region Before Frequency 
	//int n;
	//cin >> n;

	//int A[n];
	//for (int i = 0; i < n; i++) {
	//	cin >> A[i];
	//}

	//// نعد لكل عنصر
	//for (int i = 0; i < n; i++) {
	//	int count = 0;

	//	for (int j = 0; j < n; j++) {
	//		if (A[j] == A[i]) {
	//			count++;
	//		}
	//	}

	//	cout << "Frequency of " << A[i] << " is " << count << endl;
	//}

#pragma endregion
	 //============================================================
     #pragma region Freqnccy With Vector_Int
	//With Freqnccy With Vector_Int O(1)
	/*int n;
	cin >> n;
	vector<int>arr(n);
	const int Max_Val = 1e6 + 1;
	vector<int> Freq(Max_Val, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		Freq[arr[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (Freq[arr[i]] > 0)
		{
			cout << "Frequency of " << arr[i] << " is " << Freq[arr[i]] << "\n";
			Freq[arr[i]] = 0;
		}
	}*/
#pragma endregion
	 //============================================================
     #pragma region Freqnccy With Map_Int
	//With Freqnccy With Map_Int O(1)
	/*int n,x;
	cin >> n;
	map<int, int>m;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		m[x]++;
	}
	for (auto i : m) {
		cout <<"The Frequecny Of "<< i.first <<" Is : " << i.second << "\n";
	}*/

#pragma endregion
     //============================================================
     #pragma region Freqnccy With chars
	//const int Max_Val = 1e6 + 1;
	//string s;
	//cin >> s;

	//vector<int> freq(26, 0);

	//// عدّ الحروف
	//for (int i = 0; i < s.size(); i++) {
	//	freq[s[i] - 'a']++;
	//}

	//// تحقق هل كل الحروف موجودة
	//for (int i = 0; i < 26; i++) {
	//	if (freq[i] == 0) {
	//		cout << "not a pangram\n";
	//		return 0;
	//	}
	//}

	//cout << "pangram\n";
#pragma endregion
	 //============================================================
     #pragma region Find mostOccernce الاكثر ظهورا من array Of String
    //With Freqnccy With stringWith UnOrderedMap [Find mostOccernce الاكثر ظهورا من array Of String]
	/*string MostOccerance;
	unordered_map<string, int>Freq;
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		Freq[s]++;
	}
	int mx = 0;
	string mostOccurring;

	for (auto& p : Freq) {
		if (p.second > mx) {
			mx = p.second;
			mostOccurring = p.first;
		}
	}

	cout << "The Most Occerance is: " << mostOccurring << "\n";*/
#pragma endregion
	//============================================================
//	return 0;
//}




#pragma endregion
//=============================================
#pragma region Problem فى الشرح 
//https://codeforces.com/problemset/problem/816/B 
/*
🎯 المسألة بتقول إيه؟

عندك:

شوية Recipes (وصفات)
كل Recipe بتقول:
"درجة الحرارة المناسبة من L إلى R"
🧠 المطلوب

درجة الحرارة تكون valid (admissible) لو:

على الأقل k recipes موافقين عليها

🧪 نشتغل على المثال الأول
Input:
n = 3
k = 2
Recipes:
1) 91 94
2) 92 97
3) 97 99
✏️ نرسمها كده (مهم جدًا)

هنكتب درجات الحرارة ونشوف كل واحدة كام Recipe غطاها

نبدأ من 91 إلى 99
درجة 91
recipe 1 → يشملها
recipe 2 → لا
recipe 3 → لا

👉 العدد = 1 ❌ (أقل من k)

درجة 92
recipe 1 → يشملها
recipe 2 → يشملها
recipe 3 → لا

👉 العدد = 2 ✅

درجة 93
recipe 1 → نعم
recipe 2 → نعم

👉 العدد = 2 ✅

درجة 94
recipe 1 → نعم
recipe 2 → نعم

👉 العدد = 2 ✅

درجة 95
recipe 1 → لا
recipe 2 → نعم

👉 العدد = 1 ❌

درجة 96
recipe 2 فقط

👉 العدد = 1 ❌

درجة 97
recipe 2 → نعم
recipe 3 → نعم

👉 العدد = 2 ✅

درجة 98
recipe 3 فقط

👉 العدد = 1 ❌

درجة 99
recipe 3 فقط

👉 العدد = 1 ❌

📌 إذن الدرجات المقبولة (admissible)
92, 93, 94, 97
🧠 دلوقتي الأسئلة
السؤال 1:
92 94

يعني:

احسب كام درجة valid بين 92 و 94

نشوف:
92 ✅
93 ✅
94 ✅

👉 الإجابة = 3

السؤال 2:
93 97

نشوف:

93 ✅
94 ✅
95 ❌
96 ❌
97 ✅

👉 الإجابة = 3

السؤال 3:
95 96
95 ❌
96 ❌

👉 الإجابة = 0

السؤال 4:
90 100

نشوف كل valid:

92, 93, 94, 97

👉 الإجابة = 4

🔥 الخلاصة اللي لازم تفهمها

المسألة ببساطة:

كل درجة حرارة لها عدد Recipes بتدعمها
لو العدد ≥ k → تبقى valid

كل سؤال:

عد كام درجة valid في range

🧠 تخيلها كده (مهم جدًا)

عندك خط أرقام:

90 91 92 93 94 95 96 97 98 99 100

وبتكتب تحت كل رقم:

عدد الناس (recipes) اللي موافقين عليه

وبعدين:

✔ أي رقم عليه ≥ k → نحط عليه علامة صح
❌ غير كده → نسيبه

🎯 الهدف النهائي

كل سؤال = "عد عدد العلامات الصح في الرينج"
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	return 0;
//}
#pragma endregion
//=============================================




#pragma region Problem Tasks in Recursion
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//
//	int n, minute;
//	cin >> n >> minute;
//	vector<int>tasks(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tasks[i];
//	}
//	int count = 0;
//	sort(tasks.begin(), tasks.end());
//	for(auto& task : tasks)
//	{
//		if(task <= minute)
//		{
//			count++;
//			minute -= task;
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout << count << "\n";
//	
//
//
//
//
//	return 0;
//}
#pragma endregion
//=============================================
#pragma region BackTracking Find Subset With Given Sum 
//#include <iostream>
//#include <vector>
//using namespace std;
//int n, sum;
//vector<int> arr;
//vector<int> path;//الارقام اللى بخترعها بخزنها فى Vector Call Path
//int CurrentSum = 0;
////i is Index of Element in Array
//void solve(int i) {
//	if (CurrentSum > sum)
//		return;
//
//	if (i == n)//Check لو انا وصلت لاخر الArray عايز اعرف بقا هل Current Sum==Sum الاساسى ولا لاء؟ 
//	{
//		if (CurrentSum == sum) {
//			for (int x : path)
//				cout << x << ' ';
//			cout << '\n';
//		}
//	}
//	else {
//		// option 1: pick
//		CurrentSum += arr[i];
//		path.push_back(arr[i]);
//
//		solve(i + 1);
//		//BackTracking رجع تانى عشان Current Sum>Target فكدة عملت return فمش نافع 
//		//Undo ارجع تانى عشان اخد طريق تانى غيره
//		CurrentSum -= arr[i];
//		path.pop_back();
//
//		// option 2: leave
//		solve(i + 1);
//	}
//}
//int main() {
//	cin >> n >> sum;
//
//	arr.resize(n);
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	solve(0);
//
//	return 0;
//}
#pragma endregion
//=============================================
#pragma region BackTracking With Knapsack
//#include<iostream>
//using namespace std;
//int knapSack(int W, int wt[], int val[], int n) {
//	// Base Case
//	if (n == 0 || W == 0)
//		return 0;
//
//	if (wt[n - 1] > W)//Check على اخر عنصر 
//		return knapSack(W, wt, val, n - 1);
//	else
//		return max(
//			val[n - 1]
//			+ knapSack(W - wt[n - 1], wt, val, n - 1),//Pick
//			knapSack(W, wt, val, n - 1)//Leave
//		);
//}
//int main()
//{
//	return 0;
//}
#pragma endregion
//=============================================
#pragma region Bitwise Operations Find Subset With Given Sum
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	vector<int> nums = { 1, 5, 2, 7, 3, 9 };
//	int target = 6;
//	int n = nums.size();
//	int counter = 0;
//	for (int mask = 0; mask < (1 << n); mask++) {
//		int sum = 0;
//		for (int i = 0; i < n; i++) {
//			if ((mask >> i) & 1) {
//				sum += nums[i];
//			}
//		}
//		if (sum == target) {
//			counter++;
//		}
//	}
//	cout << counter << "\n";
//	return 0;
//}
#pragma endregion
//=============================================
#pragma region Graph +DFA+ BFA

#pragma endregion
//=============================================
#pragma region Number Thoery

#pragma endregion
//=============================================
#pragma region Dynamic Programming

#pragma endregion
//=============================================
#pragma region Greedy Algorithm

#pragma endregion













