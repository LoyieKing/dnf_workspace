# ExitPrivateStore

`_ZN13private_store13CPrivateStore16ExitPrivateStoreEv`

`private_store::CPrivateStore::ExitPrivateStore()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c8fd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c8fd4  _ZN13private_store13CPrivateStore16ExitPrivateStoreEv
#           private_store::CPrivateStore::ExitPrivateStore()
# range [0x085c8fd4, 0x085c91b5]
085c8fd4 +0x000:  push   %ebp
085c8fd5 +0x001:  mov    %esp,%ebp
085c8fd7 +0x003:  push   %esi
085c8fd8 +0x004:  push   %ebx
085c8fd9 +0x005:  sub    $0x30,%esp
085c8fdc +0x008:  mov    0x8(%ebp),%eax
085c8fdf +0x00b:  mov    0x30(%eax),%eax
085c8fe2 +0x00e:  mov    0x8(%ebp),%edx
085c8fe5 +0x011:  add    $0x14,%edx
085c8fe8 +0x014:  movl   $0x57,0xc(%esp)
085c8ff0 +0x01c:  movl   $0x1,0x8(%esp)
085c8ff8 +0x024:  mov    %eax,0x4(%esp)
085c8ffc +0x028:  mov    %edx,(%esp)
085c8fff +0x02b:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c9004 +0x030:  mov    0x8(%ebp),%eax
085c9007 +0x033:  mov    0x30(%eax),%eax
085c900a +0x036:  test   %eax,%eax
085c900c +0x038:  jne    085c9018 <+0x44>
085c900e +0x03a:  mov    $0x0,%ebx
085c9013 +0x03f:  jmp    085c91a9 <+0x1d5>
085c9018 +0x044:  mov    0x8(%ebp),%eax
085c901b +0x047:  mov    0x20(%eax),%eax
085c901e +0x04a:  test   %eax,%eax
085c9020 +0x04c:  jne    085c9042 <+0x6e>
085c9022 +0x04e:  mov    0x8(%ebp),%eax
085c9025 +0x051:  add    $0x14,%eax
085c9028 +0x054:  movl   $0x3a,0x4(%esp)
085c9030 +0x05c:  mov    %eax,(%esp)
085c9033 +0x05f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c9038 +0x064:  mov    $0x0,%ebx
085c903d +0x069:  jmp    085c91a9 <+0x1d5>
085c9042 +0x06e:  mov    0x8(%ebp),%eax
085c9045 +0x071:  lea    0x30(%eax),%ebx
085c9048 +0x074:  mov    0x8(%ebp),%eax
085c904b +0x077:  lea    0x34(%eax),%edx
085c904e +0x07a:  lea    -0x18(%ebp),%eax
085c9051 +0x07d:  mov    %edx,0x4(%esp)
085c9055 +0x081:  mov    %eax,(%esp)
085c9058 +0x084:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c905d +0x089:  sub    $0x4,%esp
085c9060 +0x08c:  mov    0x8(%ebp),%eax
085c9063 +0x08f:  lea    0x34(%eax),%edx
085c9066 +0x092:  lea    -0x14(%ebp),%eax
085c9069 +0x095:  mov    %edx,0x4(%esp)
085c906d +0x099:  mov    %eax,(%esp)
085c9070 +0x09c:  call   0826be82 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x750>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x750
085c9075 +0x0a1:  sub    $0x4,%esp
085c9078 +0x0a4:  lea    -0x1c(%ebp),%eax
085c907b +0x0a7:  mov    %ebx,0xc(%esp)
085c907f +0x0ab:  mov    -0x18(%ebp),%edx
085c9082 +0x0ae:  mov    %edx,0x8(%esp)
085c9086 +0x0b2:  mov    -0x14(%ebp),%edx
085c9089 +0x0b5:  mov    %edx,0x4(%esp)
085c908d +0x0b9:  mov    %eax,(%esp)
085c9090 +0x0bc:  call   085cd2bf <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1fd5>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1fd5
085c9095 +0x0c1:  sub    $0x4,%esp
085c9098 +0x0c4:  mov    0x8(%ebp),%eax
085c909b +0x0c7:  add    $0x34,%eax
085c909e +0x0ca:  mov    %eax,(%esp)
085c90a1 +0x0cd:  call   085cd314 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x202a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x202a
085c90a6 +0x0d2:  xor    $0x1,%eax
085c90a9 +0x0d5:  test   %al,%al
085c90ab +0x0d7:  je     085c90fb <+0x127>
085c90ad +0x0d9:  mov    0x8(%ebp),%eax
085c90b0 +0x0dc:  lea    0x34(%eax),%edx
085c90b3 +0x0df:  lea    -0x10(%ebp),%eax
085c90b6 +0x0e2:  mov    %edx,0x4(%esp)
085c90ba +0x0e6:  mov    %eax,(%esp)
085c90bd +0x0e9:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
085c90c2 +0x0ee:  sub    $0x4,%esp
085c90c5 +0x0f1:  lea    -0x10(%ebp),%eax
085c90c8 +0x0f4:  mov    %eax,0x4(%esp)
085c90cc +0x0f8:  lea    -0x1c(%ebp),%eax
085c90cf +0x0fb:  mov    %eax,(%esp)
085c90d2 +0x0fe:  call   085cd326 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x203c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x203c
085c90d7 +0x103:  test   %al,%al
085c90d9 +0x105:  je     085c90fb <+0x127>
085c90db +0x107:  mov    0x8(%ebp),%eax
085c90de +0x10a:  add    $0x14,%eax
085c90e1 +0x10d:  movl   $0x15,0x4(%esp)
085c90e9 +0x115:  mov    %eax,(%esp)
085c90ec +0x118:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c90f1 +0x11d:  mov    $0x0,%ebx
085c90f6 +0x122:  jmp    085c91a9 <+0x1d5>
085c90fb +0x127:  lea    -0x28(%ebp),%eax
085c90fe +0x12a:  mov    %eax,(%esp)
085c9101 +0x12d:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c9106 +0x132:  lea    -0x28(%ebp),%eax
085c9109 +0x135:  mov    %eax,(%esp)
085c910c +0x138:  call   085cc568 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x127e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x127e
085c9111 +0x13d:  mov    0x8(%ebp),%eax
085c9114 +0x140:  mov    0x30(%eax),%eax
085c9117 +0x143:  lea    -0x28(%ebp),%edx
085c911a +0x146:  mov    %edx,0x4(%esp)
085c911e +0x14a:  mov    %eax,(%esp)
085c9121 +0x14d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c9126 +0x152:  mov    0x8(%ebp),%eax
085c9129 +0x155:  mov    0x30(%eax),%edx
085c912c +0x158:  mov    0x8(%ebp),%eax
085c912f +0x15b:  mov    0x20(%eax),%eax
085c9132 +0x15e:  mov    %edx,0x4(%esp)
085c9136 +0x162:  mov    %eax,(%esp)
085c9139 +0x165:  call   085ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*)
085c913e +0x16a:  mov    0x8(%ebp),%eax
085c9141 +0x16d:  add    $0x34,%eax
085c9144 +0x170:  mov    %eax,(%esp)
085c9147 +0x173:  call   085cd314 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x202a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x202a
085c914c +0x178:  xor    $0x1,%eax
085c914f +0x17b:  test   %al,%al
085c9151 +0x17d:  je     085c9172 <+0x19e>
085c9153 +0x17f:  mov    0x8(%ebp),%eax
085c9156 +0x182:  lea    0x34(%eax),%ecx
085c9159 +0x185:  lea    -0xc(%ebp),%eax
085c915c +0x188:  mov    -0x1c(%ebp),%edx
085c915f +0x18b:  mov    %edx,0x8(%esp)
085c9163 +0x18f:  mov    %ecx,0x4(%esp)
085c9167 +0x193:  mov    %eax,(%esp)
085c916a +0x196:  call   085cd33a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2050>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2050
085c916f +0x19b:  sub    $0x4,%esp
085c9172 +0x19e:  mov    0x8(%ebp),%eax
085c9175 +0x1a1:  movl   $0x0,0x30(%eax)
085c917c +0x1a8:  mov    $0x1,%ebx
085c9181 +0x1ad:  lea    -0x28(%ebp),%eax
085c9184 +0x1b0:  mov    %eax,(%esp)
085c9187 +0x1b3:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c918c +0x1b8:  jmp    085c91a9 <+0x1d5>
085c918e +0x1ba:  mov    %edx,%ebx
085c9190 +0x1bc:  mov    %eax,%esi
085c9192 +0x1be:  lea    -0x28(%ebp),%eax
085c9195 +0x1c1:  mov    %eax,(%esp)
085c9198 +0x1c4:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c919d +0x1c9:  mov    %esi,%eax
085c919f +0x1cb:  mov    %ebx,%edx
085c91a1 +0x1cd:  mov    %eax,(%esp)
085c91a4 +0x1d0:  call   08ae3750 <_Unwind_Resume>
085c91a9 +0x1d5:  mov    %ebx,%eax
085c91ab +0x1d7:  lea    -0x8(%ebp),%esp
085c91ae +0x1da:  add    $0x0,%esp
085c91b1 +0x1dd:  pop    %ebx
085c91b2 +0x1de:  pop    %esi
085c91b3 +0x1df:  pop    %ebp
085c91b4 +0x1e0:  ret
085c91b5 +0x1e1:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::ExitPrivateStore @ 0x85c8fd4

/* private_store::CPrivateStore::ExitPrivateStore() */

undefined4 __thiscall private_store::CPrivateStore::ExitPrivateStore(CPrivateStore *this)

{
  char cVar1;
  undefined4 uVar2;
  CPacketBufPrivate local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _List_iterator local_14 [4];
  undefined1 local_10 [4];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x57);
  if (*(int *)(this + 0x30) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar2 = 0;
  }
  else {
    std::list<CUser*,std::allocator<CUser*>>::end();
    std::list<CUser*,std::allocator<CUser*>>::begin();
    std::find<std::_List_iterator<CUser*>,CUser*>(&local_20,local_18,local_1c,this + 0x30);
    cVar1 = std::list<CUser*,std::allocator<CUser*>>::empty
                      ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
    if (cVar1 != '\x01') {
      std::list<CUser*,std::allocator<CUser*>>::end();
      cVar1 = std::_List_iterator<CUser*>::operator==((_List_iterator<CUser*> *)&local_20,local_14);
      if (cVar1 != '\0') {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
        return 0;
      }
    }
    CPacketBufPrivate::CPacketBufPrivate(local_2c);
                    /* try { // try from 085c910c to 085c916e has its CatchHandler @ 085c918e */
    CPacketBufPrivate::MakeCmdpacketExitPrivateStore(local_2c);
    CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_2c);
    CPrivateStoreMgr::FreeStoreBuyer(*(CUser **)(this + 0x20));
    cVar1 = std::list<CUser*,std::allocator<CUser*>>::empty
                      ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
    if (cVar1 != '\x01') {
      std::list<CUser*,std::allocator<CUser*>>::erase(local_10,this + 0x34,local_20);
    }
    *(undefined4 *)(this + 0x30) = 0;
    uVar2 = 1;
    CPacketBufPrivate::~CPacketBufPrivate(local_2c);
  }
  return uVar2;
}
```
