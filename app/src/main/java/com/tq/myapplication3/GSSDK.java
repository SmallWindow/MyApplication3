package com.tq.myapplication3;

/**
 * Created by Administrator on 2017/8/21.
 */

public class GSSDK {

    static {
        System.loadLibrary("two-lib");
    }

    public native String stringFromJNI3();
}
