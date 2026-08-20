# ChecksumStart

`_ZN16CNChecksumSha38413ChecksumStartEv`

`CNChecksumSha384::ChecksumStart()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098dba  _ZN16CNChecksumSha38413ChecksumStartEv
#           CNChecksumSha384::ChecksumStart()
# range [0x08098dba, 0x08098de5]
08098dba +0x00:  push   %ebp
08098dbb +0x01:  mov    %esp,%ebp
08098dbd +0x03:  sub    $0x18,%esp
08098dc0 +0x06:  mov    0x8(%ebp),%eax
08098dc3 +0x09:  mov    0x8(%eax),%eax
08098dc6 +0x0c:  test   %eax,%eax
08098dc8 +0x0e:  jne    08098dd1 <+0x17>
08098dca +0x10:  mov    $0x70000000,%eax
08098dcf +0x15:  jmp    08098de4 <+0x2a>
08098dd1 +0x17:  mov    0x8(%ebp),%eax
08098dd4 +0x1a:  mov    0x8(%eax),%eax
08098dd7 +0x1d:  mov    %eax,(%esp)
08098dda +0x20:  call   080c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>  ; SHA384_Init(SHA384_ALG_INFO*)
08098ddf +0x25:  mov    $0x6fffffff,%eax
08098de4 +0x2a:  leave
08098de5 +0x2b:  ret
```

## 反编译 C

```c
// CNChecksumSha384::ChecksumStart @ 0x8098dba

/* CNChecksumSha384::ChecksumStart() */

undefined4 __thiscall CNChecksumSha384::ChecksumStart(CNChecksumSha384 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
