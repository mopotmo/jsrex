#include "jREX.h"

jlong getThis(JNIEnv *env, jobject obj){
	jfieldID id = env->GetFieldID(env->GetObjectClass(obj), "pointer", "J");
	return env->GetLongField(obj, id);
}