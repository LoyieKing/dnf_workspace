# DB_InsertResponseTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843fc26 DB_InsertResponseTime::dispatch  [0x0843fc26-0x843febd] ===
 843fc26:	55                   	push   %ebp
 843fc27:	89 e5                	mov    %esp,%ebp
 843fc29:	57                   	push   %edi
 843fc2a:	56                   	push   %esi
 843fc2b:	53                   	push   %ebx
 843fc2c:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 843fc32:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843fc37:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843fc3e:	00 
 843fc3f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843fc46:	00 
 843fc47:	89 04 24             	mov    %eax,(%esp)
 843fc4a:	e8 ef 55 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843fc4f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843fc52:	8b 45 14             	mov    0x14(%ebp),%eax
 843fc55:	89 04 24             	mov    %eax,(%esp)
 843fc58:	e8 07 40 01 00       	call   8453c64 <_ZN6Stream12GetOutBufferI24SIG_INSERT_RESPONSE_TIMEEEPT_v>
 843fc5d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843fc60:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fc63:	89 04 24             	mov    %eax,(%esp)
 843fc66:	e8 65 69 2c 00       	call   87065d0 <_ZNSsC1Ev>
 843fc6b:	8d 95 9d fe ff ff    	lea    -0x163(%ebp),%edx
 843fc71:	bb ff 00 00 00       	mov    $0xff,%ebx
 843fc76:	b8 00 00 00 00       	mov    $0x0,%eax
 843fc7b:	89 d1                	mov    %edx,%ecx
 843fc7d:	83 e1 01             	and    $0x1,%ecx
 843fc80:	85 c9                	test   %ecx,%ecx
 843fc82:	74 08                	je     843fc8c <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x66>
 843fc84:	88 02                	mov    %al,(%edx)
 843fc86:	83 c2 01             	add    $0x1,%edx
 843fc89:	83 eb 01             	sub    $0x1,%ebx
 843fc8c:	89 d1                	mov    %edx,%ecx
 843fc8e:	83 e1 02             	and    $0x2,%ecx
 843fc91:	85 c9                	test   %ecx,%ecx
 843fc93:	74 09                	je     843fc9e <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x78>
 843fc95:	66 89 02             	mov    %ax,(%edx)
 843fc98:	83 c2 02             	add    $0x2,%edx
 843fc9b:	83 eb 02             	sub    $0x2,%ebx
 843fc9e:	89 d9                	mov    %ebx,%ecx
 843fca0:	c1 e9 02             	shr    $0x2,%ecx
 843fca3:	89 d7                	mov    %edx,%edi
 843fca5:	f3 ab                	rep stos %eax,%es:(%edi)
 843fca7:	89 fa                	mov    %edi,%edx
 843fca9:	89 d9                	mov    %ebx,%ecx
 843fcab:	83 e1 02             	and    $0x2,%ecx
 843fcae:	85 c9                	test   %ecx,%ecx
 843fcb0:	74 06                	je     843fcb8 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x92>
 843fcb2:	66 89 02             	mov    %ax,(%edx)
 843fcb5:	83 c2 02             	add    $0x2,%edx
 843fcb8:	89 d9                	mov    %ebx,%ecx
 843fcba:	83 e1 01             	and    $0x1,%ecx
 843fcbd:	85 c9                	test   %ecx,%ecx
 843fcbf:	74 05                	je     843fcc6 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0xa0>
 843fcc1:	88 02                	mov    %al,(%edx)
 843fcc3:	83 c2 01             	add    $0x1,%edx
 843fcc6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843fccd:	e9 06 01 00 00       	jmp    843fdd8 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x1b2>
 843fcd2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fcd5:	89 04 24             	mov    %eax,(%esp)
 843fcd8:	e8 c3 69 2c 00       	call   87066a0 <_ZNKSs5emptyEv>
 843fcdd:	83 f0 01             	xor    $0x1,%eax
 843fce0:	84 c0                	test   %al,%al
 843fce2:	74 13                	je     843fcf7 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0xd1>
 843fce4:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 843fceb:	08 
 843fcec:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fcef:	89 04 24             	mov    %eax,(%esp)
 843fcf2:	e8 39 83 2c 00       	call   8708030 <_ZNSspLEPKc>
 843fcf7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843fcfa:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 843fcfd:	89 d0                	mov    %edx,%eax
 843fcff:	c1 e0 02             	shl    $0x2,%eax
 843fd02:	01 d0                	add    %edx,%eax
 843fd04:	c1 e0 02             	shl    $0x2,%eax
 843fd07:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843fd0a:	83 c0 18             	add    $0x18,%eax
 843fd0d:	8b 00                	mov    (%eax),%eax
 843fd0f:	89 85 8c fe ff ff    	mov    %eax,-0x174(%ebp)
 843fd15:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843fd18:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 843fd1b:	89 d0                	mov    %edx,%eax
 843fd1d:	c1 e0 02             	shl    $0x2,%eax
 843fd20:	01 d0                	add    %edx,%eax
 843fd22:	c1 e0 02             	shl    $0x2,%eax
 843fd25:	8b 5c 08 10          	mov    0x10(%eax,%ecx,1),%ebx
 843fd29:	8b 74 08 14          	mov    0x14(%eax,%ecx,1),%esi
 843fd2d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843fd30:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 843fd33:	89 d0                	mov    %edx,%eax
 843fd35:	c1 e0 02             	shl    $0x2,%eax
 843fd38:	01 d0                	add    %edx,%eax
 843fd3a:	c1 e0 02             	shl    $0x2,%eax
 843fd3d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843fd40:	83 c0 0c             	add    $0xc,%eax
 843fd43:	8b 00                	mov    (%eax),%eax
 843fd45:	89 85 90 fe ff ff    	mov    %eax,-0x170(%ebp)
 843fd4b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843fd4e:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 843fd51:	89 d0                	mov    %edx,%eax
 843fd53:	c1 e0 02             	shl    $0x2,%eax
 843fd56:	01 d0                	add    %edx,%eax
 843fd58:	c1 e0 02             	shl    $0x2,%eax
 843fd5b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843fd5e:	83 c0 08             	add    $0x8,%eax
 843fd61:	8b 00                	mov    (%eax),%eax
 843fd63:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 843fd69:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fd6c:	8b 38                	mov    (%eax),%edi
 843fd6e:	e8 0e c4 c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 843fd73:	89 04 24             	mov    %eax,(%esp)
 843fd76:	e8 4f ad d0 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 843fd7b:	8b 95 8c fe ff ff    	mov    -0x174(%ebp),%edx
 843fd81:	89 54 24 20          	mov    %edx,0x20(%esp)
 843fd85:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 843fd89:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 843fd8d:	8b 95 90 fe ff ff    	mov    -0x170(%ebp),%edx
 843fd93:	89 54 24 14          	mov    %edx,0x14(%esp)
 843fd97:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 843fd9d:	89 54 24 10          	mov    %edx,0x10(%esp)
 843fda1:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 843fda5:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fda9:	c7 44 24 04 50 5c c5 	movl   $0x8c55c50,0x4(%esp)
 843fdb0:	08 
 843fdb1:	8d 85 9d fe ff ff    	lea    -0x163(%ebp),%eax
 843fdb7:	89 04 24             	mov    %eax,(%esp)
 843fdba:	e8 81 e6 c3 ff       	call   807e440 <sprintf@plt>
 843fdbf:	8d 85 9d fe ff ff    	lea    -0x163(%ebp),%eax
 843fdc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 843fdc9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fdcc:	89 04 24             	mov    %eax,(%esp)
 843fdcf:	e8 5c 82 2c 00       	call   8708030 <_ZNSspLEPKc>
 843fdd4:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 843fdd8:	83 7d e4 63          	cmpl   $0x63,-0x1c(%ebp)
 843fddc:	7f 12                	jg     843fdf0 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x1ca>
 843fdde:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fde1:	8b 40 04             	mov    0x4(%eax),%eax
 843fde4:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 843fde7:	7e 07                	jle    843fdf0 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x1ca>
 843fde9:	b8 01 00 00 00       	mov    $0x1,%eax
 843fdee:	eb 05                	jmp    843fdf5 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0x1cf>
 843fdf0:	b8 00 00 00 00       	mov    $0x0,%eax
 843fdf5:	84 c0                	test   %al,%al
 843fdf7:	0f 85 d5 fe ff ff    	jne    843fcd2 <_ZN21DB_InsertResponseTime8dispatchEiiP6Stream+0xac>
 843fdfd:	c7 45 ce 00 00 00 00 	movl   $0x0,-0x32(%ebp)
 843fe04:	c7 45 d2 00 00 00 00 	movl   $0x0,-0x2e(%ebp)
 843fe0b:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 843fe11:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fe14:	8b 00                	mov    (%eax),%eax
 843fe16:	89 45 c8             	mov    %eax,-0x38(%ebp)
 843fe19:	8d 45 9c             	lea    -0x64(%ebp),%eax
 843fe1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 843fe20:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843fe23:	89 04 24             	mov    %eax,(%esp)
 843fe26:	e8 35 e5 c3 ff       	call   807e360 <localtime_r@plt>
 843fe2b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 843fe2e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843fe32:	c7 44 24 08 4d da c4 	movl   $0x8c4da4d,0x8(%esp)
 843fe39:	08 
 843fe3a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 843fe41:	00 
 843fe42:	8d 45 ce             	lea    -0x32(%ebp),%eax
 843fe45:	89 04 24             	mov    %eax,(%esp)
 843fe48:	e8 73 dd c3 ff       	call   807dbc0 <strftime@plt>
 843fe4d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fe50:	89 04 24             	mov    %eax,(%esp)
 843fe53:	e8 98 66 2c 00       	call   87064f0 <_ZNKSs5c_strEv>
 843fe58:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843fe5c:	8d 45 ce             	lea    -0x32(%ebp),%eax
 843fe5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fe63:	c7 44 24 04 78 5c c5 	movl   $0x8c55c78,0x4(%esp)
 843fe6a:	08 
 843fe6b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843fe6e:	89 04 24             	mov    %eax,(%esp)
 843fe71:	e8 4a 43 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843fe76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843fe7d:	00 
 843fe7e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843fe81:	89 04 24             	mov    %eax,(%esp)
 843fe84:	e8 9d 44 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843fe89:	89 c3                	mov    %eax,%ebx
 843fe8b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843fe8e:	89 04 24             	mov    %eax,(%esp)
 843fe91:	e8 4a 7d 2c 00       	call   8707be0 <_ZNSsD1Ev>
 843fe96:	89 d8                	mov    %ebx,%eax
 843fe98:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 843fe9e:	5b                   	pop    %ebx
 843fe9f:	5e                   	pop    %esi
 843fea0:	5f                   	pop    %edi
 843fea1:	5d                   	pop    %ebp
 843fea2:	c3                   	ret
 843fea3:	89 d3                	mov    %edx,%ebx
 843fea5:	89 c6                	mov    %eax,%esi
 843fea7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843feaa:	89 04 24             	mov    %eax,(%esp)
 843fead:	e8 2e 7d 2c 00       	call   8707be0 <_ZNSsD1Ev>
 843feb2:	89 f0                	mov    %esi,%eax
 843feb4:	89 da                	mov    %ebx,%edx
 843feb6:	89 04 24             	mov    %eax,(%esp)
 843feb9:	e8 92 38 6a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_InsertResponseTime::dispatch @ 0x843fc26

