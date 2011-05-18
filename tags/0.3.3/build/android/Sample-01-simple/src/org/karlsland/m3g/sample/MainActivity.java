package org.karlsland.m3g.sample;

import android.app.Activity;
import android.opengl.GLSurfaceView;
import android.os.Bundle;

public class MainActivity extends Activity {
	//private TextView view;
	private GLSurfaceView view;
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //view = new TextView(this);
        //view.setText("Hello world, 1");
        view = new GLSurfaceView(this);
        view.setRenderer(new M3GRenderer());
        setContentView(view);
    }
}