# StartEvent

`_ZN22LevelUpBefore70LvEvent10StartEventE10Word_Param`

`LevelUpBefore70LvEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0812001c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812001c  _ZN22LevelUpBefore70LvEvent10StartEventE10Word_Param
#           LevelUpBefore70LvEvent::StartEvent(Word_Param)
# range [0x0812001c, 0x0812006d]
0812001c +0x00:  push   %ebp
0812001d +0x01:  mov    %esp,%ebp
0812001f +0x03:  sub    $0x28,%esp
08120022 +0x06:  mov    0x8(%ebp),%eax
08120025 +0x09:  movl   $0x1,0x4(%esp)
0812002d +0x11:  mov    %eax,(%esp)
08120030 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08120035 +0x19:  movl   $0x0,0xc(%esp)
0812003d +0x21:  movl   $0x18,0x8(%esp)
08120045 +0x29:  movl   $&_ZZN22LevelUpBefore70LvEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0812004d +0x31:  lea    -0x18(%ebp),%eax
08120050 +0x34:  mov    %eax,(%esp)
08120053 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120058 +0x3c:  movl   $"LevelUpBefore70Lv Event start! [monitor request]",0x4(%esp)
08120060 +0x44:  lea    -0x18(%ebp),%eax
08120063 +0x47:  mov    %eax,(%esp)
08120066 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812006b +0x4f:  leave
0812006c +0x50:  ret
0812006d +0x51:  nop
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::StartEvent @ 0x812001c

/* LevelUpBefore70LvEvent::StartEvent(Word_Param) */

void LevelUpBefore70LvEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event start! [monitor request]");
  return;
}
```
