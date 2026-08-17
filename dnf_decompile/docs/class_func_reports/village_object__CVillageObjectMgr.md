# village_object__CVillageObjectMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CVillageObjectMgr

```asm
// === 086b6f30 village_object::CVillageObjectMgr::CVillageObjectMgr  [0x086b6f30-0x86b6f43] ===
 86b6f30:	55                   	push   %ebp
 86b6f31:	89 e5                	mov    %esp,%ebp
 86b6f33:	83 ec 18             	sub    $0x18,%esp
 86b6f36:	8b 45 08             	mov    0x8(%ebp),%eax
 86b6f39:	89 04 24             	mov    %eax,(%esp)
 86b6f3c:	e8 a9 05 00 00       	call   86b74ea <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEEC1Ev>
 86b6f41:	c9                   	leave
 86b6f42:	c3                   	ret
 86b6f43:	90                   	nop

```

```c
// village_object::CVillageObjectMgr::CVillageObjectMgr @ 0x86b6f30

/* village_object::CVillageObjectMgr::CVillageObjectMgr() */

void __thiscall village_object::CVillageObjectMgr::CVillageObjectMgr(CVillageObjectMgr *this)

{
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::map((map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
         *)this);
  return;
}

```

---

## on_move_area

```asm
// === 086b71da village_object::CVillageObjectMgr::on_move_area  [0x086b71da-0x86b73ee] ===
 86b71da:	55                   	push   %ebp
 86b71db:	89 e5                	mov    %esp,%ebp
 86b71dd:	56                   	push   %esi
 86b71de:	53                   	push   %ebx
 86b71df:	83 ec 50             	sub    $0x50,%esp
 86b71e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b71e9:	00 
 86b71ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b71ed:	89 04 24             	mov    %eax,(%esp)
 86b71f0:	e8 c9 a1 fc ff       	call   86813be <_ZN5CUser8get_areaEb>
 86b71f5:	0f b6 d8             	movzbl %al,%ebx
 86b71f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b71fb:	89 04 24             	mov    %eax,(%esp)
 86b71fe:	e8 61 e3 f8 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86b7203:	0f b6 c0             	movzbl %al,%eax
 86b7206:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b720a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b720e:	8d 45 de             	lea    -0x22(%ebp),%eax
 86b7211:	89 04 24             	mov    %eax,(%esp)
 86b7214:	e8 21 44 f1 ff       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 86b7219:	8b 55 08             	mov    0x8(%ebp),%edx
 86b721c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b721f:	8d 4d de             	lea    -0x22(%ebp),%ecx
 86b7222:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b7226:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b722a:	89 04 24             	mov    %eax,(%esp)
 86b722d:	e8 32 03 00 00       	call   86b7564 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE4findERSA_>
 86b7232:	83 ec 04             	sub    $0x4,%esp
 86b7235:	8b 55 08             	mov    0x8(%ebp),%edx
 86b7238:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b723b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b723f:	89 04 24             	mov    %eax,(%esp)
 86b7242:	e8 49 03 00 00       	call   86b7590 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE3endEv>
 86b7247:	83 ec 04             	sub    $0x4,%esp
 86b724a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b724d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b7251:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b7254:	89 04 24             	mov    %eax,(%esp)
 86b7257:	e8 6c 05 00 00       	call   86b77c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEeqERKSA_>
 86b725c:	84 c0                	test   %al,%al
 86b725e:	0f 85 80 01 00 00    	jne    86b73e4 <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x20a>
 86b7264:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b7267:	89 04 24             	mov    %eax,(%esp)
 86b726a:	e8 5b 03 00 00       	call   86b75ca <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEptEv>
 86b726f:	83 c0 04             	add    $0x4,%eax
 86b7272:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b7275:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b7278:	89 04 24             	mov    %eax,(%esp)
 86b727b:	e8 cc 6a ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b7280:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b7283:	89 04 24             	mov    %eax,(%esp)
 86b7286:	e8 5b 46 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b728b:	c7 44 24 08 ca 00 00 	movl   $0xca,0x8(%esp)
 86b7292:	00 
 86b7293:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b729a:	00 
 86b729b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b729e:	89 04 24             	mov    %eax,(%esp)
 86b72a1:	e8 56 46 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b72a6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b72a9:	89 04 24             	mov    %eax,(%esp)
 86b72ac:	e8 9b 98 a5 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86b72b1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86b72b4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86b72bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b72be:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b72c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b72c5:	89 04 24             	mov    %eax,(%esp)
 86b72c8:	e8 53 46 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b72cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b72d0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86b72d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b72d7:	89 04 24             	mov    %eax,(%esp)
 86b72da:	e8 fd 04 00 00       	call   86b77dc <_ZNSt4listIPN14village_object7IObjectESaIS2_EE5beginEv>
 86b72df:	83 ec 04             	sub    $0x4,%esp
 86b72e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b72e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b72e9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b72ec:	89 04 24             	mov    %eax,(%esp)
 86b72ef:	e8 d2 05 00 00       	call   86b78c6 <_ZNSt20_List_const_iteratorIPN14village_object7IObjectEEC1ERKSt14_List_iteratorIS2_E>
 86b72f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b72f7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86b72fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b72fe:	89 04 24             	mov    %eax,(%esp)
 86b7301:	e8 fc 04 00 00       	call   86b7802 <_ZNSt4listIPN14village_object7IObjectESaIS2_EE3endEv>
 86b7306:	83 ec 04             	sub    $0x4,%esp
 86b7309:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b730c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b7310:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86b7313:	89 04 24             	mov    %eax,(%esp)
 86b7316:	e8 ab 05 00 00       	call   86b78c6 <_ZNSt20_List_const_iteratorIPN14village_object7IObjectEEC1ERKSt14_List_iteratorIS2_E>
 86b731b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86b7322:	eb 42                	jmp    86b7366 <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x18c>
 86b7324:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b7327:	89 04 24             	mov    %eax,(%esp)
 86b732a:	e8 cf 05 00 00       	call   86b78fe <_ZNKSt20_List_const_iteratorIPN14village_object7IObjectEEdeEv>
 86b732f:	8b 00                	mov    (%eax),%eax
 86b7331:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b7334:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b7337:	8b 00                	mov    (%eax),%eax
 86b7339:	83 c0 04             	add    $0x4,%eax
 86b733c:	8b 10                	mov    (%eax),%edx
 86b733e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b7341:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b7345:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b7348:	89 04 24             	mov    %eax,(%esp)
 86b734b:	ff d2                	call   *%edx
 86b734d:	83 f0 01             	xor    $0x1,%eax
 86b7350:	84 c0                	test   %al,%al
 86b7352:	75 06                	jne    86b735a <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x180>
 86b7354:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86b7358:	eb 01                	jmp    86b735b <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x181>
 86b735a:	90                   	nop
 86b735b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b735e:	89 04 24             	mov    %eax,(%esp)
 86b7361:	e8 84 05 00 00       	call   86b78ea <_ZNSt20_List_const_iteratorIPN14village_object7IObjectEEppEv>
 86b7366:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86b7369:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b736d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b7370:	89 04 24             	mov    %eax,(%esp)
 86b7373:	e8 5e 05 00 00       	call   86b78d6 <_ZNKSt20_List_const_iteratorIPN14village_object7IObjectEEneERKS3_>
 86b7378:	84 c0                	test   %al,%al
 86b737a:	75 a8                	jne    86b7324 <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x14a>
 86b737c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b737f:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b7383:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86b7386:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b738a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b738d:	89 04 24             	mov    %eax,(%esp)
 86b7390:	e8 93 97 a5 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 86b7395:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b739c:	00 
 86b739d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b73a0:	89 04 24             	mov    %eax,(%esp)
 86b73a3:	e8 b0 45 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b73a8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b73ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b73af:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b73b2:	89 04 24             	mov    %eax,(%esp)
 86b73b5:	e8 00 12 f9 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86b73ba:	eb 1b                	jmp    86b73d7 <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x1fd>
 86b73bc:	89 d3                	mov    %edx,%ebx
 86b73be:	89 c6                	mov    %eax,%esi
 86b73c0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b73c3:	89 04 24             	mov    %eax,(%esp)
 86b73c6:	e8 b5 6a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b73cb:	89 f0                	mov    %esi,%eax
 86b73cd:	89 da                	mov    %ebx,%edx
 86b73cf:	89 04 24             	mov    %eax,(%esp)
 86b73d2:	e8 79 c3 42 00       	call   8ae3750 <_Unwind_Resume>
 86b73d7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b73da:	89 04 24             	mov    %eax,(%esp)
 86b73dd:	e8 9e 6a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b73e2:	eb 01                	jmp    86b73e5 <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser+0x20b>
 86b73e4:	90                   	nop
 86b73e5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b73e8:	83 c4 00             	add    $0x0,%esp
 86b73eb:	5b                   	pop    %ebx
 86b73ec:	5e                   	pop    %esi
 86b73ed:	5d                   	pop    %ebp
 86b73ee:	c3                   	ret

```

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

