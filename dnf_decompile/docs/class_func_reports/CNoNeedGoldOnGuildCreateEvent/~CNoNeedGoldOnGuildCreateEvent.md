# ~CNoNeedGoldOnGuildCreateEvent

`_ZN29CNoNeedGoldOnGuildCreateEventD1Ev`

`CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent()`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9ba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9ba8  _ZN29CNoNeedGoldOnGuildCreateEventD1Ev
#           CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent()
# range [0x081b9ba8, 0x081b9bd7]
081b9ba8 +0x00:  push   %ebp
081b9ba9 +0x01:  mov    %esp,%ebp
081b9bab +0x03:  sub    $0x18,%esp
081b9bae +0x06:  mov    0x8(%ebp),%eax
081b9bb1 +0x09:  movl   $&_ZTV29CNoNeedGoldOnGuildCreateEvent+0x8,(%eax)
081b9bb7 +0x0f:  mov    0x8(%ebp),%eax
081b9bba +0x12:  mov    %eax,(%esp)
081b9bbd +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b9bc2 +0x1a:  mov    $0x0,%eax
081b9bc7 +0x1f:  test   %al,%al
081b9bc9 +0x21:  je     081b9bd6 <+0x2e>
081b9bcb +0x23:  mov    0x8(%ebp),%eax
081b9bce +0x26:  mov    %eax,(%esp)
081b9bd1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9bd6 +0x2e:  leave
081b9bd7 +0x2f:  ret
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent @ 0x81b9ba8

/* WARNING: Removing unreachable block (ram,0x081b9bcb) */
/* CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  *(undefined ***)this = &PTR__CNoNeedGoldOnGuildCreateEvent_08bbd0c8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
