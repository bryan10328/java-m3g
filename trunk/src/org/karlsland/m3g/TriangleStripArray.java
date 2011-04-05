package org.karlsland.m3g;

public class TriangleStripArray extends IndexBuffer {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize (int[] indices   , int[] stripLengths);
    native private void   jni_initialize (int   firstIndex, int[] stripLengths);
    native private void   jni_finalize   ();
    native private String jni_print      ();


    public TriangleStripArray (int[] indices, int[] stripLengths) {
    	if (this.getClass() == TriangleStripArray.class) {
            jni_initialize (indices, stripLengths);    		
    	}
    }

    public TriangleStripArray (int firstIndex, int[] stripLengths) {
    	if (this.getClass() == TriangleStripArray.class) {
    		jni_initialize (firstIndex, stripLengths);
    	}
    }
    
    protected void initialize (int[] indices   , int[] stripLengths) {
    	jni_initialize (indices, stripLengths);
    }

    protected void initialize (int firstIndex, int[] stripLengths) {
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