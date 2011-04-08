package org.karlsland.m3g;
import java.util.*;


abstract 
public class Object3D extends java.lang.Object {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void             jni_initialize             ();
    native private void             jni_finalize               ();
    native private void             jni_addAnimationTrack      (AnimationTrack animationTrack);
    native private int              jni_animate                (int worldTime);
    native private Object3D         jni_duplicate              ();
    native private Object3D         jni_find                   (int userID);
    native private AnimationTrack   jni_getAnimationTrack      (int index);
    native private int              jni_getAnimationTrackCount ();
    native private int              jni_getReferences          (Object3D[] references);
    native private int              jni_getUserID              ();
    native private java.lang.Object jni_getUserObject          ();
    native private void             jni_removeAnimationTrack   (AnimationTrack animationTrack);
    native private void             jni_setUserID              (int userID);
    native private void             jni_setUserObject          (java.lang.Object userObject);
    native private String           jni_print                  ();

    private long                 nativePointer;
    private List<AnimationTrack> animationTracks;
    private java.lang.Object     userObject;


    /**
     * コンストラクタ。抽象クラスなので直接は呼べない。
     */
    protected Object3D () {
        nativePointer   = 0;
        animationTracks = new ArrayList<AnimationTrack> ();
        userObject      = null;
        if (this.getClass() == Object3D.class) {
        	jni_initialize ();
        }
    }
    
    /**
     * 明示的にC++側のイニシャライザーを呼びたい時に呼び出す。
     * 通常はコンストラクタが自動で呼ぶので呼ぶ必要ない。
     * ユニットテストで使用する。
     */
    protected void initialize () {
    	jni_initialize ();
    }

    /**
     * 明示的にC++側のファイナライザーを呼びたい時に呼び出す。
     * 通常はGCが自動で呼ぶので呼ぶ必要はない。
     * ユニットテストで使用する。
     */
    @Override
    protected void finalize () {
   		jni_finalize ();
    }

    /**
     * C++オブジェクトのポインターを返す。デバッグ用。
     * @return C++オブジェクトのポインター
     */
    public long getNativePointer () {
    	return nativePointer;
    }

    // 以下M3Gで定義された関数

    public void addAnimationTrack (AnimationTrack animationTrack) {
        jni_addAnimationTrack (animationTrack);
        animationTracks.add (animationTrack);
    }

    public final int animate (int time) {
        int valid = jni_animate (time);
        return valid;
    }

    public final Object3D duplicate () {
        Object3D obj = jni_duplicate ();
        return obj;
    }

    public Object3D find (int userID) {
        Object3D obj = jni_find (userID);
        return obj;
    }

    public AnimationTrack getAnimationTrack (int index) {
        AnimationTrack track = jni_getAnimationTrack (index);
        return track;
    }

    public int getAnimationTrackCount () {
        int count = jni_getAnimationTrackCount ();
        return count;
    }


    public int getReferences (Object3D[] references) {
        int num = jni_getReferences (references);
        return num;
    }

    public int getUserID () {
        int id = jni_getUserID ();
        return id;
    }

    public java.lang.Object getUserObject () {
        java.lang.Object obj = jni_getUserObject ();
        return obj;
    }

    public void removeAnimationTrack (AnimationTrack animationTrack) {
        animationTracks.remove (animationTrack);
        jni_removeAnimationTrack (animationTrack);
    }

    public void setUserID (int userID) {
        jni_setUserID (userID);
    }

    public void setUserObject (java.lang.Object userObject) {
        this.userObject = userObject;
        jni_setUserObject (userObject);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}

