# AttendanceEvent

`_ZN15AttendanceEventC1Ev`

`AttendanceEvent::AttendanceEvent()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c828c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c828c  _ZN15AttendanceEventC1Ev
#           AttendanceEvent::AttendanceEvent()
# range [0x080c828c, 0x080c82a7]
080c828c +0x00:  push   %ebp
080c828d +0x01:  mov    %esp,%ebp
080c828f +0x03:  sub    $0x18,%esp
080c8292 +0x06:  mov    0x8(%ebp),%eax
080c8295 +0x09:  mov    %eax,(%esp)
080c8298 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
080c829d +0x11:  mov    0x8(%ebp),%eax
080c82a0 +0x14:  movl   $&_ZTV15AttendanceEvent+0x8,(%eax)
080c82a6 +0x1a:  leave
080c82a7 +0x1b:  ret
```

## 反编译 C

```c
// AttendanceEvent::AttendanceEvent @ 0x80c828c

/* AttendanceEvent::AttendanceEvent() */

void __thiscall AttendanceEvent::AttendanceEvent(AttendanceEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__AttendanceEvent_08b25ba8;
  return;
}
```
