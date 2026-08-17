# DB_ReportMannerlessUser_Upgrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084276b0 DB_ReportMannerlessUser_Upgrade::dispatch  [0x084276b0-0x8427969] ===
 84276b0:	55                   	push   %ebp
 84276b1:	89 e5                	mov    %esp,%ebp
 84276b3:	57                   	push   %edi
 84276b4:	56                   	push   %esi
 84276b5:	53                   	push   %ebx
 84276b6:	81 ec 8c 0a 00 00    	sub    $0xa8c,%esp
 84276bc:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84276c3:	8b 45 14             	mov    0x14(%ebp),%eax
 84276c6:	89 04 24             	mov    %eax,(%esp)
 84276c9:	e8 c4 aa 02 00       	call   8452192 <_ZN6Stream12GetOutBufferI33Packet_Mannerless_User_AccusationEEPT_v>
 84276ce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84276d1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84276d5:	75 0a                	jne    84276e1 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x31>
 84276d7:	b8 00 00 00 00       	mov    $0x0,%eax
 84276dc:	e9 7d 02 00 00       	jmp    842795e <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x2ae>
 84276e1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84276e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84276ed:	00 
 84276ee:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84276f5:	00 
 84276f6:	89 04 24             	mov    %eax,(%esp)
 84276f9:	e8 40 db fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84276fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8427701:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8427704:	89 04 24             	mov    %eax,(%esp)
 8427707:	e8 44 60 c5 ff       	call   807d750 <time@plt>
 842770c:	8d 95 a2 f5 ff ff    	lea    -0xa5e(%ebp),%edx
 8427712:	bb 00 08 00 00       	mov    $0x800,%ebx
 8427717:	b8 00 00 00 00       	mov    $0x0,%eax
 842771c:	89 d1                	mov    %edx,%ecx
 842771e:	83 e1 02             	and    $0x2,%ecx
 8427721:	85 c9                	test   %ecx,%ecx
 8427723:	74 09                	je     842772e <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x7e>
 8427725:	66 89 02             	mov    %ax,(%edx)
 8427728:	83 c2 02             	add    $0x2,%edx
 842772b:	83 eb 02             	sub    $0x2,%ebx
 842772e:	89 d9                	mov    %ebx,%ecx
 8427730:	c1 e9 02             	shr    $0x2,%ecx
 8427733:	89 d7                	mov    %edx,%edi
 8427735:	f3 ab                	rep stos %eax,%es:(%edi)
 8427737:	89 fa                	mov    %edi,%edx
 8427739:	89 d9                	mov    %ebx,%ecx
 842773b:	83 e1 02             	and    $0x2,%ecx
 842773e:	85 c9                	test   %ecx,%ecx
 8427740:	74 06                	je     8427748 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x98>
 8427742:	66 89 02             	mov    %ax,(%edx)
 8427745:	83 c2 02             	add    $0x2,%edx
 8427748:	89 d9                	mov    %ebx,%ecx
 842774a:	83 e1 01             	and    $0x1,%ecx
 842774d:	85 c9                	test   %ecx,%ecx
 842774f:	74 05                	je     8427756 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0xa6>
 8427751:	88 02                	mov    %al,(%edx)
 8427753:	83 c2 01             	add    $0x1,%edx
 8427756:	8d 55 a1             	lea    -0x5f(%ebp),%edx
 8427759:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 842775e:	b8 00 00 00 00       	mov    $0x0,%eax
 8427763:	89 d1                	mov    %edx,%ecx
 8427765:	83 e1 01             	and    $0x1,%ecx
 8427768:	85 c9                	test   %ecx,%ecx
 842776a:	74 08                	je     8427774 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0xc4>
 842776c:	88 02                	mov    %al,(%edx)
 842776e:	83 c2 01             	add    $0x1,%edx
 8427771:	83 eb 01             	sub    $0x1,%ebx
 8427774:	89 d1                	mov    %edx,%ecx
 8427776:	83 e1 02             	and    $0x2,%ecx
 8427779:	85 c9                	test   %ecx,%ecx
 842777b:	74 09                	je     8427786 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0xd6>
 842777d:	66 89 02             	mov    %ax,(%edx)
 8427780:	83 c2 02             	add    $0x2,%edx
 8427783:	83 eb 02             	sub    $0x2,%ebx
 8427786:	89 d9                	mov    %ebx,%ecx
 8427788:	c1 e9 02             	shr    $0x2,%ecx
 842778b:	89 d7                	mov    %edx,%edi
 842778d:	f3 ab                	rep stos %eax,%es:(%edi)
 842778f:	89 fa                	mov    %edi,%edx
 8427791:	89 d9                	mov    %ebx,%ecx
 8427793:	83 e1 02             	and    $0x2,%ecx
 8427796:	85 c9                	test   %ecx,%ecx
 8427798:	74 06                	je     84277a0 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0xf0>
 842779a:	66 89 02             	mov    %ax,(%edx)
 842779d:	83 c2 02             	add    $0x2,%edx
 84277a0:	89 d9                	mov    %ebx,%ecx
 84277a2:	83 e1 01             	and    $0x1,%ecx
 84277a5:	85 c9                	test   %ecx,%ecx
 84277a7:	74 05                	je     84277ae <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0xfe>
 84277a9:	88 02                	mov    %al,(%edx)
 84277ab:	83 c2 01             	add    $0x1,%edx
 84277ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84277b1:	83 c0 40             	add    $0x40,%eax
 84277b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84277b8:	8d 45 a1             	lea    -0x5f(%ebp),%eax
 84277bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84277bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84277c2:	89 04 24             	mov    %eax,(%esp)
 84277c5:	e8 e0 d0 fc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 84277ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84277cd:	8b 40 12             	mov    0x12(%eax),%eax
 84277d0:	89 04 24             	mov    %eax,(%esp)
 84277d3:	e8 f2 49 e0 ff       	call   822c1ca <_ZN33Packet_Mannerless_User_Accusation24isNeedTypeForChattingMsgEi>
 84277d8:	84 c0                	test   %al,%al
 84277da:	0f 84 d8 00 00 00    	je     84278b8 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x208>
 84277e0:	8d 95 a2 fd ff ff    	lea    -0x25e(%ebp),%edx
 84277e6:	bb ff 01 00 00       	mov    $0x1ff,%ebx
 84277eb:	b8 00 00 00 00       	mov    $0x0,%eax
 84277f0:	89 d1                	mov    %edx,%ecx
 84277f2:	83 e1 02             	and    $0x2,%ecx
 84277f5:	85 c9                	test   %ecx,%ecx
 84277f7:	74 09                	je     8427802 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x152>
 84277f9:	66 89 02             	mov    %ax,(%edx)
 84277fc:	83 c2 02             	add    $0x2,%edx
 84277ff:	83 eb 02             	sub    $0x2,%ebx
 8427802:	89 d9                	mov    %ebx,%ecx
 8427804:	c1 e9 02             	shr    $0x2,%ecx
 8427807:	89 d7                	mov    %edx,%edi
 8427809:	f3 ab                	rep stos %eax,%es:(%edi)
 842780b:	89 fa                	mov    %edi,%edx
 842780d:	89 d9                	mov    %ebx,%ecx
 842780f:	83 e1 02             	and    $0x2,%ecx
 8427812:	85 c9                	test   %ecx,%ecx
 8427814:	74 06                	je     842781c <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x16c>
 8427816:	66 89 02             	mov    %ax,(%edx)
 8427819:	83 c2 02             	add    $0x2,%edx
 842781c:	89 d9                	mov    %ebx,%ecx
 842781e:	83 e1 01             	and    $0x1,%ecx
 8427821:	85 c9                	test   %ecx,%ecx
 8427823:	74 05                	je     842782a <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x17a>
 8427825:	88 02                	mov    %al,(%edx)
 8427827:	83 c2 01             	add    $0x1,%edx
 842782a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842782d:	83 c0 5e             	add    $0x5e,%eax
 8427830:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427834:	8d 85 a2 fd ff ff    	lea    -0x25e(%ebp),%eax
 842783a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842783e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427841:	89 04 24             	mov    %eax,(%esp)
 8427844:	e8 61 d0 fc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8427849:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842784c:	8b 40 1a             	mov    0x1a(%eax),%eax
 842784f:	89 c6                	mov    %eax,%esi
 8427851:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427854:	8d 78 22             	lea    0x22(%eax),%edi
 8427857:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842785a:	8b 40 16             	mov    0x16(%eax),%eax
 842785d:	89 c3                	mov    %eax,%ebx
 842785f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427862:	8b 40 1e             	mov    0x1e(%eax),%eax
 8427865:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842786c:	00 
 842786d:	89 04 24             	mov    %eax,(%esp)
 8427870:	e8 d6 17 ce ff       	call   810904b <_Z14NumberToStringji>
 8427875:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8427878:	8b 52 12             	mov    0x12(%edx),%edx
 842787b:	8d 8d a2 fd ff ff    	lea    -0x25e(%ebp),%ecx
 8427881:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8427885:	8d 4d a1             	lea    -0x5f(%ebp),%ecx
 8427888:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 842788c:	89 74 24 18          	mov    %esi,0x18(%esp)
 8427890:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8427894:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8427898:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842789c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84278a0:	c7 44 24 04 10 eb c4 	movl   $0x8c4eb10,0x4(%esp)
 84278a7:	08 
 84278a8:	8d 85 a2 f5 ff ff    	lea    -0xa5e(%ebp),%eax
 84278ae:	89 04 24             	mov    %eax,(%esp)
 84278b1:	e8 8a 6b c5 ff       	call   807e440 <sprintf@plt>
 84278b6:	eb 63                	jmp    842791b <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x26b>
 84278b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84278bb:	8b 40 1a             	mov    0x1a(%eax),%eax
 84278be:	89 c6                	mov    %eax,%esi
 84278c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84278c3:	8d 78 22             	lea    0x22(%eax),%edi
 84278c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84278c9:	8b 40 16             	mov    0x16(%eax),%eax
 84278cc:	89 c3                	mov    %eax,%ebx
 84278ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84278d1:	8b 40 1e             	mov    0x1e(%eax),%eax
 84278d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84278db:	00 
 84278dc:	89 04 24             	mov    %eax,(%esp)
 84278df:	e8 67 17 ce ff       	call   810904b <_Z14NumberToStringji>
 84278e4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84278e7:	8b 52 12             	mov    0x12(%edx),%edx
 84278ea:	8d 4d a1             	lea    -0x5f(%ebp),%ecx
 84278ed:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84278f1:	89 74 24 18          	mov    %esi,0x18(%esp)
 84278f5:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84278f9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84278fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427901:	89 54 24 08          	mov    %edx,0x8(%esp)
 8427905:	c7 44 24 04 40 eb c4 	movl   $0x8c4eb40,0x4(%esp)
 842790c:	08 
 842790d:	8d 85 a2 f5 ff ff    	lea    -0xa5e(%ebp),%eax
 8427913:	89 04 24             	mov    %eax,(%esp)
 8427916:	e8 25 6b c5 ff       	call   807e440 <sprintf@plt>
 842791b:	8d 85 a2 f5 ff ff    	lea    -0xa5e(%ebp),%eax
 8427921:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427925:	c7 44 24 04 74 eb c4 	movl   $0x8c4eb74,0x4(%esp)
 842792c:	08 
 842792d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427930:	89 04 24             	mov    %eax,(%esp)
 8427933:	e8 88 c8 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8427938:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842793f:	00 
 8427940:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427943:	89 04 24             	mov    %eax,(%esp)
 8427946:	e8 db c9 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842794b:	83 f0 01             	xor    $0x1,%eax
 842794e:	84 c0                	test   %al,%al
 8427950:	74 07                	je     8427959 <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x2a9>
 8427952:	b8 00 00 00 00       	mov    $0x0,%eax
 8427957:	eb 05                	jmp    842795e <_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream+0x2ae>
 8427959:	b8 01 00 00 00       	mov    $0x1,%eax
 842795e:	81 c4 8c 0a 00 00    	add    $0xa8c,%esp
 8427964:	5b                   	pop    %ebx
 8427965:	5e                   	pop    %esi
 8427966:	5f                   	pop    %edi
 8427967:	5d                   	pop    %ebp
 8427968:	c3                   	ret
 8427969:	90                   	nop

