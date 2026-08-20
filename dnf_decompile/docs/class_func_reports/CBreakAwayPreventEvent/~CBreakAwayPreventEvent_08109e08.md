# ~CBreakAwayPreventEvent

`_ZN22CBreakAwayPreventEventD0Ev`

`CBreakAwayPreventEvent::~CBreakAwayPreventEvent()`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109e08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109e08  _ZN22CBreakAwayPreventEventD0Ev
#           CBreakAwayPreventEvent::~CBreakAwayPreventEvent()
# range [0x08109e08, 0x08109e25]
08109e08 +0x00:  push   %ebp
08109e09 +0x01:  mov    %esp,%ebp
08109e0b +0x03:  sub    $0x18,%esp
08109e0e +0x06:  mov    0x8(%ebp),%eax
08109e11 +0x09:  mov    %eax,(%esp)
08109e14 +0x0c:  call   08109dd8 <_ZN22CBreakAwayPreventEventD1Ev>  ; CBreakAwayPreventEvent::~CBreakAwayPreventEvent()
08109e19 +0x11:  mov    0x8(%ebp),%eax
08109e1c +0x14:  mov    %eax,(%esp)
08109e1f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08109e24 +0x1c:  leave
08109e25 +0x1d:  ret
```

## 反编译 C

```c
// CBreakAwayPreventEvent::~CBreakAwayPreventEvent @ 0x8109e08

/* CBreakAwayPreventEvent::~CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::~CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  ~CBreakAwayPreventEvent(this);
  operator_delete(this);
  return;
}
```
