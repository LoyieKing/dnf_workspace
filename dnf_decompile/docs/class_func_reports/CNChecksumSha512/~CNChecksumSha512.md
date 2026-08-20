# ~CNChecksumSha512

`_ZN16CNChecksumSha512D1Ev`

`CNChecksumSha512::~CNChecksumSha512()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098ee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098ee4  _ZN16CNChecksumSha512D1Ev
#           CNChecksumSha512::~CNChecksumSha512()
# range [0x08098ee4, 0x08098f35]
08098ee4 +0x00:  push   %ebp
08098ee5 +0x01:  mov    %esp,%ebp
08098ee7 +0x03:  sub    $0x18,%esp
08098eea +0x06:  mov    0x8(%ebp),%eax
08098eed +0x09:  movl   $&_ZTV16CNChecksumSha512+0x8,(%eax)
08098ef3 +0x0f:  mov    0x8(%ebp),%eax
08098ef6 +0x12:  mov    0x8(%eax),%eax
08098ef9 +0x15:  test   %eax,%eax
08098efb +0x17:  je     08098f15 <+0x31>
08098efd +0x19:  mov    0x8(%ebp),%eax
08098f00 +0x1c:  mov    0x8(%eax),%eax
08098f03 +0x1f:  mov    %eax,(%esp)
08098f06 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098f0b +0x27:  mov    0x8(%ebp),%eax
08098f0e +0x2a:  movl   $0x0,0x8(%eax)
08098f15 +0x31:  mov    0x8(%ebp),%eax
08098f18 +0x34:  mov    %eax,(%esp)
08098f1b +0x37:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098f20 +0x3c:  mov    $0x0,%eax
08098f25 +0x41:  test   %al,%al
08098f27 +0x43:  je     08098f34 <+0x50>
08098f29 +0x45:  mov    0x8(%ebp),%eax
08098f2c +0x48:  mov    %eax,(%esp)
08098f2f +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098f34 +0x50:  leave
08098f35 +0x51:  ret
```

## 反编译 C

```c
// CNChecksumSha512::~CNChecksumSha512 @ 0x8098ee4

/* WARNING: Removing unreachable block (ram,0x08098f29) */
/* CNChecksumSha512::~CNChecksumSha512() */

void __thiscall CNChecksumSha512::~CNChecksumSha512(CNChecksumSha512 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}
```
