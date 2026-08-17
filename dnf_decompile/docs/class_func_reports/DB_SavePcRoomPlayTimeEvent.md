# DB_SavePcRoomPlayTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08447992 DB_SavePcRoomPlayTimeEvent::dispatch  [0x08447992-0x8447bcf] ===
 8447992:	55                   	push   %ebp
 8447993:	89 e5                	mov    %esp,%ebp
 8447995:	57                   	push   %edi
 8447996:	56                   	push   %esi
 8447997:	53                   	push   %ebx
 8447998:	83 ec 3c             	sub    $0x3c,%esp
 844799b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84479a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84479a7:	00 
 84479a8:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84479af:	00 
 84479b0:	89 04 24             	mov    %eax,(%esp)
 84479b3:	e8 86 d8 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84479b8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84479bb:	8b 45 14             	mov    0x14(%ebp),%eax
 84479be:	89 04 24             	mov    %eax,(%esp)
 84479c1:	e8 a2 cb 00 00       	call   8454568 <_ZN6Stream12GetOutBufferI26SIG_SAVE_PC_ROOM_PLAY_TIMEEEPT_v>
 84479c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84479c9:	e8 cd 47 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84479ce:	89 04 24             	mov    %eax,(%esp)
 84479d1:	e8 8c 91 cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84479d6:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 84479dd:	00 
 84479de:	89 04 24             	mov    %eax,(%esp)
 84479e1:	e8 2a 37 cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 84479e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84479ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84479ed:	89 04 24             	mov    %eax,(%esp)
 84479f0:	e8 bb ff 2b 00       	call   87079b0 <_ZNSsC1ERKSs>
 84479f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84479f8:	8b 00                	mov    (%eax),%eax
 84479fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447a01:	00 
 8447a02:	89 04 24             	mov    %eax,(%esp)
 8447a05:	e8 41 16 cc ff       	call   810904b <_Z14NumberToStringji>
 8447a0a:	89 c3                	mov    %eax,%ebx
 8447a0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447a0f:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8447a13:	0f b6 f8             	movzbl %al,%edi
 8447a16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447a19:	8b 70 04             	mov    0x4(%eax),%esi
 8447a1c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8447a1f:	89 04 24             	mov    %eax,(%esp)
 8447a22:	e8 89 70 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8447a27:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8447a2b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8447a2f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8447a33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447a37:	c7 44 24 04 f0 83 c5 	movl   $0x8c583f0,0x4(%esp)
 8447a3e:	08 
 8447a3f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8447a42:	89 04 24             	mov    %eax,(%esp)
 8447a45:	e8 76 c7 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447a4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447a51:	00 
 8447a52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8447a55:	89 04 24             	mov    %eax,(%esp)
 8447a58:	e8 c9 c8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447a5d:	83 f0 01             	xor    $0x1,%eax
 8447a60:	84 c0                	test   %al,%al
 8447a62:	74 57                	je     8447abb <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x129>
 8447a64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447a67:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8447a6b:	0f b6 c8             	movzbl %al,%ecx
 8447a6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447a71:	8b 50 04             	mov    0x4(%eax),%edx
 8447a74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447a77:	8b 00                	mov    (%eax),%eax
 8447a79:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8447a7d:	89 54 24 18          	mov    %edx,0x18(%esp)
 8447a81:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447a85:	c7 44 24 10 40 84 c5 	movl   $0x8c58440,0x10(%esp)
 8447a8c:	08 
 8447a8d:	c7 44 24 0c 5b b2 00 	movl   $0xb25b,0xc(%esp)
 8447a94:	00 
 8447a95:	c7 44 24 08 c0 b0 c5 	movl   $0x8c5b0c0,0x8(%esp)
 8447a9c:	08 
 8447a9d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447aa4:	08 
 8447aa5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447aac:	e8 59 c1 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447ab1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8447ab6:	e9 ff 00 00 00       	jmp    8447bba <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x228>
 8447abb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8447abe:	89 04 24             	mov    %eax,(%esp)
 8447ac1:	e8 4a c8 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8447ac6:	09 d0                	or     %edx,%eax
 8447ac8:	85 c0                	test   %eax,%eax
 8447aca:	0f 94 c0             	sete   %al
 8447acd:	84 c0                	test   %al,%al
 8447acf:	0f 84 c3 00 00 00    	je     8447b98 <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x206>
 8447ad5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447ad8:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8447adc:	0f b6 f8             	movzbl %al,%edi
 8447adf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447ae2:	8b 70 04             	mov    0x4(%eax),%esi
 8447ae5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447ae8:	8b 00                	mov    (%eax),%eax
 8447aea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447af1:	00 
 8447af2:	89 04 24             	mov    %eax,(%esp)
 8447af5:	e8 51 15 cc ff       	call   810904b <_Z14NumberToStringji>
 8447afa:	89 c3                	mov    %eax,%ebx
 8447afc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8447aff:	89 04 24             	mov    %eax,(%esp)
 8447b02:	e8 a9 6f 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8447b07:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8447b0b:	89 74 24 10          	mov    %esi,0x10(%esp)
 8447b0f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8447b13:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447b17:	c7 44 24 04 90 84 c5 	movl   $0x8c58490,0x4(%esp)
 8447b1e:	08 
 8447b1f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8447b22:	89 04 24             	mov    %eax,(%esp)
 8447b25:	e8 96 c6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447b2a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447b31:	00 
 8447b32:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8447b35:	89 04 24             	mov    %eax,(%esp)
 8447b38:	e8 e9 c7 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447b3d:	83 f0 01             	xor    $0x1,%eax
 8447b40:	84 c0                	test   %al,%al
 8447b42:	74 54                	je     8447b98 <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x206>
 8447b44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447b47:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8447b4b:	0f b6 c8             	movzbl %al,%ecx
 8447b4e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447b51:	8b 50 04             	mov    0x4(%eax),%edx
 8447b54:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8447b57:	8b 00                	mov    (%eax),%eax
 8447b59:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8447b5d:	89 54 24 18          	mov    %edx,0x18(%esp)
 8447b61:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447b65:	c7 44 24 10 e0 84 c5 	movl   $0x8c584e0,0x10(%esp)
 8447b6c:	08 
 8447b6d:	c7 44 24 0c 66 b2 00 	movl   $0xb266,0xc(%esp)
 8447b74:	00 
 8447b75:	c7 44 24 08 c0 b0 c5 	movl   $0x8c5b0c0,0x8(%esp)
 8447b7c:	08 
 8447b7d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447b84:	08 
 8447b85:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447b8c:	e8 79 c0 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447b91:	bb 00 00 00 00       	mov    $0x0,%ebx
 8447b96:	eb 22                	jmp    8447bba <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x228>
 8447b98:	bb 01 00 00 00       	mov    $0x1,%ebx
 8447b9d:	eb 1b                	jmp    8447bba <_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream+0x228>
 8447b9f:	89 d3                	mov    %edx,%ebx
 8447ba1:	89 c6                	mov    %eax,%esi
 8447ba3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8447ba6:	89 04 24             	mov    %eax,(%esp)
 8447ba9:	e8 32 00 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8447bae:	89 f0                	mov    %esi,%eax
 8447bb0:	89 da                	mov    %ebx,%edx
 8447bb2:	89 04 24             	mov    %eax,(%esp)
 8447bb5:	e8 96 bb 69 00       	call   8ae3750 <_Unwind_Resume>
 8447bba:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8447bbd:	89 04 24             	mov    %eax,(%esp)
 8447bc0:	e8 1b 00 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8447bc5:	89 d8                	mov    %ebx,%eax
 8447bc7:	83 c4 3c             	add    $0x3c,%esp
 8447bca:	5b                   	pop    %ebx
 8447bcb:	5e                   	pop    %esi
 8447bcc:	5f                   	pop    %edi
 8447bcd:	5d                   	pop    %ebp
 8447bce:	c3                   	ret
 8447bcf:	90                   	nop

