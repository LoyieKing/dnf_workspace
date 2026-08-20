# getStageMap

`_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj`

`WongWork::CDeathTower::CDungeonMgr::getStageMap(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CDungeonMgr` | `0x084605ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084605ee  _ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj
#           WongWork::CDeathTower::CDungeonMgr::getStageMap(unsigned int)
# range [0x084605ee, 0x08460633]
084605ee +0x00:  push   %ebp
084605ef +0x01:  mov    %esp,%ebp
084605f1 +0x03:  sub    $0x28,%esp
084605f4 +0x06:  mov    0x8(%ebp),%eax
084605f7 +0x09:  mov    (%eax),%eax
084605f9 +0x0b:  mov    0xc(%ebp),%edx
084605fc +0x0e:  mov    %edx,0x4(%esp)
08460600 +0x12:  mov    %eax,(%esp)
08460603 +0x15:  call   0846993a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1d
08460608 +0x1a:  mov    %eax,-0x10(%ebp)
0846060b +0x1d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460610 +0x22:  mov    -0x10(%ebp),%edx
08460613 +0x25:  mov    %edx,0x4(%esp)
08460617 +0x29:  mov    %eax,(%esp)
0846061a +0x2c:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0846061f +0x31:  mov    %eax,-0xc(%ebp)
08460622 +0x34:  cmpl   $0x0,-0xc(%ebp)
08460626 +0x38:  jne    0846062f <+0x41>
08460628 +0x3a:  mov    $0x0,%eax
0846062d +0x3f:  jmp    08460632 <+0x44>
0846062f +0x41:  mov    -0xc(%ebp),%eax
08460632 +0x44:  leave
08460633 +0x45:  ret
```

## 反编译 C

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
