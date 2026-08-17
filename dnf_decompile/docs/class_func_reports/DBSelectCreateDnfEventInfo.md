# DBSelectCreateDnfEventInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815bb8c DBSelectCreateDnfEventInfo::dispatch  [0x0815bb8c-0x815bedf] ===
 815bb8c:	55                   	push   %ebp
 815bb8d:	89 e5                	mov    %esp,%ebp
 815bb8f:	57                   	push   %edi
 815bb90:	56                   	push   %esi
 815bb91:	53                   	push   %ebx
 815bb92:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 815bb98:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 815bb9f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 815bba6:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 815bbad:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815bbb2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bbb9:	00 
 815bbba:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815bbc1:	00 
 815bbc2:	89 04 24             	mov    %eax,(%esp)
 815bbc5:	e8 74 96 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815bbca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 815bbcd:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 815bbd1:	75 2c                	jne    815bbff <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x73>
 815bbd3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bbda:	e8 21 9c 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bbdf:	89 c2                	mov    %eax,%edx
 815bbe1:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815bbe7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bbee:	00 
 815bbef:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bbf6:	09 
 815bbf7:	89 04 24             	mov    %eax,(%esp)
 815bbfa:	e8 51 90 5c 00       	call   8724c50 <__cxa_throw>
 815bbff:	c7 44 24 04 bc 76 b7 	movl   $0x8b776bc,0x4(%esp)
 815bc06:	08 
 815bc07:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bc0a:	89 04 24             	mov    %eax,(%esp)
 815bc0d:	e8 ae 85 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815bc12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815bc19:	00 
 815bc1a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bc1d:	89 04 24             	mov    %eax,(%esp)
 815bc20:	e8 01 87 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815bc25:	83 f0 01             	xor    $0x1,%eax
 815bc28:	84 c0                	test   %al,%al
 815bc2a:	74 2c                	je     815bc58 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0xcc>
 815bc2c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bc33:	e8 c8 9b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bc38:	89 c2                	mov    %eax,%edx
 815bc3a:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815bc40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bc47:	00 
 815bc48:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bc4f:	09 
 815bc50:	89 04 24             	mov    %eax,(%esp)
 815bc53:	e8 f8 8f 5c 00       	call   8724c50 <__cxa_throw>
 815bc58:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bc5b:	89 04 24             	mov    %eax,(%esp)
 815bc5e:	e8 09 67 f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815bc63:	85 c0                	test   %eax,%eax
 815bc65:	0f 94 c0             	sete   %al
 815bc68:	84 c0                	test   %al,%al
 815bc6a:	74 2c                	je     815bc98 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x10c>
 815bc6c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bc73:	e8 88 9b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bc78:	89 c2                	mov    %eax,%edx
 815bc7a:	c7 02 41 77 b7 08    	movl   $0x8b77741,(%edx)
 815bc80:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bc87:	00 
 815bc88:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bc8f:	09 
 815bc90:	89 04 24             	mov    %eax,(%esp)
 815bc93:	e8 b8 8f 5c 00       	call   8724c50 <__cxa_throw>
 815bc98:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bc9b:	89 04 24             	mov    %eax,(%esp)
 815bc9e:	e8 19 88 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815bca3:	83 f0 01             	xor    $0x1,%eax
 815bca6:	84 c0                	test   %al,%al
 815bca8:	74 2c                	je     815bcd6 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x14a>
 815bcaa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bcb1:	e8 4a 9b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bcb6:	89 c2                	mov    %eax,%edx
 815bcb8:	c7 02 45 75 b7 08    	movl   $0x8b77545,(%edx)
 815bcbe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bcc5:	00 
 815bcc6:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bccd:	09 
 815bcce:	89 04 24             	mov    %eax,(%esp)
 815bcd1:	e8 7a 8f 5c 00       	call   8724c50 <__cxa_throw>
 815bcd6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 815bcd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 815bcdd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815bce4:	00 
 815bce5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bce8:	89 04 24             	mov    %eax,(%esp)
 815bceb:	e8 3c ac fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815bcf0:	83 f0 01             	xor    $0x1,%eax
 815bcf3:	84 c0                	test   %al,%al
 815bcf5:	74 2c                	je     815bd23 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x197>
 815bcf7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bcfe:	e8 fd 9a 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bd03:	89 c2                	mov    %eax,%edx
 815bd05:	c7 02 4e 77 b7 08    	movl   $0x8b7774e,(%edx)
 815bd0b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bd12:	00 
 815bd13:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bd1a:	09 
 815bd1b:	89 04 24             	mov    %eax,(%esp)
 815bd1e:	e8 2d 8f 5c 00       	call   8724c50 <__cxa_throw>
 815bd23:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815bd26:	89 44 24 08          	mov    %eax,0x8(%esp)
 815bd2a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815bd31:	00 
 815bd32:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bd35:	89 04 24             	mov    %eax,(%esp)
 815bd38:	e8 ef ab fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815bd3d:	83 f0 01             	xor    $0x1,%eax
 815bd40:	84 c0                	test   %al,%al
 815bd42:	74 2c                	je     815bd70 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x1e4>
 815bd44:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bd4b:	e8 b0 9a 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bd50:	89 c2                	mov    %eax,%edx
 815bd52:	c7 02 58 77 b7 08    	movl   $0x8b77758,(%edx)
 815bd58:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bd5f:	00 
 815bd60:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bd67:	09 
 815bd68:	89 04 24             	mov    %eax,(%esp)
 815bd6b:	e8 e0 8e 5c 00       	call   8724c50 <__cxa_throw>
 815bd70:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 815bd73:	89 44 24 08          	mov    %eax,0x8(%esp)
 815bd77:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815bd7e:	00 
 815bd7f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815bd82:	89 04 24             	mov    %eax,(%esp)
 815bd85:	e8 a2 ab fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815bd8a:	83 f0 01             	xor    $0x1,%eax
 815bd8d:	84 c0                	test   %al,%al
 815bd8f:	74 2c                	je     815bdbd <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x231>
 815bd91:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815bd98:	e8 63 9a 5c 00       	call   8725800 <__cxa_allocate_exception>
 815bd9d:	89 c2                	mov    %eax,%edx
 815bd9f:	c7 02 62 77 b7 08    	movl   $0x8b77762,(%edx)
 815bda5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815bdac:	00 
 815bdad:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815bdb4:	09 
 815bdb5:	89 04 24             	mov    %eax,(%esp)
 815bdb8:	e8 93 8e 5c 00       	call   8724c50 <__cxa_throw>
 815bdbd:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 815bdc0:	8b 55 c8             	mov    -0x38(%ebp),%edx
 815bdc3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 815bdc6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 815bdca:	89 54 24 04          	mov    %edx,0x4(%esp)
 815bdce:	89 04 24             	mov    %eax,(%esp)
 815bdd1:	e8 20 51 00 00       	call   8160ef6 <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii>
 815bdd6:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 815bdd9:	8b 75 cc             	mov    -0x34(%ebp),%esi
 815bddc:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 815bddf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815bde6:	00 
 815bde7:	c7 44 24 08 0d 02 00 	movl   $0x20d,0x8(%esp)
 815bdee:	00 
 815bdef:	c7 44 24 04 00 91 b7 	movl   $0x8b79100,0x4(%esp)
 815bdf6:	08 
 815bdf7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 815bdfa:	89 04 24             	mov    %eax,(%esp)
 815bdfd:	e8 16 39 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815be02:	89 7c 24 10          	mov    %edi,0x10(%esp)
 815be06:	89 74 24 0c          	mov    %esi,0xc(%esp)
 815be0a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815be0e:	c7 44 24 04 6c 77 b7 	movl   $0x8b7776c,0x4(%esp)
 815be15:	08 
 815be16:	8d 45 d0             	lea    -0x30(%ebp),%eax
 815be19:	89 04 24             	mov    %eax,(%esp)
 815be1c:	e8 67 39 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815be21:	bb 01 00 00 00       	mov    $0x1,%ebx
 815be26:	e9 a8 00 00 00       	jmp    815bed3 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x347>
 815be2b:	83 fa 01             	cmp    $0x1,%edx
 815be2e:	74 08                	je     815be38 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x2ac>
 815be30:	89 04 24             	mov    %eax,(%esp)
 815be33:	e8 18 79 98 00       	call   8ae3750 <_Unwind_Resume>
 815be38:	89 04 24             	mov    %eax,(%esp)
 815be3b:	e8 a0 9e 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815be40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 815be43:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 815be4a:	e8 4f fe f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 815be4f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 815be52:	8d 45 94             	lea    -0x6c(%ebp),%eax
 815be55:	89 44 24 04          	mov    %eax,0x4(%esp)
 815be59:	8d 45 c0             	lea    -0x40(%ebp),%eax
 815be5c:	89 04 24             	mov    %eax,(%esp)
 815be5f:	e8 fc 24 f2 ff       	call   807e360 <localtime_r@plt>
 815be64:	8b 45 9c             	mov    -0x64(%ebp),%eax
 815be67:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815be6e:	00 
 815be6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 815be73:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 815be7a:	e8 77 50 00 00       	call   8160ef6 <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii>
 815be7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815be82:	89 44 24 14          	mov    %eax,0x14(%esp)
 815be86:	c7 44 24 10 b8 77 b7 	movl   $0x8b777b8,0x10(%esp)
 815be8d:	08 
 815be8e:	c7 44 24 0c 19 02 00 	movl   $0x219,0xc(%esp)
 815be95:	00 
 815be96:	c7 44 24 08 00 91 b7 	movl   $0x8b79100,0x8(%esp)
 815be9d:	08 
 815be9e:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815bea5:	08 
 815bea6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815bead:	e8 58 7d 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815beb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 815beb7:	e8 74 9d 5c 00       	call   8725c30 <__cxa_end_catch>
 815bebc:	eb 15                	jmp    815bed3 <_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream+0x347>
 815bebe:	89 d3                	mov    %edx,%ebx
 815bec0:	89 c6                	mov    %eax,%esi
 815bec2:	e8 69 9d 5c 00       	call   8725c30 <__cxa_end_catch>
 815bec7:	89 f0                	mov    %esi,%eax
 815bec9:	89 da                	mov    %ebx,%edx
 815becb:	89 04 24             	mov    %eax,(%esp)
 815bece:	e8 7d 78 98 00       	call   8ae3750 <_Unwind_Resume>
 815bed3:	89 d8                	mov    %ebx,%eax
 815bed5:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 815bedb:	5b                   	pop    %ebx
 815bedc:	5e                   	pop    %esi
 815bedd:	5f                   	pop    %edi
 815bede:	5d                   	pop    %ebp
 815bedf:	c3                   	ret

