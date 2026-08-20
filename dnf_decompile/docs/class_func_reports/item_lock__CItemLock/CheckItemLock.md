# CheckItemLock

`_ZNK9item_lock9CItemLock13CheckItemLockEh`

`item_lock::CItemLock::CheckItemLock(unsigned char) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541a96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541a96  _ZNK9item_lock9CItemLock13CheckItemLockEh
#           item_lock::CItemLock::CheckItemLock(unsigned char) const
# range [0x08541a96, 0x08541afd]
08541a96 +0x00:  push   %ebp
08541a97 +0x01:  mov    %esp,%ebp
08541a99 +0x03:  sub    $0x38,%esp
08541a9c +0x06:  mov    0xc(%ebp),%eax
08541a9f +0x09:  mov    %al,-0x1c(%ebp)
08541aa2 +0x0c:  mov    0x8(%ebp),%eax
08541aa5 +0x0f:  lea    0x8(%eax),%ecx
08541aa8 +0x12:  lea    -0x10(%ebp),%eax
08541aab +0x15:  lea    -0x1c(%ebp),%edx
08541aae +0x18:  mov    %edx,0x8(%esp)
08541ab2 +0x1c:  mov    %ecx,0x4(%esp)
08541ab6 +0x20:  mov    %eax,(%esp)
08541ab9 +0x23:  call   085433be <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3a0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3a0
08541abe +0x28:  sub    $0x4,%esp
08541ac1 +0x2b:  mov    0x8(%ebp),%eax
08541ac4 +0x2e:  lea    0x8(%eax),%edx
08541ac7 +0x31:  lea    -0xc(%ebp),%eax
08541aca +0x34:  mov    %edx,0x4(%esp)
08541ace +0x38:  mov    %eax,(%esp)
08541ad1 +0x3b:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
08541ad6 +0x40:  sub    $0x4,%esp
08541ad9 +0x43:  lea    -0xc(%ebp),%eax
08541adc +0x46:  mov    %eax,0x4(%esp)
08541ae0 +0x4a:  lea    -0x10(%ebp),%eax
08541ae3 +0x4d:  mov    %eax,(%esp)
08541ae6 +0x50:  call   08543326 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x308>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x308
08541aeb +0x55:  test   %al,%al
08541aed +0x57:  je     08541af6 <+0x60>
08541aef +0x59:  mov    $0x1,%eax
08541af4 +0x5e:  jmp    08541afb <+0x65>
08541af6 +0x60:  mov    $0x0,%eax
08541afb +0x65:  leave
08541afc +0x66:  ret
08541afd +0x67:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::CheckItemLock @ 0x8541a96

/* item_lock::CItemLock::CheckItemLock(unsigned char) const */

bool item_lock::CItemLock::CheckItemLock(uchar param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 != '\0';
}
```
