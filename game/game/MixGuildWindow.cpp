/*
*	STR MIX GUILD 2019
*	gabrielcarlos91@hotmail.com
*/
#include "stdafx.h"
#include "MixGuildWindow.h"

CMixGuildWindow::CMixGuildWindow()
{
}

CMixGuildWindow::~CMixGuildWindow()
{
}

void CMixGuildWindow::OnMouseMove(class CMouse* pcMouse)
{
	pWindow1->OnMouseMove(pcMouse, 0, 0, DX::Graphic::GetWidthBackBuffer(), DX::Graphic::GetHeightBackBuffer(), 0, 0);
}

BOOL CMixGuildWindow::OnMouseClick(class CMouse* pcMouse)
{
	if (pWindow1->OnMouseClick(pcMouse, 0, 0, DX::Graphic::GetWidthBackBuffer(), DX::Graphic::GetHeightBackBuffer(), 0, 0))
		return TRUE;
	return FALSE;
}

BOOL CMixGuildWindow::OnMouseScroll(class CMouse* pcMouse)
{
	UI::Window_ptr pWindowItem = pWindow1->GetElement<UI::Window>(WINDOWID_MixData);
	if (pWindow1->IsOpen() && pWindowItem)
	{
		if (pWindowItem->OnMouseScroll(pcMouse, pWindow1->GetX(), pWindow1->GetY(), DX::Graphic::GetWidthBackBuffer(), DX::Graphic::GetHeightBackBuffer(), 0, 0))
			return TRUE;
	}

	if (pWindow1->OnMouseScroll(pcMouse, 0, 0, DX::Graphic::GetWidthBackBuffer(), DX::Graphic::GetHeightBackBuffer(), 0, 0))
		return TRUE;
	return FALSE;
}

BOOL CMixGuildWindow::OnKeyPress(class CKeyboard* pcKeyboard)
{
	if (pWindow1->OnKeyPress(pcKeyboard))
		return TRUE;
	return FALSE;
}

BOOL CMixGuildWindow::OnKeyChar(class CKeyboard* pcKeyboard)
{
	if (pWindow1->OnKeyChar(pcKeyboard))
		return TRUE;
	return FALSE;
}