```

```c
// DBSelectCreateDnfEventInfo::dispatch @ 0x815bb8c

/* DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*) */

undefined4 DBSelectCreateDnfEventInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_40;
  int local_3c;
  int local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
                    /* try { // try from 0815bbc5 to 0815be20 has its CatchHandler @ 0815be2b */
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_24 == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  MySQL::set_query(local_24,
                   "seLect rate, HOUR(CURTIME()), event_day FROM event_create_dnf_info WHERE occ_time=DATE_ADD(CURDATE(), INTERVAL HOUR(CURTIME()) HOUR)"
                  );
  cVar3 = MySQL::exec(local_24,true);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar5 = MySQL::get_n_rows(local_24);
  if (iVar5 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_n_rows=0";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::fetch(local_24);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "fetch";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,0,&local_38);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 0";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,1,&local_3c);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 1";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,2,&local_40);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 2";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  InterSelectCreateDnfEventInfo::makeRequest(local_38,local_3c,local_40);
  iVar2 = local_38;
  iVar1 = local_3c;
  iVar5 = local_40;
  cMyTrace::cMyTrace(local_34,"virtual bool DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*)"
                     ,0x20d,0);
  cMyTrace::operator()
            (local_34,"[Taiwan, Event] select event_create_dnf_info. hour:%d rate:%d event_day:%d",
             iVar1,iVar2,iVar5);
  return 1;
}

