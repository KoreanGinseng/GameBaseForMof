#pragma once
#include "SceneBase.h"

namespace Game
{
	// ゲームシーンクラス
	class GameScene : public SceneBase
	{
	public:
		// コンストラクタ
		GameScene();
		// デストラクタ
		virtual ~GameScene();
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

