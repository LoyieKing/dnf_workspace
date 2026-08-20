# GetBlockSize

`_ZNK11CNCryptoTea12GetBlockSizeEv`

`CNCryptoTea::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d31c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d31c  _ZNK11CNCryptoTea12GetBlockSizeEv
#           CNCryptoTea::GetBlockSize() const
# range [0x0809d31c, 0x0809d327]
0809d31c +0x00:  push   %ebp
0809d31d +0x01:  mov    %esp,%ebp
0809d31f +0x03:  mov    $0x10,%eax
0809d324 +0x08:  pop    %ebp
0809d325 +0x09:  ret
0809d326 +0x0a:  nop
0809d327 +0x0b:  nop
```

## 反编译 C

```c
// CNCryptoTea::GetBlockSize @ 0x809d31c

/* CNCryptoTea::GetBlockSize() const */

undefined4 CNCryptoTea::GetBlockSize(void)

{
  return 0x10;
}
```
