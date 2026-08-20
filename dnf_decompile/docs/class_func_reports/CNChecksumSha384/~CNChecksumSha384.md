# ~CNChecksumSha384

`_ZN16CNChecksumSha384D1Ev`

`CNChecksumSha384::~CNChecksumSha384()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098b00  _ZN16CNChecksumSha384D1Ev
#           CNChecksumSha384::~CNChecksumSha384()
# range [0x08098b00, 0x08098b51]
08098b00 +0x00:  push   %ebp
08098b01 +0x01:  mov    %esp,%ebp
08098b03 +0x03:  sub    $0x18,%esp
08098b06 +0x06:  mov    0x8(%ebp),%eax
08098b09 +0x09:  movl   $&_ZTV16CNChecksumSha384+0x8,(%eax)
08098b0f +0x0f:  mov    0x8(%ebp),%eax
08098b12 +0x12:  mov    0x8(%eax),%eax
08098b15 +0x15:  test   %eax,%eax
08098b17 +0x17:  je     08098b31 <+0x31>
08098b19 +0x19:  mov    0x8(%ebp),%eax
08098b1c +0x1c:  mov    0x8(%eax),%eax
08098b1f +0x1f:  mov    %eax,(%esp)
08098b22 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098b27 +0x27:  mov    0x8(%ebp),%eax
08098b2a +0x2a:  movl   $0x0,0x8(%eax)
08098b31 +0x31:  mov    0x8(%ebp),%eax
08098b34 +0x34:  mov    %eax,(%esp)
08098b37 +0x37:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098b3c +0x3c:  mov    $0x0,%eax
08098b41 +0x41:  test   %al,%al
08098b43 +0x43:  je     08098b50 <+0x50>
08098b45 +0x45:  mov    0x8(%ebp),%eax
08098b48 +0x48:  mov    %eax,(%esp)
08098b4b +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098b50 +0x50:  leave
08098b51 +0x51:  ret
```

## 反编译 C

```c
// CNChecksumSha384::~CNChecksumSha384 @ 0x8098b00

/* WARNING: Removing unreachable block (ram,0x08098b45) */
/* CNChecksumSha384::~CNChecksumSha384() */

void __thiscall CNChecksumSha384::~CNChecksumSha384(CNChecksumSha384 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}
```
