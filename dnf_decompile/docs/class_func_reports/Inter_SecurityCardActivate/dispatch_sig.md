# dispatch_sig

`_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci`

`Inter_SecurityCardActivate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SecurityCardActivate` | `0x084d3d56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d3d56  _ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci
#           Inter_SecurityCardActivate::dispatch_sig(CUser*, char*, int)
# range [0x084d3d56, 0x084d3e77]
084d3d56 +0x000:  push   %ebp
084d3d57 +0x001:  mov    %esp,%ebp
084d3d59 +0x003:  push   %esi
084d3d5a +0x004:  push   %ebx
084d3d5b +0x005:  sub    $0x20,%esp
084d3d5e +0x008:  mov    0xc(%ebp),%eax
084d3d61 +0x00b:  mov    %eax,(%esp)
084d3d64 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d3d69 +0x013:  cmp    $0x2,%eax
084d3d6c +0x016:  setle  %al
084d3d6f +0x019:  test   %al,%al
084d3d71 +0x01b:  je     084d3d7d <+0x27>
084d3d73 +0x01d:  mov    $0x0,%eax
084d3d78 +0x022:  jmp    084d3e70 <+0x11a>
084d3d7d +0x027:  mov    0x10(%ebp),%eax
084d3d80 +0x02a:  mov    %eax,-0xc(%ebp)
084d3d83 +0x02d:  mov    -0xc(%ebp),%eax
084d3d86 +0x030:  movzbl 0xa(%eax),%eax
084d3d8a +0x034:  test   %al,%al
084d3d8c +0x036:  je     084d3e50 <+0xfa>
084d3d92 +0x03c:  mov    0xc(%ebp),%eax
084d3d95 +0x03f:  mov    %eax,(%esp)
084d3d98 +0x042:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d3d9d +0x047:  movl   $0x1,0x4(%esp)
084d3da5 +0x04f:  mov    %eax,(%esp)
084d3da8 +0x052:  call   084ebd82 <_GLOBAL__I__Z7getUserj+0x2d34>  ; global constructors keyed to getUser(unsigned int)+0x2d34
084d3dad +0x057:  mov    0xc(%ebp),%eax
084d3db0 +0x05a:  mov    %eax,(%esp)
084d3db3 +0x05d:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d3db8 +0x062:  movl   $0x1,0x4(%esp)
084d3dc0 +0x06a:  mov    %eax,(%esp)
084d3dc3 +0x06d:  call   084ebd9a <_GLOBAL__I__Z7getUserj+0x2d4c>  ; global constructors keyed to getUser(unsigned int)+0x2d4c
084d3dc8 +0x072:  lea    -0x18(%ebp),%eax
084d3dcb +0x075:  mov    %eax,(%esp)
084d3dce +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3dd3 +0x07d:  movl   $0xa8,0x8(%esp)
084d3ddb +0x085:  movl   $0x1,0x4(%esp)
084d3de3 +0x08d:  lea    -0x18(%ebp),%eax
084d3de6 +0x090:  mov    %eax,(%esp)
084d3de9 +0x093:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d3dee +0x098:  movl   $0x1,0x4(%esp)
084d3df6 +0x0a0:  lea    -0x18(%ebp),%eax
084d3df9 +0x0a3:  mov    %eax,(%esp)
084d3dfc +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d3e01 +0x0ab:  movl   $0x1,0x4(%esp)
084d3e09 +0x0b3:  lea    -0x18(%ebp),%eax
084d3e0c +0x0b6:  mov    %eax,(%esp)
084d3e0f +0x0b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3e14 +0x0be:  lea    -0x18(%ebp),%eax
084d3e17 +0x0c1:  mov    %eax,0x4(%esp)
084d3e1b +0x0c5:  mov    0xc(%ebp),%eax
084d3e1e +0x0c8:  mov    %eax,(%esp)
084d3e21 +0x0cb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3e26 +0x0d0:  jmp    084d3e43 <+0xed>
084d3e28 +0x0d2:  mov    %edx,%ebx
084d3e2a +0x0d4:  mov    %eax,%esi
084d3e2c +0x0d6:  lea    -0x18(%ebp),%eax
084d3e2f +0x0d9:  mov    %eax,(%esp)
084d3e32 +0x0dc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3e37 +0x0e1:  mov    %esi,%eax
084d3e39 +0x0e3:  mov    %ebx,%edx
084d3e3b +0x0e5:  mov    %eax,(%esp)
084d3e3e +0x0e8:  call   08ae3750 <_Unwind_Resume>
084d3e43 +0x0ed:  lea    -0x18(%ebp),%eax
084d3e46 +0x0f0:  mov    %eax,(%esp)
084d3e49 +0x0f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3e4e +0x0f8:  jmp    084d3e6b <+0x115>
084d3e50 +0x0fa:  movl   $0x1,0x8(%esp)
084d3e58 +0x102:  movl   $0xa8,0x4(%esp)
084d3e60 +0x10a:  mov    0xc(%ebp),%eax
084d3e63 +0x10d:  mov    %eax,(%esp)
084d3e66 +0x110:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d3e6b +0x115:  mov    $0x0,%eax
084d3e70 +0x11a:  add    $0x20,%esp
084d3e73 +0x11d:  pop    %ebx
084d3e74 +0x11e:  pop    %esi
084d3e75 +0x11f:  pop    %ebp
084d3e76 +0x120:  ret
084d3e77 +0x121:  nop
```

## 反编译 C

```c
// Inter_SecurityCardActivate::dispatch_sig @ 0x84d3d56

/* Inter_SecurityCardActivate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardActivate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CSecurityCard *pCVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)(param_3 + 10) == '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa8,1);
    }
    else {
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setActivate(pCVar2,true);
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setCertFlag(pCVar2,'\x01');
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3de9 to 084d3e25 has its CatchHandler @ 084d3e28 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
