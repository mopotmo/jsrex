#include "REX.h"
#include "jrexerror.h"

using namespace REX;

extern "C"{

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_NoError
(JNIEnv *, jclass){
	return kREXError_NoError;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_DLLNotFound
(JNIEnv *, jclass){
	return kREXError_DLLNotFound;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_DLLTooOld
(JNIEnv *, jclass){
	return kREXError_DLLTooOld;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_APITooOld
(JNIEnv *, jclass){
	return kREXError_APITooOld;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_OSVersionNotSupported
(JNIEnv *, jclass){
	return kREXError_OSVersionNotSupported;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_NotEnoughMemoryForDLL
(JNIEnv *, jclass){
	return kREXError_NotEnoughMemoryForDLL;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_UnableToLoadDLL
(JNIEnv *, jclass){
	return kREXError_UnableToLoadDLL;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_DLLAlreadyLoaded
(JNIEnv *, jclass){
	return kREXImplError_DLLAlreadyLoaded;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_OutOfMemory
(JNIEnv *, jclass){
	return kREXError_OutOfMemory;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_FileCorrupt
(JNIEnv *, jclass){
	return kREXError_FileCorrupt;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_REX2FileTooNew
(JNIEnv *, jclass){
	return kREXError_REX2FileTooNew;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_OperationAbortedByUser
(JNIEnv *, jclass){
	return kREXError_OperationAbortedByUser;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_FileHasZeroLoopLength
(JNIEnv *, jclass){
	return kREXError_FileHasZeroLoopLength;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_DLLNotLoaded
(JNIEnv *, jclass){
	return kREXImplError_DLLNotLoaded;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidArgument
(JNIEnv *, jclass){
	return kREXImplError_InvalidArgument;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidHandle
(JNIEnv *, jclass){
	return kREXImplError_InvalidHandle;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidSize
(JNIEnv *, jclass){
	return kREXImplError_InvalidSize;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_NoCreatorInfoAvailable
(JNIEnv *, jclass){
	return kREXError_NoCreatorInfoAvailable;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidSlice
(JNIEnv *, jclass){
	return kREXImplError_InvalidSlice;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidSampleRate
(JNIEnv *, jclass){
	return kREXImplError_InvalidSampleRate;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_InvalidTempo
(JNIEnv *, jclass){
	return kREXImplError_InvalidTempo;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_IsBeingPreviewed
(JNIEnv *, jclass){
	return kREXImplError_IsBeingPreviewed;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_NotBeingPreviewed
(JNIEnv *, jclass){
	return kREXImplError_NotBeingPreviewed;
}
JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXError_BufferTooSmall
(JNIEnv *, jclass){
	return kREXImplError_BufferTooSmall;
}

}