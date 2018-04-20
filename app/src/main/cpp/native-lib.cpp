#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_tq_myapplication3_MainActivity_stringFromJNI2(JNIEnv *env, jobject instance) {

    // TODO

    std::string hello = "Hello from C++2222";
    return env->NewStringUTF(hello.c_str());

}

JNIEXPORT jstring JNICALL
Java_com_tq_myapplication3_GSSDK_stringFromJNI3(JNIEnv *env, jobject instance) {

    // TODO


    std::string hello = "Hello from C++1111";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_tq_myapplication3_MainActivity_stringFromJNI1(JNIEnv *env, jobject instance) {

    // TODO


    std::string hello = "Hello from C++1111";
    return env->NewStringUTF(hello.c_str());
}