```

---

## makeRequest

```asm
// === 0815ba94 DBSelectCreateDnfEventInfo::makeRequest  [0x0815ba94-0x815bb8b] ===
 815ba94:	55                   	push   %ebp
 815ba95:	89 e5                	mov    %esp,%ebp
 815ba97:	56                   	push   %esi
 815ba98:	53                   	push   %ebx
 815ba99:	83 ec 20             	sub    $0x20,%esp
 815ba9c:	a1 30 f7 41 09       	mov    0x941f730,%eax
 815baa1:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 815baa8:	00 
 815baa9:	89 04 24             	mov    %eax,(%esp)
 815baac:	e8 e7 9e fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 815bab1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815bab4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815bab8:	74 21                	je     815badb <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0x47>
 815baba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815babd:	8b 00                	mov    (%eax),%eax
 815babf:	83 c0 34             	add    $0x34,%eax
 815bac2:	8b 10                	mov    (%eax),%edx
 815bac4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815bacb:	00 
 815bacc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815bacf:	89 04 24             	mov    %eax,(%esp)
 815bad2:	ff d2                	call   *%edx
 815bad4:	83 f0 01             	xor    $0x1,%eax
 815bad7:	84 c0                	test   %al,%al
 815bad9:	74 07                	je     815bae2 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0x4e>
 815badb:	b8 01 00 00 00       	mov    $0x1,%eax
 815bae0:	eb 05                	jmp    815bae7 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0x53>
 815bae2:	b8 00 00 00 00       	mov    $0x0,%eax
 815bae7:	84 c0                	test   %al,%al
 815bae9:	0f 85 95 00 00 00    	jne    815bb84 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0xf0>
 815baef:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815baf4:	c7 44 24 08 e4 01 00 	movl   $0x1e4,0x8(%esp)
 815bafb:	00 
 815bafc:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815bb03:	08 
 815bb04:	89 04 24             	mov    %eax,(%esp)
 815bb07:	e8 7a 3f 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815bb0c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815bb13:	00 
 815bb14:	89 44 24 04          	mov    %eax,0x4(%esp)
 815bb18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815bb1b:	89 04 24             	mov    %eax,(%esp)
 815bb1e:	e8 03 d1 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815bb23:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 815bb2a:	ff 
 815bb2b:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815bb32:	00 
 815bb33:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815bb36:	89 04 24             	mov    %eax,(%esp)
 815bb39:	e8 12 7e 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815bb3e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815bb43:	8d 55 ec             	lea    -0x14(%ebp),%edx
 815bb46:	89 54 24 08          	mov    %edx,0x8(%esp)
 815bb4a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815bb51:	00 
 815bb52:	89 04 24             	mov    %eax,(%esp)
 815bb55:	e8 84 54 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815bb5a:	eb 1b                	jmp    815bb77 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0xe3>
 815bb5c:	89 d3                	mov    %edx,%ebx
 815bb5e:	89 c6                	mov    %eax,%esi
 815bb60:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815bb63:	89 04 24             	mov    %eax,(%esp)
 815bb66:	e8 67 0d 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815bb6b:	89 f0                	mov    %esi,%eax
 815bb6d:	89 da                	mov    %ebx,%edx
 815bb6f:	89 04 24             	mov    %eax,(%esp)
 815bb72:	e8 d9 7b 98 00       	call   8ae3750 <_Unwind_Resume>
 815bb77:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815bb7a:	89 04 24             	mov    %eax,(%esp)
 815bb7d:	e8 50 0d 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815bb82:	eb 01                	jmp    815bb85 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv+0xf1>
 815bb84:	90                   	nop
 815bb85:	83 c4 20             	add    $0x20,%esp
 815bb88:	5b                   	pop    %ebx
 815bb89:	5e                   	pop    %esi
 815bb8a:	5d                   	pop    %ebp
 815bb8b:	c3                   	ret

```

```c
// DBSelectCreateDnfEventInfo::makeRequest @ 0x815ba94

/* DBSelectCreateDnfEventInfo::makeRequest() */

void DBSelectCreateDnfEventInfo::makeRequest(void)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard local_18 [8];
  int *local_10;
  
  local_10 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (local_10 != (int *)0x0) {
    cVar2 = (**(code **)(*local_10 + 0x34))(local_10,0);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0815bae7;
    }
  }
  bVar1 = true;
LAB_0815bae7:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x1e4);
    CStreamGuard::CStreamGuard(local_18,pSVar3,true);
                    /* try { // try from 0815bb39 to 0815bb59 has its CatchHandler @ 0815bb5c */
    Taiwan::internal_stream(local_18,9,0xffffffff);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

