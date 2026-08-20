# EndEvent

`_ZN20CBurningFatigueEvent8EndEventEv`

`CBurningFatigueEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a09a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a09a  _ZN20CBurningFatigueEvent8EndEventEv
#           CBurningFatigueEvent::EndEvent()
# range [0x0810a09a, 0x0810a0eb]
0810a09a +0x00:  push   %ebp
0810a09b +0x01:  mov    %esp,%ebp
0810a09d +0x03:  sub    $0x28,%esp
0810a0a0 +0x06:  mov    0x8(%ebp),%eax
0810a0a3 +0x09:  movl   $0x0,0x4(%esp)
0810a0ab +0x11:  mov    %eax,(%esp)
0810a0ae +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a0b3 +0x19:  movl   $0x0,0xc(%esp)
0810a0bb +0x21:  movl   $0x21,0x8(%esp)
0810a0c3 +0x29:  movl   $&_ZZN20CBurningFatigueEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0810a0cb +0x31:  lea    -0x18(%ebp),%eax
0810a0ce +0x34:  mov    %eax,(%esp)
0810a0d1 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a0d6 +0x3c:  movl   $"Burning Fatigue Event End",0x4(%esp)
0810a0de +0x44:  lea    -0x18(%ebp),%eax
0810a0e1 +0x47:  mov    %eax,(%esp)
0810a0e4 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a0e9 +0x4f:  leave
0810a0ea +0x50:  ret
0810a0eb +0x51:  nop
```

## 反编译 C

```c
// CBurningFatigueEvent::EndEvent @ 0x810a09a

/* CBurningFatigueEvent::EndEvent() */

void __thiscall CBurningFatigueEvent::EndEvent(CBurningFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CBurningFatigueEvent::EndEvent()",0x21,0);
  cMyTrace::operator()(local_1c,"Burning Fatigue Event End");
  return;
}
```
