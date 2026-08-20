# dispatch_sig

`_ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci`

`Inter_LoadGameOption::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadGameOption` | `0x084d7e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7e84  _ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci
#           Inter_LoadGameOption::dispatch_sig(CUser*, char*, int)
# range [0x084d7e84, 0x084d8095]
084d7e84 +0x000:  push   %ebp
084d7e85 +0x001:  mov    %esp,%ebp
084d7e87 +0x003:  push   %esi
084d7e88 +0x004:  push   %ebx
084d7e89 +0x005:  sub    $0x30,%esp
084d7e8c +0x008:  mov    0xc(%ebp),%eax
084d7e8f +0x00b:  mov    %eax,(%esp)
084d7e92 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d7e97 +0x013:  cmp    $0x1,%eax
084d7e9a +0x016:  setle  %al
084d7e9d +0x019:  test   %al,%al
084d7e9f +0x01b:  je     084d7eab <+0x27>
084d7ea1 +0x01d:  mov    $0x0,%ebx
084d7ea6 +0x022:  jmp    084d808d <+0x209>
084d7eab +0x027:  mov    0x10(%ebp),%eax
084d7eae +0x02a:  mov    %eax,-0x10(%ebp)
084d7eb1 +0x02d:  mov    -0x10(%ebp),%eax
084d7eb4 +0x030:  movl   $0x1,0x8(%esp)
084d7ebc +0x038:  movl   $0x1,0x4(%esp)
084d7ec4 +0x040:  mov    %eax,(%esp)
084d7ec7 +0x043:  call   084b7336 <_GLOBAL__I__ZN11CGameOptionC2Ev+0x1c>  ; global constructors keyed to CGameOption::CGameOption()+0x1c
084d7ecc +0x048:  mov    0xc(%ebp),%eax
084d7ecf +0x04b:  mov    %eax,(%esp)
084d7ed2 +0x04e:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
084d7ed7 +0x053:  mov    %eax,-0xc(%ebp)
084d7eda +0x056:  mov    -0x10(%ebp),%eax
084d7edd +0x059:  mov    %eax,0x4(%esp)
084d7ee1 +0x05d:  mov    -0xc(%ebp),%eax
084d7ee4 +0x060:  mov    %eax,(%esp)
084d7ee7 +0x063:  call   084b6df4 <_ZN11CGameOption12SetEtcOptionER10CETCOption>  ; CGameOption::SetEtcOption(CETCOption&)
084d7eec +0x068:  mov    -0x10(%ebp),%eax
084d7eef +0x06b:  add    $0x48,%eax
084d7ef2 +0x06e:  movl   $0x0,0x8(%esp)
084d7efa +0x076:  mov    %eax,0x4(%esp)
084d7efe +0x07a:  mov    -0xc(%ebp),%eax
084d7f01 +0x07d:  mov    %eax,(%esp)
084d7f04 +0x080:  call   084b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>  ; CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int)
084d7f09 +0x085:  mov    -0x10(%ebp),%eax
084d7f0c +0x088:  add    $0x174,%eax
084d7f11 +0x08d:  movl   $0x1,0x8(%esp)
084d7f19 +0x095:  mov    %eax,0x4(%esp)
084d7f1d +0x099:  mov    -0xc(%ebp),%eax
084d7f20 +0x09c:  mov    %eax,(%esp)
084d7f23 +0x09f:  call   084b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>  ; CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int)
084d7f28 +0x0a4:  mov    -0x10(%ebp),%eax
084d7f2b +0x0a7:  add    $0x2a0,%eax
084d7f30 +0x0ac:  mov    %eax,0x4(%esp)
084d7f34 +0x0b0:  mov    -0xc(%ebp),%eax
084d7f37 +0x0b3:  mov    %eax,(%esp)
084d7f3a +0x0b6:  call   084b7080 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig>  ; CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&)
084d7f3f +0x0bb:  lea    -0x1c(%ebp),%eax
084d7f42 +0x0be:  mov    %eax,(%esp)
084d7f45 +0x0c1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d7f4a +0x0c6:  movl   $0xad,0x8(%esp)
084d7f52 +0x0ce:  movl   $0x0,0x4(%esp)
084d7f5a +0x0d6:  lea    -0x1c(%ebp),%eax
084d7f5d +0x0d9:  mov    %eax,(%esp)
084d7f60 +0x0dc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d7f65 +0x0e1:  movl   $0x48,0x4(%esp)
084d7f6d +0x0e9:  lea    -0x1c(%ebp),%eax
084d7f70 +0x0ec:  mov    %eax,(%esp)
084d7f73 +0x0ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d7f78 +0x0f4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d7f7d +0x0f9:  mov    %eax,(%esp)
084d7f80 +0x0fc:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
084d7f85 +0x101:  test   %al,%al
084d7f87 +0x103:  je     084d7fbf <+0x13b>
084d7f89 +0x105:  mov    -0x10(%ebp),%eax
084d7f8c +0x108:  movl   $0x1,0x8(%esp)
084d7f94 +0x110:  movl   $0xa,0x4(%esp)
084d7f9c +0x118:  mov    %eax,(%esp)
084d7f9f +0x11b:  call   084b7336 <_GLOBAL__I__ZN11CGameOptionC2Ev+0x1c>  ; global constructors keyed to CGameOption::CGameOption()+0x1c
084d7fa4 +0x120:  mov    -0x10(%ebp),%eax
084d7fa7 +0x123:  movl   $0x0,0x8(%esp)
084d7faf +0x12b:  movl   $0xb,0x4(%esp)
084d7fb7 +0x133:  mov    %eax,(%esp)
084d7fba +0x136:  call   084b7336 <_GLOBAL__I__ZN11CGameOptionC2Ev+0x1c>  ; global constructors keyed to CGameOption::CGameOption()+0x1c
084d7fbf +0x13b:  mov    -0x10(%ebp),%eax
084d7fc2 +0x13e:  movl   $0x48,0x8(%esp)
084d7fca +0x146:  mov    %eax,0x4(%esp)
084d7fce +0x14a:  lea    -0x1c(%ebp),%eax
084d7fd1 +0x14d:  mov    %eax,(%esp)
084d7fd4 +0x150:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d7fd9 +0x155:  movl   $0x12c,0x4(%esp)
084d7fe1 +0x15d:  lea    -0x1c(%ebp),%eax
084d7fe4 +0x160:  mov    %eax,(%esp)
084d7fe7 +0x163:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d7fec +0x168:  mov    -0x10(%ebp),%eax
084d7fef +0x16b:  add    $0x48,%eax
084d7ff2 +0x16e:  movl   $0x12c,0x8(%esp)
084d7ffa +0x176:  mov    %eax,0x4(%esp)
084d7ffe +0x17a:  lea    -0x1c(%ebp),%eax
084d8001 +0x17d:  mov    %eax,(%esp)
084d8004 +0x180:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d8009 +0x185:  movl   $0x12c,0x4(%esp)
084d8011 +0x18d:  lea    -0x1c(%ebp),%eax
084d8014 +0x190:  mov    %eax,(%esp)
084d8017 +0x193:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d801c +0x198:  mov    -0x10(%ebp),%eax
084d801f +0x19b:  add    $0x174,%eax
084d8024 +0x1a0:  movl   $0x12c,0x8(%esp)
084d802c +0x1a8:  mov    %eax,0x4(%esp)
084d8030 +0x1ac:  lea    -0x1c(%ebp),%eax
084d8033 +0x1af:  mov    %eax,(%esp)
084d8036 +0x1b2:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d803b +0x1b7:  movl   $0x1,0x4(%esp)
084d8043 +0x1bf:  lea    -0x1c(%ebp),%eax
084d8046 +0x1c2:  mov    %eax,(%esp)
084d8049 +0x1c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d804e +0x1ca:  lea    -0x1c(%ebp),%eax
084d8051 +0x1cd:  mov    %eax,0x4(%esp)
084d8055 +0x1d1:  mov    0xc(%ebp),%eax
084d8058 +0x1d4:  mov    %eax,(%esp)
084d805b +0x1d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d8060 +0x1dc:  mov    $0x0,%ebx
084d8065 +0x1e1:  lea    -0x1c(%ebp),%eax
084d8068 +0x1e4:  mov    %eax,(%esp)
084d806b +0x1e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d8070 +0x1ec:  jmp    084d808d <+0x209>
084d8072 +0x1ee:  mov    %edx,%ebx
084d8074 +0x1f0:  mov    %eax,%esi
084d8076 +0x1f2:  lea    -0x1c(%ebp),%eax
084d8079 +0x1f5:  mov    %eax,(%esp)
084d807c +0x1f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d8081 +0x1fd:  mov    %esi,%eax
084d8083 +0x1ff:  mov    %ebx,%edx
084d8085 +0x201:  mov    %eax,(%esp)
084d8088 +0x204:  call   08ae3750 <_Unwind_Resume>
084d808d +0x209:  mov    %ebx,%eax
084d808f +0x20b:  add    $0x30,%esp
084d8092 +0x20e:  pop    %ebx
084d8093 +0x20f:  pop    %esi
084d8094 +0x210:  pop    %ebp
084d8095 +0x211:  ret
```

## 反编译 C

```c
// Inter_LoadGameOption::dispatch_sig @ 0x84d7e84

/* Inter_LoadGameOption::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadGameOption::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_20 [12];
  CETCOption *local_14;
  CGameOption *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    local_14 = (CETCOption *)param_3;
    CETCOption::setETCOption((CETCOption *)param_3,1,1);
    local_10 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
    CGameOption::SetEtcOption(local_10,local_14);
    CGameOption::SetQuickChatOption(local_10,(CQuickChattingOption *)(local_14 + 0x48),0);
    CGameOption::SetQuickChatOption(local_10,(CQuickChattingOption *)(local_14 + 0x174),1);
    CGameOption::SetEmoticonInfo(local_10,(CChattingEmoticonConfig *)(local_14 + 0x2a0));
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d7f60 to 084d805f has its CatchHandler @ 084d8072 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xad);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x48);
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsSchoolPvPChannel(this);
    if (cVar1 != '\0') {
      CETCOption::setETCOption(local_14,10,1);
      CETCOption::setETCOption(local_14,0xb,0);
    }
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)local_14,0x48);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,300);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x48),300);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,300);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x174),300);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
