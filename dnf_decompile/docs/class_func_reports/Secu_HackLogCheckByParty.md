# Secu_HackLogCheckByParty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CheckMoveMapFitInPathHackCnt

```asm
// === 0827a96e Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt  [0x0827a96e-0x827aab5] ===
 827a96e:	55                   	push   %ebp
 827a96f:	89 e5                	mov    %esp,%ebp
 827a971:	83 ec 38             	sub    $0x38,%esp
 827a974:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 827a978:	0f 84 35 01 00 00    	je     827aab3 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x145>
 827a97e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 827a982:	0f 84 2b 01 00 00    	je     827aab3 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x145>
 827a988:	8b 45 10             	mov    0x10(%ebp),%eax
 827a98b:	89 04 24             	mov    %eax,(%esp)
 827a98e:	e8 a7 01 00 00       	call   827ab3a <_ZN6CParty15IsFirstMapClearEv>
 827a993:	83 f0 01             	xor    $0x1,%eax
 827a996:	84 c0                	test   %al,%al
 827a998:	74 18                	je     827a9b2 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x44>
 827a99a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827a9a1:	00 
 827a9a2:	8b 45 10             	mov    0x10(%ebp),%eax
 827a9a5:	89 04 24             	mov    %eax,(%esp)
 827a9a8:	e8 9d 01 00 00       	call   827ab4a <_ZN6CParty16SetFirstMapClearEb>
 827a9ad:	e9 01 01 00 00       	jmp    827aab3 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x145>
 827a9b2:	e8 e4 17 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827a9b7:	8b 55 1c             	mov    0x1c(%ebp),%edx
 827a9ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 827a9be:	89 04 24             	mov    %eax,(%esp)
 827a9c1:	e8 4e 50 0e 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 827a9c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827a9c9:	8b 45 10             	mov    0x10(%ebp),%eax
 827a9cc:	89 04 24             	mov    %eax,(%esp)
 827a9cf:	e8 b8 2e fb ff       	call   822d88c <_ZN6CParty13IsAutoCreatedEv>
 827a9d4:	84 c0                	test   %al,%al
 827a9d6:	75 10                	jne    827a9e8 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x7a>
 827a9d8:	8b 45 10             	mov    0x10(%ebp),%eax
 827a9db:	89 04 24             	mov    %eax,(%esp)
 827a9de:	e8 87 f7 31 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 827a9e3:	83 f8 01             	cmp    $0x1,%eax
 827a9e6:	75 2d                	jne    827aa15 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0xa7>
 827a9e8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 827a9ec:	74 27                	je     827aa15 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0xa7>
 827a9ee:	8b 55 18             	mov    0x18(%ebp),%edx
 827a9f1:	8b 45 14             	mov    0x14(%ebp),%eax
 827a9f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 827a9f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 827a9fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827a9ff:	89 04 24             	mov    %eax,(%esp)
 827aa02:	e8 9f 3f 0d 00       	call   834e9a6 <_ZNK4CMap20checkFitInPathObjectEii>
 827aa07:	83 f0 01             	xor    $0x1,%eax
 827aa0a:	84 c0                	test   %al,%al
 827aa0c:	74 07                	je     827aa15 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0xa7>
 827aa0e:	b8 01 00 00 00       	mov    $0x1,%eax
 827aa13:	eb 05                	jmp    827aa1a <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0xac>
 827aa15:	b8 00 00 00 00       	mov    $0x0,%eax
 827aa1a:	84 c0                	test   %al,%al
 827aa1c:	0f 84 91 00 00 00    	je     827aab3 <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji+0x145>
 827aa22:	8b 45 0c             	mov    0xc(%ebp),%eax
 827aa25:	89 04 24             	mov    %eax,(%esp)
 827aa28:	e8 41 f9 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827aa2d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827aa34:	00 
 827aa35:	89 04 24             	mov    %eax,(%esp)
 827aa38:	e8 0e e6 e8 ff       	call   810904b <_Z14NumberToStringji>
 827aa3d:	8b 55 18             	mov    0x18(%ebp),%edx
 827aa40:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 827aa44:	8b 55 14             	mov    0x14(%ebp),%edx
 827aa47:	89 54 24 18          	mov    %edx,0x18(%esp)
 827aa4b:	89 44 24 14          	mov    %eax,0x14(%esp)
 827aa4f:	c7 44 24 10 20 33 c0 	movl   $0x8c03320,0x10(%esp)
 827aa56:	08 
 827aa57:	c7 44 24 0c 2c 00 00 	movl   $0x2c,0xc(%esp)
 827aa5e:	00 
 827aa5f:	c7 44 24 08 80 3f c0 	movl   $0x8c03f80,0x8(%esp)
 827aa66:	08 
 827aa67:	c7 44 24 04 4b 33 c0 	movl   $0x8c0334b,0x4(%esp)
 827aa6e:	08 
 827aa6f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 827aa76:	e8 8f 91 85 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 827aa7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 827aa7e:	89 04 24             	mov    %eax,(%esp)
 827aa81:	e8 d4 ee e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827aa86:	8b 55 18             	mov    0x18(%ebp),%edx
 827aa89:	89 54 24 14          	mov    %edx,0x14(%esp)
 827aa8d:	8b 55 14             	mov    0x14(%ebp),%edx
 827aa90:	89 54 24 10          	mov    %edx,0x10(%esp)
 827aa94:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827aa9b:	00 
 827aa9c:	c7 44 24 08 f7 01 00 	movl   $0x1f7,0x8(%esp)
 827aaa3:	00 
 827aaa4:	8b 55 0c             	mov    0xc(%ebp),%edx
 827aaa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 827aaab:	89 04 24             	mov    %eax,(%esp)
 827aaae:	e8 cb e1 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827aab3:	c9                   	leave
 827aab4:	c3                   	ret
 827aab5:	90                   	nop

```

