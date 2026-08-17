# LoadServiceRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815a8f2 LoadServiceRestrictPolicy::dispatch  [0x0815a8f2-0x815ac3f] ===
 815a8f2:	55                   	push   %ebp
 815a8f3:	89 e5                	mov    %esp,%ebp
 815a8f5:	56                   	push   %esi
 815a8f6:	53                   	push   %ebx
 815a8f7:	81 ec 40 12 00 00    	sub    $0x1240,%esp
 815a8fd:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815a902:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815a909:	00 
 815a90a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815a911:	00 
 815a912:	89 04 24             	mov    %eax,(%esp)
 815a915:	e8 24 a9 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815a91a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 815a91d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 815a921:	75 2c                	jne    815a94f <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x5d>
 815a923:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815a92a:	e8 d1 ae 5c 00       	call   8725800 <__cxa_allocate_exception>
 815a92f:	89 c2                	mov    %eax,%edx
 815a931:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815a937:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815a93e:	00 
 815a93f:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815a946:	09 
 815a947:	89 04 24             	mov    %eax,(%esp)
 815a94a:	e8 01 a3 5c 00       	call   8724c50 <__cxa_throw>
 815a94f:	e8 2d 18 f7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815a954:	89 04 24             	mov    %eax,(%esp)
 815a957:	e8 84 c3 fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815a95c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815a95f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815a962:	89 44 24 08          	mov    %eax,0x8(%esp)
 815a966:	c7 44 24 04 10 72 b7 	movl   $0x8b77210,0x4(%esp)
 815a96d:	08 
 815a96e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815a971:	89 04 24             	mov    %eax,(%esp)
 815a974:	e8 47 98 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815a979:	83 f0 01             	xor    $0x1,%eax
 815a97c:	84 c0                	test   %al,%al
 815a97e:	74 2c                	je     815a9ac <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0xba>
 815a980:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815a987:	e8 74 ae 5c 00       	call   8725800 <__cxa_allocate_exception>
 815a98c:	89 c2                	mov    %eax,%edx
 815a98e:	c7 02 6d 72 b7 08    	movl   $0x8b7726d,(%edx)
 815a994:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815a99b:	00 
 815a99c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815a9a3:	09 
 815a9a4:	89 04 24             	mov    %eax,(%esp)
 815a9a7:	e8 a4 a2 5c 00       	call   8724c50 <__cxa_throw>
 815a9ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815a9b3:	00 
 815a9b4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815a9b7:	89 04 24             	mov    %eax,(%esp)
 815a9ba:	e8 67 99 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815a9bf:	83 f0 01             	xor    $0x1,%eax
 815a9c2:	84 c0                	test   %al,%al
 815a9c4:	74 2c                	je     815a9f2 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x100>
 815a9c6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815a9cd:	e8 2e ae 5c 00       	call   8725800 <__cxa_allocate_exception>
 815a9d2:	89 c2                	mov    %eax,%edx
 815a9d4:	c7 02 77 72 b7 08    	movl   $0x8b77277,(%edx)
 815a9da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815a9e1:	00 
 815a9e2:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815a9e9:	09 
 815a9ea:	89 04 24             	mov    %eax,(%esp)
 815a9ed:	e8 5e a2 5c 00       	call   8724c50 <__cxa_throw>
 815a9f2:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815a9f8:	89 04 24             	mov    %eax,(%esp)
 815a9fb:	e8 a8 33 00 00       	call   815dda8 <_ZN6Taiwan21SigLoadRestrictPolicy4initEv>
 815aa00:	e9 93 01 00 00       	jmp    815ab98 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x2a6>
 815aa05:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 815aa0c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 815aa13:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 815aa1a:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 815aa1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815aa21:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 815aa25:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 815aa28:	89 54 24 08          	mov    %edx,0x8(%esp)
 815aa2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 815aa30:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815aa33:	89 04 24             	mov    %eax,(%esp)
 815aa36:	e8 f1 be fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815aa3b:	83 f0 01             	xor    $0x1,%eax
 815aa3e:	84 c0                	test   %al,%al
 815aa40:	74 2c                	je     815aa6e <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x17c>
 815aa42:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815aa49:	e8 b2 ad 5c 00       	call   8725800 <__cxa_allocate_exception>
 815aa4e:	89 c2                	mov    %eax,%edx
 815aa50:	c7 02 7c 72 b7 08    	movl   $0x8b7727c,(%edx)
 815aa56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815aa5d:	00 
 815aa5e:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815aa65:	09 
 815aa66:	89 04 24             	mov    %eax,(%esp)
 815aa69:	e8 e2 a1 5c 00       	call   8724c50 <__cxa_throw>
 815aa6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815aa71:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 815aa75:	8d 55 e0             	lea    -0x20(%ebp),%edx
 815aa78:	89 54 24 08          	mov    %edx,0x8(%esp)
 815aa7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 815aa80:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815aa83:	89 04 24             	mov    %eax,(%esp)
 815aa86:	e8 a1 be fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815aa8b:	83 f0 01             	xor    $0x1,%eax
 815aa8e:	84 c0                	test   %al,%al
 815aa90:	74 2c                	je     815aabe <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x1cc>
 815aa92:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815aa99:	e8 62 ad 5c 00       	call   8725800 <__cxa_allocate_exception>
 815aa9e:	89 c2                	mov    %eax,%edx
 815aaa0:	c7 02 85 72 b7 08    	movl   $0x8b77285,(%edx)
 815aaa6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815aaad:	00 
 815aaae:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815aab5:	09 
 815aab6:	89 04 24             	mov    %eax,(%esp)
 815aab9:	e8 92 a1 5c 00       	call   8724c50 <__cxa_throw>
 815aabe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815aac1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 815aac5:	8d 55 df             	lea    -0x21(%ebp),%edx
 815aac8:	89 54 24 08          	mov    %edx,0x8(%esp)
 815aacc:	89 44 24 04          	mov    %eax,0x4(%esp)
 815aad0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815aad3:	89 04 24             	mov    %eax,(%esp)
 815aad6:	e8 cb 3b 00 00       	call   815e6a6 <_ZN5MySQL8get_charEiRc>
 815aadb:	83 f0 01             	xor    $0x1,%eax
 815aade:	84 c0                	test   %al,%al
 815aae0:	74 2c                	je     815ab0e <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x21c>
 815aae2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815aae9:	e8 12 ad 5c 00       	call   8725800 <__cxa_allocate_exception>
 815aaee:	89 c2                	mov    %eax,%edx
 815aaf0:	c7 02 8e 72 b7 08    	movl   $0x8b7728e,(%edx)
 815aaf6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815aafd:	00 
 815aafe:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815ab05:	09 
 815ab06:	89 04 24             	mov    %eax,(%esp)
 815ab09:	e8 42 a1 5c 00       	call   8724c50 <__cxa_throw>
 815ab0e:	8b 85 df ed ff ff    	mov    -0x1221(%ebp),%eax
 815ab14:	85 c0                	test   %eax,%eax
 815ab16:	74 0d                	je     815ab25 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x233>
 815ab18:	8b 95 df ed ff ff    	mov    -0x1221(%ebp),%edx
 815ab1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815ab21:	39 c2                	cmp    %eax,%edx
 815ab23:	75 29                	jne    815ab4e <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x25c>
 815ab25:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 815ab29:	0f be c8             	movsbl %al,%ecx
 815ab2c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 815ab2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815ab32:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 815ab36:	89 54 24 08          	mov    %edx,0x8(%esp)
 815ab3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ab3e:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815ab44:	89 04 24             	mov    %eax,(%esp)
 815ab47:	e8 b6 32 00 00       	call   815de02 <_ZN6Taiwan21SigLoadRestrictPolicy3setEiic>
 815ab4c:	eb 4a                	jmp    815ab98 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x2a6>
 815ab4e:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815ab54:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ab58:	8b 45 08             	mov    0x8(%ebp),%eax
 815ab5b:	89 04 24             	mov    %eax,(%esp)
 815ab5e:	e8 dd 00 00 00       	call   815ac40 <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE>
 815ab63:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815ab69:	89 04 24             	mov    %eax,(%esp)
 815ab6c:	e8 37 32 00 00       	call   815dda8 <_ZN6Taiwan21SigLoadRestrictPolicy4initEv>
 815ab71:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 815ab75:	0f be c8             	movsbl %al,%ecx
 815ab78:	8b 55 e0             	mov    -0x20(%ebp),%edx
 815ab7b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815ab7e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 815ab82:	89 54 24 08          	mov    %edx,0x8(%esp)
 815ab86:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ab8a:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815ab90:	89 04 24             	mov    %eax,(%esp)
 815ab93:	e8 6a 32 00 00       	call   815de02 <_ZN6Taiwan21SigLoadRestrictPolicy3setEiic>
 815ab98:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815ab9b:	89 04 24             	mov    %eax,(%esp)
 815ab9e:	e8 19 99 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815aba3:	84 c0                	test   %al,%al
 815aba5:	0f 85 5a fe ff ff    	jne    815aa05 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x113>
 815abab:	8d 85 df ed ff ff    	lea    -0x1221(%ebp),%eax
 815abb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 815abb5:	8b 45 08             	mov    0x8(%ebp),%eax
 815abb8:	89 04 24             	mov    %eax,(%esp)
 815abbb:	e8 80 00 00 00       	call   815ac40 <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE>
 815abc0:	bb 01 00 00 00       	mov    $0x1,%ebx
 815abc5:	eb 6c                	jmp    815ac33 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x341>
 815abc7:	83 fa 01             	cmp    $0x1,%edx
 815abca:	74 08                	je     815abd4 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x2e2>
 815abcc:	89 04 24             	mov    %eax,(%esp)
 815abcf:	e8 7c 8b 98 00       	call   8ae3750 <_Unwind_Resume>
 815abd4:	89 04 24             	mov    %eax,(%esp)
 815abd7:	e8 04 b1 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815abdc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815abdf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815abe2:	89 44 24 14          	mov    %eax,0x14(%esp)
 815abe6:	c7 44 24 10 98 72 b7 	movl   $0x8b77298,0x10(%esp)
 815abed:	08 
 815abee:	c7 44 24 0c d2 00 00 	movl   $0xd2,0xc(%esp)
 815abf5:	00 
 815abf6:	c7 44 24 08 c0 92 b7 	movl   $0x8b792c0,0x8(%esp)
 815abfd:	08 
 815abfe:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815ac05:	08 
 815ac06:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815ac0d:	e8 f8 8f 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815ac12:	bb 00 00 00 00       	mov    $0x0,%ebx
 815ac17:	e8 14 b0 5c 00       	call   8725c30 <__cxa_end_catch>
 815ac1c:	eb 15                	jmp    815ac33 <_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream+0x341>
 815ac1e:	89 d3                	mov    %edx,%ebx
 815ac20:	89 c6                	mov    %eax,%esi
 815ac22:	e8 09 b0 5c 00       	call   8725c30 <__cxa_end_catch>
 815ac27:	89 f0                	mov    %esi,%eax
 815ac29:	89 da                	mov    %ebx,%edx
 815ac2b:	89 04 24             	mov    %eax,(%esp)
 815ac2e:	e8 1d 8b 98 00       	call   8ae3750 <_Unwind_Resume>
 815ac33:	89 d8                	mov    %ebx,%eax
 815ac35:	81 c4 40 12 00 00    	add    $0x1240,%esp
 815ac3b:	5b                   	pop    %ebx
 815ac3c:	5e                   	pop    %esi
 815ac3d:	5d                   	pop    %ebp
 815ac3e:	c3                   	ret
 815ac3f:	90                   	nop

