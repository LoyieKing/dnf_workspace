# StartEvent

`_ZN23CGoldCardBlankItemEvent10StartEventE10Word_Param`

`CGoldCardBlankItemEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811ce94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ce94  _ZN23CGoldCardBlankItemEvent10StartEventE10Word_Param
#           CGoldCardBlankItemEvent::StartEvent(Word_Param)
# range [0x0811ce94, 0x0811cee5]
0811ce94 +0x00:  push   %ebp
0811ce95 +0x01:  mov    %esp,%ebp
0811ce97 +0x03:  sub    $0x28,%esp
0811ce9a +0x06:  mov    0x8(%ebp),%eax
0811ce9d +0x09:  movl   $0x1,0x4(%esp)
0811cea5 +0x11:  mov    %eax,(%esp)
0811cea8 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811cead +0x19:  movl   $0x0,0xc(%esp)
0811ceb5 +0x21:  movl   $0x18,0x8(%esp)
0811cebd +0x29:  movl   $&_ZZN23CGoldCardBlankItemEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0811cec5 +0x31:  lea    -0x18(%ebp),%eax
0811cec8 +0x34:  mov    %eax,(%esp)
0811cecb +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811ced0 +0x3c:  movl   $"Gold Card Blank Item Event Start",0x4(%esp)
0811ced8 +0x44:  lea    -0x18(%ebp),%eax
0811cedb +0x47:  mov    %eax,(%esp)
0811cede +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cee3 +0x4f:  leave
0811cee4 +0x50:  ret
0811cee5 +0x51:  nop
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::StartEvent @ 0x811ce94

/* CGoldCardBlankItemEvent::StartEvent(Word_Param) */

void CGoldCardBlankItemEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Gold Card Blank Item Event Start");
  return;
}
```
