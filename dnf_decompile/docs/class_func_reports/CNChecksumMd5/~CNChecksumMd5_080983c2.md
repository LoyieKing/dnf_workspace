# ~CNChecksumMd5

`_ZN13CNChecksumMd5D0Ev`

`CNChecksumMd5::~CNChecksumMd5()`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x080983c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080983c2  _ZN13CNChecksumMd5D0Ev
#           CNChecksumMd5::~CNChecksumMd5()
# range [0x080983c2, 0x080983df]
080983c2 +0x00:  push   %ebp
080983c3 +0x01:  mov    %esp,%ebp
080983c5 +0x03:  sub    $0x18,%esp
080983c8 +0x06:  mov    0x8(%ebp),%eax
080983cb +0x09:  mov    %eax,(%esp)
080983ce +0x0c:  call   08098370 <_ZN13CNChecksumMd5D1Ev>  ; CNChecksumMd5::~CNChecksumMd5()
080983d3 +0x11:  mov    0x8(%ebp),%eax
080983d6 +0x14:  mov    %eax,(%esp)
080983d9 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080983de +0x1c:  leave
080983df +0x1d:  ret
```

## 反编译 C

```c
// CNChecksumMd5::~CNChecksumMd5 @ 0x80983c2

/* CNChecksumMd5::~CNChecksumMd5() */

void __thiscall CNChecksumMd5::~CNChecksumMd5(CNChecksumMd5 *this)

{
  ~CNChecksumMd5(this);
  operator_delete(this);
  return;
}
```