```c
// Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt @ 0x827a96e

/* Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned
   int, int) */

void Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt
               (CUser *param_1,CParty *param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CMap *this;
  uint uVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 != (CParty *)0x0) {
    cVar2 = CParty::IsFirstMapClear((CParty *)param_3);
    if (cVar2 == '\x01') {
      iVar3 = G_CDataManager();
      this = (CMap *)CDataManager::find_map(iVar3);
      cVar2 = CParty::IsAutoCreated((CParty *)param_3);
      if ((((cVar2 == '\0') && (iVar3 = CParty::get_member_count((CParty *)param_3), iVar3 != 1)) ||
          (this == (CMap *)0x0)) ||
         (cVar2 = CMap::checkFitInPathObject(this,param_4,param_5), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"Secu_HackLogCheckByParty.cpp",
                   "void Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned int, int)"
                   ,0x2c,"Path gate position error. (User: %s %d,%d)",uVar5,param_4,param_5);
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_2,0x1f7,1,param_4,param_5);
      }
      return;
    }
    CParty::SetFirstMapClear((CParty *)param_3,true);
    return;
  }
  return;
}

```

---

## DieMob

```asm
// === 0827a940 Secu_HackLogCheckByParty::DieMob  [0x0827a940-0x827a96d] ===
 827a940:	55                   	push   %ebp
 827a941:	89 e5                	mov    %esp,%ebp
 827a943:	83 ec 18             	sub    $0x18,%esp
 827a946:	8b 45 0c             	mov    0xc(%ebp),%eax
 827a949:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 827a94d:	66 83 f8 ff          	cmp    $0xffff,%ax
 827a951:	74 19                	je     827a96c <_ZN24Secu_HackLogCheckByParty6DieMobEPK15MSG_MONSTER_DIEP11map_monster+0x2c>
 827a953:	8b 45 08             	mov    0x8(%ebp),%eax
 827a956:	8b 55 10             	mov    0x10(%ebp),%edx
 827a959:	89 54 24 08          	mov    %edx,0x8(%esp)
 827a95d:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a960:	89 54 24 04          	mov    %edx,0x4(%esp)
 827a964:	89 04 24             	mov    %eax,(%esp)
 827a967:	e8 6a eb ff ff       	call   82794d6 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster>
 827a96c:	c9                   	leave
 827a96d:	c3                   	ret

```

```c
// Secu_HackLogCheckByParty::DieMob @ 0x827a940

/* Secu_HackLogCheckByParty::DieMob(MSG_MONSTER_DIE const*, map_monster*) */

void __thiscall
Secu_HackLogCheckByParty::DieMob
          (Secu_HackLogCheckByParty *this,MSG_MONSTER_DIE *param_1,map_monster *param_2)

{
  if (*(short *)(param_1 + 0xf) != -1) {
    Secu_DungeonAverageCheck::setKillMonsterInfo((Secu_DungeonAverageCheck *)this,param_1,param_2);
  }
  return;
}

```

---

## Init

