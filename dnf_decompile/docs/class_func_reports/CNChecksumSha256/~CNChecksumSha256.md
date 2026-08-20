# ~CNChecksumSha256

`_ZN16CNChecksumSha256D1Ev`

`CNChecksumSha256::~CNChecksumSha256()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x0809871c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809871c  _ZN16CNChecksumSha256D1Ev
#           CNChecksumSha256::~CNChecksumSha256()
# range [0x0809871c, 0x0809876d]
0809871c +0x00:  push   %ebp
0809871d +0x01:  mov    %esp,%ebp
0809871f +0x03:  sub    $0x18,%esp
08098722 +0x06:  mov    0x8(%ebp),%eax
08098725 +0x09:  movl   $&_ZTV16CNChecksumSha256+0x8,(%eax)
0809872b +0x0f:  mov    0x8(%ebp),%eax
0809872e +0x12:  mov    0x8(%eax),%eax
08098731 +0x15:  test   %eax,%eax
08098733 +0x17:  je     0809874d <+0x31>
08098735 +0x19:  mov    0x8(%ebp),%eax
08098738 +0x1c:  mov    0x8(%eax),%eax
0809873b +0x1f:  mov    %eax,(%esp)
0809873e +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098743 +0x27:  mov    0x8(%ebp),%eax
08098746 +0x2a:  movl   $0x0,0x8(%eax)
0809874d +0x31:  mov    0x8(%ebp),%eax
08098750 +0x34:  mov    %eax,(%esp)
08098753 +0x37:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098758 +0x3c:  mov    $0x0,%eax
0809875d +0x41:  test   %al,%al
0809875f +0x43:  je     0809876c <+0x50>
08098761 +0x45:  mov    0x8(%ebp),%eax
08098764 +0x48:  mov    %eax,(%esp)
08098767 +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809876c +0x50:  leave
0809876d +0x51:  ret
```

## 反编译 C

```c
// CNChecksumSha256::~CNChecksumSha256 @ 0x809871c

/* WARNING: Removing unreachable block (ram,0x08098761) */
/* CNChecksumSha256::~CNChecksumSha256() */

void __thiscall CNChecksumSha256::~CNChecksumSha256(CNChecksumSha256 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}
```
