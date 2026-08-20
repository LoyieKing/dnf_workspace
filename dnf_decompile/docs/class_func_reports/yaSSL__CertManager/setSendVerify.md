# setSendVerify

`_ZN5yaSSL11CertManager13setSendVerifyEv`

`yaSSL::CertManager::setSendVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797470  _ZN5yaSSL11CertManager13setSendVerifyEv
#           yaSSL::CertManager::setSendVerify()
# range [0x08797470, 0x0879747c]
08797470 +0x00:  push   %ebp
08797471 +0x01:  mov    %esp,%ebp
08797473 +0x03:  mov    0x8(%ebp),%eax
08797476 +0x06:  movb   $0x1,0x53(%eax)
0879747a +0x0a:  pop    %ebp
0879747b +0x0b:  ret
0879747c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::setSendVerify @ 0x8797470

/* yaSSL::CertManager::setSendVerify() */

void __thiscall yaSSL::CertManager::setSendVerify(CertManager *this)

{
  this[0x53] = (CertManager)0x1;
  return;
}
```
