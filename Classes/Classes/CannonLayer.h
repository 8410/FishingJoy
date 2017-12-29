#pragma once
#include "cocos2d.h"
using namespace cocos2d;
/*езл╗╡Ц*/
class CannonLayer :
	public CCLayer
{
public:
	CannonLayer(void);
<<<<<<< HEAD
	virtual ~CannonLayer(void);
	virtual bool init();
	void onSwitchCannon(cocos2d::CCObject* sender);
=======
>>>>>>> parent of 0faf47a... 211506333
	CREATE_FUNC(CannonLayer);
	virtual bool init();
	virtual ~CannonLayer(void);
};

