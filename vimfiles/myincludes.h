#include <algorithm>
#include <iostream>
#include <cassert>
#include <climits>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <complex>
#include <cctype>
#include <cstdio>
#include <bitset>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <list>
#include <map>
#include <set>
using namespace std;

//BEGIN checkmin
template<class T> inline void checkmin(T &a, const T &b) { if(a > b) a = b; }
//END

//BEGIN checkmax
template<class T> inline void checkmax(T &a, const T &b) { if(a < b) a = b; }
//END

//BEGIN LL
typedef long long LL;
//END

//BEGIN LD
typedef long double LD;
//END

//BEGIN sz
#define sz size()
//END

//BEGIN mp
#define mp make_pair
//END

//BEGIN pb
#define pb push_back
//END

//BEGIN x
#define x first
//END

//BEGIN y
#define y second
//END

//BEGIN PII
typedef pair<int,int> PII;
//END

//BEGIN PLI
typedef pair<LL,int> PLI;
//END

//BEGIN PLL
typedef pair<LL,LL> PLL;
//END

//BEGIN gcd
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
//END

//BEGIN lcm
template<class T> T lcm(const T &a,const T &b) { return a*(b/gcd(a,b)); }
//END

//BEGIN sqr
template<class T> inline T sqr(T X) { return X * X; }
//END

//BEGIN PI
const long double PI=acos(-1.0L);
//END

//BEGIN SET
#define SET(t,v) memset((t), (v), sizeof(t))
//END

//BEGIN ALL
#define ALL(c) (c).begin(), (c).end()
//END

//BEGIN RALL
#define RALL(c) (c).rbegin(), (c).rend()
//END

//BEGIN SORT
#define SORT(c) sort(ALL(c))
//END

//BEGIN RSORT
#define RSORT(c) sort(RALL(c))
//END

//BEGIN UNIQUE
#define UNIQUE(c) (c).resize(unique(ALL(c))-(c).begin())
//END

//BEGIN VI
typedef vector<int> VI;
//END

//BEGIN VLD
typedef vector<LD> VLD;
//END

//BEGIN VLL
typedef vector<LL> VLL;
//END

//BEGIN VPII
typedef vector<PII> VPII;
//END

//BEGIN VVI
typedef vector<vector<int> > VVI;
//END

//BEGIN VS
typedef vector<string> VS;
//END

//BEGIN Dhelper
#define Dhelper(X) " " << #X << "='" << (X) << "'"
//END

//BEGIN D
#define D(X) {cerr << __LINE__ << ":" << Dhelper(X) << endl;}
//END

//BEGIN D2
#define D2(X,Y) {cerr << __LINE__ << ":" << Dhelper(X) << Dhelper(Y) << endl;}
//END

//BEGIN D3
#define D3(X,Y,Z) {cerr << __LINE__ << ":" <<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<< endl;}
//END

//BEGIN D4
#define D4(X,Y,Z,W) {cerr << __LINE__ << ":" <<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<<Dhelper(W)<< endl;}
//END

//BEGIN D5
#define D5(X,Y,Z,W,V) {cerr << __LINE__ << ":"<<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<<Dhelper(W)<<Dhelper(V)<< endl;}
//END

//BEGIN Dv
#define Dv(X) {cerr << __LINE__ << ":  " << #X << " = {"; for(int __i=0;__i<(X).size();__i++) cerr<<" "<<(X)[__i];cerr<<" }"<<endl;}
//END

//BEGIN Da
#define Da(X,n) {cerr << __LINE__ << ":  " << #X << " = {"; for(int __i=0;__i<(n);__i++) cerr<<" "<<(X)[__i];cerr<<" }"<<endl;}
//END

//BEGIN Rep
#define Rep(i, n) for(int i = 0; i < (n); ++i)
//END

//BEGIN Repe
#define Repe(i, n) for(int i = 0; i <= (n); ++i)
//END

//BEGIN For
#define For(i,a,b) for(int i=(a); i<(b); i++)
//END

//BEGIN Fore
#define Fore(i,a,b) for(int i=(a); i<=(b); i++)
//END

//BEGIN Ford
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
//END

//BEGIN Foreach
#define Foreach(it,X) for(__typeof((X).begin())it=(X).begin();it!=(X).end();++it)
//END

//BEGIN isprime
template<class T> bool isprime(T n) { if(n<2) return false; if(n%2 == 0)return n==2; for(T i=3;i*i<=n;i+=2) if (n%i==0) return false; return true; }
//END

//BEGIN iabs
template<class T> inline T iabs(T a) { if(a<0) return -a; return a; }
//END

//BEGIN Dist
template<class T> T Dist(T x1,T y1,T x2,T y2) { return sqrt(sqr(x1-x2)+sqr(y1-y2)); }
//END

