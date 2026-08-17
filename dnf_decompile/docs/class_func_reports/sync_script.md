# sync_script

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## DisplayMaxLength

```asm
// === 0861ca94 sync_script::DisplayMaxLength  [0x0861ca94-0x861cbb3] ===
 861ca94:	55                   	push   %ebp
 861ca95:	89 e5                	mov    %esp,%ebp
 861ca97:	83 ec 28             	sub    $0x28,%esp
 861ca9a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 861ca9f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861caa6:	00 
 861caa7:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 861caae:	00 
 861caaf:	89 04 24             	mov    %eax,(%esp)
 861cab2:	e8 87 87 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 861cab7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 861caba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 861cac1:	e9 d2 00 00 00       	jmp    861cb98 <_ZN11sync_script16DisplayMaxLengthEv+0x104>
 861cac6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861cac9:	89 44 24 04          	mov    %eax,0x4(%esp)
 861cacd:	c7 04 24 ac 34 47 09 	movl   $0x94734ac,(%esp)
 861cad4:	e8 8b 5a ac ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 861cad9:	8b 00                	mov    (%eax),%eax
 861cadb:	85 c0                	test   %eax,%eax
 861cadd:	0f 94 c0             	sete   %al
 861cae0:	84 c0                	test   %al,%al
 861cae2:	0f 85 a2 00 00 00    	jne    861cb8a <_ZN11sync_script16DisplayMaxLengthEv+0xf6>
 861cae8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861caeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 861caef:	c7 04 24 a0 34 47 09 	movl   $0x94734a0,(%esp)
 861caf6:	e8 d3 af c1 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 861cafb:	89 04 24             	mov    %eax,(%esp)
 861cafe:	e8 ed 99 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861cb03:	89 44 24 08          	mov    %eax,0x8(%esp)
 861cb07:	c7 44 24 04 2c 2e ce 	movl   $0x8ce2e2c,0x4(%esp)
 861cb0e:	08 
 861cb0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861cb12:	89 04 24             	mov    %eax,(%esp)
 861cb15:	e8 a6 76 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 861cb1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861cb21:	00 
 861cb22:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861cb25:	89 04 24             	mov    %eax,(%esp)
 861cb28:	e8 f9 77 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 861cb2d:	83 f0 01             	xor    $0x1,%eax
 861cb30:	84 c0                	test   %al,%al
 861cb32:	75 59                	jne    861cb8d <_ZN11sync_script16DisplayMaxLengthEv+0xf9>
 861cb34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861cb37:	89 04 24             	mov    %eax,(%esp)
 861cb3a:	e8 7d 79 dd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 861cb3f:	83 f0 01             	xor    $0x1,%eax
 861cb42:	84 c0                	test   %al,%al
 861cb44:	75 4a                	jne    861cb90 <_ZN11sync_script16DisplayMaxLengthEv+0xfc>
 861cb46:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 861cb4d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 861cb50:	89 44 24 08          	mov    %eax,0x8(%esp)
 861cb54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861cb5b:	00 
 861cb5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861cb5f:	89 04 24             	mov    %eax,(%esp)
 861cb62:	e8 8b 57 ac ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 861cb67:	83 f0 01             	xor    $0x1,%eax
 861cb6a:	84 c0                	test   %al,%al
 861cb6c:	75 25                	jne    861cb93 <_ZN11sync_script16DisplayMaxLengthEv+0xff>
 861cb6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861cb71:	89 44 24 04          	mov    %eax,0x4(%esp)
 861cb75:	c7 04 24 ac 34 47 09 	movl   $0x94734ac,(%esp)
 861cb7c:	e8 e3 59 ac ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 861cb81:	8b 10                	mov    (%eax),%edx
 861cb83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 861cb86:	39 c2                	cmp    %eax,%edx
 861cb88:	eb 0a                	jmp    861cb94 <_ZN11sync_script16DisplayMaxLengthEv+0x100>
 861cb8a:	90                   	nop
 861cb8b:	eb 07                	jmp    861cb94 <_ZN11sync_script16DisplayMaxLengthEv+0x100>
 861cb8d:	90                   	nop
 861cb8e:	eb 04                	jmp    861cb94 <_ZN11sync_script16DisplayMaxLengthEv+0x100>
 861cb90:	90                   	nop
 861cb91:	eb 01                	jmp    861cb94 <_ZN11sync_script16DisplayMaxLengthEv+0x100>
 861cb93:	90                   	nop
 861cb94:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 861cb98:	c7 04 24 a0 34 47 09 	movl   $0x94734a0,(%esp)
 861cb9f:	e8 ec ae c1 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 861cba4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 861cba7:	0f 97 c0             	seta   %al
 861cbaa:	84 c0                	test   %al,%al
 861cbac:	0f 85 14 ff ff ff    	jne    861cac6 <_ZN11sync_script16DisplayMaxLengthEv+0x32>
 861cbb2:	c9                   	leave
 861cbb3:	c3                   	ret

```

