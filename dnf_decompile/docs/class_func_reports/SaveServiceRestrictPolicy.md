# SaveServiceRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0815ad3c SaveServiceRestrictPolicy::dispatch  [0x0815ad3c-0x815b00f] ===
 815ad3c:	55                   	push   %ebp
 815ad3d:	89 e5                	mov    %esp,%ebp
 815ad3f:	56                   	push   %esi
 815ad40:	53                   	push   %ebx
 815ad41:	83 ec 40             	sub    $0x40,%esp
 815ad44:	8b 45 14             	mov    0x14(%ebp),%eax
 815ad47:	89 04 24             	mov    %eax,(%esp)
 815ad4a:	e8 69 3c 00 00       	call   815e9b8 <_ZN6Stream12GetOutBufferIN6Taiwan21SigLoadRestrictPolicyEEEPT_v>
 815ad4f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 815ad52:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 815ad56:	75 2c                	jne    815ad84 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x48>
 815ad58:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815ad5f:	e8 9c aa 5c 00       	call   8725800 <__cxa_allocate_exception>
 815ad64:	89 c2                	mov    %eax,%edx
 815ad66:	c7 02 06 73 b7 08    	movl   $0x8b77306,(%edx)
 815ad6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ad73:	00 
 815ad74:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815ad7b:	09 
 815ad7c:	89 04 24             	mov    %eax,(%esp)
 815ad7f:	e8 cc 9e 5c 00       	call   8724c50 <__cxa_throw>
 815ad84:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815ad89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ad90:	00 
 815ad91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815ad98:	00 
 815ad99:	89 04 24             	mov    %eax,(%esp)
 815ad9c:	e8 9d a4 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815ada1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 815ada4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 815ada8:	75 2c                	jne    815add6 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x9a>
 815adaa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815adb1:	e8 4a aa 5c 00       	call   8725800 <__cxa_allocate_exception>
 815adb6:	89 c2                	mov    %eax,%edx
 815adb8:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815adbe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815adc5:	00 
 815adc6:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815adcd:	09 
 815adce:	89 04 24             	mov    %eax,(%esp)
 815add1:	e8 7a 9e 5c 00       	call   8724c50 <__cxa_throw>
 815add6:	e8 a6 13 f7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815addb:	89 04 24             	mov    %eax,(%esp)
 815adde:	e8 fd be fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815ade3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 815ade6:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 815aded:	e9 bc 00 00 00       	jmp    815aeae <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x172>
 815adf2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815adf5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 815adf8:	0f b6 84 02 9c 11 00 	movzbl 0x119c(%edx,%eax,1),%eax
 815adff:	00 
 815ae00:	0f be d0             	movsbl %al,%edx
 815ae03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815ae06:	8b 00                	mov    (%eax),%eax
 815ae08:	89 54 24 14          	mov    %edx,0x14(%esp)
 815ae0c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 815ae0f:	89 54 24 10          	mov    %edx,0x10(%esp)
 815ae13:	89 44 24 0c          	mov    %eax,0xc(%esp)
 815ae17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815ae1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 815ae1e:	c7 44 24 04 14 73 b7 	movl   $0x8b77314,0x4(%esp)
 815ae25:	08 
 815ae26:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815ae29:	89 04 24             	mov    %eax,(%esp)
 815ae2c:	e8 8f 93 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815ae31:	83 f0 01             	xor    $0x1,%eax
 815ae34:	84 c0                	test   %al,%al
 815ae36:	74 2c                	je     815ae64 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x128>
 815ae38:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815ae3f:	e8 bc a9 5c 00       	call   8725800 <__cxa_allocate_exception>
 815ae44:	89 c2                	mov    %eax,%edx
 815ae46:	c7 02 6d 72 b7 08    	movl   $0x8b7726d,(%edx)
 815ae4c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ae53:	00 
 815ae54:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815ae5b:	09 
 815ae5c:	89 04 24             	mov    %eax,(%esp)
 815ae5f:	e8 ec 9d 5c 00       	call   8724c50 <__cxa_throw>
 815ae64:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815ae6b:	00 
 815ae6c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815ae6f:	89 04 24             	mov    %eax,(%esp)
 815ae72:	e8 af 94 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815ae77:	83 f0 01             	xor    $0x1,%eax
 815ae7a:	84 c0                	test   %al,%al
 815ae7c:	74 2c                	je     815aeaa <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x16e>
 815ae7e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815ae85:	e8 76 a9 5c 00       	call   8725800 <__cxa_allocate_exception>
 815ae8a:	89 c2                	mov    %eax,%edx
 815ae8c:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815ae92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ae99:	00 
 815ae9a:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815aea1:	09 
 815aea2:	89 04 24             	mov    %eax,(%esp)
 815aea5:	e8 a6 9d 5c 00       	call   8724c50 <__cxa_throw>
 815aeaa:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 815aeae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815aeb1:	8b 40 04             	mov    0x4(%eax),%eax
 815aeb4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 815aeb7:	0f 9d c0             	setge  %al
 815aeba:	84 c0                	test   %al,%al
 815aebc:	0f 85 30 ff ff ff    	jne    815adf2 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0xb6>
 815aec2:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 815aec9:	e9 b2 00 00 00       	jmp    815af80 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x244>
 815aece:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815aed1:	6b c0 2d             	imul   $0x2d,%eax,%eax
 815aed4:	03 45 e0             	add    -0x20(%ebp),%eax
 815aed7:	83 c0 08             	add    $0x8,%eax
 815aeda:	89 c2                	mov    %eax,%edx
 815aedc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815aedf:	8b 00                	mov    (%eax),%eax
 815aee1:	89 54 24 10          	mov    %edx,0x10(%esp)
 815aee5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 815aee8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 815aeec:	89 44 24 08          	mov    %eax,0x8(%esp)
 815aef0:	c7 44 24 04 c0 73 b7 	movl   $0x8b773c0,0x4(%esp)
 815aef7:	08 
 815aef8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815aefb:	89 04 24             	mov    %eax,(%esp)
 815aefe:	e8 bd 92 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815af03:	83 f0 01             	xor    $0x1,%eax
 815af06:	84 c0                	test   %al,%al
 815af08:	74 2c                	je     815af36 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x1fa>
 815af0a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815af11:	e8 ea a8 5c 00       	call   8725800 <__cxa_allocate_exception>
 815af16:	89 c2                	mov    %eax,%edx
 815af18:	c7 02 6d 72 b7 08    	movl   $0x8b7726d,(%edx)
 815af1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815af25:	00 
 815af26:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815af2d:	09 
 815af2e:	89 04 24             	mov    %eax,(%esp)
 815af31:	e8 1a 9d 5c 00       	call   8724c50 <__cxa_throw>
 815af36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815af3d:	00 
 815af3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815af41:	89 04 24             	mov    %eax,(%esp)
 815af44:	e8 dd 93 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815af49:	83 f0 01             	xor    $0x1,%eax
 815af4c:	84 c0                	test   %al,%al
 815af4e:	74 2c                	je     815af7c <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x240>
 815af50:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815af57:	e8 a4 a8 5c 00       	call   8725800 <__cxa_allocate_exception>
 815af5c:	89 c2                	mov    %eax,%edx
 815af5e:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815af64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815af6b:	00 
 815af6c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815af73:	09 
 815af74:	89 04 24             	mov    %eax,(%esp)
 815af77:	e8 d4 9c 5c 00       	call   8724c50 <__cxa_throw>
 815af7c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 815af80:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815af83:	8b 40 04             	mov    0x4(%eax),%eax
 815af86:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 815af89:	0f 9d c0             	setge  %al
 815af8c:	84 c0                	test   %al,%al
 815af8e:	0f 85 3a ff ff ff    	jne    815aece <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x192>
 815af94:	bb 01 00 00 00       	mov    $0x1,%ebx
 815af99:	eb 6c                	jmp    815b007 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x2cb>
 815af9b:	83 fa 01             	cmp    $0x1,%edx
 815af9e:	74 08                	je     815afa8 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x26c>
 815afa0:	89 04 24             	mov    %eax,(%esp)
 815afa3:	e8 a8 87 98 00       	call   8ae3750 <_Unwind_Resume>
 815afa8:	89 04 24             	mov    %eax,(%esp)
 815afab:	e8 30 ad 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815afb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815afb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815afb6:	89 44 24 14          	mov    %eax,0x14(%esp)
 815afba:	c7 44 24 10 98 72 b7 	movl   $0x8b77298,0x10(%esp)
 815afc1:	08 
 815afc2:	c7 44 24 0c 0e 01 00 	movl   $0x10e,0xc(%esp)
 815afc9:	00 
 815afca:	c7 44 24 08 60 92 b7 	movl   $0x8b79260,0x8(%esp)
 815afd1:	08 
 815afd2:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815afd9:	08 
 815afda:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815afe1:	e8 24 8c 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815afe6:	bb 00 00 00 00       	mov    $0x0,%ebx
 815afeb:	e8 40 ac 5c 00       	call   8725c30 <__cxa_end_catch>
 815aff0:	eb 15                	jmp    815b007 <_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream+0x2cb>
 815aff2:	89 d3                	mov    %edx,%ebx
 815aff4:	89 c6                	mov    %eax,%esi
 815aff6:	e8 35 ac 5c 00       	call   8725c30 <__cxa_end_catch>
 815affb:	89 f0                	mov    %esi,%eax
 815affd:	89 da                	mov    %ebx,%edx
 815afff:	89 04 24             	mov    %eax,(%esp)
 815b002:	e8 49 87 98 00       	call   8ae3750 <_Unwind_Resume>
 815b007:	89 d8                	mov    %ebx,%eax
 815b009:	83 c4 40             	add    $0x40,%esp
 815b00c:	5b                   	pop    %ebx
 815b00d:	5e                   	pop    %esi
 815b00e:	5d                   	pop    %ebp
 815b00f:	c3                   	ret

