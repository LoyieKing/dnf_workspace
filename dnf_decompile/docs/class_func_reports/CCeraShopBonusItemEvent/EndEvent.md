# EndEvent

`_ZN23CCeraShopBonusItemEvent8EndEventEv`

`CCeraShopBonusItemEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a406` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a406  _ZN23CCeraShopBonusItemEvent8EndEventEv
#           CCeraShopBonusItemEvent::EndEvent()
# range [0x0810a406, 0x0810a456]
0810a406 +0x00:  push   %ebp
0810a407 +0x01:  mov    %esp,%ebp
0810a409 +0x03:  sub    $0x28,%esp
0810a40c +0x06:  mov    0x8(%ebp),%eax
0810a40f +0x09:  movl   $0x0,0x4(%esp)
0810a417 +0x11:  mov    %eax,(%esp)
0810a41a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a41f +0x19:  movl   $0x0,0xc(%esp)
0810a427 +0x21:  movl   $0x26,0x8(%esp)
0810a42f +0x29:  movl   $&_ZZN23CCeraShopBonusItemEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0810a437 +0x31:  lea    -0x18(%ebp),%eax
0810a43a +0x34:  mov    %eax,(%esp)
0810a43d +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a442 +0x3c:  movl   $"Cera shop bonus item event End",0x4(%esp)
0810a44a +0x44:  lea    -0x18(%ebp),%eax
0810a44d +0x47:  mov    %eax,(%esp)
0810a450 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a455 +0x4f:  leave
0810a456 +0x50:  ret
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::EndEvent @ 0x810a406

/* CCeraShopBonusItemEvent::EndEvent() */

void __thiscall CCeraShopBonusItemEvent::EndEvent(CCeraShopBonusItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x26,0);
  cMyTrace::operator()(local_1c,"Cera shop bonus item event End");
  return;
}
```
