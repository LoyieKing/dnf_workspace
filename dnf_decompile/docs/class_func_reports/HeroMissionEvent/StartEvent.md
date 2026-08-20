# StartEvent

`_ZN16HeroMissionEvent10StartEventEv`

`HeroMissionEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x0816664a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816664a  _ZN16HeroMissionEvent10StartEventEv
#           HeroMissionEvent::StartEvent()
# range [0x0816664a, 0x081666e5]
0816664a +0x00:  push   %ebp
0816664b +0x01:  mov    %esp,%ebp
0816664d +0x03:  sub    $0x38,%esp
08166650 +0x06:  mov    0x8(%ebp),%eax
08166653 +0x09:  mov    %eax,(%esp)
08166656 +0x0c:  call   08167ac8 <_ZN16HeroMissionEvent10loadScriptEv>  ; HeroMissionEvent::loadScript()
0816665b +0x11:  xor    $0x1,%eax
0816665e +0x14:  test   %al,%al
08166660 +0x16:  je     0816669a <+0x50>
08166662 +0x18:  movl   $0x5,0xc(%esp)
0816666a +0x20:  movl   $0x1fe,0x8(%esp)
08166672 +0x28:  movl   $&_ZZN16HeroMissionEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816667a +0x30:  lea    -0x28(%ebp),%eax
0816667d +0x33:  mov    %eax,(%esp)
08166680 +0x36:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08166685 +0x3b:  movl   $"[HeroMission] Script load fail!!!",0x4(%esp)
0816668d +0x43:  lea    -0x28(%ebp),%eax
08166690 +0x46:  mov    %eax,(%esp)
08166693 +0x49:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08166698 +0x4e:  jmp    081666e3 <+0x99>
0816669a +0x50:  mov    0x8(%ebp),%eax
0816669d +0x53:  movl   $0x1,0x4(%esp)
081666a5 +0x5b:  mov    %eax,(%esp)
081666a8 +0x5e:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081666ad +0x63:  movl   $0x0,0xc(%esp)
081666b5 +0x6b:  movl   $0x203,0x8(%esp)
081666bd +0x73:  movl   $&_ZZN16HeroMissionEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081666c5 +0x7b:  lea    -0x18(%ebp),%eax
081666c8 +0x7e:  mov    %eax,(%esp)
081666cb +0x81:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081666d0 +0x86:  movl   $"[HeroMission] Start!",0x4(%esp)
081666d8 +0x8e:  lea    -0x18(%ebp),%eax
081666db +0x91:  mov    %eax,(%esp)
081666de +0x94:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081666e3 +0x99:  leave
081666e4 +0x9a:  ret
081666e5 +0x9b:  nop
```

## 反编译 C

```c
// HeroMissionEvent::StartEvent @ 0x816664a

/* HeroMissionEvent::StartEvent() */

void __thiscall HeroMissionEvent::StartEvent(HeroMissionEvent *this)

{
  char cVar1;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  cVar1 = loadScript(this);
  if (cVar1 == '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    cMyTrace::cMyTrace(local_1c,"virtual void HeroMissionEvent::StartEvent()",0x203,0);
    cMyTrace::operator()(local_1c,"[HeroMission] Start!");
  }
  else {
    cMyTrace::cMyTrace(local_2c,"virtual void HeroMissionEvent::StartEvent()",0x1fe,5);
    cMyTrace::operator()(local_2c,"[HeroMission] Script load fail!!!");
  }
  return;
}
```
