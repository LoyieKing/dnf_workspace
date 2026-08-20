# onStartBloodRound

`_ZN13CBattle_Field21CBloodClearRewardData17onStartBloodRoundEv`

`CBattle_Field::CBloodClearRewardData::onStartBloodRound()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData` | `0x08306faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306faa  _ZN13CBattle_Field21CBloodClearRewardData17onStartBloodRoundEv
#           CBattle_Field::CBloodClearRewardData::onStartBloodRound()
# range [0x08306faa, 0x08306fc3]
08306faa +0x00:  push   %ebp
08306fab +0x01:  mov    %esp,%ebp
08306fad +0x03:  sub    $0x18,%esp
08306fb0 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08306fb7 +0x0d:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08306fbc +0x12:  mov    0x8(%ebp),%edx
08306fbf +0x15:  mov    %eax,0xc(%edx)
08306fc2 +0x18:  leave
08306fc3 +0x19:  ret
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::onStartBloodRound @ 0x8306faa

/* CBattle_Field::CBloodClearRewardData::onStartBloodRound() */

void __thiscall CBattle_Field::CBloodClearRewardData::onStartBloodRound(CBloodClearRewardData *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}
```
