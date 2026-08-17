# advancealtar__HistoryLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## buyItem

```asm
// === 08133dda advancealtar::HistoryLog::buyItem  [0x08133dda-0x8133e2f] ===
 8133dda:	55                   	push   %ebp
 8133ddb:	89 e5                	mov    %esp,%ebp
 8133ddd:	53                   	push   %ebx
 8133dde:	83 ec 34             	sub    $0x34,%esp
 8133de1:	8b 55 10             	mov    0x10(%ebp),%edx
 8133de4:	8b 45 14             	mov    0x14(%ebp),%eax
 8133de7:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 8133deb:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 8133def:	8b 45 18             	mov    0x18(%ebp),%eax
 8133df2:	0f b7 d8             	movzwl %ax,%ebx
 8133df5:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 8133df9:	0f b7 c8             	movzwl %ax,%ecx
 8133dfc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8133dff:	8b 45 08             	mov    0x8(%ebp),%eax
 8133e02:	0f b7 c0             	movzwl %ax,%eax
 8133e05:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8133e09:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8133e10:	00 
 8133e11:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8133e15:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133e1d:	c7 04 24 00 03 40 09 	movl   $0x9400300,(%esp)
 8133e24:	e8 37 2f 02 00       	call   8156d60 <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt>
 8133e29:	83 c4 34             	add    $0x34,%esp
 8133e2c:	5b                   	pop    %ebx
 8133e2d:	5d                   	pop    %ebp
 8133e2e:	c3                   	ret
 8133e2f:	90                   	nop

```

```c
// advancealtar::HistoryLog::buyItem @ 0x8133dda

/* advancealtar::HistoryLog::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int)
    */

void advancealtar::HistoryLog::buyItem
               (ushort param_1,uint param_2,undefined4 param_3,ushort param_4,ushort param_5)

{
  CAdvanceAltarLog::incrementLayerStatData
            ((CAdvanceAltarLog *)advanceAltarstatistics_,param_1,param_2,param_4,1,param_5);
  return;
}

```

---

## dungeonClearInfo

