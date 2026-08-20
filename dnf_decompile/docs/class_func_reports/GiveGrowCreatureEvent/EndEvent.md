# EndEvent

`_ZN21GiveGrowCreatureEvent8EndEventEv`

`GiveGrowCreatureEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6a6a  _ZN21GiveGrowCreatureEvent8EndEventEv
#           GiveGrowCreatureEvent::EndEvent()
# range [0x081b6a6a, 0x081b6abb]
081b6a6a +0x00:  push   %ebp
081b6a6b +0x01:  mov    %esp,%ebp
081b6a6d +0x03:  sub    $0x28,%esp
081b6a70 +0x06:  mov    0x8(%ebp),%eax
081b6a73 +0x09:  movl   $0x0,0x4(%esp)
081b6a7b +0x11:  mov    %eax,(%esp)
081b6a7e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b6a83 +0x19:  movl   $0x0,0xc(%esp)
081b6a8b +0x21:  movl   $0x24,0x8(%esp)
081b6a93 +0x29:  movl   $&_ZZN21GiveGrowCreatureEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081b6a9b +0x31:  lea    -0x18(%ebp),%eax
081b6a9e +0x34:  mov    %eax,(%esp)
081b6aa1 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b6aa6 +0x3c:  movl   $"GiveGrowCreatureEvent Event end!",0x4(%esp)
081b6aae +0x44:  lea    -0x18(%ebp),%eax
081b6ab1 +0x47:  mov    %eax,(%esp)
081b6ab4 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b6ab9 +0x4f:  leave
081b6aba +0x50:  ret
081b6abb +0x51:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::EndEvent @ 0x81b6a6a

/* GiveGrowCreatureEvent::EndEvent() */

void __thiscall GiveGrowCreatureEvent::EndEvent(GiveGrowCreatureEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event end!");
  return;
}
```
