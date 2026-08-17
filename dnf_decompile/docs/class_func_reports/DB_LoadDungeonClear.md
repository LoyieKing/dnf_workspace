# DB_LoadDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AradLoadDungeonClear

```asm
// === 08419a76 DB_LoadDungeonClear::AradLoadDungeonClear  [0x08419a76-0x8419db3] ===
 8419a76:	55                   	push   %ebp
 8419a77:	89 e5                	mov    %esp,%ebp
 8419a79:	57                   	push   %edi
 8419a7a:	53                   	push   %ebx
 8419a7b:	81 ec e0 01 00 00    	sub    $0x1e0,%esp
 8419a81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419a84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8419a8b:	89 04 24             	mov    %eax,(%esp)
 8419a8e:	e8 db fe ff ff       	call   841996e <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR>
 8419a93:	84 c0                	test   %al,%al
 8419a95:	74 0a                	je     8419aa1 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x2b>
 8419a97:	b8 01 00 00 00       	mov    $0x1,%eax
 8419a9c:	e9 09 03 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419aa1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8419aa6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8419aad:	00 
 8419aae:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8419ab5:	00 
 8419ab6:	89 04 24             	mov    %eax,(%esp)
 8419ab9:	e8 80 b7 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8419abe:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8419ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419ac4:	8b 40 04             	mov    0x4(%eax),%eax
 8419ac7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419acb:	c7 44 24 04 c4 a7 c4 	movl   $0x8c4a7c4,0x4(%esp)
 8419ad2:	08 
 8419ad3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419ad6:	89 04 24             	mov    %eax,(%esp)
 8419ad9:	e8 e2 a6 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8419ade:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419ae5:	00 
 8419ae6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419ae9:	89 04 24             	mov    %eax,(%esp)
 8419aec:	e8 35 a8 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8419af1:	83 f0 01             	xor    $0x1,%eax
 8419af4:	84 c0                	test   %al,%al
 8419af6:	74 4f                	je     8419b47 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0xd1>
 8419af8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419afb:	89 04 24             	mov    %eax,(%esp)
 8419afe:	e8 69 88 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419b03:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419b06:	8b 52 04             	mov    0x4(%edx),%edx
 8419b09:	89 44 24 18          	mov    %eax,0x18(%esp)
 8419b0d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8419b11:	c7 44 24 10 4c a8 c4 	movl   $0x8c4a84c,0x10(%esp)
 8419b18:	08 
 8419b19:	c7 44 24 0c 72 4b 00 	movl   $0x4b72,0xc(%esp)
 8419b20:	00 
 8419b21:	c7 44 24 08 40 cc c5 	movl   $0x8c5cc40,0x8(%esp)
 8419b28:	08 
 8419b29:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419b30:	08 
 8419b31:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419b38:	e8 cd a0 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419b3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8419b42:	e9 63 02 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419b47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419b4a:	89 04 24             	mov    %eax,(%esp)
 8419b4d:	e8 1a 88 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419b52:	85 c0                	test   %eax,%eax
 8419b54:	0f 94 c0             	sete   %al
 8419b57:	84 c0                	test   %al,%al
 8419b59:	74 4f                	je     8419baa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x134>
 8419b5b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419b5e:	89 04 24             	mov    %eax,(%esp)
 8419b61:	e8 06 88 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419b66:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419b69:	8b 52 04             	mov    0x4(%edx),%edx
 8419b6c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8419b70:	89 54 24 14          	mov    %edx,0x14(%esp)
 8419b74:	c7 44 24 10 84 a8 c4 	movl   $0x8c4a884,0x10(%esp)
 8419b7b:	08 
 8419b7c:	c7 44 24 0c 79 4b 00 	movl   $0x4b79,0xc(%esp)
 8419b83:	00 
 8419b84:	c7 44 24 08 40 cc c5 	movl   $0x8c5cc40,0x8(%esp)
 8419b8b:	08 
 8419b8c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419b93:	08 
 8419b94:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419b9b:	e8 6a a0 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419ba0:	b8 01 00 00 00       	mov    $0x1,%eax
 8419ba5:	e9 00 02 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419baa:	8d 9d 40 fe ff ff    	lea    -0x1c0(%ebp),%ebx
 8419bb0:	b8 00 00 00 00       	mov    $0x0,%eax
 8419bb5:	ba 6b 00 00 00       	mov    $0x6b,%edx
 8419bba:	89 df                	mov    %ebx,%edi
 8419bbc:	89 d1                	mov    %edx,%ecx
 8419bbe:	f3 ab                	rep stos %eax,%es:(%edi)
 8419bc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419bc3:	83 c0 10             	add    $0x10,%eax
 8419bc6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8419bc9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8419bd0:	e9 a6 01 00 00       	jmp    8419d7b <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x305>
 8419bd5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419bd8:	89 04 24             	mov    %eax,(%esp)
 8419bdb:	e8 dc a8 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8419be0:	83 f0 01             	xor    $0x1,%eax
 8419be3:	84 c0                	test   %al,%al
 8419be5:	74 4f                	je     8419c36 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x1c0>
 8419be7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419bea:	89 04 24             	mov    %eax,(%esp)
 8419bed:	e8 7a 87 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419bf2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419bf5:	8b 52 04             	mov    0x4(%edx),%edx
 8419bf8:	89 44 24 18          	mov    %eax,0x18(%esp)
 8419bfc:	89 54 24 14          	mov    %edx,0x14(%esp)
 8419c00:	c7 44 24 10 b8 a8 c4 	movl   $0x8c4a8b8,0x10(%esp)
 8419c07:	08 
 8419c08:	c7 44 24 0c 89 4b 00 	movl   $0x4b89,0xc(%esp)
 8419c0f:	00 
 8419c10:	c7 44 24 08 40 cc c5 	movl   $0x8c5cc40,0x8(%esp)
 8419c17:	08 
 8419c18:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419c1f:	08 
 8419c20:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419c27:	e8 de 9f 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419c2c:	b8 00 00 00 00       	mov    $0x0,%eax
 8419c31:	e9 74 01 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419c36:	c7 44 24 0c ab 01 00 	movl   $0x1ab,0xc(%esp)
 8419c3d:	00 
 8419c3e:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 8419c44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419c48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8419c4f:	00 
 8419c50:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419c53:	89 04 24             	mov    %eax,(%esp)
 8419c56:	e8 8f 31 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8419c5b:	83 f0 01             	xor    $0x1,%eax
 8419c5e:	84 c0                	test   %al,%al
 8419c60:	74 4f                	je     8419cb1 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x23b>
 8419c62:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419c65:	89 04 24             	mov    %eax,(%esp)
 8419c68:	e8 ff 86 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419c6d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419c70:	8b 52 04             	mov    0x4(%edx),%edx
 8419c73:	89 44 24 18          	mov    %eax,0x18(%esp)
 8419c77:	89 54 24 14          	mov    %edx,0x14(%esp)
 8419c7b:	c7 44 24 10 ec a8 c4 	movl   $0x8c4a8ec,0x10(%esp)
 8419c82:	08 
 8419c83:	c7 44 24 0c 8f 4b 00 	movl   $0x4b8f,0xc(%esp)
 8419c8a:	00 
 8419c8b:	c7 44 24 08 40 cc c5 	movl   $0x8c5cc40,0x8(%esp)
 8419c92:	08 
 8419c93:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419c9a:	08 
 8419c9b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419ca2:	e8 63 9f 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419ca7:	b8 00 00 00 00       	mov    $0x0,%eax
 8419cac:	e9 f9 00 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419cb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419cb4:	83 c0 10             	add    $0x10,%eax
 8419cb7:	89 04 24             	mov    %eax,(%esp)
 8419cba:	e8 f1 46 c6 ff       	call   807e3b0 <strlen@plt>
 8419cbf:	89 c3                	mov    %eax,%ebx
 8419cc1:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 8419cc7:	89 04 24             	mov    %eax,(%esp)
 8419cca:	e8 e1 46 c6 ff       	call   807e3b0 <strlen@plt>
 8419ccf:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8419cd2:	3d 00 18 00 00       	cmp    $0x1800,%eax
 8419cd7:	76 4f                	jbe    8419d28 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x2b2>
 8419cd9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419cdc:	89 04 24             	mov    %eax,(%esp)
 8419cdf:	e8 88 86 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419ce4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419ce7:	8b 52 04             	mov    0x4(%edx),%edx
 8419cea:	89 44 24 18          	mov    %eax,0x18(%esp)
 8419cee:	89 54 24 14          	mov    %edx,0x14(%esp)
 8419cf2:	c7 44 24 10 20 a9 c4 	movl   $0x8c4a920,0x10(%esp)
 8419cf9:	08 
 8419cfa:	c7 44 24 0c 95 4b 00 	movl   $0x4b95,0xc(%esp)
 8419d01:	00 
 8419d02:	c7 44 24 08 40 cc c5 	movl   $0x8c5cc40,0x8(%esp)
 8419d09:	08 
 8419d0a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419d11:	08 
 8419d12:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419d19:	e8 ec 9e 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419d1e:	b8 00 00 00 00       	mov    $0x0,%eax
 8419d23:	e9 82 00 00 00       	jmp    8419daa <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x334>
 8419d28:	c7 44 24 08 ac 01 00 	movl   $0x1ac,0x8(%esp)
 8419d2f:	00 
 8419d30:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 8419d36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419d3a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8419d3d:	89 04 24             	mov    %eax,(%esp)
 8419d40:	e8 5b 3b c6 ff       	call   807d8a0 <memcpy@plt>
 8419d45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8419d48:	89 04 24             	mov    %eax,(%esp)
 8419d4b:	e8 60 46 c6 ff       	call   807e3b0 <strlen@plt>
 8419d50:	01 45 f0             	add    %eax,-0x10(%ebp)
 8419d53:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8419d56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419d59:	89 04 24             	mov    %eax,(%esp)
 8419d5c:	e8 0b 86 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419d61:	83 e8 01             	sub    $0x1,%eax
 8419d64:	39 c3                	cmp    %eax,%ebx
 8419d66:	0f 95 c0             	setne  %al
 8419d69:	84 c0                	test   %al,%al
 8419d6b:	74 0a                	je     8419d77 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x301>
 8419d6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8419d70:	c6 00 2c             	movb   $0x2c,(%eax)
 8419d73:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8419d77:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8419d7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419d7e:	89 04 24             	mov    %eax,(%esp)
 8419d81:	e8 e6 85 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419d86:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8419d89:	0f 9f c0             	setg   %al
 8419d8c:	84 c0                	test   %al,%al
 8419d8e:	0f 85 41 fe ff ff    	jne    8419bd5 <_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x15f>
 8419d94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419d97:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 8419d9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419d9e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8419da5:	b8 01 00 00 00       	mov    $0x1,%eax
 8419daa:	81 c4 e0 01 00 00    	add    $0x1e0,%esp
 8419db0:	5b                   	pop    %ebx
 8419db1:	5f                   	pop    %edi
 8419db2:	5d                   	pop    %ebp
 8419db3:	c3                   	ret

```

