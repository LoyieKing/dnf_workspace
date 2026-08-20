# crc32

`_ZN10Encryption5crc32EjPKcj`

`Encryption::crc32(unsigned int, char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848d472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d472  _ZN10Encryption5crc32EjPKcj
#           Encryption::crc32(unsigned int, char const*, unsigned int)
# range [0x0848d472, 0x0848d4c7]
0848d472 +0x00:  push   %ebp
0848d473 +0x01:  mov    %esp,%ebp
0848d475 +0x03:  mov    &_ZN10Encryption9crc_tableE+0x3fc,%eax
0848d47a +0x08:  test   %eax,%eax
0848d47c +0x0a:  jne    0848d483 <+0x11>
0848d47e +0x0c:  call   0848d3e4 <_ZN10Encryption14make_crc_tableEv>  ; Encryption::make_crc_table()
0848d483 +0x11:  notl   0x8(%ebp)
0848d486 +0x14:  jmp    0848d4b1 <+0x3f>
0848d488 +0x16:  mov    0x8(%ebp),%eax
0848d48b +0x19:  mov    %eax,%edx
0848d48d +0x1b:  shr    $0x8,%edx
0848d490 +0x1e:  mov    0xc(%ebp),%eax
0848d493 +0x21:  movzbl (%eax),%eax
0848d496 +0x24:  movsbl %al,%eax
0848d499 +0x27:  xor    0x8(%ebp),%eax
0848d49c +0x2a:  and    $0xff,%eax
0848d4a1 +0x2f:  mov    &_ZN10Encryption9crc_tableE(,%eax,4),%eax
0848d4a8 +0x36:  xor    %edx,%eax
0848d4aa +0x38:  mov    %eax,0x8(%ebp)
0848d4ad +0x3b:  addl   $0x1,0xc(%ebp)
0848d4b1 +0x3f:  cmpl   $0x0,0x10(%ebp)
0848d4b5 +0x43:  setne  %al
0848d4b8 +0x46:  subl   $0x1,0x10(%ebp)
0848d4bc +0x4a:  test   %al,%al
0848d4be +0x4c:  jne    0848d488 <+0x16>
0848d4c0 +0x4e:  mov    0x8(%ebp),%eax
0848d4c3 +0x51:  not    %eax
0848d4c5 +0x53:  pop    %ebp
0848d4c6 +0x54:  ret
0848d4c7 +0x55:  nop
```

## 反编译 C

```c
// Encryption::crc32 @ 0x848d472

/* Encryption::crc32(unsigned int, char const*, unsigned int) */

uint Encryption::crc32(uint param_1,char *param_2,uint param_3)

{
  bool bVar1;
  
  if (crc_table._1020_4_ == 0) {
    make_crc_table();
  }
  param_1 = ~param_1;
  while (bVar1 = param_3 != 0, param_3 = param_3 - 1, bVar1) {
    param_1 = *(uint *)(crc_table + (((int)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}
```
