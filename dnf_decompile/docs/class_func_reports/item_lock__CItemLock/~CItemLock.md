# ~CItemLock

`_ZN9item_lock9CItemLockD1Ev`

`item_lock::CItemLock::~CItemLock()`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541644  _ZN9item_lock9CItemLockD1Ev
#           item_lock::CItemLock::~CItemLock()
# range [0x08541644, 0x085416f5]
08541644 +0x00:  push   %ebp
08541645 +0x01:  mov    %esp,%ebp
08541647 +0x03:  push   %esi
08541648 +0x04:  push   %ebx
08541649 +0x05:  sub    $0x10,%esp
0854164c +0x08:  mov    0x8(%ebp),%eax
0854164f +0x0b:  movl   $&_ZTVN9item_lock9CItemLockE+0x8,(%eax)
08541655 +0x11:  mov    0x8(%ebp),%eax
08541658 +0x14:  add    $0x48,%eax
0854165b +0x17:  mov    %eax,(%esp)
0854165e +0x1a:  call   085431da <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x1bc>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x1bc
08541663 +0x1f:  jmp    0854167d <+0x39>
08541665 +0x21:  mov    %edx,%ebx
08541667 +0x23:  mov    %eax,%esi
08541669 +0x25:  mov    0x8(%ebp),%eax
0854166c +0x28:  add    $0x20,%eax
0854166f +0x2b:  mov    %eax,(%esp)
08541672 +0x2e:  call   08543074 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x56>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x56
08541677 +0x33:  mov    %esi,%eax
08541679 +0x35:  mov    %ebx,%edx
0854167b +0x37:  jmp    0854168d <+0x49>
0854167d +0x39:  mov    0x8(%ebp),%eax
08541680 +0x3c:  add    $0x20,%eax
08541683 +0x3f:  mov    %eax,(%esp)
08541686 +0x42:  call   08543074 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x56>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x56
0854168b +0x47:  jmp    085416a5 <+0x61>
0854168d +0x49:  mov    %edx,%ebx
0854168f +0x4b:  mov    %eax,%esi
08541691 +0x4d:  mov    0x8(%ebp),%eax
08541694 +0x50:  add    $0x8,%eax
08541697 +0x53:  mov    %eax,(%esp)
0854169a +0x56:  call   08543060 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x42>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x42
0854169f +0x5b:  mov    %esi,%eax
085416a1 +0x5d:  mov    %ebx,%edx
085416a3 +0x5f:  jmp    085416b5 <+0x71>
085416a5 +0x61:  mov    0x8(%ebp),%eax
085416a8 +0x64:  add    $0x8,%eax
085416ab +0x67:  mov    %eax,(%esp)
085416ae +0x6a:  call   08543060 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x42>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x42
085416b3 +0x6f:  jmp    085416d0 <+0x8c>
085416b5 +0x71:  mov    %edx,%ebx
085416b7 +0x73:  mov    %eax,%esi
085416b9 +0x75:  mov    0x8(%ebp),%eax
085416bc +0x78:  mov    %eax,(%esp)
085416bf +0x7b:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085416c4 +0x80:  mov    %esi,%eax
085416c6 +0x82:  mov    %ebx,%edx
085416c8 +0x84:  mov    %eax,(%esp)
085416cb +0x87:  call   08ae3750 <_Unwind_Resume>
085416d0 +0x8c:  mov    0x8(%ebp),%eax
085416d3 +0x8f:  mov    %eax,(%esp)
085416d6 +0x92:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085416db +0x97:  mov    $0x0,%eax
085416e0 +0x9c:  test   %al,%al
085416e2 +0x9e:  je     085416ef <+0xab>
085416e4 +0xa0:  mov    0x8(%ebp),%eax
085416e7 +0xa3:  mov    %eax,(%esp)
085416ea +0xa6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085416ef +0xab:  add    $0x10,%esp
085416f2 +0xae:  pop    %ebx
085416f3 +0xaf:  pop    %esi
085416f4 +0xb0:  pop    %ebp
085416f5 +0xb1:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::~CItemLock @ 0x8541644

/* WARNING: Removing unreachable block (ram,0x085416e4) */
/* item_lock::CItemLock::~CItemLock() */

void __thiscall item_lock::CItemLock::~CItemLock(CItemLock *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9b5a8;
                    /* try { // try from 0854165e to 08541662 has its CatchHandler @ 08541665 */
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::~vector
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
                    /* try { // try from 08541686 to 0854168a has its CatchHandler @ 0854168d */
  std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::~stack
            ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
             (this + 0x20));
                    /* try { // try from 085416ae to 085416b2 has its CatchHandler @ 085416b5 */
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::~map((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
