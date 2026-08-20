# _isOneByteCharacter

`_ZN12CDataManager19_isOneByteCharacterEh`

`CDataManager::_isOneByteCharacter(unsigned char)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08362c0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08362c0e  _ZN12CDataManager19_isOneByteCharacterEh
#           CDataManager::_isOneByteCharacter(unsigned char)
# range [0x08362c0e, 0x08362c21]
08362c0e +0x00:  push   %ebp
08362c0f +0x01:  mov    %esp,%ebp
08362c11 +0x03:  sub    $0x4,%esp
08362c14 +0x06:  mov    0xc(%ebp),%eax
08362c17 +0x09:  mov    %al,-0x4(%ebp)
08362c1a +0x0c:  mov    $0x1,%eax
08362c1f +0x11:  leave
08362c20 +0x12:  ret
08362c21 +0x13:  nop
```

## 反编译 C

```c
// CDataManager::_isOneByteCharacter @ 0x8362c0e

/* CDataManager::_isOneByteCharacter(unsigned char) */

undefined4 CDataManager::_isOneByteCharacter(uchar param_1)

{
  return 1;
}
```