```c
// DB_LoadDungeonClear::AradLoadDungeonClear @ 0x8419a76

/* DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::AradLoadDungeonClear(DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_1c4 [428];
  MySQL *local_18;
  SIG_LOAD_DUNGEON_CLEAR *local_14;
  int local_10;
  
  bVar8 = 0;
  cVar1 = AradLoadMemberDungeonClear(this,param_1);
  if (cVar1 == '\0') {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(local_18,
                     "select B.dungeon from charac_info A Inner Join charac_dungeon B where A.m_id = %d and B.charac_no = A.charac_no and A.delete_flag = 0"
                     ,*(undefined4 *)(param_1 + 4));
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_18);
      if (iVar3 == 0) {
        uVar2 = MySQL::get_n_rows(local_18);
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4b79,
                   "Dungeon count error : m_id(%d) dungeon count(%d)",*(undefined4 *)(param_1 + 4),
                   uVar2);
        uVar2 = 1;
      }
      else {
        pcVar7 = local_1c4;
        for (iVar3 = 0x6b; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
        }
        local_14 = param_1 + 0x10;
        local_10 = 0;
        while (iVar3 = MySQL::get_n_rows(local_18), local_10 < iVar3) {
          cVar1 = MySQL::fetch(local_18);
          if (cVar1 != '\x01') {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b89,"Dungeon fetch error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          cVar1 = MySQL::get_str(local_18,0,local_1c4,0x1ab);
          if (cVar1 != '\x01') {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b8f,"Dungeon Parsing error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          sVar4 = strlen((char *)(param_1 + 0x10));
          sVar5 = strlen(local_1c4);
          if (0x1800 < sVar4 + sVar5) {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b95,"Dungeon Total Data Error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          memcpy(local_14,local_1c4,0x1ac);
          sVar4 = strlen((char *)local_14);
          iVar3 = local_10;
          local_14 = local_14 + sVar4;
          iVar6 = MySQL::get_n_rows(local_18);
          if (iVar3 != iVar6 + -1) {
            *local_14 = (SIG_LOAD_DUNGEON_CLEAR)0x2c;
            local_14 = local_14 + 1;
          }
          local_10 = local_10 + 1;
        }
        param_1[8] = (SIG_LOAD_DUNGEON_CLEAR)0x1;
        *(undefined4 *)(param_1 + 0xc) = 0;
        uVar2 = 1;
      }
    }
    else {
      uVar2 = MySQL::get_n_rows(local_18);
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4b72,
                 "Dungeon share query error : m_id(%d) dungeon count(%d)",
                 *(undefined4 *)(param_1 + 4),uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## AradLoadMemberDungeonClear

```asm
// === 0841996e DB_LoadDungeonClear::AradLoadMemberDungeonClear  [0x0841996e-0x8419a75] ===
 841996e:	55                   	push   %ebp
 841996f:	89 e5                	mov    %esp,%ebp
 8419971:	83 ec 28             	sub    $0x28,%esp
 8419974:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8419979:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8419980:	00 
 8419981:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8419988:	00 
 8419989:	89 04 24             	mov    %eax,(%esp)
 841998c:	e8 ad b8 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8419991:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8419994:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419997:	8b 40 04             	mov    0x4(%eax),%eax
 841999a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841999e:	c7 44 24 04 90 a7 c4 	movl   $0x8c4a790,0x4(%esp)
 84199a5:	08 
 84199a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84199a9:	89 04 24             	mov    %eax,(%esp)
 84199ac:	e8 0f a8 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84199b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84199b8:	00 
 84199b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84199bc:	89 04 24             	mov    %eax,(%esp)
 84199bf:	e8 62 a9 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84199c4:	83 f0 01             	xor    $0x1,%eax
 84199c7:	84 c0                	test   %al,%al
 84199c9:	74 0a                	je     84199d5 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x67>
 84199cb:	b8 00 00 00 00       	mov    $0x0,%eax
 84199d0:	e9 9e 00 00 00       	jmp    8419a73 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x105>
 84199d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84199d8:	89 04 24             	mov    %eax,(%esp)
 84199db:	e8 8c 89 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84199e0:	85 c0                	test   %eax,%eax
 84199e2:	0f 94 c0             	sete   %al
 84199e5:	84 c0                	test   %al,%al
 84199e7:	74 0a                	je     84199f3 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x85>
 84199e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84199ee:	e9 80 00 00 00       	jmp    8419a73 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x105>
 84199f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84199f6:	89 04 24             	mov    %eax,(%esp)
 84199f9:	e8 be aa fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84199fe:	83 f0 01             	xor    $0x1,%eax
 8419a01:	84 c0                	test   %al,%al
 8419a03:	74 07                	je     8419a0c <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x9e>
 8419a05:	b8 00 00 00 00       	mov    $0x0,%eax
 8419a0a:	eb 67                	jmp    8419a73 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x105>
 8419a0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419a0f:	83 c0 10             	add    $0x10,%eax
 8419a12:	c7 44 24 0c ff 17 00 	movl   $0x17ff,0xc(%esp)
 8419a19:	00 
 8419a1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419a1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8419a25:	00 
 8419a26:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8419a29:	89 04 24             	mov    %eax,(%esp)
 8419a2c:	e8 b9 33 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8419a31:	83 f0 01             	xor    $0x1,%eax
 8419a34:	84 c0                	test   %al,%al
 8419a36:	74 07                	je     8419a3f <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0xd1>
 8419a38:	b8 00 00 00 00       	mov    $0x0,%eax
 8419a3d:	eb 34                	jmp    8419a73 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x105>
 8419a3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419a42:	83 c0 10             	add    $0x10,%eax
 8419a45:	89 04 24             	mov    %eax,(%esp)
 8419a48:	e8 63 49 c6 ff       	call   807e3b0 <strlen@plt>
 8419a4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8419a50:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8419a54:	75 07                	jne    8419a5d <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0xef>
 8419a56:	b8 00 00 00 00       	mov    $0x0,%eax
 8419a5b:	eb 16                	jmp    8419a73 <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x105>
 8419a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419a60:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 8419a64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419a67:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8419a6e:	b8 01 00 00 00       	mov    $0x1,%eax
 8419a73:	c9                   	leave
 8419a74:	c3                   	ret
 8419a75:	90                   	nop

