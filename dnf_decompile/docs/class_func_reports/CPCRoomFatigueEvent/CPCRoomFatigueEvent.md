# CPCRoomFatigueEvent

`_ZN19CPCRoomFatigueEventC1Ev`

`CPCRoomFatigueEvent::CPCRoomFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x082675c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082675c0  _ZN19CPCRoomFatigueEventC1Ev
#           CPCRoomFatigueEvent::CPCRoomFatigueEvent()
# range [0x082675c0, 0x082675db]
082675c0 +0x00:  push   %ebp
082675c1 +0x01:  mov    %esp,%ebp
082675c3 +0x03:  sub    $0x18,%esp
082675c6 +0x06:  mov    0x8(%ebp),%eax
082675c9 +0x09:  mov    %eax,(%esp)
082675cc +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
082675d1 +0x11:  mov    0x8(%ebp),%eax
082675d4 +0x14:  movl   $&_ZTV19CPCRoomFatigueEvent+0x8,(%eax)
082675da +0x1a:  leave
082675db +0x1b:  ret
```

## 反编译 C

```c
// CPCRoomFatigueEvent::CPCRoomFatigueEvent @ 0x82675c0

/* CPCRoomFatigueEvent::CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomFatigueEvent_08befc28;
  return;
}
```
