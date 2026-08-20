# SetKeepRightItem

`_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item`

`user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c00c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c00c  _ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item
#           user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*)
# range [0x0833c00c, 0x0833c23f]
0833c00c +0x000:  push   %ebp
0833c00d +0x001:  mov    %esp,%ebp
0833c00f +0x003:  push   %esi
0833c010 +0x004:  push   %ebx
0833c011 +0x005:  sub    $0x60,%esp
0833c014 +0x008:  mov    0x8(%ebp),%edx
0833c017 +0x00b:  lea    -0x28(%ebp),%eax
0833c01a +0x00e:  mov    %edx,0x4(%esp)
0833c01e +0x012:  mov    %eax,(%esp)
0833c021 +0x015:  call   083429f8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ac5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ac5
0833c026 +0x01a:  sub    $0x4,%esp
0833c029 +0x01d:  jmp    0833c1f4 <+0x1e8>
0833c02e +0x022:  lea    -0x28(%ebp),%eax
0833c031 +0x025:  mov    %eax,(%esp)
0833c034 +0x028:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833c039 +0x02d:  mov    0x4(%eax),%eax
0833c03c +0x030:  mov    %eax,-0xc(%ebp)
0833c03f +0x033:  cmpl   $0x0,-0xc(%ebp)
0833c043 +0x037:  je     0833c05c <+0x50>
0833c045 +0x039:  mov    -0xc(%ebp),%eax
0833c048 +0x03c:  mov    %eax,(%esp)
0833c04b +0x03f:  call   0833ef98 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1065>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1065
0833c050 +0x044:  cmp    $0x1,%eax
0833c053 +0x047:  jne    0833c05c <+0x50>
0833c055 +0x049:  mov    $0x1,%eax
0833c05a +0x04e:  jmp    0833c061 <+0x55>
0833c05c +0x050:  mov    $0x0,%eax
0833c061 +0x055:  test   %al,%al
0833c063 +0x057:  je     0833c1d7 <+0x1cb>
0833c069 +0x05d:  mov    -0xc(%ebp),%eax
0833c06c +0x060:  mov    %eax,(%esp)
0833c06f +0x063:  call   0833f0a6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1173>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1173
0833c074 +0x068:  test   %al,%al
0833c076 +0x06a:  je     0833c1d7 <+0x1cb>
0833c07c +0x070:  movl   $0x0,0x4(%esp)
0833c084 +0x078:  mov    -0xc(%ebp),%eax
0833c087 +0x07b:  mov    %eax,(%esp)
0833c08a +0x07e:  call   0833f0b2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x117f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x117f
0833c08f +0x083:  mov    0xc(%ebp),%eax
0833c092 +0x086:  mov    %eax,0x8(%esp)
0833c096 +0x08a:  movl   $0x8a,0x4(%esp)
0833c09e +0x092:  lea    -0x30(%ebp),%eax
0833c0a1 +0x095:  mov    %eax,(%esp)
0833c0a4 +0x098:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833c0a9 +0x09d:  mov    -0xc(%ebp),%eax
0833c0ac +0x0a0:  mov    %eax,(%esp)
0833c0af +0x0a3:  call   0833f0a6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1173>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1173
0833c0b4 +0x0a8:  movzbl %al,%ebx
0833c0b7 +0x0ab:  mov    -0xc(%ebp),%eax
0833c0ba +0x0ae:  mov    %eax,(%esp)
0833c0bd +0x0b1:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833c0c2 +0x0b6:  mov    %ebx,0x8(%esp)
0833c0c6 +0x0ba:  mov    %eax,0x4(%esp)
0833c0ca +0x0be:  lea    -0x30(%ebp),%eax
0833c0cd +0x0c1:  mov    %eax,(%esp)
0833c0d0 +0x0c4:  call   083401ec <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x22b9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x22b9
0833c0d5 +0x0c9:  xor    $0x1,%eax
0833c0d8 +0x0cc:  test   %al,%al
0833c0da +0x0ce:  je     0833c133 <+0x127>
0833c0dc +0x0d0:  mov    0xc(%ebp),%eax
0833c0df +0x0d3:  mov    %eax,(%esp)
0833c0e2 +0x0d6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833c0e7 +0x0db:  movzwl %ax,%ebx
0833c0ea +0x0de:  movl   $0x5,0xc(%esp)
0833c0f2 +0x0e6:  movl   $0xdf0,0x8(%esp)
0833c0fa +0x0ee:  movl   $&_ZZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_ItemE19__PRETTY_FUNCTION__,0x4(%esp)
0833c102 +0x0f6:  lea    -0x20(%ebp),%eax
0833c105 +0x0f9:  mov    %eax,(%esp)
0833c108 +0x0fc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833c10d +0x101:  mov    %ebx,0x8(%esp)
0833c111 +0x105:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833c119 +0x10d:  lea    -0x20(%ebp),%eax
0833c11c +0x110:  mov    %eax,(%esp)
0833c11f +0x113:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833c124 +0x118:  mov    $0x0,%esi
0833c129 +0x11d:  mov    $0x0,%ebx
0833c12e +0x122:  jmp    0833c1c8 <+0x1bc>
0833c133 +0x127:  lea    -0x30(%ebp),%eax
0833c136 +0x12a:  mov    %eax,(%esp)
0833c139 +0x12d:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833c13e +0x132:  mov    0x8(%ebp),%eax
0833c141 +0x135:  mov    0x1c(%eax),%eax
0833c144 +0x138:  movl   $0x0,0xc(%esp)
0833c14c +0x140:  movl   $0x0,0x8(%esp)
0833c154 +0x148:  mov    %eax,0x4(%esp)
0833c158 +0x14c:  lea    -0x50(%ebp),%eax
0833c15b +0x14f:  mov    %eax,(%esp)
0833c15e +0x152:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833c163 +0x157:  mov    -0xc(%ebp),%eax
0833c166 +0x15a:  mov    %eax,(%esp)
0833c169 +0x15d:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833c16e +0x162:  mov    0x8(%ebp),%edx
0833c171 +0x165:  mov    %eax,0x8(%esp)
0833c175 +0x169:  mov    %edx,0x4(%esp)
0833c179 +0x16d:  lea    -0x50(%ebp),%eax
0833c17c +0x170:  mov    %eax,(%esp)
0833c17f +0x173:  call   083409e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2aad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2aad
0833c184 +0x178:  jmp    0833c19b <+0x18f>
0833c186 +0x17a:  mov    %edx,%ebx
0833c188 +0x17c:  mov    %eax,%esi
0833c18a +0x17e:  lea    -0x50(%ebp),%eax
0833c18d +0x181:  mov    %eax,(%esp)
0833c190 +0x184:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833c195 +0x189:  mov    %esi,%eax
0833c197 +0x18b:  mov    %ebx,%edx
0833c199 +0x18d:  jmp    0833c1ad <+0x1a1>
0833c19b +0x18f:  lea    -0x50(%ebp),%eax
0833c19e +0x192:  mov    %eax,(%esp)
0833c1a1 +0x195:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833c1a6 +0x19a:  mov    $0x1,%ebx
0833c1ab +0x19f:  jmp    0833c1c8 <+0x1bc>
0833c1ad +0x1a1:  mov    %edx,%ebx
0833c1af +0x1a3:  mov    %eax,%esi
0833c1b1 +0x1a5:  lea    -0x30(%ebp),%eax
0833c1b4 +0x1a8:  mov    %eax,(%esp)
0833c1b7 +0x1ab:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833c1bc +0x1b0:  mov    %esi,%eax
0833c1be +0x1b2:  mov    %ebx,%edx
0833c1c0 +0x1b4:  mov    %eax,(%esp)
0833c1c3 +0x1b7:  call   08ae3750 <_Unwind_Resume>
0833c1c8 +0x1bc:  lea    -0x30(%ebp),%eax
0833c1cb +0x1bf:  mov    %eax,(%esp)
0833c1ce +0x1c2:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833c1d3 +0x1c7:  test   %ebx,%ebx
0833c1d5 +0x1c9:  je     0833c233 <+0x227>
0833c1d7 +0x1cb:  lea    -0x10(%ebp),%eax
0833c1da +0x1ce:  movl   $0x0,0x8(%esp)
0833c1e2 +0x1d6:  lea    -0x28(%ebp),%edx
0833c1e5 +0x1d9:  mov    %edx,0x4(%esp)
0833c1e9 +0x1dd:  mov    %eax,(%esp)
0833c1ec +0x1e0:  call   08342a32 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aff>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aff
0833c1f1 +0x1e5:  sub    $0x4,%esp
0833c1f4 +0x1e8:  mov    0x8(%ebp),%edx
0833c1f7 +0x1eb:  lea    -0x24(%ebp),%eax
0833c1fa +0x1ee:  mov    %edx,0x4(%esp)
0833c1fe +0x1f2:  mov    %eax,(%esp)
0833c201 +0x1f5:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833c206 +0x1fa:  sub    $0x4,%esp
0833c209 +0x1fd:  lea    -0x24(%ebp),%eax
0833c20c +0x200:  mov    %eax,0x4(%esp)
0833c210 +0x204:  lea    -0x28(%ebp),%eax
0833c213 +0x207:  mov    %eax,(%esp)
0833c216 +0x20a:  call   08342a1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aeb
0833c21b +0x20f:  test   %al,%al
0833c21d +0x211:  jne    0833c02e <+0x22>
0833c223 +0x217:  mov    0x10(%ebp),%eax
0833c226 +0x21a:  mov    %eax,(%esp)
0833c229 +0x21d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0833c22e +0x222:  mov    $0x1,%esi
0833c233 +0x227:  mov    %esi,%eax
0833c235 +0x229:  lea    -0x8(%ebp),%esp
0833c238 +0x22c:  add    $0x0,%esp
0833c23b +0x22f:  pop    %ebx
0833c23c +0x230:  pop    %esi
0833c23d +0x231:  pop    %ebp
0833c23e +0x232:  ret
0833c23f +0x233:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SetKeepRightItem @ 0x833c00c

/* user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::SetKeepRightItem(CCreatureMgr *this,CUser *param_1,Inven_Item *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  CPacketRespondent local_54 [32];
  CDBMsgSender local_34 [8];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_2c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_28 [4];
  cMyTrace local_24 [16];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_2c);
  do {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       local_2c,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      Inven_Item::reset(param_2);
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       local_2c);
    local_10 = *(CCreatureItem **)(iVar3 + 4);
    if ((local_10 == (CCreatureItem *)0x0) ||
       (iVar3 = CCreatureItem::GetCreatureItemType(local_10), iVar3 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = CCreature::IsNoCharge((CCreature *)local_10), cVar2 != '\0')) {
      CCreature::SetNoCharge((CCreature *)local_10,false);
      CDBMsgSender::CDBMsgSender(local_34,0x8a,param_1);
      uVar4 = CCreature::IsNoCharge((CCreature *)local_10);
      iVar3 = CCreatureItem::GetUid(local_10);
                    /* try { // try from 0833c0d0 to 0833c162 has its CatchHandler @ 0833c1ad */
      cVar2 = CDBMsgSender::UseKeepRight(local_34,iVar3,uVar4 & 0xff);
      if (cVar2 == '\x01') {
        CDBMsgSender::Send(local_34);
        CPacketRespondent::CPacketRespondent(local_54,*(CUser **)(this + 0x1c),0,0);
        iVar3 = CCreatureItem::GetSlotNo(local_10);
                    /* try { // try from 0833c17f to 0833c183 has its CatchHandler @ 0833c186 */
        CPacketRespondent::MakeNotipacketCreatureItemList(local_54,(map *)this,iVar3);
                    /* try { // try from 0833c1a1 to 0833c1a5 has its CatchHandler @ 0833c1ad */
        CPacketRespondent::~CPacketRespondent(local_54);
      }
      else {
        uVar4 = CUser::get_unique_id(param_1);
        cMyTrace::cMyTrace(local_24,
                           "bool user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*)"
                           ,0xdf0,5);
        cMyTrace::operator()(local_24,"cannot write db uid(%d)\n",uVar4 & 0xffff);
        unaff_ESI = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_34);
      if (cVar2 != '\x01') {
        return unaff_ESI;
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_2c);
  } while( true );
}
```
