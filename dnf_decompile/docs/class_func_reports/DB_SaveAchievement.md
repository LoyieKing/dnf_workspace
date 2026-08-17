# DB_SaveAchievement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0840deaa DB_SaveAchievement::dispatch  [0x0840deaa-0x840e073] ===
 840deaa:	55                   	push   %ebp
 840deab:	89 e5                	mov    %esp,%ebp
 840dead:	57                   	push   %edi
 840deae:	53                   	push   %ebx
 840deaf:	81 ec 10 1d 00 00    	sub    $0x1d10,%esp
 840deb5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840deba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840dec1:	00 
 840dec2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840dec9:	00 
 840deca:	89 04 24             	mov    %eax,(%esp)
 840decd:	e8 6c 73 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840ded2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840ded5:	8b 45 14             	mov    0x14(%ebp),%eax
 840ded8:	89 04 24             	mov    %eax,(%esp)
 840dedb:	e8 42 2a 04 00       	call   8450922 <_ZN6Stream12GetOutBufferI24stAchievement_DBSaveDataEEPT_v>
 840dee0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840dee3:	8d 95 05 e3 ff ff    	lea    -0x1cfb(%ebp),%edx
 840dee9:	bb e7 1c 00 00       	mov    $0x1ce7,%ebx
 840deee:	b8 00 00 00 00       	mov    $0x0,%eax
 840def3:	89 d1                	mov    %edx,%ecx
 840def5:	83 e1 01             	and    $0x1,%ecx
 840def8:	85 c9                	test   %ecx,%ecx
 840defa:	74 08                	je     840df04 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x5a>
 840defc:	88 02                	mov    %al,(%edx)
 840defe:	83 c2 01             	add    $0x1,%edx
 840df01:	83 eb 01             	sub    $0x1,%ebx
 840df04:	89 d1                	mov    %edx,%ecx
 840df06:	83 e1 02             	and    $0x2,%ecx
 840df09:	85 c9                	test   %ecx,%ecx
 840df0b:	74 09                	je     840df16 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x6c>
 840df0d:	66 89 02             	mov    %ax,(%edx)
 840df10:	83 c2 02             	add    $0x2,%edx
 840df13:	83 eb 02             	sub    $0x2,%ebx
 840df16:	89 d9                	mov    %ebx,%ecx
 840df18:	c1 e9 02             	shr    $0x2,%ecx
 840df1b:	89 d7                	mov    %edx,%edi
 840df1d:	f3 ab                	rep stos %eax,%es:(%edi)
 840df1f:	89 fa                	mov    %edi,%edx
 840df21:	89 d9                	mov    %ebx,%ecx
 840df23:	83 e1 02             	and    $0x2,%ecx
 840df26:	85 c9                	test   %ecx,%ecx
 840df28:	74 06                	je     840df30 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x86>
 840df2a:	66 89 02             	mov    %ax,(%edx)
 840df2d:	83 c2 02             	add    $0x2,%edx
 840df30:	89 d9                	mov    %ebx,%ecx
 840df32:	83 e1 01             	and    $0x1,%ecx
 840df35:	85 c9                	test   %ecx,%ecx
 840df37:	74 05                	je     840df3e <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x94>
 840df39:	88 02                	mov    %al,(%edx)
 840df3b:	83 c2 01             	add    $0x1,%edx
 840df3e:	c7 45 ec e7 1c 00 00 	movl   $0x1ce7,-0x14(%ebp)
 840df45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840df48:	c7 44 24 0c 00 18 00 	movl   $0x1800,0xc(%esp)
 840df4f:	00 
 840df50:	89 44 24 08          	mov    %eax,0x8(%esp)
 840df54:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840df57:	89 44 24 04          	mov    %eax,0x4(%esp)
 840df5b:	8d 85 05 e3 ff ff    	lea    -0x1cfb(%ebp),%eax
 840df61:	89 04 24             	mov    %eax,(%esp)
 840df64:	e8 b6 40 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840df69:	83 f0 01             	xor    $0x1,%eax
 840df6c:	84 c0                	test   %al,%al
 840df6e:	74 0a                	je     840df7a <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0xd0>
 840df70:	b8 00 00 00 00       	mov    $0x0,%eax
 840df75:	e9 f0 00 00 00       	jmp    840e06a <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x1c0>
 840df7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840df7d:	8b 98 08 18 00 00    	mov    0x1808(%eax),%ebx
 840df83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840df86:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840df8a:	8d 85 05 e3 ff ff    	lea    -0x1cfb(%ebp),%eax
 840df90:	89 44 24 08          	mov    %eax,0x8(%esp)
 840df94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840df9b:	00 
 840df9c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840df9f:	89 04 24             	mov    %eax,(%esp)
 840dfa2:	e8 83 65 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840dfa7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840dfab:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dfaf:	c7 44 24 04 6c 6c c4 	movl   $0x8c46c6c,0x4(%esp)
 840dfb6:	08 
 840dfb7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840dfba:	89 04 24             	mov    %eax,(%esp)
 840dfbd:	e8 fe 61 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840dfc2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840dfc9:	00 
 840dfca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840dfcd:	89 04 24             	mov    %eax,(%esp)
 840dfd0:	e8 51 63 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840dfd5:	83 f0 01             	xor    $0x1,%eax
 840dfd8:	84 c0                	test   %al,%al
 840dfda:	74 0a                	je     840dfe6 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x13c>
 840dfdc:	b8 00 00 00 00       	mov    $0x0,%eax
 840dfe1:	e9 84 00 00 00       	jmp    840e06a <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x1c0>
 840dfe6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840dfe9:	89 04 24             	mov    %eax,(%esp)
 840dfec:	e8 1f 63 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840dff1:	09 d0                	or     %edx,%eax
 840dff3:	85 c0                	test   %eax,%eax
 840dff5:	0f 94 c0             	sete   %al
 840dff8:	84 c0                	test   %al,%al
 840dffa:	74 69                	je     840e065 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x1bb>
 840dffc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840dfff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840e003:	8d 85 05 e3 ff ff    	lea    -0x1cfb(%ebp),%eax
 840e009:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e00d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840e014:	00 
 840e015:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840e018:	89 04 24             	mov    %eax,(%esp)
 840e01b:	e8 0a 65 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840e020:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840e023:	8b 92 08 18 00 00    	mov    0x1808(%edx),%edx
 840e029:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840e02d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e031:	c7 44 24 04 c8 6c c4 	movl   $0x8c46cc8,0x4(%esp)
 840e038:	08 
 840e039:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840e03c:	89 04 24             	mov    %eax,(%esp)
 840e03f:	e8 7c 61 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840e044:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840e04b:	00 
 840e04c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840e04f:	89 04 24             	mov    %eax,(%esp)
 840e052:	e8 cf 62 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840e057:	83 f0 01             	xor    $0x1,%eax
 840e05a:	84 c0                	test   %al,%al
 840e05c:	74 07                	je     840e065 <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x1bb>
 840e05e:	b8 00 00 00 00       	mov    $0x0,%eax
 840e063:	eb 05                	jmp    840e06a <_ZN18DB_SaveAchievement8dispatchEiiP6Stream+0x1c0>
 840e065:	b8 01 00 00 00       	mov    $0x1,%eax
 840e06a:	81 c4 10 1d 00 00    	add    $0x1d10,%esp
 840e070:	5b                   	pop    %ebx
 840e071:	5f                   	pop    %edi
 840e072:	5d                   	pop    %ebp
 840e073:	c3                   	ret

