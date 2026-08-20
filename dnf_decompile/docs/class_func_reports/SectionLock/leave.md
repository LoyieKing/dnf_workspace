# leave

`_ZN11SectionLock5leaveEv`

`SectionLock::leave()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad37d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37d0  _ZN11SectionLock5leaveEv
#           SectionLock::leave()
# range [0x08ad37d0, 0x08ad37e3]
08ad37d0 +0x00:  push   %ebp
08ad37d1 +0x01:  mov    %esp,%ebp
08ad37d3 +0x03:  sub    $0x18,%esp
08ad37d6 +0x06:  mov    0x8(%ebp),%eax
08ad37d9 +0x09:  mov    %eax,(%esp)
08ad37dc +0x0c:  call   0807dee0 <_init+0x7d8>
08ad37e1 +0x11:  leave
08ad37e2 +0x12:  ret
08ad37e3 +0x13:  nop
```

## 反编译 C

```c
// SectionLock::leave @ 0x8ad37d0

/* DWARF original prototype: void leave(SectionLock * this) */

void __thiscall SectionLock::leave(SectionLock *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}
```
