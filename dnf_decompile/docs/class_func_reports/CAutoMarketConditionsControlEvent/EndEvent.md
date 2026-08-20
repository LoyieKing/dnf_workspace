# EndEvent

`_ZN33CAutoMarketConditionsControlEvent8EndEventEv`

`CAutoMarketConditionsControlEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109cf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109cf8  _ZN33CAutoMarketConditionsControlEvent8EndEventEv
#           CAutoMarketConditionsControlEvent::EndEvent()
# range [0x08109cf8, 0x08109d48]
08109cf8 +0x00:  push   %ebp
08109cf9 +0x01:  mov    %esp,%ebp
08109cfb +0x03:  sub    $0x28,%esp
08109cfe +0x06:  mov    0x8(%ebp),%eax
08109d01 +0x09:  movl   $0x0,0x4(%esp)
08109d09 +0x11:  mov    %eax,(%esp)
08109d0c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109d11 +0x19:  movl   $0x0,0xc(%esp)
08109d19 +0x21:  movl   $0x1f,0x8(%esp)
08109d21 +0x29:  movl   $&_ZZN33CAutoMarketConditionsControlEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08109d29 +0x31:  lea    -0x18(%ebp),%eax
08109d2c +0x34:  mov    %eax,(%esp)
08109d2f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08109d34 +0x3c:  movl   $"CAutoMarketConditionsControlEvent End!",0x4(%esp)
08109d3c +0x44:  lea    -0x18(%ebp),%eax
08109d3f +0x47:  mov    %eax,(%esp)
08109d42 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08109d47 +0x4f:  leave
08109d48 +0x50:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::EndEvent @ 0x8109cf8

/* CAutoMarketConditionsControlEvent::EndEvent() */

void __thiscall CAutoMarketConditionsControlEvent::EndEvent(CAutoMarketConditionsControlEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"CAutoMarketConditionsControlEvent End!");
  return;
}
```
