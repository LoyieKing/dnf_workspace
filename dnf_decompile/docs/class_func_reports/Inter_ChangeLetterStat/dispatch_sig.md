# dispatch_sig

`_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci`

`Inter_ChangeLetterStat::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ChangeLetterStat` | `0x084d18ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d18ac  _ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci
#           Inter_ChangeLetterStat::dispatch_sig(CUser*, char*, int)
# range [0x084d18ac, 0x084d1ab5]
084d18ac +0x000:  push   %ebp
084d18ad +0x001:  mov    %esp,%ebp
084d18af +0x003:  push   %esi
084d18b0 +0x004:  push   %ebx
084d18b1 +0x005:  sub    $0x20,%esp
084d18b4 +0x008:  mov    0xc(%ebp),%eax
084d18b7 +0x00b:  mov    %eax,(%esp)
084d18ba +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d18bf +0x013:  cmp    $0x2,%eax
084d18c2 +0x016:  setle  %al
084d18c5 +0x019:  test   %al,%al
084d18c7 +0x01b:  je     084d18d3 <+0x27>
084d18c9 +0x01d:  mov    $0x0,%ebx
084d18ce +0x022:  jmp    084d1aad <+0x201>
084d18d3 +0x027:  mov    0x10(%ebp),%eax
084d18d6 +0x02a:  mov    %eax,-0xc(%ebp)
084d18d9 +0x02d:  mov    0xc(%ebp),%eax
084d18dc +0x030:  mov    %eax,(%esp)
084d18df +0x033:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d18e4 +0x038:  test   %eax,%eax
084d18e6 +0x03a:  je     084d18fc <+0x50>
084d18e8 +0x03c:  mov    0xc(%ebp),%eax
084d18eb +0x03f:  mov    %eax,(%esp)
084d18ee +0x042:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d18f3 +0x047:  mov    -0xc(%ebp),%edx
084d18f6 +0x04a:  mov    (%edx),%edx
084d18f8 +0x04c:  cmp    %edx,%eax
084d18fa +0x04e:  je     084d1903 <+0x57>
084d18fc +0x050:  mov    $0x1,%eax
084d1901 +0x055:  jmp    084d1908 <+0x5c>
084d1903 +0x057:  mov    $0x0,%eax
084d1908 +0x05c:  test   %al,%al
084d190a +0x05e:  je     084d1916 <+0x6a>
084d190c +0x060:  mov    $0x30a2,%ebx
084d1911 +0x065:  jmp    084d1aad <+0x201>
084d1916 +0x06a:  mov    -0xc(%ebp),%eax
084d1919 +0x06d:  movzwl 0x8(%eax),%eax
084d191d +0x071:  cmp    $0x3,%ax
084d1921 +0x075:  jne    084d196d <+0xc1>
084d1923 +0x077:  mov    0xc(%ebp),%eax
084d1926 +0x07a:  mov    %eax,(%esp)
084d1929 +0x07d:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d192e +0x082:  test   %eax,%eax
084d1930 +0x084:  setne  %al
084d1933 +0x087:  test   %al,%al
084d1935 +0x089:  je     084d19c4 <+0x118>
084d193b +0x08f:  mov    -0xc(%ebp),%eax
084d193e +0x092:  mov    0x4(%eax),%ebx
084d1941 +0x095:  mov    0xc(%ebp),%eax
084d1944 +0x098:  mov    %eax,(%esp)
084d1947 +0x09b:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d194c +0x0a0:  mov    %ebx,0x4(%esp)
084d1950 +0x0a4:  mov    %eax,(%esp)
084d1953 +0x0a7:  call   084ed222 <_GLOBAL__I__Z7getUserj+0x41d4>  ; global constructors keyed to getUser(unsigned int)+0x41d4
084d1958 +0x0ac:  mov    0xc(%ebp),%eax
084d195b +0x0af:  mov    %eax,(%esp)
084d195e +0x0b2:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d1963 +0x0b7:  mov    %eax,(%esp)
084d1966 +0x0ba:  call   084ed2fc <_GLOBAL__I__Z7getUserj+0x42ae>  ; global constructors keyed to getUser(unsigned int)+0x42ae
084d196b +0x0bf:  jmp    084d19c4 <+0x118>
084d196d +0x0c1:  mov    -0xc(%ebp),%eax
084d1970 +0x0c4:  movzwl 0x8(%eax),%eax
084d1974 +0x0c8:  test   %ax,%ax
084d1977 +0x0cb:  jne    084d19c4 <+0x118>
084d1979 +0x0cd:  mov    0xc(%ebp),%eax
084d197c +0x0d0:  mov    %eax,(%esp)
084d197f +0x0d3:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d1984 +0x0d8:  test   %eax,%eax
084d1986 +0x0da:  setne  %al
084d1989 +0x0dd:  test   %al,%al
084d198b +0x0df:  je     084d19c4 <+0x118>
084d198d +0x0e1:  mov    -0xc(%ebp),%eax
084d1990 +0x0e4:  mov    0x4(%eax),%ebx
084d1993 +0x0e7:  mov    0xc(%ebp),%eax
084d1996 +0x0ea:  mov    %eax,(%esp)
084d1999 +0x0ed:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d199e +0x0f2:  mov    %ebx,0x4(%esp)
084d19a2 +0x0f6:  mov    %eax,(%esp)
084d19a5 +0x0f9:  call   084ed280 <_GLOBAL__I__Z7getUserj+0x4232>  ; global constructors keyed to getUser(unsigned int)+0x4232
084d19aa +0x0fe:  xor    $0x1,%eax
084d19ad +0x101:  test   %al,%al
084d19af +0x103:  je     084d19c4 <+0x118>
084d19b1 +0x105:  mov    0xc(%ebp),%eax
084d19b4 +0x108:  mov    %eax,(%esp)
084d19b7 +0x10b:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d19bc +0x110:  mov    %eax,(%esp)
084d19bf +0x113:  call   084ed2fc <_GLOBAL__I__Z7getUserj+0x42ae>  ; global constructors keyed to getUser(unsigned int)+0x42ae
084d19c4 +0x118:  lea    -0x18(%ebp),%eax
084d19c7 +0x11b:  mov    %eax,(%esp)
084d19ca +0x11e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d19cf +0x123:  movl   $0x89,0x8(%esp)
084d19d7 +0x12b:  movl   $0x1,0x4(%esp)
084d19df +0x133:  lea    -0x18(%ebp),%eax
084d19e2 +0x136:  mov    %eax,(%esp)
084d19e5 +0x139:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d19ea +0x13e:  mov    -0xc(%ebp),%eax
084d19ed +0x141:  mov    0x4(%eax),%eax
084d19f0 +0x144:  test   %eax,%eax
084d19f2 +0x146:  jne    084d1a1c <+0x170>
084d19f4 +0x148:  movl   $0x0,0x4(%esp)
084d19fc +0x150:  lea    -0x18(%ebp),%eax
084d19ff +0x153:  mov    %eax,(%esp)
084d1a02 +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1a07 +0x15b:  movl   $0x2,0x4(%esp)
084d1a0f +0x163:  lea    -0x18(%ebp),%eax
084d1a12 +0x166:  mov    %eax,(%esp)
084d1a15 +0x169:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1a1a +0x16e:  jmp    084d1a5b <+0x1af>
084d1a1c +0x170:  movl   $0x1,0x4(%esp)
084d1a24 +0x178:  lea    -0x18(%ebp),%eax
084d1a27 +0x17b:  mov    %eax,(%esp)
084d1a2a +0x17e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1a2f +0x183:  mov    -0xc(%ebp),%eax
084d1a32 +0x186:  mov    0x4(%eax),%eax
084d1a35 +0x189:  mov    %eax,0x4(%esp)
084d1a39 +0x18d:  lea    -0x18(%ebp),%eax
084d1a3c +0x190:  mov    %eax,(%esp)
084d1a3f +0x193:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d1a44 +0x198:  mov    -0xc(%ebp),%eax
084d1a47 +0x19b:  movzwl 0x8(%eax),%eax
084d1a4b +0x19f:  cwtl
084d1a4c +0x1a0:  mov    %eax,0x4(%esp)
084d1a50 +0x1a4:  lea    -0x18(%ebp),%eax
084d1a53 +0x1a7:  mov    %eax,(%esp)
084d1a56 +0x1aa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d1a5b +0x1af:  movl   $0x1,0x4(%esp)
084d1a63 +0x1b7:  lea    -0x18(%ebp),%eax
084d1a66 +0x1ba:  mov    %eax,(%esp)
084d1a69 +0x1bd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d1a6e +0x1c2:  lea    -0x18(%ebp),%eax
084d1a71 +0x1c5:  mov    %eax,0x4(%esp)
084d1a75 +0x1c9:  mov    0xc(%ebp),%eax
084d1a78 +0x1cc:  mov    %eax,(%esp)
084d1a7b +0x1cf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d1a80 +0x1d4:  mov    $0x0,%ebx
084d1a85 +0x1d9:  lea    -0x18(%ebp),%eax
084d1a88 +0x1dc:  mov    %eax,(%esp)
084d1a8b +0x1df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1a90 +0x1e4:  jmp    084d1aad <+0x201>
084d1a92 +0x1e6:  mov    %edx,%ebx
084d1a94 +0x1e8:  mov    %eax,%esi
084d1a96 +0x1ea:  lea    -0x18(%ebp),%eax
084d1a99 +0x1ed:  mov    %eax,(%esp)
084d1a9c +0x1f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1aa1 +0x1f5:  mov    %esi,%eax
084d1aa3 +0x1f7:  mov    %ebx,%edx
084d1aa5 +0x1f9:  mov    %eax,(%esp)
084d1aa8 +0x1fc:  call   08ae3750 <_Unwind_Resume>
084d1aad +0x201:  mov    %ebx,%eax
084d1aaf +0x203:  add    $0x20,%esp
084d1ab2 +0x206:  pop    %ebx
084d1ab3 +0x207:  pop    %esi
084d1ab4 +0x208:  pop    %ebp
084d1ab5 +0x209:  ret
```

