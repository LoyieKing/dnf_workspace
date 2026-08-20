# DoItemUnlockCancel

`_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii`

`item_lock::CItemLock::DoItemUnlockCancel(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x085424c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085424c2  _ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii
#           item_lock::CItemLock::DoItemUnlockCancel(CUser*, int, int)
# range [0x085424c2, 0x0854261d]
085424c2 +0x000:  push   %ebp
085424c3 +0x001:  mov    %esp,%ebp
085424c5 +0x003:  push   %ebx
085424c6 +0x004:  sub    $0x34,%esp
085424c9 +0x007:  mov    0x14(%ebp),%eax
085424cc +0x00a:  movzwl %ax,%edx
085424cf +0x00d:  mov    0x10(%ebp),%eax
085424d2 +0x010:  movzwl %ax,%eax
085424d5 +0x013:  mov    %edx,0x8(%esp)
085424d9 +0x017:  mov    %eax,0x4(%esp)
085424dd +0x01b:  mov    0xc(%ebp),%eax
085424e0 +0x01e:  mov    %eax,(%esp)
085424e3 +0x021:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
085424e8 +0x026:  mov    %eax,-0xc(%ebp)
085424eb +0x029:  cmpl   $0x0,-0xc(%ebp)
085424ef +0x02d:  jne    085424fb <+0x39>
085424f1 +0x02f:  mov    $0x0,%eax
085424f6 +0x034:  jmp    08542619 <+0x157>
085424fb +0x039:  mov    -0xc(%ebp),%eax
085424fe +0x03c:  add    $0x11,%eax
08542501 +0x03f:  mov    %eax,(%esp)
08542504 +0x042:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08542509 +0x047:  mov    %al,-0x11(%ebp)
0854250c +0x04a:  movzbl -0x11(%ebp),%eax
08542510 +0x04e:  test   %al,%al
08542512 +0x050:  jne    0854251e <+0x5c>
08542514 +0x052:  mov    $0x0,%eax
08542519 +0x057:  jmp    08542619 <+0x157>
0854251e +0x05c:  mov    0x8(%ebp),%eax
08542521 +0x05f:  lea    0x8(%eax),%ecx
08542524 +0x062:  lea    -0x18(%ebp),%eax
08542527 +0x065:  lea    -0x11(%ebp),%edx
0854252a +0x068:  mov    %edx,0x8(%esp)
0854252e +0x06c:  mov    %ecx,0x4(%esp)
08542532 +0x070:  mov    %eax,(%esp)
08542535 +0x073:  call   085434b4 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x496>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x496
0854253a +0x078:  sub    $0x4,%esp
0854253d +0x07b:  mov    0x8(%ebp),%eax
08542540 +0x07e:  lea    0x8(%eax),%edx
08542543 +0x081:  lea    -0x10(%ebp),%eax
08542546 +0x084:  mov    %edx,0x4(%esp)
0854254a +0x088:  mov    %eax,(%esp)
0854254d +0x08b:  call   08543274 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x256>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x256
08542552 +0x090:  sub    $0x4,%esp
08542555 +0x093:  lea    -0x10(%ebp),%eax
08542558 +0x096:  mov    %eax,0x4(%esp)
0854255c +0x09a:  lea    -0x18(%ebp),%eax
0854255f +0x09d:  mov    %eax,(%esp)
08542562 +0x0a0:  call   085434e0 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4c2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4c2
08542567 +0x0a5:  test   %al,%al
08542569 +0x0a7:  je     08542575 <+0xb3>
0854256b +0x0a9:  mov    $0x0,%eax
08542570 +0x0ae:  jmp    08542619 <+0x157>
08542575 +0x0b3:  lea    -0x18(%ebp),%eax
08542578 +0x0b6:  mov    %eax,(%esp)
0854257b +0x0b9:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542580 +0x0be:  movb   $0x1,0x8(%eax)
08542584 +0x0c2:  lea    -0x18(%ebp),%eax
08542587 +0x0c5:  mov    %eax,(%esp)
0854258a +0x0c8:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
0854258f +0x0cd:  mov    %eax,%ebx
08542591 +0x0cf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08542598 +0x0d6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0854259d +0x0db:  mov    %eax,0x4(%ebx)
085425a0 +0x0de:  mov    0x8(%ebp),%eax
085425a3 +0x0e1:  mov    %eax,(%esp)
085425a6 +0x0e4:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085425ab +0x0e9:  mov    0x8(%ebp),%eax
085425ae +0x0ec:  add    $0x54,%eax
085425b1 +0x0ef:  mov    %eax,(%esp)
085425b4 +0x0f2:  call   085414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>  ; item_lock::CItemLockTimer::DecreaseItemLockTimer()
085425b9 +0x0f7:  mov    0x14(%ebp),%eax
085425bc +0x0fa:  mov    %eax,0xc(%esp)
085425c0 +0x0fe:  mov    0x10(%ebp),%eax
085425c3 +0x101:  mov    %eax,0x8(%esp)
085425c7 +0x105:  mov    0xc(%ebp),%eax
085425ca +0x108:  mov    %eax,0x4(%esp)
085425ce +0x10c:  mov    0x8(%ebp),%eax
085425d1 +0x10f:  mov    %eax,(%esp)
085425d4 +0x112:  call   08542026 <_ZN9item_lock9CItemLock27SendRequestItemUnlockCancelEP5CUserii>  ; item_lock::CItemLock::SendRequestItemUnlockCancel(CUser*, int, int)
085425d9 +0x117:  mov    -0xc(%ebp),%eax
085425dc +0x11a:  mov    0x7(%eax),%edx
085425df +0x11d:  mov    -0xc(%ebp),%eax
085425e2 +0x120:  mov    0x2(%eax),%eax
085425e5 +0x123:  mov    0xc(%ebp),%ecx
085425e8 +0x126:  add    $0x79700,%ecx
085425ee +0x12c:  mov    %edx,0x14(%esp)
085425f2 +0x130:  mov    %eax,0x10(%esp)
085425f6 +0x134:  mov    0x14(%ebp),%eax
085425f9 +0x137:  mov    %eax,0xc(%esp)
085425fd +0x13b:  mov    0x10(%ebp),%eax
08542600 +0x13e:  mov    %eax,0x8(%esp)
08542604 +0x142:  movl   $0x2,0x4(%esp)
0854260c +0x14a:  mov    %ecx,(%esp)
0854260f +0x14d:  call   08689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>  ; cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)
08542614 +0x152:  mov    $0x1,%eax
08542619 +0x157:  mov    -0x4(%ebp),%ebx
0854261c +0x15a:  leave
0854261d +0x15b:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::DoItemUnlockCancel @ 0x85424c2

/* item_lock::CItemLock::DoItemUnlockCancel(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemUnlockCancel(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_1c [7];
  char local_15;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    local_15 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 + 0x11));
    if (local_15 == '\0') {
      uVar2 = 0;
    }
    else {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::find((uchar *)local_1c);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                        (local_1c,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_1c);
        *(undefined1 *)(iVar3 + 8) = 1;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_1c);
        uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        charac_expand::CData::alter((CData *)this);
        CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
        SendRequestItemUnlockCancel(this,param_1,param_2,param_3);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x02',param_2,param_3,
                   *(int *)(local_10 + 2),*(int *)(local_10 + 7));
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
