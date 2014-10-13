#include "SplashLayer.h"

USING_NS_CC;

enum{
	TAG_PUBLISHER_LOGO,
	TAG_STUDIO_LOGO,
};

bool SplashLayer::init()
{
	if(!Layer::init())
	{
		return false;
	}
	//publisher's logo
	auto publisherLogoSprite = Sprite::create("SplashLayers/pLogo.jpg");
	publisherLogoSprite->setPosition(MIDPOINT);
	publisherLogoSprite->setOpacity(0);
	this->addChild(publisherLogoSprite, 0, TAG_PUBLISHER_LOGO);
	
	//studio logo
	auto studioLogoSprite = Sprite::create("SplashLayers/sLogo.jpg");
	studioLogoSprite->setPosition(MIDPOINT);
	studioLogoSprite->setOpacity(0);
	this->addChild(studioLogoSprite, 0, TAG_STUDIO_LOGO);

	return true;
}

void SplashLayer::onEnter()
{
	Layer::onEnter();
	this->getChildByTag(TAG_PUBLISHER_LOGO)->runAction(
		Sequence::create(
			FadeTo::create(1.0f, 255),
			DelayTime::create(1.0f),
			FadeTo::create(1.0f, 0),
			RemoveSelf::create(),
			nullptr));

	this->getChildByTag(TAG_STUDIO_LOGO)->runAction(
		Sequence::create(
			DelayTime::create(3.0f),
			FadeTo::create(1.0f, 255),
			DelayTime::create(1.0f),
			FadeTo::create(1.0f, 0),
			CallFunc::create(CC_CALLBACK_0(SplashLayer::doAniTransfer, this)),
			RemoveSelf::create(),
			nullptr
		));
}

void SplashLayer::doAniTransfer()
{
//	Director::getInstance()->replaceScene();
}