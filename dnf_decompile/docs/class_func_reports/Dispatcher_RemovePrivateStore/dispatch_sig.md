# dispatch_sig

`_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RemovePrivateStore::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RemovePrivateStore` | `0x08202bb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08202bb6  _ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RemovePrivateStore::dispatch_sig(CUser*, PacketBuf&)
# range [0x08202bb6, 0x08202cd9]
08202bb6 +0x000:  push   %ebp
08202bb7 +0x001:  mov    %esp,%ebp
08202bb9 +0x003:  push   %esi
08202bba +0x004:  push   %ebx
08202bbb +0x005:  sub    $0x20,%esp
08202bbe +0x008:  mov    0xc(%ebp),%eax
08202bc1 +0x00b:  mov    %eax,(%esp)
08202bc4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08202bc9 +0x013:  cmp    $0x2,%eax
08202bcc +0x016:  jle    08202bdd <+0x27>
08202bce +0x018:  mov    0xc(%ebp),%eax
08202bd1 +0x01b:  mov    %eax,(%esp)
08202bd4 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08202bd9 +0x023:  test   %eax,%eax
08202bdb +0x025:  jne    08202be4 <+0x2e>
08202bdd +0x027:  mov    $0x1,%eax
08202be2 +0x02c:  jmp    08202be9 <+0x33>
08202be4 +0x02e:  mov    $0x0,%eax
08202be9 +0x033:  test   %al,%al
08202beb +0x035:  je     08202c8f <+0xd9>
08202bf1 +0x03b:  lea    -0x18(%ebp),%eax
08202bf4 +0x03e:  mov    %eax,(%esp)
08202bf7 +0x041:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08202bfc +0x046:  movl   $0x59,0x8(%esp)
08202c04 +0x04e:  movl   $0x1,0x4(%esp)
08202c0c +0x056:  lea    -0x18(%ebp),%eax
08202c0f +0x059:  mov    %eax,(%esp)
08202c12 +0x05c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08202c17 +0x061:  movl   $0x0,0x4(%esp)
08202c1f +0x069:  lea    -0x18(%ebp),%eax
08202c22 +0x06c:  mov    %eax,(%esp)
08202c25 +0x06f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08202c2a +0x074:  movl   $0x15,0x4(%esp)
08202c32 +0x07c:  lea    -0x18(%ebp),%eax
08202c35 +0x07f:  mov    %eax,(%esp)
08202c38 +0x082:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08202c3d +0x087:  movl   $0x1,0x4(%esp)
08202c45 +0x08f:  lea    -0x18(%ebp),%eax
08202c48 +0x092:  mov    %eax,(%esp)
08202c4b +0x095:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08202c50 +0x09a:  lea    -0x18(%ebp),%eax
08202c53 +0x09d:  mov    %eax,0x4(%esp)
08202c57 +0x0a1:  mov    0xc(%ebp),%eax
08202c5a +0x0a4:  mov    %eax,(%esp)
08202c5d +0x0a7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08202c62 +0x0ac:  mov    $0x0,%ebx
08202c67 +0x0b1:  lea    -0x18(%ebp),%eax
08202c6a +0x0b4:  mov    %eax,(%esp)
08202c6d +0x0b7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08202c72 +0x0bc:  jmp    08202cd0 <+0x11a>
08202c74 +0x0be:  mov    %edx,%ebx
08202c76 +0x0c0:  mov    %eax,%esi
08202c78 +0x0c2:  lea    -0x18(%ebp),%eax
08202c7b +0x0c5:  mov    %eax,(%esp)
08202c7e +0x0c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08202c83 +0x0cd:  mov    %esi,%eax
08202c85 +0x0cf:  mov    %ebx,%edx
08202c87 +0x0d1:  mov    %eax,(%esp)
08202c8a +0x0d4:  call   08ae3750 <_Unwind_Resume>
08202c8f +0x0d9:  movl   $0x0,-0xc(%ebp)
08202c96 +0x0e0:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202c9b +0x0e5:  mov    0xc(%ebp),%edx
08202c9e +0x0e8:  mov    %edx,0x8(%esp)
08202ca2 +0x0ec:  lea    -0xc(%ebp),%edx
08202ca5 +0x0ef:  mov    %edx,0x4(%esp)
08202ca9 +0x0f3:  mov    %eax,(%esp)
08202cac +0x0f6:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
08202cb1 +0x0fb:  mov    -0xc(%ebp),%eax
08202cb4 +0x0fe:  mov    (%eax),%eax
08202cb6 +0x100:  add    $0x4,%eax
08202cb9 +0x103:  mov    (%eax),%edx
08202cbb +0x105:  mov    -0xc(%ebp),%eax
08202cbe +0x108:  movl   $0x0,0x4(%esp)
08202cc6 +0x110:  mov    %eax,(%esp)
08202cc9 +0x113:  call   *%edx
08202ccb +0x115:  mov    $0x0,%ebx
08202cd0 +0x11a:  mov    %ebx,%eax
08202cd2 +0x11c:  add    $0x20,%esp
08202cd5 +0x11f:  pop    %ebx
08202cd6 +0x120:  pop    %esi
08202cd7 +0x121:  pop    %ebp
08202cd8 +0x122:  ret
08202cd9 +0x123:  nop
```

## 反编译 C

```c
// Dispatcher_RemovePrivateStore::dispatch_sig @ 0x8202bb6

/* Dispatcher_RemovePrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RemovePrivateStore::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CPrivateStoreMgr *this;
  PacketGuard local_1c [12];
  ISeller *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08202be9;
    }
  }
  bVar1 = true;
LAB_08202be9:
  if (bVar1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08202c12 to 08202c61 has its CatchHandler @ 08202c74 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x59);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    local_10 = (ISeller *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this,&local_10,(CUser *)param_2);
    (**(code **)(*(int *)local_10 + 4))(local_10,0);
  }
  return 0;
}
```
