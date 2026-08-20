# StartEvent

`_ZN22LevelUpBefore70LvEvent10StartEventEv`

`LevelUpBefore70LvEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0811ffca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ffca  _ZN22LevelUpBefore70LvEvent10StartEventEv
#           LevelUpBefore70LvEvent::StartEvent()
# range [0x0811ffca, 0x0812001b]
0811ffca +0x00:  push   %ebp
0811ffcb +0x01:  mov    %esp,%ebp
0811ffcd +0x03:  sub    $0x28,%esp
0811ffd0 +0x06:  mov    0x8(%ebp),%eax
0811ffd3 +0x09:  movl   $0x1,0x4(%esp)
0811ffdb +0x11:  mov    %eax,(%esp)
0811ffde +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811ffe3 +0x19:  movl   $0x0,0xc(%esp)
0811ffeb +0x21:  movl   $0x12,0x8(%esp)
0811fff3 +0x29:  movl   $&_ZZN22LevelUpBefore70LvEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0811fffb +0x31:  lea    -0x18(%ebp),%eax
0811fffe +0x34:  mov    %eax,(%esp)
08120001 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120006 +0x3c:  movl   $"LevelUpBefore70Lv Event start!",0x4(%esp)
0812000e +0x44:  lea    -0x18(%ebp),%eax
08120011 +0x47:  mov    %eax,(%esp)
08120014 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08120019 +0x4f:  leave
0812001a +0x50:  ret
0812001b +0x51:  nop
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::StartEvent @ 0x811ffca

/* LevelUpBefore70LvEvent::StartEvent() */

void __thiscall LevelUpBefore70LvEvent::StartEvent(LevelUpBefore70LvEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event start!");
  return;
}
```
