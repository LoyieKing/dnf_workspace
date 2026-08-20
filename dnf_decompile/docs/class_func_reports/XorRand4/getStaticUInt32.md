# getStaticUInt32

`_ZN8XorRand415getStaticUInt32Ej`

`XorRand4::getStaticUInt32(unsigned int)`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfb78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfb78  _ZN8XorRand415getStaticUInt32Ej
#           XorRand4::getStaticUInt32(unsigned int)
# range [0x08adfb78, 0x08adfbd5]
08adfb78 +0x00:  push   %ebp
08adfb79 +0x01:  mov    %esp,%ebp
08adfb7b +0x03:  sub    $0x10,%esp
08adfb7e +0x06:  lea    0x8(%ebp),%eax
08adfb81 +0x09:  mov    %eax,-0x4(%ebp)
08adfb84 +0x0c:  mov    -0x4(%ebp),%eax
08adfb87 +0x0f:  movzbl (%eax),%eax
08adfb8a +0x12:  movzbl %al,%eax
08adfb8d +0x15:  mov    &_ZN8XorRand49ms_table0E(,%eax,4),%edx
08adfb94 +0x1c:  mov    -0x4(%ebp),%eax
08adfb97 +0x1f:  add    $0x1,%eax
08adfb9a +0x22:  movzbl (%eax),%eax
08adfb9d +0x25:  movzbl %al,%eax
08adfba0 +0x28:  mov    &_ZN8XorRand49ms_table1E(,%eax,4),%eax
08adfba7 +0x2f:  xor    %eax,%edx
08adfba9 +0x31:  mov    -0x4(%ebp),%eax
08adfbac +0x34:  add    $0x2,%eax
08adfbaf +0x37:  movzbl (%eax),%eax
08adfbb2 +0x3a:  movzbl %al,%eax
08adfbb5 +0x3d:  mov    &_ZN8XorRand49ms_table2E(,%eax,4),%eax
08adfbbc +0x44:  xor    %eax,%edx
08adfbbe +0x46:  mov    -0x4(%ebp),%eax
08adfbc1 +0x49:  add    $0x3,%eax
08adfbc4 +0x4c:  movzbl (%eax),%eax
08adfbc7 +0x4f:  movzbl %al,%eax
08adfbca +0x52:  mov    &_ZN8XorRand49ms_table3E(,%eax,4),%eax
08adfbd1 +0x59:  xor    %edx,%eax
08adfbd3 +0x5b:  leave
08adfbd4 +0x5c:  ret
08adfbd5 +0x5d:  nop
```

## 反编译 C

```c
// XorRand4::getStaticUInt32 @ 0x8adfb78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32 XorRand4::getStaticUInt32(uint32 seed)

{
                    /* Unresolved local var: uint8 * c@[???] */
  return ms_table3[seed >> 0x18] ^
         ms_table0[seed & 0xff] ^ ms_table1[seed >> 8 & 0xff] ^ ms_table2[seed >> 0x10 & 0xff];
}
```
