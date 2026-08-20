# _M_id

`_ZNKSt6locale2id5_M_idEv`

`std::locale::id::_M_id() const`

| 类 | 地址 |
|---|---|
| `std::locale::id` | `0x086dadb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dadb0  _ZNKSt6locale2id5_M_idEv
#           std::locale::id::_M_id() const
# range [0x086dadb0, 0x086dadef]
086dadb0 +0x00:  push   %ebp
086dadb1 +0x01:  mov    %esp,%ebp
086dadb3 +0x03:  mov    0x8(%ebp),%edx
086dadb6 +0x06:  mov    (%edx),%eax
086dadb8 +0x08:  test   %eax,%eax
086dadba +0x0a:  jne    086dadd7 <+0x27>
086dadbc +0x0c:  mov    $&data#bb92cc41(.plt),%eax
086dadc1 +0x11:  test   %eax,%eax
086dadc3 +0x13:  je     086daddc <+0x2c>
086dadc5 +0x15:  mov    $0x1,%eax
086dadca +0x1a:  lock xadd %eax,&_ZNSt6locale2id11_S_refcountE
086dadd2 +0x22:  add    $0x1,%eax
086dadd5 +0x25:  mov    %eax,(%edx)
086dadd7 +0x27:  sub    $0x1,%eax
086dadda +0x2a:  pop    %ebp
086daddb +0x2b:  ret
086daddc +0x2c:  mov    &_ZNSt6locale2id11_S_refcountE,%eax
086dade1 +0x31:  add    $0x1,%eax
086dade4 +0x34:  mov    %eax,&_ZNSt6locale2id11_S_refcountE
086dade9 +0x39:  jmp    086dadd5 <+0x25>
086dadeb +0x3b:  nop
086dadec +0x3c:  nop
086daded +0x3d:  nop
086dadee +0x3e:  nop
086dadef +0x3f:  nop
```

## 反编译 C

```c
// std::locale::id::_M_id @ 0x86dadb0

/* WARNING: Removing unreachable block (ram,0x086daddc) */
/* std::locale::id::_M_id() const */

int __thiscall std::locale::id::_M_id(id *this)

{
  size_t sVar1;
  
  sVar1 = this->_M_index;
  if (sVar1 == 0) {
    LOCK();
    UNLOCK();
    sVar1 = _S_refcount + 1;
    _S_refcount = _S_refcount + 1;
    this->_M_index = sVar1;
  }
  return sVar1 - 1;
}
```
