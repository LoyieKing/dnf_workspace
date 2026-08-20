# StartEvent

`_ZN22BlueMarbleDungeonEvent10StartEventE10Word_Param`

`BlueMarbleDungeonEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc52c  _ZN22BlueMarbleDungeonEvent10StartEventE10Word_Param
#           BlueMarbleDungeonEvent::StartEvent(Word_Param)
# range [0x080dc52c, 0x080dc57d]
080dc52c +0x00:  push   %ebp
080dc52d +0x01:  mov    %esp,%ebp
080dc52f +0x03:  sub    $0x28,%esp
080dc532 +0x06:  mov    0x8(%ebp),%eax
080dc535 +0x09:  movl   $0x1,0x4(%esp)
080dc53d +0x11:  mov    %eax,(%esp)
080dc540 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080dc545 +0x19:  movl   $0x0,0xc(%esp)
080dc54d +0x21:  movl   $0x1c,0x8(%esp)
080dc555 +0x29:  movl   $&_ZZN22BlueMarbleDungeonEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
080dc55d +0x31:  lea    -0x18(%ebp),%eax
080dc560 +0x34:  mov    %eax,(%esp)
080dc563 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080dc568 +0x3c:  movl   $"BlueMarbleDungeonEvent Start!",0x4(%esp)
080dc570 +0x44:  lea    -0x18(%ebp),%eax
080dc573 +0x47:  mov    %eax,(%esp)
080dc576 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080dc57b +0x4f:  leave
080dc57c +0x50:  ret
080dc57d +0x51:  nop
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::StartEvent @ 0x80dc52c

/* BlueMarbleDungeonEvent::StartEvent(Word_Param) */

void BlueMarbleDungeonEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1c,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent Start!");
  return;
}
```