```

```c
// DB_SavePcRoomPlayTimeEvent::dispatch @ 0x8447992

/* DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*) */

undefined4 DB_SavePcRoomPlayTimeEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_PC_ROOM_PLAY_TIME SVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar4;
  undefined4 uVar5;
  TCHAR *pTVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  string local_28;
  MySQL *local_24;
  SIG_SAVE_PC_ROOM_PLAY_TIME *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_PC_ROOM_PLAY_TIME>(in_stack_00000010);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar4 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x5c);
  std::string::string((string *)&local_28,psVar4);
                    /* try { // try from 08447a05 to 08447b90 has its CatchHandler @ 08447b9f */
  uVar5 = NumberToString(*(uint *)local_20,0);
  SVar1 = local_20[8];
  uVar2 = *(uint *)(local_20 + 4);
  pTVar6 = toTString(&local_28);
  MySQL::set_query(local_24,
                   "upDate %s set play_time = %u, reward_cnt = %u, occ_date = now() where m_id = %s"
                   ,pTVar6,uVar2,(uint)(byte)SVar1,uVar5);
  cVar3 = MySQL::exec(local_24,true);
  if (cVar3 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_24);
    if (lVar7 == 0) {
      SVar1 = local_20[8];
      uVar2 = *(uint *)(local_20 + 4);
      uVar5 = NumberToString(*(uint *)local_20,0);
      pTVar6 = toTString(&local_28);
      MySQL::set_query(local_24,
                       "inSert into %s(m_id, play_time, reward_cnt, occ_date) values(%s,%u,%u,now())"
                       ,pTVar6,uVar5,uVar2,(uint)(byte)SVar1);
      cVar3 = MySQL::exec(local_24,true);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "virtual bool DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)",0xb266,
                   "<PCROOM_PLAY_TIME_EVENT> insert_error m_id(%d), total_time(%d), reward_cnt(%d)",
                   *(uint *)local_20,*(uint *)(local_20 + 4),(uint)(byte)local_20[8]);
        uVar5 = 0;
        goto LAB_08447bba;
      }
    }
    uVar5 = 1;
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)",0xb25b,
               "<PCROOM_PLAY_TIME_EVENT> update_error m_id(%d), total_time(%d), reward_cnt(%d)",
               *(uint *)local_20,*(uint *)(local_20 + 4),(uint)(byte)local_20[8]);
    uVar5 = 0;
  }
