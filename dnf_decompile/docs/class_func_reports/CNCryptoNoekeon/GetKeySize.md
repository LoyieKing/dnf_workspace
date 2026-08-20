# GetKeySize

`_ZNK15CNCryptoNoekeon10GetKeySizeEv`

`CNCryptoNoekeon::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809bb36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bb36  _ZNK15CNCryptoNoekeon10GetKeySizeEv
#           CNCryptoNoekeon::GetKeySize() const
# range [0x0809bb36, 0x0809bb3f]
0809bb36 +0x00:  push   %ebp
0809bb37 +0x01:  mov    %esp,%ebp
0809bb39 +0x03:  mov    $0x10,%eax
0809bb3e +0x08:  pop    %ebp
0809bb3f +0x09:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::GetKeySize @ 0x809bb36

/* CNCryptoNoekeon::GetKeySize() const */

undefined4 CNCryptoNoekeon::GetKeySize(void)

{
  return 0x10;
}
```
