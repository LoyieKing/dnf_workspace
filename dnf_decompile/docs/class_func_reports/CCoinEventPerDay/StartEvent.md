# StartEvent

`_ZN16CCoinEventPerDay10StartEventEv`

`CCoinEventPerDay::StartEvent()`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ab96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ab96  _ZN16CCoinEventPerDay10StartEventEv
#           CCoinEventPerDay::StartEvent()
# range [0x0810ab96, 0x0810ac03]
0810ab96 +0x00:  push   %ebp
0810ab97 +0x01:  mov    %esp,%ebp
0810ab99 +0x03:  sub    $0x28,%esp
0810ab9c +0x06:  mov    0x8(%ebp),%eax
0810ab9f +0x09:  movl   $0x1,0x4(%esp)
0810aba7 +0x11:  mov    %eax,(%esp)
0810abaa +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810abaf +0x19:  mov    0x8(%ebp),%eax
0810abb2 +0x1c:  movb   $0x1,0x9(%eax)
0810abb6 +0x20:  mov    0x8(%ebp),%eax
0810abb9 +0x23:  movb   $0x1,0xa(%eax)
0810abbd +0x27:  mov    0x8(%ebp),%eax
0810abc0 +0x2a:  movb   $0x1,0xb(%eax)
0810abc4 +0x2e:  mov    0x8(%ebp),%eax
0810abc7 +0x31:  movb   $0x1,0xc(%eax)
0810abcb +0x35:  movl   $0x0,0xc(%esp)
0810abd3 +0x3d:  movl   $0x38,0x8(%esp)
0810abdb +0x45:  movl   $&_ZZN16CCoinEventPerDay10StartEventEvE12__FUNCTION__,0x4(%esp)
0810abe3 +0x4d:  lea    -0x18(%ebp),%eax
0810abe6 +0x50:  mov    %eax,(%esp)
0810abe9 +0x53:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810abee +0x58:  movl   $"Coin Event Per Day Start!",0x4(%esp)
0810abf6 +0x60:  lea    -0x18(%ebp),%eax
0810abf9 +0x63:  mov    %eax,(%esp)
0810abfc +0x66:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810ac01 +0x6b:  leave
0810ac02 +0x6c:  ret
0810ac03 +0x6d:  nop
```

## 反编译 C

```c
// CCoinEventPerDay::StartEvent @ 0x810ab96

/* CCoinEventPerDay::StartEvent() */

void __thiscall CCoinEventPerDay::StartEvent(CCoinEventPerDay *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x38,0);
  cMyTrace::operator()(local_1c,"Coin Event Per Day Start!");
  return;
}
```
