# StartEvent

`_ZN22CCoinEventOnCharCreate10StartEventEv`

`CCoinEventOnCharCreate::StartEvent()`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810a988` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a988  _ZN22CCoinEventOnCharCreate10StartEventEv
#           CCoinEventOnCharCreate::StartEvent()
# range [0x0810a988, 0x0810a9e3]
0810a988 +0x00:  push   %ebp
0810a989 +0x01:  mov    %esp,%ebp
0810a98b +0x03:  sub    $0x28,%esp
0810a98e +0x06:  mov    0x8(%ebp),%eax
0810a991 +0x09:  movl   $0x1,0x4(%esp)
0810a999 +0x11:  mov    %eax,(%esp)
0810a99c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a9a1 +0x19:  mov    0x8(%ebp),%eax
0810a9a4 +0x1c:  movl   $0x5,0xc(%eax)
0810a9ab +0x23:  movl   $0x0,0xc(%esp)
0810a9b3 +0x2b:  movl   $0x15,0x8(%esp)
0810a9bb +0x33:  movl   $&_ZZN22CCoinEventOnCharCreate10StartEventEvE12__FUNCTION__,0x4(%esp)
0810a9c3 +0x3b:  lea    -0x18(%ebp),%eax
0810a9c6 +0x3e:  mov    %eax,(%esp)
0810a9c9 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a9ce +0x46:  movl   $"Coin Event On Char Create Start!",0x4(%esp)
0810a9d6 +0x4e:  lea    -0x18(%ebp),%eax
0810a9d9 +0x51:  mov    %eax,(%esp)
0810a9dc +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a9e1 +0x59:  leave
0810a9e2 +0x5a:  ret
0810a9e3 +0x5b:  nop
```

## 反编译 C

```c
// CCoinEventOnCharCreate::StartEvent @ 0x810a988

/* CCoinEventOnCharCreate::StartEvent() */

void __thiscall CCoinEventOnCharCreate::StartEvent(CCoinEventOnCharCreate *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 5;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x15,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create Start!");
  return;
}
```
