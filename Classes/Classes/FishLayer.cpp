#include "FishLayer.h"
<<<<<<< HEAD
#include "Fish.h"
#include <ctime>
enum{
	k_Direction_Left =0,
	k_Direction_Right,
	k_Direction_Count
};
=======
>>>>>>> parent of 0faf47a... 211506333


FishLayer::FishLayer()
{
}

<<<<<<< HEAD
void FishLayer::addFish(float delta)
	{
		int addToCount = CCRANDOM_0_1() * 5 + 1;
		int count = 0;
		CCObject* obj;
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		CCARRAY_FOREACH(_fishes, obj)
		{
			Fish* fish = (Fish*)obj;
			if(fish->isRunning())
			{
				continue;
			}
			//this->addChild(fish);
			//fish->setPosition(ccp(CCRANDOM_0_1() * winSize.width, CCRANDOM_0_1() * winSize.height));
			
			count++;
			resetFish(fish);
			if(count == addToCount)
			{
				break;
			}
		}
}
=======
>>>>>>> parent of 0faf47a... 211506333

FishLayer::~FishLayer()
{
}

bool FishLayer::init()
{
<<<<<<< HEAD
	return _fishes;
}

void FishLayer::resetFish(Fish* fish)
{
	int direction = CCRANDOM_0_1() * k_Direction_Count;
	float startX,startY,endX,endY;
	CCSize winSize =CCDirector::sharedDirector()->getWinSize();
	CCSize fishSize =fish->getSize();
	if(direction==k_Direction_Left)
	{
		startX=winSize.width+fishSize.width/2;
		fish->setRotation(0);
		endX=-fishSize.width/2;
	}
	else
	{
		endX=winSize.width+fishSize.width/2;
		fish->setRotation(180);
		startX=-fishSize.width/2;

		
	}
	endY =CCRANDOM_0_1() *(winSize.height-fishSize.height)+fishSize.height/2;
	startY=CCRANDOM_0_1() *(winSize.height-fishSize.height)+fishSize.height /2;
	addChild(fish);
	fish->setPosition(ccp(startX,startY));
	fish->moveTo(ccp(endX,endY));

=======
	if (!cocos2d::Layer::init())
	{
		return false;
	}
	return true;
>>>>>>> parent of 0faf47a... 211506333
}