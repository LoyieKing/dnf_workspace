# StartEvent

`_ZN20OneADayItemShopEvent10StartEventEv`

`OneADayItemShopEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba01e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba01e  _ZN20OneADayItemShopEvent10StartEventEv
#           OneADayItemShopEvent::StartEvent()
# range [0x081ba01e, 0x081ba039]
081ba01e +0x00:  push   %ebp
081ba01f +0x01:  mov    %esp,%ebp
081ba021 +0x03:  sub    $0x18,%esp
081ba024 +0x06:  mov    0x8(%ebp),%eax
081ba027 +0x09:  movl   $0x1,0x4(%esp)
081ba02f +0x11:  mov    %eax,(%esp)
081ba032 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081ba037 +0x19:  leave
081ba038 +0x1a:  ret
081ba039 +0x1b:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::StartEvent @ 0x81ba01e

/* OneADayItemShopEvent::StartEvent() */

void __thiscall OneADayItemShopEvent::StartEvent(OneADayItemShopEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```
