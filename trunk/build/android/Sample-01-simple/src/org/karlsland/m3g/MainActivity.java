package org.karlsland.m3g;

import android.app.Activity;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
    /** Called when the activity is first created. */
	TextView view;
	GLSurfaceView view2;
	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    	view = new TextView(this);
    	view.setText("Hello World, 7");
        view2 = new GLSurfaceView(this);
        view2.setRenderer(new M3GRenderer());
        setContentView(view2);
    }
}