//BEGIN DistSqr
template<class T> T DistSqr(T x1,T y1,T x2,T y2) { return sqr(x1-x2)+sqr(y1-y2); }
//END

//BEGIN iss
#define iss istringstream
//END

//BEGIN oss
#define oss ostringstream
//END

//BEGIN toString
template<class T> string toString(T n) { oss ost; ost<<n; return ost.str(); }
//END

//BEGIN toInt
int toInt(string s){int r=0; iss sin(s); sin>>r; return r; }
//END

//BEGIN toLL
LL toLL(string s){ LL r=0; iss sin(s); sin>>r; return r; }
//END

//BEGIN toDouble
double toDouble(string s){double r=0;iss sin(s);sin>>r;return r;}
//END

//BEGIN toLD
LD toLD(string s){LD r=0; iss sin(s); sin>>r; return r; }
//END

//BEGIN stoa
template<class T> void stoa(const string &s, T A[], int &n) { n=0; iss sin(s); for(T v; sin>>v; A[n++]=v); }
//END

//BEGIN atos
template<class T> string atos(T A[],int n) { oss sout; for(int i=0;i<n;i++) { if(i>0) sout<<' '; sout<<A[i]; } return sout.str(); }
//END

//BEGIN atov
template<class T> vector<T> atov(T A[], int n) { vector<T> v(n); for (int i=0;i<n;i++) v[i]=A[i]; return v; }
//END

//BEGIN vtoa
template<class T> void vtoa(vector<T> vi,T A[],int &n) { n=vi.size(); for (int i=0;i<n;i++) A[i]=vi[i]; }
//END

//BEGIN stov
template<class T> vector<T> stov(string s) { vector<T> vi; iss sin(s); for(T v;sin>>v;vi.push_back(v)); return vi; }
//END

//BEGIN vtos
template<class T> string vtos(vector<T> vinput) { oss sout; for (int i=0;i<vinput.size();i++) { if(i>0) sout<<' '; sout<<vinput[i]; } return sout.str(); }
//END

//BEGIN present
#define present(c,X) ((c).find(X) != (c).end())
//END

//BEGIN cpresent
#define cpresent(c,X) (find(ALL(c),(X)) != (c).end())
//END

//BEGIN two
#define two(X) (1<<(X))
//END

//BEGIN contains
#define contains(S,X) (((S)&two(X))!=0)
//END

//BEGIN twoL
#define twoL(X) (((long long)(1))<<(X))
//END

//BEGIN containsL
#define containsL(S,X) ((S&twoL(X))!=0)
//END

//BEGIN ones
#define ones(X) (two(X)-1)
//END

//BEGIN onesL
#define onesL(X) (twoL(X)-1)
//END

//BEGIN countones
template<class T> inline int countones(T n) { int c = 0; for(;n;c++) n &= (n-1); return c; }
//END

//BEGIN lowbit
template<class T> inline T lowbit(T n) { return (n^(n-1))&n; }
//END

//BEGIN ForSubset
#define ForSubset(a,b) for(long long (a) = (b); (a)!=0; (a) = ((b) & ((a)-1)))
//END

//BEGIN getmod
template<class T> inline T getmod(T n, T m) {return (n%m+m)%m;}
//END

//BEGIN multiplymod2
template<class T> inline T multiplymod2(T a,T b,T m){ return (T)((((LL)(a)*(LL)(b)%(LL)(m))+(LL)(m))%(LL)(m));}
//END multiplymod

//BEGIN powermod2
template<class T> inline T powermod2(T p,int e,T m) {if(e==0)return 1%m;else if(e%2==0){T t=powermod2(p,e/2,m);return multiplymod2(t,t,m);} else return multiplymod2(powermod2(p,e-1,m),p,m);}
//END

//BEGIN multiplymod
template<class T> T multiplymod(T a, T b, T c){ T X = 0,Y=a%c; while(b > 0){ if(b%2 == 1) X = (X+Y)%c; Y = (Y*2)%c; b /= 2; } return X%c; }
//END

//BEGIN powermod
template<class T> T powermod(T a, T b, T c){ T res=1; while(b > 0){ if(b&1) res=multiplymod(res,a,c); a = multiplymod(a,a,c); b /= 2; } return res%c; }
//END

//BEGIN powermod3
template<class T> T powermod3(T a, T b, T c){ long long X=1; for(int i=0;i<b;i++) X = (X*a)%c; return X%c; }
//END

//BEGIN isleap
bool isleap(int year) { return (year%400==0) || ((year%4 == 0) && (year%100 != 0)); }
//END

//BEGIN ipow
template<class T> T ipow(const T &m, const T &n) { if(n==0)return 1; T a=ipow(m,n/2); return (n&1)?a*a*m:a*a; }
//END


