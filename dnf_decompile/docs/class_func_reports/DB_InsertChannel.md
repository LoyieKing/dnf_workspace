# DB_InsertChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_InsertChannel

```asm
// === 0840364c DB_InsertChannel::DB_InsertChannel  [0x0840364c-0x8403667] ===
 840364c:	55                   	push   %ebp
 840364d:	89 e5                	mov    %esp,%ebp
 840364f:	83 ec 18             	sub    $0x18,%esp
 8403652:	8b 45 08             	mov    0x8(%ebp),%eax
 8403655:	89 04 24             	mov    %eax,(%esp)
 8403658:	e8 49 a1 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 840365d:	8b 45 08             	mov    0x8(%ebp),%eax
 8403660:	c7 00 30 fc c5 08    	movl   $0x8c5fc30,(%eax)
 8403666:	c9                   	leave
 8403667:	c3                   	ret

```

```c
// DB_InsertChannel::DB_InsertChannel @ 0x840364c

/* DB_InsertChannel::DB_InsertChannel() */

void __thiscall DB_InsertChannel::DB_InsertChannel(DB_InsertChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc30;
  return;
}

```

---

## InsertChannel

```asm
// === 08403734 DB_InsertChannel::InsertChannel  [0x08403734-0x8403a4d] ===
 8403734:	55                   	push   %ebp
 8403735:	89 e5                	mov    %esp,%ebp
 8403737:	57                   	push   %edi
 8403738:	56                   	push   %esi
 8403739:	53                   	push   %ebx
 840373a:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 8403740:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403743:	8b 50 58             	mov    0x58(%eax),%edx
 8403746:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840374b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840374f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8403756:	00 
 8403757:	89 04 24             	mov    %eax,(%esp)
 840375a:	e8 df 1a ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840375f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8403762:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403765:	8b 58 54             	mov    0x54(%eax),%ebx
 8403768:	8b 45 0c             	mov    0xc(%ebp),%eax
 840376b:	83 c0 3b             	add    $0x3b,%eax
 840376e:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8403774:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403777:	0f b7 40 39          	movzwl 0x39(%eax),%eax
 840377b:	98                   	cwtl
 840377c:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8403782:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403785:	83 c0 1b             	add    $0x1b,%eax
 8403788:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 840378e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403791:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8403795:	0f be f8             	movsbl %al,%edi
 8403798:	8b 45 0c             	mov    0xc(%ebp),%eax
 840379b:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 840379f:	0f bf f0             	movswl %ax,%esi
 84037a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84037a5:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 84037a9:	0f b7 c8             	movzwl %ax,%ecx
 84037ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84037af:	8d 50 06             	lea    0x6(%eax),%edx
 84037b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84037b5:	8b 00                	mov    (%eax),%eax
 84037b7:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 84037bb:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
 84037c1:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 84037c5:	8b 9d 54 ff ff ff    	mov    -0xac(%ebp),%ebx
 84037cb:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 84037cf:	8b 9d 58 ff ff ff    	mov    -0xa8(%ebp),%ebx
 84037d5:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84037d9:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84037dd:	89 74 24 14          	mov    %esi,0x14(%esp)
 84037e1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84037e5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84037e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84037ed:	c7 44 24 04 20 35 c4 	movl   $0x8c43520,0x4(%esp)
 84037f4:	08 
 84037f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84037f8:	89 04 24             	mov    %eax,(%esp)
 84037fb:	e8 c0 09 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403800:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403807:	00 
 8403808:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840380b:	89 04 24             	mov    %eax,(%esp)
 840380e:	e8 13 0b ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8403813:	88 45 df             	mov    %al,-0x21(%ebp)
 8403816:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 840381a:	83 f0 01             	xor    $0x1,%eax
 840381d:	84 c0                	test   %al,%al
 840381f:	0f 84 c9 00 00 00    	je     84038ee <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x1ba>
 8403825:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403828:	8b 18                	mov    (%eax),%ebx
 840382a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840382d:	8b 70 54             	mov    0x54(%eax),%esi
 8403830:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403833:	83 c0 3b             	add    $0x3b,%eax
 8403836:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 840383c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840383f:	0f b7 40 39          	movzwl 0x39(%eax),%eax
 8403843:	98                   	cwtl
 8403844:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 840384a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840384d:	83 c0 1b             	add    $0x1b,%eax
 8403850:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8403856:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403859:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 840385d:	0f be f8             	movsbl %al,%edi
 8403860:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403863:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 8403867:	0f bf c8             	movswl %ax,%ecx
 840386a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840386d:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 8403871:	0f b7 d0             	movzwl %ax,%edx
 8403874:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403877:	83 c0 06             	add    $0x6,%eax
 840387a:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 840387e:	89 74 24 24          	mov    %esi,0x24(%esp)
 8403882:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
 8403888:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 840388c:	8b 9d 60 ff ff ff    	mov    -0xa0(%ebp),%ebx
 8403892:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8403896:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
 840389c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84038a0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84038a4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84038a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84038ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 84038b0:	c7 44 24 04 d0 35 c4 	movl   $0x8c435d0,0x4(%esp)
 84038b7:	08 
 84038b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84038bb:	89 04 24             	mov    %eax,(%esp)
 84038be:	e8 fd 08 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84038c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84038ca:	00 
 84038cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84038ce:	89 04 24             	mov    %eax,(%esp)
 84038d1:	e8 50 0a ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84038d6:	88 45 df             	mov    %al,-0x21(%ebp)
 84038d9:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84038dd:	83 f0 01             	xor    $0x1,%eax
 84038e0:	84 c0                	test   %al,%al
 84038e2:	74 0a                	je     84038ee <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x1ba>
 84038e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84038e9:	e9 53 01 00 00       	jmp    8403a41 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x30d>
 84038ee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84038f1:	89 04 24             	mov    %eax,(%esp)
 84038f4:	e8 d7 2c 30 00       	call   87065d0 <_ZNSsC1Ev>
 84038f9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84038fc:	89 04 24             	mov    %eax,(%esp)
 84038ff:	e8 cc 54 30 00       	call   8708dd0 <_ZNSs5clearEv>
 8403904:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 840390b:	eb 73                	jmp    8403980 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x24c>
 840390d:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 8403913:	b8 00 00 00 00       	mov    $0x0,%eax
 8403918:	ba 19 00 00 00       	mov    $0x19,%edx
 840391d:	89 df                	mov    %ebx,%edi
 840391f:	89 d1                	mov    %edx,%ecx
 8403921:	f3 ab                	rep stos %eax,%es:(%edi)
 8403923:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8403926:	8d 50 01             	lea    0x1(%eax),%edx
 8403929:	8b 45 0c             	mov    0xc(%ebp),%eax
 840392c:	8b 00                	mov    (%eax),%eax
 840392e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8403932:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403936:	c7 44 24 04 7a 36 c4 	movl   $0x8c4367a,0x4(%esp)
 840393d:	08 
 840393e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8403944:	89 04 24             	mov    %eax,(%esp)
 8403947:	e8 f4 aa c7 ff       	call   807e440 <sprintf@plt>
 840394c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8403952:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403956:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8403959:	89 04 24             	mov    %eax,(%esp)
 840395c:	e8 9f 46 30 00       	call   8708000 <_ZNSs6appendEPKc>
 8403961:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8403964:	83 f8 62             	cmp    $0x62,%eax
 8403967:	77 13                	ja     840397c <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x248>
 8403969:	c7 44 24 04 86 36 c4 	movl   $0x8c43686,0x4(%esp)
 8403970:	08 
 8403971:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8403974:	89 04 24             	mov    %eax,(%esp)
 8403977:	e8 84 46 30 00       	call   8708000 <_ZNSs6appendEPKc>
 840397c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8403980:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8403983:	83 f8 63             	cmp    $0x63,%eax
 8403986:	0f 96 c0             	setbe  %al
 8403989:	84 c0                	test   %al,%al
 840398b:	75 80                	jne    840390d <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x1d9>
 840398d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8403990:	89 04 24             	mov    %eax,(%esp)
 8403993:	e8 58 2b 30 00       	call   87064f0 <_ZNKSs5c_strEv>
 8403998:	89 44 24 08          	mov    %eax,0x8(%esp)
 840399c:	c7 44 24 04 8c 36 c4 	movl   $0x8c4368c,0x4(%esp)
 84039a3:	08 
 84039a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84039a7:	89 04 24             	mov    %eax,(%esp)
 84039aa:	e8 11 08 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84039af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84039b6:	00 
 84039b7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84039ba:	89 04 24             	mov    %eax,(%esp)
 84039bd:	e8 64 09 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84039c2:	88 45 df             	mov    %al,-0x21(%ebp)
 84039c5:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84039c9:	83 f0 01             	xor    $0x1,%eax
 84039cc:	84 c0                	test   %al,%al
 84039ce:	74 44                	je     8403a14 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x2e0>
 84039d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84039d3:	8b 00                	mov    (%eax),%eax
 84039d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84039d9:	c7 44 24 04 cc 36 c4 	movl   $0x8c436cc,0x4(%esp)
 84039e0:	08 
 84039e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84039e4:	89 04 24             	mov    %eax,(%esp)
 84039e7:	e8 d4 07 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84039ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84039f3:	00 
 84039f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84039f7:	89 04 24             	mov    %eax,(%esp)
 84039fa:	e8 27 09 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84039ff:	88 45 df             	mov    %al,-0x21(%ebp)
 8403a02:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8403a06:	83 f0 01             	xor    $0x1,%eax
 8403a09:	84 c0                	test   %al,%al
 8403a0b:	74 07                	je     8403a14 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x2e0>
 8403a0d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8403a12:	eb 22                	jmp    8403a36 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x302>
 8403a14:	bb 01 00 00 00       	mov    $0x1,%ebx
 8403a19:	eb 1b                	jmp    8403a36 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL+0x302>
 8403a1b:	89 d3                	mov    %edx,%ebx
 8403a1d:	89 c6                	mov    %eax,%esi
 8403a1f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8403a22:	89 04 24             	mov    %eax,(%esp)
 8403a25:	e8 b6 41 30 00       	call   8707be0 <_ZNSsD1Ev>
 8403a2a:	89 f0                	mov    %esi,%eax
 8403a2c:	89 da                	mov    %ebx,%edx
 8403a2e:	89 04 24             	mov    %eax,(%esp)
 8403a31:	e8 1a fd 6d 00       	call   8ae3750 <_Unwind_Resume>
 8403a36:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8403a39:	89 04 24             	mov    %eax,(%esp)
 8403a3c:	e8 9f 41 30 00       	call   8707be0 <_ZNSsD1Ev>
 8403a41:	89 d8                	mov    %ebx,%eax
 8403a43:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8403a49:	5b                   	pop    %ebx
 8403a4a:	5e                   	pop    %esi
 8403a4b:	5f                   	pop    %edi
 8403a4c:	5d                   	pop    %ebp
 8403a4d:	c3                   	ret

```

