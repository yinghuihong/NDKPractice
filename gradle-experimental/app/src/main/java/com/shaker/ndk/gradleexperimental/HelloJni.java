package com.shaker.ndk.gradleexperimental;

/**
 * Created by yinghuihong on 2017/1/22.
 */
public class HelloJni {

    static {
        System.loadLibrary("hello-jni");
    }

    public native String stringFromJNI();
}
