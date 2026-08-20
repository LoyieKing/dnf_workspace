# arrange_users

`_ZN9GameWorld13arrange_usersEv`

`GameWorld::arrange_users()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cafaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cafaa  _ZN9GameWorld13arrange_usersEv
#           GameWorld::arrange_users()
# range [0x086cafaa, 0x086cb17b]
086cafaa +0x000:  push   %ebp
086cafab +0x001:  mov    %esp,%ebp
086cafad +0x003:  push   %esi
086cafae +0x004:  push   %ebx
086cafaf +0x005:  sub    $0x40,%esp
086cafb2 +0x008:  mov    0x8(%ebp),%eax
086cafb5 +0x00b:  lea    0x134(%eax),%edx
086cafbb +0x011:  lea    -0x2c(%ebp),%eax
086cafbe +0x014:  mov    %edx,0x4(%esp)
086cafc2 +0x018:  mov    %eax,(%esp)
086cafc5 +0x01b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cafca +0x020:  sub    $0x4,%esp
086cafcd +0x023:  jmp    086cb080 <+0xd6>
086cafd2 +0x028:  lea    -0x2c(%ebp),%eax
086cafd5 +0x02b:  mov    %eax,(%esp)
086cafd8 +0x02e:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cafdd +0x033:  mov    0x4(%eax),%eax
086cafe0 +0x036:  mov    %eax,-0x10(%ebp)
086cafe3 +0x039:  cmpl   $0x0,-0x10(%ebp)
086cafe7 +0x03d:  je     086cb063 <+0xb9>
086cafe9 +0x03f:  mov    -0x10(%ebp),%eax
086cafec +0x042:  mov    %eax,(%esp)
086cafef +0x045:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086caff4 +0x04a:  movl   $0x0,0x4(%esp)
086caffc +0x052:  mov    %eax,(%esp)
086cafff +0x055:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086cb004 +0x05a:  mov    %eax,%ebx
086cb006 +0x05c:  movl   $0x0,0xc(%esp)
086cb00e +0x064:  movl   $0x10a6,0x8(%esp)
086cb016 +0x06c:  movl   $&_ZZN9GameWorld13arrange_usersEvE19__PRETTY_FUNCTION__,0x4(%esp)
086cb01e +0x074:  lea    -0x24(%ebp),%eax
086cb021 +0x077:  mov    %eax,(%esp)
086cb024 +0x07a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cb029 +0x07f:  mov    %ebx,0x8(%esp)
086cb02d +0x083:  movl   $"GameWorld::arrange_users ACCID: %s",0x4(%esp)
086cb035 +0x08b:  lea    -0x24(%ebp),%eax
086cb038 +0x08e:  mov    %eax,(%esp)
086cb03b +0x091:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cb040 +0x096:  movl   $0x0,0xc(%esp)
086cb048 +0x09e:  movl   $0x1,0x8(%esp)
086cb050 +0x0a6:  movl   $0x7,0x4(%esp)
086cb058 +0x0ae:  mov    -0x10(%ebp),%eax
086cb05b +0x0b1:  mov    %eax,(%esp)
086cb05e +0x0b4:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086cb063 +0x0b9:  lea    -0x14(%ebp),%eax
086cb066 +0x0bc:  movl   $0x0,0x8(%esp)
086cb06e +0x0c4:  lea    -0x2c(%ebp),%edx
086cb071 +0x0c7:  mov    %edx,0x4(%esp)
086cb075 +0x0cb:  mov    %eax,(%esp)
086cb078 +0x0ce:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cb07d +0x0d3:  sub    $0x4,%esp
086cb080 +0x0d6:  mov    0x8(%ebp),%eax
086cb083 +0x0d9:  lea    0x134(%eax),%edx
086cb089 +0x0df:  lea    -0x28(%ebp),%eax
086cb08c +0x0e2:  mov    %edx,0x4(%esp)
086cb090 +0x0e6:  mov    %eax,(%esp)
086cb093 +0x0e9:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cb098 +0x0ee:  sub    $0x4,%esp
086cb09b +0x0f1:  lea    -0x28(%ebp),%eax
086cb09e +0x0f4:  mov    %eax,0x4(%esp)
086cb0a2 +0x0f8:  lea    -0x2c(%ebp),%eax
086cb0a5 +0x0fb:  mov    %eax,(%esp)
086cb0a8 +0x0fe:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cb0ad +0x103:  test   %al,%al
086cb0af +0x105:  jne    086cafd2 <+0x28>
086cb0b5 +0x10b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cb0ba +0x110:  mov    %eax,(%esp)
086cb0bd +0x113:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
086cb0c2 +0x118:  test   %al,%al
086cb0c4 +0x11a:  je     086cb13b <+0x191>
086cb0c6 +0x11c:  movl   $0x0,-0x30(%ebp)
086cb0cd +0x123:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086cb0d2 +0x128:  mov    %eax,(%esp)
086cb0d5 +0x12b:  call   082b44ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63b5
086cb0da +0x130:  mov    %eax,-0xc(%ebp)
086cb0dd +0x133:  jmp    086cb120 <+0x176>
086cb0df +0x135:  mov    -0xc(%ebp),%ebx
086cb0e2 +0x138:  mov    -0xc(%ebp),%esi
086cb0e5 +0x13b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb0ea +0x140:  mov    %esi,0x4(%esp)
086cb0ee +0x144:  mov    %eax,(%esp)
086cb0f1 +0x147:  call   08234524 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bce
086cb0f6 +0x14c:  mov    %ebx,0x8(%esp)
086cb0fa +0x150:  mov    %eax,0x4(%esp)
086cb0fe +0x154:  mov    0x8(%ebp),%eax
086cb101 +0x157:  mov    %eax,(%esp)
086cb104 +0x15a:  call   086cbaba <_ZN9GameWorld13DeleteChannelEi17ENUM_SERVER_GROUP>  ; GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP)
086cb109 +0x15f:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086cb10e +0x164:  lea    -0x30(%ebp),%edx
086cb111 +0x167:  mov    %edx,0x4(%esp)
086cb115 +0x16b:  mov    %eax,(%esp)
086cb118 +0x16e:  call   082b44f2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63ed>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63ed
086cb11d +0x173:  mov    %eax,-0xc(%ebp)
086cb120 +0x176:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
086cb125 +0x17b:  mov    %eax,(%esp)
086cb128 +0x17e:  call   082b44e6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x63e1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x63e1
086cb12d +0x183:  mov    -0x30(%ebp),%edx
086cb130 +0x186:  cmp    %edx,%eax
086cb132 +0x188:  setg   %al
086cb135 +0x18b:  test   %al,%al
086cb137 +0x18d:  jne    086cb0df <+0x135>
086cb139 +0x18f:  jmp    086cb15d <+0x1b3>
086cb13b +0x191:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb140 +0x196:  mov    0x198(%eax),%eax
086cb146 +0x19c:  movl   $0x0,0x8(%esp)
086cb14e +0x1a4:  mov    %eax,0x4(%esp)
086cb152 +0x1a8:  mov    0x8(%ebp),%eax
086cb155 +0x1ab:  mov    %eax,(%esp)
086cb158 +0x1ae:  call   086cbaba <_ZN9GameWorld13DeleteChannelEi17ENUM_SERVER_GROUP>  ; GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP)
086cb15d +0x1b3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb162 +0x1b8:  movl   $0x1,0x4(%esp)
086cb16a +0x1c0:  mov    %eax,(%esp)
086cb16d +0x1c3:  call   082a6d0a <_GLOBAL__I__ZN4CLog5this_E+0x3131>  ; global constructors keyed to CLog::this_+0x3131
086cb172 +0x1c8:  lea    -0x8(%ebp),%esp
086cb175 +0x1cb:  add    $0x0,%esp
086cb178 +0x1ce:  pop    %ebx
086cb179 +0x1cf:  pop    %esi
086cb17a +0x1d0:  pop    %ebp
086cb17b +0x1d1:  ret
```

