#include "GameScene.h"
#include <Mof.h>
#include "GameDefine.h"

using namespace Game;

// コンストラクタ
GameScene::GameScene()
{
}

// デストラクタ
GameScene::~GameScene()
{
}

// 読み込み
bool GameScene::Load()
{
    return true;
}

// 初期化
void GameScene::Initialize()
{
}

// 更新
void GameScene::Update()
{
    // エンターキーでタイトルへ 
    if (g_pInput->IsKeyPush(MOFKEY_RETURN))
    {
        changeFlag = true;
        nextScene = SceneName_Title;
    }
}

// 描画
void GameScene::Render()
{
    CGraphicsUtilities::RenderString(
        0, 0, "GAME  SCENE"
    );
}

// 解放
void GameScene::Release()
{
}
