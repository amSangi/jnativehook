#include <jni.h>

#include "JInputModifiers.h"
#include "JKeyCodes.h"
#include "JKeyLocations.h"
#include "JMouseButtons.h"
#include "JNativeEvents.h"

typedef struct {
	jint keycode;		//Key Code
	jint location;		//Key Location
} JKeyCode;

unsigned int JKeycodeToNative(JKeyCode jkey);
JKeyCode NativeToJKeycode(unsigned int keycode);

jint NativeToJButton(unsigned int button);
unsigned int JButtonToNative(jint button);

unsigned int JModifierToNative(jint modifier);
jint NativeToJModifier(unsigned int modifier);
