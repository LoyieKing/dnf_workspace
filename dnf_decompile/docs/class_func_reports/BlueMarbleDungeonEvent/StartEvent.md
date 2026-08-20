# StartEvent

`_ZN22BlueMarbleDungeonEvent10StartEventEv`

`BlueMarbleDungeonEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc4da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc4da  _ZN22BlueMarbleDungeonEvent10StartEventEv
#           BlueMarbleDungeonEvent::StartEvent()
# range [0x080dc4da, 0x080dc52b]
080dc4da +0x00:  push   %ebp
080dc4db +0x01:  mov    %esp,%ebp
080dc4dd +0x03:  sub    $0x28,%esp
080dc4e0 +0x06:  mov    0x8(%ebp),%eax
080dc4e3 +0x09:  movl   $0x1,0x4(%esp)
080dc4eb +0x11:  mov    %eax,(%esp)
080dc4ee +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080dc4f3 +0x19:  movl   $0x0,0xc(%esp)
080dc4fb +0x21:  movl   $0x16,0x8(%esp)
080dc503 +0x29:  movl   $&_ZZN22BlueMarbleDungeonEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
080dc50b +0x31:  lea    -0x18(%ebp),%eax
080dc50e +0x34:  mov    %eax,(%esp)
080dc511 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080dc516 +0x3c:  movl   $"BlueMarbleDungeonEvent Start!",0x4(%esp)
080dc51e +0x44:  lea    -0x18(%ebp),%eax
080dc521 +0x47:  mov    %eax,(%esp)
080dc524 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080dc529 +0x4f:  leave
080dc52a +0x50:  ret
080dc52b +0x51:  nop
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::StartEvent @ 0x80dc4da

/* BlueMarbleDungeonEvent::StartEvent() */

void __thiscall BlueMarbleDungeonEvent::StartEvent(BlueMarbleDungeonEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent Start!");
  return;
}
```
