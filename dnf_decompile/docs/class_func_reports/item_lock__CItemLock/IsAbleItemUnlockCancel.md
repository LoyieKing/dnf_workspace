# IsAbleItemUnlockCancel

`_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh`

`item_lock::CItemLock::IsAbleItemUnlockCancel(unsigned char) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541bb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541bb0  _ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh
#           item_lock::CItemLock::IsAbleItemUnlockCancel(unsigned char) const
# range [0x08541bb0, 0x08541c35]
08541bb0 +0x00:  push   %ebp
08541bb1 +0x01:  mov    %esp,%ebp
08541bb3 +0x03:  sub    $0x38,%esp
08541bb6 +0x06:  mov    0xc(%ebp),%eax
08541bb9 +0x09:  mov    %al,-0x1c(%ebp)
08541bbc +0x0c:  mov    0x8(%ebp),%eax
08541bbf +0x0f:  lea    0x8(%eax),%ecx
08541bc2 +0x12:  lea    -0x10(%ebp),%eax
08541bc5 +0x15:  lea    -0x1c(%ebp),%edx
08541bc8 +0x18:  mov    %edx,0x8(%esp)
08541bcc +0x1c:  mov    %ecx,0x4(%esp)
08541bd0 +0x20:  mov    %eax,(%esp)
08541bd3 +0x23:  call   085433be <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3a0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3a0
08541bd8 +0x28:  sub    $0x4,%esp
08541bdb +0x2b:  mov    0x8(%ebp),%eax
08541bde +0x2e:  lea    0x8(%eax),%edx
08541be1 +0x31:  lea    -0xc(%ebp),%eax
08541be4 +0x34:  mov    %edx,0x4(%esp)
08541be8 +0x38:  mov    %eax,(%esp)
08541beb +0x3b:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
08541bf0 +0x40:  sub    $0x4,%esp
08541bf3 +0x43:  lea    -0xc(%ebp),%eax
08541bf6 +0x46:  mov    %eax,0x4(%esp)
08541bfa +0x4a:  lea    -0x10(%ebp),%eax
08541bfd +0x4d:  mov    %eax,(%esp)
08541c00 +0x50:  call   085433ea <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3cc>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3cc
08541c05 +0x55:  test   %al,%al
08541c07 +0x57:  je     08541c10 <+0x60>
08541c09 +0x59:  mov    $0x13,%eax
08541c0e +0x5e:  jmp    08541c34 <+0x84>
08541c10 +0x60:  lea    -0x10(%ebp),%eax
08541c13 +0x63:  mov    %eax,(%esp)
08541c16 +0x66:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08541c1b +0x6b:  movzbl 0x8(%eax),%eax
08541c1f +0x6f:  cmp    $0x2,%al
08541c21 +0x71:  setne  %al
08541c24 +0x74:  test   %al,%al
08541c26 +0x76:  je     08541c2f <+0x7f>
08541c28 +0x78:  mov    $0x13,%eax
08541c2d +0x7d:  jmp    08541c34 <+0x84>
08541c2f +0x7f:  mov    $0x0,%eax
08541c34 +0x84:  leave
08541c35 +0x85:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::IsAbleItemUnlockCancel @ 0x8541bb0

/* item_lock::CItemLock::IsAbleItemUnlockCancel(unsigned char) const */

undefined4 item_lock::CItemLock::IsAbleItemUnlockCancel(uchar param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    if (*(char *)(iVar3 + 8) == '\x02') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x13;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
