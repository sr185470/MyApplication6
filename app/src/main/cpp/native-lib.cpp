
// Program to illustrate the working of
// objects and class in C++ Programming
#include<jni.h>
#include<string>
#include <iostream>
#include "vector"

extern "C" JNIEXPORT jint JNICALL
Java_com_example_myapplication_MainActivity_getInt(JNIEnv *env,jobject thiZ)
{
    return 10;
}
/*using namespace std;

// create a class
class Room {

public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

string hello(){
    return "teja"
}

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
*/

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("myapplication");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("myapplication")
//      }
//    }
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_nativeFunction(JNIEnv *env, jobject thiz) {

    return env->NewStringUTF("hello india");
}


extern "C" JNIEXPORT jintArray JNICALL
Java_com_example_myapplication_MainActivity_nativeFunction1(JNIEnv *env, jobject obj) {
    // Allocate memory for the array.
//    jintArray array = (*env).NewIntArray(env, 10);
    // Populate the array with data.
//    for (int i = 0; i < 10; i++) {
//        (*env)->SetIntArrayElement(env, array, i, i);
//    }
    int arr[] = {1,2,3};

    // Return the array pointer.
    return reinterpret_cast<jintArray>(arr);
}
