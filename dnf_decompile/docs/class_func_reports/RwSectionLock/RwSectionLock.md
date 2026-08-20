# RwSectionLock

`_ZN13RwSectionLockC1Ev`

`RwSectionLock::RwSectionLock()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad37f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37f8  _ZN13RwSectionLockC1Ev
#           RwSectionLock::RwSectionLock()
# range [0x08ad37f8, 0x08ad3833]
08ad37f8 +0x00:  push   %ebp
08ad37f9 +0x01:  mov    %esp,%ebp
08ad37fb +0x03:  sub    $0x28,%esp
08ad37fe +0x06:  mov    0x8(%ebp),%eax
08ad3801 +0x09:  mov    %eax,(%esp)
08ad3804 +0x0c:  call   08ad38a2 <_ZN13RwSectionLock10leaveWriteEv+0x14>  ; RwSectionLock::leaveWrite()+0x14
08ad3809 +0x11:  lea    -0x10(%ebp),%eax
08ad380c +0x14:  mov    %eax,(%esp)
08ad380f +0x17:  call   0807e540 <_init+0xe38>
08ad3814 +0x1c:  mov    0x8(%ebp),%eax
08ad3817 +0x1f:  lea    -0x10(%ebp),%edx
08ad381a +0x22:  mov    %edx,0x4(%esp)
08ad381e +0x26:  mov    %eax,(%esp)
08ad3821 +0x29:  call   0807e0a0 <_init+0x998>
08ad3826 +0x2e:  lea    -0x10(%ebp),%eax
08ad3829 +0x31:  mov    %eax,(%esp)
08ad382c +0x34:  call   0807e630 <_init+0xf28>
08ad3831 +0x39:  leave
08ad3832 +0x3a:  ret
08ad3833 +0x3b:  nop
```

## 反编译 C

```c
// RwSectionLock::RwSectionLock @ 0x8ad37f8

/* DWARF original prototype: void RwSectionLock(RwSectionLock * this) */

void __thiscall RwSectionLock::RwSectionLock(RwSectionLock *this)

{
  pthread_rwlockattr_t local_14 [2];
  
  Uncopyable::Uncopyable((Uncopyable *)this);
                    /* Unresolved local var: pthread_rwlockattr_t attr@[???] */
  pthread_rwlockattr_init(local_14);
  pthread_rwlock_init((pthread_rwlock_t *)this,local_14);
  pthread_rwlockattr_destroy(local_14);
  return;
}
```
