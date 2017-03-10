#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jxll_opengles_1android_1framework_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
