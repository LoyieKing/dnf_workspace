# IChecksum

`_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE`

`IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)`

| 类 | 地址 |
|---|---|
| `IChecksum` | `0x0809de70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809de70  _ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE
#           IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
# range [0x0809de70, 0x0809de87]
0809de70 +0x00:  push   %ebp
0809de71 +0x01:  mov    %esp,%ebp
0809de73 +0x03:  mov    0x8(%ebp),%eax
0809de76 +0x06:  movl   $&_ZTV9IChecksum+0x8,(%eax)
0809de7c +0x0c:  mov    0x8(%ebp),%eax
0809de7f +0x0f:  mov    0xc(%ebp),%edx
0809de82 +0x12:  mov    %edx,0x4(%eax)
0809de85 +0x15:  pop    %ebp
0809de86 +0x16:  ret
0809de87 +0x17:  nop
```

## 反编译 C

```c
// IChecksum::IChecksum @ 0x809de70

/* IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE) */

void __thiscall IChecksum::IChecksum(IChecksum *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  *(undefined4 *)(this + 4) = param_2;
  return;
}
```
