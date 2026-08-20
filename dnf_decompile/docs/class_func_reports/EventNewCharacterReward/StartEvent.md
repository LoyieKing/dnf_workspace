# StartEvent

`_ZN23EventNewCharacterReward10StartEventEv`

`EventNewCharacterReward::StartEvent()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bb42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bb42  _ZN23EventNewCharacterReward10StartEventEv
#           EventNewCharacterReward::StartEvent()
# range [0x0816bb42, 0x0816bb93]
0816bb42 +0x00:  push   %ebp
0816bb43 +0x01:  mov    %esp,%ebp
0816bb45 +0x03:  sub    $0x28,%esp
0816bb48 +0x06:  mov    0x8(%ebp),%eax
0816bb4b +0x09:  movl   $0x1,0x4(%esp)
0816bb53 +0x11:  mov    %eax,(%esp)
0816bb56 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816bb5b +0x19:  movl   $0x0,0xc(%esp)
0816bb63 +0x21:  movl   $0x16,0x8(%esp)
0816bb6b +0x29:  movl   $&_ZZN23EventNewCharacterReward10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816bb73 +0x31:  lea    -0x18(%ebp),%eax
0816bb76 +0x34:  mov    %eax,(%esp)
0816bb79 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816bb7e +0x3c:  movl   $"[Taiwan, EventCharacterBonus] Event start!",0x4(%esp)
0816bb86 +0x44:  lea    -0x18(%ebp),%eax
0816bb89 +0x47:  mov    %eax,(%esp)
0816bb8c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816bb91 +0x4f:  leave
0816bb92 +0x50:  ret
0816bb93 +0x51:  nop
```

## 反编译 C

```c
// EventNewCharacterReward::StartEvent @ 0x816bb42

/* EventNewCharacterReward::StartEvent() */

void __thiscall EventNewCharacterReward::StartEvent(EventNewCharacterReward *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventCharacterBonus] Event start!");
  return;
}
```
