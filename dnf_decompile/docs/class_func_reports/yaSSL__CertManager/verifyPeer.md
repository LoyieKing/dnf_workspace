# verifyPeer

`_ZNK5yaSSL11CertManager10verifyPeerEv`

`yaSSL::CertManager::verifyPeer() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797400  _ZNK5yaSSL11CertManager10verifyPeerEv
#           yaSSL::CertManager::verifyPeer() const
# range [0x08797400, 0x0879740c]
08797400 +0x00:  push   %ebp
08797401 +0x01:  mov    %esp,%ebp
08797403 +0x03:  mov    0x8(%ebp),%eax
08797406 +0x06:  pop    %ebp
08797407 +0x07:  movzbl 0x50(%eax),%eax
0879740b +0x0b:  ret
0879740c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::verifyPeer @ 0x8797400

/* yaSSL::CertManager::verifyPeer() const */

CertManager __thiscall yaSSL::CertManager::verifyPeer(CertManager *this)

{
  return this[0x50];
}
```
