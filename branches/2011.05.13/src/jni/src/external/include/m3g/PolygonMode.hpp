#ifndef __M3G_POLYGON_MODE_HPP__
#define __M3G_POLYGON_MODE_HPP__

#include "m3g/Object3D.hpp"
#include <iosfwd>

namespace m3g {

    /**
     * @~English  An Appearance component encapsulating polygon-level attributes.
     * @~Japanese ポリゴンレベルの属性値をカプセル化したアピアランスの構成要素.
     */
    class PolygonMode : public Object3D
    {

    public:
        /**
         * @~English  A parameter to setCulling, specifying that the back-facing side of a polygon is not to be drawn.
         * @~Japanese 背面のカリングを表す定数.
         */
        static const int CULL_BACK    = 160;
        /**
         * @~English  A paramter to setCulling, specifying that the front-facing side of a polygon is not to be drawn.
         * @~Japanese 前面のカリングを表す定数.
         */
        static const int CULL_FRONT   = 161;
        /**
         * @~English  A parameter to setCulling, specifying that both faces of a polygon are to be drawn.
         * @~Japanese カリングなしを表す定数.
         */
        static const int CULL_NONE    = 162;
        /**
         * @~English  A parameter to setShading, specifying that flat shading is to be used.
         * @~Japanese フラットシェーディングを表す定数.
         */
        static const int SHADE_FLAT   = 164;
        /**
         * @~English  A parameter to setShading, specifying that smooth shading is to be used.
         * @~Japanese スムースシェーディングを表す定数.
         */
        static const int SHADE_SMOOTH = 165;
        /**
         * @~English  A parameter to setWinding, specifying that a polygon having its vertices in counter-clockwise order in screen space is to be considreed front-facing.
         * @~Japanese 反時計回りの頂点の並び順を前面と規定する定数.
         */
        static const int WINDING_CCW  = 168;
        /**
         * @~English  A parameter to setWinding, specifying that a polygon having its vertices in counter-clockwise order in screen space is to be considreed front-facing.
         * @~Japanese 時計回りの頂点の並び順を前面と規定する定数.
         */
        static const int WINDING_CW   = 169;

    public:

        /**
         * @~English  Constructs a PolygonMode object with default values.
         * @~Japanese デフォルト値でPolygonModeオブジェクトの作成.
         */
        PolygonMode ();

        /**
         * @~English  Destructs this object.
         * @~Japanese このオブジェクトを削除するデストラクタ.
         */
        virtual ~PolygonMode ();

        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         * @return 複製されたPlygonModeオブジェクト
         */
        PolygonMode* duplicate () const;

        /**
         * @~English  Retrieves the current poygon culling mode.
         * @~Japanese カレントのポリゴンのカリングモードの取得.
         * @return 現在のカリングモード。CULL_FRONT, CULL_BACK, CULL_NONEのいずれか。
         */
        int getCulling () const;

        /**
         * @~English  Retrieves the current polygon shading mode.
         * @~Japanese ポリゴンのシェーディングモードの取得.
         * @return 現在のシェーディングモード。SHADE_FLAT, SHADE_SMOOTHのいずれか。
         */
        int getShading () const;

        /**
         * @~English  Retrieves the current polygon windign mode.
         * @~Japanese ポリゴンのワインディングモードの取得.
         * @return 現在のワインディングモード。WINDING_CCW, WINDING_CWのいずれか。
         */
        int getWinding () const;

        /**
         * @~English  Queries whether local camera lighting is enabled.
         * @~Japanese ローカルカメラライティングの有効、無効の取得.
         * @return 有効の時true, 無効の時false
         */
        bool isLocalCameraLightingEnabled () const;

        /**
         * @~English  Queries wheter perspective correction is enabled.
         * @~Japanese 透視変換補正の有効、無効の問い合わせ.
         * @return 有効の時true, 無効の時false
         */
        bool isPerspectiveCorrectionEnabled () const;

        /**
         * @~English  Queries wheter two-sided lighting is enabled.
         * @~Japanese 両面ライティングの有効、無効の問い合わせ.
         * @return 有効の時true, 無効の時false
         */
        bool isTwoSidedLightingEnabled () const;

        /**
         * @~English  Sets the polygon culling mode.
         * @~Japanese ポリゴンのカリングモードの設定.
         */
        void setCulling (int mode);

        /**
         * @~English  Enables of diables local camera lighting.
         * @~Japanese ローカルカメラライティングの有効化、無効化.
         * @param[in] enable 有効化するときtrue, 無効化するときfalse.
         */
        void setLocalCameraLightingEnable (bool enable);

        /**
         * @~English  Enables or disables perspective corrention.
         * @~Japanese 透視変換補正の有効化、無効化.
         * @param[in] enable 有効化するときtrue, 無効化するときfalse.
         */
        void setPerspectiveCorrectionEnable (bool enable);

        /**
         * @~English  Sets the polygon shading mode.
         * @~Japanese ポリゴンのシェーディングモードの設定.
         * @param[in] mode  設定したいシェーディングモード。SHADE_FLAT, SHADE_SMOOTHのいずれか。
         */
        void setShading (int mode);

        /**
         * @~English  Enables or diables two-sided lighting.
         * @~Japanese 両面ライティングの有効化、無効化.
         * @param[in] enable 有効化するときtrue, 無効化するときfalse.
         */
        void setTwoSidedLightingEnable (bool enable);

        /**
         * @~English  Sets the polygon winding mode to clockwise ofr counter-clockwise.
         * @~Japanese ポリゴンのワインディングモードを時計回りか、反時計回りに設定する.
         * @param[in] mode  設定したいワインディングモード。WINDING_CCW, WINDING_CWのいづれか。
         */
        void setWinding (int mode);

        /**
         * @~English  Print out information of this object, for debug only.
         * @~Japanese このPolygoModeの情報を表示する。デバッグ用.
         */
        virtual std::ostream& print (std::ostream& out) const;

        /**
         * @~English   Render default, for inner use.
         * @~Japanese  デフォルトでレンダリングする内部使用の関数.
         */
        static void renderX ();

    protected:

        /**
         * @~English  
         * @~Japanese 
         */
        virtual PolygonMode* duplicate_xxx (Object3D* obj) const;

        /**
         * @~English   
         * @~Japanese  
         */
        virtual void render_xxx (RenderState& state) const;


    private:
        PolygonMode (const PolygonMode& pmode);
        PolygonMode& operator= (const PolygonMode& pmode);

    private:
        int  culling;
        int  winding;
        int  shading;
        bool two_sided_lighting;
        bool local_camera_lighting;
        bool perspective_correction;
    };

} // namespace m3g {


std::ostream& operator<< (std::ostream& out, const m3g::PolygonMode& pm);

#endif
