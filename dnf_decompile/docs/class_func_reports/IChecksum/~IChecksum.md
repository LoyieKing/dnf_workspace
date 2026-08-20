# ~IChecksum

`_ZN9IChecksumD1Ev`

`IChecksum::~IChecksum()`

| 类 | 地址 |
|---|---|
| `IChecksum` | `0x0809de88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809de88  _ZN9IChecksumD1Ev
#           IChecksum::~IChecksum()
# range [0x0809de88, 0x0809dead]
0809de88 +0x00:  push   %ebp
0809de89 +0x01:  mov    %esp,%ebp
0809de8b +0x03:  sub    $0x18,%esp
0809de8e +0x06:  mov    0x8(%ebp),%eax
0809de91 +0x09:  movl   $&_ZTV9IChecksum+0x8,(%eax)
0809de97 +0x0f:  mov    $0x0,%eax
0809de9c +0x14:  test   %al,%al
0809de9e +0x16:  je     0809deab <+0x23>
0809dea0 +0x18:  mov    0x8(%ebp),%eax
0809dea3 +0x1b:  mov    %eax,(%esp)
0809dea6 +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809deab +0x23:  leave
0809deac +0x24:  ret
0809dead +0x25:  nop
```

## 反编译 C

```c
// IChecksum::~IChecksum @ 0x809de88

/* WARNING: Removing unreachable block (ram,0x0809dea0) */
/* IChecksum::~IChecksum() */

void __thiscall IChecksum::~IChecksum(IChecksum *this)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  return;
}
```
