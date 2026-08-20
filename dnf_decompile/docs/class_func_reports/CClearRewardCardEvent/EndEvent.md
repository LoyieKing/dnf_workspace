# EndEvent

`_ZN21CClearRewardCardEvent8EndEventEv`

`CClearRewardCardEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a7e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a7e2  _ZN21CClearRewardCardEvent8EndEventEv
#           CClearRewardCardEvent::EndEvent()
# range [0x0810a7e2, 0x0810a832]
0810a7e2 +0x00:  push   %ebp
0810a7e3 +0x01:  mov    %esp,%ebp
0810a7e5 +0x03:  sub    $0x28,%esp
0810a7e8 +0x06:  mov    0x8(%ebp),%eax
0810a7eb +0x09:  movl   $0x0,0x4(%esp)
0810a7f3 +0x11:  mov    %eax,(%esp)
0810a7f6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a7fb +0x19:  movl   $0x0,0xc(%esp)
0810a803 +0x21:  movl   $0x1e,0x8(%esp)
0810a80b +0x29:  movl   $&_ZZN21CClearRewardCardEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0810a813 +0x31:  lea    -0x18(%ebp),%eax
0810a816 +0x34:  mov    %eax,(%esp)
0810a819 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a81e +0x3c:  movl   $"Clear reward card event End",0x4(%esp)
0810a826 +0x44:  lea    -0x18(%ebp),%eax
0810a829 +0x47:  mov    %eax,(%esp)
0810a82c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a831 +0x4f:  leave
0810a832 +0x50:  ret
```

## 反编译 C

```c
// CClearRewardCardEvent::EndEvent @ 0x810a7e2

/* CClearRewardCardEvent::EndEvent() */

void __thiscall CClearRewardCardEvent::EndEvent(CClearRewardCardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Clear reward card event End");
  return;
}
```
