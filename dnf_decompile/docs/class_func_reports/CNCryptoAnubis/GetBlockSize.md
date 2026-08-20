# GetBlockSize

`_ZNK14CNCryptoAnubis12GetBlockSizeEv`

`CNCryptoAnubis::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x08099802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099802  _ZNK14CNCryptoAnubis12GetBlockSizeEv
#           CNCryptoAnubis::GetBlockSize() const
# range [0x08099802, 0x0809980b]
08099802 +0x00:  push   %ebp
08099803 +0x01:  mov    %esp,%ebp
08099805 +0x03:  mov    $0x10,%eax
0809980a +0x08:  pop    %ebp
0809980b +0x09:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::GetBlockSize @ 0x8099802

/* CNCryptoAnubis::GetBlockSize() const */

undefined4 CNCryptoAnubis::GetBlockSize(void)

{
  return 0x10;
}
```
