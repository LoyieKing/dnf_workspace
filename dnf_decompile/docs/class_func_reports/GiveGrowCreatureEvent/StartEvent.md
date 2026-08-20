# StartEvent

`_ZN21GiveGrowCreatureEvent10StartEventEv`

`GiveGrowCreatureEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b69c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b69c6  _ZN21GiveGrowCreatureEvent10StartEventEv
#           GiveGrowCreatureEvent::StartEvent()
# range [0x081b69c6, 0x081b6a17]
081b69c6 +0x00:  push   %ebp
081b69c7 +0x01:  mov    %esp,%ebp
081b69c9 +0x03:  sub    $0x28,%esp
081b69cc +0x06:  mov    0x8(%ebp),%eax
081b69cf +0x09:  movl   $0x1,0x4(%esp)
081b69d7 +0x11:  mov    %eax,(%esp)
081b69da +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b69df +0x19:  movl   $0x0,0xc(%esp)
081b69e7 +0x21:  movl   $0x18,0x8(%esp)
081b69ef +0x29:  movl   $&_ZZN21GiveGrowCreatureEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081b69f7 +0x31:  lea    -0x18(%ebp),%eax
081b69fa +0x34:  mov    %eax,(%esp)
081b69fd +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b6a02 +0x3c:  movl   $"GiveGrowCreatureEvent Event start!",0x4(%esp)
081b6a0a +0x44:  lea    -0x18(%ebp),%eax
081b6a0d +0x47:  mov    %eax,(%esp)
081b6a10 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b6a15 +0x4f:  leave
081b6a16 +0x50:  ret
081b6a17 +0x51:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::StartEvent @ 0x81b69c6

/* GiveGrowCreatureEvent::StartEvent() */

void __thiscall GiveGrowCreatureEvent::StartEvent(GiveGrowCreatureEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event start!");
  return;
}
```
