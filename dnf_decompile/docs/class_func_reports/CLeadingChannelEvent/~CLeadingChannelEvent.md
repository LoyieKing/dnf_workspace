# ~CLeadingChannelEvent

`_ZN20CLeadingChannelEventD1Ev`

`CLeadingChannelEvent::~CLeadingChannelEvent()`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fd8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fd8a  _ZN20CLeadingChannelEventD1Ev
#           CLeadingChannelEvent::~CLeadingChannelEvent()
# range [0x0811fd8a, 0x0811fdb9]
0811fd8a +0x00:  push   %ebp
0811fd8b +0x01:  mov    %esp,%ebp
0811fd8d +0x03:  sub    $0x18,%esp
0811fd90 +0x06:  mov    0x8(%ebp),%eax
0811fd93 +0x09:  movl   $&_ZTV20CLeadingChannelEvent+0x8,(%eax)
0811fd99 +0x0f:  mov    0x8(%ebp),%eax
0811fd9c +0x12:  mov    %eax,(%esp)
0811fd9f +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811fda4 +0x1a:  mov    $0x0,%eax
0811fda9 +0x1f:  test   %al,%al
0811fdab +0x21:  je     0811fdb8 <+0x2e>
0811fdad +0x23:  mov    0x8(%ebp),%eax
0811fdb0 +0x26:  mov    %eax,(%esp)
0811fdb3 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811fdb8 +0x2e:  leave
0811fdb9 +0x2f:  ret
```

## 反编译 C

```c
// CLeadingChannelEvent::~CLeadingChannelEvent @ 0x811fd8a

/* WARNING: Removing unreachable block (ram,0x0811fdad) */
/* CLeadingChannelEvent::~CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::~CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  *(undefined ***)this = &PTR__CLeadingChannelEvent_08b588a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
