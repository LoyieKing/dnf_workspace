# DB_GatheringParyStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## dispatch

```asm
// === 08421aea DB_GatheringParyStatus::dispatch  [0x08421aea-0x8421af3] ===
 8421aea:	55                   	push   %ebp
 8421aeb:	89 e5                	mov    %esp,%ebp
 8421aed:	b8 01 00 00 00       	mov    $0x1,%eax
 8421af2:	5d                   	pop    %ebp
 8421af3:	c3                   	ret

```

```c
// DB_GatheringParyStatus::dispatch @ 0x8421aea

/* DB_GatheringParyStatus::dispatch(int, int, Stream*) */

undefined4 DB_GatheringParyStatus::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

---

## save_dnf_party_ping_history

```asm
// === 084217b6 DB_GatheringParyStatus::save_dnf_party_ping_history  [0x084217b6-0x8421ae9] ===
 84217b6:	55                   	push   %ebp
 84217b7:	89 e5                	mov    %esp,%ebp
 84217b9:	57                   	push   %edi
 84217ba:	56                   	push   %esi
 84217bb:	53                   	push   %ebx
 84217bc:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 84217c2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84217c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84217ce:	00 
 84217cf:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84217d6:	00 
 84217d7:	89 04 24             	mov    %eax,(%esp)
 84217da:	e8 5f 3a fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84217df:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84217e2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84217e9:	e9 ab 00 00 00       	jmp    8421899 <_ZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUS+0xe3>
 84217ee:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84217f1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84217f4:	89 d0                	mov    %edx,%eax
 84217f6:	01 c0                	add    %eax,%eax
 84217f8:	01 d0                	add    %edx,%eax
 84217fa:	c1 e0 02             	shl    $0x2,%eax
 84217fd:	01 d0                	add    %edx,%eax
 84217ff:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8421802:	05 6c 01 00 00       	add    $0x16c,%eax
 8421807:	0f b6 00             	movzbl (%eax),%eax
 842180a:	0f b6 f0             	movzbl %al,%esi
 842180d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8421810:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8421813:	89 d0                	mov    %edx,%eax
 8421815:	01 c0                	add    %eax,%eax
 8421817:	01 d0                	add    %edx,%eax
 8421819:	c1 e0 02             	shl    $0x2,%eax
 842181c:	01 d0                	add    %edx,%eax
 842181e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8421821:	05 6b 01 00 00       	add    $0x16b,%eax
 8421826:	0f b6 00             	movzbl (%eax),%eax
 8421829:	0f b6 d8             	movzbl %al,%ebx
 842182c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842182f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8421832:	89 d0                	mov    %edx,%eax
 8421834:	01 c0                	add    %eax,%eax
 8421836:	01 d0                	add    %edx,%eax
 8421838:	c1 e0 02             	shl    $0x2,%eax
 842183b:	01 d0                	add    %edx,%eax
 842183d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8421840:	05 6a 01 00 00       	add    $0x16a,%eax
 8421845:	0f b6 00             	movzbl (%eax),%eax
 8421848:	0f b6 c8             	movzbl %al,%ecx
 842184b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842184e:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8421851:	89 d0                	mov    %edx,%eax
 8421853:	01 c0                	add    %eax,%eax
 8421855:	01 d0                	add    %edx,%eax
 8421857:	c1 e0 02             	shl    $0x2,%eax
 842185a:	01 d0                	add    %edx,%eax
 842185c:	8d 04 07             	lea    (%edi,%eax,1),%eax
 842185f:	05 69 01 00 00       	add    $0x169,%eax
 8421864:	0f b6 00             	movzbl (%eax),%eax
 8421867:	0f b6 d0             	movzbl %al,%edx
 842186a:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 842186d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8421870:	c1 e7 04             	shl    $0x4,%edi
 8421873:	01 f8                	add    %edi,%eax
 8421875:	89 74 24 14          	mov    %esi,0x14(%esp)
 8421879:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842187d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8421881:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421885:	c7 44 24 04 53 ca c4 	movl   $0x8c4ca53,0x4(%esp)
 842188c:	08 
 842188d:	89 04 24             	mov    %eax,(%esp)
 8421890:	e8 ab cb c5 ff       	call   807e440 <sprintf@plt>
 8421895:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8421899:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 842189d:	0f 9e c0             	setle  %al
 84218a0:	84 c0                	test   %al,%al
 84218a2:	0f 85 46 ff ff ff    	jne    84217ee <_ZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUS+0x38>
 84218a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84218ab:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 84218af:	0f b6 c0             	movzbl %al,%eax
 84218b2:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 84218b8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84218bb:	83 c0 30             	add    $0x30,%eax
 84218be:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84218c4:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84218c7:	83 c0 20             	add    $0x20,%eax
 84218ca:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 84218d0:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84218d3:	83 c0 10             	add    $0x10,%eax
 84218d6:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 84218dc:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84218df:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 84218e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84218e8:	8b 40 1c             	mov    0x1c(%eax),%eax
 84218eb:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 84218f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84218f4:	8b 40 18             	mov    0x18(%eax),%eax
 84218f7:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 84218fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421900:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 8421906:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 842190c:	8b 45 0c             	mov    0xc(%ebp),%eax
 842190f:	8b 80 88 01 00 00    	mov    0x188(%eax),%eax
 8421915:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 842191b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842191e:	0f b6 80 87 01 00 00 	movzbl 0x187(%eax),%eax
 8421925:	0f b6 c0             	movzbl %al,%eax
 8421928:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 842192e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421931:	8b 80 7f 01 00 00    	mov    0x17f(%eax),%eax
 8421937:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 842193d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421940:	8b 80 7b 01 00 00    	mov    0x17b(%eax),%eax
 8421946:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 842194c:	8b 45 0c             	mov    0xc(%ebp),%eax
 842194f:	0f b6 80 7a 01 00 00 	movzbl 0x17a(%eax),%eax
 8421956:	0f b6 c0             	movzbl %al,%eax
 8421959:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 842195f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421962:	8b 80 72 01 00 00    	mov    0x172(%eax),%eax
 8421968:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 842196e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421971:	8b 80 6e 01 00 00    	mov    0x16e(%eax),%eax
 8421977:	89 45 80             	mov    %eax,-0x80(%ebp)
 842197a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842197d:	0f b6 80 6d 01 00 00 	movzbl 0x16d(%eax),%eax
 8421984:	0f b6 c0             	movzbl %al,%eax
 8421987:	89 45 84             	mov    %eax,-0x7c(%ebp)
 842198a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842198d:	8b b8 65 01 00 00    	mov    0x165(%eax),%edi
 8421993:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421996:	8b b0 61 01 00 00    	mov    0x161(%eax),%esi
 842199c:	8b 45 0c             	mov    0xc(%ebp),%eax
 842199f:	0f b6 80 60 01 00 00 	movzbl 0x160(%eax),%eax
 84219a6:	0f b6 d8             	movzbl %al,%ebx
 84219a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84219ac:	8b 40 10             	mov    0x10(%eax),%eax
 84219af:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84219b6:	00 
 84219b7:	89 04 24             	mov    %eax,(%esp)
 84219ba:	e8 8c 76 ce ff       	call   810904b <_Z14NumberToStringji>
 84219bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 84219c2:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
 84219c8:	89 4c 24 58          	mov    %ecx,0x58(%esp)
 84219cc:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 84219d2:	89 4c 24 54          	mov    %ecx,0x54(%esp)
 84219d6:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 84219dc:	89 4c 24 50          	mov    %ecx,0x50(%esp)
 84219e0:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 84219e6:	89 4c 24 4c          	mov    %ecx,0x4c(%esp)
 84219ea:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 84219f0:	89 4c 24 48          	mov    %ecx,0x48(%esp)
 84219f4:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 84219fa:	89 4c 24 44          	mov    %ecx,0x44(%esp)
 84219fe:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 8421a04:	89 4c 24 40          	mov    %ecx,0x40(%esp)
 8421a08:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 8421a0e:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 8421a12:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 8421a18:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8421a1c:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 8421a22:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8421a26:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 8421a2c:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8421a30:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 8421a36:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 8421a3a:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 8421a40:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8421a44:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 8421a4a:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8421a4e:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 8421a51:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8421a55:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 8421a58:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8421a5c:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8421a60:	89 74 24 14          	mov    %esi,0x14(%esp)
 8421a64:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8421a68:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8421a6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421a70:	c7 44 24 04 a0 ce c4 	movl   $0x8c4cea0,0x4(%esp)
 8421a77:	08 
 8421a78:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421a7b:	89 04 24             	mov    %eax,(%esp)
 8421a7e:	e8 3d 27 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421a83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421a8a:	00 
 8421a8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421a8e:	89 04 24             	mov    %eax,(%esp)
 8421a91:	e8 90 28 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421a96:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8421a99:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8421a9d:	83 f0 01             	xor    $0x1,%eax
 8421aa0:	84 c0                	test   %al,%al
 8421aa2:	74 36                	je     8421ada <_ZN22DB_GatheringParyStatus27save_dnf_party_ping_historyEP16SIG_PARTY_STATUS+0x324>
 8421aa4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8421aab:	00 
 8421aac:	c7 44 24 08 64 59 00 	movl   $0x5964,0x8(%esp)
 8421ab3:	00 
 8421ab4:	c7 44 24 04 60 c6 c5 	movl   $0x8c5c660,0x4(%esp)
 8421abb:	08 
 8421abc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8421abf:	89 04 24             	mov    %eax,(%esp)
 8421ac2:	e8 51 dc 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8421ac7:	c7 44 24 04 8e cb c4 	movl   $0x8c4cb8e,0x4(%esp)
 8421ace:	08 
 8421acf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8421ad2:	89 04 24             	mov    %eax,(%esp)
 8421ad5:	e8 ae dc 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8421ada:	b8 01 00 00 00       	mov    $0x1,%eax
 8421adf:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 8421ae5:	5b                   	pop    %ebx
 8421ae6:	5e                   	pop    %esi
 8421ae7:	5f                   	pop    %edi
 8421ae8:	5d                   	pop    %ebp
 8421ae9:	c3                   	ret

