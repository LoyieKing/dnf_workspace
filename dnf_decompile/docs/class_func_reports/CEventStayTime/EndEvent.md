# EndEvent

`_ZN14CEventStayTime8EndEventEv`

`CEventStayTime::EndEvent()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816be60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816be60  _ZN14CEventStayTime8EndEventEv
#           CEventStayTime::EndEvent()
# range [0x0816be60, 0x0816bebb]
0816be60 +0x00:  push   %ebp
0816be61 +0x01:  mov    %esp,%ebp
0816be63 +0x03:  sub    $0x28,%esp
0816be66 +0x06:  movl   $"[CEventStayTime] End Event.",0x10(%esp)
0816be6e +0x0e:  movl   $0x1b,0xc(%esp)
0816be76 +0x16:  movl   $&_ZZN14CEventStayTime8EndEventEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816be7e +0x1e:  movl   $"localtaiwan/Event/EventStayTimeCharacter.cpp",0x4(%esp)
0816be86 +0x26:  movl   $0x1,(%esp)
0816be8d +0x2d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816be92 +0x32:  mov    0x8(%ebp),%eax
0816be95 +0x35:  movl   $0x0,0xc(%eax)
0816be9c +0x3c:  mov    0x8(%ebp),%eax
0816be9f +0x3f:  movl   $0x0,0x10(%eax)
0816bea6 +0x46:  mov    0x8(%ebp),%eax
0816bea9 +0x49:  movl   $0x0,0x4(%esp)
0816beb1 +0x51:  mov    %eax,(%esp)
0816beb4 +0x54:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816beb9 +0x59:  leave
0816beba +0x5a:  ret
0816bebb +0x5b:  nop
```

## 反编译 C

```c
// CEventStayTime::EndEvent @ 0x816be60

/* CEventStayTime::EndEvent() */

void __thiscall CEventStayTime::EndEvent(CEventStayTime *this)

{
  LogManager::logFormat
            (1,"localtaiwan/Event/EventStayTimeCharacter.cpp",
             "virtual void CEventStayTime::EndEvent()",0x1b,"[CEventStayTime] End Event.");
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
