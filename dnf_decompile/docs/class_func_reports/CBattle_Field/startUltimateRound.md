# startUltimateRound

`_ZN13CBattle_Field18startUltimateRoundEv`

`CBattle_Field::startUltimateRound()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083064de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083064de  _ZN13CBattle_Field18startUltimateRoundEv
#           CBattle_Field::startUltimateRound()
# range [0x083064de, 0x083065f7]
083064de +0x000:  push   %ebp
083064df +0x001:  mov    %esp,%ebp
083064e1 +0x003:  sub    $0x38,%esp
083064e4 +0x006:  mov    0x8(%ebp),%eax
083064e7 +0x009:  add    $0x2ac,%eax
083064ec +0x00e:  mov    %eax,(%esp)
083064ef +0x011:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
083064f4 +0x016:  mov    %ax,-0x12(%ebp)
083064f8 +0x01a:  mov    0x8(%ebp),%eax
083064fb +0x01d:  add    $0x2ac,%eax
08306500 +0x022:  mov    %eax,(%esp)
08306503 +0x025:  call   0830ebce <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7b3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7b3
08306508 +0x02a:  mov    %ax,-0x10(%ebp)
0830650c +0x02e:  mov    0x8(%ebp),%eax
0830650f +0x031:  add    $0x2ac,%eax
08306514 +0x036:  mov    %eax,(%esp)
08306517 +0x039:  call   0830ebda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7bf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7bf
0830651c +0x03e:  mov    %ax,-0xe(%ebp)
08306520 +0x042:  movswl -0x12(%ebp),%eax
08306524 +0x046:  mov    %eax,0x4(%esp)
08306528 +0x04a:  mov    0x8(%ebp),%eax
0830652b +0x04d:  mov    %eax,(%esp)
0830652e +0x050:  call   083061b6 <_ZN13CBattle_Field22getNextRoundDifficultyEs>  ; CBattle_Field::getNextRoundDifficulty(short)
08306533 +0x055:  mov    %eax,-0xc(%ebp)
08306536 +0x058:  cmpl   $0x1,-0xc(%ebp)
0830653a +0x05c:  je     083065db <+0xfd>
08306540 +0x062:  cmpl   $0x0,-0xc(%ebp)
08306544 +0x066:  jne    0830657c <+0x9e>
08306546 +0x068:  movswl -0x12(%ebp),%eax
0830654a +0x06c:  mov    %eax,0x14(%esp)
0830654e +0x070:  movl   $"ULTIMATE_LOG : ULITMATE ROUND (%d) startUltimateRound() ERROR!!\n",0x10(%esp)
08306556 +0x078:  movl   $0xf04,0xc(%esp)
0830655e +0x080:  movl   $&_ZZN13CBattle_Field18startUltimateRoundEvE19__PRETTY_FUNCTION__,0x8(%esp)
08306566 +0x088:  movl   $"battle_field.cpp",0x4(%esp)
0830656e +0x090:  movl   $0x1,(%esp)
08306575 +0x097:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830657a +0x09c:  jmp    083065f6 <+0x118>
0830657c +0x09e:  movswl -0x10(%ebp),%edx
08306580 +0x0a2:  movswl -0x12(%ebp),%eax
08306584 +0x0a6:  mov    -0xc(%ebp),%ecx
08306587 +0x0a9:  mov    %ecx,0xc(%esp)
0830658b +0x0ad:  mov    %edx,0x8(%esp)
0830658f +0x0b1:  mov    %eax,0x4(%esp)
08306593 +0x0b5:  mov    0x8(%ebp),%eax
08306596 +0x0b8:  mov    %eax,(%esp)
08306599 +0x0bb:  call   08305f50 <_ZN13CBattle_Field24forceValuesToChangeRoundEssi>  ; CBattle_Field::forceValuesToChangeRound(short, short, int)
0830659e +0x0c0:  xor    $0x1,%eax
083065a1 +0x0c3:  test   %al,%al
083065a3 +0x0c5:  je     083065db <+0xfd>
083065a5 +0x0c7:  movswl -0x12(%ebp),%eax
083065a9 +0x0cb:  mov    %eax,0x14(%esp)
083065ad +0x0cf:  movl   $"ULTIMATE_LOG : startUltimateRound() ERROR!!\n",0x10(%esp)
083065b5 +0x0d7:  movl   $0xf0a,0xc(%esp)
083065bd +0x0df:  movl   $&_ZZN13CBattle_Field18startUltimateRoundEvE19__PRETTY_FUNCTION__,0x8(%esp)
083065c5 +0x0e7:  movl   $"battle_field.cpp",0x4(%esp)
083065cd +0x0ef:  movl   $0x1,(%esp)
083065d4 +0x0f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083065d9 +0x0fb:  jmp    083065f6 <+0x118>
083065db +0x0fd:  movl   $0x0,0x8(%esp)
083065e3 +0x105:  movl   $0x1,0x4(%esp)
083065eb +0x10d:  mov    0x8(%ebp),%eax
083065ee +0x110:  mov    %eax,(%esp)
083065f1 +0x113:  call   08304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>  ; CBattle_Field::BloodSpawnTimerManager(bool, bool)
083065f6 +0x118:  leave
083065f7 +0x119:  ret
```

## 反编译 C

```c
// CBattle_Field::startUltimateRound @ 0x83064de

/* CBattle_Field::startUltimateRound() */

void __thiscall CBattle_Field::startUltimateRound(CBattle_Field *this)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar2 = CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0x2ac));
  sVar3 = CBloodRound::getBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  CBloodRound::getBloodLastSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  iVar4 = getNextRoundDifficulty(this,sVar2);
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      LogManager::logFormat
                (1,"battle_field.cpp","void CBattle_Field::startUltimateRound()",0xf04,
                 "ULTIMATE_LOG : ULITMATE ROUND (%d) startUltimateRound() ERROR!!\n",(int)sVar2);
      return;
    }
    cVar1 = forceValuesToChangeRound(this,sVar2,sVar3,iVar4);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"battle_field.cpp","void CBattle_Field::startUltimateRound()",0xf0a,
                 "ULTIMATE_LOG : startUltimateRound() ERROR!!\n",(int)sVar2);
      return;
    }
  }
  BloodSpawnTimerManager(this,true,false);
  return;
}
```
