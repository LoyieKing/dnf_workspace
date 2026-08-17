# DB_StatPVPPlay2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841ba96 DB_StatPVPPlay2::dispatch  [0x0841ba96-0x841bce3] ===
 841ba96:	55                   	push   %ebp
 841ba97:	89 e5                	mov    %esp,%ebp
 841ba99:	57                   	push   %edi
 841ba9a:	56                   	push   %esi
 841ba9b:	53                   	push   %ebx
 841ba9c:	83 ec 7c             	sub    $0x7c,%esp
 841ba9f:	e8 03 e9 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841baa4:	89 04 24             	mov    %eax,(%esp)
 841baa7:	e8 94 21 03 00       	call   844dc40 <_ZN9GameWorld16getStatisticsPvPEv>
 841baac:	89 04 24             	mov    %eax,(%esp)
 841baaf:	e8 70 1a 03 00       	call   844d524 <_ZN13StatisticsPvP4lockEv>
 841bab4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841bab9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841bac0:	00 
 841bac1:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841bac8:	00 
 841bac9:	89 04 24             	mov    %eax,(%esp)
 841bacc:	e8 6d 97 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841bad1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841bad4:	e8 ce e8 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841bad9:	89 04 24             	mov    %eax,(%esp)
 841badc:	e8 5f 21 03 00       	call   844dc40 <_ZN9GameWorld16getStatisticsPvPEv>
 841bae1:	8d 50 18             	lea    0x18(%eax),%edx
 841bae4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841bae7:	89 54 24 04          	mov    %edx,0x4(%esp)
 841baeb:	89 04 24             	mov    %eax,(%esp)
 841baee:	e8 21 57 03 00       	call   8451214 <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 841baf3:	83 ec 04             	sub    $0x4,%esp
 841baf6:	e8 ac e8 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841bafb:	89 04 24             	mov    %eax,(%esp)
 841bafe:	e8 3d 21 03 00       	call   844dc40 <_ZN9GameWorld16getStatisticsPvPEv>
 841bb03:	8d 50 18             	lea    0x18(%eax),%edx
 841bb06:	8d 45 b0             	lea    -0x50(%ebp),%eax
 841bb09:	89 54 24 04          	mov    %edx,0x4(%esp)
 841bb0d:	89 04 24             	mov    %eax,(%esp)
 841bb10:	e8 25 57 03 00       	call   845123a <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 841bb15:	83 ec 04             	sub    $0x4,%esp
 841bb18:	e9 88 01 00 00       	jmp    841bca5 <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream+0x20f>
 841bb1d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841bb20:	89 04 24             	mov    %eax,(%esp)
 841bb23:	e8 6a 57 03 00       	call   8451292 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEdeEv>
 841bb28:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841bb2b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841bb2e:	89 04 24             	mov    %eax,(%esp)
 841bb31:	e8 5c 57 03 00       	call   8451292 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEdeEv>
 841bb36:	83 c0 08             	add    $0x8,%eax
 841bb39:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841bb3c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bb3f:	8b 58 08             	mov    0x8(%eax),%ebx
 841bb42:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bb45:	8b 48 0c             	mov    0xc(%eax),%ecx
 841bb48:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bb4b:	8b 50 04             	mov    0x4(%eax),%edx
 841bb4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bb51:	8b 00                	mov    (%eax),%eax
 841bb53:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841bb57:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841bb5b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841bb5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bb63:	c7 44 24 04 e4 b5 c4 	movl   $0x8c4b5e4,0x4(%esp)
 841bb6a:	08 
 841bb6b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bb6e:	89 04 24             	mov    %eax,(%esp)
 841bb71:	e8 4a 86 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841bb76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841bb7d:	00 
 841bb7e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bb81:	89 04 24             	mov    %eax,(%esp)
 841bb84:	e8 9d 87 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841bb89:	88 45 e6             	mov    %al,-0x1a(%ebp)
 841bb8c:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 841bb90:	83 f0 01             	xor    $0x1,%eax
 841bb93:	84 c0                	test   %al,%al
 841bb95:	0f 84 9c 00 00 00    	je     841bc37 <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream+0x1a1>
 841bb9b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bb9e:	8b 58 04             	mov    0x4(%eax),%ebx
 841bba1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bba4:	8b 08                	mov    (%eax),%ecx
 841bba6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bba9:	8b 50 0c             	mov    0xc(%eax),%edx
 841bbac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bbaf:	8b 40 08             	mov    0x8(%eax),%eax
 841bbb2:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841bbb6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841bbba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841bbbe:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bbc2:	c7 44 24 04 60 b6 c4 	movl   $0x8c4b660,0x4(%esp)
 841bbc9:	08 
 841bbca:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bbcd:	89 04 24             	mov    %eax,(%esp)
 841bbd0:	e8 eb 85 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841bbd5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841bbdc:	00 
 841bbdd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bbe0:	89 04 24             	mov    %eax,(%esp)
 841bbe3:	e8 3e 87 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841bbe8:	88 45 e7             	mov    %al,-0x19(%ebp)
 841bbeb:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 841bbef:	83 f0 01             	xor    $0x1,%eax
 841bbf2:	84 c0                	test   %al,%al
 841bbf4:	74 41                	je     841bc37 <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream+0x1a1>
 841bbf6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bbf9:	8b 18                	mov    (%eax),%ebx
 841bbfb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841bc02:	00 
 841bc03:	c7 44 24 08 d8 4e 00 	movl   $0x4ed8,0x8(%esp)
 841bc0a:	00 
 841bc0b:	c7 44 24 04 00 cb c5 	movl   $0x8c5cb00,0x4(%esp)
 841bc12:	08 
 841bc13:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841bc16:	89 04 24             	mov    %eax,(%esp)
 841bc19:	e8 fa 3a 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841bc1e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841bc22:	c7 44 24 04 08 b7 c4 	movl   $0x8c4b708,0x4(%esp)
 841bc29:	08 
 841bc2a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841bc2d:	89 04 24             	mov    %eax,(%esp)
 841bc30:	e8 53 3b 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841bc35:	eb 63                	jmp    841bc9a <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream+0x204>
 841bc37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bc3a:	8b 40 08             	mov    0x8(%eax),%eax
 841bc3d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 841bc40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bc43:	8b 78 0c             	mov    0xc(%eax),%edi
 841bc46:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bc49:	8b 70 04             	mov    0x4(%eax),%esi
 841bc4c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bc4f:	8b 18                	mov    (%eax),%ebx
 841bc51:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841bc58:	00 
 841bc59:	c7 44 24 08 dc 4e 00 	movl   $0x4edc,0x8(%esp)
 841bc60:	00 
 841bc61:	c7 44 24 04 00 cb c5 	movl   $0x8c5cb00,0x4(%esp)
 841bc68:	08 
 841bc69:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841bc6c:	89 04 24             	mov    %eax,(%esp)
 841bc6f:	e8 a4 3a 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841bc74:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 841bc77:	89 44 24 14          	mov    %eax,0x14(%esp)
 841bc7b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 841bc7f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 841bc83:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841bc87:	c7 44 24 04 28 b7 c4 	movl   $0x8c4b728,0x4(%esp)
 841bc8e:	08 
 841bc8f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841bc92:	89 04 24             	mov    %eax,(%esp)
 841bc95:	e8 ee 3a 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841bc9a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841bc9d:	89 04 24             	mov    %eax,(%esp)
 841bca0:	e8 cf 55 03 00       	call   8451274 <_ZNSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEppEv>
 841bca5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 841bca8:	89 44 24 04          	mov    %eax,0x4(%esp)
 841bcac:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841bcaf:	89 04 24             	mov    %eax,(%esp)
 841bcb2:	e8 a9 55 03 00       	call   8451260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEneERKS6_>
 841bcb7:	84 c0                	test   %al,%al
 841bcb9:	0f 85 5e fe ff ff    	jne    841bb1d <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream+0x87>
 841bcbf:	e8 e3 e6 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841bcc4:	89 04 24             	mov    %eax,(%esp)
 841bcc7:	e8 74 1f 03 00       	call   844dc40 <_ZN9GameWorld16getStatisticsPvPEv>
 841bccc:	89 04 24             	mov    %eax,(%esp)
 841bccf:	e8 64 18 03 00       	call   844d538 <_ZN13StatisticsPvP6unlockEv>
 841bcd4:	b8 01 00 00 00       	mov    $0x1,%eax
 841bcd9:	8d 65 f4             	lea    -0xc(%ebp),%esp
 841bcdc:	83 c4 00             	add    $0x0,%esp
 841bcdf:	5b                   	pop    %ebx
 841bce0:	5e                   	pop    %esi
 841bce1:	5f                   	pop    %edi
 841bce2:	5d                   	pop    %ebp
 841bce3:	c3                   	ret

