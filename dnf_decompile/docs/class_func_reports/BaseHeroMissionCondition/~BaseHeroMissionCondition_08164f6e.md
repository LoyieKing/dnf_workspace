# ~BaseHeroMissionCondition

`_ZN24BaseHeroMissionConditionD0Ev`

`BaseHeroMissionCondition::~BaseHeroMissionCondition()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164f6e  _ZN24BaseHeroMissionConditionD0Ev
#           BaseHeroMissionCondition::~BaseHeroMissionCondition()
# range [0x08164f6e, 0x08164f8b]
08164f6e +0x00:  push   %ebp
08164f6f +0x01:  mov    %esp,%ebp
08164f71 +0x03:  sub    $0x18,%esp
08164f74 +0x06:  mov    0x8(%ebp),%eax
08164f77 +0x09:  mov    %eax,(%esp)
08164f7a +0x0c:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
08164f7f +0x11:  mov    0x8(%ebp),%eax
08164f82 +0x14:  mov    %eax,(%esp)
08164f85 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08164f8a +0x1c:  leave
08164f8b +0x1d:  ret
```

## 反编译 C

```c
// BaseHeroMissionCondition::~BaseHeroMissionCondition @ 0x8164f6e

/* BaseHeroMissionCondition::~BaseHeroMissionCondition() */

void __thiscall BaseHeroMissionCondition::~BaseHeroMissionCondition(BaseHeroMissionCondition *this)

{
  ~BaseHeroMissionCondition(this);
  operator_delete(this);
  return;
}
```
