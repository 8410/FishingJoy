#include "GameScene.h"
<<<<<<< HEAD
//#include "FishJoyData.h"
=======


>>>>>>> parent of 0faf47a... 211506333
GameScene::GameScene()
{
}

<<<<<<< HEAD
bool GameScene::init()
{
	do
	{
		CC_BREAK_IF(!CCScene::init());
		preloadResources();
		_menuLayer = MenuLayer::create(); 
		CC_BREAK_IF(!_menuLayer);
		CC_SAFE_RETAIN(_menuLayer); 
		_backgroundLayer = BackgroundLayer::create();
		CC_BREAK_IF(!_backgroundLayer);
		this->addChild(_backgroundLayer);
		_fishLayer = FishLayer::create();
		CC_BREAK_IF(!_fishLayer);
		this->addChild(_fishLayer);
		_cannonLayer = CannonLayer::create();
		CC_BREAK_IF(!_cannonLayer);
		this->addChild(_cannonLayer);
		_touchLayer = TouchLayer::create();
		CC_BREAK_IF(!_touchLayer);
		this->addChild(_touchLayer);
		_paneLayer = PanelLayer::create();
		CC_BREAK_IF(!_paneLayer);
		this->addChild(_paneLayer);
		_paneLayer->getGoldCounter()->setNumber(FishJoyData::getInstance()->getGold());
		this->scheduleUpdate();
		return true;
	} while (0);
	return false;
}

