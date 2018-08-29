#include <jni.h>
#include "Person.cpp"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_admin_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    Person<string> person ;
    person.setUserName("张三");
    string userName = person.getUserName();
    return env->NewStringUTF(userName.c_str());
}
