# dispatch_sig

`_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_VerifyPrivateStoreItem` | `0x08229768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08229768  _ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08229768, 0x08229979]
08229768 +0x000:  push   %ebp
08229769 +0x001:  mov    %esp,%ebp
0822976b +0x003:  push   %ebx
0822976c +0x004:  sub    $0x24,%esp
0822976f +0x007:  mov    0xc(%ebp),%eax
08229772 +0x00a:  mov    %eax,(%esp)
08229775 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822977a +0x012:  cmp    $0x3,%eax
0822977d +0x015:  jne    0822978e <+0x26>
0822977f +0x017:  mov    0xc(%ebp),%eax
08229782 +0x01a:  mov    %eax,(%esp)
08229785 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0822978a +0x022:  test   %eax,%eax
0822978c +0x024:  jne    08229795 <+0x2d>
0822978e +0x026:  mov    $0x1,%eax
08229793 +0x02b:  jmp    0822979a <+0x32>
08229795 +0x02d:  mov    $0x0,%eax
0822979a +0x032:  test   %al,%al
0822979c +0x034:  je     082297c7 <+0x5f>
0822979e +0x036:  movl   $0x0,0xc(%esp)
082297a6 +0x03e:  movl   $0x0,0x8(%esp)
082297ae +0x046:  movl   $&_ZZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082297b6 +0x04e:  movl   $0xe740,(%esp)
082297bd +0x055:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082297c2 +0x05a:  jmp    08229974 <+0x20c>
082297c7 +0x05f:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082297cc +0x064:  movl   $0x3d,0x8(%esp)
082297d4 +0x06c:  mov    0xc(%ebp),%edx
082297d7 +0x06f:  mov    %edx,0x4(%esp)
082297db +0x073:  mov    %eax,(%esp)
082297de +0x076:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082297e3 +0x07b:  mov    %eax,-0xc(%ebp)
082297e6 +0x07e:  cmpl   $0x0,-0xc(%ebp)
082297ea +0x082:  je     08229813 <+0xab>
082297ec +0x084:  mov    -0xc(%ebp),%eax
082297ef +0x087:  movzbl %al,%eax
082297f2 +0x08a:  mov    %eax,0x8(%esp)
082297f6 +0x08e:  movl   $0x55,0x4(%esp)
082297fe +0x096:  mov    0xc(%ebp),%eax
08229801 +0x099:  mov    %eax,(%esp)
08229804 +0x09c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229809 +0x0a1:  mov    $0x0,%eax
0822980e +0x0a6:  jmp    08229974 <+0x20c>
08229813 +0x0ab:  mov    0xc(%ebp),%eax
08229816 +0x0ae:  mov    %eax,(%esp)
08229819 +0x0b1:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
0822981e +0x0b6:  test   %al,%al
08229820 +0x0b8:  jne    08229831 <+0xc9>
08229822 +0x0ba:  mov    0xc(%ebp),%eax
08229825 +0x0bd:  mov    %eax,(%esp)
08229828 +0x0c0:  call   0822fd4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53f6
0822982d +0x0c5:  test   %al,%al
0822982f +0x0c7:  je     08229838 <+0xd0>
08229831 +0x0c9:  mov    $0x1,%eax
08229836 +0x0ce:  jmp    0822983d <+0xd5>
08229838 +0x0d0:  mov    $0x0,%eax
0822983d +0x0d5:  test   %al,%al
0822983f +0x0d7:  je     08229866 <+0xfe>
08229841 +0x0d9:  movl   $0x11,0x8(%esp)
08229849 +0x0e1:  movl   $0x195,0x4(%esp)
08229851 +0x0e9:  mov    0xc(%ebp),%eax
08229854 +0x0ec:  mov    %eax,(%esp)
08229857 +0x0ef:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822985c +0x0f4:  mov    $0x0,%eax
08229861 +0x0f9:  jmp    08229974 <+0x20c>
08229866 +0x0fe:  movw   $0x0,-0xe(%ebp)
0822986c +0x104:  movl   $0x0,-0x14(%ebp)
08229873 +0x10b:  movl   $0x0,-0x18(%ebp)
0822987a +0x112:  lea    -0xe(%ebp),%eax
0822987d +0x115:  mov    %eax,0x4(%esp)
08229881 +0x119:  mov    0x10(%ebp),%eax
08229884 +0x11c:  mov    %eax,(%esp)
08229887 +0x11f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0822988c +0x124:  xor    $0x1,%eax
0822988f +0x127:  test   %al,%al
08229891 +0x129:  je     082298bc <+0x154>
08229893 +0x12b:  movl   $0x0,0xc(%esp)
0822989b +0x133:  movl   $0x0,0x8(%esp)
082298a3 +0x13b:  movl   $&_ZZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082298ab +0x143:  movl   $0xe76a,(%esp)
082298b2 +0x14a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082298b7 +0x14f:  jmp    08229974 <+0x20c>
082298bc +0x154:  lea    -0x14(%ebp),%eax
082298bf +0x157:  mov    %eax,0x4(%esp)
082298c3 +0x15b:  mov    0x10(%ebp),%eax
082298c6 +0x15e:  mov    %eax,(%esp)
082298c9 +0x161:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082298ce +0x166:  xor    $0x1,%eax
082298d1 +0x169:  test   %al,%al
082298d3 +0x16b:  je     082298fb <+0x193>
082298d5 +0x16d:  movl   $0x0,0xc(%esp)
082298dd +0x175:  movl   $0x0,0x8(%esp)
082298e5 +0x17d:  movl   $&_ZZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082298ed +0x185:  movl   $0xe76b,(%esp)
082298f4 +0x18c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082298f9 +0x191:  jmp    08229974 <+0x20c>
082298fb +0x193:  mov    -0x14(%ebp),%eax
082298fe +0x196:  test   %eax,%eax
08229900 +0x198:  jns    08229928 <+0x1c0>
08229902 +0x19a:  movl   $0x0,0xc(%esp)
0822990a +0x1a2:  movl   $0x0,0x8(%esp)
08229912 +0x1aa:  movl   $&_ZZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822991a +0x1b2:  movl   $0xe76c,(%esp)
08229921 +0x1b9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08229926 +0x1be:  jmp    08229974 <+0x20c>
08229928 +0x1c0:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0822992d +0x1c5:  movl   $0x0,0xc(%esp)
08229935 +0x1cd:  mov    0xc(%ebp),%edx
08229938 +0x1d0:  mov    %edx,0x8(%esp)
0822993c +0x1d4:  lea    -0x18(%ebp),%edx
0822993f +0x1d7:  mov    %edx,0x4(%esp)
08229943 +0x1db:  mov    %eax,(%esp)
08229946 +0x1de:  call   085ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
0822994b +0x1e3:  mov    -0x18(%ebp),%eax
0822994e +0x1e6:  mov    (%eax),%eax
08229950 +0x1e8:  add    $0x4,%eax
08229953 +0x1eb:  mov    (%eax),%ebx
08229955 +0x1ed:  mov    -0x14(%ebp),%ecx
08229958 +0x1f0:  movzwl -0xe(%ebp),%eax
0822995c +0x1f4:  movswl %ax,%edx
0822995f +0x1f7:  mov    -0x18(%ebp),%eax
08229962 +0x1fa:  mov    %ecx,0x8(%esp)
08229966 +0x1fe:  mov    %edx,0x4(%esp)
0822996a +0x202:  mov    %eax,(%esp)
0822996d +0x205:  call   *%ebx
0822996f +0x207:  mov    $0x0,%eax
08229974 +0x20c:  add    $0x24,%esp
08229977 +0x20f:  pop    %ebx
08229978 +0x210:  pop    %ebp
08229979 +0x211:  ret
```

## 反编译 C

```c
// Dispatcher_VerifyPrivateStoreItem::dispatch_sig @ 0x8229768

/* Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_VerifyPrivateStoreItem::dispatch_sig
          (Dispatcher_VerifyPrivateStoreItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this_00;
  IBuyer *local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3d);
    if (local_10 == 0) {
      cVar2 = CUser::isHackUser(param_1);
      if ((cVar2 == '\0') && (cVar2 = CUser::isHackUserTimer(param_1), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x195,0x11);
        uVar4 = 0;
      }
      else {
        local_12 = 0;
        local_18 = 0;
        local_1c = (IBuyer *)0x0;
        cVar2 = PacketBuf::get_short(param_2,&local_12);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,&local_18);
          if (cVar2 == '\x01') {
            if (local_18 < 0) {
              uVar4 = LineFunc(0xe76c,
                               "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_1c,param_1,(CUser *)0x0)
              ;
              (**(code **)(*(int *)local_1c + 4))(local_1c,(int)local_12,local_18);
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0xe76b,
                             "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0xe76a,
                           "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0x55,local_10 & 0xff);
    return 0;
  }
  uVar4 = LineFunc(0xe740,
                   "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar4;
}
```
