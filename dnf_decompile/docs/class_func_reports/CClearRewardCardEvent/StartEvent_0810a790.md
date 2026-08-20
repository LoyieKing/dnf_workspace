# StartEvent

`_ZN21CClearRewardCardEvent10StartEventE10Word_Param`

`CClearRewardCardEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a790  _ZN21CClearRewardCardEvent10StartEventE10Word_Param
#           CClearRewardCardEvent::StartEvent(Word_Param)
# range [0x0810a790, 0x0810a7e1]
0810a790 +0x00:  push   %ebp
0810a791 +0x01:  mov    %esp,%ebp
0810a793 +0x03:  sub    $0x28,%esp
0810a796 +0x06:  mov    0x8(%ebp),%eax
0810a799 +0x09:  movl   $0x1,0x4(%esp)
0810a7a1 +0x11:  mov    %eax,(%esp)
0810a7a4 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a7a9 +0x19:  movl   $0x0,0xc(%esp)
0810a7b1 +0x21:  movl   $0x18,0x8(%esp)
0810a7b9 +0x29:  movl   $&_ZZN21CClearRewardCardEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810a7c1 +0x31:  lea    -0x18(%ebp),%eax
0810a7c4 +0x34:  mov    %eax,(%esp)
0810a7c7 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a7cc +0x3c:  movl   $"Clear reward card event Start",0x4(%esp)
0810a7d4 +0x44:  lea    -0x18(%ebp),%eax
0810a7d7 +0x47:  mov    %eax,(%esp)
0810a7da +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a7df +0x4f:  leave
0810a7e0 +0x50:  ret
0810a7e1 +0x51:  nop
```

## 反编译 C

```c
// CClearRewardCardEvent::StartEvent @ 0x810a790

/* CClearRewardCardEvent::StartEvent(Word_Param) */

void CClearRewardCardEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Clear reward card event Start");
  return;
}
```
