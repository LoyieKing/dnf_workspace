# ~CItemDropRatioEvent

`_ZN19CItemDropRatioEventD1Ev`

`CItemDropRatioEvent::~CItemDropRatioEvent()`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x085331f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085331f6  _ZN19CItemDropRatioEventD1Ev
#           CItemDropRatioEvent::~CItemDropRatioEvent()
# range [0x085331f6, 0x08533225]
085331f6 +0x00:  push   %ebp
085331f7 +0x01:  mov    %esp,%ebp
085331f9 +0x03:  sub    $0x18,%esp
085331fc +0x06:  mov    0x8(%ebp),%eax
085331ff +0x09:  movl   $&_ZTV19CItemDropRatioEvent+0x8,(%eax)
08533205 +0x0f:  mov    0x8(%ebp),%eax
08533208 +0x12:  mov    %eax,(%esp)
0853320b +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08533210 +0x1a:  mov    $0x0,%eax
08533215 +0x1f:  test   %al,%al
08533217 +0x21:  je     08533224 <+0x2e>
08533219 +0x23:  mov    0x8(%ebp),%eax
0853321c +0x26:  mov    %eax,(%esp)
0853321f +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533224 +0x2e:  leave
08533225 +0x2f:  ret
```

## 反编译 C

```c
// CItemDropRatioEvent::~CItemDropRatioEvent @ 0x85331f6

/* WARNING: Removing unreachable block (ram,0x08533219) */
/* CItemDropRatioEvent::~CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::~CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  *(undefined ***)this = &PTR__CItemDropRatioEvent_08c99368;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
