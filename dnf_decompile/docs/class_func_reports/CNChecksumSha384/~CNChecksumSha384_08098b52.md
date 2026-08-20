# ~CNChecksumSha384

`_ZN16CNChecksumSha384D0Ev`

`CNChecksumSha384::~CNChecksumSha384()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098b52  _ZN16CNChecksumSha384D0Ev
#           CNChecksumSha384::~CNChecksumSha384()
# range [0x08098b52, 0x08098b6f]
08098b52 +0x00:  push   %ebp
08098b53 +0x01:  mov    %esp,%ebp
08098b55 +0x03:  sub    $0x18,%esp
08098b58 +0x06:  mov    0x8(%ebp),%eax
08098b5b +0x09:  mov    %eax,(%esp)
08098b5e +0x0c:  call   08098b00 <_ZN16CNChecksumSha384D1Ev>  ; CNChecksumSha384::~CNChecksumSha384()
08098b63 +0x11:  mov    0x8(%ebp),%eax
08098b66 +0x14:  mov    %eax,(%esp)
08098b69 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08098b6e +0x1c:  leave
08098b6f +0x1d:  ret
```

## 反编译 C

```c
// CNChecksumSha384::~CNChecksumSha384 @ 0x8098b52

/* CNChecksumSha384::~CNChecksumSha384() */

void __thiscall CNChecksumSha384::~CNChecksumSha384(CNChecksumSha384 *this)

{
  ~CNChecksumSha384(this);
  operator_delete(this);
  return;
}
```
