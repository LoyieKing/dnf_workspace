# SeedRand

`_ZN10Encryption8SeedRandERj`

`Encryption::SeedRand(unsigned int&)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848d51a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d51a  _ZN10Encryption8SeedRandERj
#           Encryption::SeedRand(unsigned int&)
# range [0x0848d51a, 0x0848d5af]
0848d51a +0x00:  push   %ebp
0848d51b +0x01:  mov    %esp,%ebp
0848d51d +0x03:  sub    $0x10,%esp
0848d520 +0x06:  mov    0x8(%ebp),%eax
0848d523 +0x09:  mov    (%eax),%eax
0848d525 +0x0b:  mov    %eax,-0x8(%ebp)
0848d528 +0x0e:  mov    -0x8(%ebp),%eax
0848d52b +0x11:  imul   $0x41c64e6d,%eax,%eax
0848d531 +0x17:  mov    %eax,-0x8(%ebp)
0848d534 +0x1a:  addl   $0x3039,-0x8(%ebp)
0848d53b +0x21:  mov    -0x8(%ebp),%eax
0848d53e +0x24:  shr    $0x10,%eax
0848d541 +0x27:  and    $0x7ff,%eax
0848d546 +0x2c:  mov    %eax,-0x4(%ebp)
0848d549 +0x2f:  mov    -0x8(%ebp),%eax
0848d54c +0x32:  imul   $0x41c64e6d,%eax,%eax
0848d552 +0x38:  mov    %eax,-0x8(%ebp)
0848d555 +0x3b:  addl   $0x3039,-0x8(%ebp)
0848d55c +0x42:  shll   $0xa,-0x4(%ebp)
0848d560 +0x46:  mov    -0x8(%ebp),%eax
0848d563 +0x49:  shr    $0x10,%eax
0848d566 +0x4c:  mov    %eax,%edx
0848d568 +0x4e:  and    $0x3ff,%edx
0848d56e +0x54:  mov    -0x4(%ebp),%eax
0848d571 +0x57:  xor    %edx,%eax
0848d573 +0x59:  mov    %eax,-0x4(%ebp)
0848d576 +0x5c:  mov    -0x8(%ebp),%eax
0848d579 +0x5f:  imul   $0x41c64e6d,%eax,%eax
0848d57f +0x65:  mov    %eax,-0x8(%ebp)
0848d582 +0x68:  addl   $0x3039,-0x8(%ebp)
0848d589 +0x6f:  shll   $0xa,-0x4(%ebp)
0848d58d +0x73:  mov    -0x8(%ebp),%eax
0848d590 +0x76:  shr    $0x10,%eax
0848d593 +0x79:  mov    %eax,%edx
0848d595 +0x7b:  and    $0x3ff,%edx
0848d59b +0x81:  mov    -0x4(%ebp),%eax
0848d59e +0x84:  xor    %edx,%eax
0848d5a0 +0x86:  mov    %eax,-0x4(%ebp)
0848d5a3 +0x89:  mov    0x8(%ebp),%eax
0848d5a6 +0x8c:  mov    -0x8(%ebp),%edx
0848d5a9 +0x8f:  mov    %edx,(%eax)
0848d5ab +0x91:  mov    -0x4(%ebp),%eax
0848d5ae +0x94:  leave
0848d5af +0x95:  ret
```

## 反编译 C

```c
// Encryption::SeedRand @ 0x848d51a

/* Encryption::SeedRand(unsigned int&) */

uint Encryption::SeedRand(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1 * 0x41c64e6d + 0x3039;
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  uVar3 = uVar2 * 0x41c64e6d + 0x3039;
  *param_1 = uVar3;
  return ((uVar1 >> 0x10 & 0x7ff) << 10 ^ uVar2 >> 0x10 & 0x3ff) << 10 ^ uVar3 >> 0x10 & 0x3ff;
}
```