```c
// DB_InsertChannel::InsertChannel @ 0x8403734

/* DB_InsertChannel::InsertChannel(SIG_INSERT_CHANNEL*) */

undefined4 __thiscall
DB_InsertChannel::InsertChannel(DB_InsertChannel *this,SIG_INSERT_CHANNEL *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_90 [100];
  string local_2c [7];
  char local_25;
  MySQL *local_24;
  uint local_20;
  
  bVar4 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,*(undefined4 *)(param_1 + 0x58));
  MySQL::set_query(local_24,
                   "inSert into game_channel (gc_no,gc_now,gc_ip,gc_port,gc_max,gc_game,gc_channel,gc_ch_group,gc_channeltype,gc_up_time, gc_type) values(%d,0,\'%s\',%d,%d,%d,\'%s\',%d,\'%s\',now(),%d)"
                   ,*(undefined4 *)param_1,param_1 + 6,(uint)*(ushort *)(param_1 + 0x16),
                   (int)*(short *)(param_1 + 0x18),(int)(char)param_1[0x1a],param_1 + 0x1b,
                   (int)*(short *)(param_1 + 0x39),param_1 + 0x3b,*(undefined4 *)(param_1 + 0x54));
  local_25 = MySQL::exec(local_24,true);
  if (local_25 != '\x01') {
    MySQL::set_query(local_24,
                     "upDate game_channel set gc_now=0,gc_ip=\'%s\',gc_port=%d,gc_max=%d,gc_game=%d,gc_channel=\'%s\',gc_ch_group=%d,gc_channeltype=\'%s\',gc_up_time=now(),gc_type=%d where gc_no=%d"
                     ,param_1 + 6,(uint)*(ushort *)(param_1 + 0x16),(int)*(short *)(param_1 + 0x18),
                     (int)(char)param_1[0x1a],param_1 + 0x1b,(int)*(short *)(param_1 + 0x39),
                     param_1 + 0x3b,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)param_1);
    local_25 = MySQL::exec(local_24,true);
    if (local_25 != '\x01') {
      return 0;
    }
  }
  std::string::string(local_2c);
                    /* try { // try from 084038ff to 084039fe has its CatchHandler @ 08403a1b */
  std::string::clear(local_2c);
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    pcVar3 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    sprintf(local_90,"(%d, %d, 0)",*(undefined4 *)param_1,local_20 + 1);
    std::string::append(local_2c,local_90);
    if (local_20 < 99) {
      std::string::append(local_2c,", ");
    }
  }
  uVar1 = std::string::c_str(local_2c);
  MySQL::set_query(local_24,"inSert into channel_occ_info (gc_no, age, occ_num) values %s",uVar1);
  local_25 = MySQL::exec(local_24,true);
  if (local_25 != '\x01') {
    MySQL::set_query(local_24,"upDate channel_occ_info set occ_num = 0 where gc_no = %d",
                     *(undefined4 *)param_1);
    local_25 = MySQL::exec(local_24,true);
    if (local_25 != '\x01') {
      uVar1 = 0;
      goto LAB_08403a36;
    }
  }
  uVar1 = 1;
LAB_08403a36:
  std::string::~string(local_2c);
  return uVar1;
}

```

