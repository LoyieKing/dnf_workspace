# GetBlockSize

`_ZNK12CNCryptoXTea12GetBlockSizeEv`

`CNCryptoXTea::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809de5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809de5c  _ZNK12CNCryptoXTea12GetBlockSizeEv
#           CNCryptoXTea::GetBlockSize() const
# range [0x0809de5c, 0x0809de65]
0809de5c +0x00:  push   %ebp
0809de5d +0x01:  mov    %esp,%ebp
0809de5f +0x03:  mov    $0x8,%eax
0809de64 +0x08:  pop    %ebp
0809de65 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoXTea::GetBlockSize @ 0x809de5c

/* CNCryptoXTea::GetBlockSize() const */

undefined4 CNCryptoXTea::GetBlockSize(void)

{
  return 8;
}
```
