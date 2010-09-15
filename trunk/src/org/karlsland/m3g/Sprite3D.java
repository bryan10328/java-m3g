package org.karlsland.m3g;


public class Sprite3D extends Node {

    static {
        System.loadLibrary ("m3g");
    }
    native private void  jni_initilize        ();
    native private void  jni_finalize         ();
    native private void  jni_addTransform     (Node bone, int weight, int firstVertex, int numVertices);
    native private void  jni_getBoneTransform (Node bone, Transform transform);
    native private int   jni_getBoneVertices  (Node bone, int[] indices, float[] weights);
    native private Group jni_getSkeleton      ();


    public Sprite3D (boolean scaled, Image2D image, Appearance appearance) {
    }

    public void finlize () {
    }

    public Appearance getAppearance () {
        return null;
    }

    public int getCropHeight () {
        return 0;
    }

    public int getCropWidth () {
        return 0;
    }

    public int getCropX () {
        return 0;
    }

    public int getCropY () {
        return 0;
    }
    
    public Image2D getImage () {
        return null;
    }

    public boolean isScaled () {
        return false;
    }

    public void setAppearance (Appearance appearance) {
    }

    public void setCrop (int cropX, int cropY, int width, int height) {
    }

    public void setImage (Image2D mage) {
    }


}