```

```c
// LoadServiceRestrictPolicy::dispatch @ 0x815a8f2

/* LoadServiceRestrictPolicy::dispatch(int, int, Stream*) */

undefined4 LoadServiceRestrictPolicy::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  CEnvironment *this;
  int local_1225 [1152];
  char local_25;
  int local_24;
  int local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  
                    /* try { // try from 0815a915 to 0815abbf has its CatchHandler @ 0815abc7 */
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_1c == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this = (CEnvironment *)G_CEnvironment();
  local_18 = CEnvironment::get_server_group(this);
  cVar2 = MySQL::set_query(local_1c,
                           "seLect category, restrict_code, restrict_value from dnf_restrict_state where server_group=%d"
                           ,local_18);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadRestrictPolicy::init((SigLoadRestrictPolicy *)local_1225);
  while( true ) {
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 == '\0') {
      sendRestrictData((LoadServiceRestrictPolicy *)param_1,(SigLoadRestrictPolicy *)local_1225);
      return 1;
    }
    local_20 = 0;
    local_24 = 0;
    local_25 = '\0';
    local_14 = 1;
    cVar2 = MySQL::get_int(local_1c,0,&local_20);
    iVar1 = local_14;
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "category";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = local_14 + 1;
    cVar2 = MySQL::get_int(local_1c,iVar1,&local_24);
    iVar1 = local_14;
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "restrict";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = local_14 + 1;
    cVar2 = MySQL::get_char(local_1c,iVar1,&local_25);
    if (cVar2 != '\x01') break;
    if ((local_1225[0] == 0) || (local_1225[0] == local_20)) {
      Taiwan::SigLoadRestrictPolicy::set
                ((SigLoadRestrictPolicy *)local_1225,local_20,local_24,local_25);
    }
    else {
      sendRestrictData((LoadServiceRestrictPolicy *)param_1,(SigLoadRestrictPolicy *)local_1225);
      Taiwan::SigLoadRestrictPolicy::init((SigLoadRestrictPolicy *)local_1225);
      Taiwan::SigLoadRestrictPolicy::set
                ((SigLoadRestrictPolicy *)local_1225,local_20,local_24,local_25);
    }
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = "values";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&char_const*::typeinfo,0);
}

