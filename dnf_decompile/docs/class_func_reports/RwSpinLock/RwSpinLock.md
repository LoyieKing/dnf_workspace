# RwSpinLock

`_ZN10RwSpinLockC1Ev`

`RwSpinLock::RwSpinLock()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad35a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad35a6  _ZN10RwSpinLockC1Ev
#           RwSpinLock::RwSpinLock()
# range [0x08ad35a6, 0x08ad35c1]
08ad35a6 +0x00:  push   %ebp
08ad35a7 +0x01:  mov    %esp,%ebp
08ad35a9 +0x03:  sub    $0x18,%esp
08ad35ac +0x06:  mov    0x8(%ebp),%eax
08ad35af +0x09:  mov    %eax,(%esp)
08ad35b2 +0x0c:  call   08ad38a2 <_ZN13RwSectionLock10leaveWriteEv+0x14>  ; RwSectionLock::leaveWrite()+0x14
08ad35b7 +0x11:  mov    0x8(%ebp),%eax
08ad35ba +0x14:  movl   $0x0,(%eax)
08ad35c0 +0x1a:  leave
08ad35c1 +0x1b:  ret
```

## 反编译 C

```c
// RwSpinLock::RwSpinLock @ 0x8ad35a6

/* DWARF original prototype: void RwSpinLock(RwSpinLock * this) */

void __thiscall RwSpinLock::RwSpinLock(RwSpinLock *this)

{
  Uncopyable::Uncopyable((Uncopyable *)this);
  this->state_ = 0;
  return;
}
```
