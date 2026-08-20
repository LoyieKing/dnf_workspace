# _reset

`_ZN9item_lock9CItemLock6_resetEv`

`item_lock::CItemLock::_reset()`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541a3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541a3e  _ZN9item_lock9CItemLock6_resetEv
#           item_lock::CItemLock::_reset()
# range [0x08541a3e, 0x08541a95]
08541a3e +0x00:  push   %ebp
08541a3f +0x01:  mov    %esp,%ebp
08541a41 +0x03:  sub    $0x18,%esp
08541a44 +0x06:  mov    0x8(%ebp),%eax
08541a47 +0x09:  add    $0x8,%eax
08541a4a +0x0c:  mov    %eax,(%esp)
08541a4d +0x0f:  call   08543366 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x348>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x348
08541a52 +0x14:  mov    0x8(%ebp),%eax
08541a55 +0x17:  add    $0x48,%eax
08541a58 +0x1a:  mov    %eax,(%esp)
08541a5b +0x1d:  call   0854337a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x35c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x35c
08541a60 +0x22:  jmp    08541a70 <+0x32>
08541a62 +0x24:  mov    0x8(%ebp),%eax
08541a65 +0x27:  add    $0x20,%eax
08541a68 +0x2a:  mov    %eax,(%esp)
08541a6b +0x2d:  call   085433aa <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x38c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x38c
08541a70 +0x32:  mov    0x8(%ebp),%eax
08541a73 +0x35:  add    $0x20,%eax
08541a76 +0x38:  mov    %eax,(%esp)
08541a79 +0x3b:  call   08543396 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x378>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x378
08541a7e +0x40:  xor    $0x1,%eax
08541a81 +0x43:  test   %al,%al
08541a83 +0x45:  jne    08541a62 <+0x24>
08541a85 +0x47:  mov    0x8(%ebp),%eax
08541a88 +0x4a:  add    $0x54,%eax
08541a8b +0x4d:  mov    %eax,(%esp)
08541a8e +0x50:  call   08543052 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x34>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x34
08541a93 +0x55:  leave
08541a94 +0x56:  ret
08541a95 +0x57:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::_reset @ 0x8541a3e

/* item_lock::CItemLock::_reset() */

void __thiscall item_lock::CItemLock::_reset(CItemLock *this)

{
  char cVar1;
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::clear((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
           *)(this + 8));
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::clear
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  while( true ) {
    cVar1 = std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::empty
                      ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>
                        *)(this + 0x20));
    if (cVar1 == '\x01') break;
    std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::pop
              ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
               (this + 0x20));
  }
  CItemLockTimer::Reset((CItemLockTimer *)(this + 0x54));
  return;
}
```