```asm
// === 08133bd4 advancealtar::HistoryLog::dungeonClearInfo  [0x08133bd4-0x8133d55] ===
 8133bd4:	55                   	push   %ebp
 8133bd5:	89 e5                	mov    %esp,%ebp
 8133bd7:	57                   	push   %edi
 8133bd8:	56                   	push   %esi
 8133bd9:	53                   	push   %ebx
 8133bda:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 8133be0:	8b 45 10             	mov    0x10(%ebp),%eax
 8133be3:	88 85 d4 fe ff ff    	mov    %al,-0x12c(%ebp)
 8133be9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8133bf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133bf3:	89 04 24             	mov    %eax,(%esp)
 8133bf6:	e8 b3 0c 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8133bfb:	89 04 24             	mov    %eax,(%esp)
 8133bfe:	e8 83 0c 00 00       	call   8134886 <_ZNK12advancealtar9ProcStage17getStartStageTimeEv>
 8133c03:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8133c06:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8133c0a:	7f 09                	jg     8133c15 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0x41>
 8133c0c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8133c13:	eb 12                	jmp    8133c27 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0x53>
 8133c15:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8133c1c:	e8 7d 80 f9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8133c21:	2b 45 e4             	sub    -0x1c(%ebp),%eax
 8133c24:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8133c27:	8d 95 e1 fe ff ff    	lea    -0x11f(%ebp),%edx
 8133c2d:	bb ff 00 00 00       	mov    $0xff,%ebx
 8133c32:	b8 00 00 00 00       	mov    $0x0,%eax
 8133c37:	89 d1                	mov    %edx,%ecx
 8133c39:	83 e1 01             	and    $0x1,%ecx
 8133c3c:	85 c9                	test   %ecx,%ecx
 8133c3e:	74 08                	je     8133c48 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0x74>
 8133c40:	88 02                	mov    %al,(%edx)
 8133c42:	83 c2 01             	add    $0x1,%edx
 8133c45:	83 eb 01             	sub    $0x1,%ebx
 8133c48:	89 d1                	mov    %edx,%ecx
 8133c4a:	83 e1 02             	and    $0x2,%ecx
 8133c4d:	85 c9                	test   %ecx,%ecx
 8133c4f:	74 09                	je     8133c5a <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0x86>
 8133c51:	66 89 02             	mov    %ax,(%edx)
 8133c54:	83 c2 02             	add    $0x2,%edx
 8133c57:	83 eb 02             	sub    $0x2,%ebx
 8133c5a:	89 d9                	mov    %ebx,%ecx
 8133c5c:	c1 e9 02             	shr    $0x2,%ecx
 8133c5f:	89 d7                	mov    %edx,%edi
 8133c61:	f3 ab                	rep stos %eax,%es:(%edi)
 8133c63:	89 fa                	mov    %edi,%edx
 8133c65:	89 d9                	mov    %ebx,%ecx
 8133c67:	83 e1 02             	and    $0x2,%ecx
 8133c6a:	85 c9                	test   %ecx,%ecx
 8133c6c:	74 06                	je     8133c74 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0xa0>
 8133c6e:	66 89 02             	mov    %ax,(%edx)
 8133c71:	83 c2 02             	add    $0x2,%edx
 8133c74:	89 d9                	mov    %ebx,%ecx
 8133c76:	83 e1 01             	and    $0x1,%ecx
 8133c79:	85 c9                	test   %ecx,%ecx
 8133c7b:	74 05                	je     8133c82 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0xae>
 8133c7d:	88 02                	mov    %al,(%edx)
 8133c7f:	83 c2 01             	add    $0x1,%edx
 8133c82:	8d 85 e1 fe ff ff    	lea    -0x11f(%ebp),%eax
 8133c88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133c8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8133c8f:	89 04 24             	mov    %eax,(%esp)
 8133c92:	e8 bd 92 ff ff       	call   812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>
 8133c97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133c9a:	89 04 24             	mov    %eax,(%esp)
 8133c9d:	e8 fe 0b 00 00       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 8133ca2:	8b 00                	mov    (%eax),%eax
 8133ca4:	89 c3                	mov    %eax,%ebx
 8133ca6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133ca9:	89 04 24             	mov    %eax,(%esp)
 8133cac:	e8 fd 0b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8133cb1:	89 04 24             	mov    %eax,(%esp)
 8133cb4:	e8 6d ae ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8133cb9:	0f b6 95 d4 fe ff ff 	movzbl -0x12c(%ebp),%edx
 8133cc0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8133cc3:	8d b1 00 97 07 00    	lea    0x79700(%ecx),%esi
 8133cc9:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8133ccd:	8d 8d e1 fe ff ff    	lea    -0x11f(%ebp),%ecx
 8133cd3:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8133cd7:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8133cde:	00 
 8133cdf:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8133ce6:	00 
 8133ce7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8133cee:	00 
 8133cef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8133cf3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8133cf6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8133cfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133cfe:	89 34 24             	mov    %esi,(%esp)
 8133d01:	e8 68 0d 55 00       	call   8684a6e <_ZN15cUserHistoryLog16DungeonClearInfoEiliii17ENUM_DUNGEON_MODEPKci>
 8133d06:	80 bd d4 fe ff ff 00 	cmpb   $0x0,-0x12c(%ebp)
 8133d0d:	74 3b                	je     8133d4a <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb+0x176>
 8133d0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133d12:	89 04 24             	mov    %eax,(%esp)
 8133d15:	e8 94 0b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8133d1a:	89 04 24             	mov    %eax,(%esp)
 8133d1d:	e8 04 ae ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8133d22:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8133d29:	00 
 8133d2a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8133d31:	00 
 8133d32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8133d39:	00 
 8133d3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133d3e:	c7 04 24 00 03 40 09 	movl   $0x9400300,(%esp)
 8133d45:	e8 e6 2e 02 00       	call   8156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>
 8133d4a:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 8133d50:	5b                   	pop    %ebx
 8133d51:	5e                   	pop    %esi
 8133d52:	5f                   	pop    %edi
 8133d53:	5d                   	pop    %ebp
 8133d54:	c3                   	ret
 8133d55:	90                   	nop

```

