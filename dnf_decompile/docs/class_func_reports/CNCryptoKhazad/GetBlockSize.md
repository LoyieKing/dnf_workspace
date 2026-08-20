# GetBlockSize

`_ZNK14CNCryptoKhazad12GetBlockSizeEv`

`CNCryptoKhazad::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809afe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809afe4  _ZNK14CNCryptoKhazad12GetBlockSizeEv
#           CNCryptoKhazad::GetBlockSize() const
# range [0x0809afe4, 0x0809afed]
0809afe4 +0x00:  push   %ebp
0809afe5 +0x01:  mov    %esp,%ebp
0809afe7 +0x03:  mov    $0x8,%eax
0809afec +0x08:  pop    %ebp
0809afed +0x09:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::GetBlockSize @ 0x809afe4

/* CNCryptoKhazad::GetBlockSize() const */

undefined4 CNCryptoKhazad::GetBlockSize(void)

{
  return 8;
}
```
