# EndEvent

`_ZN22LevelUpBefore70LvEvent8EndEventEv`

`LevelUpBefore70LvEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0812006e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812006e  _ZN22LevelUpBefore70LvEvent8EndEventEv
#           LevelUpBefore70LvEvent::EndEvent()
# range [0x0812006e, 0x081200be]
0812006e +0x00:  push   %ebp
0812006f +0x01:  mov    %esp,%ebp
08120071 +0x03:  sub    $0x28,%esp
08120074 +0x06:  mov    0x8(%ebp),%eax
08120077 +0x09:  movl   $0x0,0x4(%esp)
0812007f +0x11:  mov    %eax,(%esp)
08120082 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08120087 +0x19:  movl   $0x0,0xc(%esp)
0812008f +0x21:  movl   $0x1e,0x8(%esp)
08120097 +0x29:  movl   $&_ZZN22LevelUpBefore70LvEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0812009f +0x31:  lea    -0x18(%ebp),%eax
081200a2 +0x34:  mov    %eax,(%esp)
081200a5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081200aa +0x3c:  movl   $"LevelUpBefore70Lv Event end!",0x4(%esp)
081200b2 +0x44:  lea    -0x18(%ebp),%eax
081200b5 +0x47:  mov    %eax,(%esp)
081200b8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081200bd +0x4f:  leave
081200be +0x50:  ret
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::EndEvent @ 0x812006e

/* LevelUpBefore70LvEvent::EndEvent() */

void __thiscall LevelUpBefore70LvEvent::EndEvent(LevelUpBefore70LvEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event end!");
  return;
}
```
