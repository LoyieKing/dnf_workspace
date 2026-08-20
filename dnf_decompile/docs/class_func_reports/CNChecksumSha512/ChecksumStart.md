# ChecksumStart

`_ZN16CNChecksumSha51213ChecksumStartEv`

`CNChecksumSha512::ChecksumStart()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x0809919e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809919e  _ZN16CNChecksumSha51213ChecksumStartEv
#           CNChecksumSha512::ChecksumStart()
# range [0x0809919e, 0x080991c9]
0809919e +0x00:  push   %ebp
0809919f +0x01:  mov    %esp,%ebp
080991a1 +0x03:  sub    $0x18,%esp
080991a4 +0x06:  mov    0x8(%ebp),%eax
080991a7 +0x09:  mov    0x8(%eax),%eax
080991aa +0x0c:  test   %eax,%eax
080991ac +0x0e:  jne    080991b5 <+0x17>
080991ae +0x10:  mov    $0x70000000,%eax
080991b3 +0x15:  jmp    080991c8 <+0x2a>
080991b5 +0x17:  mov    0x8(%ebp),%eax
080991b8 +0x1a:  mov    0x8(%eax),%eax
080991bb +0x1d:  mov    %eax,(%esp)
080991be +0x20:  call   080c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>  ; SHA512_Init(SHA512_ALG_INFO*)
080991c3 +0x25:  mov    $0x6fffffff,%eax
080991c8 +0x2a:  leave
080991c9 +0x2b:  ret
```

## 反编译 C

```c
// CNChecksumSha512::ChecksumStart @ 0x809919e

/* CNChecksumSha512::ChecksumStart() */

undefined4 __thiscall CNChecksumSha512::ChecksumStart(CNChecksumSha512 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
