# EndEvent

`_ZN21CFirstServerOpenEvent8EndEventEv`

`CFirstServerOpenEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811cb86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cb86  _ZN21CFirstServerOpenEvent8EndEventEv
#           CFirstServerOpenEvent::EndEvent()
# range [0x0811cb86, 0x0811cbd7]
0811cb86 +0x00:  push   %ebp
0811cb87 +0x01:  mov    %esp,%ebp
0811cb89 +0x03:  sub    $0x28,%esp
0811cb8c +0x06:  mov    0x8(%ebp),%eax
0811cb8f +0x09:  movl   $0x0,0x4(%esp)
0811cb97 +0x11:  mov    %eax,(%esp)
0811cb9a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811cb9f +0x19:  movl   $0x0,0xc(%esp)
0811cba7 +0x21:  movl   $0x34,0x8(%esp)
0811cbaf +0x29:  movl   $&_ZZN21CFirstServerOpenEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0811cbb7 +0x31:  lea    -0x18(%ebp),%eax
0811cbba +0x34:  mov    %eax,(%esp)
0811cbbd +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cbc2 +0x3c:  movl   $"First Server Open Event End!",0x4(%esp)
0811cbca +0x44:  lea    -0x18(%ebp),%eax
0811cbcd +0x47:  mov    %eax,(%esp)
0811cbd0 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cbd5 +0x4f:  leave
0811cbd6 +0x50:  ret
0811cbd7 +0x51:  nop
```

## 反编译 C

```c
// CFirstServerOpenEvent::EndEvent @ 0x811cb86

/* CFirstServerOpenEvent::EndEvent() */

void __thiscall CFirstServerOpenEvent::EndEvent(CFirstServerOpenEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x34,0);
  cMyTrace::operator()(local_1c,"First Server Open Event End!");
  return;
}
```
