#include "jREX.h"
#include "REX.h"
#include "jrexhandle.h"

using namespace REX;

long REXpercent = 0;

REXCallbackResult MyCallback(long percentFinished, void* userData){
	REXpercent = percentFinished;
	return kREXCallback_Continue;
}

extern "C"{

JNIEXPORT jlong JNICALL Java_com_groovemanager_spi_rex_REXHandle_createClass
(JNIEnv *, jobject){
	REXHandle* r = new REXHandle;
	return (jlong)r;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXCreate
(JNIEnv *env, jobject obj, jobject buffer){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	void* adress = env->GetDirectBufferAddress(buffer);
	jsize length = env->GetDirectBufferCapacity(buffer);

	return REXCreate(handle, (const char*)adress,length, &MyCallback, NULL);
}

JNIEXPORT void JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXDelete
(JNIEnv *env, jobject obj){
	REXDelete((REXHandle*)getThis(env, obj));
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXGetInfo
(JNIEnv *env, jobject obj, jlong infoPointer){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXGetInfo(*handle, sizeof(REXInfo), (REXInfo*)infoPointer);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXGetInfoFromBuffer
(JNIEnv *env, jclass c, jobject buffer, jlong infoPointer){
	return REXGetInfoFromBuffer(env->GetDirectBufferCapacity(buffer), (const char*)env->GetDirectBufferAddress(buffer), sizeof(REXInfo), (REXInfo*)infoPointer);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXGetCreatorInfo
(JNIEnv *env, jobject obj, jlong infoPointer){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXGetCreatorInfo(*handle, sizeof(REXCreatorInfo), (REXCreatorInfo*)infoPointer);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXGetSliceInfo
(JNIEnv *env, jobject obj, jint index, jlong infoPointer){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXGetSliceInfo(*handle, index, sizeof(REXSliceInfo), (REXSliceInfo*)infoPointer);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXSetOutputSampleRate
(JNIEnv *env, jobject obj, jint rate){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXSetOutputSampleRate(*handle, rate);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXRenderSlice
(JNIEnv *env, jobject obj, jint sliceIndex, jint length, jobject left, jobject right, jboolean stereo){
	REXHandle* handle = (REXHandle*)getThis(env, obj);

	float* buffers[2];
	buffers[0] = (float*)env->GetDirectBufferAddress(left);
	if(stereo) buffers[1] = (float*)env->GetDirectBufferAddress(right);
	else buffers[1] = NULL;

	return REXRenderSlice(*handle, sliceIndex, length, buffers);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_REXPercentFinished
(JNIEnv *env, jclass c){
	return REXpercent;
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXStartPreview
(JNIEnv *env, jobject obj){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXStartPreview(*handle);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXStopPreview
(JNIEnv *env, jobject obj){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXStopPreview(*handle);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXSetPreviewTempo
(JNIEnv *env, jobject obj, jint tempo){
	REXHandle* handle = (REXHandle*)getThis(env, obj);
	return REXSetPreviewTempo(*handle, tempo);
}

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXHandle_jREXRenderPreviewBatch
(JNIEnv *env, jobject obj, jint framesToRender, jobject left, jobject right){
	REXHandle* handle = (REXHandle*)getThis(env, obj);

	float* buffers[2];

	buffers[0] = (float*)env->GetDirectBufferAddress(left);
	buffers[1] = (float*)env->GetDirectBufferAddress(right);

	return REXRenderPreviewBatch(*handle, framesToRender, buffers);
}

JNIEXPORT jboolean JNICALL Java_com_groovemanager_spi_rex_REXHandle_isBigEndian
(JNIEnv *env, jclass c){
#if WINDOWS
	return false;
#elif MAC
	return true;
#endif
	return false;
}

}