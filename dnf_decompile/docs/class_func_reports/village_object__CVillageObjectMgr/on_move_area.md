# on_move_area

`_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser`

`village_object::CVillageObjectMgr::on_move_area(CUser*)`

| 类 | 地址 |
|---|---|
| `village_object::CVillageObjectMgr` | `0x086b71da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b71da  _ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser
#           village_object::CVillageObjectMgr::on_move_area(CUser*)
# range [0x086b71da, 0x086b73ee]
086b71da +0x000:  push   %ebp
086b71db +0x001:  mov    %esp,%ebp
086b71dd +0x003:  push   %esi
086b71de +0x004:  push   %ebx
086b71df +0x005:  sub    $0x50,%esp
086b71e2 +0x008:  movl   $0x0,0x4(%esp)
086b71ea +0x010:  mov    0xc(%ebp),%eax
086b71ed +0x013:  mov    %eax,(%esp)
086b71f0 +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086b71f5 +0x01b:  movzbl %al,%ebx
086b71f8 +0x01e:  mov    0xc(%ebp),%eax
086b71fb +0x021:  mov    %eax,(%esp)
086b71fe +0x024:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086b7203 +0x029:  movzbl %al,%eax
086b7206 +0x02c:  mov    %ebx,0x8(%esp)
086b720a +0x030:  mov    %eax,0x4(%esp)
086b720e +0x034:  lea    -0x22(%ebp),%eax
086b7211 +0x037:  mov    %eax,(%esp)
086b7214 +0x03a:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
086b7219 +0x03f:  mov    0x8(%ebp),%edx
086b721c +0x042:  lea    -0x28(%ebp),%eax
086b721f +0x045:  lea    -0x22(%ebp),%ecx
086b7222 +0x048:  mov    %ecx,0x8(%esp)
086b7226 +0x04c:  mov    %edx,0x4(%esp)
086b722a +0x050:  mov    %eax,(%esp)
086b722d +0x053:  call   086b7564 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x135>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x135
086b7232 +0x058:  sub    $0x4,%esp
086b7235 +0x05b:  mov    0x8(%ebp),%edx
086b7238 +0x05e:  lea    -0x20(%ebp),%eax
086b723b +0x061:  mov    %edx,0x4(%esp)
086b723f +0x065:  mov    %eax,(%esp)
086b7242 +0x068:  call   086b7590 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x161>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x161
086b7247 +0x06d:  sub    $0x4,%esp
086b724a +0x070:  lea    -0x20(%ebp),%eax
086b724d +0x073:  mov    %eax,0x4(%esp)
086b7251 +0x077:  lea    -0x28(%ebp),%eax
086b7254 +0x07a:  mov    %eax,(%esp)
086b7257 +0x07d:  call   086b77c8 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x399>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x399
086b725c +0x082:  test   %al,%al
086b725e +0x084:  jne    086b73e4 <+0x20a>
086b7264 +0x08a:  lea    -0x28(%ebp),%eax
086b7267 +0x08d:  mov    %eax,(%esp)
086b726a +0x090:  call   086b75ca <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x19b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x19b
086b726f +0x095:  add    $0x4,%eax
086b7272 +0x098:  mov    %eax,-0x14(%ebp)
086b7275 +0x09b:  lea    -0x34(%ebp),%eax
086b7278 +0x09e:  mov    %eax,(%esp)
086b727b +0x0a1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b7280 +0x0a6:  lea    -0x34(%ebp),%eax
086b7283 +0x0a9:  mov    %eax,(%esp)
086b7286 +0x0ac:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b728b +0x0b1:  movl   $0xca,0x8(%esp)
086b7293 +0x0b9:  movl   $0x0,0x4(%esp)
086b729b +0x0c1:  lea    -0x34(%ebp),%eax
086b729e +0x0c4:  mov    %eax,(%esp)
086b72a1 +0x0c7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b72a6 +0x0cc:  lea    -0x34(%ebp),%eax
086b72a9 +0x0cf:  mov    %eax,(%esp)
086b72ac +0x0d2:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086b72b1 +0x0d7:  mov    %eax,-0x38(%ebp)
086b72b4 +0x0da:  movl   $0x0,-0x10(%ebp)
086b72bb +0x0e1:  mov    -0x10(%ebp),%eax
086b72be +0x0e4:  mov    %eax,0x4(%esp)
086b72c2 +0x0e8:  lea    -0x34(%ebp),%eax
086b72c5 +0x0eb:  mov    %eax,(%esp)
086b72c8 +0x0ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b72cd +0x0f3:  lea    -0x1c(%ebp),%eax
086b72d0 +0x0f6:  mov    -0x14(%ebp),%edx
086b72d3 +0x0f9:  mov    %edx,0x4(%esp)
086b72d7 +0x0fd:  mov    %eax,(%esp)
086b72da +0x100:  call   086b77dc <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3ad>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3ad
086b72df +0x105:  sub    $0x4,%esp
086b72e2 +0x108:  lea    -0x1c(%ebp),%eax
086b72e5 +0x10b:  mov    %eax,0x4(%esp)
086b72e9 +0x10f:  lea    -0x3c(%ebp),%eax
086b72ec +0x112:  mov    %eax,(%esp)
086b72ef +0x115:  call   086b78c6 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x497>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x497
086b72f4 +0x11a:  lea    -0x18(%ebp),%eax
086b72f7 +0x11d:  mov    -0x14(%ebp),%edx
086b72fa +0x120:  mov    %edx,0x4(%esp)
086b72fe +0x124:  mov    %eax,(%esp)
086b7301 +0x127:  call   086b7802 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3d3>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3d3
086b7306 +0x12c:  sub    $0x4,%esp
086b7309 +0x12f:  lea    -0x18(%ebp),%eax
086b730c +0x132:  mov    %eax,0x4(%esp)
086b7310 +0x136:  lea    -0x40(%ebp),%eax
086b7313 +0x139:  mov    %eax,(%esp)
086b7316 +0x13c:  call   086b78c6 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x497>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x497
086b731b +0x141:  movl   $0x0,-0xc(%ebp)
086b7322 +0x148:  jmp    086b7366 <+0x18c>
086b7324 +0x14a:  lea    -0x3c(%ebp),%eax
086b7327 +0x14d:  mov    %eax,(%esp)
086b732a +0x150:  call   086b78fe <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x4cf>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x4cf
086b732f +0x155:  mov    (%eax),%eax
086b7331 +0x157:  mov    %eax,-0xc(%ebp)
086b7334 +0x15a:  mov    -0xc(%ebp),%eax
086b7337 +0x15d:  mov    (%eax),%eax
086b7339 +0x15f:  add    $0x4,%eax
086b733c +0x162:  mov    (%eax),%edx
086b733e +0x164:  lea    -0x34(%ebp),%eax
086b7341 +0x167:  mov    %eax,0x4(%esp)
086b7345 +0x16b:  mov    -0xc(%ebp),%eax
086b7348 +0x16e:  mov    %eax,(%esp)
086b734b +0x171:  call   *%edx
086b734d +0x173:  xor    $0x1,%eax
086b7350 +0x176:  test   %al,%al
086b7352 +0x178:  jne    086b735a <+0x180>
086b7354 +0x17a:  addl   $0x1,-0x10(%ebp)
086b7358 +0x17e:  jmp    086b735b <+0x181>
086b735a +0x180:  nop
086b735b +0x181:  lea    -0x3c(%ebp),%eax
086b735e +0x184:  mov    %eax,(%esp)
086b7361 +0x187:  call   086b78ea <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x4bb>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x4bb
086b7366 +0x18c:  lea    -0x40(%ebp),%eax
086b7369 +0x18f:  mov    %eax,0x4(%esp)
086b736d +0x193:  lea    -0x3c(%ebp),%eax
086b7370 +0x196:  mov    %eax,(%esp)
086b7373 +0x199:  call   086b78d6 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x4a7>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x4a7
086b7378 +0x19e:  test   %al,%al
086b737a +0x1a0:  jne    086b7324 <+0x14a>
086b737c +0x1a2:  mov    -0x10(%ebp),%eax
086b737f +0x1a5:  mov    %eax,0x8(%esp)
086b7383 +0x1a9:  lea    -0x38(%ebp),%eax
086b7386 +0x1ac:  mov    %eax,0x4(%esp)
086b738a +0x1b0:  lea    -0x34(%ebp),%eax
086b738d +0x1b3:  mov    %eax,(%esp)
086b7390 +0x1b6:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
086b7395 +0x1bb:  movl   $0x1,0x4(%esp)
086b739d +0x1c3:  lea    -0x34(%ebp),%eax
086b73a0 +0x1c6:  mov    %eax,(%esp)
086b73a3 +0x1c9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b73a8 +0x1ce:  lea    -0x34(%ebp),%eax
086b73ab +0x1d1:  mov    %eax,0x4(%esp)
086b73af +0x1d5:  mov    0xc(%ebp),%eax
086b73b2 +0x1d8:  mov    %eax,(%esp)
086b73b5 +0x1db:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086b73ba +0x1e0:  jmp    086b73d7 <+0x1fd>
086b73bc +0x1e2:  mov    %edx,%ebx
086b73be +0x1e4:  mov    %eax,%esi
086b73c0 +0x1e6:  lea    -0x34(%ebp),%eax
086b73c3 +0x1e9:  mov    %eax,(%esp)
086b73c6 +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b73cb +0x1f1:  mov    %esi,%eax
086b73cd +0x1f3:  mov    %ebx,%edx
086b73cf +0x1f5:  mov    %eax,(%esp)
086b73d2 +0x1f8:  call   08ae3750 <_Unwind_Resume>
086b73d7 +0x1fd:  lea    -0x34(%ebp),%eax
086b73da +0x200:  mov    %eax,(%esp)
086b73dd +0x203:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b73e2 +0x208:  jmp    086b73e5 <+0x20b>
086b73e4 +0x20a:  nop
086b73e5 +0x20b:  lea    -0x8(%ebp),%esp
086b73e8 +0x20e:  add    $0x0,%esp
086b73eb +0x211:  pop    %ebx
086b73ec +0x212:  pop    %esi
086b73ed +0x213:  pop    %ebp
086b73ee +0x214:  ret
```

