# DB_SavePvPMissionList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843f8fa DB_SavePvPMissionList::dispatch  [0x0843f8fa-0x843fa77] ===
 843f8fa:	55                   	push   %ebp
 843f8fb:	89 e5                	mov    %esp,%ebp
 843f8fd:	57                   	push   %edi
 843f8fe:	53                   	push   %ebx
 843f8ff:	81 ec c0 01 00 00    	sub    $0x1c0,%esp
 843f905:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843f90a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843f911:	00 
 843f912:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843f919:	00 
 843f91a:	89 04 24             	mov    %eax,(%esp)
 843f91d:	e8 1c 59 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843f922:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843f925:	8b 45 14             	mov    0x14(%ebp),%eax
 843f928:	89 04 24             	mov    %eax,(%esp)
 843f92b:	e8 8c 42 01 00       	call   8453bbc <_ZN6Stream12GetOutBufferI28SIG_REQUEST_PVP_MISSION_LISTEEPT_v>
 843f930:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843f933:	8d 9d 54 fe ff ff    	lea    -0x1ac(%ebp),%ebx
 843f939:	b8 00 00 00 00       	mov    $0x0,%eax
 843f93e:	ba 66 00 00 00       	mov    $0x66,%edx
 843f943:	89 df                	mov    %ebx,%edi
 843f945:	89 d1                	mov    %edx,%ecx
 843f947:	f3 ab                	rep stos %eax,%es:(%edi)
 843f949:	c7 45 ec 98 01 00 00 	movl   $0x198,-0x14(%ebp)
 843f950:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f953:	c7 44 24 0c 4a 01 00 	movl   $0x14a,0xc(%esp)
 843f95a:	00 
 843f95b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f95f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843f962:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f966:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 843f96c:	89 04 24             	mov    %eax,(%esp)
 843f96f:	e8 ab 26 27 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 843f974:	83 f0 01             	xor    $0x1,%eax
 843f977:	84 c0                	test   %al,%al
 843f979:	74 0a                	je     843f985 <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x8b>
 843f97b:	b8 00 00 00 00       	mov    $0x0,%eax
 843f980:	e9 e8 00 00 00       	jmp    843fa6d <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x173>
 843f985:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f988:	8b 18                	mov    (%eax),%ebx
 843f98a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843f98d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843f991:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 843f997:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f99b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843f9a2:	00 
 843f9a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f9a6:	89 04 24             	mov    %eax,(%esp)
 843f9a9:	e8 7c 4b fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843f9ae:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843f9b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f9b6:	c7 44 24 04 7c 5a c5 	movl   $0x8c55a7c,0x4(%esp)
 843f9bd:	08 
 843f9be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f9c1:	89 04 24             	mov    %eax,(%esp)
 843f9c4:	e8 f7 47 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f9c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f9d0:	00 
 843f9d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f9d4:	89 04 24             	mov    %eax,(%esp)
 843f9d7:	e8 4a 49 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f9dc:	83 f0 01             	xor    $0x1,%eax
 843f9df:	84 c0                	test   %al,%al
 843f9e1:	74 0a                	je     843f9ed <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0xf3>
 843f9e3:	b8 00 00 00 00       	mov    $0x0,%eax
 843f9e8:	e9 80 00 00 00       	jmp    843fa6d <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x173>
 843f9ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f9f0:	89 04 24             	mov    %eax,(%esp)
 843f9f3:	e8 18 49 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843f9f8:	09 d0                	or     %edx,%eax
 843f9fa:	85 c0                	test   %eax,%eax
 843f9fc:	0f 94 c0             	sete   %al
 843f9ff:	84 c0                	test   %al,%al
 843fa01:	74 65                	je     843fa68 <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x16e>
 843fa03:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843fa06:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843fa0a:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 843fa10:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fa14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843fa1b:	00 
 843fa1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843fa1f:	89 04 24             	mov    %eax,(%esp)
 843fa22:	e8 03 4b fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843fa27:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843fa2a:	8b 12                	mov    (%edx),%edx
 843fa2c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843fa30:	89 54 24 08          	mov    %edx,0x8(%esp)
 843fa34:	c7 44 24 04 c0 5a c5 	movl   $0x8c55ac0,0x4(%esp)
 843fa3b:	08 
 843fa3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843fa3f:	89 04 24             	mov    %eax,(%esp)
 843fa42:	e8 79 47 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843fa47:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843fa4e:	00 
 843fa4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843fa52:	89 04 24             	mov    %eax,(%esp)
 843fa55:	e8 cc 48 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843fa5a:	83 f0 01             	xor    $0x1,%eax
 843fa5d:	84 c0                	test   %al,%al
 843fa5f:	74 07                	je     843fa68 <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x16e>
 843fa61:	b8 00 00 00 00       	mov    $0x0,%eax
 843fa66:	eb 05                	jmp    843fa6d <_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream+0x173>
 843fa68:	b8 01 00 00 00       	mov    $0x1,%eax
 843fa6d:	81 c4 c0 01 00 00    	add    $0x1c0,%esp
 843fa73:	5b                   	pop    %ebx
 843fa74:	5f                   	pop    %edi
 843fa75:	5d                   	pop    %ebp
 843fa76:	c3                   	ret
 843fa77:	90                   	nop

```

```c
// DB_SavePvPMissionList::dispatch @ 0x843f8fa

/* DB_SavePvPMissionList::dispatch(int, int, Stream*) */

undefined4 DB_SavePvPMissionList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_1b0 [408];
  uint local_18;
  MySQL *local_14;
  SIG_REQUEST_PVP_MISSION_LIST *local_10;
  
  bVar6 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = Stream::GetOutBuffer<SIG_REQUEST_PVP_MISSION_LIST>(in_stack_00000010);
  pcVar5 = local_1b0;
  for (iVar4 = 0x66; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  local_18 = 0x198;
  cVar1 = compress_zip(local_1b0,&local_18,(char *)local_10,0x14a);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)local_10;
    uVar3 = MySQL::blob_to_str(local_14,0,local_1b0,local_18);
    MySQL::set_query(local_14,"upDate fair_pvp_score set pvp_mission_info=\'%s\' where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar7 = MySQL::getAffectedRowCount(local_14);
      if (lVar7 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,local_1b0,local_18);
        MySQL::set_query(local_14,
                         "inSert into fair_pvp_score(charac_no, pvp_mission_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_10,uVar2);
        cVar1 = MySQL::exec(local_14,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
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

