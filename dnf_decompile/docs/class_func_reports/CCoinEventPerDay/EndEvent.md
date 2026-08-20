# EndEvent

`_ZN16CCoinEventPerDay8EndEventEv`

`CCoinEventPerDay::EndEvent()`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810aca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aca8  _ZN16CCoinEventPerDay8EndEventEv
#           CCoinEventPerDay::EndEvent()
# range [0x0810aca8, 0x0810ad15]
0810aca8 +0x00:  push   %ebp
0810aca9 +0x01:  mov    %esp,%ebp
0810acab +0x03:  sub    $0x28,%esp
0810acae +0x06:  mov    0x8(%ebp),%eax
0810acb1 +0x09:  movl   $0x0,0x4(%esp)
0810acb9 +0x11:  mov    %eax,(%esp)
0810acbc +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810acc1 +0x19:  mov    0x8(%ebp),%eax
0810acc4 +0x1c:  movb   $0x1,0x9(%eax)
0810acc8 +0x20:  mov    0x8(%ebp),%eax
0810accb +0x23:  movb   $0x1,0xa(%eax)
0810accf +0x27:  mov    0x8(%ebp),%eax
0810acd2 +0x2a:  movb   $0x1,0xb(%eax)
0810acd6 +0x2e:  mov    0x8(%ebp),%eax
0810acd9 +0x31:  movb   $0x1,0xc(%eax)
0810acdd +0x35:  movl   $0x0,0xc(%esp)
0810ace5 +0x3d:  movl   $0x63,0x8(%esp)
0810aced +0x45:  movl   $&_ZZN16CCoinEventPerDay8EndEventEvE12__FUNCTION__,0x4(%esp)
0810acf5 +0x4d:  lea    -0x18(%ebp),%eax
0810acf8 +0x50:  mov    %eax,(%esp)
0810acfb +0x53:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810ad00 +0x58:  movl   $"Coin Event Per Day End",0x4(%esp)
0810ad08 +0x60:  lea    -0x18(%ebp),%eax
0810ad0b +0x63:  mov    %eax,(%esp)
0810ad0e +0x66:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810ad13 +0x6b:  leave
0810ad14 +0x6c:  ret
0810ad15 +0x6d:  nop
```

## 反编译 C

```c
// CCoinEventPerDay::EndEvent @ 0x810aca8

/* CCoinEventPerDay::EndEvent() */

void __thiscall CCoinEventPerDay::EndEvent(CCoinEventPerDay *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  cMyTrace::cMyTrace(local_1c,"EndEvent",99,0);
  cMyTrace::operator()(local_1c,"Coin Event Per Day End");
  return;
}
```
