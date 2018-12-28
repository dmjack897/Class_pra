//Class



/*
長方形のRectangleClass,丸のCircleClassを作ろう.
Classには広さと外周を計算する機能が入っています。
*/
/*
#include<iostream>
using namespace std;

class Rectangle
{
private:
   int garo;  // 横の値を保存する変数
   int sero;  // 縦の値を保存する機能
public:
   Rectangle();
   Rectangle(const int m,const int d);
   int GetArea();
   int GetGirth();
};
Rectangle::Rectangle()
{
   garo=0;
   sero=0;
}
Rectangle::Rectangle(const int g,const int s)
{
   garo=g;
   sero=s;
}
int Rectangle::GetArea()
{
   return garo*sero;
}
int Rectangle::GetGirth()
{
   return garo*2+sero*2;
}
class Circle
{
private:
   int ban;   // 半径の値を保存する変数
public:
   Circle();
   Circle(const int b);
   double GetArea();
   double GetGirth();
};
Circle::Circle()
{
   ban=0;
}
Circle::Circle(const int b)
{
   ban=b;
}
double Circle::GetArea()
{
   return ban*ban*3.14;
}
double Circle::GetGirth()
{
   return 2*3.14*ban;
}
void main()
{
   Rectangle rec(3,4);
   cout << "広さ : " << rec.GetArea() << endl;
   cout << "外周 : " << rec.GetGirth() << endl;
   cout << "=========================================" << endl;

   Circle cir(5);
   cout << "広さ : " << cir.GetArea() << endl;
   cout << "外周 : " << cir.GetGirth() << endl;
}
*/

/*
時間の情報のTimeのClassの定義しょう
出力の機能も入っています。
*/
/*
#include<iostream>
using namespace std;
class Time
{
private:
   int si;  // 時刻を保存する変数
   int bun;  // 分を保存する変数
   int cho;  // 秒を保存する変数
public:
   Time();
   Time(int s);
   Time(int s,int b);
   Time(int s,int b,int c);
   void ShowTime();
   void ShowTimeSec();
};
Time::Time()
{
   si=0;
   bun=0;
   cho=0;
}
Time::Time(int s)
{
   si=s;
   bun=0;
   cho=0;
}
Time::Time(int s,int b)
{
   si=s;
   bun=b;
   cho=0;
}
Time::Time(int s,int b,int c)
{
   si=s;
   bun=b;
   cho=c;
}
void Time::ShowTime()
{
   cout << "[" << si << "?" << bun << "?" << cho << "?]" << endl;
}
void Time::ShowTimeSec()
{
   cout << si*3600+bun*60+cho << endl;
}
void main()
{
   Time time1(10);
   Time time2(10,20);
   Time time3(10,20,30);

   time2.ShowTime();
   time2.ShowTimeSec();
}
*/


/*

名詞を作ろう
Classには電話番号、住所、職級を保存する
*/
/*
#include<iostream>
#include<string>
using namespace std;

class NameCard
{
private: 
   char *name;  //名前を保存する変数
   char *phoneNum;  //電話番ごを保存する変数
   char *address;   //住所を保存する変数
   char *grade;   //職級保存する変数
public:
   NameCard(char *n, char *p,char *a,char *g);
   ~NameCard();
   void ShowData();
};
NameCard::NameCard(char *n,char *p,char *a, char *g)
{
   name=new char[strlen(n)+1];
   phoneNum=new char[strlen(p)+1];
   address=new char[strlen(a)+1];
   grade=new char[strlen(g)+1];
   strcpy(name,n);
   strcpy(phoneNum,p);
   strcpy(address,a);
   strcpy(grade,g);
}
NameCard::~NameCard()
{
   delete []name;
   delete []phoneNum;
   delete []address;
   delete []grade;
}
void NameCard::ShowData()
{
   cout << "名前 : " << name << endl;
   cout << "電話番号 : " << phoneNum << endl;
   cout << "住所" : " << address << endl;
   cout << "職級 : " << grade << endl;
}
void main()
{
   NameCard park("Park H.S", "123-456-1234","cs.dankook.ac.kr","abc");
   park.ShowData();
}
*/
/*
上のCodeを応用して5名のデータを順番通りで入力されて順番通りで出力して下さい。
＊配列を宣言して作る
*/
/*
#include<iostream>
#include<string>
using namespace std;

class NameCard
{
private: 
   char *card[5];  //データを保存する配列
public:
   NameCard(char *c);
   ~NameCard();
   void ShowData();
   void GetData();   //データを入力する為の
};
NameCard::NameCard(char *c)
{
   char *card[5]={""};
}
NameCard::~NameCard()
{
}
void NameCard::ShowData()
{
   cout << "名前 : " << park->name << endl;
   cout << "電話番号" : " << phoneNum << endl;
   cout << "住所 : " << address << endl;
   cout << "職級 : " << grade << endl;
}
void NameCard::GetData()
{
   cout <<
}
void main()
{
   NameCard *park;
   
}
*/