LAB_08447bba:
  std::string::~string((string *)&local_28);
  return uVar5;
}

```

---

## makeRequest

```asm
// === 08447bd0 DB_SavePcRoomPlayTimeEvent::makeRequest  [0x08447bd0-0x8447cc3] ===
 8447bd0:	55                   	push   %ebp
 8447bd1:	89 e5                	mov    %esp,%ebp
 8447bd3:	56                   	push   %esi
 8447bd4:	53                   	push   %ebx
 8447bd5:	83 ec 30             	sub    $0x30,%esp
 8447bd8:	8b 45 10             	mov    0x10(%ebp),%eax
 8447bdb:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8447bde:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8447be3:	c7 44 24 08 70 b2 00 	movl   $0xb270,0x8(%esp)
 8447bea:	00 
 8447beb:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447bf2:	08 
 8447bf3:	89 04 24             	mov    %eax,(%esp)
 8447bf6:	e8 8b 7e e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8447bfb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8447c02:	00 
 8447c03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8447c07:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447c0a:	89 04 24             	mov    %eax,(%esp)
 8447c0d:	e8 14 10 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8447c12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447c15:	89 04 24             	mov    %eax,(%esp)
 8447c18:	e8 29 10 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8447c1d:	c7 44 24 04 ff 02 00 	movl   $0x2ff,0x4(%esp)
 8447c24:	00 
 8447c25:	89 04 24             	mov    %eax,(%esp)
 8447c28:	e8 29 10 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8447c2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447c30:	89 04 24             	mov    %eax,(%esp)
 8447c33:	e8 0e 10 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8447c38:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8447c3f:	ff 
 8447c40:	89 04 24             	mov    %eax,(%esp)
 8447c43:	e8 0e 10 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8447c48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447c4b:	89 04 24             	mov    %eax,(%esp)
 8447c4e:	e8 fb 0f c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8447c53:	89 04 24             	mov    %eax,(%esp)
 8447c56:	e8 61 c9 00 00       	call   84545bc <_ZN12CStreamGuard11GetInBufferI26SIG_SAVE_PC_ROOM_PLAY_TIMEEEPT_v>
 8447c5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8447c5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447c61:	8b 55 08             	mov    0x8(%ebp),%edx
 8447c64:	89 10                	mov    %edx,(%eax)
 8447c66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447c69:	8b 55 0c             	mov    0xc(%ebp),%edx
 8447c6c:	89 50 04             	mov    %edx,0x4(%eax)
 8447c6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447c72:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8447c76:	88 50 08             	mov    %dl,0x8(%eax)
 8447c79:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8447c7e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8447c81:	89 54 24 08          	mov    %edx,0x8(%esp)
 8447c85:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8447c8c:	00 
 8447c8d:	89 04 24             	mov    %eax,(%esp)
 8447c90:	e8 49 93 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8447c95:	eb 1b                	jmp    8447cb2 <_ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh+0xe2>
 8447c97:	89 d3                	mov    %edx,%ebx
 8447c99:	89 c6                	mov    %eax,%esi
 8447c9b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447c9e:	89 04 24             	mov    %eax,(%esp)
 8447ca1:	e8 2c 4c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8447ca6:	89 f0                	mov    %esi,%eax
 8447ca8:	89 da                	mov    %ebx,%edx
 8447caa:	89 04 24             	mov    %eax,(%esp)
 8447cad:	e8 9e ba 69 00       	call   8ae3750 <_Unwind_Resume>
 8447cb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447cb5:	89 04 24             	mov    %eax,(%esp)
 8447cb8:	e8 15 4c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8447cbd:	83 c4 30             	add    $0x30,%esp
 8447cc0:	5b                   	pop    %ebx
 8447cc1:	5e                   	pop    %esi
 8447cc2:	5d                   	pop    %ebp
 8447cc3:	c3                   	ret

```

```c
// DB_SavePcRoomPlayTimeEvent::makeRequest @ 0x8447bd0

/* DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char) */

void DB_SavePcRoomPlayTimeEvent::makeRequest(uint param_1,uint param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_PC_ROOM_PLAY_TIME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb270);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08447c28 to 08447c94 has its CatchHandler @ 08447c97 */
  CStreamGuard::operator<<(pCVar2,0x2ff);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_PC_ROOM_PLAY_TIME>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  local_10[8] = (SIG_SAVE_PC_ROOM_PLAY_TIME)param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