---

## dispatch

```asm
// === 084036b6 DB_InsertChannel::dispatch  [0x084036b6-0x8403733] ===
 84036b6:	55                   	push   %ebp
 84036b7:	89 e5                	mov    %esp,%ebp
 84036b9:	83 ec 28             	sub    $0x28,%esp
 84036bc:	8b 45 08             	mov    0x8(%ebp),%eax
 84036bf:	8b 55 14             	mov    0x14(%ebp),%edx
 84036c2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84036c6:	8b 55 10             	mov    0x10(%ebp),%edx
 84036c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84036cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84036d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84036d4:	89 04 24             	mov    %eax,(%esp)
 84036d7:	e8 a0 88 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 84036dc:	83 f0 01             	xor    $0x1,%eax
 84036df:	84 c0                	test   %al,%al
 84036e1:	74 07                	je     84036ea <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x34>
 84036e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84036e8:	eb 47                	jmp    8403731 <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x7b>
 84036ea:	8b 45 14             	mov    0x14(%ebp),%eax
 84036ed:	89 04 24             	mov    %eax,(%esp)
 84036f0:	e8 9f ce 04 00       	call   8450594 <_ZN6Stream12GetOutBufferI18SIG_INSERT_CHANNELEEPT_v>
 84036f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84036f8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84036fc:	75 07                	jne    8403705 <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x4f>
 84036fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8403703:	eb 2c                	jmp    8403731 <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x7b>
 8403705:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403708:	89 44 24 04          	mov    %eax,0x4(%esp)
 840370c:	8b 45 08             	mov    0x8(%ebp),%eax
 840370f:	89 04 24             	mov    %eax,(%esp)
 8403712:	e8 1d 00 00 00       	call   8403734 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL>
 8403717:	88 45 f3             	mov    %al,-0xd(%ebp)
 840371a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 840371e:	83 f0 01             	xor    $0x1,%eax
 8403721:	84 c0                	test   %al,%al
 8403723:	74 07                	je     840372c <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x76>
 8403725:	b8 00 00 00 00       	mov    $0x0,%eax
 840372a:	eb 05                	jmp    8403731 <_ZN16DB_InsertChannel8dispatchEiiP6Stream+0x7b>
 840372c:	b8 01 00 00 00       	mov    $0x1,%eax
 8403731:	c9                   	leave
 8403732:	c3                   	ret
 8403733:	90                   	nop

```

