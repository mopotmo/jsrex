#include "jREX.h"
#include "REX.h"
#include "jrexsliceinfo.h"

using namespace REX;

extern "C"{
	
JNIEXPORT jlong JNICALL Java_com_groovemanager_spi_rex_REXSliceInfo_createClass
(JNIEnv *env, jobject obj){
	REXSliceInfo* info = new REXSliceInfo;
	return(jlong)info;
}

JNIEXPORT void JNICALL Java_com_groovemanager_spi_rex_REXSliceInfo_cleanUp
(JNIEnv *env, jobject obj){
	delete (REXSliceInfo*)getThis(env, obj);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXSliceInfo_fPPQPos
(JNIEnv *env, jobject obj){
	REXSliceInfo* info = (REXSliceInfo*)getThis(env, obj);
	return info->fPPQPos;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXSliceInfo_fSamplelength
(JNIEnv *env, jobject obj){
	REXSliceInfo* info = (REXSliceInfo*)getThis(env, obj);
	return info->fSampleLength;
}

}