void CMixGuildWindow::BuildWindow1()
{
	pWindow1 = std::make_shared<UI::Window>(Rectangle2D(20, 20, 762, 553));
	pWindow1->SetImage(UI::ImageLoader::LoadImage("game\\images\\mixguide\\window.png"));

	pWindow1->SetPosition((RESOLUTION_WIDTH >> 1) - (pWindow1->GetWidth() >> 1), (RESOLUTION_HEIGHT >> 1) - (pWindow1->GetHeight() >> 1));

	// Window Item Data
	UI::Window_ptr pWindow2 = std::make_shared<UI::Window>(Rectangle2D(20, 20, 750, 443));
	pWindow2->SetID(WINDOWID_MixData);
	pWindow1->AddElement(pWindow2);

	// List Mix
	UI::List_ptr pListText = std::make_shared<UI::List>(Rectangle2D(20, 24, 270, 310));
	pListText->SetID(LISTID_About);
	pListText->MakeScrollBar(Rectangle2D(274, 4, 6, 300), "game\\images\\UI\\scroll\\barbg_v.png", "game\\images\\UI\\scroll\\icon_2.png");
	pWindow1->AddElement(pListText);

	// Close Button
	UI::Button_ptr pButtonClose = std::make_shared<UI::Button>(Rectangle2D(725, 25, 30, 28));
	pButtonClose->SetActiveImage(UI::ImageLoader::LoadActiveImage("game\\images\\mixguide\\closebtn.png", "game\\images\\mixguide\\closebtn_.png"));
	pButtonClose->SetEvent(UI::Event::Build(std::bind(&CMixGuildWindow::OnCloseButtonClick, this, std::placeholders::_1)));
	pWindow1->AddElement(pButtonClose);

	{
		UI::Text_ptr pItemMixGuide = std::make_shared<UI::Text>(Rectangle2D(335, 15, 240, 14));
		pItemMixGuide->SetText("合成指南");
		pItemMixGuide->SetFont("Arial", 18, 0, FALSE, TRUE, D3DCOLOR_ARGB(150, 170, 150, 120));
		pWindow1->AddElement(pItemMixGuide);

		UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(20, 55, 240, 14));
		pItemMixName->SetText("合成名称");
		pItemMixName->SetFont("Arial", 16, 0, FALSE, TRUE, D3DCOLOR_ARGB(255, 210, 195, 180));
		pWindow1->AddElement(pItemMixName);

		UI::Text_ptr pItemSheltoms = std::make_shared<UI::Text>(Rectangle2D(228, 55, 240, 14));
		pItemSheltoms->SetText("冶炼");
		pItemSheltoms->SetFont("Arial", 16, 0, FALSE, TRUE, D3DCOLOR_ARGB(255, 210, 195, 180));
		pWindow1->AddElement(pItemSheltoms);

		UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(428, 55, 240, 14));
		pItemDesc->SetText("描述");
		pItemDesc->SetFont("Arial", 16, 0, FALSE, TRUE, D3DCOLOR_ARGB(255, 210, 195, 180));
		pWindow1->AddElement(pItemDesc);

		// ComboBox
		UI::ComboBox_ptr pComboBox = std::make_shared<UI::ComboBox>(Rectangle2D(620, 55, 110, 26));
		pComboBox->SetDefaultText("选择");
		pComboBox->SetID(COMBOBOX_DESC);
		pComboBox->SetBackgroundImage(UI::ImageLoader::LoadActiveImage("game\\images\\UI\\combobox\\drop.png", "game\\images\\UI\\combobox\\dropon.png"));
		pComboBox->SetBackgroundSelectedImage(UI::ImageLoader::LoadImage("game\\images\\UI\\combobox\\drop_.png"));
		pComboBox->SetBackgroundActiveImage(UI::ImageLoader::LoadActiveImage("game\\images\\UI\\combobox\\dropbg.png", "game\\images\\UI\\combobox\\dropdown.png"));
		pComboBox->SetHoverColor(D3DCOLOR_ARGB(150, 170, 150, 120));
		//Options
		{
			pComboBox->AddOption(pComboBox->MakeOption("Weapons", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Amors/Robes", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Bracelet", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Gauntlet", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Boot", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Shield", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Orb", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Ring", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Amulet", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
			pComboBox->AddOption(pComboBox->MakeOption("Sheltom", Rectangle2D(0, 0, 110, 16), FALSE, D3DCOLOR_ARGB(255, 210, 195, 180)));
		}
		pComboBox->SetChangeEvent(UI::Event::Build(std::bind(&CMixGuildWindow::OnChangeMixSelect, this, std::placeholders::_1)));
		pWindow1->AddElement(pComboBox);
	}

	pWindow1->Hide();
}

void CMixGuildWindow::OnResolutionChanged()
{
	pWindow1->SetPosition((RESOLUTION_WIDTH >> 1) - (pWindow1->GetWidth() >> 1), (RESOLUTION_HEIGHT >> 1) - (pWindow1->GetHeight() >> 1));
}

