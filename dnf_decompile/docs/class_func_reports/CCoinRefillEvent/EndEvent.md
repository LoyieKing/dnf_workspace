# EndEvent

`_ZN16CCoinRefillEvent8EndEventEv`

`CCoinRefillEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832c048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c048  _ZN16CCoinRefillEvent8EndEventEv
#           CCoinRefillEvent::EndEvent()
# range [0x0832c048, 0x0832c0b7]
0832c048 +0x00:  push   %ebp
0832c049 +0x01:  mov    %esp,%ebp
0832c04b +0x03:  sub    $0x28,%esp
0832c04e +0x06:  mov    0x8(%ebp),%eax
0832c051 +0x09:  movl   $0x0,0x4(%esp)
0832c059 +0x11:  mov    %eax,(%esp)
0832c05c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0832c061 +0x19:  mov    0x8(%ebp),%eax
0832c064 +0x1c:  add    $0xc,%eax
0832c067 +0x1f:  movl   $0x14,0x8(%esp)
0832c06f +0x27:  movl   $0xffffffff,0x4(%esp)
0832c077 +0x2f:  mov    %eax,(%esp)
0832c07a +0x32:  call   0807dcc0 <_init+0x5b8>
0832c07f +0x37:  movl   $0x0,0xc(%esp)
0832c087 +0x3f:  movl   $0x4f,0x8(%esp)
0832c08f +0x47:  movl   $&_ZZN16CCoinRefillEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0832c097 +0x4f:  lea    -0x18(%ebp),%eax
0832c09a +0x52:  mov    %eax,(%esp)
0832c09d +0x55:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0832c0a2 +0x5a:  movl   $"Coin Refill Event End",0x4(%esp)
0832c0aa +0x62:  lea    -0x18(%ebp),%eax
0832c0ad +0x65:  mov    %eax,(%esp)
0832c0b0 +0x68:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0832c0b5 +0x6d:  leave
0832c0b6 +0x6e:  ret
0832c0b7 +0x6f:  nop
```

## 反编译 C

```c
// CCoinRefillEvent::EndEvent @ 0x832c048

/* CCoinRefillEvent::EndEvent() */

void __thiscall CCoinRefillEvent::EndEvent(CCoinRefillEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  memset(this + 0xc,-1,0x14);
  cMyTrace::cMyTrace(local_1c,"virtual void CCoinRefillEvent::EndEvent()",0x4f,0);
  cMyTrace::operator()(local_1c,"Coin Refill Event End");
  return;
}
```
