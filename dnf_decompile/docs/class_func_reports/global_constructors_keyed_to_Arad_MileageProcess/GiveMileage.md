# GiveMileage

`_GLOBAL__I__ZN19Arad_MileageProcess11GiveMileageEP5CUserii`

`global constructors keyed to Arad_MileageProcess::GiveMileage(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Arad_MileageProcess` | `0x0819e689` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e689  _GLOBAL__I__ZN19Arad_MileageProcess11GiveMileageEP5CUserii
#           global constructors keyed to Arad_MileageProcess::GiveMileage(CUser*, int, int)
# range [0x0819e689, 0x0819e6b3]
0819e689 +0x00:  push   %ebp
0819e68a +0x01:  mov    %esp,%ebp
0819e68c +0x03:  sub    $0x18,%esp
0819e68f +0x06:  movl   $0xffff,0x4(%esp)
0819e697 +0x0e:  movl   $0x1,(%esp)
0819e69e +0x15:  call   0819e649 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0819e6a3 +0x1a:  leave
0819e6a4 +0x1b:  ret
0819e6a5 +0x1c:  nop
0819e6a6 +0x1d:  push   %ebp
0819e6a7 +0x1e:  mov    %esp,%ebp
0819e6a9 +0x20:  mov    0x8(%ebp),%eax
0819e6ac +0x23:  add    $0x70,%eax
0819e6af +0x26:  pop    %ebp
0819e6b0 +0x27:  ret
0819e6b1 +0x28:  nop
0819e6b2 +0x29:  nop
0819e6b3 +0x2a:  nop
```

## 反编译 C

```c
// <global>::global @ 0x819e689

/* Arad_MileageProcess::GiveMileage(CUser*, int, int) */

void Arad_MileageProcess::_GLOBAL__I_GiveMileage(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
