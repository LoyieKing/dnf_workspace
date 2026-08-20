# ~GiveGrowCreatureEvent

`_ZN21GiveGrowCreatureEventD1Ev`

`GiveGrowCreatureEvent::~GiveGrowCreatureEvent()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6978  _ZN21GiveGrowCreatureEventD1Ev
#           GiveGrowCreatureEvent::~GiveGrowCreatureEvent()
# range [0x081b6978, 0x081b69a7]
081b6978 +0x00:  push   %ebp
081b6979 +0x01:  mov    %esp,%ebp
081b697b +0x03:  sub    $0x18,%esp
081b697e +0x06:  mov    0x8(%ebp),%eax
081b6981 +0x09:  movl   $&_ZTV21GiveGrowCreatureEvent+0x8,(%eax)
081b6987 +0x0f:  mov    0x8(%ebp),%eax
081b698a +0x12:  mov    %eax,(%esp)
081b698d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b6992 +0x1a:  mov    $0x0,%eax
081b6997 +0x1f:  test   %al,%al
081b6999 +0x21:  je     081b69a6 <+0x2e>
081b699b +0x23:  mov    0x8(%ebp),%eax
081b699e +0x26:  mov    %eax,(%esp)
081b69a1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b69a6 +0x2e:  leave
081b69a7 +0x2f:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::~GiveGrowCreatureEvent @ 0x81b6978

/* WARNING: Removing unreachable block (ram,0x081b699b) */
/* GiveGrowCreatureEvent::~GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::~GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  *(undefined ***)this = &PTR__GiveGrowCreatureEvent_08bbbae8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
