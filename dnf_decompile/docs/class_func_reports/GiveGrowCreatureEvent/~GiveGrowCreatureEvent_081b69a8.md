# ~GiveGrowCreatureEvent

`_ZN21GiveGrowCreatureEventD0Ev`

`GiveGrowCreatureEvent::~GiveGrowCreatureEvent()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b69a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b69a8  _ZN21GiveGrowCreatureEventD0Ev
#           GiveGrowCreatureEvent::~GiveGrowCreatureEvent()
# range [0x081b69a8, 0x081b69c5]
081b69a8 +0x00:  push   %ebp
081b69a9 +0x01:  mov    %esp,%ebp
081b69ab +0x03:  sub    $0x18,%esp
081b69ae +0x06:  mov    0x8(%ebp),%eax
081b69b1 +0x09:  mov    %eax,(%esp)
081b69b4 +0x0c:  call   081b6978 <_ZN21GiveGrowCreatureEventD1Ev>  ; GiveGrowCreatureEvent::~GiveGrowCreatureEvent()
081b69b9 +0x11:  mov    0x8(%ebp),%eax
081b69bc +0x14:  mov    %eax,(%esp)
081b69bf +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b69c4 +0x1c:  leave
081b69c5 +0x1d:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::~GiveGrowCreatureEvent @ 0x81b69a8

/* GiveGrowCreatureEvent::~GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::~GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  ~GiveGrowCreatureEvent(this);
  operator_delete(this);
  return;
}
```