```c
// advancealtar::HistoryLog::dungeonClearInfo @ 0x8133bd4

/* advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool) */

void advancealtar::HistoryLog::dungeonClearInfo(CUser *param_1,StageControl *param_2,bool param_3)

{
  undefined4 uVar1;
  ProcStage *pPVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_123;
  char local_122 [254];
  int local_24;
  int local_20;
  
  bVar9 = 0;
  local_24 = 0;
  pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
  local_20 = ProcStage::getStartStageTime(pPVar2);
  if (local_20 < 1) {
    local_24 = 0;
  }
  else {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_24 = local_24 - local_20;
  }
  pcVar6 = &local_123;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_123 = '\0';
    pcVar6 = local_122;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  getMemberNames(param_1,&local_123);
  puVar3 = (undefined4 *)StageControl::getCharacData(param_2);
  uVar1 = *puVar3;
  pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
  uVar4 = ProcStage::getStageIndex(pPVar2);
  cUserHistoryLog::DungeonClearInfo
            ((cUserHistoryLog *)(param_1 + 0x79700),param_3,local_24,uVar4,0,1,0,&local_123,uVar1);
  if (param_3) {
    pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
    uVar7 = ProcStage::getStageIndex(pPVar2);
    CAdvanceAltarLog::incrementEntranceData((CAdvanceAltarLog *)advanceAltarstatistics_,uVar7,0,1,0)
    ;
  }
  return;
}

```

---

## enterDungeon

```asm
// === 081339b0 advancealtar::HistoryLog::enterDungeon  [0x081339b0-0x8133abb] ===
 81339b0:	55                   	push   %ebp
 81339b1:	89 e5                	mov    %esp,%ebp
 81339b3:	57                   	push   %edi
 81339b4:	53                   	push   %ebx
 81339b5:	81 ec 20 01 00 00    	sub    $0x120,%esp
 81339bb:	8d 95 f9 fe ff ff    	lea    -0x107(%ebp),%edx
 81339c1:	bb ff 00 00 00       	mov    $0xff,%ebx
 81339c6:	b8 00 00 00 00       	mov    $0x0,%eax
 81339cb:	89 d1                	mov    %edx,%ecx
 81339cd:	83 e1 01             	and    $0x1,%ecx
 81339d0:	85 c9                	test   %ecx,%ecx
 81339d2:	74 08                	je     81339dc <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE+0x2c>
 81339d4:	88 02                	mov    %al,(%edx)
 81339d6:	83 c2 01             	add    $0x1,%edx
 81339d9:	83 eb 01             	sub    $0x1,%ebx
 81339dc:	89 d1                	mov    %edx,%ecx
 81339de:	83 e1 02             	and    $0x2,%ecx
 81339e1:	85 c9                	test   %ecx,%ecx
 81339e3:	74 09                	je     81339ee <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE+0x3e>
 81339e5:	66 89 02             	mov    %ax,(%edx)
 81339e8:	83 c2 02             	add    $0x2,%edx
 81339eb:	83 eb 02             	sub    $0x2,%ebx
 81339ee:	89 d9                	mov    %ebx,%ecx
 81339f0:	c1 e9 02             	shr    $0x2,%ecx
 81339f3:	89 d7                	mov    %edx,%edi
 81339f5:	f3 ab                	rep stos %eax,%es:(%edi)
 81339f7:	89 fa                	mov    %edi,%edx
 81339f9:	89 d9                	mov    %ebx,%ecx
 81339fb:	83 e1 02             	and    $0x2,%ecx
 81339fe:	85 c9                	test   %ecx,%ecx
 8133a00:	74 06                	je     8133a08 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE+0x58>
 8133a02:	66 89 02             	mov    %ax,(%edx)
 8133a05:	83 c2 02             	add    $0x2,%edx
 8133a08:	89 d9                	mov    %ebx,%ecx
 8133a0a:	83 e1 01             	and    $0x1,%ecx
 8133a0d:	85 c9                	test   %ecx,%ecx
 8133a0f:	74 05                	je     8133a16 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE+0x66>
 8133a11:	88 02                	mov    %al,(%edx)
 8133a13:	83 c2 01             	add    $0x1,%edx
 8133a16:	8d 85 f9 fe ff ff    	lea    -0x107(%ebp),%eax
 8133a1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8133a23:	89 04 24             	mov    %eax,(%esp)
 8133a26:	e8 29 95 ff ff       	call   812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>
 8133a2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133a2e:	89 04 24             	mov    %eax,(%esp)
 8133a31:	e8 36 0e 00 00       	call   813486c <_ZNK12advancealtar9ProcStage18getStageDifficultyEv>
 8133a36:	89 c3                	mov    %eax,%ebx
 8133a38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133a3b:	89 04 24             	mov    %eax,(%esp)
 8133a3e:	e8 e3 b0 ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8133a43:	8b 55 08             	mov    0x8(%ebp),%edx
 8133a46:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8133a4c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8133a53:	00 
 8133a54:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 8133a5b:	00 
 8133a5c:	8d 95 f9 fe ff ff    	lea    -0x107(%ebp),%edx
 8133a62:	89 54 24 10          	mov    %edx,0x10(%esp)
 8133a66:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8133a6d:	00 
 8133a6e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8133a72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133a76:	89 0c 24             	mov    %ecx,(%esp)
 8133a79:	e8 9c 0e 55 00       	call   868491a <_ZN15cUserHistoryLog12EnterDungeonEiiiPKcci>
 8133a7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133a81:	89 04 24             	mov    %eax,(%esp)
 8133a84:	e8 9d b0 ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8133a89:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8133a90:	00 
 8133a91:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8133a98:	00 
 8133a99:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8133aa0:	00 
 8133aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133aa5:	c7 04 24 00 03 40 09 	movl   $0x9400300,(%esp)
 8133aac:	e8 7f 31 02 00       	call   8156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>
 8133ab1:	81 c4 20 01 00 00    	add    $0x120,%esp
 8133ab7:	5b                   	pop    %ebx
 8133ab8:	5f                   	pop    %edi
 8133ab9:	5d                   	pop    %ebp
 8133aba:	c3                   	ret
 8133abb:	90                   	nop

```

