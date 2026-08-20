# RecreatePrivateStore

`_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE`

`private_store::CPrivateStore::RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c5b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c5b60  _ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE
#           private_store::CPrivateStore::RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)
# range [0x085c5b60, 0x085c5ceb]
085c5b60 +0x000:  push   %ebp
085c5b61 +0x001:  mov    %esp,%ebp
085c5b63 +0x003:  push   %ebx
085c5b64 +0x004:  sub    $0xc4,%esp
085c5b6a +0x00a:  mov    0x8(%ebp),%eax
085c5b6d +0x00d:  mov    0x20(%eax),%eax
085c5b70 +0x010:  test   %eax,%eax
085c5b72 +0x012:  jne    085c5b7e <+0x1e>
085c5b74 +0x014:  mov    $0x0,%eax
085c5b79 +0x019:  jmp    085c5ce3 <+0x183>
085c5b7e +0x01e:  mov    0x8(%ebp),%eax
085c5b81 +0x021:  movzbl 0x10(%eax),%eax
085c5b85 +0x025:  test   %al,%al
085c5b87 +0x027:  je     085c5b93 <+0x33>
085c5b89 +0x029:  mov    $0x0,%eax
085c5b8e +0x02e:  jmp    085c5ce3 <+0x183>
085c5b93 +0x033:  mov    0x8(%ebp),%eax
085c5b96 +0x036:  mov    0x2c(%eax),%eax
085c5b99 +0x039:  test   %eax,%eax
085c5b9b +0x03b:  jne    085c5ba7 <+0x47>
085c5b9d +0x03d:  mov    $0x0,%eax
085c5ba2 +0x042:  jmp    085c5ce3 <+0x183>
085c5ba7 +0x047:  mov    $&_ZGVZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREEE26characterControllerPrivate,%eax
085c5bac +0x04c:  movzbl (%eax),%eax
085c5baf +0x04f:  test   %al,%al
085c5bb1 +0x051:  jne    085c5be0 <+0x80>
085c5bb3 +0x053:  movl   $&_ZGVZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREEE26characterControllerPrivate,(%esp)
085c5bba +0x05a:  call   08725330 <__cxa_guard_acquire>
085c5bbf +0x05f:  test   %eax,%eax
085c5bc1 +0x061:  setne  %al
085c5bc4 +0x064:  test   %al,%al
085c5bc6 +0x066:  je     085c5be0 <+0x80>
085c5bc8 +0x068:  movl   $&_ZZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREEE26characterControllerPrivate,(%esp)
085c5bcf +0x06f:  call   085d0f90 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ca6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ca6
085c5bd4 +0x074:  movl   $&_ZGVZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREEE26characterControllerPrivate,(%esp)
085c5bdb +0x07b:  call   08725250 <__cxa_guard_release>
085c5be0 +0x080:  mov    0x8(%ebp),%eax
085c5be3 +0x083:  lea    0x24(%eax),%edx
085c5be6 +0x086:  mov    0x8(%ebp),%eax
085c5be9 +0x089:  mov    0x2c(%eax),%eax
085c5bec +0x08c:  mov    %edx,0x8(%esp)
085c5bf0 +0x090:  mov    %eax,0x4(%esp)
085c5bf4 +0x094:  movl   $&_ZZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREEE26characterControllerPrivate,(%esp)
085c5bfb +0x09b:  call   085cc894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x15aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x15aa
085c5c00 +0x0a0:  mov    0x8(%ebp),%eax
085c5c03 +0x0a3:  add    $0x34,%eax
085c5c06 +0x0a6:  mov    %eax,(%esp)
085c5c09 +0x0a9:  call   085cd138 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e4e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e4e
085c5c0e +0x0ae:  mov    0x8(%ebp),%eax
085c5c11 +0x0b1:  mov    %eax,(%esp)
085c5c14 +0x0b4:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c5c19 +0x0b9:  mov    0xc(%ebp),%eax
085c5c1c +0x0bc:  add    $0x8,%eax
085c5c1f +0x0bf:  movl   $0xe,0x8(%esp)
085c5c27 +0x0c7:  mov    %eax,0x4(%esp)
085c5c2b +0x0cb:  mov    0x8(%ebp),%eax
085c5c2e +0x0ce:  mov    %eax,(%esp)
085c5c31 +0x0d1:  call   085c4f9c <_ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi>  ; private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int)
085c5c36 +0x0d6:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c5c3b +0x0db:  mov    %eax,(%esp)
085c5c3e +0x0de:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
085c5c43 +0x0e3:  test   %al,%al
085c5c45 +0x0e5:  je     085c5cd7 <+0x177>
085c5c4b +0x0eb:  lea    -0xb6(%ebp),%eax
085c5c51 +0x0f1:  mov    %eax,(%esp)
085c5c54 +0x0f4:  call   085cb374 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x8a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x8a
085c5c59 +0x0f9:  mov    0x8(%ebp),%eax
085c5c5c +0x0fc:  mov    0x2c(%eax),%eax
085c5c5f +0x0ff:  mov    %eax,(%esp)
085c5c62 +0x102:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c5c67 +0x107:  mov    %eax,-0xa4(%ebp)
085c5c6d +0x10d:  mov    0x8(%ebp),%eax
085c5c70 +0x110:  mov    0x2c(%eax),%eax
085c5c73 +0x113:  mov    %eax,(%esp)
085c5c76 +0x116:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
085c5c7b +0x11b:  mov    %eax,-0xa0(%ebp)
085c5c81 +0x121:  movl   $0x0,-0xc(%ebp)
085c5c88 +0x128:  jmp    085c5cb0 <+0x150>
085c5c8a +0x12a:  mov    -0xc(%ebp),%ebx
085c5c8d +0x12d:  mov    0x8(%ebp),%eax
085c5c90 +0x130:  mov    0x2c(%eax),%eax
085c5c93 +0x133:  mov    -0xc(%ebp),%edx
085c5c96 +0x136:  mov    %edx,0x4(%esp)
085c5c9a +0x13a:  mov    %eax,(%esp)
085c5c9d +0x13d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085c5ca2 +0x142:  lea    0x4(%ebx),%edx
085c5ca5 +0x145:  mov    %eax,-0xac(%ebp,%edx,4)
085c5cac +0x14c:  addl   $0x1,-0xc(%ebp)
085c5cb0 +0x150:  mov    -0xa0(%ebp),%eax
085c5cb6 +0x156:  cmp    -0xc(%ebp),%eax
085c5cb9 +0x159:  setg   %al
085c5cbc +0x15c:  test   %al,%al
085c5cbe +0x15e:  jne    085c5c8a <+0x12a>
085c5cc0 +0x160:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c5cc5 +0x165:  lea    -0xb6(%ebp),%edx
085c5ccb +0x16b:  mov    %edx,0x4(%esp)
085c5ccf +0x16f:  mov    %eax,(%esp)
085c5cd2 +0x172:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
085c5cd7 +0x177:  mov    0x8(%ebp),%eax
085c5cda +0x17a:  movb   $0x2,0x10(%eax)
085c5cde +0x17e:  mov    $0x1,%eax
085c5ce3 +0x183:  add    $0xc4,%esp
085c5ce9 +0x189:  pop    %ebx
085c5cea +0x18a:  pop    %ebp
085c5ceb +0x18b:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::RecreatePrivateStore @ 0x85c5b60

/* private_store::CPrivateStore::RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*) */

undefined4 __thiscall
private_store::CPrivateStore::RecreatePrivateStore(CPrivateStore *this,SIG_PRIVATE_STORE *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  PCK_AUCTION_OPEN_PRIVATE_STORE_GA local_ba [10];
  int aiStack_b0 [40];
  int local_10;
  
  if (*(int *)(this + 0x20) == 0) {
    uVar2 = 0;
  }
  else if (this[0x10] == (CPrivateStore)0x0) {
    if (*(int *)(this + 0x2c) == 0) {
      uVar2 = 0;
    }
    else {
      if (RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::characterControllerPrivate ==
          '\0') {
        iVar3 = __cxa_guard_acquire(&RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                                     characterControllerPrivate);
        if (iVar3 != 0) {
          CCharacterControllerPrivate::CCharacterControllerPrivate
                    ((CCharacterControllerPrivate *)
                     &RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                      characterControllerPrivate);
          __cxa_guard_release(&RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                               characterControllerPrivate);
        }
      }
      CCharacterControllerPrivate::GetStartPoint
                ((CCharacterControllerPrivate *)
                 &RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                  characterControllerPrivate,*(CUser **)(this + 0x2c),
                 (PrivateStorePos *)(this + 0x24));
      std::list<CUser*,std::allocator<CUser*>>::clear
                ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
      ResetItems(this);
      CopyItems(this,(PrivateStoreItem *)(param_1 + 8),0xe);
      cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
      if (cVar1 != '\0') {
        PCK_AUCTION_OPEN_PRIVATE_STORE_GA::PCK_AUCTION_OPEN_PRIVATE_STORE_GA(local_ba);
        aiStack_b0[2] = CUser::get_acc_id(*(CUser **)(this + 0x2c));
        aiStack_b0[3] = CUser::get_charac_count(*(CUser **)(this + 0x2c));
        for (local_10 = 0; iVar3 = local_10, local_10 < aiStack_b0[3]; local_10 = local_10 + 1) {
          iVar4 = CUser::get_charac_no(*(CUser **)(this + 0x2c),local_10);
          aiStack_b0[iVar3 + 4] = iVar4;
        }
        CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_ba);
      }
      this[0x10] = (CPrivateStore)0x2;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
