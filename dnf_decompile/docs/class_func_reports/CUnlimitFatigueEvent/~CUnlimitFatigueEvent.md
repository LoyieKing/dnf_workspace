# ~CUnlimitFatigueEvent

`_ZN20CUnlimitFatigueEventD1Ev`

`CUnlimitFatigueEvent::~CUnlimitFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285c60  _ZN20CUnlimitFatigueEventD1Ev
#           CUnlimitFatigueEvent::~CUnlimitFatigueEvent()
# range [0x08285c60, 0x08285c8f]
08285c60 +0x00:  push   %ebp
08285c61 +0x01:  mov    %esp,%ebp
08285c63 +0x03:  sub    $0x18,%esp
08285c66 +0x06:  mov    0x8(%ebp),%eax
08285c69 +0x09:  movl   $&_ZTV20CUnlimitFatigueEvent+0x8,(%eax)
08285c6f +0x0f:  mov    0x8(%ebp),%eax
08285c72 +0x12:  mov    %eax,(%esp)
08285c75 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08285c7a +0x1a:  mov    $0x0,%eax
08285c7f +0x1f:  test   %al,%al
08285c81 +0x21:  je     08285c8e <+0x2e>
08285c83 +0x23:  mov    0x8(%ebp),%eax
08285c86 +0x26:  mov    %eax,(%esp)
08285c89 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08285c8e +0x2e:  leave
08285c8f +0x2f:  ret
```

## 反编译 C

```c
// CUnlimitFatigueEvent::~CUnlimitFatigueEvent @ 0x8285c60

/* WARNING: Removing unreachable block (ram,0x08285c83) */
/* CUnlimitFatigueEvent::~CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::~CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CUnlimitFatigueEvent_08c0eb68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
