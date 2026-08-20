# EndEvent

`_ZN17CSchoolMatchEvent8EndEventEv`

`CSchoolMatchEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x0827423c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827423c  _ZN17CSchoolMatchEvent8EndEventEv
#           CSchoolMatchEvent::EndEvent()
# range [0x0827423c, 0x082742a7]
0827423c +0x00:  push   %ebp
0827423d +0x01:  mov    %esp,%ebp
0827423f +0x03:  sub    $0x28,%esp
08274242 +0x06:  mov    0x8(%ebp),%eax
08274245 +0x09:  movl   $0x0,0x4(%esp)
0827424d +0x11:  mov    %eax,(%esp)
08274250 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08274255 +0x19:  movl   $0x0,(%esp)
0827425c +0x20:  call   0855d07e <_ZN12CLeagueMatch12SetMatchAbleEb>  ; CLeagueMatch::SetMatchAble(bool)
08274261 +0x25:  movl   $0x0,0xc(%esp)
08274269 +0x2d:  movl   $0x3f,0x8(%esp)
08274271 +0x35:  movl   $&_ZZN17CSchoolMatchEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08274279 +0x3d:  lea    -0x18(%ebp),%eax
0827427c +0x40:  mov    %eax,(%esp)
0827427f +0x43:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08274284 +0x48:  movl   $"CSchoolMatchEvent End!",0x4(%esp)
0827428c +0x50:  lea    -0x18(%ebp),%eax
0827428f +0x53:  mov    %eax,(%esp)
08274292 +0x56:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08274297 +0x5b:  mov    0x8(%ebp),%eax
0827429a +0x5e:  add    $0xc,%eax
0827429d +0x61:  mov    %eax,(%esp)
082742a0 +0x64:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
082742a5 +0x69:  leave
082742a6 +0x6a:  ret
082742a7 +0x6b:  nop
```

## 反编译 C

```c
// CSchoolMatchEvent::EndEvent @ 0x827423c

/* CSchoolMatchEvent::EndEvent() */

void __thiscall CSchoolMatchEvent::EndEvent(CSchoolMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  CLeagueMatch::SetMatchAble(false);
  cMyTrace::cMyTrace(local_1c,"virtual void CSchoolMatchEvent::EndEvent()",0x3f,0);
  cMyTrace::operator()(local_1c,"CSchoolMatchEvent End!");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}
```
