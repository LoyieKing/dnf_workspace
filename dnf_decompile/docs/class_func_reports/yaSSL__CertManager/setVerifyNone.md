# setVerifyNone

`_ZN5yaSSL11CertManager13setVerifyNoneEv`

`yaSSL::CertManager::setVerifyNone()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797450  _ZN5yaSSL11CertManager13setVerifyNoneEv
#           yaSSL::CertManager::setVerifyNone()
# range [0x08797450, 0x0879745c]
08797450 +0x00:  push   %ebp
08797451 +0x01:  mov    %esp,%ebp
08797453 +0x03:  mov    0x8(%ebp),%eax
08797456 +0x06:  movb   $0x1,0x51(%eax)
0879745a +0x0a:  pop    %ebp
0879745b +0x0b:  ret
0879745c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::setVerifyNone @ 0x8797450

/* yaSSL::CertManager::setVerifyNone() */

void __thiscall yaSSL::CertManager::setVerifyNone(CertManager *this)

{
  this[0x51] = (CertManager)0x1;
  return;
}
```
