# EndEvent

`_ZN22BlueMarbleDungeonEvent8EndEventEv`

`BlueMarbleDungeonEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc57e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc57e  _ZN22BlueMarbleDungeonEvent8EndEventEv
#           BlueMarbleDungeonEvent::EndEvent()
# range [0x080dc57e, 0x080dc5ce]
080dc57e +0x00:  push   %ebp
080dc57f +0x01:  mov    %esp,%ebp
080dc581 +0x03:  sub    $0x28,%esp
080dc584 +0x06:  mov    0x8(%ebp),%eax
080dc587 +0x09:  movl   $0x0,0x4(%esp)
080dc58f +0x11:  mov    %eax,(%esp)
080dc592 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080dc597 +0x19:  movl   $0x0,0xc(%esp)
080dc59f +0x21:  movl   $0x22,0x8(%esp)
080dc5a7 +0x29:  movl   $&_ZZN22BlueMarbleDungeonEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
080dc5af +0x31:  lea    -0x18(%ebp),%eax
080dc5b2 +0x34:  mov    %eax,(%esp)
080dc5b5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080dc5ba +0x3c:  movl   $"BlueMarbleDungeonEvent End!",0x4(%esp)
080dc5c2 +0x44:  lea    -0x18(%ebp),%eax
080dc5c5 +0x47:  mov    %eax,(%esp)
080dc5c8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080dc5cd +0x4f:  leave
080dc5ce +0x50:  ret
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::EndEvent @ 0x80dc57e

/* BlueMarbleDungeonEvent::EndEvent() */

void __thiscall BlueMarbleDungeonEvent::EndEvent(BlueMarbleDungeonEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x22,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent End!");
  return;
}
```
