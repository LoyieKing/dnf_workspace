# EndEvent

`_ZN20OneADayItemShopEvent8EndEventEv`

`OneADayItemShopEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba0ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba0ae  _ZN20OneADayItemShopEvent8EndEventEv
#           OneADayItemShopEvent::EndEvent()
# range [0x081ba0ae, 0x081ba0ff]
081ba0ae +0x00:  push   %ebp
081ba0af +0x01:  mov    %esp,%ebp
081ba0b1 +0x03:  sub    $0x28,%esp
081ba0b4 +0x06:  mov    0x8(%ebp),%eax
081ba0b7 +0x09:  movl   $0x0,0x4(%esp)
081ba0bf +0x11:  mov    %eax,(%esp)
081ba0c2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081ba0c7 +0x19:  movl   $0x0,0xc(%esp)
081ba0cf +0x21:  movl   $0x2d,0x8(%esp)
081ba0d7 +0x29:  movl   $&_ZZN20OneADayItemShopEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081ba0df +0x31:  lea    -0x18(%ebp),%eax
081ba0e2 +0x34:  mov    %eax,(%esp)
081ba0e5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ba0ea +0x3c:  movl   $"OneADayItemShopEvent Event End!",0x4(%esp)
081ba0f2 +0x44:  lea    -0x18(%ebp),%eax
081ba0f5 +0x47:  mov    %eax,(%esp)
081ba0f8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ba0fd +0x4f:  leave
081ba0fe +0x50:  ret
081ba0ff +0x51:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::EndEvent @ 0x81ba0ae

/* OneADayItemShopEvent::EndEvent() */

void __thiscall OneADayItemShopEvent::EndEvent(OneADayItemShopEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void OneADayItemShopEvent::EndEvent()",0x2d,0);
  cMyTrace::operator()(local_1c,"OneADayItemShopEvent Event End!");
  return;
}
```
