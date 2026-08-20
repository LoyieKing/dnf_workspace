# ~CRestrictCharacCreationEvent

`_ZN28CRestrictCharacCreationEventD1Ev`

`CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent()`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273c6a  _ZN28CRestrictCharacCreationEventD1Ev
#           CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent()
# range [0x08273c6a, 0x08273c99]
08273c6a +0x00:  push   %ebp
08273c6b +0x01:  mov    %esp,%ebp
08273c6d +0x03:  sub    $0x18,%esp
08273c70 +0x06:  mov    0x8(%ebp),%eax
08273c73 +0x09:  movl   $&_ZTV28CRestrictCharacCreationEvent+0x8,(%eax)
08273c79 +0x0f:  mov    0x8(%ebp),%eax
08273c7c +0x12:  mov    %eax,(%esp)
08273c7f +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08273c84 +0x1a:  mov    $0x0,%eax
08273c89 +0x1f:  test   %al,%al
08273c8b +0x21:  je     08273c98 <+0x2e>
08273c8d +0x23:  mov    0x8(%ebp),%eax
08273c90 +0x26:  mov    %eax,(%esp)
08273c93 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08273c98 +0x2e:  leave
08273c99 +0x2f:  ret
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent @ 0x8273c6a

/* WARNING: Removing unreachable block (ram,0x08273c8d) */
/* CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  *(undefined ***)this = &PTR__CRestrictCharacCreationEvent_08bfb7a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
