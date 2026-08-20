# ~CNChecksumSha512

`_ZN16CNChecksumSha512D0Ev`

`CNChecksumSha512::~CNChecksumSha512()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098f36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098f36  _ZN16CNChecksumSha512D0Ev
#           CNChecksumSha512::~CNChecksumSha512()
# range [0x08098f36, 0x08098f53]
08098f36 +0x00:  push   %ebp
08098f37 +0x01:  mov    %esp,%ebp
08098f39 +0x03:  sub    $0x18,%esp
08098f3c +0x06:  mov    0x8(%ebp),%eax
08098f3f +0x09:  mov    %eax,(%esp)
08098f42 +0x0c:  call   08098ee4 <_ZN16CNChecksumSha512D1Ev>  ; CNChecksumSha512::~CNChecksumSha512()
08098f47 +0x11:  mov    0x8(%ebp),%eax
08098f4a +0x14:  mov    %eax,(%esp)
08098f4d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098f52 +0x1c:  leave
08098f53 +0x1d:  ret
```

## 反编译 C

```c
// CNChecksumSha512::~CNChecksumSha512 @ 0x8098f36

/* CNChecksumSha512::~CNChecksumSha512() */

void __thiscall CNChecksumSha512::~CNChecksumSha512(CNChecksumSha512 *this)

{
  ~CNChecksumSha512(this);
  operator_delete(this);
  return;
}
```
