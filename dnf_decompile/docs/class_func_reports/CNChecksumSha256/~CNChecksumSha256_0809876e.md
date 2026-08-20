# ~CNChecksumSha256

`_ZN16CNChecksumSha256D0Ev`

`CNChecksumSha256::~CNChecksumSha256()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x0809876e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809876e  _ZN16CNChecksumSha256D0Ev
#           CNChecksumSha256::~CNChecksumSha256()
# range [0x0809876e, 0x0809878b]
0809876e +0x00:  push   %ebp
0809876f +0x01:  mov    %esp,%ebp
08098771 +0x03:  sub    $0x18,%esp
08098774 +0x06:  mov    0x8(%ebp),%eax
08098777 +0x09:  mov    %eax,(%esp)
0809877a +0x0c:  call   0809871c <_ZN16CNChecksumSha256D1Ev>  ; CNChecksumSha256::~CNChecksumSha256()
0809877f +0x11:  mov    0x8(%ebp),%eax
08098782 +0x14:  mov    %eax,(%esp)
08098785 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809878a +0x1c:  leave
0809878b +0x1d:  ret
```

## 反编译 C

```c
// CNChecksumSha256::~CNChecksumSha256 @ 0x809876e

/* CNChecksumSha256::~CNChecksumSha256() */

void __thiscall CNChecksumSha256::~CNChecksumSha256(CNChecksumSha256 *this)

{
  ~CNChecksumSha256(this);
  operator_delete(this);
  return;
}
```