## 反编译 C

```c
// GameWorld::arrange_users @ 0x86cafaa

/* GameWorld::arrange_users() */

void __thiscall GameWorld::arrange_users(GameWorld *this)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  undefined4 uVar4;
  int iVar5;
  CEnvironment *pCVar6;
  int local_34;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_2c [4];
  cMyTrace local_28 [16];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  CUser *local_14;
  undefined4 local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30);
    local_14 = *(CUser **)(iVar5 + 4);
    if (local_14 != (CUser *)0x0) {
      uVar2 = CUser::get_acc_id(local_14);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_28,"void GameWorld::arrange_users()",0x10a6,0);
      cMyTrace::operator()(local_28,"GameWorld::arrange_users ACCID: %s",uVar3);
      CUser::DisConnSig(local_14,7,1,0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_18,(int)local_30);
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = IsIntegratedPvPBaseChannel(this_00);
  if (cVar1 == '\0') {
    iVar5 = G_CEnvironment();
    DeleteChannel(this,*(undefined4 *)(iVar5 + 0x198),0);
  }
  else {
    local_34 = 0;
    local_10 = CServerProxyMgr<CStatisticServerProxy>::GetStartIndex
                         (GlobalData::s_statistic_proxy_mgr);
    while (iVar5 = CServerProxyMgr<CStatisticServerProxy>::GetEndIndex
                             (GlobalData::s_statistic_proxy_mgr), uVar3 = local_10, local_34 < iVar5
          ) {
      pCVar6 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_gc_no_hardcode(pCVar6,uVar3);
      DeleteChannel(this,uVar4,uVar3);
      local_10 = CServerProxyMgr<CStatisticServerProxy>::GetNextIndex
                           (GlobalData::s_statistic_proxy_mgr,&local_34);
    }
  }
  pCVar6 = (CEnvironment *)G_CEnvironment();
  CEnvironment::set_suspend_state(pCVar6,true);
  return;
}
```
