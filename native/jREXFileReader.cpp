#include "jrexfilereader.h"
#include "REX.h"

using namespace REX;

extern "C"{

JNIEXPORT jint JNICALL Java_com_groovemanager_spi_rex_REXFileReader_jREXLoadDLL
(JNIEnv *, jclass){
	return REXLoadDLL();
}

JNIEXPORT void JNICALL Java_com_groovemanager_spi_rex_REXFileReader_jREXUnloadDLL
(JNIEnv *, jclass){
	REXUnloadDLL();
}

}