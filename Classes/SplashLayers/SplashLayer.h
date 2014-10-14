#ifndef _SPLASH_LAYER_H_
#define _SPLASH_LAYER_H_
#include "cocos2d.h"
#include "GameHeader.h"

class SplashLayer: public cocos2d::Layer
{
public:
	//static create function
	CREATE_FUNC(SplashLayer);

	//init
	virtual bool init() override;
	virtual void onEnter() override;

private:
	void doAniTransfer();

};


#endif
