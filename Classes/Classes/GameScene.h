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
/*游戏场景类*/
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
	/*初始化函数，完成各个层的创建和加载*/
	virtual bool init(void);
protected:
	/*数据成员*/
	BackgroundLayer::Layer * backgroundLayer;/*背景层*/
	//CannonLayer *cannonLayer;/*炮台层*/
	FishLayer::Layer *fishLayer;/*鱼层*/
	//PaneLayer *paneLayer;/*功能层*/
	MenuLayer *menuLayer;/*菜单层*/
	

>>>>>>> parent of 0faf47a... 211506333
};

