//Class



/*
�����`��RectangleClass,�ۂ�CircleClass����낤.
Class�ɂ͍L���ƊO�����v�Z����@�\�������Ă��܂��B
*/
/*
#include<iostream>
using namespace std;

class Rectangle
{
private:
   int garo;  // ���̒l��ۑ�����ϐ�
   int sero;  // �c�̒l��ۑ�����@�\
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
   int ban;   // ���a�̒l��ۑ�����ϐ�
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
   cout << "�L�� : " << rec.GetArea() << endl;
   cout << "�O�� : " << rec.GetGirth() << endl;
   cout << "=========================================" << endl;

   Circle cir(5);
   cout << "�L�� : " << cir.GetArea() << endl;
   cout << "�O�� : " << cir.GetGirth() << endl;
}
*/

/*
���Ԃ̏���Time��Class�̒�`���傤
�o�͂̋@�\�������Ă��܂��B
*/
/*
#include<iostream>
using namespace std;
class Time
{
private:
   int si;  // ������ۑ�����ϐ�
   int bun;  // ����ۑ�����ϐ�
   int cho;  // �b��ۑ�����ϐ�
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

��������낤
Class�ɂ͓d�b�ԍ��A�Z���A�E����ۑ�����
*/
/*
#include<iostream>
#include<string>
using namespace std;

class NameCard
{
private: 
   char *name;  //���O��ۑ�����ϐ�
   char *phoneNum;  //�d�b�Ԃ���ۑ�����ϐ�
   char *address;   //�Z����ۑ�����ϐ�
   char *grade;   //�E���ۑ�����ϐ�
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
   cout << "���O : " << name << endl;
   cout << "�d�b�ԍ� : " << phoneNum << endl;
   cout << "�Z��" : " << address << endl;
   cout << "�E�� : " << grade << endl;
}
void main()
{
   NameCard park("Park H.S", "123-456-1234","cs.dankook.ac.kr","abc");
   park.ShowData();
}
*/
/*
���Code�����p����5���̃f�[�^�����Ԓʂ�œ��͂���ď��Ԓʂ�ŏo�͂��ĉ������B
���z���錾���č��
*/
/*
#include<iostream>
#include<string>
using namespace std;

class NameCard
{
private: 
   char *card[5];  //�f�[�^��ۑ�����z��
public:
   NameCard(char *c);
   ~NameCard();
   void ShowData();
   void GetData();   //�f�[�^����͂���ׂ�
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
   cout << "���O : " << park->name << endl;
   cout << "�d�b�ԍ�" : " << phoneNum << endl;
   cout << "�Z�� : " << address << endl;
   cout << "�E�� : " << grade << endl;
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