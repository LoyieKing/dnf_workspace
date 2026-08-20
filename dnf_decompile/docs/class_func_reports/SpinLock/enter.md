# enter

`_ZN8SpinLock5enterEv`

`SpinLock::enter()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad3552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3552  _ZN8SpinLock5enterEv
#           SpinLock::enter()
# range [0x08ad3552, 0x08ad3571]
08ad3552 +0x00:  push   %ebp
08ad3553 +0x01:  mov    %esp,%ebp
08ad3555 +0x03:  jmp    08ad355c <+0xa>
08ad3557 +0x05:  call   08ad351c <_ZL14YieldProcessorv>  ; YieldProcessor()
08ad355c +0x0a:  mov    0x8(%ebp),%eax
08ad355f +0x0d:  mov    $0x1,%edx
08ad3564 +0x12:  xchg   %edx,(%eax)
08ad3566 +0x14:  cmp    $0x1,%edx
08ad3569 +0x17:  sete   %al
08ad356c +0x1a:  test   %al,%al
08ad356e +0x1c:  jne    08ad3557 <+0x5>
08ad3570 +0x1e:  pop    %ebp
08ad3571 +0x1f:  ret
```

## 反编译 C

```c
// SpinLock::enter @ 0x8ad3552

/* DWARF original prototype: void enter(SpinLock * this) */

void __thiscall SpinLock::enter(SpinLock *this)

{
  int iVar1;
  
  while( true ) {
    LOCK();
    iVar1 = this->state_;
    this->state_ = 1;
    UNLOCK();
    if (iVar1 != 1) break;
    YieldProcessor();
  }
  return;
}
```