```c
// advancealtar::HistoryLog::enterDungeon @ 0x81339b0

/* advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&) */

void advancealtar::HistoryLog::enterDungeon(CUser *param_1,ProcStage *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_10b;
  char local_10a [254];
  
  pcVar4 = &local_10b;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_10b = '\0';
    pcVar4 = local_10a;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  getMemberNames(param_1,&local_10b);
  iVar1 = ProcStage::getStageDifficulty(param_2);
  iVar2 = ProcStage::getStageIndex(param_2);
  cUserHistoryLog::EnterDungeon
            ((cUserHistoryLog *)(param_1 + 0x79700),iVar2,iVar1,1,&local_10b,'\x02',0);
  uVar5 = ProcStage::getStageIndex(param_2);
  CAdvanceAltarLog::incrementEntranceData((CAdvanceAltarLog *)advanceAltarstatistics_,uVar5,1,0,0);
  return;
}

```

---

## killMonster

```asm
// === 08133b40 advancealtar::HistoryLog::killMonster  [0x08133b40-0x8133bd3] ===
 8133b40:	55                   	push   %ebp
 8133b41:	89 e5                	mov    %esp,%ebp
 8133b43:	57                   	push   %edi
 8133b44:	56                   	push   %esi
 8133b45:	53                   	push   %ebx
 8133b46:	83 ec 3c             	sub    $0x3c,%esp
 8133b49:	8b 45 10             	mov    0x10(%ebp),%eax
 8133b4c:	0f b7 80 26 0a 00 00 	movzwl 0xa26(%eax),%eax
 8133b53:	0f b7 d8             	movzwl %ax,%ebx
 8133b56:	8b 45 10             	mov    0x10(%ebp),%eax
 8133b59:	0f b7 80 24 0a 00 00 	movzwl 0xa24(%eax),%eax
 8133b60:	0f b7 c8             	movzwl %ax,%ecx
 8133b63:	8b 45 10             	mov    0x10(%ebp),%eax
 8133b66:	8b 90 1a 0a 00 00    	mov    0xa1a(%eax),%edx
 8133b6c:	8b 45 10             	mov    0x10(%ebp),%eax
 8133b6f:	8b 80 1e 0a 00 00    	mov    0xa1e(%eax),%eax
 8133b75:	8b 75 08             	mov    0x8(%ebp),%esi
 8133b78:	8d be 00 97 07 00    	lea    0x79700(%esi),%edi
 8133b7e:	c7 44 24 2c 01 00 00 	movl   $0x1,0x2c(%esp)
 8133b85:	00 
 8133b86:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8133b8d:	00 
 8133b8e:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8133b95:	00 
 8133b96:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8133b9d:	00 
 8133b9e:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8133ba5:	00 
 8133ba6:	8b 75 10             	mov    0x10(%ebp),%esi
 8133ba9:	89 74 24 18          	mov    %esi,0x18(%esp)
 8133bad:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8133bb1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8133bb5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133bb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8133bbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133bc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133bc4:	89 3c 24             	mov    %edi,(%esp)
 8133bc7:	e8 e0 15 55 00       	call   86851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>
 8133bcc:	83 c4 3c             	add    $0x3c,%esp
 8133bcf:	5b                   	pop    %ebx
 8133bd0:	5e                   	pop    %esi
 8133bd1:	5f                   	pop    %edi
 8133bd2:	5d                   	pop    %ebp
 8133bd3:	c3                   	ret

```

