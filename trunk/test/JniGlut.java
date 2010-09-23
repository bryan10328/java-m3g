

public class JniGlut {
    static {
        System.loadLibrary ("jni-glut");
    }

    private native void jni_glut_init ();

    public void init () {
        jni_glut_init ();
    }


}