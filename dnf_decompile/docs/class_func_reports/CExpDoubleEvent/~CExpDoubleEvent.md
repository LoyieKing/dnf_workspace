# ~CExpDoubleEvent

`_ZN15CExpDoubleEventD1Ev`

`CExpDoubleEvent::~CExpDoubleEvent()`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849ac6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ac6a  _ZN15CExpDoubleEventD1Ev
#           CExpDoubleEvent::~CExpDoubleEvent()
# range [0x0849ac6a, 0x0849ac99]
0849ac6a +0x00:  push   %ebp
0849ac6b +0x01:  mov    %esp,%ebp
0849ac6d +0x03:  sub    $0x18,%esp
0849ac70 +0x06:  mov    0x8(%ebp),%eax
0849ac73 +0x09:  movl   $&_ZTV15CExpDoubleEvent+0x8,(%eax)
0849ac79 +0x0f:  mov    0x8(%ebp),%eax
0849ac7c +0x12:  mov    %eax,(%esp)
0849ac7f +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0849ac84 +0x1a:  mov    $0x0,%eax
0849ac89 +0x1f:  test   %al,%al
0849ac8b +0x21:  je     0849ac98 <+0x2e>
0849ac8d +0x23:  mov    0x8(%ebp),%eax
0849ac90 +0x26:  mov    %eax,(%esp)
0849ac93 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0849ac98 +0x2e:  leave
0849ac99 +0x2f:  ret
```

## 反编译 C

```c
// CExpDoubleEvent::~CExpDoubleEvent @ 0x849ac6a

/* WARNING: Removing unreachable block (ram,0x0849ac8d) */
/* CExpDoubleEvent::~CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::~CExpDoubleEvent(CExpDoubleEvent *this)

{
  *(undefined ***)this = &PTR__CExpDoubleEvent_08c7b948;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
