# CNChecksumSha256

`_ZN16CNChecksumSha256C1ERKS_`

`CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x0809878c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809878c  _ZN16CNChecksumSha256C1ERKS_
#           CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 const&)
# range [0x0809878c, 0x080987af]
0809878c +0x00:  push   %ebp
0809878d +0x01:  mov    %esp,%ebp
0809878f +0x03:  sub    $0x18,%esp
08098792 +0x06:  mov    0x8(%ebp),%eax
08098795 +0x09:  movl   $0x1,0x4(%esp)
0809879d +0x11:  mov    %eax,(%esp)
080987a0 +0x14:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
080987a5 +0x19:  mov    0x8(%ebp),%eax
080987a8 +0x1c:  movl   $&_ZTV16CNChecksumSha256+0x8,(%eax)
080987ae +0x22:  leave
080987af +0x23:  ret
```

## 反编译 C

```c
// CNChecksumSha256::CNChecksumSha256 @ 0x809878c

/* CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 const&) */

void __thiscall CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 *this,CNChecksumSha256 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  return;
}
```
