#include "jREX.h"
#include "REX.h"
#include "jrexinfo.h"

using namespace REX;

extern "C"{

JNIEXPORT jlong JNICALL Java_com_groovemanager_spi_rex_REXInfo_createClass
(JNIEnv *env, jobject obj){
	REXInfo* info = new REXInfo;
	return(jlong)info;
}

JNIEXPORT void JNICALL Java_com_groovemanager_spi_rex_REXInfo_cleanUp
(JNIEnv *env, jobject obj){
	delete (REXInfo*) getThis(env, obj);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fChannels
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fChannels;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fSampleRate
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fSampleRate;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fSliceCount
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fSliceCount;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fTempo
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fTempo;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fPPQLength
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fPPQLength;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fTimeSigNom
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fTimeSignNom;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fTimeSigDenom
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fTimeSignDenom;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXInfo_fBitDepth
(JNIEnv *env, jobject obj){
	REXInfo* info = (REXInfo*)getThis(env, obj);
	return info->fBitDepth;
}

}