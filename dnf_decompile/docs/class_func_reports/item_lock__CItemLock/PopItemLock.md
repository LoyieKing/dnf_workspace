# PopItemLock

`_ZN9item_lock9CItemLock11PopItemLockEP5CUser`

`item_lock::CItemLock::PopItemLock(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542b80  _ZN9item_lock9CItemLock11PopItemLockEP5CUser
#           item_lock::CItemLock::PopItemLock(CUser*)
# range [0x08542b80, 0x08542e11]
08542b80 +0x000:  push   %ebp
08542b81 +0x001:  mov    %esp,%ebp
08542b83 +0x003:  push   %esi
08542b84 +0x004:  push   %ebx
08542b85 +0x005:  sub    $0x40,%esp
08542b88 +0x008:  mov    0x8(%ebp),%eax
08542b8b +0x00b:  add    $0x54,%eax
08542b8e +0x00e:  mov    %eax,(%esp)
08542b91 +0x011:  call   0854303a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x1c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x1c
08542b96 +0x016:  test   %eax,%eax
08542b98 +0x018:  sete   %al
08542b9b +0x01b:  test   %al,%al
08542b9d +0x01d:  jne    08542e04 <+0x284>
08542ba3 +0x023:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08542baa +0x02a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08542baf +0x02f:  mov    %eax,-0x10(%ebp)
08542bb2 +0x032:  mov    0x8(%ebp),%eax
08542bb5 +0x035:  lea    0x8(%eax),%edx
08542bb8 +0x038:  lea    -0x1c(%ebp),%eax
08542bbb +0x03b:  mov    %edx,0x4(%esp)
08542bbf +0x03f:  mov    %eax,(%esp)
08542bc2 +0x042:  call   0854324e <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x230>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x230
08542bc7 +0x047:  sub    $0x4,%esp
08542bca +0x04a:  jmp    08542dbb <+0x23b>
08542bcf +0x04f:  lea    -0x1c(%ebp),%eax
08542bd2 +0x052:  mov    %eax,(%esp)
08542bd5 +0x055:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542bda +0x05a:  mov    0x4(%eax),%eax
08542bdd +0x05d:  add    $0x3f480,%eax
08542be2 +0x062:  cmp    -0x10(%ebp),%eax
08542be5 +0x065:  jg     08542c01 <+0x81>
08542be7 +0x067:  lea    -0x1c(%ebp),%eax
08542bea +0x06a:  mov    %eax,(%esp)
08542bed +0x06d:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542bf2 +0x072:  movzbl 0x8(%eax),%eax
08542bf6 +0x076:  cmp    $0x2,%al
08542bf8 +0x078:  jne    08542c01 <+0x81>
08542bfa +0x07a:  mov    $0x1,%eax
08542bff +0x07f:  jmp    08542c06 <+0x86>
08542c01 +0x081:  mov    $0x0,%eax
08542c06 +0x086:  test   %al,%al
08542c08 +0x088:  je     08542db0 <+0x230>
08542c0e +0x08e:  lea    -0x1c(%ebp),%eax
08542c11 +0x091:  mov    %eax,(%esp)
08542c14 +0x094:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542c19 +0x099:  movzbl (%eax),%eax
08542c1c +0x09c:  movzbl %al,%edx
08542c1f +0x09f:  mov    0xc(%ebp),%eax
08542c22 +0x0a2:  mov    0xc(%ebp),%ecx
08542c25 +0x0a5:  mov    %ecx,0x10(%esp)
08542c29 +0x0a9:  lea    -0x24(%ebp),%ecx
08542c2c +0x0ac:  mov    %ecx,0xc(%esp)
08542c30 +0x0b0:  lea    -0x20(%ebp),%ecx
08542c33 +0x0b3:  mov    %ecx,0x8(%esp)
08542c37 +0x0b7:  mov    %edx,0x4(%esp)
08542c3b +0x0bb:  mov    %eax,(%esp)
08542c3e +0x0be:  call   08680e04 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser>  ; CUserCharacInfo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&, CUser*) const
08542c43 +0x0c3:  xor    $0x1,%eax
08542c46 +0x0c6:  test   %al,%al
08542c48 +0x0c8:  jne    08542e07 <+0x287>
08542c4e +0x0ce:  mov    -0x24(%ebp),%eax
08542c51 +0x0d1:  movzwl %ax,%edx
08542c54 +0x0d4:  mov    -0x20(%ebp),%eax
08542c57 +0x0d7:  movzwl %ax,%eax
08542c5a +0x0da:  mov    %edx,0x8(%esp)
08542c5e +0x0de:  mov    %eax,0x4(%esp)
08542c62 +0x0e2:  mov    0xc(%ebp),%eax
08542c65 +0x0e5:  mov    %eax,(%esp)
08542c68 +0x0e8:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
08542c6d +0x0ed:  mov    %eax,-0xc(%ebp)
08542c70 +0x0f0:  cmpl   $0x0,-0xc(%ebp)
08542c74 +0x0f4:  je     08542ca5 <+0x125>
08542c76 +0x0f6:  mov    -0xc(%ebp),%eax
08542c79 +0x0f9:  add    $0x11,%eax
08542c7c +0x0fc:  movl   $0x0,0x4(%esp)
08542c84 +0x104:  mov    %eax,(%esp)
08542c87 +0x107:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
08542c8c +0x10c:  mov    -0xc(%ebp),%eax
08542c8f +0x10f:  mov    %eax,0x8(%esp)
08542c93 +0x113:  mov    0xc(%ebp),%eax
08542c96 +0x116:  mov    %eax,0x4(%esp)
08542c9a +0x11a:  mov    0x8(%ebp),%eax
08542c9d +0x11d:  mov    %eax,(%esp)
08542ca0 +0x120:  call   08541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>  ; item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*)
08542ca5 +0x125:  mov    0xc(%ebp),%eax
08542ca8 +0x128:  mov    %eax,(%esp)
08542cab +0x12b:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
08542cb0 +0x130:  cmp    $0x1,%al
08542cb2 +0x132:  sete   %al
08542cb5 +0x135:  test   %al,%al
08542cb7 +0x137:  je     08542ce9 <+0x169>
08542cb9 +0x139:  mov    -0x24(%ebp),%eax
08542cbc +0x13c:  cmp    $0x9,%eax
08542cbf +0x13f:  jle    08542ce9 <+0x169>
08542cc1 +0x141:  mov    -0x24(%ebp),%eax
08542cc4 +0x144:  cmp    $0x15,%eax
08542cc7 +0x147:  jg     08542ce9 <+0x169>
08542cc9 +0x149:  mov    -0x20(%ebp),%eax
08542ccc +0x14c:  cmp    $0x3,%eax
08542ccf +0x14f:  jne    08542cda <+0x15a>
08542cd1 +0x151:  movl   $0x12,-0x20(%ebp)
08542cd8 +0x158:  jmp    08542ce9 <+0x169>
08542cda +0x15a:  mov    -0x20(%ebp),%eax
08542cdd +0x15d:  cmp    $0x12,%eax
08542ce0 +0x160:  jne    08542ce9 <+0x169>
08542ce2 +0x162:  movl   $0x3,-0x20(%ebp)
08542ce9 +0x169:  mov    -0x24(%ebp),%edx
08542cec +0x16c:  mov    -0x20(%ebp),%eax
08542cef +0x16f:  mov    %edx,0xc(%esp)
08542cf3 +0x173:  mov    %eax,0x8(%esp)
08542cf7 +0x177:  mov    0xc(%ebp),%eax
08542cfa +0x17a:  mov    %eax,0x4(%esp)
08542cfe +0x17e:  mov    0x8(%ebp),%eax
08542d01 +0x181:  mov    %eax,(%esp)
08542d04 +0x184:  call   085420e0 <_ZN9item_lock9CItemLock14SendItemUnlockEP5CUserii>  ; item_lock::CItemLock::SendItemUnlock(CUser*, int, int)
08542d09 +0x189:  lea    -0x1c(%ebp),%eax
08542d0c +0x18c:  mov    %eax,(%esp)
08542d0f +0x18f:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542d14 +0x194:  mov    0x8(%ebp),%edx
08542d17 +0x197:  add    $0x20,%edx
08542d1a +0x19a:  mov    %eax,0x4(%esp)
08542d1e +0x19e:  mov    %edx,(%esp)
08542d21 +0x1a1:  call   0854350a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4ec>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4ec
08542d26 +0x1a6:  lea    -0x14(%ebp),%eax
08542d29 +0x1a9:  movl   $0x0,0x8(%esp)
08542d31 +0x1b1:  lea    -0x1c(%ebp),%edx
08542d34 +0x1b4:  mov    %edx,0x4(%esp)
08542d38 +0x1b8:  mov    %eax,(%esp)
08542d3b +0x1bb:  call   08543524 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x506>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x506
08542d40 +0x1c0:  sub    $0x4,%esp
08542d43 +0x1c3:  mov    0x8(%ebp),%eax
08542d46 +0x1c6:  lea    0x8(%eax),%edx
08542d49 +0x1c9:  mov    -0x14(%ebp),%eax
08542d4c +0x1cc:  mov    %eax,0x4(%esp)
08542d50 +0x1d0:  mov    %edx,(%esp)
08542d53 +0x1d3:  call   08543562 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x544>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x544
08542d58 +0x1d8:  mov    0x8(%ebp),%eax
08542d5b +0x1db:  add    $0x54,%eax
08542d5e +0x1de:  mov    %eax,(%esp)
08542d61 +0x1e1:  call   085414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>  ; item_lock::CItemLockTimer::DecreaseItemLockTimer()
08542d66 +0x1e6:  mov    0x8(%ebp),%eax
08542d69 +0x1e9:  mov    %eax,(%esp)
08542d6c +0x1ec:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08542d71 +0x1f1:  mov    -0xc(%ebp),%eax
08542d74 +0x1f4:  mov    0x7(%eax),%ebx
08542d77 +0x1f7:  mov    -0xc(%ebp),%eax
08542d7a +0x1fa:  mov    0x2(%eax),%eax
08542d7d +0x1fd:  mov    %eax,%ecx
08542d7f +0x1ff:  mov    -0x24(%ebp),%edx
08542d82 +0x202:  mov    -0x20(%ebp),%eax
08542d85 +0x205:  mov    0xc(%ebp),%esi
08542d88 +0x208:  add    $0x79700,%esi
08542d8e +0x20e:  mov    %ebx,0x14(%esp)
08542d92 +0x212:  mov    %ecx,0x10(%esp)
08542d96 +0x216:  mov    %edx,0xc(%esp)
08542d9a +0x21a:  mov    %eax,0x8(%esp)
08542d9e +0x21e:  movl   $0x3,0x4(%esp)
08542da6 +0x226:  mov    %esi,(%esp)
08542da9 +0x229:  call   08689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>  ; cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)
08542dae +0x22e:  jmp    08542dbb <+0x23b>
08542db0 +0x230:  lea    -0x1c(%ebp),%eax
08542db3 +0x233:  mov    %eax,(%esp)
08542db6 +0x236:  call   085432ae <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x290>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x290
08542dbb +0x23b:  mov    0x8(%ebp),%eax
08542dbe +0x23e:  lea    0x8(%eax),%edx
08542dc1 +0x241:  lea    -0x18(%ebp),%eax
08542dc4 +0x244:  mov    %edx,0x4(%esp)
08542dc8 +0x248:  mov    %eax,(%esp)
08542dcb +0x24b:  call   08543274 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x256>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x256
08542dd0 +0x250:  sub    $0x4,%esp
08542dd3 +0x253:  lea    -0x18(%ebp),%eax
08542dd6 +0x256:  mov    %eax,0x4(%esp)
08542dda +0x25a:  lea    -0x1c(%ebp),%eax
08542ddd +0x25d:  mov    %eax,(%esp)
08542de0 +0x260:  call   0854329a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x27c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x27c
08542de5 +0x265:  test   %al,%al
08542de7 +0x267:  jne    08542bcf <+0x4f>
08542ded +0x26d:  mov    0x8(%ebp),%eax
08542df0 +0x270:  lea    0x54(%eax),%edx
08542df3 +0x273:  mov    0xc(%ebp),%eax
08542df6 +0x276:  mov    %eax,0x4(%esp)
08542dfa +0x27a:  mov    %edx,(%esp)
08542dfd +0x27d:  call   08541502 <_ZN9item_lock14CItemLockTimer17NextItemLockTimerEP5CUser>  ; item_lock::CItemLockTimer::NextItemLockTimer(CUser*)
08542e02 +0x282:  jmp    08542e08 <+0x288>
08542e04 +0x284:  nop
08542e05 +0x285:  jmp    08542e08 <+0x288>
08542e07 +0x287:  nop
08542e08 +0x288:  lea    -0x8(%ebp),%esp
08542e0b +0x28b:  add    $0x0,%esp
08542e0e +0x28e:  pop    %ebx
08542e0f +0x28f:  pop    %esi
08542e10 +0x290:  pop    %ebp
08542e11 +0x291:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::PopItemLock @ 0x8542b80

/* item_lock::CItemLock::PopItemLock(CUser*) */

void __thiscall item_lock::CItemLock::PopItemLock(CItemLock *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_20 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  Inven_Item *local_10;
  
  iVar3 = CItemLockTimer::GetTimerCount((CItemLockTimer *)(this + 0x54));
  if (iVar3 != 0) {
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20);
      if ((local_14 < *(int *)(iVar3 + 4) + 0x3f480) ||
         (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                             local_20), *(char *)(iVar3 + 8) != '\x02')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        puVar4 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        cVar2 = CUserCharacInfo::FindItemLock
                          ((CUserCharacInfo *)param_1,*puVar4,(ENUM_ITEMSPACE *)&local_24,&local_28,
                           param_1);
        if (cVar2 != '\x01') {
          return;
        }
        local_10 = (Inven_Item *)
                   CUser::GetCurCharacInventoryRef(param_1,(ushort)local_24,(ushort)local_28);
        if (local_10 != (Inven_Item *)0x0) {
          stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_10 + 0x11),'\0');
          UpdateItem(this,param_1,local_10);
        }
        cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
        if (((cVar2 == '\x01') && (9 < local_28)) && (local_28 < 0x16)) {
          if (local_24 == 3) {
            local_24 = 0x12;
          }
          else if (local_24 == 0x12) {
            local_24 = 3;
          }
        }
        SendItemUnlock(this,param_1,local_24,local_28);
        puVar4 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                  ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                   (this + 0x20),puVar4);
        uVar5 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)&local_18,
                   (int)local_20);
        std::
        map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
        ::erase((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
                 *)(this + 8),local_18,uVar5);
        CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
        charac_expand::CData::alter((CData *)this);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x03',local_24,local_28,
                   *(int *)(local_10 + 2),*(int *)(local_10 + 7));
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
      }
    }
    CItemLockTimer::NextItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
  }
  return;
}
```
