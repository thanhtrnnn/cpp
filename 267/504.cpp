#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// SinhVien struct
typedef struct SinhVien
{
    string mssv = "B20DCCN001";
    string ten, lop, dob;
    float gpa;
}
SinhVien;

void nhap(SinhVien &p)
{
    getline(cin, p.ten);
    getline(cin, p.lop);
    getline(cin, p.dob);
    cin >> p.gpa;
}

void in(SinhVien &A) {
    if (A.dob[1] == '/')
        A.dob.insert(0, "0");
    if (A.dob[4] == '/')
        A.dob.insert(3, "0");
   
    cout << A.mssv << " " << A.ten << " " << A.lop << " " << A.dob << " " 
        << fixed << setprecision(2) << A.gpa << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}