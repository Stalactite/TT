#include "SplashScene.h"
#include "SplashLayer.h"

USING_NS_CC;

bool SplashScene::init()
{
	if(!Scene::init())
	{
		return false;
	}

	this->addChild(SplashLayer::create());
	return true;
}