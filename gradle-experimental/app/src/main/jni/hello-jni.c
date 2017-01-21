#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_shaker_ndk_gradleexperimental_HelloJni_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "C file created by option/alt + enter");
}