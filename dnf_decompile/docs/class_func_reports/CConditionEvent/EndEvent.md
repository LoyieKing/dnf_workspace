# EndEvent

`_ZN15CConditionEvent8EndEventEv`

`CConditionEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CConditionEvent` | `0x08184928` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184928  _ZN15CConditionEvent8EndEventEv
#           CConditionEvent::EndEvent()
# range [0x08184928, 0x0818496f]
08184928 +0x00:  push   %ebp
08184929 +0x01:  mov    %esp,%ebp
0818492b +0x03:  sub    $0x28,%esp
0818492e +0x06:  movl   $"[CConditionEvent] End Event.",0x10(%esp)
08184936 +0x0e:  movl   $0x17,0xc(%esp)
0818493e +0x16:  movl   $&_ZZN15CConditionEvent8EndEventEvE19__PRETTY_FUNCTION__,0x8(%esp)
08184946 +0x1e:  movl   $"localjapan/Arad_ConditionEvent.cpp",0x4(%esp)
0818494e +0x26:  movl   $0x1,(%esp)
08184955 +0x2d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818495a +0x32:  mov    0x8(%ebp),%eax
0818495d +0x35:  movl   $0x0,0x4(%esp)
08184965 +0x3d:  mov    %eax,(%esp)
08184968 +0x40:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0818496d +0x45:  leave
0818496e +0x46:  ret
0818496f +0x47:  nop
```

## 反编译 C

```c
// CConditionEvent::EndEvent @ 0x8184928

/* CConditionEvent::EndEvent() */

void __thiscall CConditionEvent::EndEvent(CConditionEvent *this)

{
  LogManager::logFormat
            (1,"localjapan/Arad_ConditionEvent.cpp","virtual void CConditionEvent::EndEvent()",0x17,
             "[CConditionEvent] End Event.");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