/* DB_InsertResponseTime::dispatch(int, int, Stream*) */

undefined4 DB_InsertResponseTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CEnvironment *this;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  Stream *in_stack_00000010;
  char local_167;
  char local_166 [254];
  tm local_68;
  time_t local_3c;
  char local_36 [10];
  string local_2c [4];
  MySQL *local_28;
  SIG_INSERT_RESPONSE_TIME *local_24;
  int local_20;
  
  bVar13 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = Stream::GetOutBuffer<SIG_INSERT_RESPONSE_TIME>(in_stack_00000010);
  std::string::string(local_2c);
  pcVar10 = &local_167;
  uVar11 = 0xff;
  bVar12 = ((uint)pcVar10 & 1) != 0;
  if (bVar12) {
    local_167 = '\0';
    pcVar10 = local_166;
    uVar11 = 0xfe;
  }
  if (((uint)pcVar10 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
    uVar11 = uVar11 - 2;
  }
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
  }
  if ((uVar11 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
  }
  if (!bVar12) {
    *pcVar10 = '\0';
  }
  local_20 = 0;
  while( true ) {
    if ((local_20 < 100) && (local_20 < *(int *)(local_24 + 4))) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (!bVar12) break;
                    /* try { // try from 0843fcd8 to 0843fe88 has its CatchHandler @ 0843fea3 */
    cVar6 = std::string::empty(local_2c);
    if (cVar6 != '\x01') {
      std::string::operator+=(local_2c,",");
    }
    uVar8 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x18);
    uVar1 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x10);
    uVar2 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x14);
    uVar3 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0xc);
    uVar4 = *(undefined4 *)(local_24 + local_20 * 0x14 + 8);
    uVar5 = *(undefined4 *)local_24;
    this = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this);
    sprintf(&local_167,"(%d,from_unixtime(%d),%u,%u,%llu,%u)",uVar7,uVar5,uVar4,uVar3,uVar1,uVar2,
            uVar8);
    std::string::operator+=(local_2c,&local_167);
    local_20 = local_20 + 1;
  }
  local_36[0] = '\0';
  local_36[1] = '\0';
  local_36[2] = '\0';
  local_36[3] = '\0';
  local_36[4] = '\0';
  local_36[5] = '\0';
  local_36[6] = '\0';
  local_36[7] = '\0';
  local_36[8] = '\0';
  local_36[9] = '\0';
  local_3c = *(time_t *)local_24;
  localtime_r(&local_3c,&local_68);
  strftime(local_36,10,"%Y%m",&local_68);
  uVar8 = std::string::c_str(local_2c);
  MySQL::set_query(local_28,
                   "inSert into log_response_time_%s(channel_no,occ_time,packet_id,packet_count,total_response_time,avg_response_time) values%s"
                   ,local_36,uVar8);
  uVar8 = MySQL::exec(local_28,true);
  std::string::~string(local_2c);
  return uVar8;
}

```

