# setFailNoCert

`_ZN5yaSSL11CertManager13setFailNoCertEv`

`yaSSL::CertManager::setFailNoCert()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797460  _ZN5yaSSL11CertManager13setFailNoCertEv
#           yaSSL::CertManager::setFailNoCert()
# range [0x08797460, 0x0879746c]
08797460 +0x00:  push   %ebp
08797461 +0x01:  mov    %esp,%ebp
08797463 +0x03:  mov    0x8(%ebp),%eax
08797466 +0x06:  movb   $0x1,0x52(%eax)
0879746a +0x0a:  pop    %ebp
0879746b +0x0b:  ret
0879746c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::setFailNoCert @ 0x8797460

/* yaSSL::CertManager::setFailNoCert() */

void __thiscall yaSSL::CertManager::setFailNoCert(CertManager *this)

{
  this[0x52] = (CertManager)0x1;
  return;
}
```
