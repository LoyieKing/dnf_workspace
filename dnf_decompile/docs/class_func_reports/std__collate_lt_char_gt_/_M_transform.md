# _M_transform

`_ZNKSt7collateIcE12_M_transformEPcPKcj`

`std::collate<char>::_M_transform(char*, char const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `std::collate<char>` | `0x0871f950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f950  _ZNKSt7collateIcE12_M_transformEPcPKcj
#           std::collate<char>::_M_transform(char*, char const*, unsigned int) const
# range [0x0871f950, 0x0871f97f]
0871f950 +0x00:  push   %ebp
0871f951 +0x01:  mov    %esp,%ebp
0871f953 +0x03:  push   %ebx
0871f954 +0x04:  sub    $0x4,%esp
0871f957 +0x07:  mov    0x8(%ebp),%ebx
0871f95a +0x0a:  mov    0xc(%ebp),%eax
0871f95d +0x0d:  mov    0x10(%ebp),%edx
0871f960 +0x10:  mov    0x14(%ebp),%ecx
0871f963 +0x13:  mov    0x8(%ebx),%ebx
0871f966 +0x16:  mov    %eax,0x8(%ebp)
0871f969 +0x19:  mov    %edx,0xc(%ebp)
0871f96c +0x1c:  mov    %ecx,0x10(%ebp)
0871f96f +0x1f:  mov    %ebx,0x14(%ebp)
0871f972 +0x22:  add    $0x4,%esp
0871f975 +0x25:  pop    %ebx
0871f976 +0x26:  pop    %ebp
0871f977 +0x27:  jmp    0807e300 <_init+0xbf8>
0871f97c +0x2c:  nop
0871f97d +0x2d:  nop
0871f97e +0x2e:  nop
0871f97f +0x2f:  nop
```

## 反编译 C

```c
// std::collate<char>::_M_transform @ 0x871f950

/* std::collate<char>::_M_transform(char*, char const*, unsigned int) const */

void std::collate<char>::_M_transform(char *param_1,char *param_2,uint param_3)

{
  undefined4 uStack00000010;
  
  uStack00000010 = *(undefined4 *)(param_1 + 8);
  __strxfrm_l();
  return;
}
```
