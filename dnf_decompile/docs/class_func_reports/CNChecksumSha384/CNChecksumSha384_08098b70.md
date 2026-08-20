# CNChecksumSha384

`_ZN16CNChecksumSha384C1ERKS_`

`CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098b70  _ZN16CNChecksumSha384C1ERKS_
#           CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 const&)
# range [0x08098b70, 0x08098b93]
08098b70 +0x00:  push   %ebp
08098b71 +0x01:  mov    %esp,%ebp
08098b73 +0x03:  sub    $0x18,%esp
08098b76 +0x06:  mov    0x8(%ebp),%eax
08098b79 +0x09:  movl   $0x2,0x4(%esp)
08098b81 +0x11:  mov    %eax,(%esp)
08098b84 +0x14:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
08098b89 +0x19:  mov    0x8(%ebp),%eax
08098b8c +0x1c:  movl   $&_ZTV16CNChecksumSha384+0x8,(%eax)
08098b92 +0x22:  leave
08098b93 +0x23:  ret
```

## 反编译 C

```c
// CNChecksumSha384::CNChecksumSha384 @ 0x8098b70

/* CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 const&) */

void __thiscall CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 *this,CNChecksumSha384 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,2);
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  return;
}
```
