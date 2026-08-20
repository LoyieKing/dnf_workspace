# initDungeonMgr

`_ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi`

`WongWork::CDeathTower::CDungeonMgr::initDungeonMgr(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CDungeonMgr` | `0x084605a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084605a2  _ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi
#           WongWork::CDeathTower::CDungeonMgr::initDungeonMgr(int)
# range [0x084605a2, 0x084605ed]
084605a2 +0x00:  push   %ebp
084605a3 +0x01:  mov    %esp,%ebp
084605a5 +0x03:  sub    $0x18,%esp
084605a8 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084605ad +0x0b:  mov    0xc(%ebp),%edx
084605b0 +0x0e:  mov    %edx,0x4(%esp)
084605b4 +0x12:  mov    %eax,(%esp)
084605b7 +0x15:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
084605bc +0x1a:  mov    0x8(%ebp),%edx
084605bf +0x1d:  mov    %eax,(%edx)
084605c1 +0x1f:  mov    0x8(%ebp),%eax
084605c4 +0x22:  mov    (%eax),%eax
084605c6 +0x24:  test   %eax,%eax
084605c8 +0x26:  jne    084605d1 <+0x2f>
084605ca +0x28:  mov    $0x0,%eax
084605cf +0x2d:  jmp    084605eb <+0x49>
084605d1 +0x2f:  mov    0x8(%ebp),%eax
084605d4 +0x32:  mov    (%eax),%eax
084605d6 +0x34:  mov    %eax,(%esp)
084605d9 +0x37:  call   0846995c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3f
084605de +0x3c:  mov    %eax,%edx
084605e0 +0x3e:  mov    0x8(%ebp),%eax
084605e3 +0x41:  mov    %edx,0x4(%eax)
084605e6 +0x44:  mov    $0x1,%eax
084605eb +0x49:  leave
084605ec +0x4a:  ret
084605ed +0x4b:  nop
```

## 反编译 C

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
