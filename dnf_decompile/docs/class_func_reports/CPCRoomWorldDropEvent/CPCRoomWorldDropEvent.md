# CPCRoomWorldDropEvent

`_ZN21CPCRoomWorldDropEventC1Ev`

`CPCRoomWorldDropEvent::CPCRoomWorldDropEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomWorldDropEvent` | `0x082677f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082677f8  _ZN21CPCRoomWorldDropEventC1Ev
#           CPCRoomWorldDropEvent::CPCRoomWorldDropEvent()
# range [0x082677f8, 0x08267813]
082677f8 +0x00:  push   %ebp
082677f9 +0x01:  mov    %esp,%ebp
082677fb +0x03:  sub    $0x18,%esp
082677fe +0x06:  mov    0x8(%ebp),%eax
08267801 +0x09:  mov    %eax,(%esp)
08267804 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08267809 +0x11:  mov    0x8(%ebp),%eax
0826780c +0x14:  movl   $&_ZTV21CPCRoomWorldDropEvent+0x8,(%eax)
08267812 +0x1a:  leave
08267813 +0x1b:  ret
```

## 反编译 C

```c
// CPCRoomWorldDropEvent::CPCRoomWorldDropEvent @ 0x82677f8

/* CPCRoomWorldDropEvent::CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomWorldDropEvent_08bf0388;
  return;
}
```
