# leaveWrite

`_ZN13RwSectionLock10leaveWriteEv`

`RwSectionLock::leaveWrite()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad388e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad388e  _ZN13RwSectionLock10leaveWriteEv
#           RwSectionLock::leaveWrite()
# range [0x08ad388e, 0x08ad38af]
08ad388e +0x00:  push   %ebp
08ad388f +0x01:  mov    %esp,%ebp
08ad3891 +0x03:  sub    $0x18,%esp
08ad3894 +0x06:  mov    0x8(%ebp),%eax
08ad3897 +0x09:  mov    %eax,(%esp)
08ad389a +0x0c:  call   0807e250 <_init+0xb48>
08ad389f +0x11:  leave
08ad38a0 +0x12:  ret
08ad38a1 +0x13:  nop
08ad38a2 +0x14:  push   %ebp
08ad38a3 +0x15:  mov    %esp,%ebp
08ad38a5 +0x17:  pop    %ebp
08ad38a6 +0x18:  ret
08ad38a7 +0x19:  nop
08ad38a8 +0x1a:  push   %ebp
08ad38a9 +0x1b:  mov    %esp,%ebp
08ad38ab +0x1d:  pop    %ebp
08ad38ac +0x1e:  ret
08ad38ad +0x1f:  nop
08ad38ae +0x20:  nop
08ad38af +0x21:  nop
```

## 反编译 C

```c
// RwSectionLock::leaveWrite @ 0x8ad388e

/* DWARF original prototype: void leaveWrite(RwSectionLock * this) */

void __thiscall RwSectionLock::leaveWrite(RwSectionLock *this)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}
```
