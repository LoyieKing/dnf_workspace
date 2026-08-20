# EndEvent

`_ZN23CGoldCardBlankItemEvent8EndEventEv`

`CGoldCardBlankItemEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811cee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cee6  _ZN23CGoldCardBlankItemEvent8EndEventEv
#           CGoldCardBlankItemEvent::EndEvent()
# range [0x0811cee6, 0x0811cf36]
0811cee6 +0x00:  push   %ebp
0811cee7 +0x01:  mov    %esp,%ebp
0811cee9 +0x03:  sub    $0x28,%esp
0811ceec +0x06:  mov    0x8(%ebp),%eax
0811ceef +0x09:  movl   $0x0,0x4(%esp)
0811cef7 +0x11:  mov    %eax,(%esp)
0811cefa +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811ceff +0x19:  movl   $0x0,0xc(%esp)
0811cf07 +0x21:  movl   $0x1e,0x8(%esp)
0811cf0f +0x29:  movl   $&_ZZN23CGoldCardBlankItemEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0811cf17 +0x31:  lea    -0x18(%ebp),%eax
0811cf1a +0x34:  mov    %eax,(%esp)
0811cf1d +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cf22 +0x3c:  movl   $"Gold Card Blank Item Event End",0x4(%esp)
0811cf2a +0x44:  lea    -0x18(%ebp),%eax
0811cf2d +0x47:  mov    %eax,(%esp)
0811cf30 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cf35 +0x4f:  leave
0811cf36 +0x50:  ret
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::EndEvent @ 0x811cee6

/* CGoldCardBlankItemEvent::EndEvent() */

void __thiscall CGoldCardBlankItemEvent::EndEvent(CGoldCardBlankItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Gold Card Blank Item Event End");
  return;
}
```
