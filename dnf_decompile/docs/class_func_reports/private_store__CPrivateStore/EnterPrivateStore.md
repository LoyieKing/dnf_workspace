# EnterPrivateStore

`_ZN13private_store13CPrivateStore17EnterPrivateStoreEv`

`private_store::CPrivateStore::EnterPrivateStore()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c8dd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c8dd6  _ZN13private_store13CPrivateStore17EnterPrivateStoreEv
#           private_store::CPrivateStore::EnterPrivateStore()
# range [0x085c8dd6, 0x085c8fcc]
085c8dd6 +0x000:  push   %ebp
085c8dd7 +0x001:  mov    %esp,%ebp
085c8dd9 +0x003:  push   %esi
085c8dda +0x004:  push   %ebx
085c8ddb +0x005:  sub    $0x30,%esp
085c8dde +0x008:  mov    0x8(%ebp),%eax
085c8de1 +0x00b:  mov    0x30(%eax),%eax
085c8de4 +0x00e:  mov    0x8(%ebp),%edx
085c8de7 +0x011:  add    $0x14,%edx
085c8dea +0x014:  movl   $0x56,0xc(%esp)
085c8df2 +0x01c:  movl   $0x1,0x8(%esp)
085c8dfa +0x024:  mov    %eax,0x4(%esp)
085c8dfe +0x028:  mov    %edx,(%esp)
085c8e01 +0x02b:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c8e06 +0x030:  mov    0x8(%ebp),%eax
085c8e09 +0x033:  mov    0x30(%eax),%eax
085c8e0c +0x036:  test   %eax,%eax
085c8e0e +0x038:  jne    085c8e1a <+0x44>
085c8e10 +0x03a:  mov    $0x0,%ebx
085c8e15 +0x03f:  jmp    085c8fc1 <+0x1eb>
085c8e1a +0x044:  mov    0x8(%ebp),%eax
085c8e1d +0x047:  mov    0x20(%eax),%eax
085c8e20 +0x04a:  test   %eax,%eax
085c8e22 +0x04c:  jne    085c8e44 <+0x6e>
085c8e24 +0x04e:  mov    0x8(%ebp),%eax
085c8e27 +0x051:  add    $0x14,%eax
085c8e2a +0x054:  movl   $0x3a,0x4(%esp)
085c8e32 +0x05c:  mov    %eax,(%esp)
085c8e35 +0x05f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8e3a +0x064:  mov    $0x0,%ebx
085c8e3f +0x069:  jmp    085c8fc1 <+0x1eb>
085c8e44 +0x06e:  mov    0x8(%ebp),%eax
085c8e47 +0x071:  movzbl 0x10(%eax),%eax
085c8e4b +0x075:  cmp    $0x2,%al
085c8e4d +0x077:  je     085c8e87 <+0xb1>
085c8e4f +0x079:  mov    0x8(%ebp),%eax
085c8e52 +0x07c:  mov    0x30(%eax),%edx
085c8e55 +0x07f:  mov    0x8(%ebp),%eax
085c8e58 +0x082:  mov    0x20(%eax),%eax
085c8e5b +0x085:  mov    %edx,0x4(%esp)
085c8e5f +0x089:  mov    %eax,(%esp)
085c8e62 +0x08c:  call   085ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*)
085c8e67 +0x091:  mov    0x8(%ebp),%eax
085c8e6a +0x094:  add    $0x14,%eax
085c8e6d +0x097:  movl   $0x3b,0x4(%esp)
085c8e75 +0x09f:  mov    %eax,(%esp)
085c8e78 +0x0a2:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8e7d +0x0a7:  mov    $0x0,%ebx
085c8e82 +0x0ac:  jmp    085c8fc1 <+0x1eb>
085c8e87 +0x0b1:  mov    0x8(%ebp),%eax
085c8e8a +0x0b4:  lea    0x30(%eax),%ebx
085c8e8d +0x0b7:  mov    0x8(%ebp),%eax
085c8e90 +0x0ba:  lea    0x34(%eax),%edx
085c8e93 +0x0bd:  lea    -0x14(%ebp),%eax
085c8e96 +0x0c0:  mov    %edx,0x4(%esp)
085c8e9a +0x0c4:  mov    %eax,(%esp)
085c8e9d +0x0c7:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c8ea2 +0x0cc:  sub    $0x4,%esp
085c8ea5 +0x0cf:  mov    0x8(%ebp),%eax
085c8ea8 +0x0d2:  lea    0x34(%eax),%edx
085c8eab +0x0d5:  lea    -0x10(%ebp),%eax
085c8eae +0x0d8:  mov    %edx,0x4(%esp)
085c8eb2 +0x0dc:  mov    %eax,(%esp)
085c8eb5 +0x0df:  call   0826be82 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x750>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x750
085c8eba +0x0e4:  sub    $0x4,%esp
085c8ebd +0x0e7:  lea    -0x18(%ebp),%eax
085c8ec0 +0x0ea:  mov    %ebx,0xc(%esp)
085c8ec4 +0x0ee:  mov    -0x14(%ebp),%edx
085c8ec7 +0x0f1:  mov    %edx,0x8(%esp)
085c8ecb +0x0f5:  mov    -0x10(%ebp),%edx
085c8ece +0x0f8:  mov    %edx,0x4(%esp)
085c8ed2 +0x0fc:  mov    %eax,(%esp)
085c8ed5 +0x0ff:  call   085cd2bf <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1fd5>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1fd5
085c8eda +0x104:  sub    $0x4,%esp
085c8edd +0x107:  mov    0x8(%ebp),%eax
085c8ee0 +0x10a:  lea    0x34(%eax),%edx
085c8ee3 +0x10d:  lea    -0xc(%ebp),%eax
085c8ee6 +0x110:  mov    %edx,0x4(%esp)
085c8eea +0x114:  mov    %eax,(%esp)
085c8eed +0x117:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c8ef2 +0x11c:  sub    $0x4,%esp
085c8ef5 +0x11f:  lea    -0xc(%ebp),%eax
085c8ef8 +0x122:  mov    %eax,0x4(%esp)
085c8efc +0x126:  lea    -0x18(%ebp),%eax
085c8eff +0x129:  mov    %eax,(%esp)
085c8f02 +0x12c:  call   0826becc <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x79a>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x79a
085c8f07 +0x131:  test   %al,%al
085c8f09 +0x133:  je     085c8f2b <+0x155>
085c8f0b +0x135:  mov    0x8(%ebp),%eax
085c8f0e +0x138:  add    $0x14,%eax
085c8f11 +0x13b:  movl   $0x14,0x4(%esp)
085c8f19 +0x143:  mov    %eax,(%esp)
085c8f1c +0x146:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8f21 +0x14b:  mov    $0x0,%ebx
085c8f26 +0x150:  jmp    085c8fc1 <+0x1eb>
085c8f2b +0x155:  mov    0x8(%ebp),%eax
085c8f2e +0x158:  lea    0x30(%eax),%edx
085c8f31 +0x15b:  mov    0x8(%ebp),%eax
085c8f34 +0x15e:  add    $0x34,%eax
085c8f37 +0x161:  mov    %edx,0x4(%esp)
085c8f3b +0x165:  mov    %eax,(%esp)
085c8f3e +0x168:  call   085c02aa <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1808>  ; global constructors keyed to CParty::cMember::cMember()+0x1808
085c8f43 +0x16d:  lea    -0x24(%ebp),%eax
085c8f46 +0x170:  mov    %eax,(%esp)
085c8f49 +0x173:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c8f4e +0x178:  mov    0x8(%ebp),%eax
085c8f51 +0x17b:  lea    0x3c(%eax),%ebx
085c8f54 +0x17e:  mov    0x8(%ebp),%eax
085c8f57 +0x181:  mov    %eax,(%esp)
085c8f5a +0x184:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085c8f5f +0x189:  movzwl %ax,%edx
085c8f62 +0x18c:  mov    0x8(%ebp),%eax
085c8f65 +0x18f:  mov    0x2c(%eax),%eax
085c8f68 +0x192:  mov    %ebx,0xc(%esp)
085c8f6c +0x196:  mov    %edx,0x8(%esp)
085c8f70 +0x19a:  mov    %eax,0x4(%esp)
085c8f74 +0x19e:  lea    -0x24(%ebp),%eax
085c8f77 +0x1a1:  mov    %eax,(%esp)
085c8f7a +0x1a4:  call   085cc160 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0xe76>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0xe76
085c8f7f +0x1a9:  mov    0x8(%ebp),%eax
085c8f82 +0x1ac:  mov    0x30(%eax),%eax
085c8f85 +0x1af:  lea    -0x24(%ebp),%edx
085c8f88 +0x1b2:  mov    %edx,0x4(%esp)
085c8f8c +0x1b6:  mov    %eax,(%esp)
085c8f8f +0x1b9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c8f94 +0x1be:  mov    $0x1,%ebx
085c8f99 +0x1c3:  lea    -0x24(%ebp),%eax
085c8f9c +0x1c6:  mov    %eax,(%esp)
085c8f9f +0x1c9:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c8fa4 +0x1ce:  jmp    085c8fc1 <+0x1eb>
085c8fa6 +0x1d0:  mov    %edx,%ebx
085c8fa8 +0x1d2:  mov    %eax,%esi
085c8faa +0x1d4:  lea    -0x24(%ebp),%eax
085c8fad +0x1d7:  mov    %eax,(%esp)
085c8fb0 +0x1da:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c8fb5 +0x1df:  mov    %esi,%eax
085c8fb7 +0x1e1:  mov    %ebx,%edx
085c8fb9 +0x1e3:  mov    %eax,(%esp)
085c8fbc +0x1e6:  call   08ae3750 <_Unwind_Resume>
085c8fc1 +0x1eb:  mov    %ebx,%eax
085c8fc3 +0x1ed:  lea    -0x8(%ebp),%esp
085c8fc6 +0x1f0:  add    $0x0,%esp
085c8fc9 +0x1f3:  pop    %ebx
085c8fca +0x1f4:  pop    %esi
085c8fcb +0x1f5:  pop    %ebp
085c8fcc +0x1f6:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::EnterPrivateStore @ 0x85c8dd6

/* private_store::CPrivateStore::EnterPrivateStore() */

undefined4 __thiscall private_store::CPrivateStore::EnterPrivateStore(CPrivateStore *this)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  CPacketBufPrivate local_28 [12];
  _List_iterator<CUser*> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator local_10 [4];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x56);
  if (*(int *)(this + 0x30) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar3 = 0;
  }
  else if (this[0x10] == (CPrivateStore)0x2) {
    std::list<CUser*,std::allocator<CUser*>>::end();
    std::list<CUser*,std::allocator<CUser*>>::begin();
    std::find<std::_List_iterator<CUser*>,CUser*>(local_1c,local_14,local_18,this + 0x30);
    std::list<CUser*,std::allocator<CUser*>>::end();
    cVar1 = std::_List_iterator<CUser*>::operator!=(local_1c,local_10);
    if (cVar1 == '\0') {
      std::list<CUser*,std::allocator<CUser*>>::push_back
                ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34),(CUser **)(this + 0x30));
      CPacketBufPrivate::CPacketBufPrivate(local_28);
      uVar2 = GetSellerIndex(this);
                    /* try { // try from 085c8f7a to 085c8f93 has its CatchHandler @ 085c8fa6 */
      CPacketBufPrivate::MakeCmdpacketEnterPrivateStore
                (local_28,*(CUser **)(this + 0x2c),uVar2,(vector *)(this + 0x3c));
      CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_28);
      uVar3 = 1;
      CPacketBufPrivate::~CPacketBufPrivate(local_28);
    }
    else {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x14);
      uVar3 = 0;
    }
  }
  else {
    CPrivateStoreMgr::FreeStoreBuyer(*(CUser **)(this + 0x20));
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3b);
    uVar3 = 0;
  }
  return uVar3;
}
```
