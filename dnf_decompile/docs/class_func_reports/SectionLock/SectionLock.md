# SectionLock

`_ZN11SectionLockC1Ev`

`SectionLock::SectionLock()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad3742` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3742  _ZN11SectionLockC1Ev
#           SectionLock::SectionLock()
# range [0x08ad3742, 0x08ad3785]
08ad3742 +0x00:  push   %ebp
08ad3743 +0x01:  mov    %esp,%ebp
08ad3745 +0x03:  sub    $0x28,%esp
08ad3748 +0x06:  mov    0x8(%ebp),%eax
08ad374b +0x09:  mov    %eax,(%esp)
08ad374e +0x0c:  call   08ad38a2 <_ZN13RwSectionLock10leaveWriteEv+0x14>  ; RwSectionLock::leaveWrite()+0x14
08ad3753 +0x11:  movl   $0x1,0x4(%esp)
08ad375b +0x19:  lea    -0xc(%ebp),%eax
08ad375e +0x1c:  mov    %eax,(%esp)
08ad3761 +0x1f:  call   0807e520 <_init+0xe18>
08ad3766 +0x24:  mov    0x8(%ebp),%eax
08ad3769 +0x27:  lea    -0xc(%ebp),%edx
08ad376c +0x2a:  mov    %edx,0x4(%esp)
08ad3770 +0x2e:  mov    %eax,(%esp)
08ad3773 +0x31:  call   0807d970 <_init+0x268>
08ad3778 +0x36:  lea    -0xc(%ebp),%eax
08ad377b +0x39:  mov    %eax,(%esp)
08ad377e +0x3c:  call   0807e060 <_init+0x958>
08ad3783 +0x41:  leave
08ad3784 +0x42:  ret
08ad3785 +0x43:  nop
```

## 反编译 C

```c
// SectionLock::SectionLock @ 0x8ad3742

/* DWARF original prototype: void SectionLock(SectionLock * this) */

void __thiscall SectionLock::SectionLock(SectionLock *this)

{
  pthread_mutexattr_t local_10 [3];
  
  Uncopyable::Uncopyable((Uncopyable *)this);
                    /* Unresolved local var: pthread_mutexattr_t attr@[???] */
  pthread_mutexattr_settype(local_10,1);
  pthread_mutex_init((pthread_mutex_t *)this,local_10);
  pthread_mutexattr_destroy(local_10);
  return;
}
```
