#include "GameMenuLayer.h"
<<<<<<< HEAD
#include "GameScene.h"
#include "LoadingLayer.h"
GameMenuLayer::GameMenuLayer(void)
=======


GameMenuLayer::GameMenuLayer()
>>>>>>> parent of 0faf47a... 211506333
{
}


GameMenuLayer::~GameMenuLayer()
{
}

bool GameMenuLayer::init()
{
	if (!cocos2d::Layer::init())
	{
<<<<<<< HEAD
		if(!CCLayer::init())
		{
			return false;
		}
		CCSprite* bgSprite = CCSprite::create("ui_background_normal-ipadhd.png");
		CC_BREAK_IF(!bgSprite);
		this->addChild(bgSprite);
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		bgSprite->setPosition(ccp(winSize.width / 2, winSize.height / 2));
		CCSprite* titleSprite = CCSprite::create("main_ui_title_cn-ipadhd.png");
		CC_BREAK_IF(!titleSprite);
		this->addChild(titleSprite);
		titleSprite->setPosition(ccp(winSize.width/2, winSize.height * 0.78));
		this->createMenu();
		return true;
	} while (0);
	return false;
}

void GameMenuLayer::createMenu(void)
{
	CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("UI_GameStartMenuLayer-ipadhd.plist");
	CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("UI_GameMenuText_cn-ipadhd.plist");
	
	CCSprite* startNormalBgSprite = CCSprite::createWithSpriteFrameName("ui_button_box02_02.png");
	CCSprite* startNormalTextSprite = CCSprite::createWithSpriteFrameName("ui_2p_010.png");

	CCSize startNormalBgSize = startNormalBgSprite->getContentSize();

	startNormalBgSprite->addChild(startNormalTextSprite);
	startNormalTextSprite->setPosition(ccp(startNormalBgSize.width / 2, startNormalBgSize.height / 2 + 25));

	CCSprite* startSelectedBgSprite = CCSprite::createWithSpriteFrameName("ui_button_box02_01.png");
	CCSprite* startSelectedTextSprite = CCSprite::createWithSpriteFrameName("ui_2p_010.png");

	startSelectedBgSprite->addChild(startSelectedTextSprite);
	startSelectedTextSprite->setPosition(ccp(startNormalBgSize.width / 2, startNormalBgSize.height / 2 + 25));
=======
		return false;
	}
	auto WindowsSize = Director::getInstance()->getVisibleSize();
>>>>>>> parent of 0faf47a... 211506333


<<<<<<< HEAD
	CCSprite* sceneNormalBgSprite = CCSprite::createWithSpriteFrameName("ui_button_box01_02.png");
	CCSprite* sceneNormalTextSprite = CCSprite::createWithSpriteFrameName("button_other_014.png");
=======
	/*创建一个精灵背景图*/
	auto *bgSprite = CCSprite::create("UI_GameStartMenuLayer-ipadhd.png");
>>>>>>> parent of 0faf47a... 211506333



<<<<<<< HEAD
	CCSprite* sceneSelectedBgSprite = CCSprite::createWithSpriteFrameName("ui_button_box01_01.png");
	CCSprite* sceneSelectedTextSprite = CCSprite::createWithSpriteFrameName("button_other_014.png");
=======
	/*把精灵加到层的子节点*/
	this->addChild(bgSprite);
>>>>>>> parent of 0faf47a... 211506333


	/*设置背景图显示位置（精灵的位置在窗口的中心）*/
	bgSprite->setPosition(WindowsSize.width / 2, WindowsSize.height / 2);
	return true;
}
void GameMenuLayer::createMenu()
{
	auto *spriteFrameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
	spriteFrameCache->addSpriteFramesWithFile("UI_GameMenuText_cn-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("UI_GameStartMenuLayer-ipadhd.plist");
	auto *startNormalBackgoundSprite = CCSprite::createWithSpriteFrameName("ui_background_normal-ipadhd.png");
	CCSprite *startSelectedTextSprite = CCSprite::createWithSpriteFrameName("UI_GameMenuText_cn-ipadhd.png");
	startNormalBackgoundSprite->addChild(startSelectedTextSprite);

	auto starSpriteSize = startNormalBackgoundSprite->getContentSize();
	startSelectedTextSprite->setPosition(ccp(starSpriteSize.width / 2, starSpriteSize.height / 2+20));

	CCSprite *starSelectedBackgroundSprite = CCSprite::createWithSpriteFrameName("bj01_01-ipadhd.png");
	CCSprite *starSelectedTextSprite = CCSprite::createWithSpriteFrameName("bj02_01-ipadhd.png");
	starSelectedBackgroundSprite->addChild(starSelectedTextSprite);

	starSelectedTextSprite->setPosition(ccp(starSpriteSize.width / 2, starSpriteSize.height / 2 + 20));
	CCMenuItemSprite*startMenuItem = CCMenuItemSprite::create(startNormalBackgoundSprite,starSelectedBackgroundSprite,this);
	CCMenu *menu = CCMenu::create(startMenuItem,NULL);
	this->addChild(menu);
	menu->setPosition(ccp(1024, 800));

}
CCScene *GameMenuLayer::scene()
{
<<<<<<< HEAD
	/*GameScene* _gameScene=GameScene::create();
	CCDirector::sharedDirector()->replaceScene(_gameScene);*/
	CCDirector::sharedDirector()->replaceScene(LoadingLayer::scene());
=======
	CCScene *scene = CCScene::create();
	GameMenuLayer *layer = GameMenuLayer::create();
	scene->addChild(layer);
	return scene;

>>>>>>> parent of 0faf47a... 211506333
}
void GameMenuLayer::onStertGame(CCObject *sender)
{

}