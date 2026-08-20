# EndEvent

`_ZN27NewAccountLevelUpEventToJob8EndEventEv`

`NewAccountLevelUpEventToJob::EndEvent()`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b824c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b824c  _ZN27NewAccountLevelUpEventToJob8EndEventEv
#           NewAccountLevelUpEventToJob::EndEvent()
# range [0x081b824c, 0x081b829d]
081b824c +0x00:  push   %ebp
081b824d +0x01:  mov    %esp,%ebp
081b824f +0x03:  sub    $0x28,%esp
081b8252 +0x06:  mov    0x8(%ebp),%eax
081b8255 +0x09:  movl   $0x0,0x4(%esp)
081b825d +0x11:  mov    %eax,(%esp)
081b8260 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b8265 +0x19:  movl   $0x0,0xc(%esp)
081b826d +0x21:  movl   $0x2b,0x8(%esp)
081b8275 +0x29:  movl   $&_ZZN27NewAccountLevelUpEventToJob8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081b827d +0x31:  lea    -0x18(%ebp),%eax
081b8280 +0x34:  mov    %eax,(%esp)
081b8283 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b8288 +0x3c:  movl   $"NewAccountLevelUpEvent Event End!",0x4(%esp)
081b8290 +0x44:  lea    -0x18(%ebp),%eax
081b8293 +0x47:  mov    %eax,(%esp)
081b8296 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b829b +0x4f:  leave
081b829c +0x50:  ret
081b829d +0x51:  nop
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::EndEvent @ 0x81b824c

/* NewAccountLevelUpEventToJob::EndEvent() */

void __thiscall NewAccountLevelUpEventToJob::EndEvent(NewAccountLevelUpEventToJob *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void NewAccountLevelUpEventToJob::EndEvent()",0x2b,0);
  cMyTrace::operator()(local_1c,"NewAccountLevelUpEvent Event End!");
  return;
}
```
