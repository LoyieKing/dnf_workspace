# _checkRenewMyRecord

`_ZN8WongWork11CDeathTower19_checkRenewMyRecordEjjjjj`

`WongWork::CDeathTower::_checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846805e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846805e  _ZN8WongWork11CDeathTower19_checkRenewMyRecordEjjjjj
#           WongWork::CDeathTower::_checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x0846805e, 0x084680a3]
0846805e +0x00:  push   %ebp
0846805f +0x01:  mov    %esp,%ebp
08468061 +0x03:  push   %ebx
08468062 +0x04:  sub    $0x24,%esp
08468065 +0x07:  mov    0xc(%ebp),%eax
08468068 +0x0a:  mov    %eax,(%esp)
0846806b +0x0d:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
08468070 +0x12:  mov    %eax,%ebx
08468072 +0x14:  mov    0x10(%ebp),%eax
08468075 +0x17:  mov    %eax,(%esp)
08468078 +0x1a:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
0846807d +0x1f:  mov    0x1c(%ebp),%edx
08468080 +0x22:  mov    %edx,0x10(%esp)
08468084 +0x26:  mov    0x18(%ebp),%edx
08468087 +0x29:  mov    %edx,0xc(%esp)
0846808b +0x2d:  mov    0x14(%ebp),%edx
0846808e +0x30:  mov    %edx,0x8(%esp)
08468092 +0x34:  mov    %ebx,0x4(%esp)
08468096 +0x38:  mov    %eax,(%esp)
08468099 +0x3b:  call   084682fe <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj>  ; WongWork::CDeathTowerRanking::checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int)
0846809e +0x40:  add    $0x24,%esp
084680a1 +0x43:  pop    %ebx
084680a2 +0x44:  pop    %ebp
084680a3 +0x45:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_checkRenewMyRecord @ 0x846805e

/* WongWork::CDeathTower::_checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
WongWork::CDeathTower::_checkRenewMyRecord
          (CDeathTower *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  CDeathTowerRanking *this_00;
  
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_1);
  this_00 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_2);
  CDeathTowerRanking::checkRenewMyRecord(this_00,uVar1,param_3,param_4,param_5);
  return;
}
```
