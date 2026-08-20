# CTrcOnOffEvent

`_ZN14CTrcOnOffEventC1Ev`

`CTrcOnOffEvent::CTrcOnOffEvent()`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285a44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285a44  _ZN14CTrcOnOffEventC1Ev
#           CTrcOnOffEvent::CTrcOnOffEvent()
# range [0x08285a44, 0x08285a5f]
08285a44 +0x00:  push   %ebp
08285a45 +0x01:  mov    %esp,%ebp
08285a47 +0x03:  sub    $0x18,%esp
08285a4a +0x06:  mov    0x8(%ebp),%eax
08285a4d +0x09:  mov    %eax,(%esp)
08285a50 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08285a55 +0x11:  mov    0x8(%ebp),%eax
08285a58 +0x14:  movl   $&_ZTV14CTrcOnOffEvent+0x8,(%eax)
08285a5e +0x1a:  leave
08285a5f +0x1b:  ret
```

## 反编译 C

```c
// CTrcOnOffEvent::CTrcOnOffEvent @ 0x8285a44

/* CTrcOnOffEvent::CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CTrcOnOffEvent_08c0e428;
  return;
}
```
