package com.atguigu.ndkdemo2;

/**
 * 作者：杨光福 on 2016/4/18 11:50
 * 微信：yangguangfu520
 * QQ号：541433511
 * 作用：Java调用对应的C代码的
 */
public class JNI {

    {
        System.loadLibrary("Hello");
    }

    /**
     * 定义native方法
     * 调用C代码对应的方法
     * @return
     */
    public native String sayHello();
}
