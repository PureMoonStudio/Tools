#include "stdafx.h"
#include "GMap.h"
#define PLAYERSPEED 6//玩家速度
#define ENERMYSPEED 4//敌人速度
#define LEGCOUNTS 5//敌人腿的数量
#define DISTANCE 10//图型范围
#define BLUE_ALERT 8//蓝色警戒范围
#define D_OFFSET   2//绘图误差
#define RD (DISTANCE + D_OFFSET)//绘图范围 12 
#include <time.h>
//方向枚举
enum TWARDS{UP,DOWN,LEFT,RIGHT,OVER};
//物体类
class GObject{
protected:
	int mX;
	int mY;
	TWARDS twCommand;//指令缓存
	POINT point;//中心坐标
	int dRow;//逻辑横坐标
	int dArray;//逻辑纵坐标
	int speed;//速度
	TWARDS tw;//朝向
	int frame;//祯数
	//子程序
	bool Achive(); //判断物体是否到达逻辑坐标位置
	bool Collision() ;//逻辑碰撞检测,将物体摆放到合理的位置
	int PtTransform(int k);//将实际坐标转换为逻辑坐标
	virtual void AchiveCtrl();//到达逻辑点后更新数据
public:
	void SetPosition(int Row,int Array);
	void DrawBlank( HDC& hdc);
	void virtual Draw( HDC& hdc)=0;//绘制对象
	static GMap* pStage; //指向地图类的指针,设置为静态,使所有自类对象都能够使用相同的地图
	GObject(int Row,int Array){
		frame = 1;
		pStage = NULL;
		this->dRow = Row;
		this->dArray  = Array;
		this->point.y = dRow*pStage->LD+pStage->LD/2;
		this->point.x = dArray*pStage->LD+pStage->LD/2;
		this->mX =point.x;
		this->mY =point.y;
	}
	void virtual action() = 0;//数据变更的表现
	int GetRow();
	int GetArray();
	
};
//大嘴,玩家控制的对象
class PacMan:public GObject{

protected:
	virtual void AchiveCtrl();//重写虚函数
	
public:
	POINT GetPos();
	TWARDS GetTw();
	bool Win();
	void Draw(HDC& hdc);
	void SetTwCommand(TWARDS command);
	void Over();
	PacMan(int x,int y):GObject(x,y)
	{
		this->speed = PLAYERSPEED;
		twCommand=tw = LEFT;
	}
	void action();
};
//追捕大嘴的敌人
class Enermy:public GObject{
protected:
	void Catch();//是否抓住大嘴
	void virtual MakeDecision(bool b) = 0;//AI实现
	COLORREF color;
public:
	static PacMan* player;
	void virtual  Draw(HDC& hdc);
	Enermy(int x,int y):GObject(x,y)
	{
		this->speed = ENERMYSPEED;
		tw = LEFT;
		twCommand = UP;
	}
	void virtual action();
};

class RedOne:public Enermy  //随即移动S
{
protected:
	void virtual MakeDecision(bool b);
public:
	void Draw(HDC& hdc);
	RedOne(int x,int y):Enermy(x,y)
	{
		color = RGB(255,0,0);
	}
};

class BlueOne:public RedOne//守卫者
{	
protected:
	void virtual MakeDecision(bool b);
public:
	void Draw(HDC& hdc);
	BlueOne(int x,int y):RedOne(x,y)
	{
	
		color = RGB(0,0,255);
	}
	
};

class YellowOne:public RedOne //扰乱者
{
protected:
	void virtual MakeDecision(bool b);
public:
	void Draw(HDC& hdc);
	YellowOne(int x,int y):RedOne(x,y)
	{
		color = RGB(200,200,100);
	}
};



