# EndEvent

`_ZN16HeroMissionEvent8EndEventEv`

`HeroMissionEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08166700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166700  _ZN16HeroMissionEvent8EndEventEv
#           HeroMissionEvent::EndEvent()
# range [0x08166700, 0x08166751]
08166700 +0x00:  push   %ebp
08166701 +0x01:  mov    %esp,%ebp
08166703 +0x03:  sub    $0x28,%esp
08166706 +0x06:  movl   $0x0,0xc(%esp)
0816670e +0x0e:  movl   $0x20d,0x8(%esp)
08166716 +0x16:  movl   $&_ZZN16HeroMissionEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816671e +0x1e:  lea    -0x18(%ebp),%eax
08166721 +0x21:  mov    %eax,(%esp)
08166724 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08166729 +0x29:  movl   $"[HeroMission] End!",0x4(%esp)
08166731 +0x31:  lea    -0x18(%ebp),%eax
08166734 +0x34:  mov    %eax,(%esp)
08166737 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816673c +0x3c:  mov    0x8(%ebp),%eax
0816673f +0x3f:  movl   $0x0,0x4(%esp)
08166747 +0x47:  mov    %eax,(%esp)
0816674a +0x4a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816674f +0x4f:  leave
08166750 +0x50:  ret
08166751 +0x51:  nop
```

## 反编译 C

```c
// HeroMissionEvent::EndEvent @ 0x8166700

/* HeroMissionEvent::EndEvent() */

void __thiscall HeroMissionEvent::EndEvent(HeroMissionEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void HeroMissionEvent::EndEvent()",0x20d,0);
  cMyTrace::operator()(local_1c,"[HeroMission] End!");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
