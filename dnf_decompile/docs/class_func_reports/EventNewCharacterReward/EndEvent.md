# EndEvent

`_ZN23EventNewCharacterReward8EndEventEv`

`EventNewCharacterReward::EndEvent()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bc98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bc98  _ZN23EventNewCharacterReward8EndEventEv
#           EventNewCharacterReward::EndEvent()
# range [0x0816bc98, 0x0816bce9]
0816bc98 +0x00:  push   %ebp
0816bc99 +0x01:  mov    %esp,%ebp
0816bc9b +0x03:  sub    $0x28,%esp
0816bc9e +0x06:  mov    0x8(%ebp),%eax
0816bca1 +0x09:  movl   $0x0,0x4(%esp)
0816bca9 +0x11:  mov    %eax,(%esp)
0816bcac +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816bcb1 +0x19:  movl   $0x0,0xc(%esp)
0816bcb9 +0x21:  movl   $0x2f,0x8(%esp)
0816bcc1 +0x29:  movl   $&_ZZN23EventNewCharacterReward8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816bcc9 +0x31:  lea    -0x18(%ebp),%eax
0816bccc +0x34:  mov    %eax,(%esp)
0816bccf +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816bcd4 +0x3c:  movl   $"[Taiwan, EventCharacterBonus] Event stop!",0x4(%esp)
0816bcdc +0x44:  lea    -0x18(%ebp),%eax
0816bcdf +0x47:  mov    %eax,(%esp)
0816bce2 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816bce7 +0x4f:  leave
0816bce8 +0x50:  ret
0816bce9 +0x51:  nop
```

## 反编译 C

```c
// EventNewCharacterReward::EndEvent @ 0x816bc98

/* EventNewCharacterReward::EndEvent() */

void __thiscall EventNewCharacterReward::EndEvent(EventNewCharacterReward *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::EndEvent()",0x2f,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventCharacterBonus] Event stop!");
  return;
}
```
