# leaveRead

`_ZN13RwSectionLock9leaveReadEv`

`RwSectionLock::leaveRead()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad3866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3866  _ZN13RwSectionLock9leaveReadEv
#           RwSectionLock::leaveRead()
# range [0x08ad3866, 0x08ad3879]
08ad3866 +0x00:  push   %ebp
08ad3867 +0x01:  mov    %esp,%ebp
08ad3869 +0x03:  sub    $0x18,%esp
08ad386c +0x06:  mov    0x8(%ebp),%eax
08ad386f +0x09:  mov    %eax,(%esp)
08ad3872 +0x0c:  call   0807e250 <_init+0xb48>
08ad3877 +0x11:  leave
08ad3878 +0x12:  ret
08ad3879 +0x13:  nop
```

## 反编译 C

```c
// RwSectionLock::leaveRead @ 0x8ad3866

/* DWARF original prototype: void leaveRead(RwSectionLock * this) */

void __thiscall RwSectionLock::leaveRead(RwSectionLock *this)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}
```
