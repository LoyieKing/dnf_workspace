# enter

`_ZN11SectionLock5enterEv`

`SectionLock::enter()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad37a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37a4  _ZN11SectionLock5enterEv
#           SectionLock::enter()
# range [0x08ad37a4, 0x08ad37b7]
08ad37a4 +0x00:  push   %ebp
08ad37a5 +0x01:  mov    %esp,%ebp
08ad37a7 +0x03:  sub    $0x18,%esp
08ad37aa +0x06:  mov    0x8(%ebp),%eax
08ad37ad +0x09:  mov    %eax,(%esp)
08ad37b0 +0x0c:  call   0807e1f0 <_init+0xae8>
08ad37b5 +0x11:  leave
08ad37b6 +0x12:  ret
08ad37b7 +0x13:  nop
```

## 反编译 C

```c
// SectionLock::enter @ 0x8ad37a4

/* DWARF original prototype: void enter(SectionLock * this) */

void __thiscall SectionLock::enter(SectionLock *this)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  return;
}
```
