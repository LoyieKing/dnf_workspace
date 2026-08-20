# DoItemUnlock

`_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii`

`item_lock::CItemLock::DoItemUnlock(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x0854231a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854231a  _ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii
#           item_lock::CItemLock::DoItemUnlock(CUser*, int, int)
# range [0x0854231a, 0x085424c1]
0854231a +0x000:  push   %ebp
0854231b +0x001:  mov    %esp,%ebp
0854231d +0x003:  push   %ebx
0854231e +0x004:  sub    $0x44,%esp
08542321 +0x007:  mov    0x14(%ebp),%eax
08542324 +0x00a:  movzwl %ax,%edx
08542327 +0x00d:  mov    0x10(%ebp),%eax
0854232a +0x010:  movzwl %ax,%eax
0854232d +0x013:  mov    %edx,0x8(%esp)
08542331 +0x017:  mov    %eax,0x4(%esp)
08542335 +0x01b:  mov    0xc(%ebp),%eax
08542338 +0x01e:  mov    %eax,(%esp)
0854233b +0x021:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
08542340 +0x026:  mov    %eax,-0x10(%ebp)
08542343 +0x029:  cmpl   $0x0,-0x10(%ebp)
08542347 +0x02d:  jne    08542353 <+0x39>
08542349 +0x02f:  mov    $0x0,%eax
0854234e +0x034:  jmp    085424bc <+0x1a2>
08542353 +0x039:  mov    -0x10(%ebp),%eax
08542356 +0x03c:  add    $0x11,%eax
08542359 +0x03f:  mov    %eax,(%esp)
0854235c +0x042:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08542361 +0x047:  mov    %al,-0x15(%ebp)
08542364 +0x04a:  movzbl -0x15(%ebp),%eax
08542368 +0x04e:  test   %al,%al
0854236a +0x050:  jne    08542376 <+0x5c>
0854236c +0x052:  mov    $0x0,%eax
08542371 +0x057:  jmp    085424bc <+0x1a2>
08542376 +0x05c:  mov    0x8(%ebp),%eax
08542379 +0x05f:  lea    0x8(%eax),%ecx
0854237c +0x062:  lea    -0x1c(%ebp),%eax
0854237f +0x065:  lea    -0x15(%ebp),%edx
08542382 +0x068:  mov    %edx,0x8(%esp)
08542386 +0x06c:  mov    %ecx,0x4(%esp)
0854238a +0x070:  mov    %eax,(%esp)
0854238d +0x073:  call   085434b4 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x496>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x496
08542392 +0x078:  sub    $0x4,%esp
08542395 +0x07b:  mov    0x8(%ebp),%eax
08542398 +0x07e:  lea    0x8(%eax),%edx
0854239b +0x081:  lea    -0x14(%ebp),%eax
0854239e +0x084:  mov    %edx,0x4(%esp)
085423a2 +0x088:  mov    %eax,(%esp)
085423a5 +0x08b:  call   08543274 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x256>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x256
085423aa +0x090:  sub    $0x4,%esp
085423ad +0x093:  lea    -0x14(%ebp),%eax
085423b0 +0x096:  mov    %eax,0x4(%esp)
085423b4 +0x09a:  lea    -0x1c(%ebp),%eax
085423b7 +0x09d:  mov    %eax,(%esp)
085423ba +0x0a0:  call   085434e0 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4c2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4c2
085423bf +0x0a5:  test   %al,%al
085423c1 +0x0a7:  je     085423cd <+0xb3>
085423c3 +0x0a9:  mov    $0x0,%eax
085423c8 +0x0ae:  jmp    085424bc <+0x1a2>
085423cd +0x0b3:  lea    -0x1c(%ebp),%eax
085423d0 +0x0b6:  mov    %eax,(%esp)
085423d3 +0x0b9:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
085423d8 +0x0be:  movb   $0x2,0x8(%eax)
085423dc +0x0c2:  lea    -0x1c(%ebp),%eax
085423df +0x0c5:  mov    %eax,(%esp)
085423e2 +0x0c8:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
085423e7 +0x0cd:  mov    %eax,%ebx
085423e9 +0x0cf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085423f0 +0x0d6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085423f5 +0x0db:  mov    %eax,0x4(%ebx)
085423f8 +0x0de:  mov    0x8(%ebp),%eax
085423fb +0x0e1:  mov    %eax,(%esp)
085423fe +0x0e4:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08542403 +0x0e9:  mov    0x8(%ebp),%eax
08542406 +0x0ec:  lea    0x54(%eax),%edx
08542409 +0x0ef:  mov    0xc(%ebp),%eax
0854240c +0x0f2:  mov    %eax,0x4(%esp)
08542410 +0x0f6:  mov    %edx,(%esp)
08542413 +0x0f9:  call   0854147c <_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser>  ; item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)
08542418 +0x0fe:  movl   $0x0,-0xc(%ebp)
0854241f +0x105:  lea    -0x1c(%ebp),%eax
08542422 +0x108:  mov    %eax,(%esp)
08542425 +0x10b:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
0854242a +0x110:  mov    0x4(%eax),%eax
0854242d +0x113:  lea    0x3f480(%eax),%ebx
08542433 +0x119:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0854243a +0x120:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0854243f +0x125:  mov    %ebx,%edx
08542441 +0x127:  sub    %eax,%edx
08542443 +0x129:  mov    %edx,%eax
08542445 +0x12b:  mov    %eax,-0xc(%ebp)
08542448 +0x12e:  cmpl   $0x0,-0xc(%ebp)
0854244c +0x132:  jns    08542455 <+0x13b>
0854244e +0x134:  movl   $0x0,-0xc(%ebp)
08542455 +0x13b:  mov    -0xc(%ebp),%eax
08542458 +0x13e:  mov    %eax,0x10(%esp)
0854245c +0x142:  mov    0x14(%ebp),%eax
0854245f +0x145:  mov    %eax,0xc(%esp)
08542463 +0x149:  mov    0x10(%ebp),%eax
08542466 +0x14c:  mov    %eax,0x8(%esp)
0854246a +0x150:  mov    0xc(%ebp),%eax
0854246d +0x153:  mov    %eax,0x4(%esp)
08542471 +0x157:  mov    0x8(%ebp),%eax
08542474 +0x15a:  mov    %eax,(%esp)
08542477 +0x15d:  call   08541f5a <_ZN9item_lock9CItemLock21SendRequestItemUnlockEP5CUseriii>  ; item_lock::CItemLock::SendRequestItemUnlock(CUser*, int, int, int)
0854247c +0x162:  mov    -0x10(%ebp),%eax
0854247f +0x165:  mov    0x7(%eax),%edx
08542482 +0x168:  mov    -0x10(%ebp),%eax
08542485 +0x16b:  mov    0x2(%eax),%eax
08542488 +0x16e:  mov    0xc(%ebp),%ecx
0854248b +0x171:  add    $0x79700,%ecx
08542491 +0x177:  mov    %edx,0x14(%esp)
08542495 +0x17b:  mov    %eax,0x10(%esp)
08542499 +0x17f:  mov    0x14(%ebp),%eax
0854249c +0x182:  mov    %eax,0xc(%esp)
085424a0 +0x186:  mov    0x10(%ebp),%eax
085424a3 +0x189:  mov    %eax,0x8(%esp)
085424a7 +0x18d:  movl   $0x1,0x4(%esp)
085424af +0x195:  mov    %ecx,(%esp)
085424b2 +0x198:  call   08689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>  ; cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)
085424b7 +0x19d:  mov    $0x1,%eax
085424bc +0x1a2:  mov    -0x4(%ebp),%ebx
085424bf +0x1a5:  leave
085424c0 +0x1a6:  ret
085424c1 +0x1a7:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::DoItemUnlock @ 0x854231a

/* item_lock::CItemLock::DoItemUnlock(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemUnlock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_20 [7];
  char local_19;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    local_19 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_14 + 0x11));
    if (local_19 == '\0') {
      uVar2 = 0;
    }
    else {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::find((uchar *)local_20);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                        (local_20,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        *(undefined1 *)(iVar3 + 8) = 2;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        charac_expand::CData::alter((CData *)this);
        CItemLockTimer::IncreaseItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
        local_10 = 0;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        iVar3 = *(int *)(iVar3 + 4);
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_10 = (iVar3 + 0x3f480) - local_10;
        if (local_10 < 0) {
          local_10 = 0;
        }
        SendRequestItemUnlock(this,param_1,param_2,param_3,local_10);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x01',param_2,param_3,
                   *(int *)(local_14 + 2),*(int *)(local_14 + 7));
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
