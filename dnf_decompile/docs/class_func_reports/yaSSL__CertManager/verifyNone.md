# verifyNone

`_ZNK5yaSSL11CertManager10verifyNoneEv`

`yaSSL::CertManager::verifyNone() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797410  _ZNK5yaSSL11CertManager10verifyNoneEv
#           yaSSL::CertManager::verifyNone() const
# range [0x08797410, 0x0879741c]
08797410 +0x00:  push   %ebp
08797411 +0x01:  mov    %esp,%ebp
08797413 +0x03:  mov    0x8(%ebp),%eax
08797416 +0x06:  pop    %ebp
08797417 +0x07:  movzbl 0x51(%eax),%eax
0879741b +0x0b:  ret
0879741c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::verifyNone @ 0x8797410

/* yaSSL::CertManager::verifyNone() const */

CertManager __thiscall yaSSL::CertManager::verifyNone(CertManager *this)

{
  return this[0x51];
}
```
