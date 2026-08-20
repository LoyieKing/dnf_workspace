# EndEvent

`_ZN22CMaxFatigueFactorEvent8EndEventEv`

`CMaxFatigueFactorEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b284c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b284c  _ZN22CMaxFatigueFactorEvent8EndEventEv
#           CMaxFatigueFactorEvent::EndEvent()
# range [0x081b284c, 0x081b28ab]
081b284c +0x00:  push   %ebp
081b284d +0x01:  mov    %esp,%ebp
081b284f +0x03:  sub    $0x28,%esp
081b2852 +0x06:  mov    0x8(%ebp),%eax
081b2855 +0x09:  movl   $0x0,0x4(%esp)
081b285d +0x11:  mov    %eax,(%esp)
081b2860 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b2865 +0x19:  mov    0x8(%ebp),%eax
081b2868 +0x1c:  movl   $0x64,0xc(%eax)
081b286f +0x23:  movl   $0x0,0xc(%esp)
081b2877 +0x2b:  movl   $0x2a,0x8(%esp)
081b287f +0x33:  movl   $&_ZZN22CMaxFatigueFactorEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
081b2887 +0x3b:  lea    -0x18(%ebp),%eax
081b288a +0x3e:  mov    %eax,(%esp)
081b288d +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b2892 +0x46:  movl   $"Max Fatigue Factor Event End!",0x4(%esp)
081b289a +0x4e:  lea    -0x18(%ebp),%eax
081b289d +0x51:  mov    %eax,(%esp)
081b28a0 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b28a5 +0x59:  call   0812ca88 <_ZN16CLocalChina_User16SendFatigueEventEv>  ; CLocalChina_User::SendFatigueEvent()
081b28aa +0x5e:  leave
081b28ab +0x5f:  ret
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::EndEvent @ 0x81b284c

/* CMaxFatigueFactorEvent::EndEvent() */

void __thiscall CMaxFatigueFactorEvent::EndEvent(CMaxFatigueFactorEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x2a,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event End!");
  CLocalChina_User::SendFatigueEvent();
  return;
}
```
