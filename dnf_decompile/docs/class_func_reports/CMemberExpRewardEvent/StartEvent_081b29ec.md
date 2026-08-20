# StartEvent

`_ZN21CMemberExpRewardEvent10StartEventE10Word_Param`

`CMemberExpRewardEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b29ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b29ec  _ZN21CMemberExpRewardEvent10StartEventE10Word_Param
#           CMemberExpRewardEvent::StartEvent(Word_Param)
# range [0x081b29ec, 0x081b2a59]
081b29ec +0x00:  push   %ebp
081b29ed +0x01:  mov    %esp,%ebp
081b29ef +0x03:  push   %ebx
081b29f0 +0x04:  sub    $0x24,%esp
081b29f3 +0x07:  mov    0x8(%ebp),%eax
081b29f6 +0x0a:  movl   $0x1,0x4(%esp)
081b29fe +0x12:  mov    %eax,(%esp)
081b2a01 +0x15:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b2a06 +0x1a:  movzwl 0xc(%ebp),%eax
081b2a0a +0x1e:  movzwl %ax,%edx
081b2a0d +0x21:  mov    0x8(%ebp),%eax
081b2a10 +0x24:  mov    %edx,0xc(%eax)
081b2a13 +0x27:  movzwl 0xc(%ebp),%eax
081b2a17 +0x2b:  movzwl %ax,%ebx
081b2a1a +0x2e:  movl   $0x0,0xc(%esp)
081b2a22 +0x36:  movl   $0x1d,0x8(%esp)
081b2a2a +0x3e:  movl   $&_ZZN21CMemberExpRewardEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
081b2a32 +0x46:  lea    -0x18(%ebp),%eax
081b2a35 +0x49:  mov    %eax,(%esp)
081b2a38 +0x4c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b2a3d +0x51:  mov    %ebx,0x8(%esp)
081b2a41 +0x55:  movl   $"Member Exp Reward Event! ratio(%d)",0x4(%esp)
081b2a49 +0x5d:  lea    -0x18(%ebp),%eax
081b2a4c +0x60:  mov    %eax,(%esp)
081b2a4f +0x63:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b2a54 +0x68:  add    $0x24,%esp
081b2a57 +0x6b:  pop    %ebx
081b2a58 +0x6c:  pop    %ebp
081b2a59 +0x6d:  ret
```

## 反编译 C

```c
// CMemberExpRewardEvent::StartEvent @ 0x81b29ec

/* CMemberExpRewardEvent::StartEvent(Word_Param) */

void __thiscall CMemberExpRewardEvent::StartEvent(CMemberExpRewardEvent *this,ushort param_2)

{
  cMyTrace local_1c [20];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1d,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event! ratio(%d)",(uint)param_2);
  return;
}
```
