# ato16

`_ZN5yaSSL5ato16EPKhRt`

`yaSSL::ato16(unsigned char const*, unsigned short&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874dd90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dd90  _ZN5yaSSL5ato16EPKhRt
#           yaSSL::ato16(unsigned char const*, unsigned short&)
# range [0x0874dd90, 0x0874ddaf]
0874dd90 +0x00:  push   %ebp
0874dd91 +0x01:  mov    %esp,%ebp
0874dd93 +0x03:  mov    0x8(%ebp),%eax
0874dd96 +0x06:  mov    0xc(%ebp),%ecx
0874dd99 +0x09:  movw   $0x0,(%ecx)
0874dd9e +0x0e:  movzbl (%eax),%edx
0874dda1 +0x11:  movzbl 0x1(%eax),%eax
0874dda5 +0x15:  shl    $0x8,%edx
0874dda8 +0x18:  or     %edx,%eax
0874ddaa +0x1a:  mov    %ax,(%ecx)
0874ddad +0x1d:  pop    %ebp
0874ddae +0x1e:  ret
0874ddaf +0x1f:  nop
```

## 反编译 C

```c
// yaSSL::ato16 @ 0x874dd90

/* yaSSL::ato16(unsigned char const*, unsigned short&) */

void yaSSL::ato16(uchar *param_1,ushort *param_2)

{
  *param_2 = 0;
  *param_2 = CONCAT11(*param_1,param_1[1]);
  return;
}
```