## 反编译 C

```c
// village_object::CVillageObjectMgr::on_move_area @ 0x86b71da

/* village_object::CVillageObjectMgr::on_move_area(CUser*) */

void __thiscall
village_object::CVillageObjectMgr::on_move_area(CVillageObjectMgr *this,CUser *param_1)

{
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  undefined4 *puVar4;
  _List_const_iterator<village_object::IObject*> local_44 [4];
  _List_const_iterator<village_object::IObject*> local_40 [4];
  int local_3c;
  PacketGuard local_38 [12];
  Zone local_2c [6];
  Zone local_26 [2];
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  local_24 [4];
  _List_iterator local_20 [4];
  _List_iterator local_1c [4];
  int local_18;
  int local_14;
  int *local_10;
  
  uVar1 = CUser::get_area(param_1,false);
  uVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  Zone::Zone(local_26,uVar2,uVar1);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::find(local_2c);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::end(local_24);
  cVar3 = std::
          _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
          ::operator==((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                        *)local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar3 == '\0') {
    local_18 = std::
               _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
               ::operator->((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                             *)local_2c);
    local_18 = local_18 + 4;
    PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086b7286 to 086b73b9 has its CatchHandler @ 086b73bc */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0xca);
    local_3c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_38);
    local_14 = 0;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::begin();
    std::_List_const_iterator<village_object::IObject*>::_List_const_iterator(local_40,local_20);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::end();
    std::_List_const_iterator<village_object::IObject*>::_List_const_iterator(local_44,local_1c);
    local_10 = (int *)0x0;
    while( true ) {
      cVar3 = std::_List_const_iterator<village_object::IObject*>::operator!=(local_40,local_44);
      if (cVar3 == '\0') break;
      puVar4 = (undefined4 *)
               std::_List_const_iterator<village_object::IObject*>::operator*(local_40);
      local_10 = (int *)*puVar4;
      cVar3 = (**(code **)(*local_10 + 4))(local_10,local_38);
      if (cVar3 == '\x01') {
        local_14 = local_14 + 1;
      }
      std::_List_const_iterator<village_object::IObject*>::operator++(local_40);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,&local_3c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
    CUser::Send(param_1,local_38);
    PacketGuard::~PacketGuard(local_38);
  }
  return;
}
```
