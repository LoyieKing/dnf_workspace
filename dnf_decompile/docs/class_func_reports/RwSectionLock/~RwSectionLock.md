# ~RwSectionLock

`_ZN13RwSectionLockD1Ev`

`RwSectionLock::~RwSectionLock()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad3834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3834  _ZN13RwSectionLockD1Ev
#           RwSectionLock::~RwSectionLock()
# range [0x08ad3834, 0x08ad3851]
08ad3834 +0x00:  push   %ebp
08ad3835 +0x01:  mov    %esp,%ebp
08ad3837 +0x03:  sub    $0x18,%esp
08ad383a +0x06:  mov    0x8(%ebp),%eax
08ad383d +0x09:  mov    %eax,(%esp)
08ad3840 +0x0c:  call   0807e040 <_init+0x938>
08ad3845 +0x11:  mov    0x8(%ebp),%eax
08ad3848 +0x14:  mov    %eax,(%esp)
08ad384b +0x17:  call   08ad38a8 <_ZN13RwSectionLock10leaveWriteEv+0x1a>  ; RwSectionLock::leaveWrite()+0x1a
08ad3850 +0x1c:  leave
08ad3851 +0x1d:  ret
```

## 反编译 C

```c
// RwSectionLock::~RwSectionLock @ 0x8ad3834

/* DWARF original prototype: void ~RwSectionLock(RwSectionLock * this, int __in_chrg) */

void __thiscall RwSectionLock::~RwSectionLock(RwSectionLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  pthread_rwlock_destroy((pthread_rwlock_t *)this);
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}
```
