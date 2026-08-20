# crc32N

`_ZN10Encryption6crc32NEPvi`

`Encryption::crc32N(void*, int)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848d4c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d4c8  _ZN10Encryption6crc32NEPvi
#           Encryption::crc32N(void*, int)
# range [0x0848d4c8, 0x0848d519]
0848d4c8 +0x00:  push   %ebp
0848d4c9 +0x01:  mov    %esp,%ebp
0848d4cb +0x03:  sub    $0x28,%esp
0848d4ce +0x06:  movl   $0x0,0x8(%esp)
0848d4d6 +0x0e:  movl   $0x0,0x4(%esp)
0848d4de +0x16:  movl   $0x0,(%esp)
0848d4e5 +0x1d:  call   0848d472 <_ZN10Encryption5crc32EjPKcj>  ; Encryption::crc32(unsigned int, char const*, unsigned int)
0848d4ea +0x22:  mov    %eax,-0xc(%ebp)
0848d4ed +0x25:  mov    0xc(%ebp),%ecx
0848d4f0 +0x28:  mov    0x8(%ebp),%edx
0848d4f3 +0x2b:  mov    -0xc(%ebp),%eax
0848d4f6 +0x2e:  mov    %ecx,0x8(%esp)
0848d4fa +0x32:  mov    %edx,0x4(%esp)
0848d4fe +0x36:  mov    %eax,(%esp)
0848d501 +0x39:  call   0848d472 <_ZN10Encryption5crc32EjPKcj>  ; Encryption::crc32(unsigned int, char const*, unsigned int)
0848d506 +0x3e:  mov    %eax,-0xc(%ebp)
0848d509 +0x41:  lea    -0xc(%ebp),%eax
0848d50c +0x44:  mov    %eax,(%esp)
0848d50f +0x47:  call   0808cc17 <_Z30_NS_PI_2ND_MakeChecksumTo1BytePc>  ; _NS_PI_2ND_MakeChecksumTo1Byte(char*)
0848d514 +0x4c:  mov    -0xc(%ebp),%eax
0848d517 +0x4f:  leave
0848d518 +0x50:  ret
0848d519 +0x51:  nop
```

## 反编译 C

```c
// Encryption::crc32N @ 0x848d4c8

/* Encryption::crc32N(void*, int) */

uint Encryption::crc32N(void *param_1,int param_2)

{
  uint local_10 [3];
  
  local_10[0] = crc32(0,(char *)0x0,0);
  local_10[0] = crc32(local_10[0],param_1,param_2);
  _NS_PI_2ND_MakeChecksumTo1Byte((char *)local_10);
  return local_10[0];
}
```
