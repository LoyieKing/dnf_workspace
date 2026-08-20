# ~CUnlimitFatigueEvent

`_ZN20CUnlimitFatigueEventD0Ev`

`CUnlimitFatigueEvent::~CUnlimitFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285c90  _ZN20CUnlimitFatigueEventD0Ev
#           CUnlimitFatigueEvent::~CUnlimitFatigueEvent()
# range [0x08285c90, 0x08285cad]
08285c90 +0x00:  push   %ebp
08285c91 +0x01:  mov    %esp,%ebp
08285c93 +0x03:  sub    $0x18,%esp
08285c96 +0x06:  mov    0x8(%ebp),%eax
08285c99 +0x09:  mov    %eax,(%esp)
08285c9c +0x0c:  call   08285c60 <_ZN20CUnlimitFatigueEventD1Ev>  ; CUnlimitFatigueEvent::~CUnlimitFatigueEvent()
08285ca1 +0x11:  mov    0x8(%ebp),%eax
08285ca4 +0x14:  mov    %eax,(%esp)
08285ca7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08285cac +0x1c:  leave
08285cad +0x1d:  ret
```

## 反编译 C

```c
// CUnlimitFatigueEvent::~CUnlimitFatigueEvent @ 0x8285c90

/* CUnlimitFatigueEvent::~CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::~CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  ~CUnlimitFatigueEvent(this);
  operator_delete(this);
  return;
}
```