---

## register_object

```asm
// === 086b6f58 village_object::CVillageObjectMgr::register_object  [0x086b6f58-0x86b70cf] ===
 86b6f58:	55                   	push   %ebp
 86b6f59:	89 e5                	mov    %esp,%ebp
 86b6f5b:	56                   	push   %esi
 86b6f5c:	53                   	push   %ebx
 86b6f5d:	83 ec 50             	sub    $0x50,%esp
 86b6f60:	8b 55 08             	mov    0x8(%ebp),%edx
 86b6f63:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b6f66:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 86b6f69:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b6f6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b6f71:	89 04 24             	mov    %eax,(%esp)
 86b6f74:	e8 eb 05 00 00       	call   86b7564 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE4findERSA_>
 86b6f79:	83 ec 04             	sub    $0x4,%esp
 86b6f7c:	8b 55 08             	mov    0x8(%ebp),%edx
 86b6f7f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86b6f82:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b6f86:	89 04 24             	mov    %eax,(%esp)
 86b6f89:	e8 02 06 00 00       	call   86b7590 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE3endEv>
 86b6f8e:	83 ec 04             	sub    $0x4,%esp
 86b6f91:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86b6f94:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b6f98:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b6f9b:	89 04 24             	mov    %eax,(%esp)
 86b6f9e:	e8 13 06 00 00       	call   86b75b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEneERKSA_>
 86b6fa3:	84 c0                	test   %al,%al
 86b6fa5:	74 48                	je     86b6fef <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x97>
 86b6fa7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b6faa:	89 04 24             	mov    %eax,(%esp)
 86b6fad:	e8 18 06 00 00       	call   86b75ca <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEptEv>
 86b6fb2:	83 c0 04             	add    $0x4,%eax
 86b6fb5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b6fb8:	8d 45 10             	lea    0x10(%ebp),%eax
 86b6fbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b6fbf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b6fc2:	89 04 24             	mov    %eax,(%esp)
 86b6fc5:	e8 0d 06 00 00       	call   86b75d7 <_ZN19collision_detection16detect_collisionIPN14village_object7IObjectEEEbRSt4listIT_SaIS5_EERS5_>
 86b6fca:	84 c0                	test   %al,%al
 86b6fcc:	74 0a                	je     86b6fd8 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x80>
 86b6fce:	b8 00 00 00 00       	mov    $0x0,%eax
 86b6fd3:	e9 ed 00 00 00       	jmp    86b70c5 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x16d>
 86b6fd8:	8d 45 10             	lea    0x10(%ebp),%eax
 86b6fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b6fdf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b6fe2:	89 04 24             	mov    %eax,(%esp)
 86b6fe5:	e8 8c 06 00 00       	call   86b7676 <_ZNSt4listIPN14village_object7IObjectESaIS2_EE9push_backERKS2_>
 86b6fea:	e9 d1 00 00 00       	jmp    86b70c0 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x168>
 86b6fef:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b6ff2:	89 04 24             	mov    %eax,(%esp)
 86b6ff5:	e8 b2 06 00 00       	call   86b76ac <_ZNSt4listIPN14village_object7IObjectESaIS2_EEC1Ev>
 86b6ffa:	8d 45 10             	lea    0x10(%ebp),%eax
 86b6ffd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b7001:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b7004:	89 04 24             	mov    %eax,(%esp)
 86b7007:	e8 6a 06 00 00       	call   86b7676 <_ZNSt4listIPN14village_object7IObjectESaIS2_EE9push_backERKS2_>
 86b700c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b700f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 86b7012:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b7016:	8d 55 0c             	lea    0xc(%ebp),%edx
 86b7019:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b701d:	89 04 24             	mov    %eax,(%esp)
 86b7020:	e8 f1 06 00 00       	call   86b7716 <_ZSt9make_pairIRN14village_object4ZoneERSt4listIPNS0_7IObjectESaIS5_EEESt4pairINSt17__decay_and_stripIT_E6__typeENSA_IT0_E6__typeEEOSB_OSE_>
 86b7025:	83 ec 04             	sub    $0x4,%esp
 86b7028:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b702b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b702f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b7032:	89 04 24             	mov    %eax,(%esp)
 86b7035:	e8 20 07 00 00       	call   86b775a <_ZNSt4pairIKN14village_object4ZoneESt4listIPNS0_7IObjectESaIS5_EEEC1IS1_S7_EEOS_IT_T0_E>
 86b703a:	8b 55 08             	mov    0x8(%ebp),%edx
 86b703d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b7040:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 86b7043:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b7047:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b704b:	89 04 24             	mov    %eax,(%esp)
 86b704e:	e8 49 07 00 00       	call   86b779c <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE6insertERKSB_>
 86b7053:	83 ec 04             	sub    $0x4,%esp
 86b7056:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b7059:	89 04 24             	mov    %eax,(%esp)
 86b705c:	e8 73 04 00 00       	call   86b74d4 <_ZNSt4pairIKN14village_object4ZoneESt4listIPNS0_7IObjectESaIS5_EEED1Ev>
 86b7061:	eb 2a                	jmp    86b708d <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x135>
 86b7063:	89 d3                	mov    %edx,%ebx
 86b7065:	89 c6                	mov    %eax,%esi
 86b7067:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b706a:	89 04 24             	mov    %eax,(%esp)
 86b706d:	e8 62 04 00 00       	call   86b74d4 <_ZNSt4pairIKN14village_object4ZoneESt4listIPNS0_7IObjectESaIS5_EEED1Ev>
 86b7072:	89 f0                	mov    %esi,%eax
 86b7074:	89 da                	mov    %ebx,%edx
 86b7076:	eb 00                	jmp    86b7078 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x120>
 86b7078:	89 d3                	mov    %edx,%ebx
 86b707a:	89 c6                	mov    %eax,%esi
 86b707c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b707f:	89 04 24             	mov    %eax,(%esp)
 86b7082:	e8 37 04 00 00       	call   86b74be <_ZNSt4pairIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EEED1Ev>
 86b7087:	89 f0                	mov    %esi,%eax
 86b7089:	89 da                	mov    %ebx,%edx
 86b708b:	eb 0d                	jmp    86b709a <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x142>
 86b708d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b7090:	89 04 24             	mov    %eax,(%esp)
 86b7093:	e8 26 04 00 00       	call   86b74be <_ZNSt4pairIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EEED1Ev>
 86b7098:	eb 1b                	jmp    86b70b5 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE+0x15d>
 86b709a:	89 d3                	mov    %edx,%ebx
 86b709c:	89 c6                	mov    %eax,%esi
 86b709e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b70a1:	89 04 24             	mov    %eax,(%esp)
 86b70a4:	e8 01 04 00 00       	call   86b74aa <_ZNSt4listIPN14village_object7IObjectESaIS2_EED1Ev>
 86b70a9:	89 f0                	mov    %esi,%eax
 86b70ab:	89 da                	mov    %ebx,%edx
 86b70ad:	89 04 24             	mov    %eax,(%esp)
 86b70b0:	e8 9b c6 42 00       	call   8ae3750 <_Unwind_Resume>
 86b70b5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86b70b8:	89 04 24             	mov    %eax,(%esp)
 86b70bb:	e8 ea 03 00 00       	call   86b74aa <_ZNSt4listIPN14village_object7IObjectESaIS2_EED1Ev>
 86b70c0:	b8 01 00 00 00       	mov    $0x1,%eax
 86b70c5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b70c8:	83 c4 00             	add    $0x0,%esp
 86b70cb:	5b                   	pop    %ebx
 86b70cc:	5e                   	pop    %esi
 86b70cd:	5d                   	pop    %ebp
 86b70ce:	c3                   	ret
 86b70cf:	90                   	nop

```

