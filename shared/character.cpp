#include "stdafx.h"
#include "character.h"


BOOL CCharacterSaveData::SaveCharacter( CharacterData & sCharacterData, ItemData * pcaInventory1, ItemData * pcaInventory2, ItemData * pcItemMouse )
{
	STRINGCOPY( sPacket.szHeader, "RC 1.70" );

	CopyMemory( &sPacket.sCharacterData, &sCharacterData, sizeof( CharacterData ) );

	ZeroMemory( &sPacket.sCharacterSaveData, sizeof( CharacterSave ) );

	sPacket.iDropItemCount = 0;

	return TRUE;
}




EClassFlag CharacterClassToClassFlag( ECharacterClass eClass )
{
	switch( eClass )
	{
		//Tempskron
		case CHARACTERCLASS_Fighter:
			return CLASSFLAG_Fighter;
		case CHARACTERCLASS_Mechanician:
			return CLASSFLAG_Mechanician;
		case CHARACTERCLASS_Archer:
			return CLASSFLAG_Archer;
		case CHARACTERCLASS_Pikeman:
			return CLASSFLAG_Pikeman;
		case CHARACTERCLASS_Assassin:
			return CLASSFLAG_Assassin;

			//Morion
		case CHARACTERCLASS_Atalanta:
			return CLASSFLAG_Atalanta;
		case CHARACTERCLASS_Knight:
			return CLASSFLAG_Knight;
		case CHARACTERCLASS_Magician:
			return CLASSFLAG_Magician;
		case CHARACTERCLASS_Priestess:
			return CLASSFLAG_Priestess;
		case CHARACTERCLASS_Shaman:
			return CLASSFLAG_Shaman;
	}

	return CLASSFLAG_None;
}

ECharacterClass ClassFlagToCharacterClass( EClassFlag eFlag )
{
	ECharacterClass iClass = CHARACTERCLASS_None;

	switch( eFlag )
	{
		case CLASSFLAG_Fighter:
			iClass = CHARACTERCLASS_Fighter;
			break;
		case CLASSFLAG_Mechanician:
			iClass = CHARACTERCLASS_Mechanician;
			break;
		case CLASSFLAG_Archer:
			iClass = CHARACTERCLASS_Archer;
			break;
		case CLASSFLAG_Pikeman:
			iClass = CHARACTERCLASS_Pikeman;
			break;
		case CLASSFLAG_Atalanta:
			iClass = CHARACTERCLASS_Atalanta;
			break;
		case CLASSFLAG_Knight:
			iClass = CHARACTERCLASS_Knight;
			break;
		case CLASSFLAG_Magician:
			iClass = CHARACTERCLASS_Magician;
			break;
		case CLASSFLAG_Priestess:
			iClass = CHARACTERCLASS_Priestess;
			break;
		case CLASSFLAG_Assassin:
			iClass = CHARACTERCLASS_Assassin;
			break;
		case CLASSFLAG_Shaman:
			iClass = CHARACTERCLASS_Shaman;
			break;
	}

	return iClass;
}

const char * GetCharacterClassByFlag( EClassFlag eFlag )
{
	switch( eFlag )
	{
		case CLASSFLAG_Fighter:
			return "ÎäÊ¿";
		case CLASSFLAG_Archer:
			return "¹­¼ýÊÖ";
		case CLASSFLAG_Assassin:
			return "´Ì¿Í";
		case CLASSFLAG_Atalanta:
			return "Ä§Ç¹ÊÖ";
		case CLASSFLAG_Knight:
			return "ÓÎÏÀ";
		case CLASSFLAG_Magician:
			return "·¨Ê¦";
		case CLASSFLAG_Mechanician:
			return "»úÐµ±ø";
		case CLASSFLAG_Pikeman:
			return "Ç¹±ø";
		case CLASSFLAG_Priestess:
			return "¼ÀË¾";
		case CLASSFLAG_Shaman:
			return "ÈøÂú";
	}

	return "";
};

ECharacterRace GetCharacterRace( ECharacterClass iClass )
{
	ECharacterRace iRet = CHARACTERRACE_Morion;
	switch( iClass )
	{
		case CHARACTERCLASS_Archer:
		case CHARACTERCLASS_Fighter:
		case CHARACTERCLASS_Mechanician:
		case CHARACTERCLASS_Pikeman:
		case CHARACTERCLASS_Assassin:
			iRet = CHARACTERRACE_Tempskron;
			break;
	}
	return iRet;
}

const char * GetCharacterRaceName( ECharacterRace eCharacterRace )
{
	if ( eCharacterRace == CHARACTERRACE_Morion )
		return "Ä§Áé×å";
	else if ( eCharacterRace == CHARACTERRACE_Sopphetio )
		return "Sopphetio";

	return "Ì¹ÆÕ×å";
}

CharacterClassData * GetCharacterClassData( int iClass, int iRankup )
{
	int iClassCheck = iRankup & 7;
	int iClassBase = iClass & 0xFFFF;

	if( !iRankup )
		iClassCheck = iClass >> 24;

	int iRankupCount = 0;
	for( size_t i = 0; i < _countof(saCharacterClassData); i++ )
	{
		CharacterClassData * psClassData = saCharacterClassData + i;

		if( !psClassData->pszName[0] )
			continue;

		if( iClassBase == psClassData->iClass )
		{
			if( iClassCheck == iRankupCount )
				return psClassData;

			iRankupCount++;
		}
	}

	return &saCharacterClassData[0];
}
