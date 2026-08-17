# DB_SaveObjectBringUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08446a1e DB_SaveObjectBringUp::dispatch  [0x08446a1e-0x8446d9d] ===
 8446a1e:	55                   	push   %ebp
 8446a1f:	89 e5                	mov    %esp,%ebp
 8446a21:	57                   	push   %edi
 8446a22:	56                   	push   %esi
 8446a23:	53                   	push   %ebx
 8446a24:	83 ec 6c             	sub    $0x6c,%esp
 8446a27:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446a2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446a33:	00 
 8446a34:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8446a3b:	00 
 8446a3c:	89 04 24             	mov    %eax,(%esp)
 8446a3f:	e8 fa e7 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8446a44:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8446a47:	8b 45 14             	mov    0x14(%ebp),%eax
 8446a4a:	89 04 24             	mov    %eax,(%esp)
 8446a4d:	e8 72 d9 00 00       	call   84543c4 <_ZN6Stream12GetOutBufferI19SIG_OBJECT_BRING_UPEEPT_v>
 8446a52:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8446a55:	e8 41 57 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8446a5a:	89 04 24             	mov    %eax,(%esp)
 8446a5d:	e8 00 a1 cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8446a62:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 8446a69:	00 
 8446a6a:	89 04 24             	mov    %eax,(%esp)
 8446a6d:	e8 9e 46 cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 8446a72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446a76:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446a79:	89 04 24             	mov    %eax,(%esp)
 8446a7c:	e8 2f 0f 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 8446a81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446a84:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8446a88:	84 c0                	test   %al,%al
 8446a8a:	0f 84 80 01 00 00    	je     8446c10 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x1f2>
 8446a90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446a93:	8b 00                	mov    (%eax),%eax
 8446a95:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8446a9c:	00 
 8446a9d:	89 04 24             	mov    %eax,(%esp)
 8446aa0:	e8 a6 25 cc ff       	call   810904b <_Z14NumberToStringji>
 8446aa5:	89 c3                	mov    %eax,%ebx
 8446aa7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446aaa:	8b 78 04             	mov    0x4(%eax),%edi
 8446aad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446ab0:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446ab4:	0f b6 f0             	movzbl %al,%esi
 8446ab7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446aba:	89 04 24             	mov    %eax,(%esp)
 8446abd:	e8 ee 7f 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8446ac2:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8446ac6:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8446aca:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446ace:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446ad2:	c7 44 24 04 a0 7c c5 	movl   $0x8c57ca0,0x4(%esp)
 8446ad9:	08 
 8446ada:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446add:	89 04 24             	mov    %eax,(%esp)
 8446ae0:	e8 db d6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446ae5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446aec:	00 
 8446aed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446af0:	89 04 24             	mov    %eax,(%esp)
 8446af3:	e8 2e d8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446af8:	83 f0 01             	xor    $0x1,%eax
 8446afb:	84 c0                	test   %al,%al
 8446afd:	74 0a                	je     8446b09 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0xeb>
 8446aff:	bb 00 00 00 00       	mov    $0x0,%ebx
 8446b04:	e9 80 02 00 00       	jmp    8446d89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x36b>
 8446b09:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446b0c:	89 04 24             	mov    %eax,(%esp)
 8446b0f:	e8 fc d7 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8446b14:	09 d0                	or     %edx,%eax
 8446b16:	85 c0                	test   %eax,%eax
 8446b18:	0f 94 c0             	sete   %al
 8446b1b:	84 c0                	test   %al,%al
 8446b1d:	0f 84 44 02 00 00    	je     8446d67 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x349>
 8446b23:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446b26:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8446b2a:	0f b6 c0             	movzbl %al,%eax
 8446b2d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8446b30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446b33:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446b37:	0f b6 f8             	movzbl %al,%edi
 8446b3a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446b3d:	8b 00                	mov    (%eax),%eax
 8446b3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8446b46:	00 
 8446b47:	89 04 24             	mov    %eax,(%esp)
 8446b4a:	e8 fc 24 cc ff       	call   810904b <_Z14NumberToStringji>
 8446b4f:	89 c3                	mov    %eax,%ebx
 8446b51:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446b54:	8b 70 04             	mov    0x4(%eax),%esi
 8446b57:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446b5a:	89 04 24             	mov    %eax,(%esp)
 8446b5d:	e8 4e 7f 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8446b62:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8446b65:	89 54 24 18          	mov    %edx,0x18(%esp)
 8446b69:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8446b6d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8446b71:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446b75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446b79:	c7 44 24 04 18 7d c5 	movl   $0x8c57d18,0x4(%esp)
 8446b80:	08 
 8446b81:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446b84:	89 04 24             	mov    %eax,(%esp)
 8446b87:	e8 34 d6 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446b8c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446b93:	00 
 8446b94:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446b97:	89 04 24             	mov    %eax,(%esp)
 8446b9a:	e8 87 d7 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446b9f:	83 f0 01             	xor    $0x1,%eax
 8446ba2:	84 c0                	test   %al,%al
 8446ba4:	0f 84 bd 01 00 00    	je     8446d67 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x349>
 8446baa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446bad:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8446bb1:	0f b6 f8             	movzbl %al,%edi
 8446bb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446bb7:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446bbb:	0f b6 f0             	movzbl %al,%esi
 8446bbe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446bc1:	8b 58 04             	mov    0x4(%eax),%ebx
 8446bc4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8446bcb:	00 
 8446bcc:	c7 44 24 08 bd ae 00 	movl   $0xaebd,0x8(%esp)
 8446bd3:	00 
 8446bd4:	c7 44 24 04 e0 b2 c5 	movl   $0x8c5b2e0,0x4(%esp)
 8446bdb:	08 
 8446bdc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8446bdf:	89 04 24             	mov    %eax,(%esp)
 8446be2:	e8 31 8b 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8446be7:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8446beb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446bef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8446bf3:	c7 44 24 04 7c 7d c5 	movl   $0x8c57d7c,0x4(%esp)
 8446bfa:	08 
 8446bfb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8446bfe:	89 04 24             	mov    %eax,(%esp)
 8446c01:	e8 82 8b 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8446c06:	bb 00 00 00 00       	mov    $0x0,%ebx
 8446c0b:	e9 79 01 00 00       	jmp    8446d89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x36b>
 8446c10:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446c13:	8b 00                	mov    (%eax),%eax
 8446c15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8446c1c:	00 
 8446c1d:	89 04 24             	mov    %eax,(%esp)
 8446c20:	e8 26 24 cc ff       	call   810904b <_Z14NumberToStringji>
 8446c25:	89 c3                	mov    %eax,%ebx
 8446c27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446c2a:	8b 78 04             	mov    0x4(%eax),%edi
 8446c2d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446c30:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446c34:	0f b6 f0             	movzbl %al,%esi
 8446c37:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446c3a:	89 04 24             	mov    %eax,(%esp)
 8446c3d:	e8 6e 7e 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8446c42:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8446c46:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8446c4a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446c4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446c52:	c7 44 24 04 d0 7d c5 	movl   $0x8c57dd0,0x4(%esp)
 8446c59:	08 
 8446c5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446c5d:	89 04 24             	mov    %eax,(%esp)
 8446c60:	e8 5b d5 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446c65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446c6c:	00 
 8446c6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446c70:	89 04 24             	mov    %eax,(%esp)
 8446c73:	e8 ae d6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446c78:	83 f0 01             	xor    $0x1,%eax
 8446c7b:	84 c0                	test   %al,%al
 8446c7d:	74 0a                	je     8446c89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x26b>
 8446c7f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8446c84:	e9 00 01 00 00       	jmp    8446d89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x36b>
 8446c89:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446c8c:	89 04 24             	mov    %eax,(%esp)
 8446c8f:	e8 7c d6 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8446c94:	09 d0                	or     %edx,%eax
 8446c96:	85 c0                	test   %eax,%eax
 8446c98:	0f 94 c0             	sete   %al
 8446c9b:	84 c0                	test   %al,%al
 8446c9d:	0f 84 c4 00 00 00    	je     8446d67 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x349>
 8446ca3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446ca6:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446caa:	0f b6 f8             	movzbl %al,%edi
 8446cad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446cb0:	8b 00                	mov    (%eax),%eax
 8446cb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8446cb9:	00 
 8446cba:	89 04 24             	mov    %eax,(%esp)
 8446cbd:	e8 89 23 cc ff       	call   810904b <_Z14NumberToStringji>
 8446cc2:	89 c3                	mov    %eax,%ebx
 8446cc4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446cc7:	8b 70 04             	mov    0x4(%eax),%esi
 8446cca:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446ccd:	89 04 24             	mov    %eax,(%esp)
 8446cd0:	e8 db 7d 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8446cd5:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8446cd9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8446cdd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446ce1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446ce5:	c7 44 24 04 24 7e c5 	movl   $0x8c57e24,0x4(%esp)
 8446cec:	08 
 8446ced:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446cf0:	89 04 24             	mov    %eax,(%esp)
 8446cf3:	e8 c8 d4 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446cf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446cff:	00 
 8446d00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8446d03:	89 04 24             	mov    %eax,(%esp)
 8446d06:	e8 1b d6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446d0b:	83 f0 01             	xor    $0x1,%eax
 8446d0e:	84 c0                	test   %al,%al
 8446d10:	74 55                	je     8446d67 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x349>
 8446d12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446d15:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8446d19:	0f b6 f0             	movzbl %al,%esi
 8446d1c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446d1f:	8b 58 04             	mov    0x4(%eax),%ebx
 8446d22:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8446d29:	00 
 8446d2a:	c7 44 24 08 ce ae 00 	movl   $0xaece,0x8(%esp)
 8446d31:	00 
 8446d32:	c7 44 24 04 e0 b2 c5 	movl   $0x8c5b2e0,0x4(%esp)
 8446d39:	08 
 8446d3a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8446d3d:	89 04 24             	mov    %eax,(%esp)
 8446d40:	e8 d3 89 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8446d45:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8446d49:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8446d4d:	c7 44 24 04 68 7e c5 	movl   $0x8c57e68,0x4(%esp)
 8446d54:	08 
 8446d55:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8446d58:	89 04 24             	mov    %eax,(%esp)
 8446d5b:	e8 28 8a 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8446d60:	bb 00 00 00 00       	mov    $0x0,%ebx
 8446d65:	eb 22                	jmp    8446d89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x36b>
 8446d67:	bb 01 00 00 00       	mov    $0x1,%ebx
 8446d6c:	eb 1b                	jmp    8446d89 <_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream+0x36b>
 8446d6e:	89 d3                	mov    %edx,%ebx
 8446d70:	89 c6                	mov    %eax,%esi
 8446d72:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446d75:	89 04 24             	mov    %eax,(%esp)
 8446d78:	e8 63 0e 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8446d7d:	89 f0                	mov    %esi,%eax
 8446d7f:	89 da                	mov    %ebx,%edx
 8446d81:	89 04 24             	mov    %eax,(%esp)
 8446d84:	e8 c7 c9 69 00       	call   8ae3750 <_Unwind_Resume>
 8446d89:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8446d8c:	89 04 24             	mov    %eax,(%esp)
 8446d8f:	e8 4c 0e 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8446d94:	89 d8                	mov    %ebx,%eax
 8446d96:	83 c4 6c             	add    $0x6c,%esp
 8446d99:	5b                   	pop    %ebx
 8446d9a:	5e                   	pop    %esi
 8446d9b:	5f                   	pop    %edi
 8446d9c:	5d                   	pop    %ebp
 8446d9d:	c3                   	ret

