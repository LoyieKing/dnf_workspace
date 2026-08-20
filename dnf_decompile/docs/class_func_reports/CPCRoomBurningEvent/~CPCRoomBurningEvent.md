# ~CPCRoomBurningEvent

`_ZN19CPCRoomBurningEventD1Ev`

`CPCRoomBurningEvent::~CPCRoomBurningEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x08267202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267202  _ZN19CPCRoomBurningEventD1Ev
#           CPCRoomBurningEvent::~CPCRoomBurningEvent()
# range [0x08267202, 0x08267231]
08267202 +0x00:  push   %ebp
08267203 +0x01:  mov    %esp,%ebp
08267205 +0x03:  sub    $0x18,%esp
08267208 +0x06:  mov    0x8(%ebp),%eax
0826720b +0x09:  movl   $&_ZTV19CPCRoomBurningEvent+0x8,(%eax)
08267211 +0x0f:  mov    0x8(%ebp),%eax
08267214 +0x12:  mov    %eax,(%esp)
08267217 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0826721c +0x1a:  mov    $0x0,%eax
08267221 +0x1f:  test   %al,%al
08267223 +0x21:  je     08267230 <+0x2e>
08267225 +0x23:  mov    0x8(%ebp),%eax
08267228 +0x26:  mov    %eax,(%esp)
0826722b +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08267230 +0x2e:  leave
08267231 +0x2f:  ret
```

## 反编译 C

```c
// CPCRoomBurningEvent::~CPCRoomBurningEvent @ 0x8267202

/* WARNING: Removing unreachable block (ram,0x08267225) */
/* CPCRoomBurningEvent::~CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::~CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomBurningEvent_08bee848;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
