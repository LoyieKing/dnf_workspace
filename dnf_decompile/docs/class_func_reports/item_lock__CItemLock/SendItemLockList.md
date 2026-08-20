# SendItemLockList

`_ZN9item_lock9CItemLock16SendItemLockListEP5CUser`

`item_lock::CItemLock::SendItemLockList(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x085427a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085427a0  _ZN9item_lock9CItemLock16SendItemLockListEP5CUser
#           item_lock::CItemLock::SendItemLockList(CUser*)
# range [0x085427a0, 0x08542a69]
085427a0 +0x000:  push   %ebp
085427a1 +0x001:  mov    %esp,%ebp
085427a3 +0x003:  push   %esi
085427a4 +0x004:  push   %ebx
085427a5 +0x005:  sub    $0x50,%esp
085427a8 +0x008:  lea    -0x30(%ebp),%eax
085427ab +0x00b:  mov    %eax,(%esp)
085427ae +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085427b3 +0x013:  lea    -0x30(%ebp),%eax
085427b6 +0x016:  mov    %eax,(%esp)
085427b9 +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085427be +0x01e:  movl   $0xfb,0x8(%esp)
085427c6 +0x026:  movl   $0x0,0x4(%esp)
085427ce +0x02e:  lea    -0x30(%ebp),%eax
085427d1 +0x031:  mov    %eax,(%esp)
085427d4 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085427d9 +0x039:  lea    -0x30(%ebp),%eax
085427dc +0x03c:  mov    %eax,(%esp)
085427df +0x03f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085427e4 +0x044:  mov    %eax,-0x34(%ebp)
085427e7 +0x047:  movl   $0x0,-0x20(%ebp)
085427ee +0x04e:  mov    -0x20(%ebp),%eax
085427f1 +0x051:  mov    %eax,0x4(%esp)
085427f5 +0x055:  lea    -0x30(%ebp),%eax
085427f8 +0x058:  mov    %eax,(%esp)
085427fb +0x05b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08542800 +0x060:  movl   $0x0,-0x1c(%ebp)
08542807 +0x067:  movl   $0x0,-0x38(%ebp)
0854280e +0x06e:  mov    0x8(%ebp),%eax
08542811 +0x071:  lea    0x48(%eax),%edx
08542814 +0x074:  lea    -0x3c(%ebp),%eax
08542817 +0x077:  mov    %edx,0x4(%esp)
0854281b +0x07b:  mov    %eax,(%esp)
0854281e +0x07e:  call   0849aae4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x5c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x5c
08542823 +0x083:  sub    $0x4,%esp
08542826 +0x086:  jmp    085429b9 <+0x219>
0854282b +0x08b:  lea    -0x3c(%ebp),%eax
0854282e +0x08e:  mov    %eax,(%esp)
08542831 +0x091:  call   0849ab8e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x106>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x106
08542836 +0x096:  mov    %eax,-0x18(%ebp)
08542839 +0x099:  mov    -0x18(%ebp),%eax
0854283c +0x09c:  movzbl (%eax),%eax
0854283f +0x09f:  movzbl %al,%eax
08542842 +0x0a2:  lea    -0x38(%ebp),%edx
08542845 +0x0a5:  mov    %edx,0x8(%esp)
08542849 +0x0a9:  mov    %eax,0x4(%esp)
0854284d +0x0ad:  mov    0x8(%ebp),%eax
08542850 +0x0b0:  mov    %eax,(%esp)
08542853 +0x0b3:  call   0854261e <_ZNK9item_lock9CItemLock15GetItemLockInfoEhRi>  ; item_lock::CItemLock::GetItemLockInfo(unsigned char, int&) const
08542858 +0x0b8:  mov    %eax,-0x1c(%ebp)
0854285b +0x0bb:  cmpl   $0x0,-0x1c(%ebp)
0854285f +0x0bf:  sete   %al
08542862 +0x0c2:  test   %al,%al
08542864 +0x0c4:  je     085428ce <+0x12e>
08542866 +0x0c6:  mov    -0x18(%ebp),%eax
08542869 +0x0c9:  movzwl 0x2(%eax),%eax
0854286d +0x0cd:  movzwl %ax,%edx
08542870 +0x0d0:  mov    -0x18(%ebp),%eax
08542873 +0x0d3:  movzbl 0x1(%eax),%eax
08542877 +0x0d7:  movzbl %al,%eax
0854287a +0x0da:  mov    %edx,0x8(%esp)
0854287e +0x0de:  mov    %eax,0x4(%esp)
08542882 +0x0e2:  mov    0xc(%ebp),%eax
08542885 +0x0e5:  mov    %eax,(%esp)
08542888 +0x0e8:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
0854288d +0x0ed:  mov    %eax,-0x10(%ebp)
08542890 +0x0f0:  cmpl   $0x0,-0x10(%ebp)
08542894 +0x0f4:  je     085429ad <+0x20d>
0854289a +0x0fa:  mov    -0x10(%ebp),%eax
0854289d +0x0fd:  add    $0x11,%eax
085428a0 +0x100:  movl   $0x0,0x4(%esp)
085428a8 +0x108:  mov    %eax,(%esp)
085428ab +0x10b:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
085428b0 +0x110:  mov    -0x10(%ebp),%eax
085428b3 +0x113:  mov    %eax,0x8(%esp)
085428b7 +0x117:  mov    0xc(%ebp),%eax
085428ba +0x11a:  mov    %eax,0x4(%esp)
085428be +0x11e:  mov    0x8(%ebp),%eax
085428c1 +0x121:  mov    %eax,(%esp)
085428c4 +0x124:  call   08541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>  ; item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*)
085428c9 +0x129:  jmp    085429ae <+0x20e>
085428ce +0x12e:  mov    -0x18(%ebp),%eax
085428d1 +0x131:  movzbl 0x1(%eax),%eax
085428d5 +0x135:  mov    %al,-0x11(%ebp)
085428d8 +0x138:  mov    0xc(%ebp),%eax
085428db +0x13b:  mov    %eax,(%esp)
085428de +0x13e:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
085428e3 +0x143:  cmp    $0x1,%al
085428e5 +0x145:  sete   %al
085428e8 +0x148:  test   %al,%al
085428ea +0x14a:  je     08542926 <+0x186>
085428ec +0x14c:  mov    -0x18(%ebp),%eax
085428ef +0x14f:  movzwl 0x2(%eax),%eax
085428f3 +0x153:  cmp    $0x9,%ax
085428f7 +0x157:  ja     08542906 <+0x166>
085428f9 +0x159:  mov    -0x18(%ebp),%eax
085428fc +0x15c:  movzwl 0x2(%eax),%eax
08542900 +0x160:  cmp    $0x15,%ax
08542904 +0x164:  ja     08542926 <+0x186>
08542906 +0x166:  mov    -0x18(%ebp),%eax
08542909 +0x169:  movzbl 0x1(%eax),%eax
0854290d +0x16d:  cmp    $0x3,%al
0854290f +0x16f:  jne    08542917 <+0x177>
08542911 +0x171:  movb   $0x12,-0x11(%ebp)
08542915 +0x175:  jmp    08542926 <+0x186>
08542917 +0x177:  mov    -0x18(%ebp),%eax
0854291a +0x17a:  movzbl 0x1(%eax),%eax
0854291e +0x17e:  cmp    $0x12,%al
08542920 +0x180:  jne    08542926 <+0x186>
08542922 +0x182:  movb   $0x3,-0x11(%ebp)
08542926 +0x186:  movzbl -0x11(%ebp),%eax
0854292a +0x18a:  mov    %eax,0x4(%esp)
0854292e +0x18e:  lea    -0x30(%ebp),%eax
08542931 +0x191:  mov    %eax,(%esp)
08542934 +0x194:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08542939 +0x199:  mov    -0x18(%ebp),%eax
0854293c +0x19c:  movzwl 0x2(%eax),%eax
08542940 +0x1a0:  movzwl %ax,%eax
08542943 +0x1a3:  mov    %eax,0x4(%esp)
08542947 +0x1a7:  lea    -0x30(%ebp),%eax
0854294a +0x1aa:  mov    %eax,(%esp)
0854294d +0x1ad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08542952 +0x1b2:  mov    -0x1c(%ebp),%eax
08542955 +0x1b5:  mov    %eax,0x4(%esp)
08542959 +0x1b9:  lea    -0x30(%ebp),%eax
0854295c +0x1bc:  mov    %eax,(%esp)
0854295f +0x1bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08542964 +0x1c4:  cmpl   $0x2,-0x1c(%ebp)
08542968 +0x1c8:  jne    085429a7 <+0x207>
0854296a +0x1ca:  mov    -0x38(%ebp),%eax
0854296d +0x1cd:  lea    0x3f480(%eax),%ebx
08542973 +0x1d3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0854297a +0x1da:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0854297f +0x1df:  mov    %ebx,%edx
08542981 +0x1e1:  sub    %eax,%edx
08542983 +0x1e3:  mov    %edx,%eax
08542985 +0x1e5:  mov    %eax,-0xc(%ebp)
08542988 +0x1e8:  cmpl   $0x0,-0xc(%ebp)
0854298c +0x1ec:  jns    08542995 <+0x1f5>
0854298e +0x1ee:  movl   $0x0,-0xc(%ebp)
08542995 +0x1f5:  mov    -0xc(%ebp),%eax
08542998 +0x1f8:  mov    %eax,0x4(%esp)
0854299c +0x1fc:  lea    -0x30(%ebp),%eax
0854299f +0x1ff:  mov    %eax,(%esp)
085429a2 +0x202:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085429a7 +0x207:  addl   $0x1,-0x20(%ebp)
085429ab +0x20b:  jmp    085429ae <+0x20e>
085429ad +0x20d:  nop
085429ae +0x20e:  lea    -0x3c(%ebp),%eax
085429b1 +0x211:  mov    %eax,(%esp)
085429b4 +0x214:  call   085434f4 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4d6>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4d6
085429b9 +0x219:  mov    0x8(%ebp),%eax
085429bc +0x21c:  lea    0x48(%eax),%edx
085429bf +0x21f:  lea    -0x24(%ebp),%eax
085429c2 +0x222:  mov    %edx,0x4(%esp)
085429c6 +0x226:  mov    %eax,(%esp)
085429c9 +0x229:  call   0849ab08 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x80>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x80
085429ce +0x22e:  sub    $0x4,%esp
085429d1 +0x231:  lea    -0x24(%ebp),%eax
085429d4 +0x234:  mov    %eax,0x4(%esp)
085429d8 +0x238:  lea    -0x3c(%ebp),%eax
085429db +0x23b:  mov    %eax,(%esp)
085429de +0x23e:  call   0849ab2e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0xa6>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0xa6
085429e3 +0x243:  test   %al,%al
085429e5 +0x245:  jne    0854282b <+0x8b>
085429eb +0x24b:  mov    -0x20(%ebp),%eax
085429ee +0x24e:  mov    %eax,0x8(%esp)
085429f2 +0x252:  lea    -0x34(%ebp),%eax
085429f5 +0x255:  mov    %eax,0x4(%esp)
085429f9 +0x259:  lea    -0x30(%ebp),%eax
085429fc +0x25c:  mov    %eax,(%esp)
085429ff +0x25f:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08542a04 +0x264:  movl   $0x1,0x4(%esp)
08542a0c +0x26c:  lea    -0x30(%ebp),%eax
08542a0f +0x26f:  mov    %eax,(%esp)
08542a12 +0x272:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08542a17 +0x277:  lea    -0x30(%ebp),%eax
08542a1a +0x27a:  mov    %eax,0x4(%esp)
08542a1e +0x27e:  mov    0xc(%ebp),%eax
08542a21 +0x281:  mov    %eax,(%esp)
08542a24 +0x284:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08542a29 +0x289:  mov    0x8(%ebp),%eax
08542a2c +0x28c:  add    $0x48,%eax
08542a2f +0x28f:  mov    %eax,(%esp)
08542a32 +0x292:  call   0854337a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x35c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x35c
08542a37 +0x297:  jmp    08542a54 <+0x2b4>
08542a39 +0x299:  mov    %edx,%ebx
08542a3b +0x29b:  mov    %eax,%esi
08542a3d +0x29d:  lea    -0x30(%ebp),%eax
08542a40 +0x2a0:  mov    %eax,(%esp)
08542a43 +0x2a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08542a48 +0x2a8:  mov    %esi,%eax
08542a4a +0x2aa:  mov    %ebx,%edx
08542a4c +0x2ac:  mov    %eax,(%esp)
08542a4f +0x2af:  call   08ae3750 <_Unwind_Resume>
08542a54 +0x2b4:  lea    -0x30(%ebp),%eax
08542a57 +0x2b7:  mov    %eax,(%esp)
08542a5a +0x2ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08542a5f +0x2bf:  lea    -0x8(%ebp),%esp
08542a62 +0x2c2:  add    $0x0,%esp
08542a65 +0x2c5:  pop    %ebx
08542a66 +0x2c6:  pop    %esi
08542a67 +0x2c7:  pop    %ebp
08542a68 +0x2c8:  ret
08542a69 +0x2c9:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::SendItemLockList @ 0x85427a0

/* item_lock::CItemLock::SendItemLockList(CUser*) */

void __thiscall item_lock::CItemLock::SendItemLockList(CItemLock *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_40 [4];
  int local_3c;
  int local_38;
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  uchar *local_1c;
  byte local_15;
  Inven_Item *local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085427b9 to 08542a36 has its CatchHandler @ 08542a39 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xfb);
  local_38 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_34);
  local_24 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  local_20 = 0;
  local_3c = 0;
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
  while( true ) {
    std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
    bVar3 = __gnu_cxx::operator!=(local_40,local_28);
    if (!bVar3) break;
    local_1c = (uchar *)__gnu_cxx::
                        __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                        ::operator*(local_40);
    local_20 = GetItemLockInfo(this,*local_1c,&local_3c);
    if (local_20 == 0) {
      local_14 = (Inven_Item *)
                 CUser::GetCurCharacInventoryRef
                           (param_1,(ushort)local_1c[1],*(ushort *)(local_1c + 2));
      if (local_14 != (Inven_Item *)0x0) {
        stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_14 + 0x11),'\0');
        UpdateItem(this,param_1,local_14);
      }
    }
    else {
      local_15 = local_1c[1];
      cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      if ((cVar2 == '\x01') &&
         ((9 < *(ushort *)(local_1c + 2) || (*(ushort *)(local_1c + 2) < 0x16)))) {
        if (local_1c[1] == '\x03') {
          local_15 = 0x12;
        }
        else if (local_1c[1] == '\x12') {
          local_15 = 3;
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)local_15);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,(uint)*(ushort *)(local_1c + 2));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_20);
      if (local_20 == 2) {
        iVar1 = local_3c + 0x3f480;
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_10 = iVar1 - local_10;
        if (local_10 < 0) {
          local_10 = 0;
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_10);
      }
      local_24 = local_24 + 1;
    }
    __gnu_cxx::
    __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
    ::operator++(local_40);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,&local_38,local_24);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::clear
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  PacketGuard::~PacketGuard(local_34);
  return;
}
```
