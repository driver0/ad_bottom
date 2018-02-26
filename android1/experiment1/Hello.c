#include "Hello.h"

JNIEXPORT void JNICALL Java_Hello_print(JNIEnv *, jobject){
  	printf("hello world!\n");
}