```c
// DB_InsertChannel::dispatch @ 0x84036b6

/* DB_InsertChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertChannel::dispatch(DB_InsertChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_INSERT_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_INSERT_CHANNEL>(param_3);
    if (pSVar3 == (SIG_INSERT_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = InsertChannel(this,pSVar3);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_InsertChannel

```asm
// === 08403668 DB_InsertChannel::~DB_InsertChannel  [0x08403668-0x8403697] ===
 8403668:	55                   	push   %ebp
 8403669:	89 e5                	mov    %esp,%ebp
 840366b:	83 ec 18             	sub    $0x18,%esp
 840366e:	8b 45 08             	mov    0x8(%ebp),%eax
 8403671:	c7 00 30 fc c5 08    	movl   $0x8c5fc30,(%eax)
 8403677:	8b 45 08             	mov    0x8(%ebp),%eax
 840367a:	89 04 24             	mov    %eax,(%esp)
 840367d:	e8 f6 ec cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8403682:	b8 00 00 00 00       	mov    $0x0,%eax
 8403687:	84 c0                	test   %al,%al
 8403689:	74 0b                	je     8403696 <_ZN16DB_InsertChannelD1Ev+0x2e>
 840368b:	8b 45 08             	mov    0x8(%ebp),%eax
 840368e:	89 04 24             	mov    %eax,(%esp)
 8403691:	e8 5a 0e 32 00       	call   87244f0 <_ZdlPv>
 8403696:	c9                   	leave
 8403697:	c3                   	ret

