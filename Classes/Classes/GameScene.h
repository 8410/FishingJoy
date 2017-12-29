#pragma once
<<<<<<< HEAD
#include "cocos2d.h"
#include "BackgroundLayer.h"
#include "FishLayer.h"
#include "MenuLayer.h"
#include "CannonLayer.h"
#include "TouchLayer.h"
#include "Fish.h"
#include "PanelLayer.h"
#include "FishJoyData.h"
#include "GoldCounterLayer.h"
#include "PersonalAudioEngine.h"
USING_NS_CC;

typedef enum{
	k_Operate_Pause = 0,
	k_Operate_Resume
}OperateFlag;

class GameScene :
	public CCScene
=======
#include"cocos2d.h"
#include"BackgroundLayer.h"
#include"FishLayer.h"
#include"MenuLayer.h"
using namespace cocos2d;
/*��Ϸ������*/
class GameScene :public cocos2d::CCScene
>>>>>>> parent of 0faf47a... 211506333
{
public:
	GameScene(void);
	CREATE_FUNC(GameScene)
<<<<<<< HEAD
	virtual bool init();
	virtual ~GameScene();
	void cannonAimAt(CCPoint target);
	void cannonShootTo(CCPoint target);
	void alterGold(int delta);
	void onEnter();
protected:
	BackgroundLayer* _backgroundLayer;
	FishLayer* _fishLayer;
	MenuLayer* _menuLayer;
	CannonLayer* _cannonLayer;
	TouchLayer* _touchLayer;
	PanelLayer* _paneLayer;

	//GoldCounterLayer* alterGold;

	void preloadResources(void);
	bool checkOutCollisionBetweenFishesAndBullet(Bullet* bullet);
	void checkOutCollision();
	virtual void update(float delta);
	void fishWillBeCaught(Fish* fish);
	void checkOutCollisionBetweenFishesAndFishingNet(Bullet* bulet);
=======
	~GameScene();
	/*��ʼ����������ɸ�����Ĵ����ͼ���*/
	virtual bool init(void);
protected:
	/*���ݳ�Ա*/
	BackgroundLayer::Layer * backgroundLayer;/*������*/
	//CannonLayer *cannonLayer;/*��̨��*/
	FishLayer::Layer *fishLayer;/*���*/
	//PaneLayer *paneLayer;/*���ܲ�*/
	MenuLayer *menuLayer;/*�˵���*/
	

>>>>>>> parent of 0faf47a... 211506333
};

