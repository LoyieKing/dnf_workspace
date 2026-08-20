# CExpDoubleEvent

`_ZN15CExpDoubleEventC1Ev`

`CExpDoubleEvent::CExpDoubleEvent()`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849ac44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ac44  _ZN15CExpDoubleEventC1Ev
#           CExpDoubleEvent::CExpDoubleEvent()
# range [0x0849ac44, 0x0849ac69]
0849ac44 +0x00:  push   %ebp
0849ac45 +0x01:  mov    %esp,%ebp
0849ac47 +0x03:  sub    $0x18,%esp
0849ac4a +0x06:  mov    0x8(%ebp),%eax
0849ac4d +0x09:  mov    %eax,(%esp)
0849ac50 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0849ac55 +0x11:  mov    0x8(%ebp),%eax
0849ac58 +0x14:  movl   $&_ZTV15CExpDoubleEvent+0x8,(%eax)
0849ac5e +0x1a:  mov    0x8(%ebp),%eax
0849ac61 +0x1d:  movl   $0x64,0xc(%eax)
0849ac68 +0x24:  leave
0849ac69 +0x25:  ret
```

## 反编译 C

```c
// CExpDoubleEvent::CExpDoubleEvent @ 0x849ac44

/* CExpDoubleEvent::CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::CExpDoubleEvent(CExpDoubleEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CExpDoubleEvent_08c7b948;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}
```
