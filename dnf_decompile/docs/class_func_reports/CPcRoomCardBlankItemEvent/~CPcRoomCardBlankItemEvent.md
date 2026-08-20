# ~CPcRoomCardBlankItemEvent

`_ZN25CPcRoomCardBlankItemEventD1Ev`

`CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x08267458` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267458  _ZN25CPcRoomCardBlankItemEventD1Ev
#           CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent()
# range [0x08267458, 0x08267487]
08267458 +0x00:  push   %ebp
08267459 +0x01:  mov    %esp,%ebp
0826745b +0x03:  sub    $0x18,%esp
0826745e +0x06:  mov    0x8(%ebp),%eax
08267461 +0x09:  movl   $&_ZTV25CPcRoomCardBlankItemEvent+0x8,(%eax)
08267467 +0x0f:  mov    0x8(%ebp),%eax
0826746a +0x12:  mov    %eax,(%esp)
0826746d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08267472 +0x1a:  mov    $0x0,%eax
08267477 +0x1f:  test   %al,%al
08267479 +0x21:  je     08267486 <+0x2e>
0826747b +0x23:  mov    0x8(%ebp),%eax
0826747e +0x26:  mov    %eax,(%esp)
08267481 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08267486 +0x2e:  leave
08267487 +0x2f:  ret
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent @ 0x8267458

/* WARNING: Removing unreachable block (ram,0x0826747b) */
/* CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  *(undefined ***)this = &PTR__CPcRoomCardBlankItemEvent_08beefc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
