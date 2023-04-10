// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveMath.h"
#define ACCELERATION_MULTIPLYER 0.0009
//float UMoveMath::count(float defaultSpeed, float forwardVelocityX, float knobMultiplyer)
//{
//	float needSpeed = knobMultiplyer * defaultSpeed;
//	float changeSpeed = ACCELERATION_MULTIPLYER * (abs(forwardVelocityX) + abs(needSpeed));
//	if (knobMultiplyer > 0) {
//		if (needSpeed  >= forwardVelocityX) {
//			return forwardVelocityX + changeSpeed;
//		}
//		else {
//			float a = (abs(knobMultiplyer) + 1) * 0.00005 * forwardVelocityX;
//			return forwardVelocityX - a + 0.05 * a;
//		}
//	}
//	else if (knobMultiplyer < 0)
//	{
//		if (needSpeed <= forwardVelocityX) {
//			return forwardVelocityX - changeSpeed;
//		}
//		else {
//			float a = (abs(knobMultiplyer) + 1) * 0.00005 * forwardVelocityX;
//			return forwardVelocityX - a + 0.05 * a;
//		}
//	}
//	else
//	{
//		float a = (abs(knobMultiplyer) + 1) * 0.00005 * forwardVelocityX;
//		return forwardVelocityX - a;
//	}
//}
float UMoveMath::count(float defaultSpeed, float forwardVelocityX, float knobMultiplyer)
{
    const float needSpeed = knobMultiplyer * defaultSpeed;
    const float absForwardVelocityX = abs(forwardVelocityX);
    const float changeSpeed = ACCELERATION_MULTIPLYER * (absForwardVelocityX + abs(needSpeed));

    if (knobMultiplyer > 0) {
        if (needSpeed >= forwardVelocityX) {
            return forwardVelocityX + changeSpeed;
        } else {
            const float a = (abs(knobMultiplyer) + 1) * 0.00005f * forwardVelocityX;
            return forwardVelocityX - a * 0.95f;
        }
    } else if (knobMultiplyer < 0) {
        if (needSpeed <= forwardVelocityX) {
            return forwardVelocityX - changeSpeed;
        } else {
            const float a = (abs(knobMultiplyer) + 1) * 0.00005f * forwardVelocityX;
            return forwardVelocityX - a * 0.95f;
        }
    } else {
        const float a = (abs(knobMultiplyer) + 1) * 0.00005f * forwardVelocityX;
        return forwardVelocityX - a;
    }
}

