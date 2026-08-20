# StartEvent

`_ZN15AttendanceEvent10StartEventEv`

`AttendanceEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c82f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c82f6  _ZN15AttendanceEvent10StartEventEv
#           AttendanceEvent::StartEvent()
# range [0x080c82f6, 0x080c8311]
080c82f6 +0x00:  push   %ebp
080c82f7 +0x01:  mov    %esp,%ebp
080c82f9 +0x03:  sub    $0x18,%esp
080c82fc +0x06:  mov    0x8(%ebp),%eax
080c82ff +0x09:  movl   $0x1,0x4(%esp)
080c8307 +0x11:  mov    %eax,(%esp)
080c830a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080c830f +0x19:  leave
080c8310 +0x1a:  ret
080c8311 +0x1b:  nop
```

## 反编译 C

```c
// AttendanceEvent::StartEvent @ 0x80c82f6

/* AttendanceEvent::StartEvent() */

void __thiscall AttendanceEvent::StartEvent(AttendanceEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```