```

---

## sendRestrictData

```asm
// === 0815ac40 LoadServiceRestrictPolicy::sendRestrictData  [0x0815ac40-0x815ad3b] ===
 815ac40:	55                   	push   %ebp
 815ac41:	89 e5                	mov    %esp,%ebp
 815ac43:	56                   	push   %esi
 815ac44:	53                   	push   %ebx
 815ac45:	83 ec 20             	sub    $0x20,%esp
 815ac48:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815ac4d:	c7 44 24 08 d9 00 00 	movl   $0xd9,0x8(%esp)
 815ac54:	00 
 815ac55:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815ac5c:	08 
 815ac5d:	89 04 24             	mov    %eax,(%esp)
 815ac60:	e8 21 4e 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815ac65:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815ac6c:	00 
 815ac6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ac71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815ac74:	89 04 24             	mov    %eax,(%esp)
 815ac77:	e8 aa df f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815ac7c:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 815ac83:	ff 
 815ac84:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815ac8b:	00 
 815ac8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815ac8f:	89 04 24             	mov    %eax,(%esp)
 815ac92:	e8 b9 8c 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815ac97:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815ac9a:	89 04 24             	mov    %eax,(%esp)
 815ac9d:	e8 ac df f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815aca2:	89 04 24             	mov    %eax,(%esp)
 815aca5:	e8 f8 3c 00 00       	call   815e9a2 <_ZN12CStreamGuard11GetInBufferIN6Taiwan21SigLoadRestrictPolicyEEEPT_v>
 815acaa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815acad:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815acb1:	75 2c                	jne    815acdf <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE+0x9f>
 815acb3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815acba:	e8 41 ab 5c 00       	call   8725800 <__cxa_allocate_exception>
 815acbf:	89 c2                	mov    %eax,%edx
 815acc1:	c7 02 ff 72 b7 08    	movl   $0x8b772ff,(%edx)
 815acc7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815acce:	00 
 815accf:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815acd6:	09 
 815acd7:	89 04 24             	mov    %eax,(%esp)
 815acda:	e8 71 9f 5c 00       	call   8724c50 <__cxa_throw>
 815acdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 815ace2:	89 44 24 04          	mov    %eax,0x4(%esp)
 815ace6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815ace9:	89 04 24             	mov    %eax,(%esp)
 815acec:	e8 47 31 00 00       	call   815de38 <_ZN6Taiwan21SigLoadRestrictPolicy3setERS0_>
 815acf1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815acf6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 815acf9:	89 54 24 08          	mov    %edx,0x8(%esp)
 815acfd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815ad04:	00 
 815ad05:	89 04 24             	mov    %eax,(%esp)
 815ad08:	e8 d1 62 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815ad0d:	eb 1b                	jmp    815ad2a <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE+0xea>
 815ad0f:	89 d3                	mov    %edx,%ebx
 815ad11:	89 c6                	mov    %eax,%esi
 815ad13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815ad16:	89 04 24             	mov    %eax,(%esp)
 815ad19:	e8 b4 1b 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815ad1e:	89 f0                	mov    %esi,%eax
 815ad20:	89 da                	mov    %ebx,%edx
 815ad22:	89 04 24             	mov    %eax,(%esp)
 815ad25:	e8 26 8a 98 00       	call   8ae3750 <_Unwind_Resume>
 815ad2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815ad2d:	89 04 24             	mov    %eax,(%esp)
 815ad30:	e8 9d 1b 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815ad35:	83 c4 20             	add    $0x20,%esp
 815ad38:	5b                   	pop    %ebx
 815ad39:	5e                   	pop    %esi
 815ad3a:	5d                   	pop    %ebp
 815ad3b:	c3                   	ret

```

```c
// LoadServiceRestrictPolicy::sendRestrictData @ 0x815ac40

/* LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
LoadServiceRestrictPolicy::sendRestrictData
          (LoadServiceRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  undefined4 *puVar2;
  CStreamGuard local_18 [8];
  SigLoadRestrictPolicy *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0xd9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815ac92 to 0815ad0c has its CatchHandler @ 0815ad0f */
  Taiwan::internal_stream(local_18,1,0xffffffff);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this_00);
  if (local_10 == (SigLoadRestrictPolicy *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadRestrictPolicy::set(local_10,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

