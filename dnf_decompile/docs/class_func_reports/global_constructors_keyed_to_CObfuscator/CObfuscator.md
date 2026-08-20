# CObfuscator

`_GLOBAL__I__ZN11CObfuscatorC2Ev`

`global constructors keyed to CObfuscator::CObfuscator()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CObfuscator` | `0x08585f03` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585f03  _GLOBAL__I__ZN11CObfuscatorC2Ev
#           global constructors keyed to CObfuscator::CObfuscator()
# range [0x08585f03, 0x08585f1f]
08585f03 +0x00:  push   %ebp
08585f04 +0x01:  mov    %esp,%ebp
08585f06 +0x03:  sub    $0x18,%esp
08585f09 +0x06:  movl   $0xffff,0x4(%esp)
08585f11 +0x0e:  movl   $0x1,(%esp)
08585f18 +0x15:  call   08585ec3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08585f1d +0x1a:  leave
08585f1e +0x1b:  ret
08585f1f +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8585f03

/* CObfuscator::CObfuscator() */

void CObfuscator::_GLOBAL__I_CObfuscator(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
