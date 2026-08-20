# enterRead

`_ZN13RwSectionLock9enterReadEv`

`RwSectionLock::enterRead()`

| 类 | 地址 |
|---|---|
| `RwSectionLock` | `0x08ad3852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3852  _ZN13RwSectionLock9enterReadEv
#           RwSectionLock::enterRead()
# range [0x08ad3852, 0x08ad3865]
08ad3852 +0x00:  push   %ebp
08ad3853 +0x01:  mov    %esp,%ebp
08ad3855 +0x03:  sub    $0x18,%esp
08ad3858 +0x06:  mov    0x8(%ebp),%eax
08ad385b +0x09:  mov    %eax,(%esp)
08ad385e +0x0c:  call   0807de80 <_init+0x778>
08ad3863 +0x11:  leave
08ad3864 +0x12:  ret
08ad3865 +0x13:  nop
```

## 反编译 C

```c
// RwSectionLock::enterRead @ 0x8ad3852

/* DWARF original prototype: void enterRead(RwSectionLock * this) */

void __thiscall RwSectionLock::enterRead(RwSectionLock *this)

{
  pthread_rwlock_rdlock((pthread_rwlock_t *)this);
  return;
}
```
