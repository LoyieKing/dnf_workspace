# ~SpinLock

`_ZN8SpinLockD1Ev`

`SpinLock::~SpinLock()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad353e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad353e  _ZN8SpinLockD1Ev
#           SpinLock::~SpinLock()
# range [0x08ad353e, 0x08ad3551]
08ad353e +0x00:  push   %ebp
08ad353f +0x01:  mov    %esp,%ebp
08ad3541 +0x03:  sub    $0x18,%esp
08ad3544 +0x06:  mov    0x8(%ebp),%eax
08ad3547 +0x09:  mov    %eax,(%esp)
08ad354a +0x0c:  call   08ad38a8 <_ZN13RwSectionLock10leaveWriteEv+0x1a>  ; RwSectionLock::leaveWrite()+0x1a
08ad354f +0x11:  leave
08ad3550 +0x12:  ret
08ad3551 +0x13:  nop
```

## 反编译 C

```c
// SpinLock::~SpinLock @ 0x8ad353e

/* DWARF original prototype: void ~SpinLock(SpinLock * this, int __in_chrg) */

void __thiscall SpinLock::~SpinLock(SpinLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}
```
