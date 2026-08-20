# GetKeySize

`_ZNK14CNCryptoKasumi10GetKeySizeEv`

`CNCryptoKasumi::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809aa4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aa4a  _ZNK14CNCryptoKasumi10GetKeySizeEv
#           CNCryptoKasumi::GetKeySize() const
# range [0x0809aa4a, 0x0809aa53]
0809aa4a +0x00:  push   %ebp
0809aa4b +0x01:  mov    %esp,%ebp
0809aa4d +0x03:  mov    $0x10,%eax
0809aa52 +0x08:  pop    %ebp
0809aa53 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::GetKeySize @ 0x809aa4a

/* CNCryptoKasumi::GetKeySize() const */

undefined4 CNCryptoKasumi::GetKeySize(void)

{
  return 0x10;
}
```
