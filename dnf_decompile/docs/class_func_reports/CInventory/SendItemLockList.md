# SendItemLockList

`_ZNK10CInventory16SendItemLockListEPK10Inven_Itemi14ENUM_ITEMSPACE`

`CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fae0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fae0a  _ZNK10CInventory16SendItemLockListEPK10Inven_Itemi14ENUM_ITEMSPACE
#           CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const
# range [0x084fae0a, 0x084faf8d]
084fae0a +0x000:  push   %ebp
084fae0b +0x001:  mov    %esp,%ebp
084fae0d +0x003:  push   %esi
084fae0e +0x004:  push   %ebx
084fae0f +0x005:  sub    $0x30,%esp
084fae12 +0x008:  mov    0x8(%ebp),%eax
084fae15 +0x00b:  mov    (%eax),%eax
084fae17 +0x00d:  test   %eax,%eax
084fae19 +0x00f:  je     084faf86 <+0x17c>
084fae1f +0x015:  lea    -0x1c(%ebp),%eax
084fae22 +0x018:  mov    %eax,(%esp)
084fae25 +0x01b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084fae2a +0x020:  lea    -0x1c(%ebp),%eax
084fae2d +0x023:  mov    %eax,(%esp)
084fae30 +0x026:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084fae35 +0x02b:  movl   $0xfb,0x8(%esp)
084fae3d +0x033:  movl   $0x0,0x4(%esp)
084fae45 +0x03b:  lea    -0x1c(%ebp),%eax
084fae48 +0x03e:  mov    %eax,(%esp)
084fae4b +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084fae50 +0x046:  lea    -0x1c(%ebp),%eax
084fae53 +0x049:  mov    %eax,(%esp)
084fae56 +0x04c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084fae5b +0x051:  mov    %eax,-0x20(%ebp)
084fae5e +0x054:  movl   $0x0,-0x10(%ebp)
084fae65 +0x05b:  mov    -0x10(%ebp),%eax
084fae68 +0x05e:  mov    %eax,0x4(%esp)
084fae6c +0x062:  lea    -0x1c(%ebp),%eax
084fae6f +0x065:  mov    %eax,(%esp)
084fae72 +0x068:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fae77 +0x06d:  movl   $0x0,-0xc(%ebp)
084fae7e +0x074:  jmp    084faf0b <+0x101>
084fae83 +0x079:  mov    -0xc(%ebp),%eax
084fae86 +0x07c:  imul   $0x3d,%eax,%eax
084fae89 +0x07f:  add    0xc(%ebp),%eax
084fae8c +0x082:  add    $0x11,%eax
084fae8f +0x085:  mov    %eax,(%esp)
084fae92 +0x088:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084fae97 +0x08d:  test   %al,%al
084fae99 +0x08f:  setne  %al
084fae9c +0x092:  test   %al,%al
084fae9e +0x094:  je     084faf07 <+0xfd>
084faea0 +0x096:  mov    0x14(%ebp),%eax
084faea3 +0x099:  mov    %eax,0x4(%esp)
084faea7 +0x09d:  lea    -0x1c(%ebp),%eax
084faeaa +0x0a0:  mov    %eax,(%esp)
084faead +0x0a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084faeb2 +0x0a8:  mov    -0xc(%ebp),%eax
084faeb5 +0x0ab:  mov    %eax,0x4(%esp)
084faeb9 +0x0af:  lea    -0x1c(%ebp),%eax
084faebc +0x0b2:  mov    %eax,(%esp)
084faebf +0x0b5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084faec4 +0x0ba:  mov    -0xc(%ebp),%eax
084faec7 +0x0bd:  imul   $0x3d,%eax,%eax
084faeca +0x0c0:  add    0xc(%ebp),%eax
084faecd +0x0c3:  add    $0x11,%eax
084faed0 +0x0c6:  mov    %eax,(%esp)
084faed3 +0x0c9:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
084faed8 +0x0ce:  movzbl %al,%ebx
084faedb +0x0d1:  mov    0x8(%ebp),%eax
084faede +0x0d4:  mov    (%eax),%eax
084faee0 +0x0d6:  movl   $0x2,0x4(%esp)
084faee8 +0x0de:  mov    %eax,(%esp)
084faeeb +0x0e1:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
084faef0 +0x0e6:  mov    %ebx,0x8(%esp)
084faef4 +0x0ea:  lea    -0x1c(%ebp),%edx
084faef7 +0x0ed:  mov    %edx,0x4(%esp)
084faefb +0x0f1:  mov    %eax,(%esp)
084faefe +0x0f4:  call   085426a6 <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh>  ; item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const
084faf03 +0x0f9:  addl   $0x1,-0x10(%ebp)
084faf07 +0x0fd:  addl   $0x1,-0xc(%ebp)
084faf0b +0x101:  mov    -0xc(%ebp),%eax
084faf0e +0x104:  cmp    0x10(%ebp),%eax
084faf11 +0x107:  setl   %al
084faf14 +0x10a:  test   %al,%al
084faf16 +0x10c:  jne    084fae83 <+0x79>
084faf1c +0x112:  mov    -0x10(%ebp),%eax
084faf1f +0x115:  mov    %eax,0x8(%esp)
084faf23 +0x119:  lea    -0x20(%ebp),%eax
084faf26 +0x11c:  mov    %eax,0x4(%esp)
084faf2a +0x120:  lea    -0x1c(%ebp),%eax
084faf2d +0x123:  mov    %eax,(%esp)
084faf30 +0x126:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084faf35 +0x12b:  movl   $0x1,0x4(%esp)
084faf3d +0x133:  lea    -0x1c(%ebp),%eax
084faf40 +0x136:  mov    %eax,(%esp)
084faf43 +0x139:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084faf48 +0x13e:  mov    0x8(%ebp),%eax
084faf4b +0x141:  mov    (%eax),%eax
084faf4d +0x143:  lea    -0x1c(%ebp),%edx
084faf50 +0x146:  mov    %edx,0x4(%esp)
084faf54 +0x14a:  mov    %eax,(%esp)
084faf57 +0x14d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084faf5c +0x152:  jmp    084faf79 <+0x16f>
084faf5e +0x154:  mov    %edx,%ebx
084faf60 +0x156:  mov    %eax,%esi
084faf62 +0x158:  lea    -0x1c(%ebp),%eax
084faf65 +0x15b:  mov    %eax,(%esp)
084faf68 +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084faf6d +0x163:  mov    %esi,%eax
084faf6f +0x165:  mov    %ebx,%edx
084faf71 +0x167:  mov    %eax,(%esp)
084faf74 +0x16a:  call   08ae3750 <_Unwind_Resume>
084faf79 +0x16f:  lea    -0x1c(%ebp),%eax
084faf7c +0x172:  mov    %eax,(%esp)
084faf7f +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084faf84 +0x17a:  jmp    084faf87 <+0x17d>
084faf86 +0x17c:  nop
084faf87 +0x17d:  add    $0x30,%esp
084faf8a +0x180:  pop    %ebx
084faf8b +0x181:  pop    %esi
084faf8c +0x182:  pop    %ebp
084faf8d +0x183:  ret
```

## 反编译 C

```c
// CInventory::SendItemLockList @ 0x84fae0a

/* CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const */

void __thiscall CInventory::SendItemLockList(CInventory *this,int param_1,int param_2,int param_4)

{
  char cVar1;
  PacketGuard *pPVar2;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084fae30 to 084faf5b has its CatchHandler @ 084faf5e */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xfb);
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
    local_14 = 0;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      cVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 * 0x3d + param_1 + 0x11));
      if (cVar1 != '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,param_4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,local_10);
        stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 * 0x3d + param_1 + 0x11));
        pPVar2 = (PacketGuard *)CUser::GetCharacExpandDataR(*(CUser **)this,2);
        item_lock::CItemLock::MakeItemLockPacket(pPVar2,(uchar)local_20);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,&local_24,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(*(CUser **)this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```
