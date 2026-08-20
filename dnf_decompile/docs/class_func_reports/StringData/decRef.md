# decRef

`_ZN10StringData6decRefEv`

`StringData::decRef()`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad6890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6890  _ZN10StringData6decRefEv
#           StringData::decRef()
# range [0x08ad6890, 0x08ad68bf]
08ad6890 +0x00:  push   %ebp
08ad6891 +0x01:  mov    %esp,%ebp
08ad6893 +0x03:  sub    $0x18,%esp
08ad6896 +0x06:  mov    0x8(%ebp),%edx
08ad6899 +0x09:  mov    $0x1,%eax
08ad689e +0x0e:  mov    %eax,%ecx
08ad68a0 +0x10:  neg    %ecx
08ad68a2 +0x12:  mov    %ecx,%eax
08ad68a4 +0x14:  lock xadd %eax,(%edx)
08ad68a8 +0x18:  add    %ecx,%eax
08ad68aa +0x1a:  test   %eax,%eax
08ad68ac +0x1c:  setle  %al
08ad68af +0x1f:  test   %al,%al
08ad68b1 +0x21:  je     08ad68be <+0x2e>
08ad68b3 +0x23:  mov    0x8(%ebp),%eax
08ad68b6 +0x26:  mov    %eax,(%esp)
08ad68b9 +0x29:  call   0807ddb0 <_init+0x6a8>
08ad68be +0x2e:  leave
08ad68bf +0x2f:  ret
```

## 反编译 C

```c
// StringData::decRef @ 0x8ad6890

/* DWARF original prototype: void decRef(StringData * this) */

void __thiscall StringData::decRef(StringData *this)

{
  int iVar1;
  
  LOCK();
  iVar1 = this->refCount_;
  this->refCount_ = this->refCount_ + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    free(this);
  }
  return;
}
```
