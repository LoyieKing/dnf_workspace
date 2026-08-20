# setVerifyPeer

`_ZN5yaSSL11CertManager13setVerifyPeerEv`

`yaSSL::CertManager::setVerifyPeer()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797440  _ZN5yaSSL11CertManager13setVerifyPeerEv
#           yaSSL::CertManager::setVerifyPeer()
# range [0x08797440, 0x0879744c]
08797440 +0x00:  push   %ebp
08797441 +0x01:  mov    %esp,%ebp
08797443 +0x03:  mov    0x8(%ebp),%eax
08797446 +0x06:  movb   $0x1,0x50(%eax)
0879744a +0x0a:  pop    %ebp
0879744b +0x0b:  ret
0879744c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::setVerifyPeer @ 0x8797440

/* yaSSL::CertManager::setVerifyPeer() */

void __thiscall yaSSL::CertManager::setVerifyPeer(CertManager *this)

{
  this[0x50] = (CertManager)0x1;
  return;
}
```
