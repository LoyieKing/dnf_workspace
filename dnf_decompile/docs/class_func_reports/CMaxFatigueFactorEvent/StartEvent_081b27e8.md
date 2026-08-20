# StartEvent

`_ZN22CMaxFatigueFactorEvent10StartEventE10Word_Param`

`CMaxFatigueFactorEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b27e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b27e8  _ZN22CMaxFatigueFactorEvent10StartEventE10Word_Param
#           CMaxFatigueFactorEvent::StartEvent(Word_Param)
# range [0x081b27e8, 0x081b284b]
081b27e8 +0x00:  push   %ebp
081b27e9 +0x01:  mov    %esp,%ebp
081b27eb +0x03:  sub    $0x28,%esp
081b27ee +0x06:  mov    0x8(%ebp),%eax
081b27f1 +0x09:  movl   $0x1,0x4(%esp)
081b27f9 +0x11:  mov    %eax,(%esp)
081b27fc +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b2801 +0x19:  movzwl 0xc(%ebp),%eax
081b2805 +0x1d:  movzwl %ax,%edx
081b2808 +0x20:  mov    0x8(%ebp),%eax
081b280b +0x23:  mov    %edx,0xc(%eax)
081b280e +0x26:  movl   $0x0,0xc(%esp)
081b2816 +0x2e:  movl   $0x1e,0x8(%esp)
081b281e +0x36:  movl   $&_ZZN22CMaxFatigueFactorEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
081b2826 +0x3e:  lea    -0x18(%ebp),%eax
081b2829 +0x41:  mov    %eax,(%esp)
081b282c +0x44:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b2831 +0x49:  movl   $"Max Fatigue Factor Event Start!",0x4(%esp)
081b2839 +0x51:  lea    -0x18(%ebp),%eax
081b283c +0x54:  mov    %eax,(%esp)
081b283f +0x57:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b2844 +0x5c:  call   0812ca88 <_ZN16CLocalChina_User16SendFatigueEventEv>  ; CLocalChina_User::SendFatigueEvent()
081b2849 +0x61:  leave
081b284a +0x62:  ret
081b284b +0x63:  nop
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::StartEvent @ 0x81b27e8

/* CMaxFatigueFactorEvent::StartEvent(Word_Param) */

void __thiscall CMaxFatigueFactorEvent::StartEvent(CMaxFatigueFactorEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event Start!");
  CLocalChina_User::SendFatigueEvent();
  return;
}
```