```

```c
// DB_ReportMannerlessUser_Upgrade::dispatch @ 0x84276b0

/* WARNING: Removing unreachable block (ram,0x08427751) */
/* DB_ReportMannerlessUser_Upgrade::dispatch(int, int, Stream*) */

undefined4 DB_ReportMannerlessUser_Upgrade::dispatch(int param_1,int param_2,Stream *param_3)

{
  Packet_Mannerless_User_Accusation *pPVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  Stream *in_stack_00000010;
  char acStackY_124a [1966];
  undefined1 local_a62 [2048];
  char local_262 [511];
  char local_63;
  char local_62 [58];
  time_t local_28;
  Packet_Mannerless_User_Accusation *local_24;
  MySQL *local_20;
  
  bVar11 = 0;
  local_24 = (Packet_Mannerless_User_Accusation *)0x0;
  local_24 = Stream::GetOutBuffer<Packet_Mannerless_User_Accusation>(in_stack_00000010);
  if (local_24 == (Packet_Mannerless_User_Accusation *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    time(&local_28);
    puVar7 = (undefined4 *)local_a62;
    uVar9 = 0x800;
    bVar10 = ((uint)puVar7 & 2) != 0;
    if (bVar10) {
      local_a62._0_2_ = 0;
      puVar7 = (undefined4 *)(local_a62 + 2);
      uVar9 = 0x7fe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
    }
    if (bVar10) {
      *(undefined2 *)puVar7 = 0;
    }
    pcVar8 = &local_63;
    uVar9 = 0x3b;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_63 = '\0';
      pcVar8 = local_62;
      uVar9 = 0x3a;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    MySQL::escape_string(local_20,&local_63,(char *)(local_24 + 0x40));
    cVar3 = Packet_Mannerless_User_Accusation::isNeedTypeForChattingMsg(*(int *)(local_24 + 0x12));
    if (cVar3 == '\0') {
      uVar4 = *(undefined4 *)(local_24 + 0x1a);
      pPVar1 = local_24 + 0x22;
      uVar2 = *(undefined4 *)(local_24 + 0x16);
      uVar5 = NumberToString(*(uint *)(local_24 + 0x1e),0);
      sprintf(local_a62,"values(%d, %s, %d, \'%s\', %d, \'%s\', now(), \'NULL\')",
              *(undefined4 *)(local_24 + 0x12),uVar5,uVar2,pPVar1,uVar4,&local_63);
    }
    else {
      pcVar8 = local_262;
      uVar9 = 0x1ff;
      bVar10 = ((uint)pcVar8 & 2) != 0;
      if (bVar10) {
        local_262[0] = '\0';
        local_262[1] = '\0';
        pcVar8 = local_262 + 2;
        uVar9 = 0x1fd;
      }
      for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if (!bVar10) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      *pcVar8 = '\0';
      MySQL::escape_string(local_20,local_262,(char *)(local_24 + 0x5e));
      uVar4 = *(undefined4 *)(local_24 + 0x1a);
      pPVar1 = local_24 + 0x22;
      uVar2 = *(undefined4 *)(local_24 + 0x16);
      uVar5 = NumberToString(*(uint *)(local_24 + 0x1e),0);
      sprintf(local_a62,"values(%d, %s, %d, \'%s\', %d, \'%s\', now(), \'%s\')",
              *(undefined4 *)(local_24 + 0x12),uVar5,uVar2,pPVar1,uVar4,&local_63,local_262);
    }
    MySQL::set_query(local_20,
                     "inSert into charac_accusation(accusation_type, m_id, server_id, charac_name, server_id_accu, charac_name_accu, occ_time, chatting_msg) %s"
                     ,local_a62);
    cVar3 = MySQL::exec(local_20,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