```c
// village_object::CVillageObjectMgr::register_object @ 0x86b6f58

/* village_object::CVillageObjectMgr::register_object(village_object::Zone,
   village_object::IObject*) */

undefined4 village_object::CVillageObjectMgr::register_object(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  list<village_object::IObject*,std::allocator<village_object::IObject*>> local_40 [8];
  Zone local_38 [4];
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  local_34 [4];
  pair local_30 [8];
  pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
  local_28 [12];
  Zone local_1c [12];
  list<village_object::IObject*,std::allocator<village_object::IObject*>> *local_10;
  
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::find(local_38);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::end(local_34);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                        *)local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::list(local_40);
                    /* try { // try from 086b7007 to 086b7024 has its CatchHandler @ 086b709a */
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::push_back
              (local_40,(IObject **)&stack0x0000000c);
    std::
    make_pair<village_object::Zone&,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>&>
              (local_1c,(list *)&stack0x00000008);
                    /* try { // try from 086b7035 to 086b7039 has its CatchHandler @ 086b7078 */
    std::
    pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::
    pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
              (local_28,local_1c);
                    /* try { // try from 086b704e to 086b7052 has its CatchHandler @ 086b7063 */
    std::
    map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
    ::insert(local_30);
                    /* try { // try from 086b705c to 086b7060 has its CatchHandler @ 086b7078 */
    std::
    pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::~pair(local_28);
                    /* try { // try from 086b7093 to 086b7097 has its CatchHandler @ 086b709a */
    std::
    pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::~pair((pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
             *)local_1c);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::~list(local_40);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
            ::operator->((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                          *)local_38);
    local_10 = (list<village_object::IObject*,std::allocator<village_object::IObject*>> *)
               (iVar3 + 4);
    bVar2 = collision_detection::detect_collision<village_object::IObject*>
                      ((list *)local_10,(IObject **)&stack0x0000000c);
    if (bVar2) {
      return 0;
    }
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::push_back
              (local_10,(IObject **)&stack0x0000000c);
  }
  return 1;
}

```