```

```c
// SaveServiceRestrictPolicy::dispatch @ 0x815ad3c

/* SaveServiceRestrictPolicy::dispatch(int, int, Stream*) */

undefined4 SaveServiceRestrictPolicy::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigLoadRestrictPolicy *pSVar2;
  undefined4 *puVar3;
  MySQL *this;
  CEnvironment *this_00;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  
                    /* try { // try from 0815ad4a to 0815af7b has its CatchHandler @ 0815af9b */
  pSVar2 = Stream::GetOutBuffer<Taiwan::SigLoadRestrictPolicy>(in_stack_00000010);
  if (pSVar2 == (SigLoadRestrictPolicy *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar4 = CEnvironment::get_server_group(this_00);
  local_18 = 1;
  while( true ) {
    if (*(int *)(pSVar2 + 4) < local_18) {
      local_14 = 1;
      while( true ) {
        if (*(int *)(pSVar2 + 4) < local_14) {
          return 1;
        }
        cVar1 = MySQL::set_query(this,
                                 "inSert ignore into dnf_restrict_info (category , restrict_code , restrict_str , reg_date) values(%d, %d, \'%s\', now())"
                                 ,*(undefined4 *)pSVar2,local_14,pSVar2 + local_14 * 0x2d + 8);
        if (cVar1 != '\x01') break;
        cVar1 = MySQL::exec(this,true);
        if (cVar1 != '\x01') {
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&char_const*::typeinfo,0);
        }
        local_14 = local_14 + 1;
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             "inSert ignore into dnf_restrict_state (server_group , category , restrict_code , restrict_value , mod_date , reg_date) values(%d, %d, %d, \'%d\', now(), now())"
                             ,uVar4,*(undefined4 *)pSVar2,local_18,
                             (int)(char)pSVar2[local_18 + 0x119c]);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_18 = local_18 + 1;
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&char_const*::typeinfo,0);
}

```

