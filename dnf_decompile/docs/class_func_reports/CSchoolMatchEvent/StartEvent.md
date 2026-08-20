# StartEvent

`_ZN17CSchoolMatchEvent10StartEventEv`

`CSchoolMatchEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x08273f9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273f9a  _ZN17CSchoolMatchEvent10StartEventEv
#           CSchoolMatchEvent::StartEvent()
# range [0x08273f9a, 0x08273feb]
08273f9a +0x00:  push   %ebp
08273f9b +0x01:  mov    %esp,%ebp
08273f9d +0x03:  sub    $0x28,%esp
08273fa0 +0x06:  mov    0x8(%ebp),%eax
08273fa3 +0x09:  movl   $0x1,0x4(%esp)
08273fab +0x11:  mov    %eax,(%esp)
08273fae +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08273fb3 +0x19:  movl   $0x0,0xc(%esp)
08273fbb +0x21:  movl   $0x15,0x8(%esp)
08273fc3 +0x29:  movl   $&_ZZN17CSchoolMatchEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08273fcb +0x31:  lea    -0x18(%ebp),%eax
08273fce +0x34:  mov    %eax,(%esp)
08273fd1 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08273fd6 +0x3c:  movl   $"CSchoolMatchEvent Start!",0x4(%esp)
08273fde +0x44:  lea    -0x18(%ebp),%eax
08273fe1 +0x47:  mov    %eax,(%esp)
08273fe4 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08273fe9 +0x4f:  leave
08273fea +0x50:  ret
08273feb +0x51:  nop
```

## 反编译 C

```c
// CSchoolMatchEvent::StartEvent @ 0x8273f9a

/* CSchoolMatchEvent::StartEvent() */

void __thiscall CSchoolMatchEvent::StartEvent(CSchoolMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CSchoolMatchEvent::StartEvent()",0x15,0);
  cMyTrace::operator()(local_1c,"CSchoolMatchEvent Start!");
  return;
}
```
