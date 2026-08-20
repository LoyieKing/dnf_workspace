# StartEvent

`_ZN22CCoinEventOnCharCreate10StartEventE10Word_Param`

`CCoinEventOnCharCreate::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810a9e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a9e4  _ZN22CCoinEventOnCharCreate10StartEventE10Word_Param
#           CCoinEventOnCharCreate::StartEvent(Word_Param)
# range [0x0810a9e4, 0x0810aa41]
0810a9e4 +0x00:  push   %ebp
0810a9e5 +0x01:  mov    %esp,%ebp
0810a9e7 +0x03:  sub    $0x28,%esp
0810a9ea +0x06:  mov    0x8(%ebp),%eax
0810a9ed +0x09:  movl   $0x1,0x4(%esp)
0810a9f5 +0x11:  mov    %eax,(%esp)
0810a9f8 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a9fd +0x19:  movzwl 0xc(%ebp),%eax
0810aa01 +0x1d:  movzwl %ax,%edx
0810aa04 +0x20:  mov    0x8(%ebp),%eax
0810aa07 +0x23:  mov    %edx,0xc(%eax)
0810aa0a +0x26:  movl   $0x0,0xc(%esp)
0810aa12 +0x2e:  movl   $0x1c,0x8(%esp)
0810aa1a +0x36:  movl   $&_ZZN22CCoinEventOnCharCreate10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810aa22 +0x3e:  lea    -0x18(%ebp),%eax
0810aa25 +0x41:  mov    %eax,(%esp)
0810aa28 +0x44:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810aa2d +0x49:  movl   $"Coin Event On Char Create Start!",0x4(%esp)
0810aa35 +0x51:  lea    -0x18(%ebp),%eax
0810aa38 +0x54:  mov    %eax,(%esp)
0810aa3b +0x57:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810aa40 +0x5c:  leave
0810aa41 +0x5d:  ret
```

## 反编译 C

```c
// CCoinEventOnCharCreate::StartEvent @ 0x810a9e4

/* CCoinEventOnCharCreate::StartEvent(Word_Param) */

void __thiscall CCoinEventOnCharCreate::StartEvent(CCoinEventOnCharCreate *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1c,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create Start!");
  return;
}
```
