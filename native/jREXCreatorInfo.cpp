#include "jREX.h"
#include "REX.h"
#include "jrexcreatorinfo.h"

using namespace REX;

extern "C"{

JNIEXPORT jlong JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_createClass
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = new REXCreatorInfo;
	return (jlong)info;
}

JNIEXPORT void JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_cleanUp
(JNIEnv *env, jobject obj){
	delete (REXCreatorInfo*) getThis(env, obj);
}

JNIEXPORT jstring JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_fName
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = (REXCreatorInfo*) getThis(env, obj);
	const char* name = info->fName;
	return env->NewStringUTF(name);
}

JNIEXPORT jstring JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_fCopyright
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = (REXCreatorInfo*) getThis(env, obj);
	const char* copy = info->fCopyright;
	return env->NewStringUTF(copy);
}

JNIEXPORT jstring JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_fURL
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = (REXCreatorInfo*) getThis(env, obj);
	const char* url = info->fURL;
	return env->NewStringUTF(url);
}

JNIEXPORT jstring JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_fEmail
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = (REXCreatorInfo*) getThis(env, obj);
	const char* email = info->fEmail;
	return env->NewStringUTF(email);
}

JNIEXPORT jstring JNICALL Java_com_groovemanager_spi_rex_REXCreatorInfo_fFreeText
(JNIEnv *env, jobject obj){
	REXCreatorInfo* info = (REXCreatorInfo*) getThis(env, obj);
	const char* free = info->fCopyright;
	return env->NewStringUTF(free);
}

}