## 反编译 C

```c
// Inter_ChangeLetterStat::dispatch_sig @ 0x84d18ac

/* Inter_ChangeLetterStat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChangeLetterStat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CMailBox *pCVar5;
  undefined4 uVar6;
  PacketGuard local_1c [12];
  int *local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    local_10 = (int *)param_3;
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar3 == 0) ||
       (iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar3 != *local_10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0x30a2;
    }
    else {
      if ((short)local_10[2] == 3) {
        iVar3 = CUser::GetMailBox((CUser *)param_2);
        if (iVar3 != 0) {
          uVar4 = CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::InsertLetterKeepCount(uVar4);
          pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::DecLoadedLetterCount(pCVar5);
        }
      }
      else if (((short)local_10[2] == 0) &&
              (iVar3 = CUser::GetMailBox((CUser *)param_2), iVar3 != 0)) {
        uVar4 = local_10[1];
        pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
        cVar2 = WongWork::CMailBox::DeleteLetterKeepCount(pCVar5,uVar4);
        if (cVar2 != '\x01') {
          pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::DecLoadedLetterCount(pCVar5);
        }
      }
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d19e5 to 084d1a7f has its CatchHandler @ 084d1a92 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x89);
      if (local_10[1] == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10[1]);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)(short)local_10[2]);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
    return uVar6;
  }
  return 0;
}
```
