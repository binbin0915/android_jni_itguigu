package com.atguigu.guolu;

import android.app.Activity;
import android.os.Build;
import android.os.Bundle;

public class MainActivity extends Activity {

    {
        System.loadLibrary("guolu");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        final PressureView pressureView = new PressureView(this);
        setContentView(pressureView);
//        new Thread(){
//            @Override
//            public void run() {
//                super.run();
//                while (true){
//                    SystemClock.sleep(500);
//                    int pressure = Math.abs(getPressure());//0~250
//                    pressureView.setPressure(pressure);
//
//                    if(pressure > 220){//如果压力大于220就要爆炸
//                        break;
//                    }
//                }
//
//
//
//
//            }
//        }.start();
        uninstallLisetner("/data/data/com.atguigu.guolu", Build.VERSION.SDK_INT);
    }

    /**
     * native代码
     * 调用C代码中的对应的方法
     * @return
     */
    public native int getPressure();
    public native void  uninstallLisetner(String packName,int sdkVersion);
}
