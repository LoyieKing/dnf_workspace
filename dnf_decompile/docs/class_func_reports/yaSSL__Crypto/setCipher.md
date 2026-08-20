# setCipher

`_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE`

`yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e820  _ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE
#           yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
# range [0x0874e820, 0x0874e82e]
0874e820 +0x00:  push   %ebp
0874e821 +0x01:  mov    %esp,%ebp
0874e823 +0x03:  mov    0xc(%ebp),%edx
0874e826 +0x06:  mov    0x8(%ebp),%eax
0874e829 +0x09:  mov    %edx,0x4(%eax)
0874e82c +0x0c:  pop    %ebp
0874e82d +0x0d:  ret
0874e82e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Crypto::setCipher @ 0x874e820

/* yaSSL::Crypto::setCipher(yaSSL::BulkCipher*) */

void __thiscall yaSSL::Crypto::setCipher(Crypto *this,BulkCipher *param_1)

{
  *(BulkCipher **)(this + 4) = param_1;
  return;
}
```
