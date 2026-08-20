# GetBlockSize

`_ZNK14CNCryptoKasumi12GetBlockSizeEv`

`CNCryptoKasumi::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809aa40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aa40  _ZNK14CNCryptoKasumi12GetBlockSizeEv
#           CNCryptoKasumi::GetBlockSize() const
# range [0x0809aa40, 0x0809aa49]
0809aa40 +0x00:  push   %ebp
0809aa41 +0x01:  mov    %esp,%ebp
0809aa43 +0x03:  mov    $0x8,%eax
0809aa48 +0x08:  pop    %ebp
0809aa49 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::GetBlockSize @ 0x809aa40

/* CNCryptoKasumi::GetBlockSize() const */

undefined4 CNCryptoKasumi::GetBlockSize(void)

{
  return 8;
}
```