```

```c
// DB_StatPVPPlay2::dispatch @ 0x841ba96

/* DB_StatPVPPlay2::dispatch(int, int, Stream*) */

undefined4 DB_StatPVPPlay2::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  GameWorld *pGVar6;
  StatisticsPvP *pSVar7;
  int iVar8;
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_54 [4];
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  MySQL *local_2c;
  undefined4 *local_28;
  int local_24;
  char local_1e;
  char local_1d;
  
  pGVar6 = (GameWorld *)G_GameWorld();
  pSVar7 = (StatisticsPvP *)GameWorld::getStatisticsPvP(pGVar6);
  StatisticsPvP::lock(pSVar7);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar6 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsPvP(pGVar6);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::begin(local_50);
  pGVar6 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsPvP(pGVar6);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::end(local_54);
  do {
    cVar5 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                          *)local_50,(_Rb_tree_iterator *)local_54);
    if (cVar5 == '\0') {
      pGVar6 = (GameWorld *)G_GameWorld();
      pSVar7 = (StatisticsPvP *)GameWorld::getStatisticsPvP(pGVar6);
      StatisticsPvP::unlock(pSVar7);
      return 1;
    }
    local_28 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
               operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                          *)local_50);
    iVar8 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                         *)local_50);
    local_24 = iVar8 + 8;
    MySQL::set_query(local_2c,
                     "inSert into pvp_status(occ_date,room_number,play_type,no_participants,occ_count) values(cast(now() as date),%d,%d,%d,%d)"
                     ,*local_28,local_28[1],*(undefined4 *)(iVar8 + 0x14),
                     *(undefined4 *)(iVar8 + 0x10));
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e == '\x01') {
LAB_0841bc37:
      uVar1 = *(undefined4 *)(local_24 + 8);
      uVar2 = *(undefined4 *)(local_24 + 0xc);
      uVar3 = local_28[1];
      uVar4 = *local_28;
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_StatPVPPlay2::dispatch(int, int, Stream*)",0x4edc
                         ,5);
      cMyTrace::operator()
                (local_3c,"pvp_status : %d ROOM %d TYPE %d Players %d Count ",uVar4,uVar3,uVar2,
                 uVar1);
    }
    else {
      MySQL::set_query(local_2c,
                       "upDate pvp_status set occ_count = occ_count + %d , no_participants = no_participants + %d where occ_date = cast(now() as date) and room_number = %d and play_type = %d"
                       ,*(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),*local_28,
                       local_28[1]);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d == '\x01') goto LAB_0841bc37;
      uVar1 = *local_28;
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_StatPVPPlay2::dispatch(int, int, Stream*)",0x4ed8
                         ,5);
      cMyTrace::operator()(local_4c,"upDate pvp_status failed at %d",uVar1);
    }
    std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
    operator++((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>> *
               )local_50);
  } while( true );
}

```

