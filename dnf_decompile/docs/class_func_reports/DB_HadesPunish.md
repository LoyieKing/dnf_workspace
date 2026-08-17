# DB_HadesPunish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08445aa6 DB_HadesPunish::dispatch  [0x08445aa6-0x8445dd3] ===
 8445aa6:	55                   	push   %ebp
 8445aa7:	89 e5                	mov    %esp,%ebp
 8445aa9:	81 ec d8 01 00 00    	sub    $0x1d8,%esp
 8445aaf:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8445ab4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8445abb:	00 
 8445abc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445ac3:	00 
 8445ac4:	89 04 24             	mov    %eax,(%esp)
 8445ac7:	e8 72 f7 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8445acc:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8445acf:	8b 45 14             	mov    0x14(%ebp),%eax
 8445ad2:	89 04 24             	mov    %eax,(%esp)
 8445ad5:	e8 58 e7 00 00       	call   8454232 <_ZN6Stream12GetOutBufferI16SIG_HADES_PUNISHEEPT_v>
 8445ada:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8445add:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445ae0:	8b 40 08             	mov    0x8(%eax),%eax
 8445ae3:	85 c0                	test   %eax,%eax
 8445ae5:	75 20                	jne    8445b07 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x61>
 8445ae7:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8445aee:	00 
 8445aef:	c7 44 24 04 e3 77 c5 	movl   $0x8c577e3,0x4(%esp)
 8445af6:	08 
 8445af7:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8445afd:	89 04 24             	mov    %eax,(%esp)
 8445b00:	e8 9b 7d c3 ff       	call   807d8a0 <memcpy@plt>
 8445b05:	eb 20                	jmp    8445b27 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x81>
 8445b07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445b0a:	8b 40 08             	mov    0x8(%eax),%eax
 8445b0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445b11:	c7 44 24 04 fc 77 c5 	movl   $0x8c577fc,0x4(%esp)
 8445b18:	08 
 8445b19:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8445b1f:	89 04 24             	mov    %eax,(%esp)
 8445b22:	e8 19 89 c3 ff       	call   807e440 <sprintf@plt>
 8445b27:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445b2a:	8b 40 0c             	mov    0xc(%eax),%eax
 8445b2d:	85 c0                	test   %eax,%eax
 8445b2f:	74 07                	je     8445b38 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x92>
 8445b31:	b8 02 00 00 00       	mov    $0x2,%eax
 8445b36:	eb 05                	jmp    8445b3d <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x97>
 8445b38:	b8 01 00 00 00       	mov    $0x1,%eax
 8445b3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8445b40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8445b47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445b4a:	8b 40 04             	mov    0x4(%eax),%eax
 8445b4d:	83 f8 01             	cmp    $0x1,%eax
 8445b50:	75 09                	jne    8445b5b <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0xb5>
 8445b52:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 8445b59:	eb 07                	jmp    8445b62 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0xbc>
 8445b5b:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
 8445b62:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445b65:	8b 00                	mov    (%eax),%eax
 8445b67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445b6e:	00 
 8445b6f:	89 04 24             	mov    %eax,(%esp)
 8445b72:	e8 d4 34 cc ff       	call   810904b <_Z14NumberToStringji>
 8445b77:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8445b7a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8445b7e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8445b82:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445b85:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8445b89:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8445b8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445b93:	c7 44 24 04 1c 78 c5 	movl   $0x8c5781c,0x4(%esp)
 8445b9a:	08 
 8445b9b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445b9e:	89 04 24             	mov    %eax,(%esp)
 8445ba1:	e8 1a e6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445ba6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445bad:	00 
 8445bae:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445bb1:	89 04 24             	mov    %eax,(%esp)
 8445bb4:	e8 6d e7 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445bb9:	83 f0 01             	xor    $0x1,%eax
 8445bbc:	84 c0                	test   %al,%al
 8445bbe:	75 11                	jne    8445bd1 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x12b>
 8445bc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445bc3:	89 04 24             	mov    %eax,(%esp)
 8445bc6:	e8 45 e7 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8445bcb:	09 d0                	or     %edx,%eax
 8445bcd:	85 c0                	test   %eax,%eax
 8445bcf:	75 07                	jne    8445bd8 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x132>
 8445bd1:	b8 01 00 00 00       	mov    $0x1,%eax
 8445bd6:	eb 05                	jmp    8445bdd <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x137>
 8445bd8:	b8 00 00 00 00       	mov    $0x0,%eax
 8445bdd:	84 c0                	test   %al,%al
 8445bdf:	74 68                	je     8445c49 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x1a3>
 8445be1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445be4:	8b 00                	mov    (%eax),%eax
 8445be6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445bed:	00 
 8445bee:	89 04 24             	mov    %eax,(%esp)
 8445bf1:	e8 55 34 cc ff       	call   810904b <_Z14NumberToStringji>
 8445bf6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8445bf9:	89 54 24 14          	mov    %edx,0x14(%esp)
 8445bfd:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 8445c03:	89 54 24 10          	mov    %edx,0x10(%esp)
 8445c07:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8445c0a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8445c0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445c12:	c7 44 24 04 98 78 c5 	movl   $0x8c57898,0x4(%esp)
 8445c19:	08 
 8445c1a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445c1d:	89 04 24             	mov    %eax,(%esp)
 8445c20:	e8 9b e5 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445c25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445c2c:	00 
 8445c2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445c30:	89 04 24             	mov    %eax,(%esp)
 8445c33:	e8 ee e6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445c38:	83 f0 01             	xor    $0x1,%eax
 8445c3b:	84 c0                	test   %al,%al
 8445c3d:	74 0a                	je     8445c49 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x1a3>
 8445c3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8445c44:	e9 88 01 00 00       	jmp    8445dd1 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x32b>
 8445c49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445c4c:	8b 40 04             	mov    0x4(%eax),%eax
 8445c4f:	83 f8 01             	cmp    $0x1,%eax
 8445c52:	75 20                	jne    8445c74 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x1ce>
 8445c54:	c7 44 24 08 a6 00 00 	movl   $0xa6,0x8(%esp)
 8445c5b:	00 
 8445c5c:	c7 44 24 04 30 79 c5 	movl   $0x8c57930,0x4(%esp)
 8445c63:	08 
 8445c64:	8d 85 49 fe ff ff    	lea    -0x1b7(%ebp),%eax
 8445c6a:	89 04 24             	mov    %eax,(%esp)
 8445c6d:	e8 2e 7c c3 ff       	call   807d8a0 <memcpy@plt>
 8445c72:	eb 1e                	jmp    8445c92 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x1ec>
 8445c74:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 8445c7b:	00 
 8445c7c:	c7 44 24 04 d8 79 c5 	movl   $0x8c579d8,0x4(%esp)
 8445c83:	08 
 8445c84:	8d 85 49 fe ff ff    	lea    -0x1b7(%ebp),%eax
 8445c8a:	89 04 24             	mov    %eax,(%esp)
 8445c8d:	e8 0e 7c c3 ff       	call   807d8a0 <memcpy@plt>
 8445c92:	c7 45 de 00 00 00 00 	movl   $0x0,-0x22(%ebp)
 8445c99:	c7 45 e2 00 00 00 00 	movl   $0x0,-0x1e(%ebp)
 8445ca0:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8445ca6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8445cad:	e8 ec 5f c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8445cb2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8445cb5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8445cb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445cbc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8445cbf:	89 04 24             	mov    %eax,(%esp)
 8445cc2:	e8 99 86 c3 ff       	call   807e360 <localtime_r@plt>
 8445cc7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8445cca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8445cce:	c7 44 24 08 97 0b c5 	movl   $0x8c50b97,0x8(%esp)
 8445cd5:	08 
 8445cd6:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8445cdd:	00 
 8445cde:	8d 45 de             	lea    -0x22(%ebp),%eax
 8445ce1:	89 04 24             	mov    %eax,(%esp)
 8445ce4:	e8 d7 7e c3 ff       	call   807dbc0 <strftime@plt>
 8445ce9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445cec:	8b 00                	mov    (%eax),%eax
 8445cee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445cf5:	00 
 8445cf6:	89 04 24             	mov    %eax,(%esp)
 8445cf9:	e8 4d 33 cc ff       	call   810904b <_Z14NumberToStringji>
 8445cfe:	8d 95 49 fe ff ff    	lea    -0x1b7(%ebp),%edx
 8445d04:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8445d08:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8445d0b:	89 54 24 18          	mov    %edx,0x18(%esp)
 8445d0f:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 8445d15:	89 54 24 14          	mov    %edx,0x14(%esp)
 8445d19:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8445d1c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8445d20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8445d24:	8d 45 de             	lea    -0x22(%ebp),%eax
 8445d27:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445d2b:	c7 44 24 04 18 7a c5 	movl   $0x8c57a18,0x4(%esp)
 8445d32:	08 
 8445d33:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445d36:	89 04 24             	mov    %eax,(%esp)
 8445d39:	e8 82 e4 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445d3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445d45:	00 
 8445d46:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445d49:	89 04 24             	mov    %eax,(%esp)
 8445d4c:	e8 d5 e5 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445d51:	83 f0 01             	xor    $0x1,%eax
 8445d54:	84 c0                	test   %al,%al
 8445d56:	74 07                	je     8445d5f <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x2b9>
 8445d58:	b8 00 00 00 00       	mov    $0x0,%eax
 8445d5d:	eb 72                	jmp    8445dd1 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x32b>
 8445d5f:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8445d63:	74 0c                	je     8445d71 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x2cb>
 8445d65:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 8445d69:	75 61                	jne    8445dcc <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x326>
 8445d6b:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8445d6f:	75 5b                	jne    8445dcc <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x326>
 8445d71:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445d74:	8b 00                	mov    (%eax),%eax
 8445d76:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445d7d:	00 
 8445d7e:	89 04 24             	mov    %eax,(%esp)
 8445d81:	e8 c5 32 cc ff       	call   810904b <_Z14NumberToStringji>
 8445d86:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8445d89:	89 54 24 10          	mov    %edx,0x10(%esp)
 8445d8d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8445d90:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8445d94:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445d98:	c7 44 24 04 4c 0d c5 	movl   $0x8c50d4c,0x4(%esp)
 8445d9f:	08 
 8445da0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445da3:	89 04 24             	mov    %eax,(%esp)
 8445da6:	e8 15 e4 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445dab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445db2:	00 
 8445db3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445db6:	89 04 24             	mov    %eax,(%esp)
 8445db9:	e8 68 e5 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445dbe:	83 f0 01             	xor    $0x1,%eax
 8445dc1:	84 c0                	test   %al,%al
 8445dc3:	74 07                	je     8445dcc <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x326>
 8445dc5:	b8 00 00 00 00       	mov    $0x0,%eax
 8445dca:	eb 05                	jmp    8445dd1 <_ZN14DB_HadesPunish8dispatchEiiP6Stream+0x32b>
 8445dcc:	b8 01 00 00 00       	mov    $0x1,%eax
 8445dd1:	c9                   	leave
 8445dd2:	c3                   	ret
 8445dd3:	90                   	nop

