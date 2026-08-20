# ~CPCRoomFatigueEvent

`_ZN19CPCRoomFatigueEventD0Ev`

`CPCRoomFatigueEvent::~CPCRoomFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x0826760c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826760c  _ZN19CPCRoomFatigueEventD0Ev
#           CPCRoomFatigueEvent::~CPCRoomFatigueEvent()
# range [0x0826760c, 0x08267629]
0826760c +0x00:  push   %ebp
0826760d +0x01:  mov    %esp,%ebp
0826760f +0x03:  sub    $0x18,%esp
08267612 +0x06:  mov    0x8(%ebp),%eax
08267615 +0x09:  mov    %eax,(%esp)
08267618 +0x0c:  call   082675dc <_ZN19CPCRoomFatigueEventD1Ev>  ; CPCRoomFatigueEvent::~CPCRoomFatigueEvent()
0826761d +0x11:  mov    0x8(%ebp),%eax
08267620 +0x14:  mov    %eax,(%esp)
08267623 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08267628 +0x1c:  leave
08267629 +0x1d:  ret
```

## 反编译 C

```c
// CPCRoomFatigueEvent::~CPCRoomFatigueEvent @ 0x826760c

/* CPCRoomFatigueEvent::~CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::~CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  ~CPCRoomFatigueEvent(this);
  operator_delete(this);
  return;
}
```