```

```c
// DB_InsertChannel::~DB_InsertChannel @ 0x8403668

/* WARNING: Removing unreachable block (ram,0x0840368b) */
/* DB_InsertChannel::~DB_InsertChannel() */

void __thiscall DB_InsertChannel::~DB_InsertChannel(DB_InsertChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc30;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_InsertChannel_08403698

```asm
// === 08403698 DB_InsertChannel::~DB_InsertChannel  [0x08403698-0x84036b5] ===
 8403698:	55                   	push   %ebp
 8403699:	89 e5                	mov    %esp,%ebp
 840369b:	83 ec 18             	sub    $0x18,%esp
 840369e:	8b 45 08             	mov    0x8(%ebp),%eax
 84036a1:	89 04 24             	mov    %eax,(%esp)
 84036a4:	e8 bf ff ff ff       	call   8403668 <_ZN16DB_InsertChannelD1Ev>
 84036a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84036ac:	89 04 24             	mov    %eax,(%esp)
 84036af:	e8 3c 0e 32 00       	call   87244f0 <_ZdlPv>
 84036b4:	c9                   	leave
 84036b5:	c3                   	ret

```

```c
// DB_InsertChannel::~DB_InsertChannel @ 0x8403698

/* DB_InsertChannel::~DB_InsertChannel() */

void __thiscall DB_InsertChannel::~DB_InsertChannel(DB_InsertChannel *this)

{
  ~DB_InsertChannel(this);
  operator_delete(this);
  return;
}

```

