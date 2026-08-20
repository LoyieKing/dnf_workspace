# BaseHeroMissionCondition

`_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE`

`BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164f12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164f12  _ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE
#           BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
# range [0x08164f12, 0x08164f39]
08164f12 +0x00:  push   %ebp
08164f13 +0x01:  mov    %esp,%ebp
08164f15 +0x03:  sub    $0x18,%esp
08164f18 +0x06:  mov    0x8(%ebp),%eax
08164f1b +0x09:  movl   $&_ZTV24BaseHeroMissionCondition+0x8,(%eax)
08164f21 +0x0f:  mov    0x8(%ebp),%eax
08164f24 +0x12:  mov    0xc(%ebp),%edx
08164f27 +0x15:  mov    %edx,0x4(%eax)
08164f2a +0x18:  mov    0x8(%ebp),%eax
08164f2d +0x1b:  add    $0x8,%eax
08164f30 +0x1e:  mov    %eax,(%esp)
08164f33 +0x21:  call   081681c8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x29>  ; global constructors keyed to HeroMissionValue::clear()+0x29
08164f38 +0x26:  leave
08164f39 +0x27:  ret
```

## 反编译 C

```c
// BaseHeroMissionCondition::BaseHeroMissionCondition @ 0x8164f12

/* BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T) */

void __thiscall
BaseHeroMissionCondition::BaseHeroMissionCondition
          (BaseHeroMissionCondition *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__BaseHeroMissionCondition_08b7f0d8;
  *(undefined4 *)(this + 4) = param_2;
  HeroMissionCondition::HeroMissionCondition((HeroMissionCondition *)(this + 8));
  return;
}
```
