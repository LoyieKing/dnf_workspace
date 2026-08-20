# failNoCert

`_ZNK5yaSSL11CertManager10failNoCertEv`

`yaSSL::CertManager::failNoCert() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797420  _ZNK5yaSSL11CertManager10failNoCertEv
#           yaSSL::CertManager::failNoCert() const
# range [0x08797420, 0x0879742c]
08797420 +0x00:  push   %ebp
08797421 +0x01:  mov    %esp,%ebp
08797423 +0x03:  mov    0x8(%ebp),%eax
08797426 +0x06:  pop    %ebp
08797427 +0x07:  movzbl 0x52(%eax),%eax
0879742b +0x0b:  ret
0879742c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::failNoCert @ 0x8797420

/* yaSSL::CertManager::failNoCert() const */

CertManager __thiscall yaSSL::CertManager::failNoCert(CertManager *this)

{
  return this[0x52];
}
```
