# ~BaseHeroMissionCondition

`_ZN24BaseHeroMissionConditionD1Ev`

`BaseHeroMissionCondition::~BaseHeroMissionCondition()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164f3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164f3a  _ZN24BaseHeroMissionConditionD1Ev
#           BaseHeroMissionCondition::~BaseHeroMissionCondition()
# range [0x08164f3a, 0x08164f6d]
08164f3a +0x00:  push   %ebp
08164f3b +0x01:  mov    %esp,%ebp
08164f3d +0x03:  sub    $0x18,%esp
08164f40 +0x06:  mov    0x8(%ebp),%eax
08164f43 +0x09:  movl   $&_ZTV24BaseHeroMissionCondition+0x8,(%eax)
08164f49 +0x0f:  mov    0x8(%ebp),%eax
08164f4c +0x12:  add    $0x8,%eax
08164f4f +0x15:  mov    %eax,(%esp)
08164f52 +0x18:  call   08168260 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xc1>  ; global constructors keyed to HeroMissionValue::clear()+0xc1
08164f57 +0x1d:  mov    $0x0,%eax
08164f5c +0x22:  test   %al,%al
08164f5e +0x24:  je     08164f6b <+0x31>
08164f60 +0x26:  mov    0x8(%ebp),%eax
08164f63 +0x29:  mov    %eax,(%esp)
08164f66 +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08164f6b +0x31:  leave
08164f6c +0x32:  ret
08164f6d +0x33:  nop
```

## 反编译 C

```c
// BaseHeroMissionCondition::~BaseHeroMissionCondition @ 0x8164f3a

/* WARNING: Removing unreachable block (ram,0x08164f60) */
/* BaseHeroMissionCondition::~BaseHeroMissionCondition() */

void __thiscall BaseHeroMissionCondition::~BaseHeroMissionCondition(BaseHeroMissionCondition *this)

{
  *(undefined ***)this = &PTR__BaseHeroMissionCondition_08b7f0d8;
  HeroMissionCondition::~HeroMissionCondition((HeroMissionCondition *)(this + 8));
  return;
}
```
