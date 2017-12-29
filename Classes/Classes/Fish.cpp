#include "Fish.h"
<<<<<<< HEAD
enum{
	k_Action_Animate =0,
	k_Action_MoveTo
};
=======
//#include"StatiData.h"
>>>>>>> parent of 0faf47a... 211506333

Fish::Fish(void)
{
}


Fish::~Fish(void)
{
}

Fish *Fish::create(FishType type)
{
	Fish *fish = new Fish;
	if (fish && fish->init(type))
	{
		fish->autorelease();
		return fish;
	}
	else
	{
		CC_SAFE_DELETE(fish);
		return NULL;
	}
}




bool Fish::init(FishType type)
{
	
	if (!CCNode::init())
	{
		return false;
	}

	/*运行就出错？？*/
	if (type <=k_Fish_Type_SmallFish || type >k_Fish_Type_Count)
	{
		type = (FishType)1;
	}//type = (FishType)0;
	setType(type);
	CCString *animationName = CCString::createWithFormat("fish_animation_%02d", _type);
	CCAnimation *animation = CCAnimationCache::sharedAnimationCache()->animationByName(animationName->getCString());
	CCAnimate *animate = CCAnimate::create(animation);
	_fishSprite = CCSprite::create();
	_fishSprite->runAction(CCRepeatForever::create(animate));
	this->addChild(_fishSprite);
	return true;
}




int Fish::getScore()
{
	return 0;
}



<<<<<<< HEAD
void Fish::beCaught(){
	stopActionByTag(k_Action_MoveTo);
	CCCallFunc* callFunc = CCCallFunc::create(this,callfunc_selector(Fish::beCaught_CallFunc));
	CCSequence* sequence = CCSequence::create(CCDelayTime::create(1.0f),callFunc,NULL);
	CCBlink* blink = CCBlink::create(1.0f,5);
	CCSpawn* spawn = CCSpawn::create(sequence, blink, NULL);
	_fishSprite->runAction(spawn);
=======
int Fish::getSpeed()
{
	return 200;
>>>>>>> parent of 0faf47a... 211506333
}

/*bool Fish::init(FishType type)
{
	if (!CCNode::init())
	{
<<<<<<< HEAD
		getParent()->removeChild(this,true);
		//this->removeFromParentAndCleanup(true);
	}
}

void Fish::moveTo(CCPoint destination)
{	
	CCPoint point =getParent()->convertToWorldSpace(this->getPosition());
	float duration =ccpDistance(destination,point)/getSpeed();
	CCMoveTo *moveTo =CCMoveTo::create(duration,destination);
	CCCallFunc *callFunc =CCCallFunc::create(this,callfunc_selector(Fish::moveEnd));
	CCSequence *sequence =CCSequence::create(moveTo,callFunc,NULL);
	sequence->setTag(k_Action_MoveTo);
	this->runAction(sequence);
}

void Fish::moveEnd()
{
	if(isRunning())
	{
		this->stopActionByTag(k_Action_MoveTo);
		getParent()->removeChild(this,false);
	}
}

CCSize Fish::getSize()
{
	return _fishSprite->displayFrame()->getRect().size;

}
=======
		return false;
	}
	if (type < k_Fish_Type_SmallFish || type >= k_Fish_Type_Count)
	{
		type = k_Fish_Type_SmallFish;
	}
	setType(type);
	CCString *animationName = CCString::createWithFormat("fish_animation_%02d",_type);
	CCAnimation *animation = CCAnimationCache::sharedAnimationCache()->animationByName(animationName->getCString());
	CCAnimate *animate = CCAnimate::create(animation);
	fishSprite = CCSprite::create();
	fishSprite->runAction(CCRepeatForever::create(animate));
	this->addChild(fishSprite);
	return true;

}*/
>>>>>>> parent of 0faf47a... 211506333
