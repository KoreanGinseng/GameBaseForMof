#pragma once
#include "SceneBase.h"

namespace Game
{
	// タイトルシーンクラス
	class TitleScene : public SceneBase
	{
	public:
		// コンストラクタ
		TitleScene();
		// デストラクタ
		virtual ~TitleScene();
		// 読み込み
		virtual bool Load() override;
		// 初期化
		virtual void Initialize() override;
		// 更新
		virtual void Update() override;
		// 描画
		virtual void Render() override;
		// 解放
		virtual void Release() override;
	};
}

