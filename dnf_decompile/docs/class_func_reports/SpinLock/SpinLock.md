# SpinLock

`_ZN8SpinLockC1Ev`

`SpinLock::SpinLock()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad3522` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3522  _ZN8SpinLockC1Ev
#           SpinLock::SpinLock()
# range [0x08ad3522, 0x08ad353d]
08ad3522 +0x00:  push   %ebp
08ad3523 +0x01:  mov    %esp,%ebp
08ad3525 +0x03:  sub    $0x18,%esp
08ad3528 +0x06:  mov    0x8(%ebp),%eax
08ad352b +0x09:  mov    %eax,(%esp)
08ad352e +0x0c:  call   08ad38a2 <_ZN13RwSectionLock10leaveWriteEv+0x14>  ; RwSectionLock::leaveWrite()+0x14
08ad3533 +0x11:  mov    0x8(%ebp),%eax
08ad3536 +0x14:  movl   $0x0,(%eax)
08ad353c +0x1a:  leave
08ad353d +0x1b:  ret
```

## 反编译 C

```c
// SpinLock::SpinLock @ 0x8ad3522

/* DWARF original prototype: void SpinLock(SpinLock * this) */

void __thiscall SpinLock::SpinLock(SpinLock *this)

{
  Uncopyable::Uncopyable((Uncopyable *)this);
  this->state_ = 0;
  return;
}
```
