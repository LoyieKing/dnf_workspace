# ~CMaxFatigueFactorEvent

`_ZN22CMaxFatigueFactorEventD0Ev`

`CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent()`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b276e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b276e  _ZN22CMaxFatigueFactorEventD0Ev
#           CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent()
# range [0x081b276e, 0x081b278b]
081b276e +0x00:  push   %ebp
081b276f +0x01:  mov    %esp,%ebp
081b2771 +0x03:  sub    $0x18,%esp
081b2774 +0x06:  mov    0x8(%ebp),%eax
081b2777 +0x09:  mov    %eax,(%esp)
081b277a +0x0c:  call   081b273e <_ZN22CMaxFatigueFactorEventD1Ev>  ; CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent()
081b277f +0x11:  mov    0x8(%ebp),%eax
081b2782 +0x14:  mov    %eax,(%esp)
081b2785 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b278a +0x1c:  leave
081b278b +0x1d:  ret
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent @ 0x81b276e

/* CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  ~CMaxFatigueFactorEvent(this);
  operator_delete(this);
  return;
}
```
