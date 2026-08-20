# Arad_MomijiEvent

`_ZN16Arad_MomijiEventC1Ev`

`Arad_MomijiEvent::Arad_MomijiEvent()`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e738` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e738  _ZN16Arad_MomijiEventC1Ev
#           Arad_MomijiEvent::Arad_MomijiEvent()
# range [0x0819e738, 0x0819e753]
0819e738 +0x00:  push   %ebp
0819e739 +0x01:  mov    %esp,%ebp
0819e73b +0x03:  sub    $0x18,%esp
0819e73e +0x06:  mov    0x8(%ebp),%eax
0819e741 +0x09:  mov    %eax,(%esp)
0819e744 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0819e749 +0x11:  mov    0x8(%ebp),%eax
0819e74c +0x14:  movl   $&_ZTV16Arad_MomijiEvent+0x8,(%eax)
0819e752 +0x1a:  leave
0819e753 +0x1b:  ret
```

## 反编译 C

```c
// Arad_MomijiEvent::Arad_MomijiEvent @ 0x819e738

/* Arad_MomijiEvent::Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__Arad_MomijiEvent_08ba8c08;
  return;
}
```
