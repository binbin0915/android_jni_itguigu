package com.atguigu.javacallc;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;

public class MainActivity extends Activity {

    private JNI jni;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        jni = new JNI();
    }

    public void add(View view){
        int result =jni.add(99, 1);
        Log.e(MainActivity.class.getSimpleName(),"result==="+result);
    }

    public void string(View view){
        String result =jni.sayHello("I am from java ");
        Log.e(MainActivity.class.getSimpleName(), "result===" + result);
    }

    public void array(View view){
        int array[] = {1,2,3,4,5};
        int result[] =jni.increaseArrayEles(array);
        for(int i=0;i<result.length;i++){
            Log.e(MainActivity.class.getSimpleName(),"array["+i+"]==="+result[i]);
        }

    }

    public void checkpw(View view){
        int result =jni.checkPwd("123456");
        Log.e(MainActivity.class.getSimpleName(), "result===" + result);
    }


}
