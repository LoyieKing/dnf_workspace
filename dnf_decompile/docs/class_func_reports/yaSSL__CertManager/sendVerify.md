# sendVerify

`_ZNK5yaSSL11CertManager10sendVerifyEv`

`yaSSL::CertManager::sendVerify() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797430  _ZNK5yaSSL11CertManager10sendVerifyEv
#           yaSSL::CertManager::sendVerify() const
# range [0x08797430, 0x0879743c]
08797430 +0x00:  push   %ebp
08797431 +0x01:  mov    %esp,%ebp
08797433 +0x03:  mov    0x8(%ebp),%eax
08797436 +0x06:  pop    %ebp
08797437 +0x07:  movzbl 0x53(%eax),%eax
0879743b +0x0b:  ret
0879743c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::sendVerify @ 0x8797430

/* yaSSL::CertManager::sendVerify() const */

CertManager __thiscall yaSSL::CertManager::sendVerify(CertManager *this)

{
  return this[0x53];
}
```
