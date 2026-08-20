# ~SectionLock

`_ZN11SectionLockD1Ev`

`SectionLock::~SectionLock()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad3786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3786  _ZN11SectionLockD1Ev
#           SectionLock::~SectionLock()
# range [0x08ad3786, 0x08ad37a3]
08ad3786 +0x00:  push   %ebp
08ad3787 +0x01:  mov    %esp,%ebp
08ad3789 +0x03:  sub    $0x18,%esp
08ad378c +0x06:  mov    0x8(%ebp),%eax
08ad378f +0x09:  mov    %eax,(%esp)
08ad3792 +0x0c:  call   0807db20 <_init+0x418>
08ad3797 +0x11:  mov    0x8(%ebp),%eax
08ad379a +0x14:  mov    %eax,(%esp)
08ad379d +0x17:  call   08ad38a8 <_ZN13RwSectionLock10leaveWriteEv+0x1a>  ; RwSectionLock::leaveWrite()+0x1a
08ad37a2 +0x1c:  leave
08ad37a3 +0x1d:  ret
```

## 反编译 C

```c
// SectionLock::~SectionLock @ 0x8ad3786

/* DWARF original prototype: void ~SectionLock(SectionLock * this, int __in_chrg) */

void __thiscall SectionLock::~SectionLock(SectionLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  pthread_mutex_destroy((pthread_mutex_t *)this);
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}
```
