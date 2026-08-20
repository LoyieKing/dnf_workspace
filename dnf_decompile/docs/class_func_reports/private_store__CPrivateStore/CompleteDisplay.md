# CompleteDisplay

`_ZN13private_store13CPrivateStore15CompleteDisplayEPKct`

`private_store::CPrivateStore::CompleteDisplay(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7800  _ZN13private_store13CPrivateStore15CompleteDisplayEPKct
#           private_store::CPrivateStore::CompleteDisplay(char const*, unsigned short)
# range [0x085c7800, 0x085c7adb]
085c7800 +0x000:  push   %ebp
085c7801 +0x001:  mov    %esp,%ebp
085c7803 +0x003:  push   %esi
085c7804 +0x004:  push   %ebx
085c7805 +0x005:  sub    $0x40,%esp
085c7808 +0x008:  mov    0x10(%ebp),%eax
085c780b +0x00b:  mov    %ax,-0x2c(%ebp)
085c780f +0x00f:  mov    0x8(%ebp),%eax
085c7812 +0x012:  mov    0x2c(%eax),%eax
085c7815 +0x015:  mov    0x8(%ebp),%edx
085c7818 +0x018:  add    $0x14,%edx
085c781b +0x01b:  movl   $0x5a,0xc(%esp)
085c7823 +0x023:  movl   $0x1,0x8(%esp)
085c782b +0x02b:  mov    %eax,0x4(%esp)
085c782f +0x02f:  mov    %edx,(%esp)
085c7832 +0x032:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c7837 +0x037:  mov    0x8(%ebp),%eax
085c783a +0x03a:  mov    0x2c(%eax),%eax
085c783d +0x03d:  test   %eax,%eax
085c783f +0x03f:  jne    085c784b <+0x4b>
085c7841 +0x041:  mov    $0x0,%ebx
085c7846 +0x046:  jmp    085c7ad3 <+0x2d3>
085c784b +0x04b:  mov    0x8(%ebp),%eax
085c784e +0x04e:  mov    0x20(%eax),%eax
085c7851 +0x051:  test   %eax,%eax
085c7853 +0x053:  jne    085c7875 <+0x75>
085c7855 +0x055:  mov    0x8(%ebp),%eax
085c7858 +0x058:  add    $0x14,%eax
085c785b +0x05b:  movl   $0x3a,0x4(%esp)
085c7863 +0x063:  mov    %eax,(%esp)
085c7866 +0x066:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c786b +0x06b:  mov    $0x0,%ebx
085c7870 +0x070:  jmp    085c7ad3 <+0x2d3>
085c7875 +0x075:  mov    0x8(%ebp),%eax
085c7878 +0x078:  mov    %eax,(%esp)
085c787b +0x07b:  call   085c7246 <_ZN13private_store13CPrivateStore9MoveItemsEv>  ; private_store::CPrivateStore::MoveItems()
085c7880 +0x080:  xor    $0x1,%eax
085c7883 +0x083:  test   %al,%al
085c7885 +0x085:  je     085c7891 <+0x91>
085c7887 +0x087:  mov    $0x0,%ebx
085c788c +0x08c:  jmp    085c7ad3 <+0x2d3>
085c7891 +0x091:  mov    0x8(%ebp),%eax
085c7894 +0x094:  mov    %eax,(%esp)
085c7897 +0x097:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085c789c +0x09c:  mov    0x8(%ebp),%eax
085c789f +0x09f:  mov    0x2c(%eax),%eax
085c78a2 +0x0a2:  mov    %eax,(%esp)
085c78a5 +0x0a5:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
085c78aa +0x0aa:  mov    0x8(%ebp),%eax
085c78ad +0x0ad:  mov    0x2c(%eax),%eax
085c78b0 +0x0b0:  movl   $0x0,0x4(%esp)
085c78b8 +0x0b8:  mov    %eax,(%esp)
085c78bb +0x0bb:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085c78c0 +0x0c0:  mov    0x8(%ebp),%eax
085c78c3 +0x0c3:  mov    0x2c(%eax),%eax
085c78c6 +0x0c6:  movl   $0x1,0x4(%esp)
085c78ce +0x0ce:  mov    %eax,(%esp)
085c78d1 +0x0d1:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085c78d6 +0x0d6:  mov    0x8(%ebp),%eax
085c78d9 +0x0d9:  mov    0x2c(%eax),%eax
085c78dc +0x0dc:  mov    %eax,(%esp)
085c78df +0x0df:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c78e4 +0x0e4:  mov    %eax,(%esp)
085c78e7 +0x0e7:  call   084faf8e <_ZNK10CInventory21SendItemLockListInvenEv>  ; CInventory::SendItemLockListInven() const
085c78ec +0x0ec:  mov    0x8(%ebp),%eax
085c78ef +0x0ef:  mov    0x2c(%eax),%eax
085c78f2 +0x0f2:  mov    %eax,(%esp)
085c78f5 +0x0f5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c78fa +0x0fa:  mov    %eax,(%esp)
085c78fd +0x0fd:  call   084fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>  ; CInventory::SendItemLockListAvatar() const
085c7902 +0x102:  mov    0x8(%ebp),%eax
085c7905 +0x105:  mov    %eax,(%esp)
085c7908 +0x108:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c790d +0x10d:  xor    $0x1,%eax
085c7910 +0x110:  test   %al,%al
085c7912 +0x112:  je     085c7922 <+0x122>
085c7914 +0x114:  cmpw   $0xffff,-0x2c(%ebp)
085c7919 +0x119:  je     085c7922 <+0x122>
085c791b +0x11b:  mov    $0x1,%eax
085c7920 +0x120:  jmp    085c7927 <+0x127>
085c7922 +0x122:  mov    $0x0,%eax
085c7927 +0x127:  test   %al,%al
085c7929 +0x129:  je     085c7935 <+0x135>
085c792b +0x12b:  mov    $0x0,%ebx
085c7930 +0x130:  jmp    085c7ad3 <+0x2d3>
085c7935 +0x135:  mov    0x8(%ebp),%eax
085c7938 +0x138:  mov    %eax,(%esp)
085c793b +0x13b:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c7940 +0x140:  test   %al,%al
085c7942 +0x142:  je     085c79ed <+0x1ed>
085c7948 +0x148:  movzwl -0x2c(%ebp),%ebx
085c794c +0x14c:  mov    0x8(%ebp),%eax
085c794f +0x14f:  mov    0x2c(%eax),%eax
085c7952 +0x152:  mov    %eax,(%esp)
085c7955 +0x155:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c795a +0x15a:  movl   $0x1,0xc(%esp)
085c7962 +0x162:  movl   $0x1,0x8(%esp)
085c796a +0x16a:  mov    %ebx,0x4(%esp)
085c796e +0x16e:  mov    %eax,(%esp)
085c7971 +0x171:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
085c7976 +0x176:  mov    %eax,-0xc(%ebp)
085c7979 +0x179:  movzwl -0x2c(%ebp),%edx
085c797d +0x17d:  mov    0x8(%ebp),%eax
085c7980 +0x180:  mov    0x2c(%eax),%eax
085c7983 +0x183:  mov    %edx,0xc(%esp)
085c7987 +0x187:  movl   $0x0,0x8(%esp)
085c798f +0x18f:  movl   $0x1,0x4(%esp)
085c7997 +0x197:  mov    %eax,(%esp)
085c799a +0x19a:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085c799f +0x19f:  cmpl   $0x0,-0xc(%ebp)
085c79a3 +0x1a3:  je     085c79ed <+0x1ed>
085c79a5 +0x1a5:  movzwl -0x2c(%ebp),%ebx
085c79a9 +0x1a9:  movl   $0x5,0xc(%esp)
085c79b1 +0x1b1:  movl   $0x6c1,0x8(%esp)
085c79b9 +0x1b9:  movl   $&_ZZN13private_store13CPrivateStore15CompleteDisplayEPKctE19__PRETTY_FUNCTION__,0x4(%esp)
085c79c1 +0x1c1:  lea    -0x1c(%ebp),%eax
085c79c4 +0x1c4:  mov    %eax,(%esp)
085c79c7 +0x1c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c79cc +0x1cc:  mov    %ebx,0x8(%esp)
085c79d0 +0x1d0:  movl   $"CPrivateStore::CompleteDisplay() ERROR!!! : use_item(%d)",0x4(%esp)
085c79d8 +0x1d8:  lea    -0x1c(%ebp),%eax
085c79db +0x1db:  mov    %eax,(%esp)
085c79de +0x1de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c79e3 +0x1e3:  mov    $0x0,%ebx
085c79e8 +0x1e8:  jmp    085c7ad3 <+0x2d3>
085c79ed +0x1ed:  mov    0x8(%ebp),%eax
085c79f0 +0x1f0:  lea    0x48(%eax),%edx
085c79f3 +0x1f3:  mov    0xc(%ebp),%eax
085c79f6 +0x1f6:  mov    %eax,0x4(%esp)
085c79fa +0x1fa:  mov    %edx,(%esp)
085c79fd +0x1fd:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
085c7a02 +0x202:  lea    -0x28(%ebp),%eax
085c7a05 +0x205:  mov    %eax,(%esp)
085c7a08 +0x208:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c7a0d +0x20d:  mov    0x8(%ebp),%eax
085c7a10 +0x210:  mov    %eax,(%esp)
085c7a13 +0x213:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c7a18 +0x218:  movzbl %al,%ebx
085c7a1b +0x21b:  mov    0x8(%ebp),%eax
085c7a1e +0x21e:  lea    0x48(%eax),%esi
085c7a21 +0x221:  mov    0x8(%ebp),%eax
085c7a24 +0x224:  mov    %eax,(%esp)
085c7a27 +0x227:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085c7a2c +0x22c:  movzwl %ax,%eax
085c7a2f +0x22f:  mov    %ebx,0xc(%esp)
085c7a33 +0x233:  mov    %esi,0x8(%esp)
085c7a37 +0x237:  mov    %eax,0x4(%esp)
085c7a3b +0x23b:  lea    -0x28(%ebp),%eax
085c7a3e +0x23e:  mov    %eax,(%esp)
085c7a41 +0x241:  call   085cbc52 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x968>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x968
085c7a46 +0x246:  mov    0x8(%ebp),%eax
085c7a49 +0x249:  movzbl 0x25(%eax),%eax
085c7a4d +0x24d:  movzbl %al,%edx
085c7a50 +0x250:  mov    0x8(%ebp),%eax
085c7a53 +0x253:  movzbl 0x24(%eax),%eax
085c7a57 +0x257:  movzbl %al,%eax
085c7a5a +0x25a:  lea    -0x28(%ebp),%ecx
085c7a5d +0x25d:  mov    %ecx,0x8(%esp)
085c7a61 +0x261:  mov    %edx,0x4(%esp)
085c7a65 +0x265:  mov    %eax,(%esp)
085c7a68 +0x268:  call   085cca73 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1789>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1789
085c7a6d +0x26d:  mov    0x8(%ebp),%eax
085c7a70 +0x270:  mov    %eax,(%esp)
085c7a73 +0x273:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c7a78 +0x278:  movzbl %al,%eax
085c7a7b +0x27b:  mov    %eax,0x4(%esp)
085c7a7f +0x27f:  lea    -0x28(%ebp),%eax
085c7a82 +0x282:  mov    %eax,(%esp)
085c7a85 +0x285:  call   085cbbca <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x8e0>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x8e0
085c7a8a +0x28a:  mov    0x8(%ebp),%eax
085c7a8d +0x28d:  mov    0x2c(%eax),%eax
085c7a90 +0x290:  lea    -0x28(%ebp),%edx
085c7a93 +0x293:  mov    %edx,0x4(%esp)
085c7a97 +0x297:  mov    %eax,(%esp)
085c7a9a +0x29a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c7a9f +0x29f:  mov    0x8(%ebp),%eax
085c7aa2 +0x2a2:  movb   $0x2,0x10(%eax)
085c7aa6 +0x2a6:  mov    $0x1,%ebx
085c7aab +0x2ab:  lea    -0x28(%ebp),%eax
085c7aae +0x2ae:  mov    %eax,(%esp)
085c7ab1 +0x2b1:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c7ab6 +0x2b6:  jmp    085c7ad3 <+0x2d3>
085c7ab8 +0x2b8:  mov    %edx,%ebx
085c7aba +0x2ba:  mov    %eax,%esi
085c7abc +0x2bc:  lea    -0x28(%ebp),%eax
085c7abf +0x2bf:  mov    %eax,(%esp)
085c7ac2 +0x2c2:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c7ac7 +0x2c7:  mov    %esi,%eax
085c7ac9 +0x2c9:  mov    %ebx,%edx
085c7acb +0x2cb:  mov    %eax,(%esp)
085c7ace +0x2ce:  call   08ae3750 <_Unwind_Resume>
085c7ad3 +0x2d3:  mov    %ebx,%eax
085c7ad5 +0x2d5:  add    $0x40,%esp
085c7ad8 +0x2d8:  pop    %ebx
085c7ad9 +0x2d9:  pop    %esi
085c7ada +0x2da:  pop    %ebp
085c7adb +0x2db:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::CompleteDisplay @ 0x85c7800

/* private_store::CPrivateStore::CompleteDisplay(char const*, unsigned short) */

undefined4 __thiscall
private_store::CPrivateStore::CompleteDisplay(CPrivateStore *this,char *param_1,ushort param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CPacketBufPrivate local_2c [12];
  cMyTrace local_20 [16];
  int local_10;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x5a);
  if (*(int *)(this + 0x2c) == 0) {
    uVar5 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar5 = 0;
  }
  else {
    cVar1 = MoveItems(this);
    if (cVar1 == '\x01') {
      SavePrivateStore(this);
      CUser::UpdateData(*(CUser **)(this + 0x2c));
      CUser::send_itemspace(*(CUser **)(this + 0x2c),0);
      CUser::send_itemspace(*(CUser **)(this + 0x2c),1);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
      ;
      CInventory::SendItemLockListInven(pCVar4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
      ;
      CInventory::SendItemLockListAvatar(pCVar4);
      cVar1 = isDollCreated(this);
      if ((cVar1 == '\x01') || (param_2 == 0xffff)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = 0;
      }
      else {
        cVar1 = isDollCreated(this);
        if (cVar1 != '\0') {
          pCVar4 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
          local_10 = CInventory::use_item(pCVar4,(uint)param_2,1,1);
          CUser::SendUpdateItem(*(CUser **)(this + 0x2c),1,0,param_2);
          if (local_10 != 0) {
            cMyTrace::cMyTrace(local_20,
                               "virtual bool private_store::CPrivateStore::CompleteDisplay(const char*, short unsigned int)"
                               ,0x6c1,5);
            cMyTrace::operator()
                      (local_20,"CPrivateStore::CompleteDisplay() ERROR!!! : use_item(%d)",
                       (uint)param_2);
            return 0;
          }
        }
        std::string::operator=((string *)(this + 0x48),param_1);
        CPacketBufPrivate::CPacketBufPrivate(local_2c);
        bVar2 = (bool)isDollCreated(this);
        uVar3 = GetSellerIndex(this);
                    /* try { // try from 085c7a41 to 085c7a9e has its CatchHandler @ 085c7ab8 */
        CPacketBufPrivate::MakeNotipacketCompleteDisplay
                  (local_2c,uVar3,(string *)(this + 0x48),bVar2);
        CBroadcastPrivate::Send
                  ((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_2c);
        bVar2 = (bool)isDollCreated(this);
        CPacketBufPrivate::MakeCmdpacketCompleteDisplay(local_2c,bVar2);
        CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_2c);
        this[0x10] = (CPrivateStore)0x2;
        uVar5 = 1;
        CPacketBufPrivate::~CPacketBufPrivate(local_2c);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
