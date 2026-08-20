# c32toa

`_ZN5yaSSL6c32toaEjPh`

`yaSSL::c32toa(unsigned int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874de10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874de10  _ZN5yaSSL6c32toaEjPh
#           yaSSL::c32toa(unsigned int, unsigned char*)
# range [0x0874de10, 0x0874de39]
0874de10 +0x00:  push   %ebp
0874de11 +0x01:  mov    %esp,%ebp
0874de13 +0x03:  mov    0x8(%ebp),%edx
0874de16 +0x06:  mov    0xc(%ebp),%eax
0874de19 +0x09:  mov    %edx,%ecx
0874de1b +0x0b:  shr    $0x18,%ecx
0874de1e +0x0e:  mov    %cl,(%eax)
0874de20 +0x10:  mov    %edx,%ecx
0874de22 +0x12:  shr    $0x10,%ecx
0874de25 +0x15:  mov    %cl,0x1(%eax)
0874de28 +0x18:  mov    %edx,%ecx
0874de2a +0x1a:  shr    $0x8,%ecx
0874de2d +0x1d:  mov    %cl,0x2(%eax)
0874de30 +0x20:  mov    %dl,0x3(%eax)
0874de33 +0x23:  pop    %ebp
0874de34 +0x24:  ret
0874de35 +0x25:  nop
0874de36 +0x26:  lea    0x0(%esi),%esi
0874de39 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::c32toa @ 0x874de10

/* yaSSL::c32toa(unsigned int, unsigned char*) */

void yaSSL::c32toa(uint param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 0x18);
  param_2[1] = (uchar)(param_1 >> 0x10);
  param_2[2] = (uchar)(param_1 >> 8);
  param_2[3] = (uchar)param_1;
  return;
}
```
