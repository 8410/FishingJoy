#ifndef FISH_H
#define FISH_H
#pragma once
#include"cocos2d.h"
USING_NS_CC;

typedef enum{
	k_Fish_Type_SmallFish = 0,
	k_Fish_Type_Croaker,
<<<<<<< HEAD
	//k_Fish_Type_Count,  //������������Ը��ݲ��Ե���Ҫ����λ�ã�������ֵ��2
=======
	//k_Fish_Type_Count=2,//������������Ը��ݲ��Ե���Ҫ����λ�ã�������ֵ��2
>>>>>>> parent of 0faf47a... 211506333
	k_Fish_Type_AngleFish,
	k_Fish_Type_Amphiprion,	//С����
	k_Fish_Type_PufferS,	//����
	k_Fish_Type_Bream,		//��ɫ
	k_Fish_Type_Progy,		//��ɫ
<<<<<<< HEAD

=======
>>>>>>> parent of 0faf47a... 211506333
	k_Fish_Type_Chelonian,	//�ڹ�
	k_Fish_Type_Lantern,	//������
	k_Fish_Type_Ray,		//ħ����
	k_Fish_Type_Shark,		//��ɫ����
	k_Fish_Type_GoldenTrout,
	k_Fish_Type_GShark,		//��ɫ����
	k_Fish_Type_GMarlineFish,
	k_Fish_Type_GrouperFish,
	k_Fish_Type_JadePerch,	//��ʯ��
	k_Fish_Type_MarlineFish,
	k_Fish_Type_PufferB,	//�����ܵ�����
<<<<<<< HEAD
	k_Fish_Type_Count
=======
	k_Fish_Type_Count=17,
>>>>>>> parent of 0faf47a... 211506333
}FishType;

//using namespace cocos2d;
class Fish :public CCNode
{
public:
	Fish(void);
<<<<<<< HEAD
//	void removeFish(CCSprite *_fishSprite);
	static Fish* create(FishType type = k_Fish_Type_SmallFish);
	virtual bool init(FishType type = k_Fish_Type_SmallFish);
	int getScore();
	int getSpeed();
	CC_SYNTHESIZE(FishType, _type, Type);
	virtual ~Fish(void);
	CCRect getCollisionArea();
	void beCaught();
	void moveTo(CCPoint destination);
	CCSize getSize();
	void moveEnd();
protected:
	CCSprite* _fishSprite;
	void beCaught_CallFunc();
};
=======
	virtual ~Fish(void); 
	static Fish *create(FishType type = k_Fish_Type_SmallFish);
	virtual bool init(FishType type = k_Fish_Type_SmallFish);
	int getScore();
	int getSpeed();
	CC_SYNTHESIZE(FishType,_type,Type);

protected:
	CCSprite *_fishSprite;//���Ӧ�ľ��飨ͼƬ��
	
};
#endif
>>>>>>> parent of 0faf47a... 211506333