---

## unregister_object

```asm
// === 086b70d0 village_object::CVillageObjectMgr::unregister_object  [0x086b70d0-0x86b71d9] ===
 86b70d0:	55                   	push   %ebp
 86b70d1:	89 e5                	mov    %esp,%ebp
 86b70d3:	83 ec 38             	sub    $0x38,%esp
 86b70d6:	8b 55 08             	mov    0x8(%ebp),%edx
 86b70d9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b70dc:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 86b70df:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b70e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b70e7:	89 04 24             	mov    %eax,(%esp)
 86b70ea:	e8 75 04 00 00       	call   86b7564 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE4findERSA_>
 86b70ef:	83 ec 04             	sub    $0x4,%esp
 86b70f2:	8b 55 08             	mov    0x8(%ebp),%edx
 86b70f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b70f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b70fc:	89 04 24             	mov    %eax,(%esp)
 86b70ff:	e8 8c 04 00 00       	call   86b7590 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEE3endEv>
 86b7104:	83 ec 04             	sub    $0x4,%esp
 86b7107:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b710a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b710e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b7111:	89 04 24             	mov    %eax,(%esp)
 86b7114:	e8 af 06 00 00       	call   86b77c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEeqERKSA_>
 86b7119:	84 c0                	test   %al,%al
 86b711b:	74 0a                	je     86b7127 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE+0x57>
 86b711d:	b8 00 00 00 00       	mov    $0x0,%eax
 86b7122:	e9 b1 00 00 00       	jmp    86b71d8 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE+0x108>
 86b7127:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b712a:	89 04 24             	mov    %eax,(%esp)
 86b712d:	e8 98 04 00 00       	call   86b75ca <_ZNKSt17_Rb_tree_iteratorISt4pairIKN14village_object4ZoneESt4listIPNS1_7IObjectESaIS6_EEEEptEv>
 86b7132:	83 c0 04             	add    $0x4,%eax
 86b7135:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b7138:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b713b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b713e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b7142:	89 04 24             	mov    %eax,(%esp)
 86b7145:	e8 b8 06 00 00       	call   86b7802 <_ZNSt4listIPN14village_object7IObjectESaIS2_EE3endEv>
 86b714a:	83 ec 04             	sub    $0x4,%esp
 86b714d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b7150:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b7153:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b7157:	89 04 24             	mov    %eax,(%esp)
 86b715a:	e8 7d 06 00 00       	call   86b77dc <_ZNSt4listIPN14village_object7IObjectESaIS2_EE5beginEv>
 86b715f:	83 ec 04             	sub    $0x4,%esp
 86b7162:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b7165:	8d 55 10             	lea    0x10(%ebp),%edx
 86b7168:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b716c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86b716f:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b7173:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86b7176:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b717a:	89 04 24             	mov    %eax,(%esp)
 86b717d:	e8 a3 06 00 00       	call   86b7825 <_ZSt4findISt14_List_iteratorIPN14village_object7IObjectEES3_ET_S5_S5_RKT0_>
 86b7182:	83 ec 04             	sub    $0x4,%esp
 86b7185:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b7188:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b718b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b718f:	89 04 24             	mov    %eax,(%esp)
 86b7192:	e8 6b 06 00 00       	call   86b7802 <_ZNSt4listIPN14village_object7IObjectESaIS2_EE3endEv>
 86b7197:	83 ec 04             	sub    $0x4,%esp
 86b719a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b719d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b71a1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b71a4:	89 04 24             	mov    %eax,(%esp)
 86b71a7:	e8 ce 06 00 00       	call   86b787a <_ZNKSt14_List_iteratorIPN14village_object7IObjectEEeqERKS3_>
 86b71ac:	84 c0                	test   %al,%al
 86b71ae:	74 07                	je     86b71b7 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE+0xe7>
 86b71b0:	b8 00 00 00 00       	mov    $0x0,%eax
 86b71b5:	eb 21                	jmp    86b71d8 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE+0x108>
 86b71b7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b71ba:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86b71bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b71c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b71c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b71c8:	89 04 24             	mov    %eax,(%esp)
 86b71cb:	e8 be 06 00 00       	call   86b788e <_ZNSt4listIPN14village_object7IObjectESaIS2_EE5eraseESt14_List_iteratorIS2_E>
 86b71d0:	83 ec 04             	sub    $0x4,%esp
 86b71d3:	b8 01 00 00 00       	mov    $0x1,%eax
 86b71d8:	c9                   	leave
 86b71d9:	c3                   	ret

```

