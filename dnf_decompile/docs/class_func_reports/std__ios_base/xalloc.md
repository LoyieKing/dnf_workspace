# xalloc

`_ZNSt8ios_base6xallocEv`

`std::ios_base::xalloc()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08726e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726e20  _ZNSt8ios_base6xallocEv
#           std::ios_base::xalloc()
# range [0x08726e20, 0x08726e4f]
08726e20 +0x00:  mov    $&data#bb92cc41(.plt),%eax
08726e25 +0x05:  push   %ebp
08726e26 +0x06:  test   %eax,%eax
08726e28 +0x08:  mov    %esp,%ebp
08726e2a +0x0a:  je     08726e3e <+0x1e>
08726e2c +0x0c:  mov    $0x1,%eax
08726e31 +0x11:  lock xadd %eax,&_ZZNSt8ios_base6xallocEvE6_S_top
08726e39 +0x19:  add    $0x4,%eax
08726e3c +0x1c:  pop    %ebp
08726e3d +0x1d:  ret
08726e3e +0x1e:  mov    &_ZZNSt8ios_base6xallocEvE6_S_top,%eax
08726e43 +0x23:  lea    0x1(%eax),%edx
08726e46 +0x26:  mov    %edx,&_ZZNSt8ios_base6xallocEvE6_S_top
08726e4c +0x2c:  jmp    08726e39 <+0x19>
08726e4e +0x2e:  nop
08726e4f +0x2f:  nop
```

## 反编译 C

```c
// std::ios_base::xalloc @ 0x8726e20

/* WARNING: Removing unreachable block (ram,0x08726e3e) */
/* std::ios_base::xalloc() */

int std::ios_base::xalloc(void)

{
  int iVar1;
  
  iVar1 = xalloc()::_S_top;
  LOCK();
  xalloc()::_S_top = xalloc()::_S_top + 1;
  UNLOCK();
  return iVar1 + 4;
}
```
