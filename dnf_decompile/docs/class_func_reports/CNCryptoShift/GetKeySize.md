# GetKeySize

`_ZNK13CNCryptoShift10GetKeySizeEv`

`CNCryptoShift::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c898  _ZNK13CNCryptoShift10GetKeySizeEv
#           CNCryptoShift::GetKeySize() const
# range [0x0809c898, 0x0809c8a1]
0809c898 +0x00:  push   %ebp
0809c899 +0x01:  mov    %esp,%ebp
0809c89b +0x03:  mov    $0x8,%eax
0809c8a0 +0x08:  pop    %ebp
0809c8a1 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoShift::GetKeySize @ 0x809c898

/* CNCryptoShift::GetKeySize() const */

undefined4 CNCryptoShift::GetKeySize(void)

{
  return 8;
}
```
