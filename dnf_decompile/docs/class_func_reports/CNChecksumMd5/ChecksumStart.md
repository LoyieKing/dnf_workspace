# ChecksumStart

`_ZN13CNChecksumMd513ChecksumStartEv`

`CNChecksumMd5::ChecksumStart()`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x080985f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080985f0  _ZN13CNChecksumMd513ChecksumStartEv
#           CNChecksumMd5::ChecksumStart()
# range [0x080985f0, 0x0809861b]
080985f0 +0x00:  push   %ebp
080985f1 +0x01:  mov    %esp,%ebp
080985f3 +0x03:  sub    $0x18,%esp
080985f6 +0x06:  mov    0x8(%ebp),%eax
080985f9 +0x09:  mov    0x8(%eax),%eax
080985fc +0x0c:  test   %eax,%eax
080985fe +0x0e:  jne    08098607 <+0x17>
08098600 +0x10:  mov    $0x70000000,%eax
08098605 +0x15:  jmp    0809861a <+0x2a>
08098607 +0x17:  mov    0x8(%ebp),%eax
0809860a +0x1a:  mov    0x8(%eax),%eax
0809860d +0x1d:  mov    %eax,(%esp)
08098610 +0x20:  call   080b2ae0 <_Z10md5_startsP11md5_context>  ; md5_starts(md5_context*)
08098615 +0x25:  mov    $0x6fffffff,%eax
0809861a +0x2a:  leave
0809861b +0x2b:  ret
```

## 反编译 C

```c
// CNChecksumMd5::ChecksumStart @ 0x80985f0

/* CNChecksumMd5::ChecksumStart() */

undefined4 __thiscall CNChecksumMd5::ChecksumStart(CNChecksumMd5 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    md5_starts(*(md5_context **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
