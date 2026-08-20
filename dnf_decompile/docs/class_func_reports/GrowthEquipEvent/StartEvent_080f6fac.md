# StartEvent

`_ZN16GrowthEquipEvent10StartEventE10Word_Param`

`GrowthEquipEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6fac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6fac  _ZN16GrowthEquipEvent10StartEventE10Word_Param
#           GrowthEquipEvent::StartEvent(Word_Param)
# range [0x080f6fac, 0x080f6ffd]
080f6fac +0x00:  push   %ebp
080f6fad +0x01:  mov    %esp,%ebp
080f6faf +0x03:  sub    $0x28,%esp
080f6fb2 +0x06:  mov    0x8(%ebp),%eax
080f6fb5 +0x09:  movl   $0x1,0x4(%esp)
080f6fbd +0x11:  mov    %eax,(%esp)
080f6fc0 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080f6fc5 +0x19:  movl   $0x0,0xc(%esp)
080f6fcd +0x21:  movl   $0x1e,0x8(%esp)
080f6fd5 +0x29:  movl   $&_ZZN16GrowthEquipEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
080f6fdd +0x31:  lea    -0x18(%ebp),%eax
080f6fe0 +0x34:  mov    %eax,(%esp)
080f6fe3 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080f6fe8 +0x3c:  movl   $"GrowthEquipEvent Event start! [monitor request]",0x4(%esp)
080f6ff0 +0x44:  lea    -0x18(%ebp),%eax
080f6ff3 +0x47:  mov    %eax,(%esp)
080f6ff6 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080f6ffb +0x4f:  leave
080f6ffc +0x50:  ret
080f6ffd +0x51:  nop
```

## 反编译 C

```c
// GrowthEquipEvent::StartEvent @ 0x80f6fac

/* GrowthEquipEvent::StartEvent(Word_Param) */

void GrowthEquipEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event start! [monitor request]");
  return;
}
```
