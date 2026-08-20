# UseFatigueMission

`_ZN17UseFatigueMissionC1Ev`

`UseFatigueMission::UseFatigueMission()`

| 类 | 地址 |
|---|---|
| `UseFatigueMission` | `0x08165694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165694  _ZN17UseFatigueMissionC1Ev
#           UseFatigueMission::UseFatigueMission()
# range [0x08165694, 0x081656b7]
08165694 +0x00:  push   %ebp
08165695 +0x01:  mov    %esp,%ebp
08165697 +0x03:  sub    $0x18,%esp
0816569a +0x06:  mov    0x8(%ebp),%eax
0816569d +0x09:  movl   $0x2,0x4(%esp)
081656a5 +0x11:  mov    %eax,(%esp)
081656a8 +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
081656ad +0x19:  mov    0x8(%ebp),%eax
081656b0 +0x1c:  movl   $&_ZTV17UseFatigueMission+0x8,(%eax)
081656b6 +0x22:  leave
081656b7 +0x23:  ret
```

## 反编译 C

```c
// UseFatigueMission::UseFatigueMission @ 0x8165694

/* UseFatigueMission::UseFatigueMission() */

void __thiscall UseFatigueMission::UseFatigueMission(UseFatigueMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,2);
  *(undefined ***)this = &PTR__UseFatigueMission_08b7f0a8;
  return;
}
```