```

```c
// DB_GatheringParyStatus::save_dnf_party_ping_history @ 0x84217b6

/* DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_party_ping_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  SIG_PARTY_STATUS SVar4;
  SIG_PARTY_STATUS SVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char local_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    sprintf(local_78 + local_20 * 0x10,"%d.%d.%d.%d",(uint)(byte)param_1[local_20 * 0xd + 0x169],
            (uint)(byte)param_1[local_20 * 0xd + 0x16a],(uint)(byte)param_1[local_20 * 0xd + 0x16b],
            (uint)(byte)param_1[local_20 * 0xd + 0x16c]);
  }
  SVar1 = param_1[0x20];
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar8 = *(undefined4 *)(param_1 + 0x18c);
  uVar9 = *(undefined4 *)(param_1 + 0x188);
  SVar2 = param_1[0x187];
  uVar10 = *(undefined4 *)(param_1 + 0x17f);
  uVar11 = *(undefined4 *)(param_1 + 0x17b);
  SVar3 = param_1[0x17a];
  uVar12 = *(undefined4 *)(param_1 + 0x172);
  uVar13 = *(undefined4 *)(param_1 + 0x16e);
  SVar4 = param_1[0x16d];
  uVar14 = *(undefined4 *)(param_1 + 0x165);
  uVar15 = *(undefined4 *)(param_1 + 0x161);
  SVar5 = param_1[0x160];
  uVar16 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_28,
                   "inSert into dnf_party_ping_history(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4, end_reason) values(\'%s\',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,\'%s\',\'%s\',\'%s\',\'%s\',%d)"
                   ,param_1,uVar16,(uint)(byte)SVar5,uVar15,uVar14,(uint)(byte)SVar4,uVar13,uVar12,
                   (uint)(byte)SVar3,uVar11,uVar10,(uint)(byte)SVar2,uVar9,uVar8,uVar7,uVar6,
                   local_78,auStack_68,auStack_58,auStack_48,(uint)(byte)SVar1);
  local_21 = MySQL::exec(local_28,true);
  if (local_21 != '\x01') {
    cMyTrace::cMyTrace(local_38,
                       "bool DB_GatheringParyStatus::save_dnf_party_ping_history(SIG_PARTY_STATUS*)"
                       ,0x5964,5);
    cMyTrace::operator()(local_38,"DB_GatheringParyStatus failed");
  }
  return 1;
}

```

---

## save_dnf_party_result_history

```asm
// === 0842156a DB_GatheringParyStatus::save_dnf_party_result_history  [0x0842156a-0x84217b5] ===
 842156a:	55                   	push   %ebp
 842156b:	89 e5                	mov    %esp,%ebp
 842156d:	57                   	push   %edi
 842156e:	56                   	push   %esi
 842156f:	53                   	push   %ebx
 8421570:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8421576:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842157b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8421582:	00 
 8421583:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842158a:	00 
 842158b:	89 04 24             	mov    %eax,(%esp)
 842158e:	e8 ab 3c fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8421593:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8421596:	8b 55 10             	mov    0x10(%ebp),%edx
 8421599:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 842159c:	89 d0                	mov    %edx,%eax
 842159e:	c1 e0 02             	shl    $0x2,%eax
 84215a1:	01 d0                	add    %edx,%eax
 84215a3:	01 c0                	add    %eax,%eax
 84215a5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84215a8:	83 c0 2d             	add    $0x2d,%eax
 84215ab:	0f b6 00             	movzbl (%eax),%eax
 84215ae:	0f b6 f0             	movzbl %al,%esi
 84215b1:	8b 55 10             	mov    0x10(%ebp),%edx
 84215b4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84215b7:	89 d0                	mov    %edx,%eax
 84215b9:	c1 e0 02             	shl    $0x2,%eax
 84215bc:	01 d0                	add    %edx,%eax
 84215be:	01 c0                	add    %eax,%eax
 84215c0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84215c3:	83 c0 2c             	add    $0x2c,%eax
 84215c6:	0f b6 00             	movzbl (%eax),%eax
 84215c9:	0f b6 d8             	movzbl %al,%ebx
 84215cc:	8b 55 10             	mov    0x10(%ebp),%edx
 84215cf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84215d2:	89 d0                	mov    %edx,%eax
 84215d4:	c1 e0 02             	shl    $0x2,%eax
 84215d7:	01 d0                	add    %edx,%eax
 84215d9:	01 c0                	add    %eax,%eax
 84215db:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84215de:	83 c0 2b             	add    $0x2b,%eax
 84215e1:	0f b6 00             	movzbl (%eax),%eax
 84215e4:	0f b6 c8             	movzbl %al,%ecx
 84215e7:	8b 55 10             	mov    0x10(%ebp),%edx
 84215ea:	8b 7d 0c             	mov    0xc(%ebp),%edi
 84215ed:	89 d0                	mov    %edx,%eax
 84215ef:	c1 e0 02             	shl    $0x2,%eax
 84215f2:	01 d0                	add    %edx,%eax
 84215f4:	01 c0                	add    %eax,%eax
 84215f6:	8d 04 07             	lea    (%edi,%eax,1),%eax
 84215f9:	83 c0 2a             	add    $0x2a,%eax
 84215fc:	0f b6 00             	movzbl (%eax),%eax
 84215ff:	0f b6 c0             	movzbl %al,%eax
 8421602:	89 74 24 14          	mov    %esi,0x14(%esp)
 8421606:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842160a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 842160e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8421612:	c7 44 24 04 53 ca c4 	movl   $0x8c4ca53,0x4(%esp)
 8421619:	08 
 842161a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 842161d:	89 04 24             	mov    %eax,(%esp)
 8421620:	e8 1b ce c5 ff       	call   807e440 <sprintf@plt>
 8421625:	e8 57 ab ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842162a:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 8421630:	89 45 98             	mov    %eax,-0x68(%ebp)
 8421633:	e8 49 ab ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8421638:	8b 80 5c 03 00 00    	mov    0x35c(%eax),%eax
 842163e:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8421641:	e8 3b ab ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8421646:	05 45 03 00 00       	add    $0x345,%eax
 842164b:	89 45 a0             	mov    %eax,-0x60(%ebp)
 842164e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421651:	8b 40 22             	mov    0x22(%eax),%eax
 8421654:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8421657:	8b 45 0c             	mov    0xc(%ebp),%eax
 842165a:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 842165e:	0f b6 c0             	movzbl %al,%eax
 8421661:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8421664:	8b 55 10             	mov    0x10(%ebp),%edx
 8421667:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 842166a:	89 d0                	mov    %edx,%eax
 842166c:	c1 e0 02             	shl    $0x2,%eax
 842166f:	01 d0                	add    %edx,%eax
 8421671:	01 c0                	add    %eax,%eax
 8421673:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8421676:	83 c0 20             	add    $0x20,%eax
 8421679:	8b 40 0e             	mov    0xe(%eax),%eax
 842167c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 842167f:	8b 55 10             	mov    0x10(%ebp),%edx
 8421682:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8421685:	89 d0                	mov    %edx,%eax
 8421687:	c1 e0 02             	shl    $0x2,%eax
 842168a:	01 d0                	add    %edx,%eax
 842168c:	01 c0                	add    %eax,%eax
 842168e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8421691:	83 c0 29             	add    $0x29,%eax
 8421694:	0f b6 00             	movzbl (%eax),%eax
 8421697:	0f b6 c0             	movzbl %al,%eax
 842169a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 842169d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84216a0:	8b 40 1c             	mov    0x1c(%eax),%eax
 84216a3:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84216a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84216a9:	8b 78 18             	mov    0x18(%eax),%edi
 84216ac:	8b 55 10             	mov    0x10(%ebp),%edx
 84216af:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84216b2:	89 d0                	mov    %edx,%eax
 84216b4:	c1 e0 02             	shl    $0x2,%eax
 84216b7:	01 d0                	add    %edx,%eax
 84216b9:	01 c0                	add    %eax,%eax
 84216bb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84216be:	83 c0 28             	add    $0x28,%eax
 84216c1:	0f b6 00             	movzbl (%eax),%eax
 84216c4:	0f b6 f0             	movzbl %al,%esi
 84216c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84216ca:	8b 40 10             	mov    0x10(%eax),%eax
 84216cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84216d4:	00 
 84216d5:	89 04 24             	mov    %eax,(%esp)
 84216d8:	e8 6e 79 ce ff       	call   810904b <_Z14NumberToStringji>
 84216dd:	89 c3                	mov    %eax,%ebx
 84216df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84216e2:	8b 48 14             	mov    0x14(%eax),%ecx
 84216e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 84216e8:	8b 45 98             	mov    -0x68(%ebp),%eax
 84216eb:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84216ef:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84216f2:	89 44 24 38          	mov    %eax,0x38(%esp)
 84216f6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84216f9:	89 44 24 34          	mov    %eax,0x34(%esp)
 84216fd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8421700:	89 44 24 30          	mov    %eax,0x30(%esp)
 8421704:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8421707:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 842170b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 842170e:	89 44 24 28          	mov    %eax,0x28(%esp)
 8421712:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8421715:	89 44 24 24          	mov    %eax,0x24(%esp)
 8421719:	8b 45 b0             	mov    -0x50(%ebp),%eax
 842171c:	89 44 24 20          	mov    %eax,0x20(%esp)
 8421720:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8421723:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8421727:	89 7c 24 18          	mov    %edi,0x18(%esp)
 842172b:	89 74 24 14          	mov    %esi,0x14(%esp)
 842172f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8421733:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8421737:	89 54 24 08          	mov    %edx,0x8(%esp)
 842173b:	c7 44 24 04 78 cd c4 	movl   $0x8c4cd78,0x4(%esp)
 8421742:	08 
 8421743:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421746:	89 04 24             	mov    %eax,(%esp)
 8421749:	e8 72 2a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842174e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421755:	00 
 8421756:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421759:	89 04 24             	mov    %eax,(%esp)
 842175c:	e8 c5 2b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421761:	88 45 e7             	mov    %al,-0x19(%ebp)
 8421764:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8421768:	83 f0 01             	xor    $0x1,%eax
 842176b:	84 c0                	test   %al,%al
 842176d:	74 36                	je     84217a5 <_ZN22DB_GatheringParyStatus29save_dnf_party_result_historyEP16SIG_PARTY_STATUSi+0x23b>
 842176f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8421776:	00 
 8421777:	c7 44 24 08 0f 59 00 	movl   $0x590f,0x8(%esp)
 842177e:	00 
 842177f:	c7 44 24 04 c0 c6 c5 	movl   $0x8c5c6c0,0x4(%esp)
 8421786:	08 
 8421787:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842178a:	89 04 24             	mov    %eax,(%esp)
 842178d:	e8 86 df 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8421792:	c7 44 24 04 8e cb c4 	movl   $0x8c4cb8e,0x4(%esp)
 8421799:	08 
 842179a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842179d:	89 04 24             	mov    %eax,(%esp)
 84217a0:	e8 e3 df 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84217a5:	b8 01 00 00 00       	mov    $0x1,%eax
 84217aa:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 84217b0:	5b                   	pop    %ebx
 84217b1:	5e                   	pop    %esi
 84217b2:	5f                   	pop    %edi
 84217b3:	5d                   	pop    %ebp
 84217b4:	c3                   	ret
 84217b5:	90                   	nop

```

```c
// DB_GatheringParyStatus::save_dnf_party_result_history @ 0x842156a

/* DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_party_result_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1,int param_2)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  char local_1d;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  sprintf(local_44,"%d.%d.%d.%d",(uint)(byte)param_1[param_2 * 10 + 0x2a],
          (uint)(byte)param_1[param_2 * 10 + 0x2b],(uint)(byte)param_1[param_2 * 10 + 0x2c],
          (uint)(byte)param_1[param_2 * 10 + 0x2d]);
  iVar10 = G_CEnvironment();
  uVar4 = *(undefined4 *)(iVar10 + 0x358);
  iVar10 = G_CEnvironment();
  uVar5 = *(undefined4 *)(iVar10 + 0x35c);
  iVar10 = G_CEnvironment();
  uVar6 = *(undefined4 *)(param_1 + 0x22);
  SVar1 = param_1[0x21];
  uVar7 = *(undefined4 *)(param_1 + param_2 * 10 + 0x2e);
  SVar2 = param_1[param_2 * 10 + 0x29];
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  SVar3 = param_1[param_2 * 10 + 0x28];
  uVar11 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_24,
                   "inSert into dnf_party_result_history (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip,established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port) values(\'%s\',%d,%s,%d,now(),%d,%d,%d,\'%s\',%d, %d, %d, \'%s\', %d, %d)"
                   ,param_1,*(undefined4 *)(param_1 + 0x14),uVar11,(uint)(byte)SVar3,uVar9,uVar8,
                   (uint)(byte)SVar2,local_44,uVar7,(uint)(byte)SVar1,uVar6,iVar10 + 0x345,uVar5,
                   uVar4);
  local_1d = MySQL::exec(local_24,true);
  if (local_1d != '\x01') {
    cMyTrace::cMyTrace(local_34,
                       "bool DB_GatheringParyStatus::save_dnf_party_result_history(SIG_PARTY_STATUS*, int)"
                       ,0x590f,5);
    cMyTrace::operator()(local_34,"DB_GatheringParyStatus failed");
  }
  return 1;
}

```

---

## save_dnf_pvp_ping_history

```asm
// === 08421066 DB_GatheringParyStatus::save_dnf_pvp_ping_history  [0x08421066-0x8421569] ===
 8421066:	55                   	push   %ebp
 8421067:	89 e5                	mov    %esp,%ebp
 8421069:	57                   	push   %edi
 842106a:	56                   	push   %esi
 842106b:	53                   	push   %ebx
 842106c:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 8421072:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8421077:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842107e:	00 
 842107f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8421086:	00 
 8421087:	89 04 24             	mov    %eax,(%esp)
 842108a:	e8 af 41 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842108f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8421092:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8421099:	e9 ae 00 00 00       	jmp    842114c <_ZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUS+0xe6>
 842109e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84210a1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84210a4:	89 d0                	mov    %edx,%eax
 84210a6:	01 c0                	add    %eax,%eax
 84210a8:	01 d0                	add    %edx,%eax
 84210aa:	c1 e0 02             	shl    $0x2,%eax
 84210ad:	01 d0                	add    %edx,%eax
 84210af:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84210b2:	05 6c 01 00 00       	add    $0x16c,%eax
 84210b7:	0f b6 00             	movzbl (%eax),%eax
 84210ba:	0f b6 f0             	movzbl %al,%esi
 84210bd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84210c0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84210c3:	89 d0                	mov    %edx,%eax
 84210c5:	01 c0                	add    %eax,%eax
 84210c7:	01 d0                	add    %edx,%eax
 84210c9:	c1 e0 02             	shl    $0x2,%eax
 84210cc:	01 d0                	add    %edx,%eax
 84210ce:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84210d1:	05 6b 01 00 00       	add    $0x16b,%eax
 84210d6:	0f b6 00             	movzbl (%eax),%eax
 84210d9:	0f b6 d8             	movzbl %al,%ebx
 84210dc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84210df:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84210e2:	89 d0                	mov    %edx,%eax
 84210e4:	01 c0                	add    %eax,%eax
 84210e6:	01 d0                	add    %edx,%eax
 84210e8:	c1 e0 02             	shl    $0x2,%eax
 84210eb:	01 d0                	add    %edx,%eax
 84210ed:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84210f0:	05 6a 01 00 00       	add    $0x16a,%eax
 84210f5:	0f b6 00             	movzbl (%eax),%eax
 84210f8:	0f b6 c8             	movzbl %al,%ecx
 84210fb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84210fe:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8421101:	89 d0                	mov    %edx,%eax
 8421103:	01 c0                	add    %eax,%eax
 8421105:	01 d0                	add    %edx,%eax
 8421107:	c1 e0 02             	shl    $0x2,%eax
 842110a:	01 d0                	add    %edx,%eax
 842110c:	8d 04 07             	lea    (%edi,%eax,1),%eax
 842110f:	05 69 01 00 00       	add    $0x169,%eax
 8421114:	0f b6 00             	movzbl (%eax),%eax
 8421117:	0f b6 d0             	movzbl %al,%edx
 842111a:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 842111d:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8421123:	c1 e7 04             	shl    $0x4,%edi
 8421126:	01 f8                	add    %edi,%eax
 8421128:	89 74 24 14          	mov    %esi,0x14(%esp)
 842112c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8421130:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8421134:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421138:	c7 44 24 04 53 ca c4 	movl   $0x8c4ca53,0x4(%esp)
 842113f:	08 
 8421140:	89 04 24             	mov    %eax,(%esp)
 8421143:	e8 f8 d2 c5 ff       	call   807e440 <sprintf@plt>
 8421148:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842114c:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 8421150:	0f 9e c0             	setle  %al
 8421153:	84 c0                	test   %al,%al
 8421155:	0f 85 43 ff ff ff    	jne    842109e <_ZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUS+0x38>
 842115b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842115e:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 8421162:	0f b6 c0             	movzbl %al,%eax
 8421165:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 842116b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8421171:	83 c0 70             	add    $0x70,%eax
 8421174:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 842117a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8421180:	83 c0 60             	add    $0x60,%eax
 8421183:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8421189:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 842118f:	83 c0 50             	add    $0x50,%eax
 8421192:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 8421198:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 842119e:	83 c0 40             	add    $0x40,%eax
 84211a1:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 84211a7:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84211ad:	83 c0 30             	add    $0x30,%eax
 84211b0:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 84211b6:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84211bc:	83 c0 20             	add    $0x20,%eax
 84211bf:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 84211c5:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84211cb:	83 c0 10             	add    $0x10,%eax
 84211ce:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 84211d4:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84211da:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 84211e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84211e3:	8b 40 1c             	mov    0x1c(%eax),%eax
 84211e6:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 84211ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84211ef:	8b 40 18             	mov    0x18(%eax),%eax
 84211f2:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 84211f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84211fb:	8b 80 c0 01 00 00    	mov    0x1c0(%eax),%eax
 8421201:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 8421207:	8b 45 0c             	mov    0xc(%ebp),%eax
 842120a:	8b 80 bc 01 00 00    	mov    0x1bc(%eax),%eax
 8421210:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8421216:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421219:	0f b6 80 bb 01 00 00 	movzbl 0x1bb(%eax),%eax
 8421220:	0f b6 c0             	movzbl %al,%eax
 8421223:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 8421229:	8b 45 0c             	mov    0xc(%ebp),%eax
 842122c:	8b 80 b3 01 00 00    	mov    0x1b3(%eax),%eax
 8421232:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8421238:	8b 45 0c             	mov    0xc(%ebp),%eax
 842123b:	8b 80 af 01 00 00    	mov    0x1af(%eax),%eax
 8421241:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8421247:	8b 45 0c             	mov    0xc(%ebp),%eax
 842124a:	0f b6 80 ae 01 00 00 	movzbl 0x1ae(%eax),%eax
 8421251:	0f b6 c0             	movzbl %al,%eax
 8421254:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 842125a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842125d:	8b 80 a6 01 00 00    	mov    0x1a6(%eax),%eax
 8421263:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8421269:	8b 45 0c             	mov    0xc(%ebp),%eax
 842126c:	8b 80 a2 01 00 00    	mov    0x1a2(%eax),%eax
 8421272:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8421278:	8b 45 0c             	mov    0xc(%ebp),%eax
 842127b:	0f b6 80 a1 01 00 00 	movzbl 0x1a1(%eax),%eax
 8421282:	0f b6 c0             	movzbl %al,%eax
 8421285:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 842128b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842128e:	8b 80 99 01 00 00    	mov    0x199(%eax),%eax
 8421294:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 842129a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842129d:	8b 80 95 01 00 00    	mov    0x195(%eax),%eax
 84212a3:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 84212a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212ac:	0f b6 80 94 01 00 00 	movzbl 0x194(%eax),%eax
 84212b3:	0f b6 c0             	movzbl %al,%eax
 84212b6:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 84212bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212bf:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 84212c5:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 84212cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212ce:	8b 80 88 01 00 00    	mov    0x188(%eax),%eax
 84212d4:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 84212da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212dd:	0f b6 80 87 01 00 00 	movzbl 0x187(%eax),%eax
 84212e4:	0f b6 c0             	movzbl %al,%eax
 84212e7:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 84212ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212f0:	8b 80 7f 01 00 00    	mov    0x17f(%eax),%eax
 84212f6:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 84212fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84212ff:	8b 80 7b 01 00 00    	mov    0x17b(%eax),%eax
 8421305:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 842130b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842130e:	0f b6 80 7a 01 00 00 	movzbl 0x17a(%eax),%eax
 8421315:	0f b6 c0             	movzbl %al,%eax
 8421318:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 842131e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421321:	8b 80 72 01 00 00    	mov    0x172(%eax),%eax
 8421327:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 842132d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421330:	8b 80 6e 01 00 00    	mov    0x16e(%eax),%eax
 8421336:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 842133c:	8b 45 0c             	mov    0xc(%ebp),%eax
 842133f:	0f b6 80 6d 01 00 00 	movzbl 0x16d(%eax),%eax
 8421346:	0f b6 c0             	movzbl %al,%eax
 8421349:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 842134f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421352:	8b b8 65 01 00 00    	mov    0x165(%eax),%edi
 8421358:	8b 45 0c             	mov    0xc(%ebp),%eax
 842135b:	8b b0 61 01 00 00    	mov    0x161(%eax),%esi
 8421361:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421364:	0f b6 80 60 01 00 00 	movzbl 0x160(%eax),%eax
 842136b:	0f b6 d8             	movzbl %al,%ebx
 842136e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421371:	8b 40 10             	mov    0x10(%eax),%eax
 8421374:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842137b:	00 
 842137c:	89 04 24             	mov    %eax,(%esp)
 842137f:	e8 c7 7c ce ff       	call   810904b <_Z14NumberToStringji>
 8421384:	8b 55 0c             	mov    0xc(%ebp),%edx
 8421387:	8b 8d c8 fe ff ff    	mov    -0x138(%ebp),%ecx
 842138d:	89 8c 24 98 00 00 00 	mov    %ecx,0x98(%esp)
 8421394:	8b 8d cc fe ff ff    	mov    -0x134(%ebp),%ecx
 842139a:	89 8c 24 94 00 00 00 	mov    %ecx,0x94(%esp)
 84213a1:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 84213a7:	89 8c 24 90 00 00 00 	mov    %ecx,0x90(%esp)
 84213ae:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 84213b4:	89 8c 24 8c 00 00 00 	mov    %ecx,0x8c(%esp)
 84213bb:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 84213c1:	89 8c 24 88 00 00 00 	mov    %ecx,0x88(%esp)
 84213c8:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 84213ce:	89 8c 24 84 00 00 00 	mov    %ecx,0x84(%esp)
 84213d5:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 84213db:	89 8c 24 80 00 00 00 	mov    %ecx,0x80(%esp)
 84213e2:	8b 8d e4 fe ff ff    	mov    -0x11c(%ebp),%ecx
 84213e8:	89 4c 24 7c          	mov    %ecx,0x7c(%esp)
 84213ec:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 84213f2:	89 4c 24 78          	mov    %ecx,0x78(%esp)
 84213f6:	8b 8d ec fe ff ff    	mov    -0x114(%ebp),%ecx
 84213fc:	89 4c 24 74          	mov    %ecx,0x74(%esp)
 8421400:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 8421406:	89 4c 24 70          	mov    %ecx,0x70(%esp)
 842140a:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8421410:	89 4c 24 6c          	mov    %ecx,0x6c(%esp)
 8421414:	8b 8d f8 fe ff ff    	mov    -0x108(%ebp),%ecx
 842141a:	89 4c 24 68          	mov    %ecx,0x68(%esp)
 842141e:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8421424:	89 4c 24 64          	mov    %ecx,0x64(%esp)
 8421428:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 842142e:	89 4c 24 60          	mov    %ecx,0x60(%esp)
 8421432:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 8421438:	89 4c 24 5c          	mov    %ecx,0x5c(%esp)
 842143c:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 8421442:	89 4c 24 58          	mov    %ecx,0x58(%esp)
 8421446:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 842144c:	89 4c 24 54          	mov    %ecx,0x54(%esp)
 8421450:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 8421456:	89 4c 24 50          	mov    %ecx,0x50(%esp)
 842145a:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 8421460:	89 4c 24 4c          	mov    %ecx,0x4c(%esp)
 8421464:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 842146a:	89 4c 24 48          	mov    %ecx,0x48(%esp)
 842146e:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 8421474:	89 4c 24 44          	mov    %ecx,0x44(%esp)
 8421478:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 842147e:	89 4c 24 40          	mov    %ecx,0x40(%esp)
 8421482:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 8421488:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 842148c:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 8421492:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8421496:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 842149c:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 84214a0:	8b 8d 30 ff ff ff    	mov    -0xd0(%ebp),%ecx
 84214a6:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 84214aa:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 84214b0:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 84214b4:	8b 8d 38 ff ff ff    	mov    -0xc8(%ebp),%ecx
 84214ba:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 84214be:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 84214c4:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 84214c8:	8b 8d 40 ff ff ff    	mov    -0xc0(%ebp),%ecx
 84214ce:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 84214d2:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 84214d8:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84214dc:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84214e0:	89 74 24 14          	mov    %esi,0x14(%esp)
 84214e4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84214e8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84214ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 84214f0:	c7 44 24 04 ac cb c4 	movl   $0x8c4cbac,0x4(%esp)
 84214f7:	08 
 84214f8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84214fb:	89 04 24             	mov    %eax,(%esp)
 84214fe:	e8 bd 2c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421503:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842150a:	00 
 842150b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842150e:	89 04 24             	mov    %eax,(%esp)
 8421511:	e8 10 2e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421516:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8421519:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 842151d:	83 f0 01             	xor    $0x1,%eax
 8421520:	84 c0                	test   %al,%al
 8421522:	74 36                	je     842155a <_ZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUS+0x4f4>
 8421524:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842152b:	00 
 842152c:	c7 44 24 08 db 58 00 	movl   $0x58db,0x8(%esp)
 8421533:	00 
 8421534:	c7 44 24 04 20 c7 c5 	movl   $0x8c5c720,0x4(%esp)
 842153b:	08 
 842153c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842153f:	89 04 24             	mov    %eax,(%esp)
 8421542:	e8 d1 e1 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8421547:	c7 44 24 04 8e cb c4 	movl   $0x8c4cb8e,0x4(%esp)
 842154e:	08 
 842154f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8421552:	89 04 24             	mov    %eax,(%esp)
 8421555:	e8 2e e2 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842155a:	b8 01 00 00 00       	mov    $0x1,%eax
 842155f:	81 c4 cc 01 00 00    	add    $0x1cc,%esp
 8421565:	5b                   	pop    %ebx
 8421566:	5e                   	pop    %esi
 8421567:	5f                   	pop    %edi
 8421568:	5d                   	pop    %ebp
 8421569:	c3                   	ret

```

```c
// DB_GatheringParyStatus::save_dnf_pvp_ping_history @ 0x8421066

/* DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_pvp_ping_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  SIG_PARTY_STATUS SVar4;
  SIG_PARTY_STATUS SVar5;
  SIG_PARTY_STATUS SVar6;
  SIG_PARTY_STATUS SVar7;
  SIG_PARTY_STATUS SVar8;
  SIG_PARTY_STATUS SVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  char local_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    sprintf(local_b8 + local_20 * 0x10,"%d.%d.%d.%d",(uint)(byte)param_1[local_20 * 0xd + 0x169],
            (uint)(byte)param_1[local_20 * 0xd + 0x16a],(uint)(byte)param_1[local_20 * 0xd + 0x16b],
            (uint)(byte)param_1[local_20 * 0xd + 0x16c]);
  }
  SVar1 = param_1[0x20];
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x1c0);
  uVar13 = *(undefined4 *)(param_1 + 0x1bc);
  SVar2 = param_1[0x1bb];
  uVar14 = *(undefined4 *)(param_1 + 0x1b3);
  uVar15 = *(undefined4 *)(param_1 + 0x1af);
  SVar3 = param_1[0x1ae];
  uVar16 = *(undefined4 *)(param_1 + 0x1a6);
  uVar17 = *(undefined4 *)(param_1 + 0x1a2);
  SVar4 = param_1[0x1a1];
  uVar18 = *(undefined4 *)(param_1 + 0x199);
  uVar19 = *(undefined4 *)(param_1 + 0x195);
  SVar5 = param_1[0x194];
  uVar20 = *(undefined4 *)(param_1 + 0x18c);
  uVar21 = *(undefined4 *)(param_1 + 0x188);
  SVar6 = param_1[0x187];
  uVar22 = *(undefined4 *)(param_1 + 0x17f);
  uVar23 = *(undefined4 *)(param_1 + 0x17b);
  SVar7 = param_1[0x17a];
  uVar24 = *(undefined4 *)(param_1 + 0x172);
  uVar25 = *(undefined4 *)(param_1 + 0x16e);
  SVar8 = param_1[0x16d];
  uVar26 = *(undefined4 *)(param_1 + 0x165);
  uVar27 = *(undefined4 *)(param_1 + 0x161);
  SVar9 = param_1[0x160];
  uVar28 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_28,
                   "inSert into dnf_party_ping_history_pvp(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,nat_type_5,ping5,mtu_5,nat_type_6,ping6,mtu_6,nat_type_7,ping7,mtu_7,nat_type_8,ping8,mtu_8,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4,ip_5,ip_6,ip_7,ip_8, end_reason) values(\'%s\',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',%d)"
                   ,param_1,uVar28,(uint)(byte)SVar9,uVar27,uVar26,(uint)(byte)SVar8,uVar25,uVar24,
                   (uint)(byte)SVar7,uVar23,uVar22,(uint)(byte)SVar6,uVar21,uVar20,(uint)(byte)SVar5
                   ,uVar19,uVar18,(uint)(byte)SVar4,uVar17,uVar16,(uint)(byte)SVar3,uVar15,uVar14,
                   (uint)(byte)SVar2,uVar13,uVar12,uVar11,uVar10,local_b8,auStack_a8,auStack_98,
                   auStack_88,auStack_78,auStack_68,auStack_58,auStack_48,(uint)(byte)SVar1);
  local_21 = MySQL::exec(local_28,true);
  if (local_21 != '\x01') {
    cMyTrace::cMyTrace(local_38,
                       "bool DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*)",
                       0x58db,5);
    cMyTrace::operator()(local_38,"DB_GatheringParyStatus failed");
  }
  return 1;
}

```

---

## save_dnf_pvp_result_history

```asm
// === 08420e1a DB_GatheringParyStatus::save_dnf_pvp_result_history  [0x08420e1a-0x8421065] ===
 8420e1a:	55                   	push   %ebp
 8420e1b:	89 e5                	mov    %esp,%ebp
 8420e1d:	57                   	push   %edi
 8420e1e:	56                   	push   %esi
 8420e1f:	53                   	push   %ebx
 8420e20:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8420e26:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8420e2b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8420e32:	00 
 8420e33:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8420e3a:	00 
 8420e3b:	89 04 24             	mov    %eax,(%esp)
 8420e3e:	e8 fb 43 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8420e43:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8420e46:	8b 55 10             	mov    0x10(%ebp),%edx
 8420e49:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420e4c:	89 d0                	mov    %edx,%eax
 8420e4e:	c1 e0 02             	shl    $0x2,%eax
 8420e51:	01 d0                	add    %edx,%eax
 8420e53:	01 c0                	add    %eax,%eax
 8420e55:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420e58:	83 c0 2d             	add    $0x2d,%eax
 8420e5b:	0f b6 00             	movzbl (%eax),%eax
 8420e5e:	0f b6 f0             	movzbl %al,%esi
 8420e61:	8b 55 10             	mov    0x10(%ebp),%edx
 8420e64:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420e67:	89 d0                	mov    %edx,%eax
 8420e69:	c1 e0 02             	shl    $0x2,%eax
 8420e6c:	01 d0                	add    %edx,%eax
 8420e6e:	01 c0                	add    %eax,%eax
 8420e70:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420e73:	83 c0 2c             	add    $0x2c,%eax
 8420e76:	0f b6 00             	movzbl (%eax),%eax
 8420e79:	0f b6 d8             	movzbl %al,%ebx
 8420e7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8420e7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420e82:	89 d0                	mov    %edx,%eax
 8420e84:	c1 e0 02             	shl    $0x2,%eax
 8420e87:	01 d0                	add    %edx,%eax
 8420e89:	01 c0                	add    %eax,%eax
 8420e8b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420e8e:	83 c0 2b             	add    $0x2b,%eax
 8420e91:	0f b6 00             	movzbl (%eax),%eax
 8420e94:	0f b6 c8             	movzbl %al,%ecx
 8420e97:	8b 55 10             	mov    0x10(%ebp),%edx
 8420e9a:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8420e9d:	89 d0                	mov    %edx,%eax
 8420e9f:	c1 e0 02             	shl    $0x2,%eax
 8420ea2:	01 d0                	add    %edx,%eax
 8420ea4:	01 c0                	add    %eax,%eax
 8420ea6:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8420ea9:	83 c0 2a             	add    $0x2a,%eax
 8420eac:	0f b6 00             	movzbl (%eax),%eax
 8420eaf:	0f b6 c0             	movzbl %al,%eax
 8420eb2:	89 74 24 14          	mov    %esi,0x14(%esp)
 8420eb6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8420eba:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8420ebe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420ec2:	c7 44 24 04 53 ca c4 	movl   $0x8c4ca53,0x4(%esp)
 8420ec9:	08 
 8420eca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8420ecd:	89 04 24             	mov    %eax,(%esp)
 8420ed0:	e8 6b d5 c5 ff       	call   807e440 <sprintf@plt>
 8420ed5:	e8 a7 b2 ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8420eda:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 8420ee0:	89 45 98             	mov    %eax,-0x68(%ebp)
 8420ee3:	e8 99 b2 ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8420ee8:	8b 80 5c 03 00 00    	mov    0x35c(%eax),%eax
 8420eee:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8420ef1:	e8 8b b2 ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8420ef6:	05 45 03 00 00       	add    $0x345,%eax
 8420efb:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8420efe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f01:	8b 40 22             	mov    0x22(%eax),%eax
 8420f04:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8420f07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f0a:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 8420f0e:	0f b6 c0             	movzbl %al,%eax
 8420f11:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8420f14:	8b 55 10             	mov    0x10(%ebp),%edx
 8420f17:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420f1a:	89 d0                	mov    %edx,%eax
 8420f1c:	c1 e0 02             	shl    $0x2,%eax
 8420f1f:	01 d0                	add    %edx,%eax
 8420f21:	01 c0                	add    %eax,%eax
 8420f23:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420f26:	83 c0 20             	add    $0x20,%eax
 8420f29:	8b 40 0e             	mov    0xe(%eax),%eax
 8420f2c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8420f2f:	8b 55 10             	mov    0x10(%ebp),%edx
 8420f32:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420f35:	89 d0                	mov    %edx,%eax
 8420f37:	c1 e0 02             	shl    $0x2,%eax
 8420f3a:	01 d0                	add    %edx,%eax
 8420f3c:	01 c0                	add    %eax,%eax
 8420f3e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420f41:	83 c0 29             	add    $0x29,%eax
 8420f44:	0f b6 00             	movzbl (%eax),%eax
 8420f47:	0f b6 c0             	movzbl %al,%eax
 8420f4a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8420f4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f50:	8b 40 1c             	mov    0x1c(%eax),%eax
 8420f53:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8420f56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f59:	8b 78 18             	mov    0x18(%eax),%edi
 8420f5c:	8b 55 10             	mov    0x10(%ebp),%edx
 8420f5f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8420f62:	89 d0                	mov    %edx,%eax
 8420f64:	c1 e0 02             	shl    $0x2,%eax
 8420f67:	01 d0                	add    %edx,%eax
 8420f69:	01 c0                	add    %eax,%eax
 8420f6b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8420f6e:	83 c0 28             	add    $0x28,%eax
 8420f71:	0f b6 00             	movzbl (%eax),%eax
 8420f74:	0f b6 f0             	movzbl %al,%esi
 8420f77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f7a:	8b 40 10             	mov    0x10(%eax),%eax
 8420f7d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8420f84:	00 
 8420f85:	89 04 24             	mov    %eax,(%esp)
 8420f88:	e8 be 80 ce ff       	call   810904b <_Z14NumberToStringji>
 8420f8d:	89 c3                	mov    %eax,%ebx
 8420f8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8420f92:	8b 48 14             	mov    0x14(%eax),%ecx
 8420f95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8420f98:	8b 45 98             	mov    -0x68(%ebp),%eax
 8420f9b:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8420f9f:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8420fa2:	89 44 24 38          	mov    %eax,0x38(%esp)
 8420fa6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8420fa9:	89 44 24 34          	mov    %eax,0x34(%esp)
 8420fad:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8420fb0:	89 44 24 30          	mov    %eax,0x30(%esp)
 8420fb4:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8420fb7:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8420fbb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8420fbe:	89 44 24 28          	mov    %eax,0x28(%esp)
 8420fc2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8420fc5:	89 44 24 24          	mov    %eax,0x24(%esp)
 8420fc9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8420fcc:	89 44 24 20          	mov    %eax,0x20(%esp)
 8420fd0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8420fd3:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8420fd7:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8420fdb:	89 74 24 14          	mov    %esi,0x14(%esp)
 8420fdf:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8420fe3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8420fe7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8420feb:	c7 44 24 04 60 ca c4 	movl   $0x8c4ca60,0x4(%esp)
 8420ff2:	08 
 8420ff3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420ff6:	89 04 24             	mov    %eax,(%esp)
 8420ff9:	e8 c2 31 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8420ffe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421005:	00 
 8421006:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421009:	89 04 24             	mov    %eax,(%esp)
 842100c:	e8 15 33 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421011:	88 45 e7             	mov    %al,-0x19(%ebp)
 8421014:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8421018:	83 f0 01             	xor    $0x1,%eax
 842101b:	84 c0                	test   %al,%al
 842101d:	74 36                	je     8421055 <_ZN22DB_GatheringParyStatus27save_dnf_pvp_result_historyEP16SIG_PARTY_STATUSi+0x23b>
 842101f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8421026:	00 
 8421027:	c7 44 24 08 64 58 00 	movl   $0x5864,0x8(%esp)
 842102e:	00 
 842102f:	c7 44 24 04 80 c7 c5 	movl   $0x8c5c780,0x4(%esp)
 8421036:	08 
 8421037:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842103a:	89 04 24             	mov    %eax,(%esp)
 842103d:	e8 d6 e6 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8421042:	c7 44 24 04 8e cb c4 	movl   $0x8c4cb8e,0x4(%esp)
 8421049:	08 
 842104a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842104d:	89 04 24             	mov    %eax,(%esp)
 8421050:	e8 33 e7 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8421055:	b8 01 00 00 00       	mov    $0x1,%eax
 842105a:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8421060:	5b                   	pop    %ebx
 8421061:	5e                   	pop    %esi
 8421062:	5f                   	pop    %edi
 8421063:	5d                   	pop    %ebp
 8421064:	c3                   	ret
 8421065:	90                   	nop

```

```c
// DB_GatheringParyStatus::save_dnf_pvp_result_history @ 0x8420e1a

/* DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_pvp_result_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1,int param_2)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  char local_1d;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  sprintf(local_44,"%d.%d.%d.%d",(uint)(byte)param_1[param_2 * 10 + 0x2a],
          (uint)(byte)param_1[param_2 * 10 + 0x2b],(uint)(byte)param_1[param_2 * 10 + 0x2c],
          (uint)(byte)param_1[param_2 * 10 + 0x2d]);
  iVar10 = G_CEnvironment();
  uVar4 = *(undefined4 *)(iVar10 + 0x358);
  iVar10 = G_CEnvironment();
  uVar5 = *(undefined4 *)(iVar10 + 0x35c);
  iVar10 = G_CEnvironment();
  uVar6 = *(undefined4 *)(param_1 + 0x22);
  SVar1 = param_1[0x21];
  uVar7 = *(undefined4 *)(param_1 + param_2 * 10 + 0x2e);
  SVar2 = param_1[param_2 * 10 + 0x29];
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  SVar3 = param_1[param_2 * 10 + 0x28];
  uVar11 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_24,
                   "inSert into dnf_party_result_history_pvp (str_ip,nat_type,m_id,party_result,occ_time,map_id,dungeon_id,peer_nat_type,peer_ip, established_time, IsConnectedToRelaySrv, ConnectedTimeToRelaySrv, relay_ip, relay_udp_port, relay_tcp_port ) values(\'%s\',%d,%s,%d,now(),%d,%d,%d,\'%s\',%d, %d, %d, \'%s\', %d, %d)"
                   ,param_1,*(undefined4 *)(param_1 + 0x14),uVar11,(uint)(byte)SVar3,uVar9,uVar8,
                   (uint)(byte)SVar2,local_44,uVar7,(uint)(byte)SVar1,uVar6,iVar10 + 0x345,uVar5,
                   uVar4);
  local_1d = MySQL::exec(local_24,true);
  if (local_1d != '\x01') {
    cMyTrace::cMyTrace(local_34,
                       "bool DB_GatheringParyStatus::save_dnf_pvp_result_history(SIG_PARTY_STATUS*, int)"
                       ,0x5864,5);
    cMyTrace::operator()(local_34,"DB_GatheringParyStatus failed");
  }
  return 1;
}

```