```asm
// === 0827a908 Secu_HackLogCheckByParty::Init  [0x0827a908-0x827a92b] ===
 827a908:	55                   	push   %ebp
 827a909:	89 e5                	mov    %esp,%ebp
 827a90b:	83 ec 18             	sub    $0x18,%esp
 827a90e:	8b 45 08             	mov    0x8(%ebp),%eax
 827a911:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a914:	89 50 10             	mov    %edx,0x10(%eax)
 827a917:	8b 45 08             	mov    0x8(%ebp),%eax
 827a91a:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a91d:	89 54 24 04          	mov    %edx,0x4(%esp)
 827a921:	89 04 24             	mov    %eax,(%esp)
 827a924:	e8 7d eb ff ff       	call   82794a6 <_ZN24Secu_DungeonAverageCheck11SetPartyPtrEP6CParty>
 827a929:	c9                   	leave
 827a92a:	c3                   	ret
 827a92b:	90                   	nop

```

```c
// Secu_HackLogCheckByParty::Init @ 0x827a908

/* Secu_HackLogCheckByParty::Init(CParty*) */

void __thiscall Secu_HackLogCheckByParty::Init(Secu_HackLogCheckByParty *this,CParty *param_1)

{
  *(CParty **)(this + 0x10) = param_1;
  Secu_DungeonAverageCheck::SetPartyPtr((Secu_DungeonAverageCheck *)this,param_1);
  return;
}

```

---

## dungeonClear

```asm
// === 0827aab6 Secu_HackLogCheckByParty::dungeonClear  [0x0827aab6-0x827aac9] ===
 827aab6:	55                   	push   %ebp
 827aab7:	89 e5                	mov    %esp,%ebp
 827aab9:	83 ec 18             	sub    $0x18,%esp
 827aabc:	8b 45 08             	mov    0x8(%ebp),%eax
 827aabf:	89 04 24             	mov    %eax,(%esp)
 827aac2:	e8 0f ef ff ff       	call   82799d6 <_ZN24Secu_DungeonAverageCheck12dungeonClearEv>
 827aac7:	c9                   	leave
 827aac8:	c3                   	ret
 827aac9:	90                   	nop

```

```c
// Secu_HackLogCheckByParty::dungeonClear @ 0x827aab6

/* Secu_HackLogCheckByParty::dungeonClear() */

void __thiscall Secu_HackLogCheckByParty::dungeonClear(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::dungeonClear((Secu_DungeonAverageCheck *)this);
  return;
}

```

---

## dungeonFail

```asm
// === 0827aaca Secu_HackLogCheckByParty::dungeonFail  [0x0827aaca-0x827aadc] ===
 827aaca:	55                   	push   %ebp
 827aacb:	89 e5                	mov    %esp,%ebp
 827aacd:	83 ec 18             	sub    $0x18,%esp
 827aad0:	8b 45 08             	mov    0x8(%ebp),%eax
 827aad3:	89 04 24             	mov    %eax,(%esp)
 827aad6:	e8 19 ef ff ff       	call   82799f4 <_ZN24Secu_DungeonAverageCheck11dungeonFailEv>
 827aadb:	c9                   	leave
 827aadc:	c3                   	ret

```

```c
// Secu_HackLogCheckByParty::dungeonFail @ 0x827aaca

/* Secu_HackLogCheckByParty::dungeonFail() */

void __thiscall Secu_HackLogCheckByParty::dungeonFail(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::dungeonFail((Secu_DungeonAverageCheck *)this);
  return;
}

```

---

## startDungeon

```asm
// === 0827a92c Secu_HackLogCheckByParty::startDungeon  [0x0827a92c-0x827a93f] ===
 827a92c:	55                   	push   %ebp
 827a92d:	89 e5                	mov    %esp,%ebp
 827a92f:	83 ec 18             	sub    $0x18,%esp
 827a932:	8b 45 08             	mov    0x8(%ebp),%eax
 827a935:	89 04 24             	mov    %eax,(%esp)
 827a938:	e8 85 eb ff ff       	call   82794c2 <_ZN24Secu_DungeonAverageCheck12startDungeonEv>
 827a93d:	c9                   	leave
 827a93e:	c3                   	ret
 827a93f:	90                   	nop

```

```c
// Secu_HackLogCheckByParty::startDungeon @ 0x827a92c

/* Secu_HackLogCheckByParty::startDungeon() */

void __thiscall Secu_HackLogCheckByParty::startDungeon(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::startDungeon((Secu_DungeonAverageCheck *)this);
  return;
}

```

