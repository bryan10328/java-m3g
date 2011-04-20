package org.karlsland.m3g;

public class TriangleStripArray extends IndexBuffer {

    native private void   jni_initialize (int[] indices   , int[] stripLengths);
    native private void   jni_initialize (int   firstIndex, int[] stripLengths);
    native private void   jni_finalize   ();
    native private String jni_print      ();


    public TriangleStripArray (int[] indices, int[] stripLengths) {
        jni_initialize (indices, stripLengths);    		
    }

    public TriangleStripArray (int firstIndex, int[] stripLengths) {
 		jni_initialize (firstIndex, stripLengths);
    }

    @Override
    protected void finalize () {
    	jni_finalize ();
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}