```

```c
// DB_SaveAchievement::dispatch @ 0x840deaa

/* DB_SaveAchievement::dispatch(int, int, Stream*) */

undefined4 DB_SaveAchievement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_1cff;
  char local_1cfe [7398];
  uint local_18;
  MySQL *local_14;
  stAchievement_DBSaveData *local_10;
  
  bVar8 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_10 = Stream::GetOutBuffer<stAchievement_DBSaveData>(in_stack_00000010);
  pcVar5 = &local_1cff;
  uVar6 = 0x1ce7;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_1cff = '\0';
    pcVar5 = local_1cfe;
    uVar6 = 0x1ce6;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  local_18 = 0x1ce7;
  cVar1 = compress_zip(&local_1cff,&local_18,(char *)local_10,0x1800);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(local_10 + 0x1808);
    uVar3 = MySQL::blob_to_str(local_14,0,&local_1cff,local_18);
    MySQL::set_query(local_14,
                     "upDate charac_achievement set achievement=\'%s\', last_update_time=now() where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar9 = MySQL::getAffectedRowCount(local_14);
      if (lVar9 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,&local_1cff,local_18);
        MySQL::set_query(local_14,
                         "inSert into charac_achievement(charac_no, achievement, last_update_time) values(%u, \'%s\', now())"
                         ,*(undefined4 *)(local_10 + 0x1808),uVar2);
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

