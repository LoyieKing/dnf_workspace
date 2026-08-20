# ~CTrcOnOffEvent

`_ZN14CTrcOnOffEventD1Ev`

`CTrcOnOffEvent::~CTrcOnOffEvent()`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285a60  _ZN14CTrcOnOffEventD1Ev
#           CTrcOnOffEvent::~CTrcOnOffEvent()
# range [0x08285a60, 0x08285a8f]
08285a60 +0x00:  push   %ebp
08285a61 +0x01:  mov    %esp,%ebp
08285a63 +0x03:  sub    $0x18,%esp
08285a66 +0x06:  mov    0x8(%ebp),%eax
08285a69 +0x09:  movl   $&_ZTV14CTrcOnOffEvent+0x8,(%eax)
08285a6f +0x0f:  mov    0x8(%ebp),%eax
08285a72 +0x12:  mov    %eax,(%esp)
08285a75 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08285a7a +0x1a:  mov    $0x0,%eax
08285a7f +0x1f:  test   %al,%al
08285a81 +0x21:  je     08285a8e <+0x2e>
08285a83 +0x23:  mov    0x8(%ebp),%eax
08285a86 +0x26:  mov    %eax,(%esp)
08285a89 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08285a8e +0x2e:  leave
08285a8f +0x2f:  ret
```

## 反编译 C

```c
// CTrcOnOffEvent::~CTrcOnOffEvent @ 0x8285a60

/* WARNING: Removing unreachable block (ram,0x08285a83) */
/* CTrcOnOffEvent::~CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::~CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  *(undefined ***)this = &PTR__CTrcOnOffEvent_08c0e428;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