```

```c
// DB_SaveObjectBringUp::dispatch @ 0x8446a1e

/* DB_SaveObjectBringUp::dispatch(int, int, Stream*) */

undefined4 DB_SaveObjectBringUp::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_OBJECT_BRING_UP SVar1;
  SIG_OBJECT_BRING_UP SVar2;
  uint uVar3;
  char cVar4;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  string local_48;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_OBJECT_BRING_UP *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_OBJECT_BRING_UP>(in_stack_00000010);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar5 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x19b);
  std::string::string((string *)&local_48,psVar5);
  if (local_20[0xd] == (SIG_OBJECT_BRING_UP)0x0) {
    uVar6 = NumberToString(*(uint *)local_20,0);
    uVar3 = *(uint *)(local_20 + 4);
    SVar1 = local_20[0xc];
    pTVar7 = toTString(&local_48);
    MySQL::set_query(local_24,
                     "upDate %s set use_material_cnt=use_material_cnt+%u where charac_no=%u and m_id=%s"
                     ,pTVar7,(uint)(byte)SVar1,uVar3,uVar6);
    cVar4 = MySQL::exec(local_24,true);
    if (cVar4 != '\x01') {
      uVar6 = 0;
      goto LAB_08446d89;
    }
    lVar8 = MySQL::getAffectedRowCount(local_24);
    if (lVar8 == 0) {
      SVar1 = local_20[0xc];
      uVar6 = NumberToString(*(uint *)local_20,0);
      uVar3 = *(uint *)(local_20 + 4);
      pTVar7 = toTString(&local_48);
      MySQL::set_query(local_24,"inSert into %s(charac_no,m_id,use_material_cnt) values(%u,%s,%u)",
                       pTVar7,uVar3,uVar6,(uint)(byte)SVar1);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 != '\x01') {
        SVar1 = local_20[0xc];
        uVar3 = *(uint *)(local_20 + 4);
        cMyTrace::cMyTrace(local_34,"virtual bool DB_SaveObjectBringUp::dispatch(int, int, Stream*)"
                           ,0xaece,5);
        cMyTrace::operator()
                  (local_34,
                   "upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u)",uVar3,
                   (uint)(byte)SVar1);
        uVar6 = 0;
        goto LAB_08446d89;
      }
    }
  }
  else {
                    /* try { // try from 08446aa0 to 08446d5f has its CatchHandler @ 08446d6e */
    uVar6 = NumberToString(*(uint *)local_20,0);
    uVar3 = *(uint *)(local_20 + 4);
    SVar1 = local_20[0xc];
    pTVar7 = toTString(&local_48);
    MySQL::set_query(local_24,
                     "upDate %s set use_material_cnt=use_material_cnt+%u, give_reward_flag=1, occ_date = now() where charac_no=%u and m_id=%s"
                     ,pTVar7,(uint)(byte)SVar1,uVar3,uVar6);
    cVar4 = MySQL::exec(local_24,true);
    if (cVar4 != '\x01') {
      uVar6 = 0;
      goto LAB_08446d89;
    }
    lVar8 = MySQL::getAffectedRowCount(local_24);
    if (lVar8 == 0) {
      SVar1 = local_20[0xd];
      SVar2 = local_20[0xc];
      uVar6 = NumberToString(*(uint *)local_20,0);
      uVar3 = *(uint *)(local_20 + 4);
      pTVar7 = toTString(&local_48);
      MySQL::set_query(local_24,
                       "inSert into %s(charac_no,m_id,use_material_cnt,give_reward_flag,occ_date) values(%u,%s,%u,%u,now())"
                       ,pTVar7,uVar3,uVar6,(uint)(byte)SVar2,(uint)(byte)SVar1);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 != '\x01') {
        SVar1 = local_20[0xd];
        SVar2 = local_20[0xc];
        uVar3 = *(uint *)(local_20 + 4);
        cMyTrace::cMyTrace(local_44,"virtual bool DB_SaveObjectBringUp::dispatch(int, int, Stream*)"
                           ,0xaebd,5);
        cMyTrace::operator()
                  (local_44,
                   "upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u),flag(%u)"
                   ,uVar3,(uint)(byte)SVar2,(uint)(byte)SVar1);
        uVar6 = 0;
        goto LAB_08446d89;
      }
    }
  }
  uVar6 = 1;
LAB_08446d89:
  std::string::~string((string *)&local_48);
  return uVar6;
}

```

