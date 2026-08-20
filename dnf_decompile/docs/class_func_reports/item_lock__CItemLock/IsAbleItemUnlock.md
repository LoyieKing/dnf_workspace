# IsAbleItemUnlock

`_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi`

`item_lock::CItemLock::IsAbleItemUnlock(unsigned char, int&) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541b2a  _ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi
#           item_lock::CItemLock::IsAbleItemUnlock(unsigned char, int&) const
# range [0x08541b2a, 0x08541baf]
08541b2a +0x00:  push   %ebp
08541b2b +0x01:  mov    %esp,%ebp
08541b2d +0x03:  sub    $0x38,%esp
08541b30 +0x06:  mov    0xc(%ebp),%eax
08541b33 +0x09:  mov    %al,-0x1c(%ebp)
08541b36 +0x0c:  mov    0x8(%ebp),%eax
08541b39 +0x0f:  lea    0x8(%eax),%ecx
08541b3c +0x12:  lea    -0x10(%ebp),%eax
08541b3f +0x15:  lea    -0x1c(%ebp),%edx
08541b42 +0x18:  mov    %edx,0x8(%esp)
08541b46 +0x1c:  mov    %ecx,0x4(%esp)
08541b4a +0x20:  mov    %eax,(%esp)
08541b4d +0x23:  call   085433be <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3a0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3a0
08541b52 +0x28:  sub    $0x4,%esp
08541b55 +0x2b:  mov    0x8(%ebp),%eax
08541b58 +0x2e:  lea    0x8(%eax),%edx
08541b5b +0x31:  lea    -0xc(%ebp),%eax
08541b5e +0x34:  mov    %edx,0x4(%esp)
08541b62 +0x38:  mov    %eax,(%esp)
08541b65 +0x3b:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
08541b6a +0x40:  sub    $0x4,%esp
08541b6d +0x43:  lea    -0xc(%ebp),%eax
08541b70 +0x46:  mov    %eax,0x4(%esp)
08541b74 +0x4a:  lea    -0x10(%ebp),%eax
08541b77 +0x4d:  mov    %eax,(%esp)
08541b7a +0x50:  call   085433ea <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3cc>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3cc
08541b7f +0x55:  test   %al,%al
08541b81 +0x57:  je     08541b8a <+0x60>
08541b83 +0x59:  mov    $0x13,%eax
08541b88 +0x5e:  jmp    08541bae <+0x84>
08541b8a +0x60:  lea    -0x10(%ebp),%eax
08541b8d +0x63:  mov    %eax,(%esp)
08541b90 +0x66:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08541b95 +0x6b:  movzbl 0x8(%eax),%eax
08541b99 +0x6f:  cmp    $0x1,%al
08541b9b +0x71:  setne  %al
08541b9e +0x74:  test   %al,%al
08541ba0 +0x76:  je     08541ba9 <+0x7f>
08541ba2 +0x78:  mov    $0x13,%eax
08541ba7 +0x7d:  jmp    08541bae <+0x84>
08541ba9 +0x7f:  mov    $0x0,%eax
08541bae +0x84:  leave
08541baf +0x85:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::IsAbleItemUnlock @ 0x8541b2a

/* item_lock::CItemLock::IsAbleItemUnlock(unsigned char, int&) const */

undefined4 item_lock::CItemLock::IsAbleItemUnlock(uchar param_1,int *param_2)

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
    if (*(char *)(iVar3 + 8) == '\x01') {
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
