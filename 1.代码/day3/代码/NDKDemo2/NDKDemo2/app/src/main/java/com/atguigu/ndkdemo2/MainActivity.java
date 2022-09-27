package com.atguigu.ndkdemo2;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String result = new JNI().sayHello();
        System.out.println("result=="+result);
    }
}
