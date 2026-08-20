# EndEvent

`_ZN15CEventCreateDnf8EndEventEv`

`CEventCreateDnf::EndEvent()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163cd0  _ZN15CEventCreateDnf8EndEventEv
#           CEventCreateDnf::EndEvent()
# range [0x08163cd0, 0x08163d4b]
08163cd0 +0x00:  push   %ebp
08163cd1 +0x01:  mov    %esp,%ebp
08163cd3 +0x03:  sub    $0x28,%esp
08163cd6 +0x06:  movl   $0x0,0xc(%esp)
08163cde +0x0e:  movl   $0x38,0x8(%esp)
08163ce6 +0x16:  movl   $&_ZZN15CEventCreateDnf8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08163cee +0x1e:  lea    -0x18(%ebp),%eax
08163cf1 +0x21:  mov    %eax,(%esp)
08163cf4 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08163cf9 +0x29:  movl   $"[Taiwan, CreateDnfEvent] End Event.",0x4(%esp)
08163d01 +0x31:  lea    -0x18(%ebp),%eax
08163d04 +0x34:  mov    %eax,(%esp)
08163d07 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08163d0c +0x3c:  mov    0x8(%ebp),%eax
08163d0f +0x3f:  movb   $0x0,0x10(%eax)
08163d13 +0x43:  mov    0x8(%ebp),%eax
08163d16 +0x46:  movb   $0x0,0x11(%eax)
08163d1a +0x4a:  mov    0x8(%ebp),%eax
08163d1d +0x4d:  movw   $0x0,0x12(%eax)
08163d23 +0x53:  movl   $0x0,0x4(%esp)
08163d2b +0x5b:  mov    0x8(%ebp),%eax
08163d2e +0x5e:  mov    %eax,(%esp)
08163d31 +0x61:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08163d36 +0x66:  mov    0x8(%ebp),%eax
08163d39 +0x69:  movl   $0x0,0x4(%esp)
08163d41 +0x71:  mov    %eax,(%esp)
08163d44 +0x74:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08163d49 +0x79:  leave
08163d4a +0x7a:  ret
08163d4b +0x7b:  nop
```

## 反编译 C

```c
// CEventCreateDnf::EndEvent @ 0x8163cd0

/* CEventCreateDnf::EndEvent() */

void __thiscall CEventCreateDnf::EndEvent(CEventCreateDnf *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCreateDnf::EndEvent()",0x38,0);
  cMyTrace::operator()(local_1c,"[Taiwan, CreateDnfEvent] End Event.");
  this[0x10] = (CEventCreateDnf)0x0;
  this[0x11] = (CEventCreateDnf)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  setState(this,0);
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
