# GetBlockSize

`_ZNK15CNCryptoNoekeon12GetBlockSizeEv`

`CNCryptoNoekeon::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809bb2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bb2c  _ZNK15CNCryptoNoekeon12GetBlockSizeEv
#           CNCryptoNoekeon::GetBlockSize() const
# range [0x0809bb2c, 0x0809bb35]
0809bb2c +0x00:  push   %ebp
0809bb2d +0x01:  mov    %esp,%ebp
0809bb2f +0x03:  mov    $0x10,%eax
0809bb34 +0x08:  pop    %ebp
0809bb35 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::GetBlockSize @ 0x809bb2c

/* CNCryptoNoekeon::GetBlockSize() const */

undefined4 CNCryptoNoekeon::GetBlockSize(void)

{
  return 0x10;
}
```
