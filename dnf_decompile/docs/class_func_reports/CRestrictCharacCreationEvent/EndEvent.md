# EndEvent

`_ZN28CRestrictCharacCreationEvent8EndEventEv`

`CRestrictCharacCreationEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273d68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273d68  _ZN28CRestrictCharacCreationEvent8EndEventEv
#           CRestrictCharacCreationEvent::EndEvent()
# range [0x08273d68, 0x08273db9]
08273d68 +0x00:  push   %ebp
08273d69 +0x01:  mov    %esp,%ebp
08273d6b +0x03:  sub    $0x28,%esp
08273d6e +0x06:  mov    0x8(%ebp),%eax
08273d71 +0x09:  movl   $0x0,0x4(%esp)
08273d79 +0x11:  mov    %eax,(%esp)
08273d7c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08273d81 +0x19:  movl   $0x0,0xc(%esp)
08273d89 +0x21:  movl   $0x2b,0x8(%esp)
08273d91 +0x29:  movl   $&_ZZN28CRestrictCharacCreationEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08273d99 +0x31:  lea    -0x18(%ebp),%eax
08273d9c +0x34:  mov    %eax,(%esp)
08273d9f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08273da4 +0x3c:  movl   $"Restrict Character Creation End!",0x4(%esp)
08273dac +0x44:  lea    -0x18(%ebp),%eax
08273daf +0x47:  mov    %eax,(%esp)
08273db2 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08273db7 +0x4f:  leave
08273db8 +0x50:  ret
08273db9 +0x51:  nop
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::EndEvent @ 0x8273d68

/* CRestrictCharacCreationEvent::EndEvent() */

void __thiscall CRestrictCharacCreationEvent::EndEvent(CRestrictCharacCreationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x2b,0);
  cMyTrace::operator()(local_1c,"Restrict Character Creation End!");
  return;
}
```
