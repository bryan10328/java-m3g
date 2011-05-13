
#ifndef __M3G_FOG_HPP__
#define __M3G_FOG_HPP__

#include <iostream>
#include "m3g/Object3D.hpp"


namespace m3g {

    /**
     * @~English  An Appearance component encapsulating attributes for fogging.
     * @~Japanese フォグ属性を内包するアピアランスの構成要素.
     */
    class Fog : public Object3D
    {

        /**
         * @~English   Near and far distance of linear fog.
         * @~Japanese  線形フォグの距離定数を表す内部使用の構造体.
         */
        struct Distance {
            Distance (float n, float f) : near(n), far(f) {};
            float near;
            float far;
        };
    

    public:

        /**
         * @~English  A parameter to setMode, specifying exponential fog.
         * @~Japanese 指数フォグを表す定数.
         */
        static const int EXPONENTIAL = 80;
        /**
         * @~English  A parameter to setMode, specifying linear fog.
         * @~Japanese 線形フォグを表す定数.
         */
        static const int LINEAR      = 81;

    public:
        /**
         * @~English  Constructs a new Fog object with default values.
         * @~Japanese 新しいFogオブジェクトを作成するコンストラクタ.
         */
        Fog ();

        /**
         * @~English  Destruct a this Fog object.
         * @~Japanese このオブジェクトを削除するデストラクタ.
         */
        virtual ~Fog ();

        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         */
        Fog* duplicate () const;


        /**
         * @~English  Retrieves the current color of this Fog.
         * @~Japanese フォグカラーの取得.
         */
        int getColor () const;

        /**
         * @~English  Retrieves the fog density of exponential fog.
         * @~Japanese フォグ密度の取得.
         */
        float getDensity () const;

        /**
         * @~English  Retrieves the linear fog far distance.
         * @~Japanese 線形フォグのFar距離の取得.
         */
        float getFarDistance () const;

        /**
         * @~English  Retrieves the current fog mode.
         * @~Japanese カレンドのフォグモードの取得.
         */
        int getMode () const;

        /**
         * @~English  Retrieves the linear fog near distance.
         * @~Japanese 線形フォグのnear距離の取得.
         */
        float getNearDistance () const;

        /**
         * @~English  Sets the color of this Fog.
         * @~Japanese このフォグのカラーの設定.
         */
        void setColor (int rgb);

        /**
         * @~English  Sets the fog density for exponential fog.
         * @~Japanese フォグの指数密度の設定.
         */
        void setDensity (float density);

        /**
         * @~English  Sets the near and far distances for linear fog.
         * @~Japanese 線形フォグのnear,far距離の設定.
         */
        void setLinear (float near, float far);

        /**
         * @~English  Sets the fog mode to either linear or exponential.
         * @~Japanese フォグモードを線形もしくはexponentialに設定する.
         */
        void setMode (int mode);

        /**
         * @~English  Print out information of this object, for debug only.
         * @~Japanese このFogクラスの情報を表示する。デバッグ用.
         */
        virtual std::ostream& print (std::ostream& out) const;

        /**
         * @~English  Render defualt, for inner use.
         * @~Japanese デフォルト値でレンダリングする内部使用の関数.
         */
        static void renderX ();

    protected:
        /**
         * @~English  
         * @~Japanese
         */
        virtual void addAnimationTrack_xxx (AnimationTrack* animation_track, bool accepted);

        /**
         * @~English  
         * @~Japanese 
         */
        virtual int animate_xxx (int world_time);

        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         */
        virtual Fog* duplicate_xxx (Object3D* obj) const;

        /**
         * @~English  
         * @~Japanese 
         */
        virtual void render_xxx (RenderState& state) const;


    private:
        Fog (const Fog& fog);
        Fog& operator= (const Fog& fog);


    private:
        int      mode;
        int      color;
        float    density;
        Distance distance;
    };


} // namespace m3g {

std::ostream& operator<< (std::ostream& out, const m3g::Fog& f);


#endif
