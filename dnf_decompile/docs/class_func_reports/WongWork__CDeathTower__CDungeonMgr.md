# WongWork__CDeathTower__CDungeonMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getStageMap

```asm
// === 084605ee WongWork::CDeathTower::CDungeonMgr::getStageMap  [0x084605ee-0x8460633] ===
 84605ee:	55                   	push   %ebp
 84605ef:	89 e5                	mov    %esp,%ebp
 84605f1:	83 ec 28             	sub    $0x28,%esp
 84605f4:	8b 45 08             	mov    0x8(%ebp),%eax
 84605f7:	8b 00                	mov    (%eax),%eax
 84605f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84605fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460600:	89 04 24             	mov    %eax,(%esp)
 8460603:	e8 32 93 00 00       	call   846993a <_ZNK8CDungeon21getDeathTowerMapIndexEj>
 8460608:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846060b:	e8 8b bb c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460610:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8460613:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460617:	89 04 24             	mov    %eax,(%esp)
 846061a:	e8 f5 f3 ef ff       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 846061f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8460622:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8460626:	75 07                	jne    846062f <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj+0x41>
 8460628:	b8 00 00 00 00       	mov    $0x0,%eax
 846062d:	eb 03                	jmp    8460632 <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj+0x44>
 846062f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8460632:	c9                   	leave
 8460633:	c3                   	ret

```

```c
// WongWork::CDeathTower::CDungeonMgr::getStageMap @ 0x84605ee

/* WongWork::CDeathTower::CDungeonMgr::getStageMap(unsigned int) */

int __thiscall WongWork::CDeathTower::CDungeonMgr::getStageMap(CDungeonMgr *this,uint param_1)

{
  int iVar1;
  
  CDungeon::getDeathTowerMapIndex(*(CDungeon **)this,param_1);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::find_map(iVar1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## initDungeonMgr

```asm
// === 084605a2 WongWork::CDeathTower::CDungeonMgr::initDungeonMgr  [0x084605a2-0x84605ed] ===
 84605a2:	55                   	push   %ebp
 84605a3:	89 e5                	mov    %esp,%ebp
 84605a5:	83 ec 18             	sub    $0x18,%esp
 84605a8:	e8 ee bb c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84605ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 84605b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84605b4:	89 04 24             	mov    %eax,(%esp)
 84605b7:	e8 3c f4 ef ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 84605bc:	8b 55 08             	mov    0x8(%ebp),%edx
 84605bf:	89 02                	mov    %eax,(%edx)
 84605c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84605c4:	8b 00                	mov    (%eax),%eax
 84605c6:	85 c0                	test   %eax,%eax
 84605c8:	75 07                	jne    84605d1 <_ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi+0x2f>
 84605ca:	b8 00 00 00 00       	mov    $0x0,%eax
 84605cf:	eb 1a                	jmp    84605eb <_ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi+0x49>
 84605d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84605d4:	8b 00                	mov    (%eax),%eax
 84605d6:	89 04 24             	mov    %eax,(%esp)
 84605d9:	e8 7e 93 00 00       	call   846995c <_ZNK8CDungeon21getDeathTowerMaxStageEv>
 84605de:	89 c2                	mov    %eax,%edx
 84605e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84605e3:	89 50 04             	mov    %edx,0x4(%eax)
 84605e6:	b8 01 00 00 00       	mov    $0x1,%eax
 84605eb:	c9                   	leave
 84605ec:	c3                   	ret
 84605ed:	90                   	nop

```

```c
// WongWork::CDeathTower::CDungeonMgr::initDungeonMgr @ 0x84605a2

/* WongWork::CDeathTower::CDungeonMgr::initDungeonMgr(int) */

bool WongWork::CDeathTower::CDungeonMgr::initDungeonMgr(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  uVar2 = CDataManager::find_dungeon(iVar1);
  *(undefined4 *)param_1 = uVar2;
  iVar1 = *(int *)param_1;
  if (iVar1 != 0) {
    uVar2 = CDungeon::getDeathTowerMaxStage(*(CDungeon **)param_1);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  return iVar1 != 0;
}

```

