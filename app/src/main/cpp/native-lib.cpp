#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_linhdq_ocrdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jobject JNICALL
Java_com_example_linhdq_ocrdemo_ocr_crop_1image_image_1processing_Blur_nativeBlurDetect(
        JNIEnv *env,
        jclass type,
        jlong pix) {

// TODO

}