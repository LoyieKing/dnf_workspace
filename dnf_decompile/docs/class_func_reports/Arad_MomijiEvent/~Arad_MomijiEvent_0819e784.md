# ~Arad_MomijiEvent

`_ZN16Arad_MomijiEventD0Ev`

`Arad_MomijiEvent::~Arad_MomijiEvent()`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e784  _ZN16Arad_MomijiEventD0Ev
#           Arad_MomijiEvent::~Arad_MomijiEvent()
# range [0x0819e784, 0x0819e7a1]
0819e784 +0x00:  push   %ebp
0819e785 +0x01:  mov    %esp,%ebp
0819e787 +0x03:  sub    $0x18,%esp
0819e78a +0x06:  mov    0x8(%ebp),%eax
0819e78d +0x09:  mov    %eax,(%esp)
0819e790 +0x0c:  call   0819e754 <_ZN16Arad_MomijiEventD1Ev>  ; Arad_MomijiEvent::~Arad_MomijiEvent()
0819e795 +0x11:  mov    0x8(%ebp),%eax
0819e798 +0x14:  mov    %eax,(%esp)
0819e79b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819e7a0 +0x1c:  leave
0819e7a1 +0x1d:  ret
```

## 反编译 C

```c
// Arad_MomijiEvent::~Arad_MomijiEvent @ 0x819e784

/* Arad_MomijiEvent::~Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::~Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  ~Arad_MomijiEvent(this);
  operator_delete(this);
  return;
}
```
