package org.karlsland.m3g;
import java.util.ArrayList;
import java.util.List;


abstract 
public class Object3D extends Object {

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

    private List<AnimationTrack> animationTracks;
    private java.lang.Object     userObject;


    /**
     * コンストラクタ。抽象クラスなので直接は呼べない。
     */
    protected Object3D() {
        animationTracks = new ArrayList<AnimationTrack> ();
        userObject      = null;
    }
    
    /**
     * 明示的に初期化を行ないたい時に呼び出す。
     * 通常はコンストラクタが自動で呼ぶので必要ない。
     * ユニットテストで使用する。
     */
    protected void initialize () {
    	jni_initialize();
    }


    /**
     * 明示的にC++側の終了処理を呼びたい時に呼び出す。
     * 通常はGCが自動で呼ぶので呼ぶ必要はない。
     * ユニットテストで使用する。
     */
    @Override
    protected void finalize () {
   		jni_finalize ();
    }


    // 以下M3Gで定義された関数

    public void addAnimationTrack (AnimationTrack animationTrack) {
        jni_addAnimationTrack (animationTrack);
        animationTracks.add (animationTrack);
    }

    public final int animate (int time) {
        return jni_animate (time);
    }

    public final Object3D duplicate () {
        return jni_duplicate ();
    }

    public Object3D find (int userID) {
        return jni_find (userID);
    }

    public AnimationTrack getAnimationTrack (int index) {
        return  jni_getAnimationTrack (index);
    }

    public int getAnimationTrackCount () {
        return jni_getAnimationTrackCount ();
    }


    public int getReferences (Object3D[] references) {
        return jni_getReferences (references);
    }

    public int getUserID () {
        return jni_getUserID ();
    }

    public java.lang.Object getUserObject () {
        return jni_getUserObject ();
    }

    public void removeAnimationTrack (AnimationTrack animationTrack) {
        jni_removeAnimationTrack (animationTrack);
        animationTracks.remove (animationTrack);
        }

    public void setUserID (int userID) {
        jni_setUserID (userID);
    }

    public void setUserObject (java.lang.Object userObject) {
        jni_setUserObject (userObject);
        this.userObject = userObject;
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}