void CMixGuildWindow::OnMixLoad(int MixID)
{
    UI::Window_ptr pWindowItem = pWindow1->GetElement<UI::Window>(WINDOWID_MixData);

    if (pWindowItem)
    {
        pWindowItem->Clear(); // limpa datos 

        if (MixID == 1) // WEAPONS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("合成Devine");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("2x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("3x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("4x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo108.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

/*                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                // Sheltom 5 - itfo107
                UI::Text_ptr pItemSheltom5 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*4, startY, 20, 14));
                pItemSheltom5->SetText("1x");
                pItemSheltom5->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom5);

                UI::ImageBox_ptr pItemImageBox5 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*4 + 15, startY, 22, 22));
                pItemImageBox5->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox5);

                // Sheltom 6 - itfo108
                UI::Text_ptr pItemSheltom6 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*5, startY, 20, 14));
                pItemSheltom6->SetText("1x");
                pItemSheltom6->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom6);

                UI::ImageBox_ptr pItemImageBox6 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*5 + 15, startY, 22, 22));
                pItemImageBox6->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo108.bmp"));
                pWindowItem->AddElement(pItemImageBox6);
*/
                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+7) 最大攻击(+8) 攻击距离(+35) Crit(+2) 魔法(+10)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("合成Celesto");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("2x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("3x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo108.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("5x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo109.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

 /*               // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                // Sheltom 5 - itfo107
                UI::Text_ptr pItemSheltom5 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*4, mix2StartY, 20, 14));
                pItemSheltom5->SetText("1x");
                pItemSheltom5->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom5);

                UI::ImageBox_ptr pItemImageBox5 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*4 + 15, mix2StartY, 22, 22));
                pItemImageBox5->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox5);

                // Sheltom 6 - itfo108
                UI::Text_ptr pItemSheltom6 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*5, mix2StartY, 20, 14));
                pItemSheltom6->SetText("1x");
                pItemSheltom6->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom6);

                UI::ImageBox_ptr pItemImageBox6 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*5 + 15, mix2StartY, 22, 22));
                pItemImageBox6->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo108.bmp"));
                pWindowItem->AddElement(pItemImageBox6);
*/
                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+8) 最大攻击(+9) 攻击距离(+40) 暴击(+3) 魔法(+15)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("合成Mirage");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo108.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("4x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo109.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("5x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo110.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+9) 最大攻击(+11) 攻击距离(+45) 暴击(+3) 魔法(+20)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("合成Inferna");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("2x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo109.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("4x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo110.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("6x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo111.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

/*                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);
*/
                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+13) 最大攻击(+15) Atk-R(+50) 暴击(+4) 魔法(+25)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("合成Enigma");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo109.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo110.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("3x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo111.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("6x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo112.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+15) 最大攻击(+19) Atk-R(+55) 暴击(+4) 魔法(+30)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }
		
		else if (MixID == 2) // ARMORS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) Evasión(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("Daño Crítico(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 3) // BRACELETS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText(" Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 4) // GAUNTLET
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText(" Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 5) // BOOTS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 6) // SHIELD
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 7) // ORB
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 8) // RING
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 9) // AMULETS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4)暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) HP(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }

		else if (MixID == 10) // SHELTOMS
        {
            { // MIX 1 - Con 6 sheltoms en horizontal
                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, 65, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 1 - DISPOSICIÓN HORIZONTAL
                int startY = 65;
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, startY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, startY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, startY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, startY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, startY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, startY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, startY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, startY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, startY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 暴击(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 2 - Con 6 sheltoms en horizontal
                int mix2StartY = 65 + 40;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix2StartY, 240, 14));
                pItemMixName->SetText("Transparo Critical 合成");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 2
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo103
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix2StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix2StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo103.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo104
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix2StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix2StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo105
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix2StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix2StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo106
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix2StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix2StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix2StartY, 240, 14));
                pItemDesc->SetText("最小攻击(+3) 最大攻击(+4) 爆率(+1)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 3 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix3StartY = 65 + 80;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix3StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成3");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 3
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix3StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix3StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix3StartY, 20, 14));
                pItemSheltom2->SetText("2x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix3StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix3StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix3StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix3StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix3StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix3StartY, 240, 14));
                pItemDesc->SetText("防御(+5) 生命(+50)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 4 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix4StartY = 65 + 120;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix4StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成4");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 4
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix4StartY, 20, 14));
                pItemSheltom1->SetText("3x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix4StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix4StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix4StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix4StartY, 20, 14));
                pItemSheltom3->SetText("2x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix4StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix4StartY, 20, 14));
                pItemSheltom4->SetText("1x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix4StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix4StartY, 240, 14));
                pItemDesc->SetText("速度(+2) 闪避(+3)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }

            { // MIX 5 - Con 4 sheltoms (itfo104, itfo105, itfo106, itfo107)
                int mix5StartY = 65 + 160;

                // NAME MIX
                UI::Text_ptr pItemMixName = std::make_shared<UI::Text>(Rectangle2D(0, mix5StartY, 240, 14));
                pItemMixName->SetText("Mix Especial 合成5");
                pItemMixName->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemMixName);

                // QNT SHELTONS y IMAGENES para Mix 5
                int startX = 210;
                int horizontalSpacing = 45;
                
                // Sheltom 1 - itfo104
                UI::Text_ptr pItemSheltom1 = std::make_shared<UI::Text>(Rectangle2D(startX, mix5StartY, 20, 14));
                pItemSheltom1->SetText("1x");
                pItemSheltom1->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom1);

                UI::ImageBox_ptr pItemImageBox1 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + 15, mix5StartY, 22, 22));
                pItemImageBox1->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo104.bmp"));
                pWindowItem->AddElement(pItemImageBox1);

                // Sheltom 2 - itfo105
                UI::Text_ptr pItemSheltom2 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing, mix5StartY, 20, 14));
                pItemSheltom2->SetText("1x");
                pItemSheltom2->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom2);

                UI::ImageBox_ptr pItemImageBox2 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing + 15, mix5StartY, 22, 22));
                pItemImageBox2->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo105.bmp"));
                pWindowItem->AddElement(pItemImageBox2);

                // Sheltom 3 - itfo106
                UI::Text_ptr pItemSheltom3 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*2, mix5StartY, 20, 14));
                pItemSheltom3->SetText("1x");
                pItemSheltom3->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom3);

                UI::ImageBox_ptr pItemImageBox3 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*2 + 15, mix5StartY, 22, 22));
                pItemImageBox3->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo106.bmp"));
                pWindowItem->AddElement(pItemImageBox3);

                // Sheltom 4 - itfo107
                UI::Text_ptr pItemSheltom4 = std::make_shared<UI::Text>(Rectangle2D(startX + horizontalSpacing*3, mix5StartY, 20, 14));
                pItemSheltom4->SetText("4x");
                pItemSheltom4->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemSheltom4);

                UI::ImageBox_ptr pItemImageBox4 = std::make_shared<UI::ImageBox>(Rectangle2D(startX + horizontalSpacing*3 + 15, mix5StartY, 22, 22));
                pItemImageBox4->SetImage(UI::ImageLoader::LoadImage("image\\Sinimage\\Items\\Accessory\\itfo107.bmp"));
                pWindowItem->AddElement(pItemImageBox4);

                //DESC MIX
                UI::Text_ptr pItemDesc = std::make_shared<UI::Text>(Rectangle2D(410, mix5StartY, 240, 14));
                pItemDesc->SetText("临界损伤(+5%)");
                pItemDesc->SetFont("Arial", 16, 0, FALSE, FALSE, D3DCOLOR_ARGB(255, 236, 236, 236));
                pWindowItem->AddElement(pItemDesc);
            }
        }
		
		else
			pWindowItem->Clear();
	}

}

