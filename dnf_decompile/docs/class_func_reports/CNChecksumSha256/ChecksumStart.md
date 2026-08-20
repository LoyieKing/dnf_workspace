# ChecksumStart

`_ZN16CNChecksumSha25613ChecksumStartEv`

`CNChecksumSha256::ChecksumStart()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x080989d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080989d6  _ZN16CNChecksumSha25613ChecksumStartEv
#           CNChecksumSha256::ChecksumStart()
# range [0x080989d6, 0x08098a01]
080989d6 +0x00:  push   %ebp
080989d7 +0x01:  mov    %esp,%ebp
080989d9 +0x03:  sub    $0x18,%esp
080989dc +0x06:  mov    0x8(%ebp),%eax
080989df +0x09:  mov    0x8(%eax),%eax
080989e2 +0x0c:  test   %eax,%eax
080989e4 +0x0e:  jne    080989ed <+0x17>
080989e6 +0x10:  mov    $0x70000000,%eax
080989eb +0x15:  jmp    08098a00 <+0x2a>
080989ed +0x17:  mov    0x8(%ebp),%eax
080989f0 +0x1a:  mov    0x8(%eax),%eax
080989f3 +0x1d:  mov    %eax,(%esp)
080989f6 +0x20:  call   080be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>  ; SHA256_Init(SHA256_ALG_INFO*)
080989fb +0x25:  mov    $0x6fffffff,%eax
08098a00 +0x2a:  leave
08098a01 +0x2b:  ret
```

## 反编译 C

```c
// CNChecksumSha256::ChecksumStart @ 0x80989d6

/* CNChecksumSha256::ChecksumStart() */

undefined4 __thiscall CNChecksumSha256::ChecksumStart(CNChecksumSha256 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
