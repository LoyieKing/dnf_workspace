# checkValidPassword_Jpn

`_GLOBAL__I__ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE`

`global constructors keyed to WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CSimpleSSO` | `0x081b26e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b26e8  _GLOBAL__I__ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE
#           global constructors keyed to WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)
# range [0x081b26e8, 0x081b2703]
081b26e8 +0x00:  push   %ebp
081b26e9 +0x01:  mov    %esp,%ebp
081b26eb +0x03:  sub    $0x18,%esp
081b26ee +0x06:  movl   $0xffff,0x4(%esp)
081b26f6 +0x0e:  movl   $0x1,(%esp)
081b26fd +0x15:  call   081b26a8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b2702 +0x1a:  leave
081b2703 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81b26e8

/* WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*,
   WongWork::CSimpleSSO::stOutputData_t&) */

void WongWork::CSimpleSSO::_GLOBAL__I_checkValidPassword_Jpn(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
