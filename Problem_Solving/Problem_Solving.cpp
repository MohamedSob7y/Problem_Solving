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
#include<iostream>
using namespace std;
int main()
{
	
	return 0;
}
#pragma endregion



