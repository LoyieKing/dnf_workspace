# ~CNChecksumMd5

`_ZN13CNChecksumMd5D1Ev`

`CNChecksumMd5::~CNChecksumMd5()`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x08098370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098370  _ZN13CNChecksumMd5D1Ev
#           CNChecksumMd5::~CNChecksumMd5()
# range [0x08098370, 0x080983c1]
08098370 +0x00:  push   %ebp
08098371 +0x01:  mov    %esp,%ebp
08098373 +0x03:  sub    $0x18,%esp
08098376 +0x06:  mov    0x8(%ebp),%eax
08098379 +0x09:  movl   $&_ZTV13CNChecksumMd5+0x8,(%eax)
0809837f +0x0f:  mov    0x8(%ebp),%eax
08098382 +0x12:  mov    0x8(%eax),%eax
08098385 +0x15:  test   %eax,%eax
08098387 +0x17:  je     080983a1 <+0x31>
08098389 +0x19:  mov    0x8(%ebp),%eax
0809838c +0x1c:  mov    0x8(%eax),%eax
0809838f +0x1f:  mov    %eax,(%esp)
08098392 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098397 +0x27:  mov    0x8(%ebp),%eax
0809839a +0x2a:  movl   $0x0,0x8(%eax)
080983a1 +0x31:  mov    0x8(%ebp),%eax
080983a4 +0x34:  mov    %eax,(%esp)
080983a7 +0x37:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
080983ac +0x3c:  mov    $0x0,%eax
080983b1 +0x41:  test   %al,%al
080983b3 +0x43:  je     080983c0 <+0x50>
080983b5 +0x45:  mov    0x8(%ebp),%eax
080983b8 +0x48:  mov    %eax,(%esp)
080983bb +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080983c0 +0x50:  leave
080983c1 +0x51:  ret
```

## 反编译 C

```c
// CNChecksumMd5::~CNChecksumMd5 @ 0x8098370

/* WARNING: Removing unreachable block (ram,0x080983b5) */
/* CNChecksumMd5::~CNChecksumMd5() */

void __thiscall CNChecksumMd5::~CNChecksumMd5(CNChecksumMd5 *this)

{
  *(undefined ***)this = &PTR__CNChecksumMd5_08b13508;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}
```
