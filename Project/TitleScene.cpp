#include "TitleScene.h"
#include <Mof.h>
#include "GameDefine.h"

using namespace Game;

// コンストラクタ
TitleScene::TitleScene()
{
}

// デストラクタ
TitleScene::~TitleScene()
{
}

// 読み込み
bool TitleScene::Load()
{
    return true;
}

// 初期化
void TitleScene::Initialize()
{
}

// 更新
void TitleScene::Update()
{
    // エンターキーでゲームへ 
    if (g_pInput->IsKeyPush(MOFKEY_RETURN))
    {
        changeFlag = true;
        nextScene = SceneName_Game;
    }
}

// 描画
void TitleScene::Render()
{
    CGraphicsUtilities::RenderString(
        0, 0,"TITLE SCENE"
    );
}

// 解放
void TitleScene::Release()
{
}
