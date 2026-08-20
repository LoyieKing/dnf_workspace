# ~CPvPLiveEvent

`_ZN13CPvPLiveEventD0Ev`

`CPvPLiveEvent::~CPvPLiveEvent()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268f04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268f04  _ZN13CPvPLiveEventD0Ev
#           CPvPLiveEvent::~CPvPLiveEvent()
# range [0x08268f04, 0x08268f21]
08268f04 +0x00:  push   %ebp
08268f05 +0x01:  mov    %esp,%ebp
08268f07 +0x03:  sub    $0x18,%esp
08268f0a +0x06:  mov    0x8(%ebp),%eax
08268f0d +0x09:  mov    %eax,(%esp)
08268f10 +0x0c:  call   08268ed4 <_ZN13CPvPLiveEventD1Ev>  ; CPvPLiveEvent::~CPvPLiveEvent()
08268f15 +0x11:  mov    0x8(%ebp),%eax
08268f18 +0x14:  mov    %eax,(%esp)
08268f1b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268f20 +0x1c:  leave
08268f21 +0x1d:  ret
```

## 反编译 C

```c
// CPvPLiveEvent::~CPvPLiveEvent @ 0x8268f04

/* CPvPLiveEvent::~CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::~CPvPLiveEvent(CPvPLiveEvent *this)

{
  ~CPvPLiveEvent(this);
  operator_delete(this);
  return;
}
```
