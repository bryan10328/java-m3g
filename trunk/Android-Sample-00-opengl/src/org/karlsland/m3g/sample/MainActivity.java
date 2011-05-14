package org.karlsland.m3g.sample;

import android.app.Activity;
import android.opengl.GLSurfaceView;
import android.os.Bundle;

public class MainActivity extends Activity {
    private GLSurfaceView view;

	/** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        view = new GLSurfaceView (this);
        view.setRenderer(new GLRenderer());
        setContentView(view);
    }
}

//