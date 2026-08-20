# get_keyType

`_ZNK5yaSSL11CertManager11get_keyTypeEv`

`yaSSL::CertManager::get_keyType() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087974d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087974d0  _ZNK5yaSSL11CertManager11get_keyTypeEv
#           yaSSL::CertManager::get_keyType() const
# range [0x087974d0, 0x087974dc]
087974d0 +0x00:  push   %ebp
087974d1 +0x01:  mov    %esp,%ebp
087974d3 +0x03:  mov    0x8(%ebp),%eax
087974d6 +0x06:  pop    %ebp
087974d7 +0x07:  mov    0x3c(%eax),%eax
087974da +0x0a:  ret
087974db +0x0b:  nop
087974dc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::get_keyType @ 0x87974d0

/* yaSSL::CertManager::get_keyType() const */

undefined4 __thiscall yaSSL::CertManager::get_keyType(CertManager *this)

{
  return *(undefined4 *)(this + 0x3c);
}
```
