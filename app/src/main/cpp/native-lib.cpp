#include <jni.h>
#include <string>
#include "Person.h"

extern "C"
jstring
Java_pl_saramak_cpp_cppexmple_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    hello.append("new ");
    Person p("Mariusz", "Saramak");
    for (int i =0; i<10; i++){
        hello.append(p.toString());
    }
    return env->NewStringUTF(hello.c_str());
}

