#pragma once
<<<<<<< HEAD
#include "cocos2d.h"
#include "StaticData.h"
#include "Fish.h"
USING_NS_CC;

#define FISH_MAX_COUNT 50

class FishLayer :
	public CCLayer
{
public:
	FishLayer(void);
	CREATE_FUNC(FishLayer)
	virtual bool init();
	virtual ~FishLayer(void);
	CCArray* getFishArray();
protected:
	CCArray* _fishes;
	void addFish(float delta);
	void resetFish(Fish* fish);
=======
#include"cocos2d.h"
/*Óã²ã*/
class FishLayer :public cocos2d::Layer
{
public:
	FishLayer();
	~FishLayer();
	bool init();
>>>>>>> parent of 0faf47a... 211506333
};