```c
// village_object::CVillageObjectMgr::unregister_object @ 0x86b70d0

/* village_object::CVillageObjectMgr::unregister_object(village_object::Zone,
   village_object::IObject*) */

undefined4 village_object::CVillageObjectMgr::unregister_object(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  Zone local_28 [4];
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  _List_iterator local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::find(local_28);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
          ::operator==((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                        *)local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_10 = std::
               _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
               ::operator->((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                             *)local_28);
    local_10 = local_10 + 4;
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::end();
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::begin();
    std::find<std::_List_iterator<village_object::IObject*>,village_object::IObject*>
              (&local_2c,local_1c,local_20,&stack0x0000000c);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::end();
    cVar1 = std::_List_iterator<village_object::IObject*>::operator==
                      ((_List_iterator<village_object::IObject*> *)&local_2c,local_18);
    if (cVar1 == '\0') {
      std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::erase
                (local_14,local_10,local_2c);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~CVillageObjectMgr

```asm
// === 086b6f44 village_object::CVillageObjectMgr::~CVillageObjectMgr  [0x086b6f44-0x86b6f57] ===
 86b6f44:	55                   	push   %ebp
 86b6f45:	89 e5                	mov    %esp,%ebp
 86b6f47:	83 ec 18             	sub    $0x18,%esp
 86b6f4a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b6f4d:	89 04 24             	mov    %eax,(%esp)
 86b6f50:	e8 41 05 00 00       	call   86b7496 <_ZNSt3mapIN14village_object4ZoneESt4listIPNS0_7IObjectESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S6_EEED1Ev>
 86b6f55:	c9                   	leave
 86b6f56:	c3                   	ret
 86b6f57:	90                   	nop

```

```c
// village_object::CVillageObjectMgr::~CVillageObjectMgr @ 0x86b6f44

/* village_object::CVillageObjectMgr::~CVillageObjectMgr() */

void __thiscall village_object::CVillageObjectMgr::~CVillageObjectMgr(CVillageObjectMgr *this)

{
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::~map((map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
          *)this);
  return;
}

```