```

```c
// DB_HadesPunish::dispatch @ 0x8445aa6

/* DB_HadesPunish::dispatch(int, int, Stream*) */

undefined4 DB_HadesPunish::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_1bb [255];
  char local_bc [100];
  tm local_58;
  time_t local_2c;
  char local_26 [10];
  MySQL *local_1c;
  SIG_HADES_PUNISH *local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_18 = Stream::GetOutBuffer<SIG_HADES_PUNISH>(in_stack_00000010);
  if (*(int *)(local_18 + 8) == 0) {
    memcpy(local_bc,"\'9999-12-31 23:59:59\'",0x16);
  }
  else {
    sprintf(local_bc,"adddate(now(),interval %d day)",*(undefined4 *)(local_18 + 8));
  }
  if (*(uint *)(local_18 + 0xc) == 0) {
    local_14 = 1;
  }
  else {
    local_14 = 2;
  }
  if (*(uint *)(local_18 + 4) == 1) {
    local_10 = 3;
  }
  else {
    local_10 = 0xc;
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_1c,
                   "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=%s, apply_flag=%d where m_id=%s and punish_type=%d"
                   ,local_bc,local_14,uVar3,local_10);
  cVar2 = MySQL::exec(local_1c,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_1c), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_1c,
                     "inSert into member_punish_info (m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), %s, 0, %d)"
                     ,uVar3,local_10,local_bc,local_14);
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  if (*(uint *)(local_18 + 4) == 1) {
    memcpy(local_1bb,&DAT_08c57930,0xa6);
  }
  else {
    memcpy(local_1bb,&DAT_08c579d8,0x3d);
  }
  local_26[0] = '\0';
  local_26[1] = '\0';
  local_26[2] = '\0';
  local_26[3] = '\0';
  local_26[4] = '\0';
  local_26[5] = '\0';
  local_26[6] = '\0';
  local_26[7] = '\0';
  local_26[8] = '\0';
  local_26[9] = '\0';
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_2c,&local_58);
  strftime(local_26,10,"%Y",&local_58);
  uVar3 = NumberToString(*(uint *)local_18,0);
  puVar7 = local_1bb;
  pcVar5 = local_bc;
  iVar6 = local_14;
  MySQL::set_query(local_1c,
                   "inSert into member_punish_info_history_%s (m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), %s, \'HADES\', %d, \'%s\') "
                   ,local_26,uVar3,local_10,pcVar5,local_14,puVar7);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    if ((local_10 == 3) || ((local_10 == 0xc && (local_14 == 1)))) {
      uVar3 = NumberToString(*(uint *)local_18,0);
      MySQL::set_query(local_1c,
                       "inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())"
                       ,uVar3,local_10,local_14,pcVar5,iVar6,puVar7);
      cVar2 = MySQL::exec(local_1c,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## makeRequest

```asm
// === 08445dd4 DB_HadesPunish::makeRequest  [0x08445dd4-0x8445eed] ===
 8445dd4:	55                   	push   %ebp
 8445dd5:	89 e5                	mov    %esp,%ebp
 8445dd7:	56                   	push   %esi
 8445dd8:	53                   	push   %ebx
 8445dd9:	83 ec 20             	sub    $0x20,%esp
 8445ddc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8445de1:	c7 44 24 08 59 ad 00 	movl   $0xad59,0x8(%esp)
 8445de8:	00 
 8445de9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8445df0:	08 
 8445df1:	89 04 24             	mov    %eax,(%esp)
 8445df4:	e8 8d 9c e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8445df9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8445e00:	00 
 8445e01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445e05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445e08:	89 04 24             	mov    %eax,(%esp)
 8445e0b:	e8 16 2e c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8445e10:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445e13:	89 04 24             	mov    %eax,(%esp)
 8445e16:	e8 2b 2e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8445e1b:	c7 44 24 04 b6 02 00 	movl   $0x2b6,0x4(%esp)
 8445e22:	00 
 8445e23:	89 04 24             	mov    %eax,(%esp)
 8445e26:	e8 2b 2e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8445e2b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445e2e:	89 04 24             	mov    %eax,(%esp)
 8445e31:	e8 10 2e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8445e36:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8445e3d:	ff 
 8445e3e:	89 04 24             	mov    %eax,(%esp)
 8445e41:	e8 10 2e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8445e46:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445e49:	89 04 24             	mov    %eax,(%esp)
 8445e4c:	e8 fd 2d c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8445e51:	89 04 24             	mov    %eax,(%esp)
 8445e54:	e8 2d e4 00 00       	call   8454286 <_ZN12CStreamGuard11GetInBufferI16SIG_HADES_PUNISHEEPT_v>
 8445e59:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8445e5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e5f:	8b 55 08             	mov    0x8(%ebp),%edx
 8445e62:	89 10                	mov    %edx,(%eax)
 8445e64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e67:	8b 55 0c             	mov    0xc(%ebp),%edx
 8445e6a:	89 50 04             	mov    %edx,0x4(%eax)
 8445e6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e70:	8b 55 10             	mov    0x10(%ebp),%edx
 8445e73:	89 50 08             	mov    %edx,0x8(%eax)
 8445e76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e79:	8b 55 14             	mov    0x14(%ebp),%edx
 8445e7c:	89 50 0c             	mov    %edx,0xc(%eax)
 8445e7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e82:	8b 55 18             	mov    0x18(%ebp),%edx
 8445e85:	89 50 10             	mov    %edx,0x10(%eax)
 8445e88:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8445e8c:	74 15                	je     8445ea3 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc+0xcf>
 8445e8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445e91:	8d 50 14             	lea    0x14(%eax),%edx
 8445e94:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8445e97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445e9b:	89 14 24             	mov    %edx,(%esp)
 8445e9e:	e8 4d 80 c3 ff       	call   807def0 <strcpy@plt>
 8445ea3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8445ea8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8445eab:	89 54 24 08          	mov    %edx,0x8(%esp)
 8445eaf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8445eb6:	00 
 8445eb7:	89 04 24             	mov    %eax,(%esp)
 8445eba:	e8 1f b1 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8445ebf:	eb 1b                	jmp    8445edc <_ZN14DB_HadesPunish11makeRequestEjjjjjPc+0x108>
 8445ec1:	89 d3                	mov    %edx,%ebx
 8445ec3:	89 c6                	mov    %eax,%esi
 8445ec5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445ec8:	89 04 24             	mov    %eax,(%esp)
 8445ecb:	e8 02 6a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8445ed0:	89 f0                	mov    %esi,%eax
 8445ed2:	89 da                	mov    %ebx,%edx
 8445ed4:	89 04 24             	mov    %eax,(%esp)
 8445ed7:	e8 74 d8 69 00       	call   8ae3750 <_Unwind_Resume>
 8445edc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445edf:	89 04 24             	mov    %eax,(%esp)
 8445ee2:	e8 eb 69 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8445ee7:	83 c4 20             	add    $0x20,%esp
 8445eea:	5b                   	pop    %ebx
 8445eeb:	5e                   	pop    %esi
 8445eec:	5d                   	pop    %ebp
 8445eed:	c3                   	ret

```

```c
// DB_HadesPunish::makeRequest @ 0x8445dd4

/* DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   char*) */

void DB_HadesPunish::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,char *param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_HADES_PUNISH *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xad59);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08445e26 to 08445ebe has its CatchHandler @ 08445ec1 */
  CStreamGuard::operator<<(pCVar2,0x2b6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_HADES_PUNISH>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  *(uint *)(local_10 + 0xc) = param_4;
  *(uint *)(local_10 + 0x10) = param_5;
  if (param_6 != (char *)0x0) {
    strcpy((char *)(local_10 + 0x14),param_6);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