void CMixGuildWindow::OnChangeMixSelect(UIEventArgs e)
{
	UI::Window_ptr pWindowItem = pWindow1->GetElement<UI::Window>(WINDOWID_MixData);

	if (pWindowItem)
	{
		UI::ComboBox_ptr pComboBox = pWindow1->GetElement<UI::ComboBox>(COMBOBOX_DESC);//dados combobox

		if (pComboBox)
		{

			iSelectedMix = pComboBox->GetSelectedID(); // pega id do combobox selecionado

			switch (iSelectedMix)
			{
			default:
				break;
			case 1:
				OnMixLoad(iSelectedMix);
				break;
			case 2:
				OnMixLoad(iSelectedMix);
				break;
			case 3:
				OnMixLoad(iSelectedMix);
				break;
			case 4:
				OnMixLoad(iSelectedMix);
				break;
			case 5:
				OnMixLoad(iSelectedMix);
				break;
			case 6:
				OnMixLoad(iSelectedMix);
				break;
			case 7:
				OnMixLoad(iSelectedMix);
				break;
			case 8:
				OnMixLoad(iSelectedMix);
				break;
			case 9:
				OnMixLoad(iSelectedMix);
				break;
			case 10:
				OnMixLoad(iSelectedMix);
				break;
			}


		}
	}
}

void CMixGuildWindow::Open(int iNPC)
{
	if (!pWindow1->IsOpen())
	{		
		pWindow1->Show();

		MOUSEHANDLER->BlockMouse();
	}
}

void CMixGuildWindow::Close()
{
	if (pWindow1->IsOpen())
	{
		pWindow1->Hide();
		MOUSEHANDLER->UnblockMouse();
	}
	iSelectedMix = 0;
	/*if (pWindow2->IsOpen())
		OnReadMoreButtonClick(UIEventArgs{});*/

	HIDERIGHTNPCBOX;
}

void CMixGuildWindow::Init()
{
	BuildWindow1();
}

void CMixGuildWindow::Render()
{
	pWindow1->Render(0, 0, DX::Graphic::GetWidthBackBuffer(), DX::Graphic::GetHeightBackBuffer(), 0, 0);
}
