# _checkRenewTopRecord

`_ZN8WongWork11CDeathTower20_checkRenewTopRecordEjjjj`

`WongWork::CDeathTower::_checkRenewTopRecord(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846801e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846801e  _ZN8WongWork11CDeathTower20_checkRenewTopRecordEjjjj
#           WongWork::CDeathTower::_checkRenewTopRecord(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x0846801e, 0x0846805d]
0846801e +0x00:  push   %ebp
0846801f +0x01:  mov    %esp,%ebp
08468021 +0x03:  push   %ebx
08468022 +0x04:  sub    $0x14,%esp
08468025 +0x07:  mov    0xc(%ebp),%eax
08468028 +0x0a:  mov    %eax,(%esp)
0846802b +0x0d:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
08468030 +0x12:  mov    %eax,%ebx
08468032 +0x14:  mov    0x10(%ebp),%eax
08468035 +0x17:  mov    %eax,(%esp)
08468038 +0x1a:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
0846803d +0x1f:  mov    0x18(%ebp),%edx
08468040 +0x22:  mov    %edx,0xc(%esp)
08468044 +0x26:  mov    0x14(%ebp),%edx
08468047 +0x29:  mov    %edx,0x8(%esp)
0846804b +0x2d:  mov    %ebx,0x4(%esp)
0846804f +0x31:  mov    %eax,(%esp)
08468052 +0x34:  call   08468290 <_ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj>  ; WongWork::CDeathTowerRanking::checkRenewTopRecord(unsigned int, unsigned int, unsigned int)
08468057 +0x39:  add    $0x14,%esp
0846805a +0x3c:  pop    %ebx
0846805b +0x3d:  pop    %ebp
0846805c +0x3e:  ret
0846805d +0x3f:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_checkRenewTopRecord @ 0x846801e

/* WongWork::CDeathTower::_checkRenewTopRecord(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
WongWork::CDeathTower::_checkRenewTopRecord
          (CDeathTower *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  CDeathTowerRanking *this_00;
  
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_1);
  this_00 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_2);
  CDeathTowerRanking::checkRenewTopRecord(this_00,uVar1,param_3,param_4);
  return;
}
```
