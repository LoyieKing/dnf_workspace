# ~CPCRoomFatigueEvent

`_ZN19CPCRoomFatigueEventD1Ev`

`CPCRoomFatigueEvent::~CPCRoomFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x082675dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082675dc  _ZN19CPCRoomFatigueEventD1Ev
#           CPCRoomFatigueEvent::~CPCRoomFatigueEvent()
# range [0x082675dc, 0x0826760b]
082675dc +0x00:  push   %ebp
082675dd +0x01:  mov    %esp,%ebp
082675df +0x03:  sub    $0x18,%esp
082675e2 +0x06:  mov    0x8(%ebp),%eax
082675e5 +0x09:  movl   $&_ZTV19CPCRoomFatigueEvent+0x8,(%eax)
082675eb +0x0f:  mov    0x8(%ebp),%eax
082675ee +0x12:  mov    %eax,(%esp)
082675f1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
082675f6 +0x1a:  mov    $0x0,%eax
082675fb +0x1f:  test   %al,%al
082675fd +0x21:  je     0826760a <+0x2e>
082675ff +0x23:  mov    0x8(%ebp),%eax
08267602 +0x26:  mov    %eax,(%esp)
08267605 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826760a +0x2e:  leave
0826760b +0x2f:  ret
```

## 反编译 C

```c
// CPCRoomFatigueEvent::~CPCRoomFatigueEvent @ 0x82675dc

/* WARNING: Removing unreachable block (ram,0x082675ff) */
/* CPCRoomFatigueEvent::~CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::~CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomFatigueEvent_08befc28;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
