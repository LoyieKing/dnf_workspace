# c24toa

`_ZN5yaSSL6c24toaEPKhPh`

`yaSSL::c24toa(unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874ddf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ddf0  _ZN5yaSSL6c24toaEPKhPh
#           yaSSL::c24toa(unsigned char const*, unsigned char*)
# range [0x0874ddf0, 0x0874de0e]
0874ddf0 +0x00:  push   %ebp
0874ddf1 +0x01:  mov    %esp,%ebp
0874ddf3 +0x03:  mov    0x8(%ebp),%edx
0874ddf6 +0x06:  mov    0xc(%ebp),%eax
0874ddf9 +0x09:  movzbl (%edx),%ecx
0874ddfc +0x0c:  mov    %cl,(%eax)
0874ddfe +0x0e:  movzbl 0x1(%edx),%ecx
0874de02 +0x12:  mov    %cl,0x1(%eax)
0874de05 +0x15:  movzbl 0x2(%edx),%edx
0874de09 +0x19:  mov    %dl,0x2(%eax)
0874de0c +0x1c:  pop    %ebp
0874de0d +0x1d:  ret
0874de0e +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::c24toa @ 0x874ddf0

/* yaSSL::c24toa(unsigned char const*, unsigned char*) */

void yaSSL::c24toa(uchar *param_1,uchar *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}
```
