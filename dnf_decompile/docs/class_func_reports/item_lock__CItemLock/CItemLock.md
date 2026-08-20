# CItemLock

`_ZN9item_lock9CItemLockC1Ev`

`item_lock::CItemLock::CItemLock()`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x0854156a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854156a  _ZN9item_lock9CItemLockC1Ev
#           item_lock::CItemLock::CItemLock()
# range [0x0854156a, 0x0854163f]
0854156a +0x00:  push   %ebp
0854156b +0x01:  mov    %esp,%ebp
0854156d +0x03:  push   %esi
0854156e +0x04:  push   %ebx
0854156f +0x05:  sub    $0x40,%esp
08541572 +0x08:  mov    0x8(%ebp),%eax
08541575 +0x0b:  mov    %eax,(%esp)
08541578 +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0854157d +0x13:  mov    0x8(%ebp),%eax
08541580 +0x16:  movl   $&_ZTVN9item_lock9CItemLockE+0x8,(%eax)
08541586 +0x1c:  mov    0x8(%ebp),%eax
08541589 +0x1f:  add    $0x8,%eax
0854158c +0x22:  mov    %eax,(%esp)
0854158f +0x25:  call   08543088 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x6a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x6a
08541594 +0x2a:  lea    -0x30(%ebp),%eax
08541597 +0x2d:  mov    %eax,(%esp)
0854159a +0x30:  call   08543102 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0xe4>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0xe4
0854159f +0x35:  mov    0x8(%ebp),%eax
085415a2 +0x38:  lea    0x20(%eax),%edx
085415a5 +0x3b:  lea    -0x30(%ebp),%eax
085415a8 +0x3e:  mov    %eax,0x4(%esp)
085415ac +0x42:  mov    %edx,(%esp)
085415af +0x45:  call   085431a4 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x186>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x186
085415b4 +0x4a:  jmp    085415cb <+0x61>
085415b6 +0x4c:  mov    %edx,%ebx
085415b8 +0x4e:  mov    %eax,%esi
085415ba +0x50:  lea    -0x30(%ebp),%eax
085415bd +0x53:  mov    %eax,(%esp)
085415c0 +0x56:  call   08543116 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0xf8>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0xf8
085415c5 +0x5b:  mov    %esi,%eax
085415c7 +0x5d:  mov    %ebx,%edx
085415c9 +0x5f:  jmp    08541611 <+0xa7>
085415cb +0x61:  lea    -0x30(%ebp),%eax
085415ce +0x64:  mov    %eax,(%esp)
085415d1 +0x67:  call   08543116 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0xf8>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0xf8
085415d6 +0x6c:  mov    0x8(%ebp),%eax
085415d9 +0x6f:  add    $0x48,%eax
085415dc +0x72:  mov    %eax,(%esp)
085415df +0x75:  call   085431c6 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x1a8>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x1a8
085415e4 +0x7a:  mov    0x8(%ebp),%eax
085415e7 +0x7d:  add    $0x54,%eax
085415ea +0x80:  mov    %eax,(%esp)
085415ed +0x83:  call   08543044 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x26>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x26
085415f2 +0x88:  add    $0x40,%esp
085415f5 +0x8b:  pop    %ebx
085415f6 +0x8c:  pop    %esi
085415f7 +0x8d:  pop    %ebp
085415f8 +0x8e:  ret
085415f9 +0x8f:  mov    %edx,%ebx
085415fb +0x91:  mov    %eax,%esi
085415fd +0x93:  mov    0x8(%ebp),%eax
08541600 +0x96:  add    $0x20,%eax
08541603 +0x99:  mov    %eax,(%esp)
08541606 +0x9c:  call   08543074 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x56>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x56
0854160b +0xa1:  mov    %esi,%eax
0854160d +0xa3:  mov    %ebx,%edx
0854160f +0xa5:  jmp    08541611 <+0xa7>
08541611 +0xa7:  mov    %edx,%ebx
08541613 +0xa9:  mov    %eax,%esi
08541615 +0xab:  mov    0x8(%ebp),%eax
08541618 +0xae:  add    $0x8,%eax
0854161b +0xb1:  mov    %eax,(%esp)
0854161e +0xb4:  call   08543060 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x42>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x42
08541623 +0xb9:  mov    %esi,%eax
08541625 +0xbb:  mov    %ebx,%edx
08541627 +0xbd:  jmp    08541629 <+0xbf>
08541629 +0xbf:  mov    %edx,%ebx
0854162b +0xc1:  mov    %eax,%esi
0854162d +0xc3:  mov    0x8(%ebp),%eax
08541630 +0xc6:  mov    %eax,(%esp)
08541633 +0xc9:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08541638 +0xce:  mov    %esi,%eax
0854163a +0xd0:  mov    %ebx,%edx
0854163c +0xd2:  mov    %eax,(%esp)
0854163f +0xd5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// item_lock::CItemLock::CItemLock @ 0x854156a

/* item_lock::CItemLock::CItemLock() */

void __thiscall item_lock::CItemLock::CItemLock(CItemLock *this)

{
  deque<unsigned_char,std::allocator<unsigned_char>> local_34 [40];
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9b5a8;
                    /* try { // try from 0854158f to 08541593 has its CatchHandler @ 08541629 */
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::map((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
         *)(this + 8));
                    /* try { // try from 0854159a to 0854159e has its CatchHandler @ 08541611 */
  std::deque<unsigned_char,std::allocator<unsigned_char>>::deque(local_34);
                    /* try { // try from 085415af to 085415b3 has its CatchHandler @ 085415b6 */
  std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::stack
            ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
             (this + 0x20),(deque *)local_34);
                    /* try { // try from 085415d1 to 085415d5 has its CatchHandler @ 08541611 */
  std::deque<unsigned_char,std::allocator<unsigned_char>>::~deque(local_34);
                    /* try { // try from 085415df to 085415e3 has its CatchHandler @ 085415f9 */
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::vector
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  CItemLockTimer::CItemLockTimer((CItemLockTimer *)(this + 0x54));
  return;
}
```
