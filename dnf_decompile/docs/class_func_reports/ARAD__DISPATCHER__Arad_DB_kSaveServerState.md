# ARAD__DISPATCHER__Arad_DB_kSaveServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08185abe ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch  [0x08185abe-0x8185d1f] ===
 8185abe:	55                   	push   %ebp
 8185abf:	89 e5                	mov    %esp,%ebp
 8185ac1:	56                   	push   %esi
 8185ac2:	53                   	push   %ebx
 8185ac3:	83 ec 30             	sub    $0x30,%esp
 8185ac6:	8b 45 14             	mov    0x14(%ebp),%eax
 8185ac9:	89 04 24             	mov    %eax,(%esp)
 8185acc:	e8 53 15 00 00       	call   8187024 <_ZN6Stream12GetOutBufferIN4arad14SigServerStateEEEPT_v>
 8185ad1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8185ad4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8185ad8:	75 36                	jne    8185b10 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x52>
 8185ada:	c7 44 24 10 b6 fa b8 	movl   $0x8b8fab6,0x10(%esp)
 8185ae1:	08 
 8185ae2:	c7 44 24 0c ef 07 00 	movl   $0x7ef,0xc(%esp)
 8185ae9:	00 
 8185aea:	c7 44 24 08 e0 0a b9 	movl   $0x8b90ae0,0x8(%esp)
 8185af1:	08 
 8185af2:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185af9:	08 
 8185afa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8185b01:	e8 04 e1 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185b06:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185b0b:	e9 06 02 00 00       	jmp    8185d16 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x258>
 8185b10:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8185b15:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185b1c:	00 
 8185b1d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8185b24:	00 
 8185b25:	89 04 24             	mov    %eax,(%esp)
 8185b28:	e8 11 f7 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8185b2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8185b30:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8185b34:	75 2c                	jne    8185b62 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0xa4>
 8185b36:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185b3d:	e8 be fc 59 00       	call   8725800 <__cxa_allocate_exception>
 8185b42:	89 c2                	mov    %eax,%edx
 8185b44:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 8185b4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185b51:	00 
 8185b52:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185b59:	09 
 8185b5a:	89 04 24             	mov    %eax,(%esp)
 8185b5d:	e8 ee f0 59 00       	call   8724c50 <__cxa_throw>
 8185b62:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185b65:	0f b6 00             	movzbl (%eax),%eax
 8185b68:	84 c0                	test   %al,%al
 8185b6a:	0f 84 91 00 00 00    	je     8185c01 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x143>
 8185b70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185b73:	8b 58 0f             	mov    0xf(%eax),%ebx
 8185b76:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185b79:	83 c0 0d             	add    $0xd,%eax
 8185b7c:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 8185b83:	00 
 8185b84:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185b88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8185b8f:	00 
 8185b90:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185b93:	89 04 24             	mov    %eax,(%esp)
 8185b96:	e8 8f e9 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8185b9b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8185b9e:	8b 4a 09             	mov    0x9(%edx),%ecx
 8185ba1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8185ba4:	8b 52 05             	mov    0x5(%edx),%edx
 8185ba7:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8185bab:	89 44 24 10          	mov    %eax,0x10(%esp)
 8185baf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8185bb3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8185bb7:	c7 44 24 04 d0 fa b8 	movl   $0x8b8fad0,0x4(%esp)
 8185bbe:	08 
 8185bbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185bc2:	89 04 24             	mov    %eax,(%esp)
 8185bc5:	e8 f6 e5 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8185bca:	83 f0 01             	xor    $0x1,%eax
 8185bcd:	84 c0                	test   %al,%al
 8185bcf:	0f 84 86 00 00 00    	je     8185c5b <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x19d>
 8185bd5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185bdc:	e8 1f fc 59 00       	call   8725800 <__cxa_allocate_exception>
 8185be1:	89 c2                	mov    %eax,%edx
 8185be3:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 8185be9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185bf0:	00 
 8185bf1:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185bf8:	09 
 8185bf9:	89 04 24             	mov    %eax,(%esp)
 8185bfc:	e8 4f f0 59 00       	call   8724c50 <__cxa_throw>
 8185c01:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185c04:	8b 50 09             	mov    0x9(%eax),%edx
 8185c07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185c0a:	8b 40 05             	mov    0x5(%eax),%eax
 8185c0d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8185c11:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185c15:	c7 44 24 04 20 fb b8 	movl   $0x8b8fb20,0x4(%esp)
 8185c1c:	08 
 8185c1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185c20:	89 04 24             	mov    %eax,(%esp)
 8185c23:	e8 98 e5 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8185c28:	83 f0 01             	xor    $0x1,%eax
 8185c2b:	84 c0                	test   %al,%al
 8185c2d:	74 2c                	je     8185c5b <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x19d>
 8185c2f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185c36:	e8 c5 fb 59 00       	call   8725800 <__cxa_allocate_exception>
 8185c3b:	89 c2                	mov    %eax,%edx
 8185c3d:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 8185c43:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185c4a:	00 
 8185c4b:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185c52:	09 
 8185c53:	89 04 24             	mov    %eax,(%esp)
 8185c56:	e8 f5 ef 59 00       	call   8724c50 <__cxa_throw>
 8185c5b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185c62:	00 
 8185c63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185c66:	89 04 24             	mov    %eax,(%esp)
 8185c69:	e8 b8 e6 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8185c6e:	83 f0 01             	xor    $0x1,%eax
 8185c71:	84 c0                	test   %al,%al
 8185c73:	0f 84 98 00 00 00    	je     8185d11 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x253>
 8185c79:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185c80:	e8 7b fb 59 00       	call   8725800 <__cxa_allocate_exception>
 8185c85:	89 c2                	mov    %eax,%edx
 8185c87:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 8185c8d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185c94:	00 
 8185c95:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185c9c:	09 
 8185c9d:	89 04 24             	mov    %eax,(%esp)
 8185ca0:	e8 ab ef 59 00       	call   8724c50 <__cxa_throw>
 8185ca5:	83 fa 01             	cmp    $0x1,%edx
 8185ca8:	74 08                	je     8185cb2 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x1f4>
 8185caa:	89 04 24             	mov    %eax,(%esp)
 8185cad:	e8 9e da 95 00       	call   8ae3750 <_Unwind_Resume>
 8185cb2:	89 04 24             	mov    %eax,(%esp)
 8185cb5:	e8 26 00 5a 00       	call   8725ce0 <__cxa_begin_catch>
 8185cba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8185cbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185cc0:	89 44 24 14          	mov    %eax,0x14(%esp)
 8185cc4:	c7 44 24 10 30 fa b8 	movl   $0x8b8fa30,0x10(%esp)
 8185ccb:	08 
 8185ccc:	c7 44 24 0c 12 08 00 	movl   $0x812,0xc(%esp)
 8185cd3:	00 
 8185cd4:	c7 44 24 08 e0 0a b9 	movl   $0x8b90ae0,0x8(%esp)
 8185cdb:	08 
 8185cdc:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185ce3:	08 
 8185ce4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8185ceb:	e8 1a df 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185cf0:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185cf5:	e8 36 ff 59 00       	call   8725c30 <__cxa_end_catch>
 8185cfa:	eb 1a                	jmp    8185d16 <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream+0x258>
 8185cfc:	89 d3                	mov    %edx,%ebx
 8185cfe:	89 c6                	mov    %eax,%esi
 8185d00:	e8 2b ff 59 00       	call   8725c30 <__cxa_end_catch>
 8185d05:	89 f0                	mov    %esi,%eax
 8185d07:	89 da                	mov    %ebx,%edx
 8185d09:	89 04 24             	mov    %eax,(%esp)
 8185d0c:	e8 3f da 95 00       	call   8ae3750 <_Unwind_Resume>
 8185d11:	bb 01 00 00 00       	mov    $0x1,%ebx
 8185d16:	89 d8                	mov    %ebx,%eax
 8185d18:	83 c4 30             	add    $0x30,%esp
 8185d1b:	5b                   	pop    %ebx
 8185d1c:	5e                   	pop    %esi
 8185d1d:	5d                   	pop    %ebp
 8185d1e:	c3                   	ret
 8185d1f:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch @ 0x8185abe

/* ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigServerState *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigServerState>(in_stack_00000010);
  if (pSVar2 == (SigServerState *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*)"
               ,0x7ef,"SigServerState is null.");
    uVar5 = 0;
  }
  else {
                    /* try { // try from 08185b28 to 08185ca4 has its CatchHandler @ 08185ca5 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    if (*pSVar2 == (SigServerState)0x0) {
      cVar1 = MySQL::set_query(this," deLete from server_state_info where category=%d and code=%d ",
                               *(undefined4 *)(pSVar2 + 5),*(undefined4 *)(pSVar2 + 9));
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
    }
    else {
      uVar5 = *(undefined4 *)(pSVar2 + 0xf);
      uVar4 = MySQL::blob_to_str(this,0,pSVar2 + 0xd,0xc);
      cVar1 = MySQL::set_query(this,
                               " inSert into server_state_info values (%d, %d, \'%s\', now(), from_unixtime(%u)) "
                               ,*(undefined4 *)(pSVar2 + 5),*(undefined4 *)(pSVar2 + 9),uVar4,uVar5)
      ;
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar5 = 1;
  }
  return uVar5;
}

```