```

```c
// DB_LoadDungeonClear::AradLoadMemberDungeonClear @ 0x841996e

/* DB_LoadDungeonClear::AradLoadMemberDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::AradLoadMemberDungeonClear
          (DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect dungeon from member_dungeon where m_id=%u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x10),0x17ff);
        if (cVar1 == '\x01') {
          sVar4 = strlen((char *)(param_1 + 0x10));
          if (sVar4 == 0) {
            uVar2 = 0;
          }
          else {
            param_1[8] = (SIG_LOAD_DUNGEON_CLEAR)0x0;
            *(undefined4 *)(param_1 + 0xc) = 0;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
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

## DB_LoadDungeonClear

```asm
// === 08419852 DB_LoadDungeonClear::DB_LoadDungeonClear  [0x08419852-0x841986d] ===
 8419852:	55                   	push   %ebp
 8419853:	89 e5                	mov    %esp,%ebp
 8419855:	83 ec 18             	sub    $0x18,%esp
 8419858:	8b 45 08             	mov    0x8(%ebp),%eax
 841985b:	89 04 24             	mov    %eax,(%esp)
 841985e:	e8 43 3f 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8419863:	8b 45 08             	mov    0x8(%ebp),%eax
 8419866:	c7 00 60 f9 c5 08    	movl   $0x8c5f960,(%eax)
 841986c:	c9                   	leave
 841986d:	c3                   	ret

```

```c
// DB_LoadDungeonClear::DB_LoadDungeonClear @ 0x8419852

/* DB_LoadDungeonClear::DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f960;
  return;
}

```

---

## LoadDungeonClear

```asm
// === 08419db4 DB_LoadDungeonClear::LoadDungeonClear  [0x08419db4-0x8419f09] ===
 8419db4:	55                   	push   %ebp
 8419db5:	89 e5                	mov    %esp,%ebp
 8419db7:	53                   	push   %ebx
 8419db8:	83 ec 34             	sub    $0x34,%esp
 8419dbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419dbe:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8419dc5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8419dca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8419dd1:	00 
 8419dd2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8419dd9:	00 
 8419dda:	89 04 24             	mov    %eax,(%esp)
 8419ddd:	e8 5c b4 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8419de2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8419de5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419de8:	8b 40 04             	mov    0x4(%eax),%eax
 8419deb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8419df2:	00 
 8419df3:	89 04 24             	mov    %eax,(%esp)
 8419df6:	e8 50 f2 ce ff       	call   810904b <_Z14NumberToStringji>
 8419dfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419dff:	c7 44 24 04 58 a9 c4 	movl   $0x8c4a958,0x4(%esp)
 8419e06:	08 
 8419e07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419e0a:	89 04 24             	mov    %eax,(%esp)
 8419e0d:	e8 ae a3 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8419e12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419e19:	00 
 8419e1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419e1d:	89 04 24             	mov    %eax,(%esp)
 8419e20:	e8 01 a5 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8419e25:	83 f0 01             	xor    $0x1,%eax
 8419e28:	84 c0                	test   %al,%al
 8419e2a:	74 0a                	je     8419e36 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x82>
 8419e2c:	b8 00 00 00 00       	mov    $0x0,%eax
 8419e31:	e9 ce 00 00 00       	jmp    8419f04 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x150>
 8419e36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419e39:	89 04 24             	mov    %eax,(%esp)
 8419e3c:	e8 2b 85 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419e41:	83 f8 01             	cmp    $0x1,%eax
 8419e44:	0f 95 c0             	setne  %al
 8419e47:	84 c0                	test   %al,%al
 8419e49:	74 5e                	je     8419ea9 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0xf5>
 8419e4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419e4e:	89 04 24             	mov    %eax,(%esp)
 8419e51:	e8 16 85 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8419e56:	89 c3                	mov    %eax,%ebx
 8419e58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419e5b:	8b 40 04             	mov    0x4(%eax),%eax
 8419e5e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8419e65:	00 
 8419e66:	89 04 24             	mov    %eax,(%esp)
 8419e69:	e8 dd f1 ce ff       	call   810904b <_Z14NumberToStringji>
 8419e6e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8419e72:	89 44 24 14          	mov    %eax,0x14(%esp)
 8419e76:	c7 44 24 10 8c a9 c4 	movl   $0x8c4a98c,0x10(%esp)
 8419e7d:	08 
 8419e7e:	c7 44 24 0c bc 4b 00 	movl   $0x4bbc,0xc(%esp)
 8419e85:	00 
 8419e86:	c7 44 24 08 e0 cb c5 	movl   $0x8c5cbe0,0x8(%esp)
 8419e8d:	08 
 8419e8e:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419e95:	08 
 8419e96:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8419e9d:	e8 68 9d 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8419ea2:	b8 00 00 00 00       	mov    $0x0,%eax
 8419ea7:	eb 5b                	jmp    8419f04 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x150>
 8419ea9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419eac:	89 04 24             	mov    %eax,(%esp)
 8419eaf:	e8 08 a6 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8419eb4:	83 f0 01             	xor    $0x1,%eax
 8419eb7:	84 c0                	test   %al,%al
 8419eb9:	74 07                	je     8419ec2 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x10e>
 8419ebb:	b8 00 00 00 00       	mov    $0x0,%eax
 8419ec0:	eb 42                	jmp    8419f04 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x150>
 8419ec2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419ec5:	83 c0 10             	add    $0x10,%eax
 8419ec8:	c7 44 24 0c ff 17 00 	movl   $0x17ff,0xc(%esp)
 8419ecf:	00 
 8419ed0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419ed4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8419edb:	00 
 8419edc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419edf:	89 04 24             	mov    %eax,(%esp)
 8419ee2:	e8 03 2f cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8419ee7:	83 f0 01             	xor    $0x1,%eax
 8419eea:	84 c0                	test   %al,%al
 8419eec:	74 07                	je     8419ef5 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x141>
 8419eee:	b8 00 00 00 00       	mov    $0x0,%eax
 8419ef3:	eb 0f                	jmp    8419f04 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR+0x150>
 8419ef5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419ef8:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8419eff:	b8 01 00 00 00       	mov    $0x1,%eax
 8419f04:	83 c4 34             	add    $0x34,%esp
 8419f07:	5b                   	pop    %ebx
 8419f08:	5d                   	pop    %ebp
 8419f09:	c3                   	ret

```

```c
// DB_LoadDungeonClear::LoadDungeonClear @ 0x8419db4

/* DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::LoadDungeonClear(DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 4),0);
  MySQL::set_query(this_00,"seLect dungeon from member_dungeon where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x10),0x17ff);
        if (cVar1 == '\x01') {
          *(undefined4 *)(param_1 + 0xc) = 0;
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = MySQL::get_n_rows(this_00);
      uVar4 = NumberToString(*(uint *)(param_1 + 4),0);
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4bbc,
                 "Dungeon count error : m_id(%s) dungeon count(%d)",uVar4,uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## SendResult

```asm
// === 08419f0a DB_LoadDungeonClear::SendResult  [0x08419f0a-0x8419feb] ===
 8419f0a:	55                   	push   %ebp
 8419f0b:	89 e5                	mov    %esp,%ebp
 8419f0d:	56                   	push   %esi
 8419f0e:	53                   	push   %ebx
 8419f0f:	83 ec 20             	sub    $0x20,%esp
 8419f12:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8419f17:	c7 44 24 08 ca 4b 00 	movl   $0x4bca,0x8(%esp)
 8419f1e:	00 
 8419f1f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8419f26:	08 
 8419f27:	89 04 24             	mov    %eax,(%esp)
 8419f2a:	e8 57 5b e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8419f2f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8419f36:	00 
 8419f37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419f3b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419f3e:	89 04 24             	mov    %eax,(%esp)
 8419f41:	e8 e0 ec ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8419f46:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419f49:	89 04 24             	mov    %eax,(%esp)
 8419f4c:	e8 f5 ec ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8419f51:	8b 55 0c             	mov    0xc(%ebp),%edx
 8419f54:	89 54 24 04          	mov    %edx,0x4(%esp)
 8419f58:	89 04 24             	mov    %eax,(%esp)
 8419f5b:	e8 f6 ec ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8419f60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419f63:	89 04 24             	mov    %eax,(%esp)
 8419f66:	e8 db ec ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8419f6b:	8b 55 10             	mov    0x10(%ebp),%edx
 8419f6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8419f72:	89 04 24             	mov    %eax,(%esp)
 8419f75:	e8 dc ec ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8419f7a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419f7d:	89 04 24             	mov    %eax,(%esp)
 8419f80:	e8 c9 ec ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8419f85:	c7 44 24 08 10 18 00 	movl   $0x1810,0x8(%esp)
 8419f8c:	00 
 8419f8d:	8b 55 14             	mov    0x14(%ebp),%edx
 8419f90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8419f94:	89 04 24             	mov    %eax,(%esp)
 8419f97:	e8 b6 46 cc ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8419f9c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8419fa1:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8419fa4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8419fa8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419faf:	00 
 8419fb0:	89 04 24             	mov    %eax,(%esp)
 8419fb3:	e8 26 70 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8419fb8:	bb 01 00 00 00       	mov    $0x1,%ebx
 8419fbd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419fc0:	89 04 24             	mov    %eax,(%esp)
 8419fc3:	e8 0a 29 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8419fc8:	89 d8                	mov    %ebx,%eax
 8419fca:	83 c4 20             	add    $0x20,%esp
 8419fcd:	5b                   	pop    %ebx
 8419fce:	5e                   	pop    %esi
 8419fcf:	5d                   	pop    %ebp
 8419fd0:	c3                   	ret
 8419fd1:	89 d3                	mov    %edx,%ebx
 8419fd3:	89 c6                	mov    %eax,%esi
 8419fd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419fd8:	89 04 24             	mov    %eax,(%esp)
 8419fdb:	e8 f2 28 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8419fe0:	89 f0                	mov    %esi,%eax
 8419fe2:	89 da                	mov    %ebx,%edx
 8419fe4:	89 04 24             	mov    %eax,(%esp)
 8419fe7:	e8 64 97 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadDungeonClear::SendResult @ 0x8419f0a

/* DB_LoadDungeonClear::SendResult(int, int, SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::SendResult
          (DB_LoadDungeonClear *this,int param_1,int param_2,SIG_LOAD_DUNGEON_CLEAR *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4bca);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08419f5b to 08419fb7 has its CatchHandler @ 08419fd1 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x1810);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 084198bc DB_LoadDungeonClear::dispatch  [0x084198bc-0x841996d] ===
 84198bc:	55                   	push   %ebp
 84198bd:	89 e5                	mov    %esp,%ebp
 84198bf:	83 ec 28             	sub    $0x28,%esp
 84198c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84198c5:	8b 55 14             	mov    0x14(%ebp),%edx
 84198c8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84198cc:	8b 55 10             	mov    0x10(%ebp),%edx
 84198cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84198d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84198d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84198da:	89 04 24             	mov    %eax,(%esp)
 84198dd:	e8 9a 26 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 84198e2:	83 f0 01             	xor    $0x1,%eax
 84198e5:	84 c0                	test   %al,%al
 84198e7:	74 07                	je     84198f0 <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0x34>
 84198e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84198ee:	eb 7c                	jmp    841996c <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0xb0>
 84198f0:	8b 45 14             	mov    0x14(%ebp),%eax
 84198f3:	89 04 24             	mov    %eax,(%esp)
 84198f6:	e8 79 76 03 00       	call   8450f74 <_ZN6Stream12GetOutBufferI22SIG_LOAD_DUNGEON_CLEAREEPT_v>
 84198fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84198fe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8419902:	75 07                	jne    841990b <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0x4f>
 8419904:	b8 00 00 00 00       	mov    $0x0,%eax
 8419909:	eb 61                	jmp    841996c <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0xb0>
 841990b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841990e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419912:	8b 45 08             	mov    0x8(%ebp),%eax
 8419915:	89 04 24             	mov    %eax,(%esp)
 8419918:	e8 97 04 00 00       	call   8419db4 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR>
 841991d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8419920:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8419924:	83 f0 01             	xor    $0x1,%eax
 8419927:	84 c0                	test   %al,%al
 8419929:	74 07                	je     8419932 <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0x76>
 841992b:	b8 00 00 00 00       	mov    $0x0,%eax
 8419930:	eb 3a                	jmp    841996c <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0xb0>
 8419932:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419935:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8419939:	8b 45 10             	mov    0x10(%ebp),%eax
 841993c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419940:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419943:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419947:	8b 45 08             	mov    0x8(%ebp),%eax
 841994a:	89 04 24             	mov    %eax,(%esp)
 841994d:	e8 b8 05 00 00       	call   8419f0a <_ZN19DB_LoadDungeonClear10SendResultEiiP22SIG_LOAD_DUNGEON_CLEAR>
 8419952:	88 45 f3             	mov    %al,-0xd(%ebp)
 8419955:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8419959:	83 f0 01             	xor    $0x1,%eax
 841995c:	84 c0                	test   %al,%al
 841995e:	74 07                	je     8419967 <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0xab>
 8419960:	b8 00 00 00 00       	mov    $0x0,%eax
 8419965:	eb 05                	jmp    841996c <_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream+0xb0>
 8419967:	b8 01 00 00 00       	mov    $0x1,%eax
 841996c:	c9                   	leave
 841996d:	c3                   	ret

```

```c
// DB_LoadDungeonClear::dispatch @ 0x84198bc

/* DB_LoadDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDungeonClear::dispatch(DB_LoadDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_LOAD_DUNGEON_CLEAR *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_LOAD_DUNGEON_CLEAR>(param_3);
    if (pSVar3 == (SIG_LOAD_DUNGEON_CLEAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LoadDungeonClear(this,pSVar3);
      if (cVar1 == '\x01') {
        cVar1 = SendResult(this,param_1,param_2,pSVar3);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
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

## ~DB_LoadDungeonClear

```asm
// === 0841986e DB_LoadDungeonClear::~DB_LoadDungeonClear  [0x0841986e-0x841989d] ===
 841986e:	55                   	push   %ebp
 841986f:	89 e5                	mov    %esp,%ebp
 8419871:	83 ec 18             	sub    $0x18,%esp
 8419874:	8b 45 08             	mov    0x8(%ebp),%eax
 8419877:	c7 00 60 f9 c5 08    	movl   $0x8c5f960,(%eax)
 841987d:	8b 45 08             	mov    0x8(%ebp),%eax
 8419880:	89 04 24             	mov    %eax,(%esp)
 8419883:	e8 f0 8a cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8419888:	b8 00 00 00 00       	mov    $0x0,%eax
 841988d:	84 c0                	test   %al,%al
 841988f:	74 0b                	je     841989c <_ZN19DB_LoadDungeonClearD1Ev+0x2e>
 8419891:	8b 45 08             	mov    0x8(%ebp),%eax
 8419894:	89 04 24             	mov    %eax,(%esp)
 8419897:	e8 54 ac 30 00       	call   87244f0 <_ZdlPv>
 841989c:	c9                   	leave
 841989d:	c3                   	ret

```

```c
// DB_LoadDungeonClear::~DB_LoadDungeonClear @ 0x841986e

/* WARNING: Removing unreachable block (ram,0x08419891) */
/* DB_LoadDungeonClear::~DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::~DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f960;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_LoadDungeonClear_0841989e

```asm
// === 0841989e DB_LoadDungeonClear::~DB_LoadDungeonClear  [0x0841989e-0x84198bb] ===
 841989e:	55                   	push   %ebp
 841989f:	89 e5                	mov    %esp,%ebp
 84198a1:	83 ec 18             	sub    $0x18,%esp
 84198a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84198a7:	89 04 24             	mov    %eax,(%esp)
 84198aa:	e8 bf ff ff ff       	call   841986e <_ZN19DB_LoadDungeonClearD1Ev>
 84198af:	8b 45 08             	mov    0x8(%ebp),%eax
 84198b2:	89 04 24             	mov    %eax,(%esp)
 84198b5:	e8 36 ac 30 00       	call   87244f0 <_ZdlPv>
 84198ba:	c9                   	leave
 84198bb:	c3                   	ret

```

```c
// DB_LoadDungeonClear::~DB_LoadDungeonClear @ 0x841989e

/* DB_LoadDungeonClear::~DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::~DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  ~DB_LoadDungeonClear(this);
  operator_delete(this);
  return;
}

```

