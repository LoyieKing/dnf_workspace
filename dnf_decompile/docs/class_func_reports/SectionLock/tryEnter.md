# tryEnter

`_ZN11SectionLock8tryEnterEv`

`SectionLock::tryEnter()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad37b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37b8  _ZN11SectionLock8tryEnterEv
#           SectionLock::tryEnter()
# range [0x08ad37b8, 0x08ad37cf]
08ad37b8 +0x00:  push   %ebp
08ad37b9 +0x01:  mov    %esp,%ebp
08ad37bb +0x03:  sub    $0x18,%esp
08ad37be +0x06:  mov    0x8(%ebp),%eax
08ad37c1 +0x09:  mov    %eax,(%esp)
08ad37c4 +0x0c:  call   0807e1d0 <_init+0xac8>
08ad37c9 +0x11:  test   %eax,%eax
08ad37cb +0x13:  setne  %al
08ad37ce +0x16:  leave
08ad37cf +0x17:  ret
```

## 反编译 C

```c
// SectionLock::tryEnter @ 0x8ad37b8

/* DWARF original prototype: bool tryEnter(SectionLock * this) */

bool __thiscall SectionLock::tryEnter(SectionLock *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 != 0;
}
```
