#include "SceneManager.h"
#include "GameDefine.h"
#include <Mof.h>

// 各シーンのインクルード
#include "TitleScene.h"
#include "GameScene.h"

using namespace Game;

// コンストラクタ
SceneManager::SceneManager()
{
}

// デストラクタ
SceneManager::~SceneManager()
{
}

// 初期化
void SceneManager::Initialize(int sceneNo)
{
	// 初期シーンの生成
	currentScene = Create(sceneNo);
	if (currentScene == nullptr)
	{
		MOF_PRINTLOG("Scene Create Failured\n");
		return;
	}
	// 読み込み失敗した場合エラーログを残す
	if (!currentScene->Load())
	{
		MOF_PRINTLOG("Scene Load Failured\n");
		return;
	}
	currentScene->Initialize();
}

// 更新
void Game::SceneManager::Update()
{
	// シーン生成できていない場合、更新しない
	if (!currentScene)
	{
		return;
	}
	// シーンの更新
	currentScene->Update();
}

// 描画
void Game::SceneManager::Render()
{
	// シーン生成できていない場合、描画しない
	if (!currentScene)
	{
		return;
	}
	// シーンの描画
	currentScene->Render();
}

// 解放
void Game::SceneManager::Release()
{
}

// シーンの生成
ScenePtr SceneManager::Create(int sceneNo)
{
	switch (sceneNo)
	{
	case SceneName_Title:
		return std::make_shared<TitleScene>();
	case SceneName_Game:
		return std::make_shared<GameScene>();
	default:
		break;
	}
	return nullptr;
}
