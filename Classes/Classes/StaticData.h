//
//
//  Generated by StarUML(tm) C++ Add-In
//
<<<<<<< HEAD
//  @ Project : FishingJoy
//  @ File Name : StaticData.h
//  @ Date : 2017/9/28
//  @ Author : xuxingyu
=======
//  @ Project : 211506333
//  @ File Name : StaticData.h
//  @ Date : 2017/9/29
//  @ Author : ������
>>>>>>> parent of 0faf47a... 211506333
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H


#include<string>
#include "cocos2d.h"
using namespace std;
using cocos2d::CCDictionary;
using cocos2d::CCPointFromString;
using cocos2d::CCRectFromString;
using cocos2d::CCSizeFromString;


<<<<<<< HEAD
class StaticData:public CCObject {
public:	
	static StaticData * getInstance();
	static void destoryIntance();
	static StaticData* sharedStaticData();
	static void purge();
	int intValueFromKey(const string& key);
	const char* stringValueFromKey(const string& key);
	float floatValueFromKey(const string& key);
	bool booleanFromKey(const string& key);
	CCPoint pointFromKey(const string& key);
	CCRect rectFromKey(const string& key);
	CCSize sizeFromKey(const string& key);

	
=======
class StaticData {
public:
	static StaticData* sharedStaticData();
	static void purge();
	int intValueForKey(const std::string &key);
	cont char* stringValueFromKey(const std::string &key);
	float floatValueFromKey(const std::string &key);
	bool booleanFromKey(const std::string &key);
	cocos2d::CCPoint pointFromKey(const std::string &key);
	cocos2d::CCRect rectFromKey(const std::string &key);
	cocos2d::CCSize sizeFormKey(const std::string &key);
>>>>>>> parent of 0faf47a... 211506333
protected:
	cocos2d::CCDictionary* _dictionary;
	std::string _staticFileName;
	bool init();
private:
	~StaticData();
	StaticData();
};

#endif  //_STATICDATA_H
