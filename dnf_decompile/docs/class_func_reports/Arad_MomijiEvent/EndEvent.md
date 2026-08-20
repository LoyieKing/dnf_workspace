# EndEvent

`_ZN16Arad_MomijiEvent8EndEventEv`

`Arad_MomijiEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e80e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e80e  _ZN16Arad_MomijiEvent8EndEventEv
#           Arad_MomijiEvent::EndEvent()
# range [0x0819e80e, 0x0819e85e]
0819e80e +0x00:  push   %ebp
0819e80f +0x01:  mov    %esp,%ebp
0819e811 +0x03:  sub    $0x28,%esp
0819e814 +0x06:  movl   $0x0,0xc(%esp)
0819e81c +0x0e:  movl   $0x1f,0x8(%esp)
0819e824 +0x16:  movl   $&_ZZN16Arad_MomijiEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0819e82c +0x1e:  lea    -0x18(%ebp),%eax
0819e82f +0x21:  mov    %eax,(%esp)
0819e832 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819e837 +0x29:  movl   $"[MOMIJI_EVENT] Event End.",0x4(%esp)
0819e83f +0x31:  lea    -0x18(%ebp),%eax
0819e842 +0x34:  mov    %eax,(%esp)
0819e845 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819e84a +0x3c:  mov    0x8(%ebp),%eax
0819e84d +0x3f:  movl   $0x0,0x4(%esp)
0819e855 +0x47:  mov    %eax,(%esp)
0819e858 +0x4a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0819e85d +0x4f:  leave
0819e85e +0x50:  ret
```

## 反编译 C

```c
// Arad_MomijiEvent::EndEvent @ 0x819e80e

/* Arad_MomijiEvent::EndEvent() */

void __thiscall Arad_MomijiEvent::EndEvent(Arad_MomijiEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void Arad_MomijiEvent::EndEvent()",0x1f,0);
  cMyTrace::operator()(local_1c,"[MOMIJI_EVENT] Event End.");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
