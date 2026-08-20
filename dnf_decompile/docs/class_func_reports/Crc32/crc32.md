# crc32

`_ZN5Crc325crc32EjPKcj`

`Crc32::crc32(unsigned int, char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `Crc32` | `0x08ad34ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad34ae  _ZN5Crc325crc32EjPKcj
#           Crc32::crc32(unsigned int, char const*, unsigned int)
# range [0x08ad34ae, 0x08ad3503]
08ad34ae +0x00:  push   %ebp
08ad34af +0x01:  mov    %esp,%ebp
08ad34b1 +0x03:  mov    &_ZL9crc_table+0x3fc,%eax
08ad34b6 +0x08:  test   %eax,%eax
08ad34b8 +0x0a:  jne    08ad34bf <+0x11>
08ad34ba +0x0c:  call   08ad3420 <_ZL14make_crc_tablev>  ; make_crc_table()
08ad34bf +0x11:  notl   0x8(%ebp)
08ad34c2 +0x14:  jmp    08ad34ed <+0x3f>
08ad34c4 +0x16:  mov    0x8(%ebp),%eax
08ad34c7 +0x19:  mov    %eax,%edx
08ad34c9 +0x1b:  shr    $0x8,%edx
08ad34cc +0x1e:  mov    0xc(%ebp),%eax
08ad34cf +0x21:  movzbl (%eax),%eax
08ad34d2 +0x24:  movzbl %al,%eax
08ad34d5 +0x27:  xor    0x8(%ebp),%eax
08ad34d8 +0x2a:  and    $0xff,%eax
08ad34dd +0x2f:  mov    &_ZL9crc_table(,%eax,4),%eax
08ad34e4 +0x36:  xor    %edx,%eax
08ad34e6 +0x38:  mov    %eax,0x8(%ebp)
08ad34e9 +0x3b:  addl   $0x1,0xc(%ebp)
08ad34ed +0x3f:  cmpl   $0x0,0x10(%ebp)
08ad34f1 +0x43:  setne  %al
08ad34f4 +0x46:  subl   $0x1,0x10(%ebp)
08ad34f8 +0x4a:  test   %al,%al
08ad34fa +0x4c:  jne    08ad34c4 <+0x16>
08ad34fc +0x4e:  mov    0x8(%ebp),%eax
08ad34ff +0x51:  not    %eax
08ad3501 +0x53:  pop    %ebp
08ad3502 +0x54:  ret
08ad3503 +0x55:  nop
```

## 反编译 C

```c
// Crc32::crc32 @ 0x8ad34ae

uint32 Crc32::crc32(uint32 crc,char *buf,size_t len)

{
  bool bVar1;
  
  if (crc_table[0xff] == 0) {
    make_crc_table();
  }
  crc = ~crc;
  while (bVar1 = len != 0, len = len - 1, bVar1) {
    crc = crc_table[((byte)*buf ^ crc) & 0xff] ^ crc >> 8;
    buf = buf + 1;
  }
  return ~crc;
}
```
