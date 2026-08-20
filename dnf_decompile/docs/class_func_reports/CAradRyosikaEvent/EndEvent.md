# EndEvent

`_ZN17CAradRyosikaEvent8EndEventEv`

`CAradRyosikaEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0fbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0fbe  _ZN17CAradRyosikaEvent8EndEventEv
#           CAradRyosikaEvent::EndEvent()
# range [0x081a0fbe, 0x081a0fd9]
081a0fbe +0x00:  push   %ebp
081a0fbf +0x01:  mov    %esp,%ebp
081a0fc1 +0x03:  sub    $0x18,%esp
081a0fc4 +0x06:  mov    0x8(%ebp),%eax
081a0fc7 +0x09:  movl   $0x0,0x4(%esp)
081a0fcf +0x11:  mov    %eax,(%esp)
081a0fd2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081a0fd7 +0x19:  leave
081a0fd8 +0x1a:  ret
081a0fd9 +0x1b:  nop
```

## 反编译 C

```c
// CAradRyosikaEvent::EndEvent @ 0x81a0fbe

/* CAradRyosikaEvent::EndEvent() */

void __thiscall CAradRyosikaEvent::EndEvent(CAradRyosikaEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
