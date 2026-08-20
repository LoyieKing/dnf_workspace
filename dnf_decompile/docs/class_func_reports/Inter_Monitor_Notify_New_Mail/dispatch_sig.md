# dispatch_sig

`_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci`

`Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_Notify_New_Mail` | `0x084d017c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d017c  _ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci
#           Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser*, char*, int)
# range [0x084d017c, 0x084d027d]
084d017c +0x000:  push   %ebp
084d017d +0x001:  mov    %esp,%ebp
084d017f +0x003:  push   %esi
084d0180 +0x004:  push   %ebx
084d0181 +0x005:  sub    $0x20,%esp
084d0184 +0x008:  mov    0x10(%ebp),%eax
084d0187 +0x00b:  mov    %eax,-0xc(%ebp)
084d018a +0x00e:  mov    0xc(%ebp),%eax
084d018d +0x011:  mov    %eax,(%esp)
084d0190 +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d0195 +0x019:  test   %eax,%eax
084d0197 +0x01b:  je     084d01ae <+0x32>
084d0199 +0x01d:  mov    0xc(%ebp),%eax
084d019c +0x020:  mov    %eax,(%esp)
084d019f +0x023:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d01a4 +0x028:  mov    -0xc(%ebp),%edx
084d01a7 +0x02b:  mov    0xa(%edx),%edx
084d01aa +0x02e:  cmp    %edx,%eax
084d01ac +0x030:  je     084d01b5 <+0x39>
084d01ae +0x032:  mov    $0x1,%eax
084d01b3 +0x037:  jmp    084d01ba <+0x3e>
084d01b5 +0x039:  mov    $0x0,%eax
084d01ba +0x03e:  test   %al,%al
084d01bc +0x040:  je     084d01c8 <+0x4c>
084d01be +0x042:  mov    $0x0,%ebx
084d01c3 +0x047:  jmp    084d0275 <+0xf9>
084d01c8 +0x04c:  mov    0xc(%ebp),%eax
084d01cb +0x04f:  mov    %eax,(%esp)
084d01ce +0x052:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d01d3 +0x057:  mov    %eax,(%esp)
084d01d6 +0x05a:  call   084ed330 <_GLOBAL__I__Z7getUserj+0x42e2>  ; global constructors keyed to getUser(unsigned int)+0x42e2
084d01db +0x05f:  lea    -0x18(%ebp),%eax
084d01de +0x062:  mov    %eax,(%esp)
084d01e1 +0x065:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d01e6 +0x06a:  movl   $0x63,0x8(%esp)
084d01ee +0x072:  movl   $0x0,0x4(%esp)
084d01f6 +0x07a:  lea    -0x18(%ebp),%eax
084d01f9 +0x07d:  mov    %eax,(%esp)
084d01fc +0x080:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d0201 +0x085:  mov    0xc(%ebp),%eax
084d0204 +0x088:  mov    %eax,(%esp)
084d0207 +0x08b:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d020c +0x090:  mov    %eax,(%esp)
084d020f +0x093:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
084d0214 +0x098:  mov    %eax,0x4(%esp)
084d0218 +0x09c:  lea    -0x18(%ebp),%eax
084d021b +0x09f:  mov    %eax,(%esp)
084d021e +0x0a2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d0223 +0x0a7:  movl   $0x1,0x4(%esp)
084d022b +0x0af:  lea    -0x18(%ebp),%eax
084d022e +0x0b2:  mov    %eax,(%esp)
084d0231 +0x0b5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d0236 +0x0ba:  lea    -0x18(%ebp),%eax
084d0239 +0x0bd:  mov    %eax,0x4(%esp)
084d023d +0x0c1:  mov    0xc(%ebp),%eax
084d0240 +0x0c4:  mov    %eax,(%esp)
084d0243 +0x0c7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d0248 +0x0cc:  mov    $0x0,%ebx
084d024d +0x0d1:  lea    -0x18(%ebp),%eax
084d0250 +0x0d4:  mov    %eax,(%esp)
084d0253 +0x0d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0258 +0x0dc:  jmp    084d0275 <+0xf9>
084d025a +0x0de:  mov    %edx,%ebx
084d025c +0x0e0:  mov    %eax,%esi
084d025e +0x0e2:  lea    -0x18(%ebp),%eax
084d0261 +0x0e5:  mov    %eax,(%esp)
084d0264 +0x0e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0269 +0x0ed:  mov    %esi,%eax
084d026b +0x0ef:  mov    %ebx,%edx
084d026d +0x0f1:  mov    %eax,(%esp)
084d0270 +0x0f4:  call   08ae3750 <_Unwind_Resume>
084d0275 +0x0f9:  mov    %ebx,%eax
084d0277 +0x0fb:  add    $0x20,%esp
084d027a +0x0fe:  pop    %ebx
084d027b +0x0ff:  pop    %esi
084d027c +0x100:  pop    %ebp
084d027d +0x101:  ret
```

## 反编译 C

```c
// Inter_Monitor_Notify_New_Mail::dispatch_sig @ 0x84d017c

/* Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  CMailBox *pCVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if ((iVar2 == 0) ||
     (iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar2 != *(int *)(local_10 + 10))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    pCVar3 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    WongWork::CMailBox::IncNotLoadedMailCount(pCVar3);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d01fc to 084d0247 has its CatchHandler @ 084d025a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,99);
    pCVar3 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    iVar2 = WongWork::CMailBox::GetNotLoadedMailCount(pCVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
