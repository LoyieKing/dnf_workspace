# GetQuarterOfYear

`_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc`

`global constructors keyed to ARAD::GetQuarterOfYear(char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD` | `0x0819edc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819edc4  _GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc
#           global constructors keyed to ARAD::GetQuarterOfYear(char*)
# range [0x0819edc4, 0x0819ee57]
0819edc4 +0x00:  push   %ebp
0819edc5 +0x01:  mov    %esp,%ebp
0819edc7 +0x03:  sub    $0x18,%esp
0819edca +0x06:  movl   $0xffff,0x4(%esp)
0819edd2 +0x0e:  movl   $0x1,(%esp)
0819edd9 +0x15:  call   0819ed84 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0819edde +0x1a:  leave
0819eddf +0x1b:  ret
0819ede0 +0x1c:  push   %ebp
0819ede1 +0x1d:  mov    %esp,%ebp
0819ede3 +0x1f:  mov    0x8(%ebp),%eax
0819ede6 +0x22:  mov    0xb434(%eax),%eax
0819edec +0x28:  test   %eax,%eax
0819edee +0x2a:  jne    0819ee04 <+0x40>
0819edf0 +0x2c:  mov    0x8(%ebp),%eax
0819edf3 +0x2f:  mov    0xb438(%eax),%eax
0819edf9 +0x35:  test   %eax,%eax
0819edfb +0x37:  jne    0819ee04 <+0x40>
0819edfd +0x39:  mov    $0x1,%eax
0819ee02 +0x3e:  jmp    0819ee2c <+0x68>
0819ee04 +0x40:  mov    0x8(%ebp),%eax
0819ee07 +0x43:  mov    0xb434(%eax),%eax
0819ee0d +0x49:  cmp    0xc(%ebp),%eax
0819ee10 +0x4c:  jg     0819ee27 <+0x63>
0819ee12 +0x4e:  mov    0x8(%ebp),%eax
0819ee15 +0x51:  mov    0xb438(%eax),%eax
0819ee1b +0x57:  cmp    0xc(%ebp),%eax
0819ee1e +0x5a:  jl     0819ee27 <+0x63>
0819ee20 +0x5c:  mov    $0x1,%eax
0819ee25 +0x61:  jmp    0819ee2c <+0x68>
0819ee27 +0x63:  mov    $0x0,%eax
0819ee2c +0x68:  pop    %ebp
0819ee2d +0x69:  ret
0819ee2e +0x6a:  push   %ebp
0819ee2f +0x6b:  mov    %esp,%ebp
0819ee31 +0x6d:  mov    0x8(%ebp),%eax
0819ee34 +0x70:  mov    0xb444(%eax),%eax
0819ee3a +0x76:  pop    %ebp
0819ee3b +0x77:  ret
0819ee3c +0x78:  push   %ebp
0819ee3d +0x79:  mov    %esp,%ebp
0819ee3f +0x7b:  mov    0x8(%ebp),%eax
0819ee42 +0x7e:  mov    0xb448(%eax),%eax
0819ee48 +0x84:  pop    %ebp
0819ee49 +0x85:  ret
0819ee4a +0x86:  push   %ebp
0819ee4b +0x87:  mov    %esp,%ebp
0819ee4d +0x89:  mov    0x8(%ebp),%eax
0819ee50 +0x8c:  mov    0x2c(%eax),%eax
0819ee53 +0x8f:  pop    %ebp
0819ee54 +0x90:  ret
0819ee55 +0x91:  nop
0819ee56 +0x92:  nop
0819ee57 +0x93:  nop
```

## 反编译 C

```c
// <global>::global @ 0x819edc4

/* ARAD::GetQuarterOfYear(char*) */

void ARAD::_GLOBAL__I_GetQuarterOfYear(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
