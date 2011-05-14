package org.karlsland.m3g;

import java.nio.FloatBuffer;
import java.nio.ShortBuffer;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;
import javax.microedition.khronos.opengles.GL11;

import android.opengl.GLSurfaceView.Renderer;

public class GLRenderer implements Renderer {
	private int vbo[];
	                
	@Override
	public void onDrawFrame(GL10 gl10) {
		GL11 gl = (GL11)gl10;
		// TODO Auto-generated method stub
		gl.glClearColor (0, 0, 1, 1);
		gl.glClear      (GL11.GL_COLOR_BUFFER_BIT | GL11.GL_DEPTH_BUFFER_BIT);
		
		// カメラの設定(デフォルト)
		gl.glMatrixMode(GL11.GL_MODELVIEW);
		gl.glLoadIdentity();
		
		// 板ポリゴンの描画
		gl.glBindBuffer   (GL11.GL_ARRAY_BUFFER, vbo[0]);
		gl.glVertexPointer(3, GL11.GL_FLOAT, 0, 0);
		gl.glBindBuffer   (GL11.GL_ELEMENT_ARRAY_BUFFER, vbo[1]);
		gl.glDrawElements (GL11.GL_TRIANGLE_STRIP, 4, GL11.GL_UNSIGNED_SHORT, 0 ); 

	}

	@Override
	public void onSurfaceChanged(GL10 gl10, int width, int height) {
		GL11 gl = (GL11)gl10;
		// TODO Auto-generated method stub
		gl.glViewport    (0, 0, width, height);
		gl.glMatrixMode  (GL11.GL_PROJECTION);
		gl.glLoadIdentity();
		gl.glOrthof      (-2, 2, -2, 2, -2, 2);

	}

	@Override
	public void onSurfaceCreated(GL10 gl10, EGLConfig config) {
		GL11 gl = (GL11)gl10;
		// TODO Auto-generated method stub
		float[] positions = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
		FloatBuffer positionsBuffer = FloatBuffer.wrap (positions);
		
		short[] indices = {0,1,2,3};
		ShortBuffer indicesBuffer = ShortBuffer.wrap (indices);
		
		// VertexBufferのサポートはGL10から.
		vbo = new int[2];
		gl.glGenBuffers (2, vbo, 0);
		
		gl.glBindBuffer (GL11.GL_ARRAY_BUFFER, vbo[0]);
		gl.glBufferData (GL11.GL_ARRAY_BUFFER, 4*12, positionsBuffer, GL11.GL_STATIC_DRAW);
		
		gl.glBindBuffer (GL11.GL_ELEMENT_ARRAY_BUFFER, vbo[1]);
		gl.glBufferData (GL11.GL_ELEMENT_ARRAY_BUFFER, 2*4, indicesBuffer, GL11.GL_STATIC_DRAW);
		 
		gl.glEnableClientState (GL11.GL_VERTEX_ARRAY);

	}

}
