# CountryCode

`_GLOBAL__I__ZN11CountryCodeC2Ev`

`global constructors keyed to CountryCode::CountryCode()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CountryCode` | `0x08ad3401` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3401  _GLOBAL__I__ZN11CountryCodeC2Ev
#           global constructors keyed to CountryCode::CountryCode()
# range [0x08ad3401, 0x08ad341f]
08ad3401 +0x00:  push   %ebp
08ad3402 +0x01:  mov    %esp,%ebp
08ad3404 +0x03:  sub    $0x8,%esp
08ad3407 +0x06:  movl   $0xffff,0x4(%esp)
08ad340f +0x0e:  movl   $0x1,(%esp)
08ad3416 +0x15:  call   08ad3356 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ad341b +0x1a:  leave
08ad341c +0x1b:  ret
08ad341d +0x1c:  nop
08ad341e +0x1d:  nop
08ad341f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8ad3401

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__I__ZN11CountryCodeC2Ev(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
