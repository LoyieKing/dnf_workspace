# make_crc_table

`_ZN10Encryption14make_crc_tableEv`

`Encryption::make_crc_table()`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848d3e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d3e4  _ZN10Encryption14make_crc_tableEv
#           Encryption::make_crc_table()
# range [0x0848d3e4, 0x0848d471]
0848d3e4 +0x00:  push   %ebp
0848d3e5 +0x01:  mov    %esp,%ebp
0848d3e7 +0x03:  sub    $0x10,%esp
0848d3ea +0x06:  movl   $0x1,-0x4(%ebp)
0848d3f1 +0x0d:  movl   $0x0,&_ZN10Encryption9crc_tableE
0848d3fb +0x17:  movl   $0x80,-0xc(%ebp)
0848d402 +0x1e:  jmp    0848d464 <+0x80>
0848d404 +0x20:  mov    -0x4(%ebp),%eax
0848d407 +0x23:  mov    %eax,%edx
0848d409 +0x25:  shr    %edx
0848d40b +0x27:  mov    -0x4(%ebp),%eax
0848d40e +0x2a:  and    $0x1,%eax
0848d411 +0x2d:  test   %al,%al
0848d413 +0x2f:  je     0848d41c <+0x38>
0848d415 +0x31:  mov    $0x4db89129,%eax
0848d41a +0x36:  jmp    0848d421 <+0x3d>
0848d41c +0x38:  mov    $0x0,%eax
0848d421 +0x3d:  xor    %edx,%eax
0848d423 +0x3f:  mov    %eax,-0x4(%ebp)
0848d426 +0x42:  movl   $0x0,-0x8(%ebp)
0848d42d +0x49:  jmp    0848d453 <+0x6f>
0848d42f +0x4b:  mov    -0x8(%ebp),%eax
0848d432 +0x4e:  mov    -0xc(%ebp),%edx
0848d435 +0x51:  add    %eax,%edx
0848d437 +0x53:  mov    -0x8(%ebp),%eax
0848d43a +0x56:  mov    &_ZN10Encryption9crc_tableE(,%eax,4),%eax
0848d441 +0x5d:  xor    -0x4(%ebp),%eax
0848d444 +0x60:  mov    %eax,&_ZN10Encryption9crc_tableE(,%edx,4)
0848d44b +0x67:  mov    -0xc(%ebp),%eax
0848d44e +0x6a:  add    %eax,%eax
0848d450 +0x6c:  add    %eax,-0x8(%ebp)
0848d453 +0x6f:  cmpl   $0xff,-0x8(%ebp)
0848d45a +0x76:  setbe  %al
0848d45d +0x79:  test   %al,%al
0848d45f +0x7b:  jne    0848d42f <+0x4b>
0848d461 +0x7d:  shrl   -0xc(%ebp)
0848d464 +0x80:  cmpl   $0x0,-0xc(%ebp)
0848d468 +0x84:  setne  %al
0848d46b +0x87:  test   %al,%al
0848d46d +0x89:  jne    0848d404 <+0x20>
0848d46f +0x8b:  leave
0848d470 +0x8c:  ret
0848d471 +0x8d:  nop
```

## 反编译 C

```c
// Encryption::make_crc_table @ 0x848d3e4

/* Encryption::make_crc_table() */

void Encryption::make_crc_table(void)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 1;
  crc_table._0_4_ = 0;
  for (local_10 = 0x80; local_10 != 0; local_10 = local_10 >> 1) {
    if ((local_8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x4db89129;
    }
    local_8 = uVar1 ^ local_8 >> 1;
    for (local_c = 0; local_c < 0x100; local_c = local_c + local_10 * 2) {
      *(uint *)(crc_table + (local_10 + local_c) * 4) = *(uint *)(crc_table + local_c * 4) ^ local_8
      ;
    }
  }
  return;
}
```