```c
// sync_script::DisplayMaxLength @ 0x861ca94

/* sync_script::DisplayMaxLength() */

void sync_script::DisplayMaxLength(void)

{
  char cVar1;
  int *piVar2;
  string *this;
  undefined4 uVar3;
  uint uVar4;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  local_10 = 0;
  while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size
                           ((vector<std::string,std::allocator<std::string>> *)
                            CFieldLengthChecker::fieldNames_), local_10 < uVar4) {
    piVar2 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               CFieldLengthChecker::fieldLength_,local_10);
    if (*piVar2 != 0) {
      this = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        CFieldLengthChecker::fieldNames_,local_10);
      uVar3 = std::string::c_str(this);
      MySQL::set_query(local_14,"seLect max(length(%s)) from dnf_item_info",uVar3);
      cVar1 = MySQL::exec(local_14,true);
      if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_14), cVar1 == '\x01')) {
        local_18 = 0;
        cVar1 = MySQL::get_uint(local_14,0,&local_18);
        if (cVar1 == '\x01') {
          std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                     CFieldLengthChecker::fieldLength_,local_10);
        }
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## GetInstanceSyncScript

```asm
// === 0861cbb4 sync_script::GetInstanceSyncScript  [0x0861cbb4-0x861cc46] ===
 861cbb4:	55                   	push   %ebp
 861cbb5:	89 e5                	mov    %esp,%ebp
 861cbb7:	57                   	push   %edi
 861cbb8:	56                   	push   %esi
 861cbb9:	53                   	push   %ebx
 861cbba:	83 ec 1c             	sub    $0x1c,%esp
 861cbbd:	b8 d8 34 47 09       	mov    $0x94734d8,%eax
 861cbc2:	0f b6 00             	movzbl (%eax),%eax
 861cbc5:	84 c0                	test   %al,%al
 861cbc7:	75 71                	jne    861cc3a <_ZN11sync_script21GetInstanceSyncScriptEv+0x86>
 861cbc9:	c7 04 24 d8 34 47 09 	movl   $0x94734d8,(%esp)
 861cbd0:	e8 5b 87 10 00       	call   8725330 <__cxa_guard_acquire>
 861cbd5:	85 c0                	test   %eax,%eax
 861cbd7:	0f 95 c0             	setne  %al
 861cbda:	84 c0                	test   %al,%al
 861cbdc:	74 5c                	je     861cc3a <_ZN11sync_script21GetInstanceSyncScriptEv+0x86>
 861cbde:	bb 00 00 00 00       	mov    $0x0,%ebx
 861cbe3:	c7 04 24 00 38 47 09 	movl   $0x9473800,(%esp)
 861cbea:	e8 7d 00 00 00       	call   861cc6c <_ZN11sync_script11CSyncScriptC1Ev>
 861cbef:	c7 04 24 d8 34 47 09 	movl   $0x94734d8,(%esp)
 861cbf6:	e8 55 86 10 00       	call   8725250 <__cxa_guard_release>
 861cbfb:	b8 7a cd 61 08       	mov    $0x861cd7a,%eax
 861cc00:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 861cc07:	08 
 861cc08:	c7 44 24 04 00 38 47 	movl   $0x9473800,0x4(%esp)
 861cc0f:	09 
 861cc10:	89 04 24             	mov    %eax,(%esp)
 861cc13:	e8 b8 11 a6 ff       	call   807ddd0 <__cxa_atexit@plt>
 861cc18:	eb 20                	jmp    861cc3a <_ZN11sync_script21GetInstanceSyncScriptEv+0x86>
 861cc1a:	89 d6                	mov    %edx,%esi
 861cc1c:	89 c7                	mov    %eax,%edi
 861cc1e:	84 db                	test   %bl,%bl
 861cc20:	75 0c                	jne    861cc2e <_ZN11sync_script21GetInstanceSyncScriptEv+0x7a>
 861cc22:	c7 04 24 d8 34 47 09 	movl   $0x94734d8,(%esp)
 861cc29:	e8 92 86 10 00       	call   87252c0 <__cxa_guard_abort>
 861cc2e:	89 f8                	mov    %edi,%eax
 861cc30:	89 f2                	mov    %esi,%edx
 861cc32:	89 04 24             	mov    %eax,(%esp)
 861cc35:	e8 16 6b 4c 00       	call   8ae3750 <_Unwind_Resume>
 861cc3a:	b8 00 38 47 09       	mov    $0x9473800,%eax
 861cc3f:	83 c4 1c             	add    $0x1c,%esp
 861cc42:	5b                   	pop    %ebx
 861cc43:	5e                   	pop    %esi
 861cc44:	5f                   	pop    %edi
 861cc45:	5d                   	pop    %ebp
 861cc46:	c3                   	ret

```

```c
// sync_script::GetInstanceSyncScript @ 0x861cbb4

/* sync_script::GetInstanceSyncScript() */

undefined1 * sync_script::GetInstanceSyncScript(void)

{
  int iVar1;
  
  if (GetInstanceSyncScript()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstanceSyncScript()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0861cbea to 0861cbee has its CatchHandler @ 0861cc1a */
      CSyncScript::CSyncScript((CSyncScript *)GetInstanceSyncScript()::instance);
      __cxa_guard_release(&GetInstanceSyncScript()::instance);
      __cxa_atexit(CSyncScript::~CSyncScript,GetInstanceSyncScript()::instance,&__dso_handle);
    }
  }
  return GetInstanceSyncScript()::instance;
}

```

