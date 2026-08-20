# CNChecksumSha512

`_ZN16CNChecksumSha512C1ERKS_`

`CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098f54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098f54  _ZN16CNChecksumSha512C1ERKS_
#           CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 const&)
# range [0x08098f54, 0x08098f77]
08098f54 +0x00:  push   %ebp
08098f55 +0x01:  mov    %esp,%ebp
08098f57 +0x03:  sub    $0x18,%esp
08098f5a +0x06:  mov    0x8(%ebp),%eax
08098f5d +0x09:  movl   $0x1,0x4(%esp)
08098f65 +0x11:  mov    %eax,(%esp)
08098f68 +0x14:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
08098f6d +0x19:  mov    0x8(%ebp),%eax
08098f70 +0x1c:  movl   $&_ZTV16CNChecksumSha512+0x8,(%eax)
08098f76 +0x22:  leave
08098f77 +0x23:  ret
```

## 反编译 C

```c
// CNChecksumSha512::CNChecksumSha512 @ 0x8098f54

/* CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 const&) */

void __thiscall CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 *this,CNChecksumSha512 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  return;
}
```