void GameScene::preloadResources(void)
{
	PersonalAudioEngine::getInstance();
	CCSpriteFrameCache* spriteFrameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Large-ipadhd.plist");		
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Marlin-ipadhd.plist");		
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Shark-ipadhd.plist");		
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Small-ipadhd.plist");		
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Mid-ipadhd.plist");		
	spriteFrameCache->addSpriteFramesWithFile("cannon-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("Item-chaojiwuqi-ipadhd.plist");

	CCTextureCache *textureCache = CCTextureCache::sharedTextureCache();
	textureCache->addImage("ui_button_63-ipadhd.png");
	textureCache->addImage("ui_button_65-ipadhd.png");

	char str[][50] = { "SmallFish", "Croaker", "AngelFish", "Amphiprion", "PufferS", 
		"Bream", "Porgy", "Chelonian", "Lantern", "Ray", "Shark", "GoldenTrout", "GShark", 
		"GMarlinsFish", "GrouperFish", "JadePerch", "MarlinsFish", "PufferB" };
	for (int i = 0; i < 18; i++)
	{
		CCArray* array = CCArray::createWithCapacity(10);
		for (int j = 0; j < 10; j++)
		{
			CCString* spriteFrameName = CCString::createWithFormat("%s_actor_%03d.png", str[i], j + 1);
			CCSpriteFrame* spriteFrame = spriteFrameCache->spriteFrameByName(spriteFrameName->getCString());
			CC_BREAK_IF(!spriteFrame);
			array->addObject(spriteFrame);
		}
		if (array->count() == 0)
		{
			continue;
		}
		CCAnimation* animation = CCAnimation::createWithSpriteFrames(array, 0.15f);
		CCString* animationName = CCString::createWithFormat("fish_animation_%02d", i + 1);
		CCAnimationCache::sharedAnimationCache()->addAnimation(animation, animationName->getCString());
	}
	
}

GameScene::~GameScene()
{
	CC_SAFE_RELEASE(_menuLayer);
}

void GameScene::cannonAimAt(CCPoint target)
{
	_cannonLayer->aimAt(target);
}

void GameScene::cannonShootTo(CCPoint target)
{
	int cost = _cannonLayer->getWeapon()->getCannonType() + 1;
	if (FishJoyData::getInstance()->getGold() >= cost)
	{
		PersonalAudioEngine::sharedEngine()->playEffect("bgm_fire.aif");
		_cannonLayer->shootTo(target);
		alterGold(-cost);
	}

	//_cannonLayer->shootTo(target);
}

bool GameScene::checkOutCollisionBetweenFishesAndBullet(Bullet* bullet)
{
	CCPoint bulletPos = bullet->getCollosionPoint();
	CCArray* fishArray = _fishLayer->getFishArray();
	CCObject* obj = NULL;
	CCARRAY_FOREACH(fishArray, obj)
	{
		Fish* fish =(Fish*)obj;
		if(fish->isRunning() && fish->getCollisionArea().containsPoint(bulletPos))
		{
			bullet->end();
			return true;
		}
	}
	return false;
}

void GameScene::checkOutCollision()
=======

GameScene::~GameScene()
{
}
bool GameScene::init()
>>>>>>> parent of 0faf47a... 211506333
{
	/*do  {...}while(0)本身没有实际意义，但有很多好处：
	1、辅助定义复杂的宏，避免引用时出错（在引用宏时只是单单加{}话有可能会编译不过）
	2、避免使用goto对程序流进行统一的控制，（goto 标签：）运行到goto时会跳过中间的操作
		到标签：后的操作，进行跳过一些程序；但goto不符合软件工程结构尽量不用，do{..}while(0)
		通过break可以跳出，实现。
	3、避免空宏引起的warning
		内核中由于不同架构的限制，很多时候会用到空宏，在编译的时候，空宏会给出warning，为了避免
		这样的warning，就可以使用do{}while(0)来定义空宏
	4、定义一个单独的函数块来实现复杂的操作：
		当你的功能很复杂，变量很多你又不愿意增加一个函数的时候，使用do{}while(0);，将你的代码
		写在里面，里面可以定义变量而不用考虑变量名会同函数之前或者之后的重复。
	*/
	do
	{
		if (!Scene::init())
		{
			break;
		}
		/*创建背景层*/
		backgroundLayer = BackgroundLayer::create();
		/*检查是否创建成功*/
		CC_BREAK_IF(!backgroundLayer);
		/*将背景层导入场景*/
		this->addChild(backgroundLayer);
		/*创建鱼层*/
		fishLayer = FishLayer::create();
		/*检查鱼层是否创建成功*/
		CC_BREAK_IF(!fishLayer);
		/*将鱼层导入场景*/
		this->addChild(fishLayer);
		return true;

<<<<<<< HEAD
void GameScene::update(float delta)
{
	checkOutCollision();
}

void GameScene::fishWillBeCaught(Fish* fish)
{
	float weaponPercents[k_Cannon_Count] = { 0.3f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f };
	float fishPercents[	k_Fish_Type_Count] = { 1.0f, 0.95f, 0.95f, 0.9f, 0.85f, 0.8f, 0.75f, 0.7f, 0.65f, 0.6f, 0.55f, 0.5f, 0.45f, 0.4f, 0.35f, 0.3f, 0.25f, 0.2f };
	int _cannonType = _cannonLayer->getWeapon()->getCannonType();
	int _fishType = fish->getType();
	float _percentage =weaponPercents[_cannonType] * fishPercents[_fishType];
	if(CCRANDOM_0_1() < _percentage)
	{
		fish->beCaught();
		PersonalAudioEngine::sharedEngine()->playEffect("bgm_net.mp3");
		int reward = (_fishType+1)*10;
		this->alterGold(reward);
	}
	
}

void GameScene::checkOutCollisionBetweenFishesAndFishingNet(Bullet* bullet)
{
	Weapon* weapon = _cannonLayer->getWeapon();
	CCRect rect = weapon->getCollisionArea(bullet);
	CCArray* fishArray = _fishLayer->getFishArray();
	CCObject* obj = NULL;
	CCARRAY_FOREACH(fishArray, obj)
	{
		Fish* fish = (Fish*)obj;
		if(fish->isRunning() && rect.intersectsRect(fish->getCollisionArea()))
		{
			fishWillBeCaught(fish);
		}
	}
}
void GameScene::alterGold(int delta)
{
	FishJoyData* _fishJoyData = FishJoyData::getInstance();
	_fishJoyData->alterGold(delta);
	_paneLayer->getGoldCounter()->setNumber(_fishJoyData->getGold());
}
void GameScene::onEnter()
{
	CCScene::onEnter();
	PersonalAudioEngine::getInstance()->playBackgroundMusic(3);
=======
	}
	while (0);
	return false;
>>>>>>> parent of 0faf47a... 211506333
}