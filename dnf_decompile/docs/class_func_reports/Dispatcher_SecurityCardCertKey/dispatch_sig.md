# dispatch_sig

`_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardCertKey` | `0x0820a6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a6bc  _ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820a6bc, 0x0820a99f]
0820a6bc +0x000:  push   %ebp
0820a6bd +0x001:  mov    %esp,%ebp
0820a6bf +0x003:  push   %esi
0820a6c0 +0x004:  push   %ebx
0820a6c1 +0x005:  sub    $0x20,%esp
0820a6c4 +0x008:  mov    0xc(%ebp),%eax
0820a6c7 +0x00b:  mov    %eax,(%esp)
0820a6ca +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820a6cf +0x013:  cmp    $0x2,%eax
0820a6d2 +0x016:  setle  %al
0820a6d5 +0x019:  test   %al,%al
0820a6d7 +0x01b:  je     0820a702 <+0x46>
0820a6d9 +0x01d:  movl   $0x0,0xc(%esp)
0820a6e1 +0x025:  movl   $0x0,0x8(%esp)
0820a6e9 +0x02d:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a6f1 +0x035:  movl   $0xa675,(%esp)
0820a6f8 +0x03c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a6fd +0x041:  jmp    0820a998 <+0x2dc>
0820a702 +0x046:  movl   $0x0,-0x10(%ebp)
0820a709 +0x04d:  movl   $0x0,-0x16(%ebp)
0820a710 +0x054:  movw   $0x0,-0x12(%ebp)
0820a716 +0x05a:  lea    -0x10(%ebp),%eax
0820a719 +0x05d:  mov    %eax,0x4(%esp)
0820a71d +0x061:  mov    0x10(%ebp),%eax
0820a720 +0x064:  mov    %eax,(%esp)
0820a723 +0x067:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820a728 +0x06c:  xor    $0x1,%eax
0820a72b +0x06f:  test   %al,%al
0820a72d +0x071:  je     0820a758 <+0x9c>
0820a72f +0x073:  movl   $0x0,0xc(%esp)
0820a737 +0x07b:  movl   $0x0,0x8(%esp)
0820a73f +0x083:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a747 +0x08b:  movl   $0xa681,(%esp)
0820a74e +0x092:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a753 +0x097:  jmp    0820a998 <+0x2dc>
0820a758 +0x09c:  mov    -0x10(%ebp),%eax
0820a75b +0x09f:  mov    %eax,0xc(%esp)
0820a75f +0x0a3:  movl   $0x6,0x8(%esp)
0820a767 +0x0ab:  lea    -0x16(%ebp),%eax
0820a76a +0x0ae:  mov    %eax,0x4(%esp)
0820a76e +0x0b2:  mov    0x10(%ebp),%eax
0820a771 +0x0b5:  mov    %eax,(%esp)
0820a774 +0x0b8:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0820a779 +0x0bd:  xor    $0x1,%eax
0820a77c +0x0c0:  test   %al,%al
0820a77e +0x0c2:  je     0820a7a9 <+0xed>
0820a780 +0x0c4:  movl   $0x0,0xc(%esp)
0820a788 +0x0cc:  movl   $0x0,0x8(%esp)
0820a790 +0x0d4:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a798 +0x0dc:  movl   $0xa683,(%esp)
0820a79f +0x0e3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a7a4 +0x0e8:  jmp    0820a998 <+0x2dc>
0820a7a9 +0x0ed:  mov    0xc(%ebp),%eax
0820a7ac +0x0f0:  mov    %eax,(%esp)
0820a7af +0x0f3:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a7b4 +0x0f8:  mov    %eax,(%esp)
0820a7b7 +0x0fb:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a7bc +0x100:  test   %al,%al
0820a7be +0x102:  je     0820a800 <+0x144>
0820a7c0 +0x104:  mov    0xc(%ebp),%eax
0820a7c3 +0x107:  mov    %eax,(%esp)
0820a7c6 +0x10a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a7cb +0x10f:  mov    %eax,(%esp)
0820a7ce +0x112:  call   0822ef72 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x461c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x461c
0820a7d3 +0x117:  test   %al,%al
0820a7d5 +0x119:  je     0820a800 <+0x144>
0820a7d7 +0x11b:  movl   $0x0,0xc(%esp)
0820a7df +0x123:  movl   $0x0,0x8(%esp)
0820a7e7 +0x12b:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a7ef +0x133:  movl   $0xa688,(%esp)
0820a7f6 +0x13a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a7fb +0x13f:  jmp    0820a998 <+0x2dc>
0820a800 +0x144:  mov    0xc(%ebp),%eax
0820a803 +0x147:  mov    %eax,(%esp)
0820a806 +0x14a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a80b +0x14f:  mov    %eax,(%esp)
0820a80e +0x152:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
0820a813 +0x157:  test   %al,%al
0820a815 +0x159:  je     0820a840 <+0x184>
0820a817 +0x15b:  movl   $0x0,0xc(%esp)
0820a81f +0x163:  movl   $0x0,0x8(%esp)
0820a827 +0x16b:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a82f +0x173:  movl   $0xa68c,(%esp)
0820a836 +0x17a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a83b +0x17f:  jmp    0820a998 <+0x2dc>
0820a840 +0x184:  movl   $0x0,-0xc(%ebp)
0820a847 +0x18b:  jmp    0820a889 <+0x1cd>
0820a849 +0x18d:  mov    -0xc(%ebp),%eax
0820a84c +0x190:  movzbl -0x16(%ebp,%eax,1),%eax
0820a851 +0x195:  movsbl %al,%eax
0820a854 +0x198:  sub    $0x30,%eax
0820a857 +0x19b:  cmp    $0x9,%eax
0820a85a +0x19e:  jbe    0820a885 <+0x1c9>
0820a85c +0x1a0:  movl   $0x0,0xc(%esp)
0820a864 +0x1a8:  movl   $0x0,0x8(%esp)
0820a86c +0x1b0:  movl   $&_ZZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a874 +0x1b8:  movl   $0xa691,(%esp)
0820a87b +0x1bf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a880 +0x1c4:  jmp    0820a998 <+0x2dc>
0820a885 +0x1c9:  addl   $0x1,-0xc(%ebp)
0820a889 +0x1cd:  mov    -0xc(%ebp),%eax
0820a88c +0x1d0:  cmp    $0x4,%eax
0820a88f +0x1d3:  setbe  %al
0820a892 +0x1d6:  test   %al,%al
0820a894 +0x1d8:  jne    0820a849 <+0x18d>
0820a896 +0x1da:  mov    0xc(%ebp),%eax
0820a899 +0x1dd:  mov    %eax,(%esp)
0820a89c +0x1e0:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a8a1 +0x1e5:  mov    %eax,(%esp)
0820a8a4 +0x1e8:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a8a9 +0x1ed:  test   %al,%al
0820a8ab +0x1ef:  je     0820a8cf <+0x213>
0820a8ad +0x1f1:  mov    0xc(%ebp),%eax
0820a8b0 +0x1f4:  add    $0x79700,%eax
0820a8b5 +0x1f9:  movl   $0x3,0x8(%esp)
0820a8bd +0x201:  movl   $0x1,0x4(%esp)
0820a8c5 +0x209:  mov    %eax,(%esp)
0820a8c8 +0x20c:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
0820a8cd +0x211:  jmp    0820a8ef <+0x233>
0820a8cf +0x213:  mov    0xc(%ebp),%eax
0820a8d2 +0x216:  add    $0x79700,%eax
0820a8d7 +0x21b:  movl   $0x2,0x8(%esp)
0820a8df +0x223:  movl   $0x1,0x4(%esp)
0820a8e7 +0x22b:  mov    %eax,(%esp)
0820a8ea +0x22e:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
0820a8ef +0x233:  mov    0xc(%ebp),%eax
0820a8f2 +0x236:  mov    %eax,(%esp)
0820a8f5 +0x239:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a8fa +0x23e:  mov    %eax,(%esp)
0820a8fd +0x241:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a902 +0x246:  test   %al,%al
0820a904 +0x248:  je     0820a92b <+0x26f>
0820a906 +0x24a:  mov    0xc(%ebp),%eax
0820a909 +0x24d:  mov    %eax,(%esp)
0820a90c +0x250:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0820a911 +0x255:  movl   $0x1b,0x8(%esp)
0820a919 +0x25d:  movl   $0x1,0x4(%esp)
0820a921 +0x265:  mov    %eax,(%esp)
0820a924 +0x268:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
0820a929 +0x26d:  jmp    0820a94e <+0x292>
0820a92b +0x26f:  mov    0xc(%ebp),%eax
0820a92e +0x272:  mov    %eax,(%esp)
0820a931 +0x275:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0820a936 +0x27a:  movl   $0x1a,0x8(%esp)
0820a93e +0x282:  movl   $0x1,0x4(%esp)
0820a946 +0x28a:  mov    %eax,(%esp)
0820a949 +0x28d:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
0820a94e +0x292:  mov    0xc(%ebp),%eax
0820a951 +0x295:  mov    %eax,(%esp)
0820a954 +0x298:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a959 +0x29d:  mov    %eax,(%esp)
0820a95c +0x2a0:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a961 +0x2a5:  movzbl %al,%esi
0820a964 +0x2a8:  mov    0xc(%ebp),%eax
0820a967 +0x2ab:  mov    %eax,(%esp)
0820a96a +0x2ae:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820a96f +0x2b3:  mov    %eax,%ebx
0820a971 +0x2b5:  mov    0xc(%ebp),%eax
0820a974 +0x2b8:  mov    %eax,(%esp)
0820a977 +0x2bb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0820a97c +0x2c0:  mov    %esi,0xc(%esp)
0820a980 +0x2c4:  lea    -0x16(%ebp),%edx
0820a983 +0x2c7:  mov    %edx,0x8(%esp)
0820a987 +0x2cb:  mov    %ebx,0x4(%esp)
0820a98b +0x2cf:  mov    %eax,(%esp)
0820a98e +0x2d2:  call   0842bb5c <_ZN23DB_SecurityCardActivate11makeRequestEijPKcb>  ; DB_SecurityCardActivate::makeRequest(int, unsigned int, char const*, bool)
0820a993 +0x2d7:  mov    $0x0,%eax
0820a998 +0x2dc:  add    $0x20,%esp
0820a99b +0x2df:  pop    %ebx
0820a99c +0x2e0:  pop    %esi
0820a99d +0x2e1:  pop    %ebp
0820a99e +0x2e2:  ret
0820a99f +0x2e3:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardCertKey::dispatch_sig @ 0x820a6bc

/* Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardCertKey::dispatch_sig
          (Dispatcher_SecurityCardCertKey *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CSecurityCard *pCVar5;
  uint uVar6;
  char local_1a [6];
  uint local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa675,
                     "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = 0;
    local_1a[0] = '\0';
    local_1a[1] = '\0';
    local_1a[2] = '\0';
    local_1a[3] = '\0';
    local_1a[4] = '\0';
    local_1a[5] = '\0';
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_2,local_1a,6,local_14);
      if (cVar1 == '\x01') {
        pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
        if (cVar1 != '\0') {
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isCertFlagOn(pCVar5);
          if (cVar1 != '\0') {
            uVar4 = LineFunc(0xa688,
                             "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          }
        }
        pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        cVar1 = WongWork::CSecurityCard::isCertified(pCVar5);
        if (cVar1 == '\0') {
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            if (9 < (int)local_1a[local_10] - 0x30U) {
              uVar4 = LineFunc(0xa691,
                               "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar4;
            }
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
          if (cVar1 == '\0') {
            cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,2);
          }
          else {
            cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,3);
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
          if (cVar1 == '\0') {
            uVar4 = CUser::getHades(param_1);
            XNuclear::CHades::ChangeSecurity(uVar4,1,0x1a);
          }
          else {
            uVar4 = CUser::getHades(param_1);
            XNuclear::CHades::ChangeSecurity(uVar4,1,0x1b);
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          bVar2 = (bool)WongWork::CSecurityCard::isActivate(pCVar5);
          uVar6 = CUser::get_acc_id(param_1);
          iVar3 = CUser::GetUID(param_1);
          DB_SecurityCardActivate::makeRequest(iVar3,uVar6,local_1a,bVar2);
          uVar4 = 0;
        }
        else {
          uVar4 = LineFunc(0xa68c,
                           "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = LineFunc(0xa683,
                         "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar4 = LineFunc(0xa681,
                       "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}
```
