# getCrc32Table

`_ZN5Crc3213getCrc32TableEv`

`Crc32::getCrc32Table()`

| 类 | 地址 |
|---|---|
| `Crc32` | `0x08ad3504` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3504  _ZN5Crc3213getCrc32TableEv
#           Crc32::getCrc32Table()
# range [0x08ad3504, 0x08ad351b]
08ad3504 +0x00:  push   %ebp
08ad3505 +0x01:  mov    %esp,%ebp
08ad3507 +0x03:  mov    &_ZL9crc_table+0x3fc,%eax
08ad350c +0x08:  test   %eax,%eax
08ad350e +0x0a:  jne    08ad3515 <+0x11>
08ad3510 +0x0c:  call   08ad3420 <_ZL14make_crc_tablev>  ; make_crc_table()
08ad3515 +0x11:  mov    $&_ZL9crc_table,%eax
08ad351a +0x16:  pop    %ebp
08ad351b +0x17:  ret
```

## 反编译 C

```c
// Crc32::getCrc32Table @ 0x8ad3504

uint32 * Crc32::getCrc32Table(void)

{
  if (crc_table[0xff] == 0) {
    make_crc_table();
  }
  return crc_table;
}
```
