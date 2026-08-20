# enterWrite

`_ZN13RwSectionLock10enterWriteEv`

`RwSectionLock::enterWrite()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad387a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad387a  _ZN13RwSectionLock10enterWriteEv
#           RwSectionLock::enterWrite()
# range [0x08ad387a, 0x08ad388d]
08ad387a +0x00:  push   %ebp
08ad387b +0x01:  mov    %esp,%ebp
08ad387d +0x03:  sub    $0x18,%esp
08ad3880 +0x06:  mov    0x8(%ebp),%eax
08ad3883 +0x09:  mov    %eax,(%esp)
08ad3886 +0x0c:  call   0807e110 <_init+0xa08>
08ad388b +0x11:  leave
08ad388c +0x12:  ret
08ad388d +0x13:  nop
```

## 反编译 C

```c
// RwSectionLock::enterWrite @ 0x8ad387a

/* DWARF original prototype: void enterWrite(RwSectionLock * this) */

void __thiscall RwSectionLock::enterWrite(RwSectionLock *this)

{
  pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  return;
}
```
