# GetKeySize

`_ZNK11CNCryptoTea10GetKeySizeEv`

`CNCryptoTea::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d312` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d312  _ZNK11CNCryptoTea10GetKeySizeEv
#           CNCryptoTea::GetKeySize() const
# range [0x0809d312, 0x0809d31b]
0809d312 +0x00:  push   %ebp
0809d313 +0x01:  mov    %esp,%ebp
0809d315 +0x03:  mov    $0x10,%eax
0809d31a +0x08:  pop    %ebp
0809d31b +0x09:  ret
```

## 反编译 C

```c
// CNCryptoTea::GetKeySize @ 0x809d312

/* CNCryptoTea::GetKeySize() const */

undefined4 CNCryptoTea::GetKeySize(void)

{
  return 0x10;
}
```
