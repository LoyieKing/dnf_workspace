# ato24

`_ZN5yaSSL5ato24EPKhRA3_h`

`yaSSL::ato24(unsigned char const*, unsigned char (&) [3])`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874ddb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ddb0  _ZN5yaSSL5ato24EPKhRA3_h
#           yaSSL::ato24(unsigned char const*, unsigned char (&) [3])
# range [0x0874ddb0, 0x0874ddce]
0874ddb0 +0x00:  push   %ebp
0874ddb1 +0x01:  mov    %esp,%ebp
0874ddb3 +0x03:  mov    0x8(%ebp),%edx
0874ddb6 +0x06:  mov    0xc(%ebp),%eax
0874ddb9 +0x09:  movzbl (%edx),%ecx
0874ddbc +0x0c:  mov    %cl,(%eax)
0874ddbe +0x0e:  movzbl 0x1(%edx),%ecx
0874ddc2 +0x12:  mov    %cl,0x1(%eax)
0874ddc5 +0x15:  movzbl 0x2(%edx),%edx
0874ddc9 +0x19:  mov    %dl,0x2(%eax)
0874ddcc +0x1c:  pop    %ebp
0874ddcd +0x1d:  ret
0874ddce +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::ato24 @ 0x874ddb0

/* yaSSL::ato24(unsigned char const*, unsigned char (&) [3]) */

void yaSSL::ato24(uchar *param_1,unsigned_char *param_2)

{
  *param_2 = (unsigned_char)*param_1;
  param_2[1] = *(unsigned_char *)(param_1 + 1);
  param_2[2] = *(unsigned_char *)(param_1 + 2);
  return;
}
```
