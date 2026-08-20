# isRunning

`_ZN4ARAD27Arad_EventPeriodDataManager9isRunningE22ENUM_REPEAT_EVENT_CODE`

`ARAD::Arad_EventPeriodDataManager::isRunning(ENUM_REPEAT_EVENT_CODE)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195686` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195686  _ZN4ARAD27Arad_EventPeriodDataManager9isRunningE22ENUM_REPEAT_EVENT_CODE
#           ARAD::Arad_EventPeriodDataManager::isRunning(ENUM_REPEAT_EVENT_CODE)
# range [0x08195686, 0x081956af]
08195686 +0x00:  push   %ebp
08195687 +0x01:  mov    %esp,%ebp
08195689 +0x03:  sub    $0x18,%esp
0819568c +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08195693 +0x0d:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08195698 +0x12:  mov    %eax,0x8(%esp)
0819569c +0x16:  mov    0xc(%ebp),%eax
0819569f +0x19:  mov    %eax,0x4(%esp)
081956a3 +0x1d:  mov    0x8(%ebp),%eax
081956a6 +0x20:  mov    %eax,(%esp)
081956a9 +0x23:  call   081956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>  ; ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)
081956ae +0x28:  leave
081956af +0x29:  ret
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::isRunning @ 0x8195686

/* ARAD::Arad_EventPeriodDataManager::isRunning(ENUM_REPEAT_EVENT_CODE) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::isRunning(Arad_EventPeriodDataManager *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  isApplied(this,param_2,uVar1);
  return;
}
```
