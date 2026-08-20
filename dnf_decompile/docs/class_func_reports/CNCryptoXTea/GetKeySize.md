# GetKeySize

`_ZNK12CNCryptoXTea10GetKeySizeEv`

`CNCryptoXTea::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809de66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809de66  _ZNK12CNCryptoXTea10GetKeySizeEv
#           CNCryptoXTea::GetKeySize() const
# range [0x0809de66, 0x0809de6f]
0809de66 +0x00:  push   %ebp
0809de67 +0x01:  mov    %esp,%ebp
0809de69 +0x03:  mov    $0x10,%eax
0809de6e +0x08:  pop    %ebp
0809de6f +0x09:  ret
```

## 反编译 C

```c
// CNCryptoXTea::GetKeySize @ 0x809de66

/* CNCryptoXTea::GetKeySize() const */

undefined4 CNCryptoXTea::GetKeySize(void)

{
  return 0x10;
}
```
