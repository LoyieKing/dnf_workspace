# ~CCoinRefillEvent

`_ZN16CCoinRefillEventD1Ev`

`CCoinRefillEvent::~CCoinRefillEvent()`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832be2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832be2e  _ZN16CCoinRefillEventD1Ev
#           CCoinRefillEvent::~CCoinRefillEvent()
# range [0x0832be2e, 0x0832be5d]
0832be2e +0x00:  push   %ebp
0832be2f +0x01:  mov    %esp,%ebp
0832be31 +0x03:  sub    $0x18,%esp
0832be34 +0x06:  mov    0x8(%ebp),%eax
0832be37 +0x09:  movl   $&_ZTV16CCoinRefillEvent+0x8,(%eax)
0832be3d +0x0f:  mov    0x8(%ebp),%eax
0832be40 +0x12:  mov    %eax,(%esp)
0832be43 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0832be48 +0x1a:  mov    $0x0,%eax
0832be4d +0x1f:  test   %al,%al
0832be4f +0x21:  je     0832be5c <+0x2e>
0832be51 +0x23:  mov    0x8(%ebp),%eax
0832be54 +0x26:  mov    %eax,(%esp)
0832be57 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832be5c +0x2e:  leave
0832be5d +0x2f:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::~CCoinRefillEvent @ 0x832be2e

/* WARNING: Removing unreachable block (ram,0x0832be51) */
/* CCoinRefillEvent::~CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::~CCoinRefillEvent(CCoinRefillEvent *this)

{
  *(undefined ***)this = &PTR__CCoinRefillEvent_08c2aba8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