```c
// advancealtar::HistoryLog::killMonster @ 0x8133b40

/* advancealtar::HistoryLog::killMonster(CUser&, int, MSG_MONSTER_DIE const&) */

void advancealtar::HistoryLog::killMonster(CUser *param_1,int param_2,MSG_MONSTER_DIE *param_3)

{
  cUserHistoryLog::KillMonster
            ((cUserHistoryLog *)(param_1 + 0x79700),param_2,*(undefined4 *)(param_3 + 0xa1e),
             *(undefined4 *)(param_3 + 0xa1a),*(undefined2 *)(param_3 + 0xa24),
             *(undefined2 *)(param_3 + 0xa26),param_3,0,0,0,0,1);
  return;
}

```

---

## leaveDungeon

```asm
// === 08133abc advancealtar::HistoryLog::leaveDungeon  [0x08133abc-0x8133b3f] ===
 8133abc:	55                   	push   %ebp
 8133abd:	89 e5                	mov    %esp,%ebp
 8133abf:	57                   	push   %edi
 8133ac0:	53                   	push   %ebx
 8133ac1:	81 ec 20 01 00 00    	sub    $0x120,%esp
 8133ac7:	8d 9d f8 fe ff ff    	lea    -0x108(%ebp),%ebx
 8133acd:	b8 00 00 00 00       	mov    $0x0,%eax
 8133ad2:	ba 40 00 00 00       	mov    $0x40,%edx
 8133ad7:	89 df                	mov    %ebx,%edi
 8133ad9:	89 d1                	mov    %edx,%ecx
 8133adb:	f3 ab                	rep stos %eax,%es:(%edi)
 8133add:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8133ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8133aea:	89 04 24             	mov    %eax,(%esp)
 8133aed:	e8 62 94 ff ff       	call   812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>
 8133af2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133af5:	89 04 24             	mov    %eax,(%esp)
 8133af8:	e8 6f 0d 00 00       	call   813486c <_ZNK12advancealtar9ProcStage18getStageDifficultyEv>
 8133afd:	89 c3                	mov    %eax,%ebx
 8133aff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133b02:	89 04 24             	mov    %eax,(%esp)
 8133b05:	e8 1c b0 ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8133b0a:	8b 55 08             	mov    0x8(%ebp),%edx
 8133b0d:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8133b13:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8133b1a:	00 
 8133b1b:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8133b21:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133b25:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8133b29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133b2d:	89 0c 24             	mov    %ecx,(%esp)
 8133b30:	e8 33 0e 55 00       	call   8684968 <_ZN15cUserHistoryLog12LeaveDungeonEiiPKci>
 8133b35:	81 c4 20 01 00 00    	add    $0x120,%esp
 8133b3b:	5b                   	pop    %ebx
 8133b3c:	5f                   	pop    %edi
 8133b3d:	5d                   	pop    %ebp
 8133b3e:	c3                   	ret
 8133b3f:	90                   	nop

```

```c
// advancealtar::HistoryLog::leaveDungeon @ 0x8133abc

/* advancealtar::HistoryLog::leaveDungeon(CUser&, advancealtar::ProcStage const&) */

void advancealtar::HistoryLog::leaveDungeon(CUser *param_1,ProcStage *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char local_10c [256];
  
  pcVar3 = local_10c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  getMemberNames(param_1,local_10c);
  iVar2 = ProcStage::getStageDifficulty(param_2);
  iVar1 = ProcStage::getStageIndex(param_2);
  cUserHistoryLog::LeaveDungeon((cUserHistoryLog *)(param_1 + 0x79700),iVar1,iVar2,local_10c,0);
  return;
}

```

