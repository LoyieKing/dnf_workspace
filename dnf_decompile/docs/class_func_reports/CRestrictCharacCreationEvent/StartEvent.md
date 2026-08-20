# StartEvent

`_ZN28CRestrictCharacCreationEvent10StartEventEv`

`CRestrictCharacCreationEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273cb8  _ZN28CRestrictCharacCreationEvent10StartEventEv
#           CRestrictCharacCreationEvent::StartEvent()
# range [0x08273cb8, 0x08273d09]
08273cb8 +0x00:  push   %ebp
08273cb9 +0x01:  mov    %esp,%ebp
08273cbb +0x03:  sub    $0x28,%esp
08273cbe +0x06:  mov    0x8(%ebp),%eax
08273cc1 +0x09:  movl   $0x1,0x4(%esp)
08273cc9 +0x11:  mov    %eax,(%esp)
08273ccc +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08273cd1 +0x19:  movl   $0x0,0xc(%esp)
08273cd9 +0x21:  movl   $0x17,0x8(%esp)
08273ce1 +0x29:  movl   $&_ZZN28CRestrictCharacCreationEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08273ce9 +0x31:  lea    -0x18(%ebp),%eax
08273cec +0x34:  mov    %eax,(%esp)
08273cef +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08273cf4 +0x3c:  movl   $"Restrict Character Creation Start!",0x4(%esp)
08273cfc +0x44:  lea    -0x18(%ebp),%eax
08273cff +0x47:  mov    %eax,(%esp)
08273d02 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08273d07 +0x4f:  leave
08273d08 +0x50:  ret
08273d09 +0x51:  nop
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::StartEvent @ 0x8273cb8

/* CRestrictCharacCreationEvent::StartEvent() */

void __thiscall CRestrictCharacCreationEvent::StartEvent(CRestrictCharacCreationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"Restrict Character Creation Start!");
  return;
}
```
