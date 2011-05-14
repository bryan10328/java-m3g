#ifndef __M3G_MATERIAL_HPP__
#define __M3G_MATERIAL_HPP__

#include "m3g/Object3D.hpp"
#include <iosfwd>

namespace m3g {

    /**
     * @~English  An Appearance component encapsulating material attributes for lighting computations.
     * @~Japanese ライティング計算のためのマテリアル属性をカプセル化したアピアランスの構成要素.
     */
    class Material : public Object3D
    {

    public:
        /**
         * @~English  A parameter to setColor and getColor, specifying that the ambient color component.
         * @~Japanese 環境色(アンビエント)を表す定数.
         */
        static const int AMBIENT  = 1<<10;
        /**
         * @~English  A parameter to setColor and getColor, specifying that the diffuse color component.
         * @~Japanese 拡散反射色(ディフューズ)を表す定数.
         */
        static const int DIFFUSE  = 1<<11;
        /**
         * @~English  A parameter to setColor and getColor, specifying that the emissive color component.
         * @~Japanese 発光色を表す定数.
         */
        static const int EMISSIVE = 1<<12;
        /**
         * @~English  A parameter to setColor and getColor, specifying that the specular color component.
         * @~Japanese 鏡面反射色(スペキュラー)を表す定数.
         */
        static const int SPECULAR = 1<<13;

    public:
        /**
         * @~English  Creates a Material object with default values.
         * @~Japanese このオブジェクトを作成するコンストラクタ.
         */
        Material ();

        /**
         * @~English  Destruct this object.
         * @~Japanese このオブジェクトを削除するデストラクタ.
         */
        virtual ~Material ();


        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         */
        Material* duplicate () const;


        /**
         * @~English  Gets the value of the specified color component of this Material.
         * @~Japanese 引数で指定されたカラーコンポーネントの取得.
         * @param[in] target  取得したいカラーコンポーネント
         * @return 引数で指定したカラーコンポーネント
         */
        int getColor (int target) const;

        /**
         * @~English  Sets the shininess of this Material.
         * @~Japanese 鏡面反射色(スペキュラー)の指数成分(shininess)の取得.
         * @return 鏡面反射色(スペキュラー)の指数成分(shininess)
         */
        float getShininess () const;

        /**
         * @~English  
         * @~Japanese 頂点カラートラッキングの有効、無効の問い合わせ.
         */
        bool isVertexColorTrackingEnabled () const;

        /**
         * @~English  Sets the given value to the specified color component(s) of this Material.
         * @~Japanese 引数で指定したカラーコンポーネントを、引数の色に変更する.
         * @param[in] target 　変更したいカラーコンポーネントの指定.
         * @param[in] argb     設定する色
         */
        void setColor (int target, int argb);


        /**
         * @~English  Sets the shininess of this Material.
         * @~Japanese このマテリアルの環境色の指数パラメーター(shiness)の設定.
         * @param[in] shininess  設定する指数パラメーター[0,128]
         */
        void setShininess (float shininess);

    
        /**
         * @~English  Enables or disables vertex color tracking.
         * @~Japanese 頂点カラートラッキングの有効化、無効化.
         */
        void setVertexColorTrackingEnable (bool enable);

        /**
         * @~English  Print out information of this object, for debug only.
         * @~Japanese このオブジェクトの情報を表示する。デバッグ用.
         */
        virtual std::ostream& print (std::ostream& out) const;

        /**
         * @~English  Render with default variables, for inner use.
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
         * @~English  
         * @~Japanese 
         */
        virtual Material* duplicate_xxx (Object3D* obj) const;

        /**
         * @~English  
         * @~Japanese 
         */
        virtual void render_xxx (RenderState& state) const;


    private:
        Material (const Material& mat);
        Material& operator= (const Material& mat);

    private:
        bool  vertex_color_tracking;
        int   ambient_color;
        int   diffuse_color;
        int   emissive_color;
        int   specular_color;
        float shininess;
    };


} // namespace m3g {

std::ostream& operator<< (std::ostream& out, const m3g::Material& m);


#endif
