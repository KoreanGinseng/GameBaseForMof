#pragma once
#include "SceneBase.h"

namespace Game
{
	// シーン管理クラス
	class SceneManager
	{
	private:
		// 現在実行されているシーン
		ScenePtr currentScene;
		// 変更後実行されるシーン
		ScenePtr nextScene;
	public:
		// コンストラクタ
		SceneManager();
		// デストラクタ
		~SceneManager();
		// 初期化
		void Initialize(int sceneNo);
		// 更新
		void Update();
		// 描画
		void Render();
		// 解放
		void Release();
		// シーンの生成
		ScenePtr Create(int sceneNo);
	};
}

