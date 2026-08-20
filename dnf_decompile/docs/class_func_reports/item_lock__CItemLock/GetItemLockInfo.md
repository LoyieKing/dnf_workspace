# GetItemLockInfo

`_ZNK9item_lock9CItemLock15GetItemLockInfoEhRi`

`item_lock::CItemLock::GetItemLockInfo(unsigned char, int&) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x0854261e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854261e  _ZNK9item_lock9CItemLock15GetItemLockInfoEhRi
#           item_lock::CItemLock::GetItemLockInfo(unsigned char, int&) const
# range [0x0854261e, 0x085426a5]
0854261e +0x00:  push   %ebp
0854261f +0x01:  mov    %esp,%ebp
08542621 +0x03:  sub    $0x38,%esp
08542624 +0x06:  mov    0xc(%ebp),%eax
08542627 +0x09:  mov    %al,-0x1c(%ebp)
0854262a +0x0c:  mov    0x8(%ebp),%eax
0854262d +0x0f:  lea    0x8(%eax),%ecx
08542630 +0x12:  lea    -0x10(%ebp),%eax
08542633 +0x15:  lea    -0x1c(%ebp),%edx
08542636 +0x18:  mov    %edx,0x8(%esp)
0854263a +0x1c:  mov    %ecx,0x4(%esp)
0854263e +0x20:  mov    %eax,(%esp)
08542641 +0x23:  call   085433be <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3a0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3a0
08542646 +0x28:  sub    $0x4,%esp
08542649 +0x2b:  mov    0x8(%ebp),%eax
0854264c +0x2e:  lea    0x8(%eax),%edx
0854264f +0x31:  lea    -0xc(%ebp),%eax
08542652 +0x34:  mov    %edx,0x4(%esp)
08542656 +0x38:  mov    %eax,(%esp)
08542659 +0x3b:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
0854265e +0x40:  sub    $0x4,%esp
08542661 +0x43:  lea    -0xc(%ebp),%eax
08542664 +0x46:  mov    %eax,0x4(%esp)
08542668 +0x4a:  lea    -0x10(%ebp),%eax
0854266b +0x4d:  mov    %eax,(%esp)
0854266e +0x50:  call   08543326 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x308>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x308
08542673 +0x55:  test   %al,%al
08542675 +0x57:  je     0854269e <+0x80>
08542677 +0x59:  lea    -0x10(%ebp),%eax
0854267a +0x5c:  mov    %eax,(%esp)
0854267d +0x5f:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08542682 +0x64:  mov    0x4(%eax),%edx
08542685 +0x67:  mov    0x10(%ebp),%eax
08542688 +0x6a:  mov    %edx,(%eax)
0854268a +0x6c:  lea    -0x10(%ebp),%eax
0854268d +0x6f:  mov    %eax,(%esp)
08542690 +0x72:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08542695 +0x77:  movzbl 0x8(%eax),%eax
08542699 +0x7b:  movzbl %al,%eax
0854269c +0x7e:  jmp    085426a3 <+0x85>
0854269e +0x80:  mov    $0x0,%eax
085426a3 +0x85:  leave
085426a4 +0x86:  ret
085426a5 +0x87:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::GetItemLockInfo @ 0x854261e

/* item_lock::CItemLock::GetItemLockInfo(unsigned char, int&) const */

undefined1 __thiscall
item_lock::CItemLock::GetItemLockInfo(CItemLock *this,uchar param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
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
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    *param_2 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    uVar2 = *(undefined1 *)(iVar3 + 8);
  }
  return uVar2;
}
```