---

## starAdd

```asm
// === 08133d56 advancealtar::HistoryLog::starAdd  [0x08133d56-0x8133daf] ===
 8133d56:	55                   	push   %ebp
 8133d57:	89 e5                	mov    %esp,%ebp
 8133d59:	83 ec 28             	sub    $0x28,%esp
 8133d5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133d5f:	8b 55 14             	mov    0x14(%ebp),%edx
 8133d62:	89 54 24 10          	mov    %edx,0x10(%esp)
 8133d66:	8b 55 10             	mov    0x10(%ebp),%edx
 8133d69:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133d6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8133d71:	c7 44 24 04 80 c7 b6 	movl   $0x8b6c780,0x4(%esp)
 8133d78:	08 
 8133d79:	8b 45 08             	mov    0x8(%ebp),%eax
 8133d7c:	89 04 24             	mov    %eax,(%esp)
 8133d7f:	e8 7a 8b 54 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8133d84:	8b 55 14             	mov    0x14(%ebp),%edx
 8133d87:	8b 45 10             	mov    0x10(%ebp),%eax
 8133d8a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8133d8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8133d95:	00 
 8133d96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8133d9d:	00 
 8133d9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133da2:	c7 04 24 00 03 40 09 	movl   $0x9400300,(%esp)
 8133da9:	e8 82 2e 02 00       	call   8156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>
 8133dae:	c9                   	leave
 8133daf:	c3                   	ret

```

```c
// advancealtar::HistoryLog::starAdd @ 0x8133d56

/* advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int) */

void advancealtar::HistoryLog::starAdd(CUser *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(param_1,"star+,%d,%d,%d",param_2,param_3,param_4);
  CAdvanceAltarLog::incrementEntranceData
            ((CAdvanceAltarLog *)advanceAltarstatistics_,param_3,0,0,param_4);
  return;
}

```

---

## starSub

```asm
// === 08133db0 advancealtar::HistoryLog::starSub  [0x08133db0-0x8133dd9] ===
 8133db0:	55                   	push   %ebp
 8133db1:	89 e5                	mov    %esp,%ebp
 8133db3:	83 ec 18             	sub    $0x18,%esp
 8133db6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133db9:	8b 55 10             	mov    0x10(%ebp),%edx
 8133dbc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133dc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8133dc4:	c7 44 24 04 8f c7 b6 	movl   $0x8b6c78f,0x4(%esp)
 8133dcb:	08 
 8133dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8133dcf:	89 04 24             	mov    %eax,(%esp)
 8133dd2:	e8 27 8b 54 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8133dd7:	c9                   	leave
 8133dd8:	c3                   	ret
 8133dd9:	90                   	nop

```

```c
// advancealtar::HistoryLog::starSub @ 0x8133db0

/* advancealtar::HistoryLog::starSub(CUser&, advancealtar::SubStarType::T, int) */

void advancealtar::HistoryLog::starSub(CUser *param_1,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(param_1,"star-,%d,%d",param_2,param_3);
  return;
}

```

---

## updateStatistics

```asm
// === 08133e30 advancealtar::HistoryLog::updateStatistics  [0x08133e30-0x8133e43] ===
 8133e30:	55                   	push   %ebp
 8133e31:	89 e5                	mov    %esp,%ebp
 8133e33:	83 ec 18             	sub    $0x18,%esp
 8133e36:	c7 04 24 00 03 40 09 	movl   $0x9400300,(%esp)
 8133e3d:	e8 90 30 02 00       	call   8156ed2 <_ZN16CAdvanceAltarLog14updateDatabaseEv>
 8133e42:	c9                   	leave
 8133e43:	c3                   	ret

```

```c
// advancealtar::HistoryLog::updateStatistics @ 0x8133e30

/* advancealtar::HistoryLog::updateStatistics() */

void advancealtar::HistoryLog::updateStatistics(void)

{
  CAdvanceAltarLog::updateDatabase((CAdvanceAltarLog *)advanceAltarstatistics_);
  return;
}

```

