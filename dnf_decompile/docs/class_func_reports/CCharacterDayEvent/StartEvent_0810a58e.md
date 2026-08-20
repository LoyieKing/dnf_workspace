# StartEvent

`_ZN18CCharacterDayEvent10StartEventE10Word_Param`

`CCharacterDayEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a58e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a58e  _ZN18CCharacterDayEvent10StartEventE10Word_Param
#           CCharacterDayEvent::StartEvent(Word_Param)
# range [0x0810a58e, 0x0810a5eb]
0810a58e +0x00:  push   %ebp
0810a58f +0x01:  mov    %esp,%ebp
0810a591 +0x03:  sub    $0x28,%esp
0810a594 +0x06:  mov    0x8(%ebp),%eax
0810a597 +0x09:  movl   $0x1,0x4(%esp)
0810a59f +0x11:  mov    %eax,(%esp)
0810a5a2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a5a7 +0x19:  movzwl 0xc(%ebp),%eax
0810a5ab +0x1d:  mov    %eax,%edx
0810a5ad +0x1f:  mov    0x8(%ebp),%eax
0810a5b0 +0x22:  mov    %dx,0xa(%eax)
0810a5b4 +0x26:  movl   $0x0,0xc(%esp)
0810a5bc +0x2e:  movl   $0x1f,0x8(%esp)
0810a5c4 +0x36:  movl   $&_ZZN18CCharacterDayEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810a5cc +0x3e:  lea    -0x18(%ebp),%eax
0810a5cf +0x41:  mov    %eax,(%esp)
0810a5d2 +0x44:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a5d7 +0x49:  movl   $"Character Day Event Start!",0x4(%esp)
0810a5df +0x51:  lea    -0x18(%ebp),%eax
0810a5e2 +0x54:  mov    %eax,(%esp)
0810a5e5 +0x57:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a5ea +0x5c:  leave
0810a5eb +0x5d:  ret
```

## 反编译 C

```c
// CCharacterDayEvent::StartEvent @ 0x810a58e

/* CCharacterDayEvent::StartEvent(Word_Param) */

void __thiscall CCharacterDayEvent::StartEvent(CCharacterDayEvent *this,undefined2 param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined2 *)(this + 10) = param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Character Day Event Start!");
  return;
}
```
