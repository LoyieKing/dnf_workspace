# DB_LoadInventory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## DB_LoadInventory

```asm
// === 0840a604 DB_LoadInventory::DB_LoadInventory  [0x0840a604-0x840a61f] ===
 840a604:	55                   	push   %ebp
 840a605:	89 e5                	mov    %esp,%ebp
 840a607:	83 ec 18             	sub    $0x18,%esp
 840a60a:	8b 45 08             	mov    0x8(%ebp),%eax
 840a60d:	89 04 24             	mov    %eax,(%esp)
 840a610:	e8 91 31 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 840a615:	8b 45 08             	mov    0x8(%ebp),%eax
 840a618:	c7 00 a0 fb c5 08    	movl   $0x8c5fba0,(%eax)
 840a61e:	c9                   	leave
 840a61f:	c3                   	ret

```

```c
// DB_LoadInventory::DB_LoadInventory @ 0x840a604

/* DB_LoadInventory::DB_LoadInventory() */

void __thiscall DB_LoadInventory::DB_LoadInventory(DB_LoadInventory *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fba0;
  return;
}

```

---

## GetItemLock

```asm
// === 0840d766 DB_LoadInventory::GetItemLock  [0x0840d766-0x840d98b] ===
 840d766:	55                   	push   %ebp
 840d767:	89 e5                	mov    %esp,%ebp
 840d769:	57                   	push   %edi
 840d76a:	53                   	push   %ebx
 840d76b:	81 ec 20 04 00 00    	sub    $0x420,%esp
 840d771:	8d 9d ec fb ff ff    	lea    -0x414(%ebp),%ebx
 840d777:	b8 00 00 00 00       	mov    $0x0,%eax
 840d77c:	ba f3 00 00 00       	mov    $0xf3,%edx
 840d781:	89 df                	mov    %ebx,%edi
 840d783:	89 d1                	mov    %edx,%ecx
 840d785:	f3 ab                	rep stos %eax,%es:(%edi)
 840d787:	c7 45 b8 cc 03 00 00 	movl   $0x3cc,-0x48(%ebp)
 840d78e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840d793:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840d79a:	00 
 840d79b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840d7a2:	00 
 840d7a3:	89 04 24             	mov    %eax,(%esp)
 840d7a6:	e8 93 7a fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840d7ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840d7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 840d7b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d7b5:	c7 44 24 04 b8 6a c4 	movl   $0x8c46ab8,0x4(%esp)
 840d7bc:	08 
 840d7bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d7c0:	89 04 24             	mov    %eax,(%esp)
 840d7c3:	e8 f8 69 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840d7c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840d7cf:	00 
 840d7d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d7d3:	89 04 24             	mov    %eax,(%esp)
 840d7d6:	e8 4b 6b fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840d7db:	88 45 ef             	mov    %al,-0x11(%ebp)
 840d7de:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 840d7e2:	83 f0 01             	xor    $0x1,%eax
 840d7e5:	84 c0                	test   %al,%al
 840d7e7:	74 47                	je     840d830 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0xca>
 840d7e9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d7f0:	00 
 840d7f1:	c7 44 24 08 19 29 00 	movl   $0x2919,0x8(%esp)
 840d7f8:	00 
 840d7f9:	c7 44 24 04 20 d1 c5 	movl   $0x8c5d120,0x4(%esp)
 840d800:	08 
 840d801:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840d804:	89 04 24             	mov    %eax,(%esp)
 840d807:	e8 0c 1f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d80c:	8b 45 08             	mov    0x8(%ebp),%eax
 840d80f:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d813:	c7 44 24 04 00 6b c4 	movl   $0x8c46b00,0x4(%esp)
 840d81a:	08 
 840d81b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840d81e:	89 04 24             	mov    %eax,(%esp)
 840d821:	e8 62 1f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d826:	b8 1a 29 00 00       	mov    $0x291a,%eax
 840d82b:	e9 51 01 00 00       	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d830:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d833:	89 04 24             	mov    %eax,(%esp)
 840d836:	e8 31 4b cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840d83b:	85 c0                	test   %eax,%eax
 840d83d:	0f 94 c0             	sete   %al
 840d840:	84 c0                	test   %al,%al
 840d842:	74 0a                	je     840d84e <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0xe8>
 840d844:	b8 00 00 00 00       	mov    $0x0,%eax
 840d849:	e9 33 01 00 00       	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d84e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d851:	89 04 24             	mov    %eax,(%esp)
 840d854:	e8 63 6c fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840d859:	88 45 ef             	mov    %al,-0x11(%ebp)
 840d85c:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 840d860:	83 f0 01             	xor    $0x1,%eax
 840d863:	84 c0                	test   %al,%al
 840d865:	74 47                	je     840d8ae <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x148>
 840d867:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d86e:	00 
 840d86f:	c7 44 24 08 23 29 00 	movl   $0x2923,0x8(%esp)
 840d876:	00 
 840d877:	c7 44 24 04 20 d1 c5 	movl   $0x8c5d120,0x4(%esp)
 840d87e:	08 
 840d87f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840d882:	89 04 24             	mov    %eax,(%esp)
 840d885:	e8 8e 1e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d88a:	8b 45 08             	mov    0x8(%ebp),%eax
 840d88d:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d891:	c7 44 24 04 3c 6b c4 	movl   $0x8c46b3c,0x4(%esp)
 840d898:	08 
 840d899:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840d89c:	89 04 24             	mov    %eax,(%esp)
 840d89f:	e8 e4 1e 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d8a4:	b8 24 29 00 00       	mov    $0x2924,%eax
 840d8a9:	e9 d3 00 00 00       	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d8ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840d8b5:	00 
 840d8b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d8b9:	89 04 24             	mov    %eax,(%esp)
 840d8bc:	e8 1d 7b d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840d8c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840d8c4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 840d8c7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840d8cb:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 840d8d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d8d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840d8dc:	00 
 840d8dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d8e0:	89 04 24             	mov    %eax,(%esp)
 840d8e3:	e8 32 7a d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840d8e8:	83 f0 01             	xor    $0x1,%eax
 840d8eb:	84 c0                	test   %al,%al
 840d8ed:	74 44                	je     840d933 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x1cd>
 840d8ef:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d8f6:	00 
 840d8f7:	c7 44 24 08 2a 29 00 	movl   $0x292a,0x8(%esp)
 840d8fe:	00 
 840d8ff:	c7 44 24 04 20 d1 c5 	movl   $0x8c5d120,0x4(%esp)
 840d906:	08 
 840d907:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840d90a:	89 04 24             	mov    %eax,(%esp)
 840d90d:	e8 06 1e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d912:	8b 45 08             	mov    0x8(%ebp),%eax
 840d915:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d919:	c7 44 24 04 fc 45 c4 	movl   $0x8c445fc,0x4(%esp)
 840d920:	08 
 840d921:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840d924:	89 04 24             	mov    %eax,(%esp)
 840d927:	e8 5c 1e 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d92c:	b8 2b 29 00 00       	mov    $0x292b,%eax
 840d931:	eb 4e                	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d933:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d936:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840d939:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840d93d:	8d 95 ec fb ff ff    	lea    -0x414(%ebp),%edx
 840d943:	89 54 24 08          	mov    %edx,0x8(%esp)
 840d947:	8d 55 b8             	lea    -0x48(%ebp),%edx
 840d94a:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d94e:	89 04 24             	mov    %eax,(%esp)
 840d951:	e8 ac 47 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840d956:	83 f0 01             	xor    $0x1,%eax
 840d959:	84 c0                	test   %al,%al
 840d95b:	74 07                	je     840d964 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x1fe>
 840d95d:	b8 2f 29 00 00       	mov    $0x292f,%eax
 840d962:	eb 1d                	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d964:	8b 45 b8             	mov    -0x48(%ebp),%eax
 840d967:	83 e0 07             	and    $0x7,%eax
 840d96a:	85 c0                	test   %eax,%eax
 840d96c:	74 0e                	je     840d97c <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x216>
 840d96e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 840d971:	85 c0                	test   %eax,%eax
 840d973:	74 07                	je     840d97c <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x216>
 840d975:	b8 31 29 00 00       	mov    $0x2931,%eax
 840d97a:	eb 05                	jmp    840d981 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo+0x21b>
 840d97c:	b8 00 00 00 00       	mov    $0x0,%eax
 840d981:	81 c4 20 04 00 00    	add    $0x420,%esp
 840d987:	5b                   	pop    %ebx
 840d988:	5f                   	pop    %edi
 840d989:	5d                   	pop    %ebp
 840d98a:	c3                   	ret
 840d98b:	90                   	nop

```

```c
// DB_LoadInventory::GetItemLock @ 0x840d766

/* DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*) */

undefined4 DB_LoadInventory::GetItemLock(uint param_1,stItemLockInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_418 [972];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  uint local_10;
  
  pcVar4 = local_418;
  for (iVar3 = 0xf3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_4c = 0x3cc;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_14,"seLect item_lock_info  from charac_item_lock_info where charac_no=%u",
                   param_1);
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        local_10 = MySQL::get_binary_length(local_14,0);
        cVar1 = MySQL::get_binary(local_14,0,local_418,local_4c);
        if (cVar1 == '\x01') {
          cVar1 = uncompress_zip((char *)param_2,&local_4c,local_418,local_10);
          if (cVar1 == '\x01') {
            if (((local_4c & 7) == 0) || (local_4c == 0)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0x2931;
            }
          }
          else {
            uVar2 = 0x292f;
          }
        }
        else {
          cMyTrace::cMyTrace(local_28,
                             "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                             ,0x292a,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     param_1);
          uVar2 = 0x292b;
        }
      }
      else {
        cMyTrace::cMyTrace(local_38,
                           "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                           ,0x2923,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadInventory::GetItemLock, fetch() ERROR charac_no=%u",param_1);
        uVar2 = 0x2924;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_48,
                       "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                       ,0x2919,5);
    cMyTrace::operator()
              (local_48,"DB_LoadInventory::GetItemLock, exec() ERROR charac_no=%u",param_1);
    uVar2 = 0x291a;
  }
  return uVar2;
}

```

---

## GetUserAvatar

```asm
// === 0840bd3a DB_LoadInventory::GetUserAvatar  [0x0840bd3a-0x840be89] ===
 840bd3a:	55                   	push   %ebp
 840bd3b:	89 e5                	mov    %esp,%ebp
 840bd3d:	56                   	push   %esi
 840bd3e:	53                   	push   %ebx
 840bd3f:	83 ec 50             	sub    $0x50,%esp
 840bd42:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd45:	8d b0 1c cd 00 00    	lea    0xcd1c(%eax),%esi
 840bd4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd4e:	8d 98 a1 a3 00 00    	lea    0xa3a1(%eax),%ebx
 840bd54:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd57:	8d 88 44 40 00 00    	lea    0x4044(%eax),%ecx
 840bd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd60:	8d 90 20 cd 00 00    	lea    0xcd20(%eax),%edx
 840bd66:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd69:	8b 40 04             	mov    0x4(%eax),%eax
 840bd6c:	89 74 24 10          	mov    %esi,0x10(%esp)
 840bd70:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840bd74:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 840bd78:	89 54 24 04          	mov    %edx,0x4(%esp)
 840bd7c:	89 04 24             	mov    %eax,(%esp)
 840bd7f:	e8 06 01 00 00       	call   840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>
 840bd84:	88 45 f7             	mov    %al,-0x9(%ebp)
 840bd87:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 840bd8b:	83 f0 01             	xor    $0x1,%eax
 840bd8e:	84 c0                	test   %al,%al
 840bd90:	74 4a                	je     840bddc <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY+0xa2>
 840bd92:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd95:	8b 58 04             	mov    0x4(%eax),%ebx
 840bd98:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840bd9f:	00 
 840bda0:	c7 44 24 08 cb 25 00 	movl   $0x25cb,0x8(%esp)
 840bda7:	00 
 840bda8:	c7 44 24 04 40 d2 c5 	movl   $0x8c5d240,0x4(%esp)
 840bdaf:	08 
 840bdb0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840bdb3:	89 04 24             	mov    %eax,(%esp)
 840bdb6:	e8 5d 39 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840bdbb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840bdbf:	c7 44 24 04 28 60 c4 	movl   $0x8c46028,0x4(%esp)
 840bdc6:	08 
 840bdc7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840bdca:	89 04 24             	mov    %eax,(%esp)
 840bdcd:	e8 b6 39 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bdd2:	b8 00 00 00 00       	mov    $0x0,%eax
 840bdd7:	e9 a7 00 00 00       	jmp    840be83 <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY+0x149>
 840bddc:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bddf:	8b 40 08             	mov    0x8(%eax),%eax
 840bde2:	85 c0                	test   %eax,%eax
 840bde4:	0f 84 94 00 00 00    	je     840be7e <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY+0x144>
 840bdea:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bded:	8d b0 4f 1e 00 00    	lea    0x1e4f(%eax),%esi
 840bdf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bdf6:	8d 58 0c             	lea    0xc(%eax),%ebx
 840bdf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bdfc:	8d 88 4a 05 00 00    	lea    0x54a(%eax),%ecx
 840be02:	8b 45 0c             	mov    0xc(%ebp),%eax
 840be05:	8d 90 53 1e 00 00    	lea    0x1e53(%eax),%edx
 840be0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840be0e:	8b 40 08             	mov    0x8(%eax),%eax
 840be11:	89 74 24 10          	mov    %esi,0x10(%esp)
 840be15:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840be19:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 840be1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 840be21:	89 04 24             	mov    %eax,(%esp)
 840be24:	e8 61 00 00 00       	call   840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>
 840be29:	88 45 f7             	mov    %al,-0x9(%ebp)
 840be2c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 840be30:	83 f0 01             	xor    $0x1,%eax
 840be33:	84 c0                	test   %al,%al
 840be35:	74 47                	je     840be7e <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY+0x144>
 840be37:	8b 45 0c             	mov    0xc(%ebp),%eax
 840be3a:	8b 58 08             	mov    0x8(%eax),%ebx
 840be3d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840be44:	00 
 840be45:	c7 44 24 08 d7 25 00 	movl   $0x25d7,0x8(%esp)
 840be4c:	00 
 840be4d:	c7 44 24 04 40 d2 c5 	movl   $0x8c5d240,0x4(%esp)
 840be54:	08 
 840be55:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840be58:	89 04 24             	mov    %eax,(%esp)
 840be5b:	e8 b8 38 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840be60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840be64:	c7 44 24 04 60 60 c4 	movl   $0x8c46060,0x4(%esp)
 840be6b:	08 
 840be6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840be6f:	89 04 24             	mov    %eax,(%esp)
 840be72:	e8 11 39 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840be77:	b8 00 00 00 00       	mov    $0x0,%eax
 840be7c:	eb 05                	jmp    840be83 <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY+0x149>
 840be7e:	b8 01 00 00 00       	mov    $0x1,%eax
 840be83:	83 c4 50             	add    $0x50,%esp
 840be86:	5b                   	pop    %ebx
 840be87:	5e                   	pop    %esi
 840be88:	5d                   	pop    %ebp
 840be89:	c3                   	ret

```

```c
// DB_LoadInventory::GetUserAvatar @ 0x840bd3a

/* DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserAvatar(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  undefined4 uVar1;
  cMyTrace local_30 [16];
  cMyTrace local_20 [19];
  char local_d;
  
  local_d = _GetUserAvatar(*(uint *)(param_1 + 4),(AvatarDetailInfo *)(param_1 + 0xcd20),
                           (Inven_Item *)(param_1 + 0x4044),(Inven_Item *)(param_1 + 0xa3a1),
                           (int *)(param_1 + 0xcd1c));
  if (local_d == '\x01') {
    if ((*(int *)(param_1 + 8) != 0) &&
       (local_d = _GetUserAvatar(*(uint *)(param_1 + 8),(AvatarDetailInfo *)(param_1 + 0x1e53),
                                 (Inven_Item *)(param_1 + 0x54a),(Inven_Item *)(param_1 + 0xc),
                                 (int *)(param_1 + 0x1e4f)), local_d != '\x01')) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      cMyTrace::cMyTrace(local_20,"bool DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)",0x25d7
                         ,5);
      cMyTrace::operator()
                (local_20,"DB_LoadInventory::_GetUserAvatar ERROR::tag_charac_no(%d)",uVar1);
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_30,"bool DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)",0x25cb,5
                      );
    cMyTrace::operator()(local_30,"DB_LoadInventory::_GetUserAvatar ERROR::charac_no(%d)",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetUserCreature

```asm
// === 0840ca74 DB_LoadInventory::GetUserCreature  [0x0840ca74-0x840d765] ===
 840ca74:	55                   	push   %ebp
 840ca75:	89 e5                	mov    %esp,%ebp
 840ca77:	56                   	push   %esi
 840ca78:	53                   	push   %ebx
 840ca79:	81 ec c0 02 00 00    	sub    $0x2c0,%esp
 840ca7f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840ca84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ca8b:	00 
 840ca8c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840ca93:	00 
 840ca94:	89 04 24             	mov    %eax,(%esp)
 840ca97:	e8 a2 87 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840ca9c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840ca9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 840caa2:	8b 40 04             	mov    0x4(%eax),%eax
 840caa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840caa9:	c7 44 24 04 04 65 c4 	movl   $0x8c46504,0x4(%esp)
 840cab0:	08 
 840cab1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cab4:	89 04 24             	mov    %eax,(%esp)
 840cab7:	e8 04 77 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840cabc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840cac3:	00 
 840cac4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cac7:	89 04 24             	mov    %eax,(%esp)
 840caca:	e8 57 78 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840cacf:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840cad2:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840cad6:	83 f0 01             	xor    $0x1,%eax
 840cad9:	84 c0                	test   %al,%al
 840cadb:	74 50                	je     840cb2d <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb9>
 840cadd:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cae0:	8b 58 04             	mov    0x4(%eax),%ebx
 840cae3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840caea:	00 
 840caeb:	c7 44 24 08 f0 27 00 	movl   $0x27f0,0x8(%esp)
 840caf2:	00 
 840caf3:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cafa:	08 
 840cafb:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 840cb01:	89 04 24             	mov    %eax,(%esp)
 840cb04:	e8 0f 2c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cb09:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cb0d:	c7 44 24 04 c8 65 c4 	movl   $0x8c465c8,0x4(%esp)
 840cb14:	08 
 840cb15:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 840cb1b:	89 04 24             	mov    %eax,(%esp)
 840cb1e:	e8 65 2c 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cb23:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cb28:	e9 2d 0c 00 00       	jmp    840d75a <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xce6>
 840cb2d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cb30:	89 04 24             	mov    %eax,(%esp)
 840cb33:	e8 34 58 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840cb38:	89 c2                	mov    %eax,%edx
 840cb3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cb3d:	89 90 7c 28 01 00    	mov    %edx,0x1287c(%eax)
 840cb43:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 840cb4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cb4d:	8b 80 7c 28 01 00    	mov    0x1287c(%eax),%eax
 840cb53:	3d 8d 00 00 00       	cmp    $0x8d,%eax
 840cb58:	7e 5d                	jle    840cbb7 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x143>
 840cb5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cb5d:	8b b0 7c 28 01 00    	mov    0x1287c(%eax),%esi
 840cb63:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cb66:	8b 58 04             	mov    0x4(%eax),%ebx
 840cb69:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cb70:	00 
 840cb71:	c7 44 24 08 fb 27 00 	movl   $0x27fb,0x8(%esp)
 840cb78:	00 
 840cb79:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cb80:	08 
 840cb81:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 840cb87:	89 04 24             	mov    %eax,(%esp)
 840cb8a:	e8 89 2b 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cb8f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 840cb93:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cb97:	c7 44 24 04 08 66 c4 	movl   $0x8c46608,0x4(%esp)
 840cb9e:	08 
 840cb9f:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 840cba5:	89 04 24             	mov    %eax,(%esp)
 840cba8:	e8 db 2b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cbad:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cbb2:	e9 a3 0b 00 00       	jmp    840d75a <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xce6>
 840cbb7:	c7 44 24 08 8d 00 00 	movl   $0x8d,0x8(%esp)
 840cbbe:	00 
 840cbbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840cbc6:	00 
 840cbc7:	8d 85 57 fd ff ff    	lea    -0x2a9(%ebp),%eax
 840cbcd:	89 04 24             	mov    %eax,(%esp)
 840cbd0:	e8 eb 10 c7 ff       	call   807dcc0 <memset@plt>
 840cbd5:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 840cbdb:	89 04 24             	mov    %eax,(%esp)
 840cbde:	e8 af e0 d3 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 840cbe3:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 840cbe7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 840cbee:	e9 22 09 00 00       	jmp    840d515 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xaa1>
 840cbf3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cbf6:	89 04 24             	mov    %eax,(%esp)
 840cbf9:	e8 be 78 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840cbfe:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840cc01:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840cc05:	83 f0 01             	xor    $0x1,%eax
 840cc08:	84 c0                	test   %al,%al
 840cc0a:	74 52                	je     840cc5e <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x1ea>
 840cc0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cc0f:	8b 58 04             	mov    0x4(%eax),%ebx
 840cc12:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cc19:	00 
 840cc1a:	c7 44 24 08 0e 28 00 	movl   $0x280e,0x8(%esp)
 840cc21:	00 
 840cc22:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cc29:	08 
 840cc2a:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 840cc30:	89 04 24             	mov    %eax,(%esp)
 840cc33:	e8 e0 2a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cc38:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840cc3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840cc3f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cc43:	c7 44 24 04 6c 66 c4 	movl   $0x8c4666c,0x4(%esp)
 840cc4a:	08 
 840cc4b:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 840cc51:	89 04 24             	mov    %eax,(%esp)
 840cc54:	e8 2f 2b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cc59:	e9 ce 08 00 00       	jmp    840d52c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xab8>
 840cc5e:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 840cc65:	00 
 840cc66:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840cc6d:	00 
 840cc6e:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840cc74:	89 04 24             	mov    %eax,(%esp)
 840cc77:	e8 44 10 c7 ff       	call   807dcc0 <memset@plt>
 840cc7c:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840cc82:	83 c0 2c             	add    $0x2c,%eax
 840cc85:	89 44 24 08          	mov    %eax,0x8(%esp)
 840cc89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840cc90:	00 
 840cc91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cc94:	89 04 24             	mov    %eax,(%esp)
 840cc97:	e8 90 9c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840cc9c:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840cc9f:	8b 85 10 fe ff ff    	mov    -0x1f0(%ebp),%eax
 840cca5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840cca8:	81 7d f4 ee 00 00 00 	cmpl   $0xee,-0xc(%ebp)
 840ccaf:	75 07                	jne    840ccb8 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x244>
 840ccb1:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
 840ccb8:	81 7d f4 8c 00 00 00 	cmpl   $0x8c,-0xc(%ebp)
 840ccbf:	7e 52                	jle    840cd13 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x29f>
 840ccc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ccc4:	8b 58 04             	mov    0x4(%eax),%ebx
 840ccc7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ccce:	00 
 840cccf:	c7 44 24 08 1d 28 00 	movl   $0x281d,0x8(%esp)
 840ccd6:	00 
 840ccd7:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840ccde:	08 
 840ccdf:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 840cce5:	89 04 24             	mov    %eax,(%esp)
 840cce8:	e8 2b 2a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cced:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840ccf0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840ccf4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840ccf8:	c7 44 24 04 b0 66 c4 	movl   $0x8c466b0,0x4(%esp)
 840ccff:	08 
 840cd00:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 840cd06:	89 04 24             	mov    %eax,(%esp)
 840cd09:	e8 7a 2a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cd0e:	e9 fe 07 00 00       	jmp    840d511 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xa9d>
 840cd13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840cd16:	0f b6 84 05 57 fd ff 	movzbl -0x2a9(%ebp,%eax,1),%eax
 840cd1d:	ff 
 840cd1e:	83 f0 01             	xor    $0x1,%eax
 840cd21:	84 c0                	test   %al,%al
 840cd23:	74 0d                	je     840cd32 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x2be>
 840cd25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840cd28:	c6 84 05 57 fd ff ff 	movb   $0x1,-0x2a9(%ebp,%eax,1)
 840cd2f:	01 
 840cd30:	eb 04                	jmp    840cd36 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x2c2>
 840cd32:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 840cd36:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840cd3a:	83 f0 01             	xor    $0x1,%eax
 840cd3d:	84 c0                	test   %al,%al
 840cd3f:	74 50                	je     840cd91 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x31d>
 840cd41:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cd44:	8b 58 04             	mov    0x4(%eax),%ebx
 840cd47:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cd4e:	00 
 840cd4f:	c7 44 24 08 2c 28 00 	movl   $0x282c,0x8(%esp)
 840cd56:	00 
 840cd57:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cd5e:	08 
 840cd5f:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 840cd65:	89 04 24             	mov    %eax,(%esp)
 840cd68:	e8 ab 29 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cd6d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cd71:	c7 44 24 04 f4 66 c4 	movl   $0x8c466f4,0x4(%esp)
 840cd78:	08 
 840cd79:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 840cd7f:	89 04 24             	mov    %eax,(%esp)
 840cd82:	e8 01 2a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cd87:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cd8c:	e9 bb 09 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840cd91:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840cd97:	83 c0 08             	add    $0x8,%eax
 840cd9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840cd9e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840cda5:	00 
 840cda6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cda9:	89 04 24             	mov    %eax,(%esp)
 840cdac:	e8 b9 08 04 00       	call   844d66a <_ZN5MySQL9get_ulongEiRm>
 840cdb1:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840cdb4:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840cdb8:	83 f0 01             	xor    $0x1,%eax
 840cdbb:	84 c0                	test   %al,%al
 840cdbd:	74 50                	je     840ce0f <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x39b>
 840cdbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cdc2:	8b 58 04             	mov    0x4(%eax),%ebx
 840cdc5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cdcc:	00 
 840cdcd:	c7 44 24 08 33 28 00 	movl   $0x2833,0x8(%esp)
 840cdd4:	00 
 840cdd5:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cddc:	08 
 840cddd:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 840cde3:	89 04 24             	mov    %eax,(%esp)
 840cde6:	e8 2d 29 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cdeb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cdef:	c7 44 24 04 38 67 c4 	movl   $0x8c46738,0x4(%esp)
 840cdf6:	08 
 840cdf7:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 840cdfd:	89 04 24             	mov    %eax,(%esp)
 840ce00:	e8 83 29 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ce05:	bb 00 00 00 00       	mov    $0x0,%ebx
 840ce0a:	e9 3d 09 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840ce0f:	c7 44 24 0c 0d 00 00 	movl   $0xd,0xc(%esp)
 840ce16:	00 
 840ce17:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840ce1d:	83 c0 34             	add    $0x34,%eax
 840ce20:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ce24:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840ce2b:	00 
 840ce2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ce2f:	89 04 24             	mov    %eax,(%esp)
 840ce32:	e8 b3 ff cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 840ce37:	83 f0 01             	xor    $0x1,%eax
 840ce3a:	84 c0                	test   %al,%al
 840ce3c:	74 50                	je     840ce8e <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x41a>
 840ce3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ce41:	8b 58 04             	mov    0x4(%eax),%ebx
 840ce44:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ce4b:	00 
 840ce4c:	c7 44 24 08 46 28 00 	movl   $0x2846,0x8(%esp)
 840ce53:	00 
 840ce54:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840ce5b:	08 
 840ce5c:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 840ce62:	89 04 24             	mov    %eax,(%esp)
 840ce65:	e8 ae 28 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840ce6a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840ce6e:	c7 44 24 04 7c 67 c4 	movl   $0x8c4677c,0x4(%esp)
 840ce75:	08 
 840ce76:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 840ce7c:	89 04 24             	mov    %eax,(%esp)
 840ce7f:	e8 04 29 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ce84:	bb 00 00 00 00       	mov    $0x0,%ebx
 840ce89:	e9 be 08 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840ce8e:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840ce94:	83 c0 44             	add    $0x44,%eax
 840ce97:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ce9b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840cea2:	00 
 840cea3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cea6:	89 04 24             	mov    %eax,(%esp)
 840cea9:	e8 7e 9a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ceae:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840ceb1:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840ceb5:	83 f0 01             	xor    $0x1,%eax
 840ceb8:	84 c0                	test   %al,%al
 840ceba:	74 50                	je     840cf0c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x498>
 840cebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cebf:	8b 58 04             	mov    0x4(%eax),%ebx
 840cec2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cec9:	00 
 840ceca:	c7 44 24 08 4e 28 00 	movl   $0x284e,0x8(%esp)
 840ced1:	00 
 840ced2:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840ced9:	08 
 840ceda:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 840cee0:	89 04 24             	mov    %eax,(%esp)
 840cee3:	e8 30 28 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cee8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840ceec:	c7 44 24 04 c0 67 c4 	movl   $0x8c467c0,0x4(%esp)
 840cef3:	08 
 840cef4:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 840cefa:	89 04 24             	mov    %eax,(%esp)
 840cefd:	e8 86 28 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cf02:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cf07:	e9 40 08 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840cf0c:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840cf12:	83 c0 4c             	add    $0x4c,%eax
 840cf15:	89 44 24 08          	mov    %eax,0x8(%esp)
 840cf19:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 840cf20:	00 
 840cf21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cf24:	89 04 24             	mov    %eax,(%esp)
 840cf27:	e8 00 9a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840cf2c:	88 45 e3             	mov    %al,-0x1d(%ebp)
 840cf2f:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 840cf33:	83 f0 01             	xor    $0x1,%eax
 840cf36:	84 c0                	test   %al,%al
 840cf38:	74 50                	je     840cf8a <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x516>
 840cf3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cf3d:	8b 58 04             	mov    0x4(%eax),%ebx
 840cf40:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cf47:	00 
 840cf48:	c7 44 24 08 55 28 00 	movl   $0x2855,0x8(%esp)
 840cf4f:	00 
 840cf50:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cf57:	08 
 840cf58:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 840cf5e:	89 04 24             	mov    %eax,(%esp)
 840cf61:	e8 b2 27 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cf66:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cf6a:	c7 44 24 04 04 68 c4 	movl   $0x8c46804,0x4(%esp)
 840cf71:	08 
 840cf72:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 840cf78:	89 04 24             	mov    %eax,(%esp)
 840cf7b:	e8 08 28 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cf80:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cf85:	e9 c2 07 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840cf8a:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840cf90:	83 c0 14             	add    $0x14,%eax
 840cf93:	89 44 24 08          	mov    %eax,0x8(%esp)
 840cf97:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 840cf9e:	00 
 840cf9f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840cfa2:	89 04 24             	mov    %eax,(%esp)
 840cfa5:	e8 e6 99 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840cfaa:	83 f0 01             	xor    $0x1,%eax
 840cfad:	84 c0                	test   %al,%al
 840cfaf:	74 50                	je     840d001 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x58d>
 840cfb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 840cfb4:	8b 58 04             	mov    0x4(%eax),%ebx
 840cfb7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840cfbe:	00 
 840cfbf:	c7 44 24 08 5b 28 00 	movl   $0x285b,0x8(%esp)
 840cfc6:	00 
 840cfc7:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840cfce:	08 
 840cfcf:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 840cfd5:	89 04 24             	mov    %eax,(%esp)
 840cfd8:	e8 3b 27 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840cfdd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840cfe1:	c7 44 24 04 48 68 c4 	movl   $0x8c46848,0x4(%esp)
 840cfe8:	08 
 840cfe9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 840cfef:	89 04 24             	mov    %eax,(%esp)
 840cff2:	e8 91 27 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840cff7:	bb 00 00 00 00       	mov    $0x0,%ebx
 840cffc:	e9 4b 07 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d001:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 840d007:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d00b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 840d012:	00 
 840d013:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d016:	89 04 24             	mov    %eax,(%esp)
 840d019:	e8 0e 99 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840d01e:	83 f0 01             	xor    $0x1,%eax
 840d021:	84 c0                	test   %al,%al
 840d023:	74 50                	je     840d075 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x601>
 840d025:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d028:	8b 58 04             	mov    0x4(%eax),%ebx
 840d02b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d032:	00 
 840d033:	c7 44 24 08 62 28 00 	movl   $0x2862,0x8(%esp)
 840d03a:	00 
 840d03b:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d042:	08 
 840d043:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 840d049:	89 04 24             	mov    %eax,(%esp)
 840d04c:	e8 c7 26 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d051:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d055:	c7 44 24 04 8c 68 c4 	movl   $0x8c4688c,0x4(%esp)
 840d05c:	08 
 840d05d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 840d063:	89 04 24             	mov    %eax,(%esp)
 840d066:	e8 1d 27 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d06b:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d070:	e9 d7 06 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d075:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 840d07b:	88 85 34 fe ff ff    	mov    %al,-0x1cc(%ebp)
 840d081:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840d087:	83 c0 30             	add    $0x30,%eax
 840d08a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d08e:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 840d095:	00 
 840d096:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d099:	89 04 24             	mov    %eax,(%esp)
 840d09c:	e8 8b 98 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840d0a1:	83 f0 01             	xor    $0x1,%eax
 840d0a4:	84 c0                	test   %al,%al
 840d0a6:	74 50                	je     840d0f8 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x684>
 840d0a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d0ab:	8b 58 04             	mov    0x4(%eax),%ebx
 840d0ae:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d0b5:	00 
 840d0b6:	c7 44 24 08 69 28 00 	movl   $0x2869,0x8(%esp)
 840d0bd:	00 
 840d0be:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d0c5:	08 
 840d0c6:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 840d0cc:	89 04 24             	mov    %eax,(%esp)
 840d0cf:	e8 44 26 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d0d4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d0d8:	c7 44 24 04 d0 68 c4 	movl   $0x8c468d0,0x4(%esp)
 840d0df:	08 
 840d0e0:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 840d0e6:	89 04 24             	mov    %eax,(%esp)
 840d0e9:	e8 9a 26 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d0ee:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d0f3:	e9 54 06 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d0f8:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 840d0fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d102:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 840d109:	00 
 840d10a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d10d:	89 04 24             	mov    %eax,(%esp)
 840d110:	e8 17 98 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840d115:	83 f0 01             	xor    $0x1,%eax
 840d118:	84 c0                	test   %al,%al
 840d11a:	74 50                	je     840d16c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x6f8>
 840d11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d11f:	8b 58 04             	mov    0x4(%eax),%ebx
 840d122:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d129:	00 
 840d12a:	c7 44 24 08 70 28 00 	movl   $0x2870,0x8(%esp)
 840d131:	00 
 840d132:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d139:	08 
 840d13a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 840d140:	89 04 24             	mov    %eax,(%esp)
 840d143:	e8 d0 25 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d148:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d14c:	c7 44 24 04 14 69 c4 	movl   $0x8c46914,0x4(%esp)
 840d153:	08 
 840d154:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 840d15a:	89 04 24             	mov    %eax,(%esp)
 840d15d:	e8 26 26 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d162:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d167:	e9 e0 05 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d16c:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 840d172:	88 85 36 fe ff ff    	mov    %al,-0x1ca(%ebp)
 840d178:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 840d17e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d182:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 840d189:	00 
 840d18a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d18d:	89 04 24             	mov    %eax,(%esp)
 840d190:	e8 97 97 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840d195:	83 f0 01             	xor    $0x1,%eax
 840d198:	84 c0                	test   %al,%al
 840d19a:	74 4a                	je     840d1e6 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x772>
 840d19c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d19f:	8b 58 04             	mov    0x4(%eax),%ebx
 840d1a2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d1a9:	00 
 840d1aa:	c7 44 24 08 78 28 00 	movl   $0x2878,0x8(%esp)
 840d1b1:	00 
 840d1b2:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d1b9:	08 
 840d1ba:	8d 45 88             	lea    -0x78(%ebp),%eax
 840d1bd:	89 04 24             	mov    %eax,(%esp)
 840d1c0:	e8 53 25 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d1c5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d1c9:	c7 44 24 04 58 69 c4 	movl   $0x8c46958,0x4(%esp)
 840d1d0:	08 
 840d1d1:	8d 45 88             	lea    -0x78(%ebp),%eax
 840d1d4:	89 04 24             	mov    %eax,(%esp)
 840d1d7:	e8 ac 25 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d1dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d1e1:	e9 66 05 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d1e6:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 840d1ec:	88 85 37 fe ff ff    	mov    %al,-0x1c9(%ebp)
 840d1f2:	c6 85 9f fe ff ff 00 	movb   $0x0,-0x161(%ebp)
 840d1f9:	8d 85 9f fe ff ff    	lea    -0x161(%ebp),%eax
 840d1ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d203:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 840d20a:	00 
 840d20b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d20e:	89 04 24             	mov    %eax,(%esp)
 840d211:	e8 a4 0c cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 840d216:	83 f0 01             	xor    $0x1,%eax
 840d219:	84 c0                	test   %al,%al
 840d21b:	74 4a                	je     840d267 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x7f3>
 840d21d:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d220:	8b 58 04             	mov    0x4(%eax),%ebx
 840d223:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d22a:	00 
 840d22b:	c7 44 24 08 80 28 00 	movl   $0x2880,0x8(%esp)
 840d232:	00 
 840d233:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d23a:	08 
 840d23b:	8d 45 98             	lea    -0x68(%ebp),%eax
 840d23e:	89 04 24             	mov    %eax,(%esp)
 840d241:	e8 d2 24 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d246:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d24a:	c7 44 24 04 9c 69 c4 	movl   $0x8c4699c,0x4(%esp)
 840d251:	08 
 840d252:	8d 45 98             	lea    -0x68(%ebp),%eax
 840d255:	89 04 24             	mov    %eax,(%esp)
 840d258:	e8 2b 25 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d25d:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d262:	e9 e5 04 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d267:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 840d26d:	83 c0 54             	add    $0x54,%eax
 840d270:	89 44 24 08          	mov    %eax,0x8(%esp)
 840d274:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 840d27b:	00 
 840d27c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840d27f:	89 04 24             	mov    %eax,(%esp)
 840d282:	e8 a5 96 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840d287:	83 f0 01             	xor    $0x1,%eax
 840d28a:	84 c0                	test   %al,%al
 840d28c:	74 4a                	je     840d2d8 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x864>
 840d28e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d291:	8b 58 04             	mov    0x4(%eax),%ebx
 840d294:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d29b:	00 
 840d29c:	c7 44 24 08 a6 28 00 	movl   $0x28a6,0x8(%esp)
 840d2a3:	00 
 840d2a4:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d2ab:	08 
 840d2ac:	8d 45 a8             	lea    -0x58(%ebp),%eax
 840d2af:	89 04 24             	mov    %eax,(%esp)
 840d2b2:	e8 61 24 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d2b7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d2bb:	c7 44 24 04 e0 69 c4 	movl   $0x8c469e0,0x4(%esp)
 840d2c2:	08 
 840d2c3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 840d2c6:	89 04 24             	mov    %eax,(%esp)
 840d2c9:	e8 ba 24 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d2ce:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d2d3:	e9 74 04 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d2d8:	8b 85 10 fe ff ff    	mov    -0x1f0(%ebp),%eax
 840d2de:	3d f1 00 00 00       	cmp    $0xf1,%eax
 840d2e3:	7e 54                	jle    840d339 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x8c5>
 840d2e5:	8b b5 10 fe ff ff    	mov    -0x1f0(%ebp),%esi
 840d2eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d2ee:	8b 58 04             	mov    0x4(%eax),%ebx
 840d2f1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d2f8:	00 
 840d2f9:	c7 44 24 08 ad 28 00 	movl   $0x28ad,0x8(%esp)
 840d300:	00 
 840d301:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d308:	08 
 840d309:	8d 45 b8             	lea    -0x48(%ebp),%eax
 840d30c:	89 04 24             	mov    %eax,(%esp)
 840d30f:	e8 04 24 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d314:	89 74 24 0c          	mov    %esi,0xc(%esp)
 840d318:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d31c:	c7 44 24 04 24 6a c4 	movl   $0x8c46a24,0x4(%esp)
 840d323:	08 
 840d324:	8d 45 b8             	lea    -0x48(%ebp),%eax
 840d327:	89 04 24             	mov    %eax,(%esp)
 840d32a:	e8 59 24 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d32f:	bb 00 00 00 00       	mov    $0x0,%ebx
 840d334:	e9 13 04 00 00       	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d339:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 840d33d:	0f 84 99 00 00 00    	je     840d3dc <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x968>
 840d343:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 840d349:	89 04 24             	mov    %eax,(%esp)
 840d34c:	e8 03 e5 cb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 840d351:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 840d358:	00 
 840d359:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840d360:	00 
 840d361:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 840d367:	89 04 24             	mov    %eax,(%esp)
 840d36a:	e8 51 09 c7 ff       	call   807dcc0 <memset@plt>
 840d36f:	c6 85 5c fe ff ff 05 	movb   $0x5,-0x1a4(%ebp)
 840d376:	0f b7 85 f8 fd ff ff 	movzwl -0x208(%ebp),%eax
 840d37d:	66 89 85 66 fe ff ff 	mov    %ax,-0x19a(%ebp)
 840d384:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 840d38a:	89 85 5d fe ff ff    	mov    %eax,-0x1a3(%ebp)
 840d390:	8b 85 14 fe ff ff    	mov    -0x1ec(%ebp),%eax
 840d396:	89 85 62 fe ff ff    	mov    %eax,-0x19e(%ebp)
 840d39c:	0f b6 85 9f fe ff ff 	movzbl -0x161(%ebp),%eax
 840d3a3:	0f b6 c0             	movzbl %al,%eax
 840d3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d3aa:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 840d3b0:	83 c0 11             	add    $0x11,%eax
 840d3b3:	89 04 24             	mov    %eax,(%esp)
 840d3b6:	e8 bd 00 04 00       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 840d3bb:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 840d3bf:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 840d3c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d3c9:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 840d3cf:	89 04 24             	mov    %eax,(%esp)
 840d3d2:	e8 8b 9e e2 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 840d3d7:	e9 9e 00 00 00       	jmp    840d47a <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xa06>
 840d3dc:	8b 85 10 fe ff ff    	mov    -0x1f0(%ebp),%eax
 840d3e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 840d3e5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840d3e8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 840d3eb:	05 d0 ee 00 00       	add    $0xeed0,%eax
 840d3f0:	c6 40 02 05          	movb   $0x5,0x2(%eax)
 840d3f4:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 840d3fa:	0f b7 85 f8 fd ff ff 	movzwl -0x208(%ebp),%eax
 840d401:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d404:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840d407:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d40a:	81 c2 d0 ee 00 00    	add    $0xeed0,%edx
 840d410:	66 89 42 0c          	mov    %ax,0xc(%edx)
 840d414:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 840d41a:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 840d420:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d423:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840d426:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d429:	81 c2 d0 ee 00 00    	add    $0xeed0,%edx
 840d42f:	89 42 03             	mov    %eax,0x3(%edx)
 840d432:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 840d438:	8b 85 14 fe ff ff    	mov    -0x1ec(%ebp),%eax
 840d43e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d441:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840d444:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d447:	81 c2 d8 ee 00 00    	add    $0xeed8,%edx
 840d44d:	89 02                	mov    %eax,(%edx)
 840d44f:	0f b6 85 9f fe ff ff 	movzbl -0x161(%ebp),%eax
 840d456:	0f b6 c0             	movzbl %al,%eax
 840d459:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 840d45f:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840d462:	81 c2 e0 ee 00 00    	add    $0xeee0,%edx
 840d468:	03 55 0c             	add    0xc(%ebp),%edx
 840d46b:	83 c2 02             	add    $0x2,%edx
 840d46e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d472:	89 14 24             	mov    %edx,(%esp)
 840d475:	e8 fe ff 03 00       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 840d47a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840d47d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d480:	c1 e0 03             	shl    $0x3,%eax
 840d483:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 840d48a:	29 c2                	sub    %eax,%edx
 840d48c:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 840d48f:	05 80 28 01 00       	add    $0x12880,%eax
 840d494:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 840d49a:	89 10                	mov    %edx,(%eax)
 840d49c:	8b 95 14 fe ff ff    	mov    -0x1ec(%ebp),%edx
 840d4a2:	89 50 04             	mov    %edx,0x4(%eax)
 840d4a5:	8b 95 18 fe ff ff    	mov    -0x1e8(%ebp),%edx
 840d4ab:	89 50 08             	mov    %edx,0x8(%eax)
 840d4ae:	8b 95 1c fe ff ff    	mov    -0x1e4(%ebp),%edx
 840d4b4:	89 50 0c             	mov    %edx,0xc(%eax)
 840d4b7:	8b 95 20 fe ff ff    	mov    -0x1e0(%ebp),%edx
 840d4bd:	89 50 10             	mov    %edx,0x10(%eax)
 840d4c0:	8b 95 24 fe ff ff    	mov    -0x1dc(%ebp),%edx
 840d4c6:	89 50 14             	mov    %edx,0x14(%eax)
 840d4c9:	8b 95 28 fe ff ff    	mov    -0x1d8(%ebp),%edx
 840d4cf:	89 50 18             	mov    %edx,0x18(%eax)
 840d4d2:	8b 95 2c fe ff ff    	mov    -0x1d4(%ebp),%edx
 840d4d8:	89 50 1c             	mov    %edx,0x1c(%eax)
 840d4db:	8b 95 30 fe ff ff    	mov    -0x1d0(%ebp),%edx
 840d4e1:	89 50 20             	mov    %edx,0x20(%eax)
 840d4e4:	8b 95 34 fe ff ff    	mov    -0x1cc(%ebp),%edx
 840d4ea:	89 50 24             	mov    %edx,0x24(%eax)
 840d4ed:	8b 95 38 fe ff ff    	mov    -0x1c8(%ebp),%edx
 840d4f3:	89 50 28             	mov    %edx,0x28(%eax)
 840d4f6:	8b 95 3c fe ff ff    	mov    -0x1c4(%ebp),%edx
 840d4fc:	89 50 2c             	mov    %edx,0x2c(%eax)
 840d4ff:	8b 95 40 fe ff ff    	mov    -0x1c0(%ebp),%edx
 840d505:	89 50 30             	mov    %edx,0x30(%eax)
 840d508:	8b 95 44 fe ff ff    	mov    -0x1bc(%ebp),%edx
 840d50e:	89 50 34             	mov    %edx,0x34(%eax)
 840d511:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 840d515:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d518:	8b 80 7c 28 01 00    	mov    0x1287c(%eax),%eax
 840d51e:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 840d521:	0f 9f c0             	setg   %al
 840d524:	84 c0                	test   %al,%al
 840d526:	0f 85 c7 f6 ff ff    	jne    840cbf3 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0x17f>
 840d52c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 840d533:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d539:	8d 95 ac fe ff ff    	lea    -0x154(%ebp),%edx
 840d53f:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d543:	89 04 24             	mov    %eax,(%esp)
 840d546:	e8 b9 d7 d3 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 840d54b:	83 ec 04             	sub    $0x4,%esp
 840d54e:	e9 9f 01 00 00       	jmp    840d6f2 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xc7e>
 840d553:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d556:	0f b6 84 05 57 fd ff 	movzbl -0x2a9(%ebp,%eax,1),%eax
 840d55d:	ff 
 840d55e:	83 f0 01             	xor    $0x1,%eax
 840d561:	84 c0                	test   %al,%al
 840d563:	74 1d                	je     840d582 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb0e>
 840d565:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d568:	c6 84 05 57 fd ff ff 	movb   $0x1,-0x2a9(%ebp,%eax,1)
 840d56f:	01 
 840d570:	81 7d f0 8c 00 00 00 	cmpl   $0x8c,-0x10(%ebp)
 840d577:	75 1d                	jne    840d596 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb22>
 840d579:	c7 45 f0 ee 00 00 00 	movl   $0xee,-0x10(%ebp)
 840d580:	eb 15                	jmp    840d597 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb23>
 840d582:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840d586:	81 7d f0 8c 00 00 00 	cmpl   $0x8c,-0x10(%ebp)
 840d58d:	0f 9e c0             	setle  %al
 840d590:	84 c0                	test   %al,%al
 840d592:	75 bf                	jne    840d553 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xadf>
 840d594:	eb 01                	jmp    840d597 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb23>
 840d596:	90                   	nop
 840d597:	81 7d f0 ee 00 00 00 	cmpl   $0xee,-0x10(%ebp)
 840d59e:	74 4e                	je     840d5ee <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb7a>
 840d5a0:	81 7d f0 8b 00 00 00 	cmpl   $0x8b,-0x10(%ebp)
 840d5a7:	7e 45                	jle    840d5ee <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb7a>
 840d5a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840d5ac:	8b 58 04             	mov    0x4(%eax),%ebx
 840d5af:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840d5b6:	00 
 840d5b7:	c7 44 24 08 e9 28 00 	movl   $0x28e9,0x8(%esp)
 840d5be:	00 
 840d5bf:	c7 44 24 04 80 d1 c5 	movl   $0x8c5d180,0x4(%esp)
 840d5c6:	08 
 840d5c7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840d5ca:	89 04 24             	mov    %eax,(%esp)
 840d5cd:	e8 46 21 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840d5d2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840d5d6:	c7 44 24 04 78 6a c4 	movl   $0x8c46a78,0x4(%esp)
 840d5dd:	08 
 840d5de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840d5e1:	89 04 24             	mov    %eax,(%esp)
 840d5e4:	e8 9f 21 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840d5e9:	e9 39 01 00 00       	jmp    840d727 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcb3>
 840d5ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d5f1:	8b 55 0c             	mov    0xc(%ebp),%edx
 840d5f4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840d5f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 840d5fa:	05 d0 ee 00 00       	add    $0xeed0,%eax
 840d5ff:	c6 40 02 05          	movb   $0x5,0x2(%eax)
 840d603:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 840d606:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d60c:	89 04 24             	mov    %eax,(%esp)
 840d60f:	e8 14 d7 d3 ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 840d614:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 840d618:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d61b:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 840d61e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d621:	81 c2 d0 ee 00 00    	add    $0xeed0,%edx
 840d627:	66 89 42 0c          	mov    %ax,0xc(%edx)
 840d62b:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 840d62e:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d634:	89 04 24             	mov    %eax,(%esp)
 840d637:	e8 ec d6 d3 ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 840d63c:	8b 40 02             	mov    0x2(%eax),%eax
 840d63f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d642:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 840d645:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d648:	81 c2 d0 ee 00 00    	add    $0xeed0,%edx
 840d64e:	89 42 03             	mov    %eax,0x3(%edx)
 840d651:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 840d654:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d65a:	89 04 24             	mov    %eax,(%esp)
 840d65d:	e8 c6 d6 d3 ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 840d662:	8b 40 07             	mov    0x7(%eax),%eax
 840d665:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 840d668:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 840d66b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 840d66e:	81 c2 d8 ee 00 00    	add    $0xeed8,%edx
 840d674:	89 02                	mov    %eax,(%edx)
 840d676:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d67c:	89 04 24             	mov    %eax,(%esp)
 840d67f:	e8 a4 d6 d3 ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 840d684:	83 c0 11             	add    $0x11,%eax
 840d687:	89 04 24             	mov    %eax,(%esp)
 840d68a:	e8 19 df e7 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 840d68f:	0f b6 c0             	movzbl %al,%eax
 840d692:	8b 55 f0             	mov    -0x10(%ebp),%edx
 840d695:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840d698:	81 c2 e0 ee 00 00    	add    $0xeee0,%edx
 840d69e:	03 55 0c             	add    0xc(%ebp),%edx
 840d6a1:	83 c2 02             	add    $0x2,%edx
 840d6a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d6a8:	89 14 24             	mov    %edx,(%esp)
 840d6ab:	e8 c8 fd 03 00       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 840d6b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840d6b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 840d6b6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840d6b9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 840d6bc:	05 d8 ee 00 00       	add    $0xeed8,%eax
 840d6c1:	8b 00                	mov    (%eax),%eax
 840d6c3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 840d6c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d6ca:	89 04 24             	mov    %eax,(%esp)
 840d6cd:	e8 20 28 01 00       	call   841fef2 <_ZN19DB_SwapCreatureItem11makeRequestEii>
 840d6d2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840d6d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840d6dc:	00 
 840d6dd:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 840d6e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d6e7:	89 04 24             	mov    %eax,(%esp)
 840d6ea:	e8 57 31 04 00       	call   8450846 <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEi>
 840d6ef:	83 ec 04             	sub    $0x4,%esp
 840d6f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840d6f5:	8d 95 ac fe ff ff    	lea    -0x154(%ebp),%edx
 840d6fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d6ff:	89 04 24             	mov    %eax,(%esp)
 840d702:	e8 e3 51 d4 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 840d707:	83 ec 04             	sub    $0x4,%esp
 840d70a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840d70d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d711:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 840d717:	89 04 24             	mov    %eax,(%esp)
 840d71a:	e8 f1 51 d4 ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 840d71f:	84 c0                	test   %al,%al
 840d721:	0f 85 5f fe ff ff    	jne    840d586 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xb12>
 840d727:	bb 01 00 00 00       	mov    $0x1,%ebx
 840d72c:	eb 1e                	jmp    840d74c <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY+0xcd8>
 840d72e:	89 d3                	mov    %edx,%ebx
 840d730:	89 c6                	mov    %eax,%esi
 840d732:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 840d738:	89 04 24             	mov    %eax,(%esp)
 840d73b:	e8 66 d5 d3 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 840d740:	89 f0                	mov    %esi,%eax
 840d742:	89 da                	mov    %ebx,%edx
 840d744:	89 04 24             	mov    %eax,(%esp)
 840d747:	e8 04 60 6d 00       	call   8ae3750 <_Unwind_Resume>
 840d74c:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 840d752:	89 04 24             	mov    %eax,(%esp)
 840d755:	e8 4c d5 d3 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 840d75a:	89 d8                	mov    %ebx,%eax
 840d75c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 840d75f:	83 c4 00             	add    $0x0,%esp
 840d762:	5b                   	pop    %ebx
 840d763:	5e                   	pop    %esi
 840d764:	5d                   	pop    %ebp
 840d765:	c3                   	ret

```

```c
// DB_LoadInventory::GetUserCreature @ 0x840ca74

/* DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserCreature(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char local_2ad [141];
  undefined1 local_220 [8];
  ulong local_218 [3];
  ushort local_20c [12];
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  Inven_Item local_1a9;
  undefined1 local_1a8;
  ulong local_1a7;
  int local_1a2;
  ushort local_19e;
  stAmplifyOption_t asStack_198 [44];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_16c [7];
  uchar local_165;
  int local_164;
  int local_160;
  int local_15c;
  vector<Inven_Item,std::allocator<Inven_Item>> local_158 [12];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  cMyTrace local_38 [16];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_28 [7];
  char local_21;
  MySQL *local_20;
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_20,
                   "seLect slot,it_id,name,stomach,exp,endurance,creature_type,ui_id,no_charge,stat,item_lock_key,unix_timestamp(expire_date) from creature_items where charac_no=%u and stat = 0 and expire_date>now()"
                   ,*(undefined4 *)(param_1 + 4));
  local_21 = MySQL::exec(local_20,true);
  if (local_21 == '\x01') {
    uVar8 = MySQL::get_n_rows(local_20);
    *(undefined4 *)(param_1 + 0x1287c) = uVar8;
    local_1c = 0;
    if (*(int *)(param_1 + 0x1287c) < 0x8e) {
      memset(local_2ad,0,0x8d);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_158);
      local_15 = '\0';
      for (local_1c = 0; local_1c < *(int *)(param_1 + 0x1287c); local_1c = local_1c + 1) {
                    /* try { // try from 0840cbf9 to 0840d71e has its CatchHandler @ 0840d72e */
        local_21 = MySQL::fetch(local_20);
        if (local_21 != '\x01') {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_12c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)"
                             ,0x280e,5);
          cMyTrace::operator()
                    (local_12c,"DB_LoadInventory::GetUserCreature, fetch() ERROR charac_no=%u,%d",
                     uVar8,local_1c);
          break;
        }
        memset(local_220,0,0x74);
        local_21 = MySQL::get_int(local_20,0,&local_1f4);
        local_10 = local_1f4;
        if (local_1f4 == 0xee) {
          local_10 = 0x8c;
        }
        if (local_10 < 0x8d) {
          if (local_2ad[local_10] == '\x01') {
            local_15 = '\x01';
          }
          else {
            local_2ad[local_10] = '\x01';
          }
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_10c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x282c,
                               5);
            cMyTrace::operator()
                      (local_10c,"DB_LoadInventory::GetUserCreature, get_int(0) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_ulong(local_20,1,local_218);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_fc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2833,
                               5);
            cMyTrace::operator()
                      (local_fc,
                       "DB_LoadInventory::GetUserCreature, get_ushort(1) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_str(local_20,2,(char *)&local_1ec,0xd);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ec,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2846,
                               5);
            cMyTrace::operator()
                      (local_ec,"DB_LoadInventory::GetUserCreature, get_int(2) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_int(local_20,3,&local_1dc);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_dc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x284e,
                               5);
            cMyTrace::operator()
                      (local_dc,"DB_LoadInventory::GetUserCreature, get_int(3) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_int(local_20,4,&local_1d4);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_cc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2855,
                               5);
            cMyTrace::operator()
                      (local_cc,"DB_LoadInventory::GetUserCreature, get_int(4) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_ushort(local_20,5,local_20c);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_bc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x285b,
                               5);
            cMyTrace::operator()
                      (local_bc,
                       "DB_LoadInventory::GetUserCreature, get_ushort(5) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,6,&local_15c);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ac,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2862,
                               5);
            cMyTrace::operator()
                      (local_ac,"DB_LoadInventory::GetUserCreature, get_int(6) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0 = CONCAT31(local_1d0._1_3_,(char)local_15c);
          cVar2 = MySQL::get_int(local_20,7,&local_1f0);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_9c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2869,
                               5);
            cMyTrace::operator()
                      (local_9c,"DB_LoadInventory::GetUserCreature, get_int(7) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,8,&local_160);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_8c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2870,
                               5);
            cMyTrace::operator()
                      (local_8c,"DB_LoadInventory::GetUserCreature, get_int(8) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0._0_3_ = CONCAT12((char)local_160,(undefined2)local_1d0);
          cVar2 = MySQL::get_int(local_20,9,&local_164);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_7c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2878,
                               5);
            cMyTrace::operator()
                      (local_7c,"DB_LoadInventory::GetUserCreature, get_int(9) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0 = CONCAT13((char)local_164,(undefined3)local_1d0);
          local_165 = '\0';
          cVar2 = MySQL::get_ubyte(local_20,10,&local_165);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_6c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2880,
                               5);
            cMyTrace::operator()
                      (local_6c,
                       "DB_LoadInventory::GetUserCreature, get_ubyte(10) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,0xb,&local_1cc);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_5c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x28a6,
                               5);
            cMyTrace::operator()
                      (local_5c,"DB_LoadInventory::GetUserCreature, get_int(12) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          if (0xf1 < local_1f4) {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_4c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x28ad,
                               5);
            cMyTrace::operator()
                      (local_4c,
                       "DB_LoadInventory::GetUserCreature, slot_no overflow ERROR charac_no=%u, slot_no=%d"
                       ,uVar8,local_1f4);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          if (local_15 == '\0') {
            param_1[local_1f4 * 0x3d + 0xeed2] = (SIG_LOAD_INVENTORY)0x5;
            *(ushort *)(param_1 + local_1f4 * 0x3d + 0xeedc) = local_20c[0];
            *(ulong *)(param_1 + local_1f4 * 0x3d + 0xeed3) = local_218[0];
            *(int *)(param_1 + local_1f4 * 0x3d + 0xeed8) = local_1f0;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_1 + local_1f4 * 0x3d + 0xeee2),local_165);
          }
          else {
            Inven_Item::Inven_Item(&local_1a9);
            memset(&local_1a9,0,0x3d);
            local_1a8 = 5;
            local_19e = local_20c[0];
            local_1a7 = local_218[0];
            local_1a2 = local_1f0;
            stAmplifyOption_t::SetLock(asStack_198,local_165);
            local_15 = '\0';
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_158,&local_1a9);
          }
          *(int *)(param_1 + local_1c * 0x38 + 0x12880) = local_1f4;
          *(int *)(param_1 + local_1c * 0x38 + 0x12884) = local_1f0;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12888) = local_1ec;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x1288c) = local_1e8;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12890) = local_1e4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12894) = local_1e0;
          *(int *)(param_1 + local_1c * 0x38 + 0x12898) = local_1dc;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x1289c) = local_1d8;
          *(int *)(param_1 + local_1c * 0x38 + 0x128a0) = local_1d4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128a4) = local_1d0;
          *(int *)(param_1 + local_1c * 0x38 + 0x128a8) = local_1cc;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128ac) = local_1c8;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128b0) = local_1c4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128b4) = local_1c0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_11c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)"
                             ,0x281d,5);
          cMyTrace::operator()
                    (local_11c,"DB_LoadInventory::GetUserCreature, charac_no=%u, slot=%d overflow",
                     uVar8,local_10);
        }
      }
      local_14 = 0;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      while( true ) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        bVar4 = __gnu_cxx::operator!=(local_16c,local_3c);
        if (!bVar4) break;
        for (; local_14 < 0x8d; local_14 = local_14 + 1) {
          if (local_2ad[local_14] != '\x01') {
            local_2ad[local_14] = '\x01';
            if (local_14 == 0x8c) {
              local_14 = 0xee;
            }
            break;
          }
        }
        iVar7 = local_14;
        if ((local_14 != 0xee) && (0x8b < local_14)) {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_38,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                             0x28e9,5);
          cMyTrace::operator()
                    (local_38,"DB_LoadInventory::GetUserCreature, charac_no=%u, slot overflow",uVar8
                    );
          break;
        }
        param_1[local_14 * 0x3d + 0xeed2] = (SIG_LOAD_INVENTORY)0x5;
        iVar5 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        iVar6 = local_14;
        *(undefined2 *)(param_1 + iVar7 * 0x3d + 0xeedc) = *(undefined2 *)(iVar5 + 0xb);
        iVar5 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        iVar7 = local_14;
        *(undefined4 *)(param_1 + iVar6 * 0x3d + 0xeed3) = *(undefined4 *)(iVar5 + 2);
        iVar6 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        *(undefined4 *)(param_1 + iVar7 * 0x3d + 0xeed8) = *(undefined4 *)(iVar6 + 7);
        iVar7 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        uVar3 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(iVar7 + 0x11));
        stAmplifyOption_t::SetLock((stAmplifyOption_t *)(param_1 + local_14 * 0x3d + 0xeee2),uVar3);
        DB_SwapCreatureItem::makeRequest(*(int *)(param_1 + local_14 * 0x3d + 0xeed8),local_14);
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++(local_28,(int)local_16c);
      }
      uVar8 = 1;
LAB_0840d74c:
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_158);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x1287c);
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_13c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                         0x27fb,5);
      cMyTrace::operator()
                (local_13c,
                 "DB_LoadInventory::GetUserCreature, creature_item_count overflow ERROR charac_no=%u, item_count=%d"
                 ,uVar1,uVar8);
      uVar8 = 0;
    }
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_14c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                       0x27f0,5);
    cMyTrace::operator()
              (local_14c,"DB_LoadInventory::GetUserCreature, exec() ERROR charac_no=%u",uVar8);
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## GetUserInven

```asm
// === 0840b0d8 DB_LoadInventory::GetUserInven  [0x0840b0d8-0x840bd39] ===
 840b0d8:	55                   	push   %ebp
 840b0d9:	89 e5                	mov    %esp,%ebp
 840b0db:	57                   	push   %edi
 840b0dc:	56                   	push   %esi
 840b0dd:	53                   	push   %ebx
 840b0de:	81 ec 5c 69 00 00    	sub    $0x695c,%esp
 840b0e4:	8d 95 36 fb ff ff    	lea    -0x4ca(%ebp),%edx
 840b0ea:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 840b0ef:	b8 00 00 00 00       	mov    $0x0,%eax
 840b0f4:	89 d1                	mov    %edx,%ecx
 840b0f6:	83 e1 02             	and    $0x2,%ecx
 840b0f9:	85 c9                	test   %ecx,%ecx
 840b0fb:	74 09                	je     840b106 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x2e>
 840b0fd:	66 89 02             	mov    %ax,(%edx)
 840b100:	83 c2 02             	add    $0x2,%edx
 840b103:	83 eb 02             	sub    $0x2,%ebx
 840b106:	89 d9                	mov    %ebx,%ecx
 840b108:	c1 e9 02             	shr    $0x2,%ecx
 840b10b:	89 d7                	mov    %edx,%edi
 840b10d:	f3 ab                	rep stos %eax,%es:(%edi)
 840b10f:	89 fa                	mov    %edi,%edx
 840b111:	89 d9                	mov    %ebx,%ecx
 840b113:	83 e1 02             	and    $0x2,%ecx
 840b116:	85 c9                	test   %ecx,%ecx
 840b118:	74 06                	je     840b120 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x48>
 840b11a:	66 89 02             	mov    %ax,(%edx)
 840b11d:	83 c2 02             	add    $0x2,%edx
 840b120:	89 d9                	mov    %ebx,%ecx
 840b122:	83 e1 01             	and    $0x1,%ecx
 840b125:	85 c9                	test   %ecx,%ecx
 840b127:	74 05                	je     840b12e <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x56>
 840b129:	88 02                	mov    %al,(%edx)
 840b12b:	83 c2 01             	add    $0x1,%edx
 840b12e:	8d 85 c2 96 ff ff    	lea    -0x693e(%ebp),%eax
 840b134:	ba 3e 47 00 00       	mov    $0x473e,%edx
 840b139:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b13d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840b144:	00 
 840b145:	89 04 24             	mov    %eax,(%esp)
 840b148:	e8 73 2b c7 ff       	call   807dcc0 <memset@plt>
 840b14d:	8d 95 00 de ff ff    	lea    -0x2200(%ebp),%edx
 840b153:	b8 00 00 00 00       	mov    $0x0,%eax
 840b158:	b9 4d 07 00 00       	mov    $0x74d,%ecx
 840b15d:	89 d7                	mov    %edx,%edi
 840b15f:	f3 ab                	rep stos %eax,%es:(%edi)
 840b161:	89 fa                	mov    %edi,%edx
 840b163:	66 89 02             	mov    %ax,(%edx)
 840b166:	83 c2 02             	add    $0x2,%edx
 840b169:	c7 85 b8 fe ff ff 36 	movl   $0x1d36,-0x148(%ebp)
 840b170:	1d 00 00 
 840b173:	c7 85 b4 fe ff ff 7a 	movl   $0x37a,-0x14c(%ebp)
 840b17a:	03 00 00 
 840b17d:	c7 85 b0 fe ff ff 3e 	movl   $0x473e,-0x150(%ebp)
 840b184:	47 00 00 
 840b187:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 840b18d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 840b190:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 840b196:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 840b199:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 840b19f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 840b1a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840b1a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b1ae:	00 
 840b1af:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840b1b6:	00 
 840b1b7:	89 04 24             	mov    %eax,(%esp)
 840b1ba:	e8 7f a0 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840b1bf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 840b1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b1c5:	8b 40 04             	mov    0x4(%eax),%eax
 840b1c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b1cc:	c7 44 24 04 bc 5a c4 	movl   $0x8c45abc,0x4(%esp)
 840b1d3:	08 
 840b1d4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b1d7:	89 04 24             	mov    %eax,(%esp)
 840b1da:	e8 e1 8f fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840b1df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840b1e6:	00 
 840b1e7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b1ea:	89 04 24             	mov    %eax,(%esp)
 840b1ed:	e8 34 91 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840b1f2:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b1f5:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b1f9:	83 f0 01             	xor    $0x1,%eax
 840b1fc:	84 c0                	test   %al,%al
 840b1fe:	74 50                	je     840b250 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x178>
 840b200:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b203:	8b 58 04             	mov    0x4(%eax),%ebx
 840b206:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b20d:	00 
 840b20e:	c7 44 24 08 cb 24 00 	movl   $0x24cb,0x8(%esp)
 840b215:	00 
 840b216:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b21d:	08 
 840b21e:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 840b224:	89 04 24             	mov    %eax,(%esp)
 840b227:	e8 ec 44 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b22c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b230:	c7 44 24 04 88 5d c3 	movl   $0x8c35d88,0x4(%esp)
 840b237:	08 
 840b238:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 840b23e:	89 04 24             	mov    %eax,(%esp)
 840b241:	e8 42 45 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b246:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b24b:	e9 dd 0a 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b250:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b253:	89 04 24             	mov    %eax,(%esp)
 840b256:	e8 61 92 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840b25b:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b25e:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b262:	83 f0 01             	xor    $0x1,%eax
 840b265:	84 c0                	test   %al,%al
 840b267:	74 50                	je     840b2b9 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x1e1>
 840b269:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b26c:	8b 58 04             	mov    0x4(%eax),%ebx
 840b26f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b276:	00 
 840b277:	c7 44 24 08 d2 24 00 	movl   $0x24d2,0x8(%esp)
 840b27e:	00 
 840b27f:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b286:	08 
 840b287:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 840b28d:	89 04 24             	mov    %eax,(%esp)
 840b290:	e8 83 44 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b295:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b299:	c7 44 24 04 44 5b c4 	movl   $0x8c45b44,0x4(%esp)
 840b2a0:	08 
 840b2a1:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 840b2a7:	89 04 24             	mov    %eax,(%esp)
 840b2aa:	e8 d9 44 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b2af:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b2b4:	e9 74 0a 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b2b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b2bc:	05 34 40 00 00       	add    $0x4034,%eax
 840b2c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b2c5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840b2cc:	00 
 840b2cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b2d0:	89 04 24             	mov    %eax,(%esp)
 840b2d3:	e8 1a 70 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840b2d8:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b2db:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b2df:	83 f0 01             	xor    $0x1,%eax
 840b2e2:	84 c0                	test   %al,%al
 840b2e4:	74 50                	je     840b336 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x25e>
 840b2e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b2e9:	8b 58 04             	mov    0x4(%eax),%ebx
 840b2ec:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b2f3:	00 
 840b2f4:	c7 44 24 08 d9 24 00 	movl   $0x24d9,0x8(%esp)
 840b2fb:	00 
 840b2fc:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b303:	08 
 840b304:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 840b30a:	89 04 24             	mov    %eax,(%esp)
 840b30d:	e8 06 44 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b312:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b316:	c7 44 24 04 80 5b c4 	movl   $0x8c45b80,0x4(%esp)
 840b31d:	08 
 840b31e:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 840b324:	89 04 24             	mov    %eax,(%esp)
 840b327:	e8 5c 44 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b32c:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b331:	e9 f7 09 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b336:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b339:	05 38 40 00 00       	add    $0x4038,%eax
 840b33e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b342:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840b349:	00 
 840b34a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b34d:	89 04 24             	mov    %eax,(%esp)
 840b350:	e8 9d 6f cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840b355:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b358:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b35c:	83 f0 01             	xor    $0x1,%eax
 840b35f:	84 c0                	test   %al,%al
 840b361:	74 50                	je     840b3b3 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x2db>
 840b363:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b366:	8b 58 04             	mov    0x4(%eax),%ebx
 840b369:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b370:	00 
 840b371:	c7 44 24 08 e0 24 00 	movl   $0x24e0,0x8(%esp)
 840b378:	00 
 840b379:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b380:	08 
 840b381:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 840b387:	89 04 24             	mov    %eax,(%esp)
 840b38a:	e8 89 43 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b38f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b393:	c7 44 24 04 d0 5b c4 	movl   $0x8c45bd0,0x4(%esp)
 840b39a:	08 
 840b39b:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 840b3a1:	89 04 24             	mov    %eax,(%esp)
 840b3a4:	e8 df 43 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b3a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b3ae:	e9 7a 09 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b3b3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840b3ba:	00 
 840b3bb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b3be:	89 04 24             	mov    %eax,(%esp)
 840b3c1:	e8 18 a0 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840b3c6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 840b3c9:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 840b3cf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840b3d3:	8d 85 c2 96 ff ff    	lea    -0x693e(%ebp),%eax
 840b3d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b3dd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840b3e4:	00 
 840b3e5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b3e8:	89 04 24             	mov    %eax,(%esp)
 840b3eb:	e8 2a 9f d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840b3f0:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b3f3:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b3f7:	83 f0 01             	xor    $0x1,%eax
 840b3fa:	84 c0                	test   %al,%al
 840b3fc:	74 50                	je     840b44e <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x376>
 840b3fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b401:	8b 58 04             	mov    0x4(%eax),%ebx
 840b404:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b40b:	00 
 840b40c:	c7 44 24 08 e8 24 00 	movl   $0x24e8,0x8(%esp)
 840b413:	00 
 840b414:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b41b:	08 
 840b41c:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 840b422:	89 04 24             	mov    %eax,(%esp)
 840b425:	e8 ee 42 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b42a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b42e:	c7 44 24 04 20 5c c4 	movl   $0x8c45c20,0x4(%esp)
 840b435:	08 
 840b436:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 840b43c:	89 04 24             	mov    %eax,(%esp)
 840b43f:	e8 44 43 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b444:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b449:	e9 df 08 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b44e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840b455:	00 
 840b456:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b459:	89 04 24             	mov    %eax,(%esp)
 840b45c:	e8 7d 9f d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840b461:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 840b464:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 840b46a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840b46e:	8d 85 36 fb ff ff    	lea    -0x4ca(%ebp),%eax
 840b474:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b478:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840b47f:	00 
 840b480:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b483:	89 04 24             	mov    %eax,(%esp)
 840b486:	e8 8f 9e d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840b48b:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b48e:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b492:	83 f0 01             	xor    $0x1,%eax
 840b495:	84 c0                	test   %al,%al
 840b497:	74 50                	je     840b4e9 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x411>
 840b499:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b49c:	8b 58 04             	mov    0x4(%eax),%ebx
 840b49f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b4a6:	00 
 840b4a7:	c7 44 24 08 f0 24 00 	movl   $0x24f0,0x8(%esp)
 840b4ae:	00 
 840b4af:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b4b6:	08 
 840b4b7:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 840b4bd:	89 04 24             	mov    %eax,(%esp)
 840b4c0:	e8 53 42 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b4c5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b4c9:	c7 44 24 04 64 5c c4 	movl   $0x8c45c64,0x4(%esp)
 840b4d0:	08 
 840b4d1:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 840b4d7:	89 04 24             	mov    %eax,(%esp)
 840b4da:	e8 a9 42 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b4df:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b4e4:	e9 44 08 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b4e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b4ec:	05 3c 40 00 00       	add    $0x403c,%eax
 840b4f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b4f5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 840b4fc:	00 
 840b4fd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b500:	89 04 24             	mov    %eax,(%esp)
 840b503:	e8 ea 6d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840b508:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b50b:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b50f:	83 f0 01             	xor    $0x1,%eax
 840b512:	84 c0                	test   %al,%al
 840b514:	74 50                	je     840b566 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x48e>
 840b516:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b519:	8b 58 04             	mov    0x4(%eax),%ebx
 840b51c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b523:	00 
 840b524:	c7 44 24 08 f7 24 00 	movl   $0x24f7,0x8(%esp)
 840b52b:	00 
 840b52c:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b533:	08 
 840b534:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 840b53a:	89 04 24             	mov    %eax,(%esp)
 840b53d:	e8 d6 41 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b542:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b546:	c7 44 24 04 a8 5c c4 	movl   $0x8c45ca8,0x4(%esp)
 840b54d:	08 
 840b54e:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 840b554:	89 04 24             	mov    %eax,(%esp)
 840b557:	e8 2c 42 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b55c:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b561:	e9 c7 07 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b566:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b569:	05 40 40 00 00       	add    $0x4040,%eax
 840b56e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840b572:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 840b579:	00 
 840b57a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b57d:	89 04 24             	mov    %eax,(%esp)
 840b580:	e8 6d 6d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840b585:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b588:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b58c:	83 f0 01             	xor    $0x1,%eax
 840b58f:	84 c0                	test   %al,%al
 840b591:	74 50                	je     840b5e3 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x50b>
 840b593:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b596:	8b 58 04             	mov    0x4(%eax),%ebx
 840b599:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b5a0:	00 
 840b5a1:	c7 44 24 08 ff 24 00 	movl   $0x24ff,0x8(%esp)
 840b5a8:	00 
 840b5a9:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b5b0:	08 
 840b5b1:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 840b5b7:	89 04 24             	mov    %eax,(%esp)
 840b5ba:	e8 59 41 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b5bf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b5c3:	c7 44 24 04 e8 5c c4 	movl   $0x8c45ce8,0x4(%esp)
 840b5ca:	08 
 840b5cb:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 840b5d1:	89 04 24             	mov    %eax,(%esp)
 840b5d4:	e8 af 41 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b5d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b5de:	e9 4a 07 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b5e3:	c7 45 e0 06 00 00 00 	movl   $0x6,-0x20(%ebp)
 840b5ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840b5ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 840b5f1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b5f4:	89 04 24             	mov    %eax,(%esp)
 840b5f7:	e8 e2 9d d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840b5fc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 840b5ff:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 840b605:	89 c2                	mov    %eax,%edx
 840b607:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840b60a:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 840b60e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b612:	8d 95 00 de ff ff    	lea    -0x2200(%ebp),%edx
 840b618:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b61c:	89 44 24 04          	mov    %eax,0x4(%esp)
 840b620:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b623:	89 04 24             	mov    %eax,(%esp)
 840b626:	e8 ef 9c d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840b62b:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b62e:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b632:	83 f0 01             	xor    $0x1,%eax
 840b635:	84 c0                	test   %al,%al
 840b637:	74 50                	je     840b689 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x5b1>
 840b639:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b63c:	8b 58 04             	mov    0x4(%eax),%ebx
 840b63f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b646:	00 
 840b647:	c7 44 24 08 1b 25 00 	movl   $0x251b,0x8(%esp)
 840b64e:	00 
 840b64f:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b656:	08 
 840b657:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 840b65d:	89 04 24             	mov    %eax,(%esp)
 840b660:	e8 b3 40 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b665:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b669:	c7 44 24 04 28 5d c4 	movl   $0x8c45d28,0x4(%esp)
 840b670:	08 
 840b671:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 840b677:	89 04 24             	mov    %eax,(%esp)
 840b67a:	e8 09 41 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b67f:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b684:	e9 a4 06 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b689:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b68c:	8d 90 7c 28 01 00    	lea    0x1287c(%eax),%edx
 840b692:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840b695:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 840b699:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b69d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840b6a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b6a4:	89 04 24             	mov    %eax,(%esp)
 840b6a7:	e8 80 b2 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840b6ac:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b6af:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b6b3:	83 f0 01             	xor    $0x1,%eax
 840b6b6:	84 c0                	test   %al,%al
 840b6b8:	74 50                	je     840b70a <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x632>
 840b6ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b6bd:	8b 58 04             	mov    0x4(%eax),%ebx
 840b6c0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b6c7:	00 
 840b6c8:	c7 44 24 08 22 25 00 	movl   $0x2522,0x8(%esp)
 840b6cf:	00 
 840b6d0:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b6d7:	08 
 840b6d8:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 840b6de:	89 04 24             	mov    %eax,(%esp)
 840b6e1:	e8 32 40 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b6e6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b6ea:	c7 44 24 04 5c 5d c4 	movl   $0x8c45d5c,0x4(%esp)
 840b6f1:	08 
 840b6f2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 840b6f8:	89 04 24             	mov    %eax,(%esp)
 840b6fb:	e8 88 40 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b700:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b705:	e9 23 06 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b70a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b70d:	8d 90 3c 53 01 00    	lea    0x1533c(%eax),%edx
 840b713:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840b716:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 840b71a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b71e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840b722:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b725:	89 04 24             	mov    %eax,(%esp)
 840b728:	e8 c5 6b cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840b72d:	88 45 cf             	mov    %al,-0x31(%ebp)
 840b730:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840b734:	83 f0 01             	xor    $0x1,%eax
 840b737:	84 c0                	test   %al,%al
 840b739:	74 50                	je     840b78b <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x6b3>
 840b73b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b73e:	8b 58 04             	mov    0x4(%eax),%ebx
 840b741:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b748:	00 
 840b749:	c7 44 24 08 3a 25 00 	movl   $0x253a,0x8(%esp)
 840b750:	00 
 840b751:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b758:	08 
 840b759:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 840b75f:	89 04 24             	mov    %eax,(%esp)
 840b762:	e8 b1 3f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b767:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b76b:	c7 44 24 04 9c 5d c4 	movl   $0x8c45d9c,0x4(%esp)
 840b772:	08 
 840b773:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 840b779:	89 04 24             	mov    %eax,(%esp)
 840b77c:	e8 07 40 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b781:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b786:	e9 a2 05 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b78b:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 840b791:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 840b794:	76 2c                	jbe    840b7c2 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x6ea>
 840b796:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b79d:	e8 5e a0 31 00       	call   8725800 <__cxa_allocate_exception>
 840b7a2:	89 c2                	mov    %eax,%edx
 840b7a4:	c7 02 5a 25 00 00    	movl   $0x255a,(%edx)
 840b7aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b7b1:	00 
 840b7b2:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b7b9:	09 
 840b7ba:	89 04 24             	mov    %eax,(%esp)
 840b7bd:	e8 8e 94 31 00       	call   8724c50 <__cxa_throw>
 840b7c2:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 840b7c8:	39 45 d0             	cmp    %eax,-0x30(%ebp)
 840b7cb:	76 2c                	jbe    840b7f9 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x721>
 840b7cd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b7d4:	e8 27 a0 31 00       	call   8725800 <__cxa_allocate_exception>
 840b7d9:	89 c2                	mov    %eax,%edx
 840b7db:	c7 02 5c 25 00 00    	movl   $0x255c,(%edx)
 840b7e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b7e8:	00 
 840b7e9:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b7f0:	09 
 840b7f1:	89 04 24             	mov    %eax,(%esp)
 840b7f4:	e8 57 94 31 00       	call   8724c50 <__cxa_throw>
 840b7f9:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 840b7ff:	39 45 d8             	cmp    %eax,-0x28(%ebp)
 840b802:	76 2c                	jbe    840b830 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x758>
 840b804:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b80b:	e8 f0 9f 31 00       	call   8725800 <__cxa_allocate_exception>
 840b810:	89 c2                	mov    %eax,%edx
 840b812:	c7 02 63 25 00 00    	movl   $0x2563,(%edx)
 840b818:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b81f:	00 
 840b820:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b827:	09 
 840b828:	89 04 24             	mov    %eax,(%esp)
 840b82b:	e8 20 94 31 00       	call   8724c50 <__cxa_throw>
 840b830:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b833:	05 03 a6 00 00       	add    $0xa603,%eax
 840b838:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 840b83b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b83f:	8d 95 36 fb ff ff    	lea    -0x4ca(%ebp),%edx
 840b845:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b849:	8d 95 b4 fe ff ff    	lea    -0x14c(%ebp),%edx
 840b84f:	89 54 24 04          	mov    %edx,0x4(%esp)
 840b853:	89 04 24             	mov    %eax,(%esp)
 840b856:	e8 a7 68 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840b85b:	83 f0 01             	xor    $0x1,%eax
 840b85e:	84 c0                	test   %al,%al
 840b860:	74 2c                	je     840b88e <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x7b6>
 840b862:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b869:	e8 92 9f 31 00       	call   8725800 <__cxa_allocate_exception>
 840b86e:	89 c2                	mov    %eax,%edx
 840b870:	c7 02 65 25 00 00    	movl   $0x2565,(%edx)
 840b876:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b87d:	00 
 840b87e:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b885:	09 
 840b886:	89 04 24             	mov    %eax,(%esp)
 840b889:	e8 c2 93 31 00       	call   8724c50 <__cxa_throw>
 840b88e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b891:	05 49 59 00 00       	add    $0x5949,%eax
 840b896:	8b 55 d0             	mov    -0x30(%ebp),%edx
 840b899:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b89d:	8d 95 c2 96 ff ff    	lea    -0x693e(%ebp),%edx
 840b8a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b8a7:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 840b8ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 840b8b1:	89 04 24             	mov    %eax,(%esp)
 840b8b4:	e8 49 68 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840b8b9:	83 f0 01             	xor    $0x1,%eax
 840b8bc:	84 c0                	test   %al,%al
 840b8be:	74 2c                	je     840b8ec <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x814>
 840b8c0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b8c7:	e8 34 9f 31 00       	call   8725800 <__cxa_allocate_exception>
 840b8cc:	89 c2                	mov    %eax,%edx
 840b8ce:	c7 02 67 25 00 00    	movl   $0x2567,(%edx)
 840b8d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b8db:	00 
 840b8dc:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b8e3:	09 
 840b8e4:	89 04 24             	mov    %eax,(%esp)
 840b8e7:	e8 64 93 31 00       	call   8724c50 <__cxa_throw>
 840b8ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b8ef:	05 2d 10 01 00       	add    $0x1102d,%eax
 840b8f4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 840b8f7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b8fb:	8d 95 00 de ff ff    	lea    -0x2200(%ebp),%edx
 840b901:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b905:	8d 95 b8 fe ff ff    	lea    -0x148(%ebp),%edx
 840b90b:	89 54 24 04          	mov    %edx,0x4(%esp)
 840b90f:	89 04 24             	mov    %eax,(%esp)
 840b912:	e8 eb 67 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840b917:	83 f0 01             	xor    $0x1,%eax
 840b91a:	84 c0                	test   %al,%al
 840b91c:	74 2c                	je     840b94a <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x872>
 840b91e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840b925:	e8 d6 9e 31 00       	call   8725800 <__cxa_allocate_exception>
 840b92a:	89 c2                	mov    %eax,%edx
 840b92c:	c7 02 6e 25 00 00    	movl   $0x256e,(%edx)
 840b932:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840b939:	00 
 840b93a:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 840b941:	09 
 840b942:	89 04 24             	mov    %eax,(%esp)
 840b945:	e8 06 93 31 00       	call   8724c50 <__cxa_throw>
 840b94a:	8b 8d b4 fe ff ff    	mov    -0x14c(%ebp),%ecx
 840b950:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840b955:	89 c8                	mov    %ecx,%eax
 840b957:	f7 e2                	mul    %edx
 840b959:	89 d0                	mov    %edx,%eax
 840b95b:	c1 e8 04             	shr    $0x4,%eax
 840b95e:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840b961:	89 ca                	mov    %ecx,%edx
 840b963:	29 c2                	sub    %eax,%edx
 840b965:	89 d0                	mov    %edx,%eax
 840b967:	85 c0                	test   %eax,%eax
 840b969:	74 69                	je     840b9d4 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x8fc>
 840b96b:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 840b971:	85 c0                	test   %eax,%eax
 840b973:	74 5f                	je     840b9d4 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x8fc>
 840b975:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b978:	8b 58 04             	mov    0x4(%eax),%ebx
 840b97b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840b982:	00 
 840b983:	c7 44 24 08 73 25 00 	movl   $0x2573,0x8(%esp)
 840b98a:	00 
 840b98b:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840b992:	08 
 840b993:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 840b999:	89 04 24             	mov    %eax,(%esp)
 840b99c:	e8 77 3d 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840b9a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 840b9a4:	89 44 24 10          	mov    %eax,0x10(%esp)
 840b9a8:	c7 44 24 0c 3e 05 00 	movl   $0x53e,0xc(%esp)
 840b9af:	00 
 840b9b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840b9b4:	c7 44 24 04 dc 5d c4 	movl   $0x8c45ddc,0x4(%esp)
 840b9bb:	08 
 840b9bc:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 840b9c2:	89 04 24             	mov    %eax,(%esp)
 840b9c5:	e8 be 3d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840b9ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 840b9cf:	e9 59 03 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840b9d4:	8b 8d b0 fe ff ff    	mov    -0x150(%ebp),%ecx
 840b9da:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840b9df:	89 c8                	mov    %ecx,%eax
 840b9e1:	f7 e2                	mul    %edx
 840b9e3:	89 d0                	mov    %edx,%eax
 840b9e5:	c1 e8 04             	shr    $0x4,%eax
 840b9e8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840b9eb:	89 ca                	mov    %ecx,%edx
 840b9ed:	29 c2                	sub    %eax,%edx
 840b9ef:	89 d0                	mov    %edx,%eax
 840b9f1:	85 c0                	test   %eax,%eax
 840b9f3:	74 69                	je     840ba5e <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x986>
 840b9f5:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 840b9fb:	85 c0                	test   %eax,%eax
 840b9fd:	74 5f                	je     840ba5e <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0x986>
 840b9ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ba02:	8b 58 04             	mov    0x4(%eax),%ebx
 840ba05:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ba0c:	00 
 840ba0d:	c7 44 24 08 79 25 00 	movl   $0x2579,0x8(%esp)
 840ba14:	00 
 840ba15:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840ba1c:	08 
 840ba1d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 840ba23:	89 04 24             	mov    %eax,(%esp)
 840ba26:	e8 ed 3c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840ba2b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 840ba2e:	89 44 24 10          	mov    %eax,0x10(%esp)
 840ba32:	c7 44 24 0c 58 4a 00 	movl   $0x4a58,0xc(%esp)
 840ba39:	00 
 840ba3a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840ba3e:	c7 44 24 04 2c 5e c4 	movl   $0x8c45e2c,0x4(%esp)
 840ba45:	08 
 840ba46:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 840ba4c:	89 04 24             	mov    %eax,(%esp)
 840ba4f:	e8 34 3d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ba54:	bb 00 00 00 00       	mov    $0x0,%ebx
 840ba59:	e9 cf 02 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840ba5e:	8b 8d b8 fe ff ff    	mov    -0x148(%ebp),%ecx
 840ba64:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840ba69:	89 c8                	mov    %ecx,%eax
 840ba6b:	f7 e2                	mul    %edx
 840ba6d:	89 d0                	mov    %edx,%eax
 840ba6f:	c1 e8 04             	shr    $0x4,%eax
 840ba72:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840ba75:	89 ca                	mov    %ecx,%edx
 840ba77:	29 c2                	sub    %eax,%edx
 840ba79:	89 d0                	mov    %edx,%eax
 840ba7b:	85 c0                	test   %eax,%eax
 840ba7d:	0f 84 e2 00 00 00    	je     840bb65 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xa8d>
 840ba83:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 840ba89:	85 c0                	test   %eax,%eax
 840ba8b:	0f 84 d4 00 00 00    	je     840bb65 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xa8d>
 840ba91:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ba94:	8b 58 04             	mov    0x4(%eax),%ebx
 840ba97:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ba9e:	00 
 840ba9f:	c7 44 24 08 88 25 00 	movl   $0x2588,0x8(%esp)
 840baa6:	00 
 840baa7:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840baae:	08 
 840baaf:	8d 45 8c             	lea    -0x74(%ebp),%eax
 840bab2:	89 04 24             	mov    %eax,(%esp)
 840bab5:	e8 5e 3c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840baba:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840babd:	89 44 24 10          	mov    %eax,0x10(%esp)
 840bac1:	c7 44 24 0c 58 4a 00 	movl   $0x4a58,0xc(%esp)
 840bac8:	00 
 840bac9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840bacd:	c7 44 24 04 7c 5e c4 	movl   $0x8c45e7c,0x4(%esp)
 840bad4:	08 
 840bad5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 840bad8:	89 04 24             	mov    %eax,(%esp)
 840badb:	e8 a8 3c 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bae0:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bae5:	e9 43 02 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840baea:	83 fa 01             	cmp    $0x1,%edx
 840baed:	74 08                	je     840baf7 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xa1f>
 840baef:	89 04 24             	mov    %eax,(%esp)
 840baf2:	e8 59 7c 6d 00       	call   8ae3750 <_Unwind_Resume>
 840baf7:	89 04 24             	mov    %eax,(%esp)
 840bafa:	e8 e1 a1 31 00       	call   8725ce0 <__cxa_begin_catch>
 840baff:	8b 00                	mov    (%eax),%eax
 840bb01:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840bb04:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bb07:	8b 40 04             	mov    0x4(%eax),%eax
 840bb0a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 840bb0d:	89 54 24 18          	mov    %edx,0x18(%esp)
 840bb11:	89 44 24 14          	mov    %eax,0x14(%esp)
 840bb15:	c7 44 24 10 d0 5e c4 	movl   $0x8c45ed0,0x10(%esp)
 840bb1c:	08 
 840bb1d:	c7 44 24 0c 9c 25 00 	movl   $0x259c,0xc(%esp)
 840bb24:	00 
 840bb25:	c7 44 24 08 80 d2 c5 	movl   $0x8c5d280,0x8(%esp)
 840bb2c:	08 
 840bb2d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840bb34:	08 
 840bb35:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 840bb3c:	e8 c9 80 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 840bb41:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bb46:	e8 e5 a0 31 00       	call   8725c30 <__cxa_end_catch>
 840bb4b:	e9 dd 01 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840bb50:	89 d3                	mov    %edx,%ebx
 840bb52:	89 c6                	mov    %eax,%esi
 840bb54:	e8 d7 a0 31 00       	call   8725c30 <__cxa_end_catch>
 840bb59:	89 f0                	mov    %esi,%eax
 840bb5b:	89 da                	mov    %ebx,%edx
 840bb5d:	89 04 24             	mov    %eax,(%esp)
 840bb60:	e8 eb 7b 6d 00       	call   8ae3750 <_Unwind_Resume>
 840bb65:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bb68:	8b 00                	mov    (%eax),%eax
 840bb6a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840bb71:	00 
 840bb72:	89 04 24             	mov    %eax,(%esp)
 840bb75:	e8 d1 d4 cf ff       	call   810904b <_Z14NumberToStringji>
 840bb7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840bb7e:	c7 44 24 04 f8 5e c4 	movl   $0x8c45ef8,0x4(%esp)
 840bb85:	08 
 840bb86:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840bb89:	89 04 24             	mov    %eax,(%esp)
 840bb8c:	e8 2f 86 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840bb91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840bb98:	00 
 840bb99:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840bb9c:	89 04 24             	mov    %eax,(%esp)
 840bb9f:	e8 82 87 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840bba4:	88 45 cf             	mov    %al,-0x31(%ebp)
 840bba7:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840bbab:	83 f0 01             	xor    $0x1,%eax
 840bbae:	84 c0                	test   %al,%al
 840bbb0:	74 5b                	je     840bc0d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xb35>
 840bbb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bbb5:	8b 00                	mov    (%eax),%eax
 840bbb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840bbbe:	00 
 840bbbf:	89 04 24             	mov    %eax,(%esp)
 840bbc2:	e8 84 d4 cf ff       	call   810904b <_Z14NumberToStringji>
 840bbc7:	89 c3                	mov    %eax,%ebx
 840bbc9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840bbd0:	00 
 840bbd1:	c7 44 24 08 a6 25 00 	movl   $0x25a6,0x8(%esp)
 840bbd8:	00 
 840bbd9:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840bbe0:	08 
 840bbe1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 840bbe4:	89 04 24             	mov    %eax,(%esp)
 840bbe7:	e8 2c 3b 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840bbec:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840bbf0:	c7 44 24 04 54 5f c4 	movl   $0x8c45f54,0x4(%esp)
 840bbf7:	08 
 840bbf8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 840bbfb:	89 04 24             	mov    %eax,(%esp)
 840bbfe:	e8 85 3b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bc03:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bc08:	e9 20 01 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840bc0d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840bc10:	89 04 24             	mov    %eax,(%esp)
 840bc13:	e8 a4 88 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840bc18:	88 45 cf             	mov    %al,-0x31(%ebp)
 840bc1b:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840bc1f:	83 f0 01             	xor    $0x1,%eax
 840bc22:	84 c0                	test   %al,%al
 840bc24:	74 5b                	je     840bc81 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xba9>
 840bc26:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bc29:	8b 00                	mov    (%eax),%eax
 840bc2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840bc32:	00 
 840bc33:	89 04 24             	mov    %eax,(%esp)
 840bc36:	e8 10 d4 cf ff       	call   810904b <_Z14NumberToStringji>
 840bc3b:	89 c3                	mov    %eax,%ebx
 840bc3d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840bc44:	00 
 840bc45:	c7 44 24 08 ac 25 00 	movl   $0x25ac,0x8(%esp)
 840bc4c:	00 
 840bc4d:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840bc54:	08 
 840bc55:	8d 45 ac             	lea    -0x54(%ebp),%eax
 840bc58:	89 04 24             	mov    %eax,(%esp)
 840bc5b:	e8 b8 3a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840bc60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840bc64:	c7 44 24 04 94 5f c4 	movl   $0x8c45f94,0x4(%esp)
 840bc6b:	08 
 840bc6c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 840bc6f:	89 04 24             	mov    %eax,(%esp)
 840bc72:	e8 11 3b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bc77:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bc7c:	e9 ac 00 00 00       	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840bc81:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bc84:	05 80 47 01 00       	add    $0x14780,%eax
 840bc89:	89 44 24 08          	mov    %eax,0x8(%esp)
 840bc8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840bc94:	00 
 840bc95:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840bc98:	89 04 24             	mov    %eax,(%esp)
 840bc9b:	e8 52 66 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840bca0:	88 45 cf             	mov    %al,-0x31(%ebp)
 840bca3:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 840bca7:	83 f0 01             	xor    $0x1,%eax
 840bcaa:	84 c0                	test   %al,%al
 840bcac:	74 58                	je     840bd06 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc2e>
 840bcae:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bcb1:	8b 00                	mov    (%eax),%eax
 840bcb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840bcba:	00 
 840bcbb:	89 04 24             	mov    %eax,(%esp)
 840bcbe:	e8 88 d3 cf ff       	call   810904b <_Z14NumberToStringji>
 840bcc3:	89 c3                	mov    %eax,%ebx
 840bcc5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840bccc:	00 
 840bccd:	c7 44 24 08 b2 25 00 	movl   $0x25b2,0x8(%esp)
 840bcd4:	00 
 840bcd5:	c7 44 24 04 80 d2 c5 	movl   $0x8c5d280,0x4(%esp)
 840bcdc:	08 
 840bcdd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840bce0:	89 04 24             	mov    %eax,(%esp)
 840bce3:	e8 30 3a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840bce8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840bcec:	c7 44 24 04 d4 5f c4 	movl   $0x8c45fd4,0x4(%esp)
 840bcf3:	08 
 840bcf4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840bcf7:	89 04 24             	mov    %eax,(%esp)
 840bcfa:	e8 89 3a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bcff:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bd04:	eb 27                	jmp    840bd2d <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc55>
 840bd06:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd09:	8b 40 08             	mov    0x8(%eax),%eax
 840bd0c:	85 c0                	test   %eax,%eax
 840bd0e:	74 18                	je     840bd28 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY+0xc50>
 840bd10:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd13:	8d 50 0c             	lea    0xc(%eax),%edx
 840bd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 840bd19:	8b 40 08             	mov    0x8(%eax),%eax
 840bd1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 840bd20:	89 04 24             	mov    %eax,(%esp)
 840bd23:	e8 7a ee ff ff       	call   840aba2 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA>
 840bd28:	bb 01 00 00 00       	mov    $0x1,%ebx
 840bd2d:	89 d8                	mov    %ebx,%eax
 840bd2f:	81 c4 5c 69 00 00    	add    $0x695c,%esp
 840bd35:	5b                   	pop    %ebx
 840bd36:	5e                   	pop    %esi
 840bd37:	5f                   	pop    %edi
 840bd38:	5d                   	pop    %ebp
 840bd39:	c3                   	ret

```

```c
// DB_LoadInventory::GetUserInven @ 0x840b0d8

/* WARNING: Removing unreachable block (ram,0x0840b129) */
/* DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserInven(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  char local_6942 [18238];
  char local_2204 [7478];
  char local_4ce [890];
  uint local_154;
  uint local_150;
  uint local_14c;
  cMyTrace local_148 [16];
  cMyTrace local_138 [16];
  cMyTrace local_128 [16];
  cMyTrace local_118 [16];
  cMyTrace local_108 [16];
  cMyTrace local_f8 [16];
  cMyTrace local_e8 [16];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [19];
  char local_35;
  uint local_34;
  uint local_30;
  uint local_2c;
  MySQL *local_28;
  int local_24;
  
  bVar8 = 0;
  pcVar4 = local_4ce;
  uVar5 = 0x37a;
  bVar7 = ((uint)pcVar4 & 2) != 0;
  if (bVar7) {
    local_4ce[0] = '\0';
    local_4ce[1] = '\0';
    pcVar4 = local_4ce + 2;
    uVar5 = 0x378;
  }
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (!bVar7) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
  }
  memset(local_6942,0,0x473e);
  pcVar4 = local_2204;
  for (iVar3 = 0x74d; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  local_14c = 0x1d36;
  local_150 = 0x37a;
  local_154 = 0x473e;
  local_34 = 0x473e;
  local_30 = 0x37a;
  local_2c = 0x1d36;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_28,
                   "seLect money,coin,inventory,equipslot,pay_coin,event_coin,creature,creature_flag,inventory_capacity from inventory where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_35 = MySQL::exec(local_28,true);
  if (local_35 == '\x01') {
    local_35 = MySQL::fetch(local_28);
    if (local_35 == '\x01') {
      local_35 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x4034));
      if (local_35 == '\x01') {
        local_35 = MySQL::get_uint(local_28,1,(uint *)(param_1 + 0x4038));
        if (local_35 == '\x01') {
          local_34 = MySQL::get_binary_length(local_28,2);
          local_35 = MySQL::get_binary(local_28,2,local_6942,local_154);
          if (local_35 == '\x01') {
            local_30 = MySQL::get_binary_length(local_28,3);
            local_35 = MySQL::get_binary(local_28,3,local_4ce,local_150);
            if (local_35 == '\x01') {
              local_35 = MySQL::get_uint(local_28,4,(uint *)(param_1 + 0x403c));
              if (local_35 == '\x01') {
                local_35 = MySQL::get_uint(local_28,5,(uint *)(param_1 + 0x4040));
                if (local_35 == '\x01') {
                  local_24 = 6;
                  local_2c = MySQL::get_binary_length(local_28,6);
                  iVar3 = local_24;
                  local_24 = local_24 + 1;
                  local_35 = MySQL::get_binary(local_28,iVar3,local_2204,local_14c);
                  iVar3 = local_24;
                  if (local_35 == '\x01') {
                    local_24 = local_24 + 1;
                    local_35 = MySQL::get_int(local_28,iVar3,(int *)(param_1 + 0x1287c));
                    iVar3 = local_24;
                    if (local_35 == '\x01') {
                      local_24 = local_24 + 1;
                      local_35 = MySQL::get_uint(local_28,iVar3,(uint *)(param_1 + 0x1533c));
                      if (local_35 == '\x01') {
                        if (local_150 < local_30) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x255a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0840b7bd to 0840badf has its CatchHandler @ 0840baea */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if (local_154 < local_34) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x255c;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if (local_14c < local_2c) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2563;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0xa603),&local_150,local_4ce,
                                               local_30);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2565;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0x5949),&local_154,local_6942,
                                               local_34);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2567;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0x1102d),&local_14c,local_2204,
                                               local_2c);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x256e;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if ((local_150 == (local_150 / 0x3d) * 0x3d) || (local_150 == 0)) {
                          if ((local_154 == (local_154 / 0x3d) * 0x3d) || (local_154 == 0)) {
                            if ((local_14c == (local_14c / 0x3d) * 0x3d) || (local_14c == 0)) {
                              uVar6 = NumberToString(*(uint *)param_1,0);
                              MySQL::set_query(local_28,
                                               "seLect ifnull(min(avatar_coin),0) as avatar_coin from member_avatar_coin where m_id = %s"
                                               ,uVar6);
                              local_35 = MySQL::exec(local_28,true);
                              if (local_35 == '\x01') {
                                local_35 = MySQL::fetch(local_28);
                                if (local_35 == '\x01') {
                                  local_35 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x14780))
                                  ;
                                  if (local_35 == '\x01') {
                                    if (*(int *)(param_1 + 8) != 0) {
                                      _GetTagCharacInven(*(uint *)(param_1 + 8),
                                                         (TAG_CHARAC_INVEN_DATA *)(param_1 + 0xc));
                                    }
                                    uVar6 = 1;
                                  }
                                  else {
                                    uVar6 = NumberToString(*(uint *)param_1,0);
                                    cMyTrace::cMyTrace(local_48,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25b2,5);
                                    cMyTrace::operator()
                                              (local_48,
                                               "DB_LoadInventory::GetUserInven, get_uint(%u, pContext->avatar_coin) ERROR m_id=%s"
                                               ,uVar6);
                                    uVar6 = 0;
                                  }
                                }
                                else {
                                  uVar6 = NumberToString(*(uint *)param_1,0);
                                  cMyTrace::cMyTrace(local_58,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25ac,5);
                                  cMyTrace::operator()
                                            (local_58,
                                             "DB_LoadInventory::GetUserInven, avatar_coin fetch ERROR m_id=%s"
                                             ,uVar6);
                                  uVar6 = 0;
                                }
                              }
                              else {
                                uVar6 = NumberToString(*(uint *)param_1,0);
                                cMyTrace::cMyTrace(local_68,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25a6,5);
                                cMyTrace::operator()
                                          (local_68,
                                           "DB_LoadInventory::GetUserInven, avatar_coin exec ERROR m_id=%s"
                                           ,uVar6);
                                uVar6 = 0;
                              }
                            }
                            else {
                              uVar6 = *(undefined4 *)(param_1 + 4);
                              cMyTrace::cMyTrace(local_78,
                                                 "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                 ,0x2588,5);
                              cMyTrace::operator()
                                        (local_78,
                                         "incorrect inventory size charac_no(%d), creature, original_size(%d), db_size(%d)\n"
                                         ,uVar6,0x4a58,local_2c);
                              uVar6 = 0;
                            }
                          }
                          else {
                            uVar6 = *(undefined4 *)(param_1 + 4);
                            cMyTrace::cMyTrace(local_88,
                                               "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                               ,0x2579,5);
                            cMyTrace::operator()
                                      (local_88,
                                       "incorrect inventory size charac_no(%d), inven, original_size(%d), db_size(%d)\n"
                                       ,uVar6,0x4a58,local_34);
                            uVar6 = 0;
                          }
                        }
                        else {
                          uVar6 = *(undefined4 *)(param_1 + 4);
                          cMyTrace::cMyTrace(local_98,
                                             "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                             ,0x2573,5);
                          cMyTrace::operator()
                                    (local_98,
                                     "incorrect inventory size charac_no(%d), equip, original_size(%d), db_size(%d)\n"
                                     ,uVar6,0x53e,local_30);
                          uVar6 = 0;
                        }
                      }
                      else {
                        uVar6 = *(undefined4 *)(param_1 + 4);
                        cMyTrace::cMyTrace(local_a8,
                                           "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                           ,0x253a,5);
                        cMyTrace::operator()
                                  (local_a8,
                                   "DB_LoadInventory::GetUserInven, get_uint(13) ERROR charac_no=%u"
                                   ,uVar6);
                        uVar6 = 0;
                      }
                    }
                    else {
                      uVar6 = *(undefined4 *)(param_1 + 4);
                      cMyTrace::cMyTrace(local_b8,
                                         "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                         0x2522,5);
                      cMyTrace::operator()
                                (local_b8,
                                 "DB_LoadInventory::GetUserInven, get_uint(9) ERROR charac_no=%u",
                                 uVar6);
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar6 = *(undefined4 *)(param_1 + 4);
                    cMyTrace::cMyTrace(local_c8,
                                       "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                       0x251b,5);
                    cMyTrace::operator()
                              (local_c8,"DB_LoadCreature, get_binary(8) ERROR charac_no=%u",uVar6);
                    uVar6 = 0;
                  }
                }
                else {
                  uVar6 = *(undefined4 *)(param_1 + 4);
                  cMyTrace::cMyTrace(local_d8,
                                     "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                     0x24ff,5);
                  cMyTrace::operator()
                            (local_d8,
                             "DB_LoadInventory::GetUserInven, get_uint(5) ERROR charac_no=%u",uVar6)
                  ;
                  uVar6 = 0;
                }
              }
              else {
                uVar6 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_e8,
                                   "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24f7
                                   ,5);
                cMyTrace::operator()
                          (local_e8,"DB_LoadInventory::GetUserInven, get_uint(4) ERROR charac_no=%u"
                           ,uVar6);
                uVar6 = 0;
              }
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_f8,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                 ,0x24f0,5);
              cMyTrace::operator()
                        (local_f8,"DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u"
                         ,uVar6);
              uVar6 = 0;
            }
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_108,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                               0x24e8,5);
            cMyTrace::operator()
                      (local_108,"DB_LoadInventory::GetUserInven, get_binary(2) ERROR charac_no=%u",
                       uVar6);
            uVar6 = 0;
          }
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_118,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                             0x24e0,5);
          cMyTrace::operator()
                    (local_118,
                     "DB_LoadInventory::GetUserInven, get_uint(1, pContext->coin) ERROR charac_no=%u"
                     ,uVar6);
          uVar6 = 0;
        }
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_128,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                           0x24d9,5);
        cMyTrace::operator()
                  (local_128,
                   "DB_LoadInventory::GetUserInven, get_uint(0, pContext->money) ERROR charac_no=%u"
                   ,uVar6);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_138,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24d2
                         ,5);
      cMyTrace::operator()
                (local_138,"DB_LoadInventory::GetUserInven, fetch ERROR charac_no=%u",uVar6);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_148,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24cb,5
                      );
    cMyTrace::operator()(local_148,"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",uVar6);
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## SendResult

```asm
// === 0840da6e DB_LoadInventory::SendResult  [0x0840da6e-0x840da95] ===
 840da6e:	55                   	push   %ebp
 840da6f:	89 e5                	mov    %esp,%ebp
 840da71:	83 ec 28             	sub    $0x28,%esp
 840da74:	8b 45 14             	mov    0x14(%ebp),%eax
 840da77:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840da7b:	8b 45 10             	mov    0x10(%ebp),%eax
 840da7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840da82:	8b 45 0c             	mov    0xc(%ebp),%eax
 840da85:	89 44 24 04          	mov    %eax,0x4(%esp)
 840da89:	8b 45 08             	mov    0x8(%ebp),%eax
 840da8c:	89 04 24             	mov    %eax,(%esp)
 840da8f:	e8 f8 fe ff ff       	call   840d98c <_ZN16DB_LoadInventory19SendResult_forchinaEiiP18SIG_LOAD_INVENTORY>
 840da94:	c9                   	leave
 840da95:	c3                   	ret

```

```c
// DB_LoadInventory::SendResult @ 0x840da6e

/* DB_LoadInventory::SendResult(int, int, SIG_LOAD_INVENTORY*) */

void __thiscall
DB_LoadInventory::SendResult
          (DB_LoadInventory *this,int param_1,int param_2,SIG_LOAD_INVENTORY *param_3)

{
  SendResult_forchina(this,param_1,param_2,param_3);
  return;
}

```

---

## SendResult_forchina

```asm
// === 0840d98c DB_LoadInventory::SendResult_forchina  [0x0840d98c-0x840da6d] ===
 840d98c:	55                   	push   %ebp
 840d98d:	89 e5                	mov    %esp,%ebp
 840d98f:	56                   	push   %esi
 840d990:	53                   	push   %ebx
 840d991:	83 ec 20             	sub    $0x20,%esp
 840d994:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 840d999:	c7 44 24 08 39 29 00 	movl   $0x2939,0x8(%esp)
 840d9a0:	00 
 840d9a1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840d9a8:	08 
 840d9a9:	89 04 24             	mov    %eax,(%esp)
 840d9ac:	e8 b1 28 e8 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 840d9b1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840d9b8:	00 
 840d9b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840d9bd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840d9c0:	89 04 24             	mov    %eax,(%esp)
 840d9c3:	e8 5e b2 cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840d9c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840d9cb:	89 04 24             	mov    %eax,(%esp)
 840d9ce:	e8 73 b2 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840d9d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 840d9d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d9da:	89 04 24             	mov    %eax,(%esp)
 840d9dd:	e8 74 b2 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840d9e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840d9e5:	89 04 24             	mov    %eax,(%esp)
 840d9e8:	e8 59 b2 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840d9ed:	8b 55 10             	mov    0x10(%ebp),%edx
 840d9f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 840d9f4:	89 04 24             	mov    %eax,(%esp)
 840d9f7:	e8 5a b2 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840d9fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840d9ff:	89 04 24             	mov    %eax,(%esp)
 840da02:	e8 47 b2 cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 840da07:	c7 44 24 08 4c 54 01 	movl   $0x1544c,0x8(%esp)
 840da0e:	00 
 840da0f:	8b 55 14             	mov    0x14(%ebp),%edx
 840da12:	89 54 24 04          	mov    %edx,0x4(%esp)
 840da16:	89 04 24             	mov    %eax,(%esp)
 840da19:	e8 34 0c cd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 840da1e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 840da23:	8d 55 f0             	lea    -0x10(%ebp),%edx
 840da26:	89 54 24 08          	mov    %edx,0x8(%esp)
 840da2a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840da31:	00 
 840da32:	89 04 24             	mov    %eax,(%esp)
 840da35:	e8 a4 35 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 840da3a:	bb 01 00 00 00       	mov    $0x1,%ebx
 840da3f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840da42:	89 04 24             	mov    %eax,(%esp)
 840da45:	e8 88 ee 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840da4a:	89 d8                	mov    %ebx,%eax
 840da4c:	83 c4 20             	add    $0x20,%esp
 840da4f:	5b                   	pop    %ebx
 840da50:	5e                   	pop    %esi
 840da51:	5d                   	pop    %ebp
 840da52:	c3                   	ret
 840da53:	89 d3                	mov    %edx,%ebx
 840da55:	89 c6                	mov    %eax,%esi
 840da57:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840da5a:	89 04 24             	mov    %eax,(%esp)
 840da5d:	e8 70 ee 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840da62:	89 f0                	mov    %esi,%eax
 840da64:	89 da                	mov    %ebx,%edx
 840da66:	89 04 24             	mov    %eax,(%esp)
 840da69:	e8 e2 5c 6d 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadInventory::SendResult_forchina @ 0x840d98c

/* DB_LoadInventory::SendResult_forchina(int, int, SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::SendResult_forchina
          (DB_LoadInventory *this,int param_1,int param_2,SIG_LOAD_INVENTORY *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x2939);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0840d9dd to 0840da39 has its CatchHandler @ 0840da53 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x1544c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## _GetEquipMaxItemLevel

```asm
// === 0840aac8 DB_LoadInventory::_GetEquipMaxItemLevel  [0x0840aac8-0x840aba1] ===
 840aac8:	55                   	push   %ebp
 840aac9:	89 e5                	mov    %esp,%ebp
 840aacb:	83 ec 28             	sub    $0x28,%esp
 840aace:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840aad3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840aada:	00 
 840aadb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840aae2:	00 
 840aae3:	89 04 24             	mov    %eax,(%esp)
 840aae6:	e8 53 a7 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840aaeb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840aaee:	8b 45 0c             	mov    0xc(%ebp),%eax
 840aaf1:	8b 40 04             	mov    0x4(%eax),%eax
 840aaf4:	89 44 24 08          	mov    %eax,0x8(%esp)
 840aaf8:	c7 44 24 04 14 59 c4 	movl   $0x8c45914,0x4(%esp)
 840aaff:	08 
 840ab00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ab03:	89 04 24             	mov    %eax,(%esp)
 840ab06:	e8 b5 96 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840ab0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840ab12:	00 
 840ab13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ab16:	89 04 24             	mov    %eax,(%esp)
 840ab19:	e8 08 98 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840ab1e:	83 f0 01             	xor    $0x1,%eax
 840ab21:	84 c0                	test   %al,%al
 840ab23:	74 07                	je     840ab2c <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0x64>
 840ab25:	b8 00 00 00 00       	mov    $0x0,%eax
 840ab2a:	eb 73                	jmp    840ab9f <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0xd7>
 840ab2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ab2f:	89 04 24             	mov    %eax,(%esp)
 840ab32:	e8 d9 97 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840ab37:	09 d0                	or     %edx,%eax
 840ab39:	85 c0                	test   %eax,%eax
 840ab3b:	0f 94 c0             	sete   %al
 840ab3e:	84 c0                	test   %al,%al
 840ab40:	74 07                	je     840ab49 <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0x81>
 840ab42:	b8 01 00 00 00       	mov    $0x1,%eax
 840ab47:	eb 56                	jmp    840ab9f <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0xd7>
 840ab49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ab4c:	89 04 24             	mov    %eax,(%esp)
 840ab4f:	e8 68 99 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840ab54:	83 f0 01             	xor    $0x1,%eax
 840ab57:	84 c0                	test   %al,%al
 840ab59:	74 07                	je     840ab62 <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0x9a>
 840ab5b:	b8 00 00 00 00       	mov    $0x0,%eax
 840ab60:	eb 3d                	jmp    840ab9f <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0xd7>
 840ab62:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840ab69:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ab6c:	8d 90 48 54 01 00    	lea    0x15448(%eax),%edx
 840ab72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840ab75:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840ab79:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ab7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ab81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ab84:	89 04 24             	mov    %eax,(%esp)
 840ab87:	e8 a0 bd d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ab8c:	83 f0 01             	xor    $0x1,%eax
 840ab8f:	84 c0                	test   %al,%al
 840ab91:	74 07                	je     840ab9a <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0xd2>
 840ab93:	b8 00 00 00 00       	mov    $0x0,%eax
 840ab98:	eb 05                	jmp    840ab9f <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY+0xd7>
 840ab9a:	b8 01 00 00 00       	mov    $0x1,%eax
 840ab9f:	c9                   	leave
 840aba0:	c3                   	ret
 840aba1:	90                   	nop

```

```c
// DB_LoadInventory::_GetEquipMaxItemLevel @ 0x840aac8

/* DB_LoadInventory::_GetEquipMaxItemLevel(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::_GetEquipMaxItemLevel(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect max_equip_level from charac_manage_info where charac_no = %d",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(this_00);
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(this_00,0,(int *)(param_1 + 0x15448));
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

## _GetTagCharacInven

```asm
// === 0840aba2 DB_LoadInventory::_GetTagCharacInven  [0x0840aba2-0x840ad29] ===
 840aba2:	55                   	push   %ebp
 840aba3:	89 e5                	mov    %esp,%ebp
 840aba5:	83 ec 68             	sub    $0x68,%esp
 840aba8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840abad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840abb4:	00 
 840abb5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840abbc:	00 
 840abbd:	89 04 24             	mov    %eax,(%esp)
 840abc0:	e8 79 a6 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840abc5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840abc8:	8b 45 08             	mov    0x8(%ebp),%eax
 840abcb:	89 44 24 08          	mov    %eax,0x8(%esp)
 840abcf:	c7 44 24 04 58 59 c4 	movl   $0x8c45958,0x4(%esp)
 840abd6:	08 
 840abd7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840abda:	89 04 24             	mov    %eax,(%esp)
 840abdd:	e8 de 95 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840abe2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840abe9:	00 
 840abea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840abed:	89 04 24             	mov    %eax,(%esp)
 840abf0:	e8 31 97 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840abf5:	83 f0 01             	xor    $0x1,%eax
 840abf8:	84 c0                	test   %al,%al
 840abfa:	74 47                	je     840ac43 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0xa1>
 840abfc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ac03:	00 
 840ac04:	c7 44 24 08 e2 23 00 	movl   $0x23e2,0x8(%esp)
 840ac0b:	00 
 840ac0c:	c7 44 24 04 e0 d2 c5 	movl   $0x8c5d2e0,0x4(%esp)
 840ac13:	08 
 840ac14:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840ac17:	89 04 24             	mov    %eax,(%esp)
 840ac1a:	e8 f9 4a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840ac1f:	8b 45 08             	mov    0x8(%ebp),%eax
 840ac22:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ac26:	c7 44 24 04 90 59 c4 	movl   $0x8c45990,0x4(%esp)
 840ac2d:	08 
 840ac2e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840ac31:	89 04 24             	mov    %eax,(%esp)
 840ac34:	e8 4f 4b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ac39:	b8 00 00 00 00       	mov    $0x0,%eax
 840ac3e:	e9 e5 00 00 00       	jmp    840ad28 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0x186>
 840ac43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ac46:	89 04 24             	mov    %eax,(%esp)
 840ac49:	e8 6e 98 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840ac4e:	83 f0 01             	xor    $0x1,%eax
 840ac51:	84 c0                	test   %al,%al
 840ac53:	74 47                	je     840ac9c <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0xfa>
 840ac55:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ac5c:	00 
 840ac5d:	c7 44 24 08 e8 23 00 	movl   $0x23e8,0x8(%esp)
 840ac64:	00 
 840ac65:	c7 44 24 04 e0 d2 c5 	movl   $0x8c5d2e0,0x4(%esp)
 840ac6c:	08 
 840ac6d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840ac70:	89 04 24             	mov    %eax,(%esp)
 840ac73:	e8 a0 4a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840ac78:	8b 45 08             	mov    0x8(%ebp),%eax
 840ac7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ac7f:	c7 44 24 04 d0 59 c4 	movl   $0x8c459d0,0x4(%esp)
 840ac86:	08 
 840ac87:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840ac8a:	89 04 24             	mov    %eax,(%esp)
 840ac8d:	e8 f6 4a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ac92:	b8 00 00 00 00       	mov    $0x0,%eax
 840ac97:	e9 8c 00 00 00       	jmp    840ad28 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0x186>
 840ac9c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 840aca3:	8b 45 0c             	mov    0xc(%ebp),%eax
 840aca6:	05 62 02 00 00       	add    $0x262,%eax
 840acab:	c7 44 24 10 3d 00 00 	movl   $0x3d,0x10(%esp)
 840acb2:	00 
 840acb3:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 840acba:	00 
 840acbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 840acbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840acc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 840acc6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840acc9:	89 04 24             	mov    %eax,(%esp)
 840accc:	e8 a8 0f ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 840acd1:	88 45 f7             	mov    %al,-0x9(%ebp)
 840acd4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 840acd8:	83 f0 01             	xor    $0x1,%eax
 840acdb:	84 c0                	test   %al,%al
 840acdd:	74 44                	je     840ad23 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0x181>
 840acdf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840ace6:	00 
 840ace7:	c7 44 24 08 f1 23 00 	movl   $0x23f1,0x8(%esp)
 840acee:	00 
 840acef:	c7 44 24 04 e0 d2 c5 	movl   $0x8c5d2e0,0x4(%esp)
 840acf6:	08 
 840acf7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840acfa:	89 04 24             	mov    %eax,(%esp)
 840acfd:	e8 16 4a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840ad02:	8b 45 08             	mov    0x8(%ebp),%eax
 840ad05:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ad09:	c7 44 24 04 10 5a c4 	movl   $0x8c45a10,0x4(%esp)
 840ad10:	08 
 840ad11:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840ad14:	89 04 24             	mov    %eax,(%esp)
 840ad17:	e8 6c 4a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840ad1c:	b8 00 00 00 00       	mov    $0x0,%eax
 840ad21:	eb 05                	jmp    840ad28 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA+0x186>
 840ad23:	b8 01 00 00 00       	mov    $0x1,%eax
 840ad28:	c9                   	leave
 840ad29:	c3                   	ret

```

```c
// DB_LoadInventory::_GetTagCharacInven @ 0x840aba2

/* DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*) */

undefined4 DB_LoadInventory::_GetTagCharacInven(uint param_1,TAG_CHARAC_INVEN_DATA *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  char local_d;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect equipslot from inventory where charac_no = %d",param_1);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\x01') {
      local_14 = 0;
      local_d = get_compressed_blob_data(local_18,0,(char *)(param_2 + 0x262),0x2dc,0x3d);
      if (local_d == '\x01') {
        uVar2 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_28,
                           "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                           ,0x23f1,5);
        cMyTrace::operator()
                  (local_28,
                   "DB_LoadInventory::GetUserInven, get_compressed_blob_data ERROR charac_no=%u",
                   param_1);
        uVar2 = 0;
      }
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                         ,0x23e8,5);
      cMyTrace::operator()
                (local_38,"DB_LoadInventory::_GetTagCharacInven, fetch ERROR charac_no=%u",param_1);
      uVar2 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_48,
                       "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                       ,0x23e2,5);
    cMyTrace::operator()
              (local_48,"DB_LoadInventory::_GetTagCharacInven, exec ERROR charac_no=%u",param_1);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _GetUserAvatar

```asm
// === 0840be8a DB_LoadInventory::_GetUserAvatar  [0x0840be8a-0x840ca73] ===
 840be8a:	55                   	push   %ebp
 840be8b:	89 e5                	mov    %esp,%ebp
 840be8d:	56                   	push   %esi
 840be8e:	53                   	push   %ebx
 840be8f:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 840be95:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840be9a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840bea1:	00 
 840bea2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840bea9:	00 
 840beaa:	89 04 24             	mov    %eax,(%esp)
 840bead:	e8 8c 93 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840beb2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 840beb5:	c7 44 24 0c 73 00 00 	movl   $0x73,0xc(%esp)
 840bebc:	00 
 840bebd:	8b 45 08             	mov    0x8(%ebp),%eax
 840bec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 840bec4:	c7 44 24 04 9c 60 c4 	movl   $0x8c4609c,0x4(%esp)
 840becb:	08 
 840becc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840becf:	89 04 24             	mov    %eax,(%esp)
 840bed2:	e8 e9 82 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840bed7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840bede:	00 
 840bedf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840bee2:	89 04 24             	mov    %eax,(%esp)
 840bee5:	e8 3c 84 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840beea:	88 45 e7             	mov    %al,-0x19(%ebp)
 840beed:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840bef1:	83 f0 01             	xor    $0x1,%eax
 840bef4:	84 c0                	test   %al,%al
 840bef6:	74 4d                	je     840bf45 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbb>
 840bef8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840beff:	00 
 840bf00:	c7 44 24 08 dc 26 00 	movl   $0x26dc,0x8(%esp)
 840bf07:	00 
 840bf08:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840bf0f:	08 
 840bf10:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 840bf16:	89 04 24             	mov    %eax,(%esp)
 840bf19:	e8 fa 37 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840bf1e:	8b 45 08             	mov    0x8(%ebp),%eax
 840bf21:	89 44 24 08          	mov    %eax,0x8(%esp)
 840bf25:	c7 44 24 04 bc 61 c4 	movl   $0x8c461bc,0x4(%esp)
 840bf2c:	08 
 840bf2d:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 840bf33:	89 04 24             	mov    %eax,(%esp)
 840bf36:	e8 4d 38 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840bf3b:	b8 00 00 00 00       	mov    $0x0,%eax
 840bf40:	e9 25 0b 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840bf45:	c7 85 c8 fe ff ff 00 	movl   $0x0,-0x138(%ebp)
 840bf4c:	00 00 00 
 840bf4f:	c7 85 c4 fe ff ff 00 	movl   $0x0,-0x13c(%ebp)
 840bf56:	00 00 00 
 840bf59:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 840bf5f:	ba 19 00 00 00       	mov    $0x19,%edx
 840bf64:	b9 00 00 00 00       	mov    $0x0,%ecx
 840bf69:	89 c3                	mov    %eax,%ebx
 840bf6b:	83 e3 01             	and    $0x1,%ebx
 840bf6e:	85 db                	test   %ebx,%ebx
 840bf70:	74 08                	je     840bf7a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xf0>
 840bf72:	88 08                	mov    %cl,(%eax)
 840bf74:	83 c0 01             	add    $0x1,%eax
 840bf77:	83 ea 01             	sub    $0x1,%edx
 840bf7a:	89 c3                	mov    %eax,%ebx
 840bf7c:	83 e3 02             	and    $0x2,%ebx
 840bf7f:	85 db                	test   %ebx,%ebx
 840bf81:	74 09                	je     840bf8c <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x102>
 840bf83:	66 89 08             	mov    %cx,(%eax)
 840bf86:	83 c0 02             	add    $0x2,%eax
 840bf89:	83 ea 02             	sub    $0x2,%edx
 840bf8c:	89 d6                	mov    %edx,%esi
 840bf8e:	83 e6 fc             	and    $0xfffffffc,%esi
 840bf91:	bb 00 00 00 00       	mov    $0x0,%ebx
 840bf96:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 840bf99:	83 c3 04             	add    $0x4,%ebx
 840bf9c:	39 f3                	cmp    %esi,%ebx
 840bf9e:	72 f6                	jb     840bf96 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x10c>
 840bfa0:	01 d8                	add    %ebx,%eax
 840bfa2:	89 d3                	mov    %edx,%ebx
 840bfa4:	83 e3 02             	and    $0x2,%ebx
 840bfa7:	85 db                	test   %ebx,%ebx
 840bfa9:	74 06                	je     840bfb1 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x127>
 840bfab:	66 89 08             	mov    %cx,(%eax)
 840bfae:	83 c0 02             	add    $0x2,%eax
 840bfb1:	83 e2 01             	and    $0x1,%edx
 840bfb4:	85 d2                	test   %edx,%edx
 840bfb6:	74 05                	je     840bfbd <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x133>
 840bfb8:	88 08                	mov    %cl,(%eax)
 840bfba:	83 c0 01             	add    $0x1,%eax
 840bfbd:	c7 85 a4 fe ff ff 00 	movl   $0x0,-0x15c(%ebp)
 840bfc4:	00 00 00 
 840bfc7:	c7 85 a0 fe ff ff 00 	movl   $0x0,-0x160(%ebp)
 840bfce:	00 00 00 
 840bfd1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840bfd4:	89 04 24             	mov    %eax,(%esp)
 840bfd7:	e8 90 63 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840bfdc:	89 c2                	mov    %eax,%edx
 840bfde:	8b 45 18             	mov    0x18(%ebp),%eax
 840bfe1:	89 10                	mov    %edx,(%eax)
 840bfe3:	c7 85 9c fe ff ff 00 	movl   $0x0,-0x164(%ebp)
 840bfea:	00 00 00 
 840bfed:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 840bff4:	e9 53 0a 00 00       	jmp    840ca4c <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbc2>
 840bff9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840bffc:	89 04 24             	mov    %eax,(%esp)
 840bfff:	e8 b8 84 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840c004:	88 45 e7             	mov    %al,-0x19(%ebp)
 840c007:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840c00b:	83 f0 01             	xor    $0x1,%eax
 840c00e:	84 c0                	test   %al,%al
 840c010:	74 4f                	je     840c061 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x1d7>
 840c012:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c019:	00 
 840c01a:	c7 44 24 08 f3 26 00 	movl   $0x26f3,0x8(%esp)
 840c021:	00 
 840c022:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c029:	08 
 840c02a:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 840c030:	89 04 24             	mov    %eax,(%esp)
 840c033:	e8 e0 36 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c038:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c03b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840c03f:	8b 45 08             	mov    0x8(%ebp),%eax
 840c042:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c046:	c7 44 24 04 f8 61 c4 	movl   $0x8c461f8,0x4(%esp)
 840c04d:	08 
 840c04e:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 840c054:	89 04 24             	mov    %eax,(%esp)
 840c057:	e8 2c 37 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c05c:	e9 04 0a 00 00       	jmp    840ca65 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbdb>
 840c061:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 840c067:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c06b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840c072:	00 
 840c073:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c076:	89 04 24             	mov    %eax,(%esp)
 840c079:	e8 ae a8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c07e:	88 45 e7             	mov    %al,-0x19(%ebp)
 840c081:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840c085:	83 f0 01             	xor    $0x1,%eax
 840c088:	84 c0                	test   %al,%al
 840c08a:	74 4d                	je     840c0d9 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x24f>
 840c08c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c093:	00 
 840c094:	c7 44 24 08 fa 26 00 	movl   $0x26fa,0x8(%esp)
 840c09b:	00 
 840c09c:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c0a3:	08 
 840c0a4:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 840c0aa:	89 04 24             	mov    %eax,(%esp)
 840c0ad:	e8 66 36 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c0b2:	8b 45 08             	mov    0x8(%ebp),%eax
 840c0b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c0b9:	c7 44 24 04 38 62 c4 	movl   $0x8c46238,0x4(%esp)
 840c0c0:	08 
 840c0c1:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 840c0c7:	89 04 24             	mov    %eax,(%esp)
 840c0ca:	e8 b9 36 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c0cf:	b8 00 00 00 00       	mov    $0x0,%eax
 840c0d4:	e9 91 09 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c0d9:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 840c0df:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c0e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840c0ea:	00 
 840c0eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c0ee:	89 04 24             	mov    %eax,(%esp)
 840c0f1:	e8 36 a8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c0f6:	88 45 e7             	mov    %al,-0x19(%ebp)
 840c0f9:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840c0fd:	83 f0 01             	xor    $0x1,%eax
 840c100:	84 c0                	test   %al,%al
 840c102:	74 4d                	je     840c151 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x2c7>
 840c104:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c10b:	00 
 840c10c:	c7 44 24 08 01 27 00 	movl   $0x2701,0x8(%esp)
 840c113:	00 
 840c114:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c11b:	08 
 840c11c:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 840c122:	89 04 24             	mov    %eax,(%esp)
 840c125:	e8 ee 35 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c12a:	8b 45 08             	mov    0x8(%ebp),%eax
 840c12d:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c131:	c7 44 24 04 78 62 c4 	movl   $0x8c46278,0x4(%esp)
 840c138:	08 
 840c139:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 840c13f:	89 04 24             	mov    %eax,(%esp)
 840c142:	e8 41 36 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c147:	b8 00 00 00 00       	mov    $0x0,%eax
 840c14c:	e9 19 09 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c151:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 840c157:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c15b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840c162:	00 
 840c163:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c166:	89 04 24             	mov    %eax,(%esp)
 840c169:	e8 84 61 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840c16e:	88 45 e7             	mov    %al,-0x19(%ebp)
 840c171:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840c175:	83 f0 01             	xor    $0x1,%eax
 840c178:	84 c0                	test   %al,%al
 840c17a:	74 4d                	je     840c1c9 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x33f>
 840c17c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c183:	00 
 840c184:	c7 44 24 08 08 27 00 	movl   $0x2708,0x8(%esp)
 840c18b:	00 
 840c18c:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c193:	08 
 840c194:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 840c19a:	89 04 24             	mov    %eax,(%esp)
 840c19d:	e8 76 35 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 840c1a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c1a9:	c7 44 24 04 b8 62 c4 	movl   $0x8c462b8,0x4(%esp)
 840c1b0:	08 
 840c1b1:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 840c1b7:	89 04 24             	mov    %eax,(%esp)
 840c1ba:	e8 c9 35 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c1bf:	b8 00 00 00 00       	mov    $0x0,%eax
 840c1c4:	e9 a1 08 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c1c9:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 840c1cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c1d3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840c1da:	00 
 840c1db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c1de:	89 04 24             	mov    %eax,(%esp)
 840c1e1:	e8 46 a7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c1e6:	88 45 e7             	mov    %al,-0x19(%ebp)
 840c1e9:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840c1ed:	83 f0 01             	xor    $0x1,%eax
 840c1f0:	84 c0                	test   %al,%al
 840c1f2:	74 4d                	je     840c241 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x3b7>
 840c1f4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c1fb:	00 
 840c1fc:	c7 44 24 08 0f 27 00 	movl   $0x270f,0x8(%esp)
 840c203:	00 
 840c204:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c20b:	08 
 840c20c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 840c212:	89 04 24             	mov    %eax,(%esp)
 840c215:	e8 fe 34 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c21a:	8b 45 08             	mov    0x8(%ebp),%eax
 840c21d:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c221:	c7 44 24 04 f8 62 c4 	movl   $0x8c462f8,0x4(%esp)
 840c228:	08 
 840c229:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 840c22f:	89 04 24             	mov    %eax,(%esp)
 840c232:	e8 51 35 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c237:	b8 00 00 00 00       	mov    $0x0,%eax
 840c23c:	e9 29 08 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c241:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 840c248:	00 
 840c249:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 840c24f:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c253:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 840c25a:	00 
 840c25b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c25e:	89 04 24             	mov    %eax,(%esp)
 840c261:	e8 84 0b ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 840c266:	83 f0 01             	xor    $0x1,%eax
 840c269:	84 c0                	test   %al,%al
 840c26b:	74 4d                	je     840c2ba <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x430>
 840c26d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c274:	00 
 840c275:	c7 44 24 08 27 27 00 	movl   $0x2727,0x8(%esp)
 840c27c:	00 
 840c27d:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c284:	08 
 840c285:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 840c28b:	89 04 24             	mov    %eax,(%esp)
 840c28e:	e8 85 34 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c293:	8b 45 08             	mov    0x8(%ebp),%eax
 840c296:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c29a:	c7 44 24 04 38 63 c4 	movl   $0x8c46338,0x4(%esp)
 840c2a1:	08 
 840c2a2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 840c2a8:	89 04 24             	mov    %eax,(%esp)
 840c2ab:	e8 d8 34 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c2b0:	b8 00 00 00 00       	mov    $0x0,%eax
 840c2b5:	e9 b0 07 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c2ba:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 840c2c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c2c4:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 840c2cb:	00 
 840c2cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c2cf:	89 04 24             	mov    %eax,(%esp)
 840c2d2:	e8 55 a6 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c2d7:	83 f0 01             	xor    $0x1,%eax
 840c2da:	84 c0                	test   %al,%al
 840c2dc:	74 4d                	je     840c32b <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x4a1>
 840c2de:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c2e5:	00 
 840c2e6:	c7 44 24 08 2e 27 00 	movl   $0x272e,0x8(%esp)
 840c2ed:	00 
 840c2ee:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c2f5:	08 
 840c2f6:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 840c2fc:	89 04 24             	mov    %eax,(%esp)
 840c2ff:	e8 14 34 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c304:	8b 45 08             	mov    0x8(%ebp),%eax
 840c307:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c30b:	c7 44 24 04 78 63 c4 	movl   $0x8c46378,0x4(%esp)
 840c312:	08 
 840c313:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 840c319:	89 04 24             	mov    %eax,(%esp)
 840c31c:	e8 67 34 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c321:	b8 00 00 00 00       	mov    $0x0,%eax
 840c326:	e9 3f 07 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c32b:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 840c331:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c335:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 840c33c:	00 
 840c33d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c340:	89 04 24             	mov    %eax,(%esp)
 840c343:	e8 e4 a5 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c348:	83 f0 01             	xor    $0x1,%eax
 840c34b:	84 c0                	test   %al,%al
 840c34d:	74 4d                	je     840c39c <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x512>
 840c34f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c356:	00 
 840c357:	c7 44 24 08 34 27 00 	movl   $0x2734,0x8(%esp)
 840c35e:	00 
 840c35f:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c366:	08 
 840c367:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 840c36d:	89 04 24             	mov    %eax,(%esp)
 840c370:	e8 a3 33 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c375:	8b 45 08             	mov    0x8(%ebp),%eax
 840c378:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c37c:	c7 44 24 04 b8 63 c4 	movl   $0x8c463b8,0x4(%esp)
 840c383:	08 
 840c384:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 840c38a:	89 04 24             	mov    %eax,(%esp)
 840c38d:	e8 f6 33 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c392:	b8 00 00 00 00       	mov    $0x0,%eax
 840c397:	e9 ce 06 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c39c:	c7 45 f0 07 00 00 00 	movl   $0x7,-0x10(%ebp)
 840c3a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c3a6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c3aa:	8d 95 a0 fe ff ff    	lea    -0x160(%ebp),%edx
 840c3b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c3b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c3b8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c3bb:	89 04 24             	mov    %eax,(%esp)
 840c3be:	e8 69 a5 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840c3c3:	83 f0 01             	xor    $0x1,%eax
 840c3c6:	84 c0                	test   %al,%al
 840c3c8:	74 4d                	je     840c417 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x58d>
 840c3ca:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c3d1:	00 
 840c3d2:	c7 44 24 08 3b 27 00 	movl   $0x273b,0x8(%esp)
 840c3d9:	00 
 840c3da:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c3e1:	08 
 840c3e2:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 840c3e8:	89 04 24             	mov    %eax,(%esp)
 840c3eb:	e8 28 33 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c3f0:	8b 45 08             	mov    0x8(%ebp),%eax
 840c3f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c3f7:	c7 44 24 04 b8 63 c4 	movl   $0x8c463b8,0x4(%esp)
 840c3fe:	08 
 840c3ff:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 840c405:	89 04 24             	mov    %eax,(%esp)
 840c408:	e8 7b 33 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c40d:	b8 00 00 00 00       	mov    $0x0,%eax
 840c412:	e9 53 06 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c417:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 840c41d:	89 04 24             	mov    %eax,(%esp)
 840c420:	e8 c3 42 d4 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 840c425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c428:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c42c:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 840c433:	00 
 840c434:	8d 95 7e fe ff ff    	lea    -0x182(%ebp),%edx
 840c43a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c43e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c442:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c445:	89 04 24             	mov    %eax,(%esp)
 840c448:	e8 cd 8e d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840c44d:	83 f0 01             	xor    $0x1,%eax
 840c450:	84 c0                	test   %al,%al
 840c452:	74 4d                	je     840c4a1 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x617>
 840c454:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c45b:	00 
 840c45c:	c7 44 24 08 42 27 00 	movl   $0x2742,0x8(%esp)
 840c463:	00 
 840c464:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c46b:	08 
 840c46c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 840c472:	89 04 24             	mov    %eax,(%esp)
 840c475:	e8 9e 32 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c47a:	8b 45 08             	mov    0x8(%ebp),%eax
 840c47d:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c481:	c7 44 24 04 b8 63 c4 	movl   $0x8c463b8,0x4(%esp)
 840c488:	08 
 840c489:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 840c48f:	89 04 24             	mov    %eax,(%esp)
 840c492:	e8 f1 32 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c497:	b8 00 00 00 00       	mov    $0x0,%eax
 840c49c:	e9 c9 05 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c4a1:	c6 85 7d fe ff ff 00 	movb   $0x0,-0x183(%ebp)
 840c4a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c4ab:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c4af:	8d 95 7d fe ff ff    	lea    -0x183(%ebp),%edx
 840c4b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c4b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c4bd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c4c0:	89 04 24             	mov    %eax,(%esp)
 840c4c3:	e8 f2 19 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 840c4c8:	83 f0 01             	xor    $0x1,%eax
 840c4cb:	84 c0                	test   %al,%al
 840c4cd:	74 47                	je     840c516 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x68c>
 840c4cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c4d6:	00 
 840c4d7:	c7 44 24 08 49 27 00 	movl   $0x2749,0x8(%esp)
 840c4de:	00 
 840c4df:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c4e6:	08 
 840c4e7:	8d 45 84             	lea    -0x7c(%ebp),%eax
 840c4ea:	89 04 24             	mov    %eax,(%esp)
 840c4ed:	e8 26 32 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c4f2:	8b 45 08             	mov    0x8(%ebp),%eax
 840c4f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c4f9:	c7 44 24 04 f8 63 c4 	movl   $0x8c463f8,0x4(%esp)
 840c500:	08 
 840c501:	8d 45 84             	lea    -0x7c(%ebp),%eax
 840c504:	89 04 24             	mov    %eax,(%esp)
 840c507:	e8 7c 32 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c50c:	b8 00 00 00 00       	mov    $0x0,%eax
 840c511:	e9 54 05 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c516:	c7 85 78 fe ff ff 00 	movl   $0x0,-0x188(%ebp)
 840c51d:	00 00 00 
 840c520:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c523:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c527:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 840c52d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c531:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c535:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c538:	89 04 24             	mov    %eax,(%esp)
 840c53b:	e8 b2 5d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840c540:	83 f0 01             	xor    $0x1,%eax
 840c543:	84 c0                	test   %al,%al
 840c545:	74 51                	je     840c598 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x70e>
 840c547:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c54a:	8d 58 ff             	lea    -0x1(%eax),%ebx
 840c54d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c554:	00 
 840c555:	c7 44 24 08 5c 27 00 	movl   $0x275c,0x8(%esp)
 840c55c:	00 
 840c55d:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c564:	08 
 840c565:	8d 45 94             	lea    -0x6c(%ebp),%eax
 840c568:	89 04 24             	mov    %eax,(%esp)
 840c56b:	e8 a8 31 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c570:	8b 45 08             	mov    0x8(%ebp),%eax
 840c573:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840c577:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840c57b:	c7 44 24 04 3c 64 c4 	movl   $0x8c4643c,0x4(%esp)
 840c582:	08 
 840c583:	8d 45 94             	lea    -0x6c(%ebp),%eax
 840c586:	89 04 24             	mov    %eax,(%esp)
 840c589:	e8 fa 31 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c58e:	b8 00 00 00 00       	mov    $0x0,%eax
 840c593:	e9 d2 04 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c598:	c7 85 74 fe ff ff 00 	movl   $0x0,-0x18c(%ebp)
 840c59f:	00 00 00 
 840c5a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c5a5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c5a9:	8d 95 74 fe ff ff    	lea    -0x18c(%ebp),%edx
 840c5af:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c5b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c5b7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c5ba:	89 04 24             	mov    %eax,(%esp)
 840c5bd:	e8 30 5d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840c5c2:	83 f0 01             	xor    $0x1,%eax
 840c5c5:	84 c0                	test   %al,%al
 840c5c7:	74 51                	je     840c61a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x790>
 840c5c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c5cc:	8d 58 ff             	lea    -0x1(%eax),%ebx
 840c5cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c5d6:	00 
 840c5d7:	c7 44 24 08 62 27 00 	movl   $0x2762,0x8(%esp)
 840c5de:	00 
 840c5df:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c5e6:	08 
 840c5e7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 840c5ea:	89 04 24             	mov    %eax,(%esp)
 840c5ed:	e8 26 31 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c5f2:	8b 45 08             	mov    0x8(%ebp),%eax
 840c5f5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840c5f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840c5fd:	c7 44 24 04 3c 64 c4 	movl   $0x8c4643c,0x4(%esp)
 840c604:	08 
 840c605:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 840c608:	89 04 24             	mov    %eax,(%esp)
 840c60b:	e8 78 31 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c610:	b8 00 00 00 00       	mov    $0x0,%eax
 840c615:	e9 50 04 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c61a:	66 c7 85 72 fe ff ff 	movw   $0x0,-0x18e(%ebp)
 840c621:	00 00 
 840c623:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c626:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c62a:	8d 95 72 fe ff ff    	lea    -0x18e(%ebp),%edx
 840c630:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c634:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c638:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c63b:	89 04 24             	mov    %eax,(%esp)
 840c63e:	e8 a9 17 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840c643:	83 f0 01             	xor    $0x1,%eax
 840c646:	84 c0                	test   %al,%al
 840c648:	74 3d                	je     840c687 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x7fd>
 840c64a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c651:	00 
 840c652:	c7 44 24 08 6a 27 00 	movl   $0x276a,0x8(%esp)
 840c659:	00 
 840c65a:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c661:	08 
 840c662:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 840c665:	89 04 24             	mov    %eax,(%esp)
 840c668:	e8 ab 30 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c66d:	8b 45 08             	mov    0x8(%ebp),%eax
 840c670:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c674:	c7 44 24 04 7c 64 c4 	movl   $0x8c4647c,0x4(%esp)
 840c67b:	08 
 840c67c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 840c67f:	89 04 24             	mov    %eax,(%esp)
 840c682:	e8 01 31 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c687:	66 c7 85 70 fe ff ff 	movw   $0x0,-0x190(%ebp)
 840c68e:	00 00 
 840c690:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c693:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c697:	8d 95 70 fe ff ff    	lea    -0x190(%ebp),%edx
 840c69d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c6a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c6a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c6a8:	89 04 24             	mov    %eax,(%esp)
 840c6ab:	e8 3c 17 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840c6b0:	83 f0 01             	xor    $0x1,%eax
 840c6b3:	84 c0                	test   %al,%al
 840c6b5:	74 47                	je     840c6fe <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x874>
 840c6b7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c6be:	00 
 840c6bf:	c7 44 24 08 71 27 00 	movl   $0x2771,0x8(%esp)
 840c6c6:	00 
 840c6c7:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c6ce:	08 
 840c6cf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 840c6d2:	89 04 24             	mov    %eax,(%esp)
 840c6d5:	e8 3e 30 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c6da:	8b 45 08             	mov    0x8(%ebp),%eax
 840c6dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c6e1:	c7 44 24 04 7c 64 c4 	movl   $0x8c4647c,0x4(%esp)
 840c6e8:	08 
 840c6e9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 840c6ec:	89 04 24             	mov    %eax,(%esp)
 840c6ef:	e8 94 30 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c6f4:	b8 00 00 00 00       	mov    $0x0,%eax
 840c6f9:	e9 6c 03 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c6fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c701:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c704:	03 45 0c             	add    0xc(%ebp),%eax
 840c707:	0f b7 95 72 fe ff ff 	movzwl -0x18e(%ebp),%edx
 840c70e:	66 89 50 47          	mov    %dx,0x47(%eax)
 840c712:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c715:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c718:	03 45 0c             	add    0xc(%ebp),%eax
 840c71b:	0f b7 95 70 fe ff ff 	movzwl -0x190(%ebp),%edx
 840c722:	66 89 50 49          	mov    %dx,0x49(%eax)
 840c726:	c6 85 6f fe ff ff 00 	movb   $0x0,-0x191(%ebp)
 840c72d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840c730:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840c734:	8d 95 6f fe ff ff    	lea    -0x191(%ebp),%edx
 840c73a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840c73e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c742:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840c745:	89 04 24             	mov    %eax,(%esp)
 840c748:	e8 07 17 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 840c74d:	83 f0 01             	xor    $0x1,%eax
 840c750:	84 c0                	test   %al,%al
 840c752:	74 47                	je     840c79b <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x911>
 840c754:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840c75b:	00 
 840c75c:	c7 44 24 08 7d 27 00 	movl   $0x277d,0x8(%esp)
 840c763:	00 
 840c764:	c7 44 24 04 c0 d1 c5 	movl   $0x8c5d1c0,0x4(%esp)
 840c76b:	08 
 840c76c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840c76f:	89 04 24             	mov    %eax,(%esp)
 840c772:	e8 a1 2f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840c777:	8b 45 08             	mov    0x8(%ebp),%eax
 840c77a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840c77e:	c7 44 24 04 c0 64 c4 	movl   $0x8c464c0,0x4(%esp)
 840c785:	08 
 840c786:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840c789:	89 04 24             	mov    %eax,(%esp)
 840c78c:	e8 f7 2f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840c791:	b8 00 00 00 00       	mov    $0x0,%eax
 840c796:	e9 cf 02 00 00       	jmp    840ca6a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbe0>
 840c79b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c79e:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c7a1:	03 45 0c             	add    0xc(%ebp),%eax
 840c7a4:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 840c7aa:	89 50 04             	mov    %edx,0x4(%eax)
 840c7ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c7b0:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c7b3:	03 45 0c             	add    0xc(%ebp),%eax
 840c7b6:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 840c7bc:	89 10                	mov    %edx,(%eax)
 840c7be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c7c1:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c7c4:	03 45 0c             	add    0xc(%ebp),%eax
 840c7c7:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 840c7cd:	89 50 08             	mov    %edx,0x8(%eax)
 840c7d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c7d3:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c7d6:	03 45 0c             	add    0xc(%ebp),%eax
 840c7d9:	8d 50 0c             	lea    0xc(%eax),%edx
 840c7dc:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 840c7e3:	00 
 840c7e4:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 840c7ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c7ee:	89 14 24             	mov    %edx,(%esp)
 840c7f1:	e8 da 10 c7 ff       	call   807d8d0 <strncpy@plt>
 840c7f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c7f9:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c7fc:	03 45 0c             	add    0xc(%ebp),%eax
 840c7ff:	8b 95 a0 fe ff ff    	mov    -0x160(%ebp),%edx
 840c805:	89 50 25             	mov    %edx,0x25(%eax)
 840c808:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840c80b:	6b c0 4b             	imul   $0x4b,%eax,%eax
 840c80e:	03 45 0c             	add    0xc(%ebp),%eax
 840c811:	8b 95 7e fe ff ff    	mov    -0x182(%ebp),%edx
 840c817:	89 50 29             	mov    %edx,0x29(%eax)
 840c81a:	8b 95 82 fe ff ff    	mov    -0x17e(%ebp),%edx
 840c820:	89 50 2d             	mov    %edx,0x2d(%eax)
 840c823:	8b 95 86 fe ff ff    	mov    -0x17a(%ebp),%edx
 840c829:	89 50 31             	mov    %edx,0x31(%eax)
 840c82c:	8b 95 8a fe ff ff    	mov    -0x176(%ebp),%edx
 840c832:	89 50 35             	mov    %edx,0x35(%eax)
 840c835:	8b 95 8e fe ff ff    	mov    -0x172(%ebp),%edx
 840c83b:	89 50 39             	mov    %edx,0x39(%eax)
 840c83e:	8b 95 92 fe ff ff    	mov    -0x16e(%ebp),%edx
 840c844:	89 50 3d             	mov    %edx,0x3d(%eax)
 840c847:	8b 95 96 fe ff ff    	mov    -0x16a(%ebp),%edx
 840c84d:	89 50 41             	mov    %edx,0x41(%eax)
 840c850:	0f b7 95 9a fe ff ff 	movzwl -0x166(%ebp),%edx
 840c857:	66 89 50 45          	mov    %dx,0x45(%eax)
 840c85b:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c861:	83 f8 72             	cmp    $0x72,%eax
 840c864:	0f 8f d7 01 00 00    	jg     840ca41 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbb7>
 840c86a:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c870:	83 f8 09             	cmp    $0x9,%eax
 840c873:	0f 8e dd 00 00 00    	jle    840c956 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xacc>
 840c879:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c87f:	83 e8 0a             	sub    $0xa,%eax
 840c882:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840c885:	83 7d f4 68          	cmpl   $0x68,-0xc(%ebp)
 840c889:	0f 8f b5 01 00 00    	jg     840ca44 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbba>
 840c88f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c892:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c895:	03 45 10             	add    0x10(%ebp),%eax
 840c898:	c6 40 01 08          	movb   $0x8,0x1(%eax)
 840c89c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c89f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c8a2:	03 45 10             	add    0x10(%ebp),%eax
 840c8a5:	8b 95 9c fe ff ff    	mov    -0x164(%ebp),%edx
 840c8ab:	66 89 50 0b          	mov    %dx,0xb(%eax)
 840c8af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c8b2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c8b5:	03 45 10             	add    0x10(%ebp),%eax
 840c8b8:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 840c8be:	89 50 02             	mov    %edx,0x2(%eax)
 840c8c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c8c4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c8c7:	03 45 10             	add    0x10(%ebp),%eax
 840c8ca:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 840c8d0:	89 50 07             	mov    %edx,0x7(%eax)
 840c8d3:	0f b6 85 7d fe ff ff 	movzbl -0x183(%ebp),%eax
 840c8da:	0f b6 c0             	movzbl %al,%eax
 840c8dd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840c8e0:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840c8e3:	03 55 10             	add    0x10(%ebp),%edx
 840c8e6:	83 c2 11             	add    $0x11,%edx
 840c8e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c8ed:	89 14 24             	mov    %edx,(%esp)
 840c8f0:	e8 83 0b 04 00       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 840c8f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c8f8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c8fb:	03 45 10             	add    0x10(%ebp),%eax
 840c8fe:	8b 95 78 fe ff ff    	mov    -0x188(%ebp),%edx
 840c904:	66 89 50 0d          	mov    %dx,0xd(%eax)
 840c908:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c90b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c90e:	03 45 10             	add    0x10(%ebp),%eax
 840c911:	8b 95 74 fe ff ff    	mov    -0x18c(%ebp),%edx
 840c917:	66 89 50 0f          	mov    %dx,0xf(%eax)
 840c91b:	0f b6 85 6f fe ff ff 	movzbl -0x191(%ebp),%eax
 840c922:	84 c0                	test   %al,%al
 840c924:	74 18                	je     840c93e <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xab4>
 840c926:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c929:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c92c:	03 45 10             	add    0x10(%ebp),%eax
 840c92f:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 840c933:	83 ca 20             	or     $0x20,%edx
 840c936:	88 50 33             	mov    %dl,0x33(%eax)
 840c939:	e9 0a 01 00 00       	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840c93e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840c941:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c944:	03 45 10             	add    0x10(%ebp),%eax
 840c947:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 840c94b:	83 e2 df             	and    $0xffffffdf,%edx
 840c94e:	88 50 33             	mov    %dl,0x33(%eax)
 840c951:	e9 f2 00 00 00       	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840c956:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c95c:	83 f8 09             	cmp    $0x9,%eax
 840c95f:	0f 8f e2 00 00 00    	jg     840ca47 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbd>
 840c965:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c96b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c96e:	03 45 14             	add    0x14(%ebp),%eax
 840c971:	c6 40 01 08          	movb   $0x8,0x1(%eax)
 840c975:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c97b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c97e:	03 45 14             	add    0x14(%ebp),%eax
 840c981:	8b 95 9c fe ff ff    	mov    -0x164(%ebp),%edx
 840c987:	66 89 50 0b          	mov    %dx,0xb(%eax)
 840c98b:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c991:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c994:	03 45 14             	add    0x14(%ebp),%eax
 840c997:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 840c99d:	89 50 02             	mov    %edx,0x2(%eax)
 840c9a0:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c9a6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c9a9:	03 45 14             	add    0x14(%ebp),%eax
 840c9ac:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 840c9b2:	89 50 07             	mov    %edx,0x7(%eax)
 840c9b5:	0f b6 85 7d fe ff ff 	movzbl -0x183(%ebp),%eax
 840c9bc:	0f b6 c0             	movzbl %al,%eax
 840c9bf:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 840c9c5:	6b d2 3d             	imul   $0x3d,%edx,%edx
 840c9c8:	03 55 14             	add    0x14(%ebp),%edx
 840c9cb:	83 c2 11             	add    $0x11,%edx
 840c9ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 840c9d2:	89 14 24             	mov    %edx,(%esp)
 840c9d5:	e8 9e 0a 04 00       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 840c9da:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c9e0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c9e3:	03 45 14             	add    0x14(%ebp),%eax
 840c9e6:	8b 95 78 fe ff ff    	mov    -0x188(%ebp),%edx
 840c9ec:	66 89 50 0d          	mov    %dx,0xd(%eax)
 840c9f0:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840c9f6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840c9f9:	03 45 14             	add    0x14(%ebp),%eax
 840c9fc:	8b 95 74 fe ff ff    	mov    -0x18c(%ebp),%edx
 840ca02:	66 89 50 0f          	mov    %dx,0xf(%eax)
 840ca06:	0f b6 85 6f fe ff ff 	movzbl -0x191(%ebp),%eax
 840ca0d:	84 c0                	test   %al,%al
 840ca0f:	74 18                	je     840ca29 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xb9f>
 840ca11:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840ca17:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840ca1a:	03 45 14             	add    0x14(%ebp),%eax
 840ca1d:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 840ca21:	83 ca 20             	or     $0x20,%edx
 840ca24:	88 50 33             	mov    %dl,0x33(%eax)
 840ca27:	eb 1f                	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840ca29:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 840ca2f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840ca32:	03 45 14             	add    0x14(%ebp),%eax
 840ca35:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 840ca39:	83 e2 df             	and    $0xffffffdf,%edx
 840ca3c:	88 50 33             	mov    %dl,0x33(%eax)
 840ca3f:	eb 07                	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840ca41:	90                   	nop
 840ca42:	eb 04                	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840ca44:	90                   	nop
 840ca45:	eb 01                	jmp    840ca48 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0xbbe>
 840ca47:	90                   	nop
 840ca48:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ca4c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ca4f:	89 04 24             	mov    %eax,(%esp)
 840ca52:	e8 15 59 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840ca57:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 840ca5a:	0f 9f c0             	setg   %al
 840ca5d:	84 c0                	test   %al,%al
 840ca5f:	0f 85 94 f5 ff ff    	jne    840bff9 <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri+0x16f>
 840ca65:	b8 01 00 00 00       	mov    $0x1,%eax
 840ca6a:	81 c4 a0 01 00 00    	add    $0x1a0,%esp
 840ca70:	5b                   	pop    %ebx
 840ca71:	5e                   	pop    %esi
 840ca72:	5d                   	pop    %ebp
 840ca73:	c3                   	ret

```

```c
// DB_LoadInventory::_GetUserAvatar @ 0x840be8a

/* DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
    */

undefined4
DB_LoadInventory::_GetUserAvatar
          (uint param_1,AvatarDetailInfo *param_2,Inven_Item *param_3,Inven_Item *param_4,
          int *param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_195;
  short local_194;
  short local_192;
  uint local_190 [2];
  uchar local_187;
  undefined4 local_186;
  undefined4 local_182;
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined4 local_172;
  undefined4 local_16e;
  undefined2 local_16a;
  int local_168;
  int local_164;
  int local_160;
  char local_159;
  char local_158 [24];
  int local_140;
  uint local_13c;
  int local_138;
  int local_134;
  cMyTrace local_130 [16];
  cMyTrace local_120 [16];
  cMyTrace local_110 [16];
  cMyTrace local_100 [16];
  cMyTrace local_f0 [16];
  cMyTrace local_e0 [16];
  cMyTrace local_d0 [16];
  cMyTrace local_c0 [16];
  cMyTrace local_b0 [16];
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  MySQL *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_1c,
                   "seLect slot,it_id,unix_timestamp(expire_date),ability_no,ipg_agency_no,unix_timestamp(reg_date),ui_id,clear_avatar_id,jewel_socket,item_lock_key, hidden_option, emblem_endurance, color1, color2, trade_restrict from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                   ,param_1,0x73);
  local_1d = MySQL::exec(local_1c,true);
  if (local_1d == '\x01') {
    local_13c = 0;
    local_140 = 0;
    pcVar4 = &local_159;
    uVar6 = 0x19;
    bVar8 = ((uint)pcVar4 & 1) != 0;
    if (bVar8) {
      local_159 = '\0';
      pcVar4 = local_158;
      uVar6 = 0x18;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar6 = uVar6 - 2;
    }
    uVar7 = 0;
    local_1d = '\x01';
    do {
      pcVar1 = pcVar4 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar6 & 0xfffffffc));
    pcVar4 = pcVar4 + uVar7;
    if ((uVar6 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar8) {
      *pcVar4 = '\0';
    }
    local_160 = 0;
    local_164 = 0;
    iVar5 = MySQL::get_n_rows(local_1c);
    *param_5 = iVar5;
    local_168 = 0;
    local_18 = 0;
    while (iVar5 = MySQL::get_n_rows(local_1c), local_18 < iVar5) {
      local_1d = MySQL::fetch(local_1c);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_120,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x26f3,5);
        cMyTrace::operator()
                  (local_120,"DB_LoadInventory::GetUserAvatar, fetch() ERROR charac_no=%u,%d",
                   param_1,local_18);
        break;
      }
      local_1d = MySQL::get_int(local_1c,0,&local_134);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_110,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x26fa,5);
        cMyTrace::operator()
                  (local_110,"DB_LoadInventory::GetUserAvatar, get_int(0) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_int(local_1c,1,&local_138);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_100,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2701,5);
        cMyTrace::operator()
                  (local_100,"DB_LoadInventory::GetUserAvatar, get_int(1) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_uint(local_1c,2,&local_13c);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_f0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2708,5);
        cMyTrace::operator()
                  (local_f0,"DB_LoadInventory::GetUserAvatar, get_uint(2) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_int(local_1c,3,&local_168);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_e0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,9999,5);
        cMyTrace::operator()
                  (local_e0,"DB_LoadInventory::GetUserAvatar, get_int(3) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_str(local_1c,4,&local_159,0x18);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_d0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2727,5);
        cMyTrace::operator()
                  (local_d0,"DB_LoadInventory::GetUserAvatar, get_int(4) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,5,&local_140);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_c0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x272e,5);
        cMyTrace::operator()
                  (local_c0,"DB_LoadInventory::GetUserAvatar, get_int(5) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,6,&local_160);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_b0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2734,5);
        cMyTrace::operator()
                  (local_b0,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      local_14 = 8;
      cVar2 = MySQL::get_int(local_1c,7,&local_164);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_a0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x273b,5);
        cMyTrace::operator()
                  (local_a0,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_186);
      iVar5 = local_14;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_binary(local_1c,iVar5,&local_186,0x1e);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_90,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2742,5);
        cMyTrace::operator()
                  (local_90,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      local_187 = '\0';
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_ubyte(local_1c,iVar5,&local_187);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_80,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2749,5);
        cMyTrace::operator()
                  (local_80,"DB_LoadInventory::GetUserAvatar, get_ubyte(8) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_190[1] = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,iVar5,local_190 + 1);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        iVar5 = local_14 + -1;
        cMyTrace::cMyTrace(local_70,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x275c,5);
        cMyTrace::operator()
                  (local_70,"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",iVar5,
                   param_1);
        return 0;
      }
      local_190[0] = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,iVar5,local_190);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        iVar5 = local_14 + -1;
        cMyTrace::cMyTrace(local_60,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2762,5);
        cMyTrace::operator()
                  (local_60,"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",iVar5,
                   param_1);
        return 0;
      }
      local_192 = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_short(local_1c,iVar5,&local_192);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_50,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x276a,5);
        cMyTrace::operator()
                  (local_50,"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",
                   param_1);
      }
      iVar5 = local_14;
      local_194 = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_short(local_1c,iVar5,&local_194);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_40,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2771,5);
        cMyTrace::operator()
                  (local_40,"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      *(short *)(param_2 + local_18 * 0x4b + 0x47) = local_192;
      *(short *)(param_2 + local_18 * 0x4b + 0x49) = local_194;
      local_195 = '\0';
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_byte(local_1c,iVar5,&local_195);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_30,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x277d,5);
        cMyTrace::operator()
                  (local_30,"DB_LoadInventory::GetUserAvatar, get_byte(11) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      *(uint *)(param_2 + local_18 * 0x4b + 4) = local_13c;
      *(int *)(param_2 + local_18 * 0x4b) = local_160;
      *(int *)(param_2 + local_18 * 0x4b + 8) = local_140;
      strncpy((char *)(param_2 + local_18 * 0x4b + 0xc),&local_159,0x18);
      *(int *)(param_2 + local_18 * 0x4b + 0x25) = local_164;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x29) = local_186;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x2d) = local_182;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x31) = local_17e;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x35) = local_17a;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x39) = local_176;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x3d) = local_172;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x41) = local_16e;
      *(undefined2 *)(param_2 + local_18 * 0x4b + 0x45) = local_16a;
      if (local_134 < 0x73) {
        if (local_134 < 10) {
          if (local_134 < 10) {
            param_4[local_134 * 0x3d + 1] = (Inven_Item)0x8;
            *(short *)(param_4 + local_134 * 0x3d + 0xb) = (short)local_168;
            *(int *)(param_4 + local_134 * 0x3d + 2) = local_138;
            *(int *)(param_4 + local_134 * 0x3d + 7) = local_160;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_4 + local_134 * 0x3d + 0x11),local_187);
            *(short *)(param_4 + local_134 * 0x3d + 0xd) = (short)local_190[1];
            *(short *)(param_4 + local_134 * 0x3d + 0xf) = (short)local_190[0];
            if (local_195 == '\0') {
              param_4[local_134 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_4[local_134 * 0x3d + 0x33] & 0xdf);
            }
            else {
              param_4[local_134 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_4[local_134 * 0x3d + 0x33] | 0x20);
            }
          }
        }
        else {
          local_10 = local_134 + -10;
          if (local_10 < 0x69) {
            param_3[local_10 * 0x3d + 1] = (Inven_Item)0x8;
            *(short *)(param_3 + local_10 * 0x3d + 0xb) = (short)local_168;
            *(int *)(param_3 + local_10 * 0x3d + 2) = local_138;
            *(int *)(param_3 + local_10 * 0x3d + 7) = local_160;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_3 + local_10 * 0x3d + 0x11),local_187);
            *(short *)(param_3 + local_10 * 0x3d + 0xd) = (short)local_190[1];
            *(short *)(param_3 + local_10 * 0x3d + 0xf) = (short)local_190[0];
            if (local_195 == '\0') {
              param_3[local_10 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_3[local_10 * 0x3d + 0x33] & 0xdf);
            }
            else {
              param_3[local_10 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_3[local_10 * 0x3d + 0x33] | 0x20);
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    uVar3 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_130,
                       "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                       ,0x26dc,5);
    cMyTrace::operator()
              (local_130,"DB_LoadInventory::GetUserAvatar, exec() ERROR charac_no=%u",param_1);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## _getCharacInvenExpand

```asm
// === 0840ad2a DB_LoadInventory::_getCharacInvenExpand  [0x0840ad2a-0x840b0d7] ===
 840ad2a:	55                   	push   %ebp
 840ad2b:	89 e5                	mov    %esp,%ebp
 840ad2d:	57                   	push   %edi
 840ad2e:	53                   	push   %ebx
 840ad2f:	81 ec 20 48 00 00    	sub    $0x4820,%esp
 840ad35:	8d 85 eb b7 ff ff    	lea    -0x4815(%ebp),%eax
 840ad3b:	ba 82 2b 00 00       	mov    $0x2b82,%edx
 840ad40:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ad44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840ad4b:	00 
 840ad4c:	89 04 24             	mov    %eax,(%esp)
 840ad4f:	e8 6c 2f c7 ff       	call   807dcc0 <memset@plt>
 840ad54:	c7 45 e0 82 2b 00 00 	movl   $0x2b82,-0x20(%ebp)
 840ad5b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840ad5e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840ad61:	8d 95 6d e3 ff ff    	lea    -0x1c93(%ebp),%edx
 840ad67:	bb 0f 12 00 00       	mov    $0x120f,%ebx
 840ad6c:	b8 00 00 00 00       	mov    $0x0,%eax
 840ad71:	89 d1                	mov    %edx,%ecx
 840ad73:	83 e1 01             	and    $0x1,%ecx
 840ad76:	85 c9                	test   %ecx,%ecx
 840ad78:	74 08                	je     840ad82 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x58>
 840ad7a:	88 02                	mov    %al,(%edx)
 840ad7c:	83 c2 01             	add    $0x1,%edx
 840ad7f:	83 eb 01             	sub    $0x1,%ebx
 840ad82:	89 d1                	mov    %edx,%ecx
 840ad84:	83 e1 02             	and    $0x2,%ecx
 840ad87:	85 c9                	test   %ecx,%ecx
 840ad89:	74 09                	je     840ad94 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x6a>
 840ad8b:	66 89 02             	mov    %ax,(%edx)
 840ad8e:	83 c2 02             	add    $0x2,%edx
 840ad91:	83 eb 02             	sub    $0x2,%ebx
 840ad94:	89 d9                	mov    %ebx,%ecx
 840ad96:	c1 e9 02             	shr    $0x2,%ecx
 840ad99:	89 d7                	mov    %edx,%edi
 840ad9b:	f3 ab                	rep stos %eax,%es:(%edi)
 840ad9d:	89 fa                	mov    %edi,%edx
 840ad9f:	89 d9                	mov    %ebx,%ecx
 840ada1:	83 e1 02             	and    $0x2,%ecx
 840ada4:	85 c9                	test   %ecx,%ecx
 840ada6:	74 06                	je     840adae <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x84>
 840ada8:	66 89 02             	mov    %ax,(%edx)
 840adab:	83 c2 02             	add    $0x2,%edx
 840adae:	89 d9                	mov    %ebx,%ecx
 840adb0:	83 e1 01             	and    $0x1,%ecx
 840adb3:	85 c9                	test   %ecx,%ecx
 840adb5:	74 05                	je     840adbc <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x92>
 840adb7:	88 02                	mov    %al,(%edx)
 840adb9:	83 c2 01             	add    $0x1,%edx
 840adbc:	c7 45 dc 0f 12 00 00 	movl   $0x120f,-0x24(%ebp)
 840adc3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840adc6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 840adc9:	8d 9d 7c f5 ff ff    	lea    -0xa84(%ebp),%ebx
 840adcf:	b8 00 00 00 00       	mov    $0x0,%eax
 840add4:	ba 97 02 00 00       	mov    $0x297,%edx
 840add9:	89 df                	mov    %ebx,%edi
 840addb:	89 d1                	mov    %edx,%ecx
 840addd:	f3 ab                	rep stos %eax,%es:(%edi)
 840addf:	c7 45 d8 5c 0a 00 00 	movl   $0xa5c,-0x28(%ebp)
 840ade6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840ade9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840adec:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840adf1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840adf8:	00 
 840adf9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840ae00:	00 
 840ae01:	89 04 24             	mov    %eax,(%esp)
 840ae04:	e8 35 a4 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840ae09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840ae0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ae0f:	8b 40 04             	mov    0x4(%eax),%eax
 840ae12:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ae16:	c7 44 24 04 5c 5a c4 	movl   $0x8c45a5c,0x4(%esp)
 840ae1d:	08 
 840ae1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ae21:	89 04 24             	mov    %eax,(%esp)
 840ae24:	e8 97 93 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840ae29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840ae30:	00 
 840ae31:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ae34:	89 04 24             	mov    %eax,(%esp)
 840ae37:	e8 ea 94 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840ae3c:	83 f0 01             	xor    $0x1,%eax
 840ae3f:	84 c0                	test   %al,%al
 840ae41:	75 12                	jne    840ae55 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x12b>
 840ae43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ae46:	89 04 24             	mov    %eax,(%esp)
 840ae49:	e8 6e 96 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840ae4e:	83 f0 01             	xor    $0x1,%eax
 840ae51:	84 c0                	test   %al,%al
 840ae53:	74 07                	je     840ae5c <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x132>
 840ae55:	b8 01 00 00 00       	mov    $0x1,%eax
 840ae5a:	eb 05                	jmp    840ae61 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x137>
 840ae5c:	b8 00 00 00 00       	mov    $0x0,%eax
 840ae61:	84 c0                	test   %al,%al
 840ae63:	74 0a                	je     840ae6f <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x145>
 840ae65:	b8 3b 24 00 00       	mov    $0x243b,%eax
 840ae6a:	e9 5f 02 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840ae6f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840ae76:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ae79:	8d 90 e0 a8 00 00    	lea    0xa8e0(%eax),%edx
 840ae7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840ae82:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840ae86:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ae8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ae8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840ae91:	89 04 24             	mov    %eax,(%esp)
 840ae94:	e8 93 ba d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ae99:	83 f0 01             	xor    $0x1,%eax
 840ae9c:	84 c0                	test   %al,%al
 840ae9e:	74 0a                	je     840aeaa <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x180>
 840aea0:	b8 3f 24 00 00       	mov    $0x243f,%eax
 840aea5:	e9 24 02 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840aeaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840aead:	89 44 24 04          	mov    %eax,0x4(%esp)
 840aeb1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840aeb4:	89 04 24             	mov    %eax,(%esp)
 840aeb7:	e8 22 a5 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840aebc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840aebf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840aec2:	89 c2                	mov    %eax,%edx
 840aec4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840aec7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840aecb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840aecf:	8d 95 eb b7 ff ff    	lea    -0x4815(%ebp),%edx
 840aed5:	89 54 24 08          	mov    %edx,0x8(%esp)
 840aed9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840aedd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840aee0:	89 04 24             	mov    %eax,(%esp)
 840aee3:	e8 32 a4 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840aee8:	83 f0 01             	xor    $0x1,%eax
 840aeeb:	84 c0                	test   %al,%al
 840aeed:	74 0a                	je     840aef9 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x1cf>
 840aeef:	b8 43 24 00 00       	mov    $0x2443,%eax
 840aef4:	e9 d5 01 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840aef9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840aefc:	89 44 24 04          	mov    %eax,0x4(%esp)
 840af00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840af03:	89 04 24             	mov    %eax,(%esp)
 840af06:	e8 d3 a4 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840af0b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 840af0e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840af11:	89 c2                	mov    %eax,%edx
 840af13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840af16:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840af1a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840af1e:	8d 95 6d e3 ff ff    	lea    -0x1c93(%ebp),%edx
 840af24:	89 54 24 08          	mov    %edx,0x8(%esp)
 840af28:	89 44 24 04          	mov    %eax,0x4(%esp)
 840af2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840af2f:	89 04 24             	mov    %eax,(%esp)
 840af32:	e8 e3 a3 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840af37:	83 f0 01             	xor    $0x1,%eax
 840af3a:	84 c0                	test   %al,%al
 840af3c:	74 0a                	je     840af48 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x21e>
 840af3e:	b8 48 24 00 00       	mov    $0x2448,%eax
 840af43:	e9 86 01 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840af48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840af4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840af4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840af52:	89 04 24             	mov    %eax,(%esp)
 840af55:	e8 84 a4 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840af5a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840af5d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840af60:	89 c2                	mov    %eax,%edx
 840af62:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840af65:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840af69:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840af6d:	8d 95 7c f5 ff ff    	lea    -0xa84(%ebp),%edx
 840af73:	89 54 24 08          	mov    %edx,0x8(%esp)
 840af77:	89 44 24 04          	mov    %eax,0x4(%esp)
 840af7b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840af7e:	89 04 24             	mov    %eax,(%esp)
 840af81:	e8 94 a3 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840af86:	83 f0 01             	xor    $0x1,%eax
 840af89:	84 c0                	test   %al,%al
 840af8b:	74 0a                	je     840af97 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x26d>
 840af8d:	b8 53 24 00 00       	mov    $0x2453,%eax
 840af92:	e9 37 01 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840af97:	8b 45 0c             	mov    0xc(%ebp),%eax
 840af9a:	05 e4 a8 00 00       	add    $0xa8e4,%eax
 840af9f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 840afa2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840afa6:	8d 95 eb b7 ff ff    	lea    -0x4815(%ebp),%edx
 840afac:	89 54 24 08          	mov    %edx,0x8(%esp)
 840afb0:	8d 55 e0             	lea    -0x20(%ebp),%edx
 840afb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 840afb7:	89 04 24             	mov    %eax,(%esp)
 840afba:	e8 43 71 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840afbf:	83 f0 01             	xor    $0x1,%eax
 840afc2:	84 c0                	test   %al,%al
 840afc4:	74 0a                	je     840afd0 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x2a6>
 840afc6:	b8 57 24 00 00       	mov    $0x2457,%eax
 840afcb:	e9 fe 00 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840afd0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 840afd3:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840afd8:	89 c8                	mov    %ecx,%eax
 840afda:	f7 e2                	mul    %edx
 840afdc:	89 d0                	mov    %edx,%eax
 840afde:	c1 e8 04             	shr    $0x4,%eax
 840afe1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840afe4:	89 ca                	mov    %ecx,%edx
 840afe6:	29 c2                	sub    %eax,%edx
 840afe8:	89 d0                	mov    %edx,%eax
 840afea:	85 c0                	test   %eax,%eax
 840afec:	74 11                	je     840afff <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x2d5>
 840afee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840aff1:	85 c0                	test   %eax,%eax
 840aff3:	74 0a                	je     840afff <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x2d5>
 840aff5:	b8 58 24 00 00       	mov    $0x2458,%eax
 840affa:	e9 cf 00 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840afff:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b002:	05 9e 94 00 00       	add    $0x949e,%eax
 840b007:	8b 55 e8             	mov    -0x18(%ebp),%edx
 840b00a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b00e:	8d 95 6d e3 ff ff    	lea    -0x1c93(%ebp),%edx
 840b014:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b018:	8d 55 dc             	lea    -0x24(%ebp),%edx
 840b01b:	89 54 24 04          	mov    %edx,0x4(%esp)
 840b01f:	89 04 24             	mov    %eax,(%esp)
 840b022:	e8 db 70 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840b027:	83 f0 01             	xor    $0x1,%eax
 840b02a:	84 c0                	test   %al,%al
 840b02c:	74 0a                	je     840b038 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x30e>
 840b02e:	b8 5c 24 00 00       	mov    $0x245c,%eax
 840b033:	e9 96 00 00 00       	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840b038:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 840b03b:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840b040:	89 c8                	mov    %ecx,%eax
 840b042:	f7 e2                	mul    %edx
 840b044:	89 d0                	mov    %edx,%eax
 840b046:	c1 e8 04             	shr    $0x4,%eax
 840b049:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840b04c:	89 ca                	mov    %ecx,%edx
 840b04e:	29 c2                	sub    %eax,%edx
 840b050:	89 d0                	mov    %edx,%eax
 840b052:	85 c0                	test   %eax,%eax
 840b054:	74 0e                	je     840b064 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x33a>
 840b056:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840b059:	85 c0                	test   %eax,%eax
 840b05b:	74 07                	je     840b064 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x33a>
 840b05d:	b8 5d 24 00 00       	mov    $0x245d,%eax
 840b062:	eb 6a                	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840b064:	8b 45 0c             	mov    0xc(%ebp),%eax
 840b067:	05 a4 4a 01 00       	add    $0x14aa4,%eax
 840b06c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 840b06f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840b073:	8d 95 7c f5 ff ff    	lea    -0xa84(%ebp),%edx
 840b079:	89 54 24 08          	mov    %edx,0x8(%esp)
 840b07d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 840b080:	89 54 24 04          	mov    %edx,0x4(%esp)
 840b084:	89 04 24             	mov    %eax,(%esp)
 840b087:	e8 76 70 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840b08c:	83 f0 01             	xor    $0x1,%eax
 840b08f:	84 c0                	test   %al,%al
 840b091:	74 07                	je     840b09a <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x370>
 840b093:	b8 62 24 00 00       	mov    $0x2462,%eax
 840b098:	eb 34                	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840b09a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840b09d:	8d 48 fc             	lea    -0x4(%eax),%ecx
 840b0a0:	ba 3f c5 25 43       	mov    $0x4325c53f,%edx
 840b0a5:	89 c8                	mov    %ecx,%eax
 840b0a7:	f7 e2                	mul    %edx
 840b0a9:	89 d0                	mov    %edx,%eax
 840b0ab:	c1 e8 04             	shr    $0x4,%eax
 840b0ae:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840b0b1:	89 ca                	mov    %ecx,%edx
 840b0b3:	29 c2                	sub    %eax,%edx
 840b0b5:	89 d0                	mov    %edx,%eax
 840b0b7:	85 c0                	test   %eax,%eax
 840b0b9:	74 0e                	je     840b0c9 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x39f>
 840b0bb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840b0be:	85 c0                	test   %eax,%eax
 840b0c0:	74 07                	je     840b0c9 <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x39f>
 840b0c2:	b8 63 24 00 00       	mov    $0x2463,%eax
 840b0c7:	eb 05                	jmp    840b0ce <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY+0x3a4>
 840b0c9:	b8 00 00 00 00       	mov    $0x0,%eax
 840b0ce:	81 c4 20 48 00 00    	add    $0x4820,%esp
 840b0d4:	5b                   	pop    %ebx
 840b0d5:	5f                   	pop    %edi
 840b0d6:	5d                   	pop    %ebp
 840b0d7:	c3                   	ret

```

```c
// DB_LoadInventory::_getCharacInvenExpand @ 0x840ad2a

/* DB_LoadInventory::_getCharacInvenExpand(SIG_LOAD_INVENTORY*) const */

undefined4 __thiscall
DB_LoadInventory::_getCharacInvenExpand(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_4819 [11138];
  char local_1c97;
  char local_1c96 [4622];
  char local_a88 [2652];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  bVar8 = 0;
  memset(local_4819,0,0x2b82);
  local_24 = 0x2b82;
  local_20 = 0x2b82;
  pcVar5 = &local_1c97;
  uVar6 = 0x120f;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_1c97 = '\0';
    pcVar5 = local_1c96;
    uVar6 = 0x120e;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
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
  local_28 = 0x120f;
  local_1c = 0x120f;
  pcVar5 = local_a88;
  for (iVar4 = 0x297; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  local_2c = 0xa5c;
  local_18 = 0xa5c;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_14,
                   "seLect cargo_capacity,cargo,jewel,expand_equipslot from charac_inven_expand where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_14);
    if (cVar1 == '\x01') {
      bVar7 = false;
      goto LAB_0840ae61;
    }
  }
  bVar7 = true;
LAB_0840ae61:
  if (bVar7) {
    uVar2 = 0x243b;
  }
  else {
    local_10 = 1;
    cVar1 = MySQL::get_int(local_14,0,(int *)(param_1 + 0xa8e0));
    if (cVar1 == '\x01') {
      local_20 = MySQL::get_binary_length(local_14,local_10);
      iVar4 = local_10;
      local_10 = local_10 + 1;
      cVar1 = MySQL::get_binary(local_14,iVar4,local_4819,local_24);
      if (cVar1 == '\x01') {
        local_1c = MySQL::get_binary_length(local_14,local_10);
        iVar4 = local_10;
        local_10 = local_10 + 1;
        cVar1 = MySQL::get_binary(local_14,iVar4,&local_1c97,local_28);
        if (cVar1 == '\x01') {
          local_18 = MySQL::get_binary_length(local_14,local_10);
          iVar4 = local_10;
          local_10 = local_10 + 1;
          cVar1 = MySQL::get_binary(local_14,iVar4,local_a88,local_2c);
          if (cVar1 == '\x01') {
            cVar1 = uncompress_zip((char *)(param_1 + 0xa8e4),&local_24,local_4819,local_20);
            if (cVar1 == '\x01') {
              if ((local_24 == (local_24 / 0x3d) * 0x3d) || (local_24 == 0)) {
                cVar1 = uncompress_zip((char *)(param_1 + 0x949e),&local_28,&local_1c97,local_1c);
                if (cVar1 == '\x01') {
                  if ((local_28 == (local_28 / 0x3d) * 0x3d) || (local_28 == 0)) {
                    cVar1 = uncompress_zip((char *)(param_1 + 0x14aa4),&local_2c,local_a88,local_18)
                    ;
                    if (cVar1 == '\x01') {
                      if ((local_2c - 4 == ((local_2c - 4) / 0x3d) * 0x3d) || (local_2c == 0)) {
                        uVar2 = 0;
                      }
                      else {
                        uVar2 = 0x2463;
                      }
                    }
                    else {
                      uVar2 = 0x2462;
                    }
                  }
                  else {
                    uVar2 = 0x245d;
                  }
                }
                else {
                  uVar2 = 0x245c;
                }
              }
              else {
                uVar2 = 0x2458;
              }
            }
            else {
              uVar2 = 0x2457;
            }
          }
          else {
            uVar2 = 0x2453;
          }
        }
        else {
          uVar2 = 0x2448;
        }
      }
      else {
        uVar2 = 0x2443;
      }
    }
    else {
      uVar2 = 0x243f;
    }
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 0840a66e DB_LoadInventory::dispatch  [0x0840a66e-0x840aac7] ===
 840a66e:	55                   	push   %ebp
 840a66f:	89 e5                	mov    %esp,%ebp
 840a671:	53                   	push   %ebx
 840a672:	81 ec 84 00 00 00    	sub    $0x84,%esp
 840a678:	8b 45 08             	mov    0x8(%ebp),%eax
 840a67b:	8b 55 14             	mov    0x14(%ebp),%edx
 840a67e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840a682:	8b 55 10             	mov    0x10(%ebp),%edx
 840a685:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a689:	8b 55 0c             	mov    0xc(%ebp),%edx
 840a68c:	89 54 24 04          	mov    %edx,0x4(%esp)
 840a690:	89 04 24             	mov    %eax,(%esp)
 840a693:	e8 e4 18 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 840a698:	83 f0 01             	xor    $0x1,%eax
 840a69b:	84 c0                	test   %al,%al
 840a69d:	74 0a                	je     840a6a9 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x3b>
 840a69f:	b8 00 00 00 00       	mov    $0x0,%eax
 840a6a4:	e9 15 04 00 00       	jmp    840aabe <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x450>
 840a6a9:	8b 45 14             	mov    0x14(%ebp),%eax
 840a6ac:	89 04 24             	mov    %eax,(%esp)
 840a6af:	e8 3e 61 04 00       	call   84507f2 <_ZN6Stream12GetOutBufferI18SIG_LOAD_INVENTORYEEPT_v>
 840a6b4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840a6b7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 840a6bb:	75 0a                	jne    840a6c7 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x59>
 840a6bd:	b8 00 00 00 00       	mov    $0x0,%eax
 840a6c2:	e9 f7 03 00 00       	jmp    840aabe <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x450>
 840a6c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a6ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 840a6d1:	89 04 24             	mov    %eax,(%esp)
 840a6d4:	e8 ff 09 00 00       	call   840b0d8 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY>
 840a6d9:	83 f0 01             	xor    $0x1,%eax
 840a6dc:	84 c0                	test   %al,%al
 840a6de:	74 6c                	je     840a74c <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0xde>
 840a6e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a6e3:	8b 58 04             	mov    0x4(%eax),%ebx
 840a6e6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840a6ed:	00 
 840a6ee:	c7 44 24 08 64 23 00 	movl   $0x2364,0x8(%esp)
 840a6f5:	00 
 840a6f6:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840a6fd:	08 
 840a6fe:	8d 45 88             	lea    -0x78(%ebp),%eax
 840a701:	89 04 24             	mov    %eax,(%esp)
 840a704:	e8 0f 50 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a709:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a70d:	c7 44 24 04 78 57 c4 	movl   $0x8c45778,0x4(%esp)
 840a714:	08 
 840a715:	8d 45 88             	lea    -0x78(%ebp),%eax
 840a718:	89 04 24             	mov    %eax,(%esp)
 840a71b:	e8 68 50 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a720:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840a727:	e8 d4 b0 31 00       	call   8725800 <__cxa_allocate_exception>
 840a72c:	89 c2                	mov    %eax,%edx
 840a72e:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 840a734:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840a73b:	00 
 840a73c:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840a743:	09 
 840a744:	89 04 24             	mov    %eax,(%esp)
 840a747:	e8 04 a5 31 00       	call   8724c50 <__cxa_throw>
 840a74c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a74f:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a753:	8b 45 08             	mov    0x8(%ebp),%eax
 840a756:	89 04 24             	mov    %eax,(%esp)
 840a759:	e8 dc 15 00 00       	call   840bd3a <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY>
 840a75e:	83 f0 01             	xor    $0x1,%eax
 840a761:	84 c0                	test   %al,%al
 840a763:	74 6c                	je     840a7d1 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x163>
 840a765:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a768:	8b 58 04             	mov    0x4(%eax),%ebx
 840a76b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840a772:	00 
 840a773:	c7 44 24 08 69 23 00 	movl   $0x2369,0x8(%esp)
 840a77a:	00 
 840a77b:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840a782:	08 
 840a783:	8d 45 98             	lea    -0x68(%ebp),%eax
 840a786:	89 04 24             	mov    %eax,(%esp)
 840a789:	e8 8a 4f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a78e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a792:	c7 44 24 04 b4 57 c4 	movl   $0x8c457b4,0x4(%esp)
 840a799:	08 
 840a79a:	8d 45 98             	lea    -0x68(%ebp),%eax
 840a79d:	89 04 24             	mov    %eax,(%esp)
 840a7a0:	e8 e3 4f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a7a5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840a7ac:	e8 4f b0 31 00       	call   8725800 <__cxa_allocate_exception>
 840a7b1:	89 c2                	mov    %eax,%edx
 840a7b3:	c7 02 02 00 00 00    	movl   $0x2,(%edx)
 840a7b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840a7c0:	00 
 840a7c1:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840a7c8:	09 
 840a7c9:	89 04 24             	mov    %eax,(%esp)
 840a7cc:	e8 7f a4 31 00       	call   8724c50 <__cxa_throw>
 840a7d1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840a7d8:	eb 1d                	jmp    840a7f7 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x189>
 840a7da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a7dd:	6b c0 3d             	imul   $0x3d,%eax,%eax
 840a7e0:	05 d0 ee 00 00       	add    $0xeed0,%eax
 840a7e5:	03 45 ec             	add    -0x14(%ebp),%eax
 840a7e8:	83 c0 01             	add    $0x1,%eax
 840a7eb:	89 04 24             	mov    %eax,(%esp)
 840a7ee:	e8 e5 0f cc ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 840a7f3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a7f7:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
 840a7fe:	0f 9e c0             	setle  %al
 840a801:	84 c0                	test   %al,%al
 840a803:	75 d5                	jne    840a7da <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x16c>
 840a805:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a808:	05 87 27 01 00       	add    $0x12787,%eax
 840a80d:	89 04 24             	mov    %eax,(%esp)
 840a810:	e8 c3 0f cc ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 840a815:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a818:	8b 80 7c 28 01 00    	mov    0x1287c(%eax),%eax
 840a81e:	85 c0                	test   %eax,%eax
 840a820:	0f 84 85 00 00 00    	je     840a8ab <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x23d>
 840a826:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a829:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a82d:	8b 45 08             	mov    0x8(%ebp),%eax
 840a830:	89 04 24             	mov    %eax,(%esp)
 840a833:	e8 3c 22 00 00       	call   840ca74 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY>
 840a838:	83 f0 01             	xor    $0x1,%eax
 840a83b:	84 c0                	test   %al,%al
 840a83d:	74 6c                	je     840a8ab <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x23d>
 840a83f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a842:	8b 58 04             	mov    0x4(%eax),%ebx
 840a845:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840a84c:	00 
 840a84d:	c7 44 24 08 79 23 00 	movl   $0x2379,0x8(%esp)
 840a854:	00 
 840a855:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840a85c:	08 
 840a85d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 840a860:	89 04 24             	mov    %eax,(%esp)
 840a863:	e8 b0 4e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a868:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a86c:	c7 44 24 04 f4 57 c4 	movl   $0x8c457f4,0x4(%esp)
 840a873:	08 
 840a874:	8d 45 a8             	lea    -0x58(%ebp),%eax
 840a877:	89 04 24             	mov    %eax,(%esp)
 840a87a:	e8 09 4f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a87f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840a886:	e8 75 af 31 00       	call   8725800 <__cxa_allocate_exception>
 840a88b:	89 c2                	mov    %eax,%edx
 840a88d:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 840a893:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840a89a:	00 
 840a89b:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840a8a2:	09 
 840a8a3:	89 04 24             	mov    %eax,(%esp)
 840a8a6:	e8 a5 a3 31 00       	call   8724c50 <__cxa_throw>
 840a8ab:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 840a8b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a8b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a8b9:	8b 45 08             	mov    0x8(%ebp),%eax
 840a8bc:	89 04 24             	mov    %eax,(%esp)
 840a8bf:	e8 66 04 00 00       	call   840ad2a <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY>
 840a8c4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840a8c7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 840a8cb:	0f 95 c0             	setne  %al
 840a8ce:	84 c0                	test   %al,%al
 840a8d0:	74 73                	je     840a945 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x2d7>
 840a8d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a8d5:	8b 58 04             	mov    0x4(%eax),%ebx
 840a8d8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840a8df:	00 
 840a8e0:	c7 44 24 08 81 23 00 	movl   $0x2381,0x8(%esp)
 840a8e7:	00 
 840a8e8:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840a8ef:	08 
 840a8f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 840a8f3:	89 04 24             	mov    %eax,(%esp)
 840a8f6:	e8 1d 4e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a8fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a8fe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840a902:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a906:	c7 44 24 04 34 58 c4 	movl   $0x8c45834,0x4(%esp)
 840a90d:	08 
 840a90e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 840a911:	89 04 24             	mov    %eax,(%esp)
 840a914:	e8 6f 4e 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a919:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840a920:	e8 db ae 31 00       	call   8725800 <__cxa_allocate_exception>
 840a925:	89 c2                	mov    %eax,%edx
 840a927:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 840a92d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840a934:	00 
 840a935:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840a93c:	09 
 840a93d:	89 04 24             	mov    %eax,(%esp)
 840a940:	e8 0b a3 31 00       	call   8724c50 <__cxa_throw>
 840a945:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a948:	8d 90 84 47 01 00    	lea    0x14784(%eax),%edx
 840a94e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a951:	8b 40 04             	mov    0x4(%eax),%eax
 840a954:	89 54 24 04          	mov    %edx,0x4(%esp)
 840a958:	89 04 24             	mov    %eax,(%esp)
 840a95b:	e8 06 2e 00 00       	call   840d766 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo>
 840a960:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840a963:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 840a967:	0f 95 c0             	setne  %al
 840a96a:	84 c0                	test   %al,%al
 840a96c:	74 73                	je     840a9e1 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x373>
 840a96e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a971:	8b 58 04             	mov    0x4(%eax),%ebx
 840a974:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840a97b:	00 
 840a97c:	c7 44 24 08 95 23 00 	movl   $0x2395,0x8(%esp)
 840a983:	00 
 840a984:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840a98b:	08 
 840a98c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840a98f:	89 04 24             	mov    %eax,(%esp)
 840a992:	e8 81 4d 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a997:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a99a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840a99e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a9a2:	c7 44 24 04 84 58 c4 	movl   $0x8c45884,0x4(%esp)
 840a9a9:	08 
 840a9aa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840a9ad:	89 04 24             	mov    %eax,(%esp)
 840a9b0:	e8 d3 4d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a9b5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840a9bc:	e8 3f ae 31 00       	call   8725800 <__cxa_allocate_exception>
 840a9c1:	89 c2                	mov    %eax,%edx
 840a9c3:	c7 02 06 00 00 00    	movl   $0x6,(%edx)
 840a9c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840a9d0:	00 
 840a9d1:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840a9d8:	09 
 840a9d9:	89 04 24             	mov    %eax,(%esp)
 840a9dc:	e8 6f a2 31 00       	call   8724c50 <__cxa_throw>
 840a9e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840a9e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a9e8:	8b 45 08             	mov    0x8(%ebp),%eax
 840a9eb:	89 04 24             	mov    %eax,(%esp)
 840a9ee:	e8 d5 00 00 00       	call   840aac8 <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY>
 840a9f3:	83 f0 01             	xor    $0x1,%eax
 840a9f6:	84 c0                	test   %al,%al
 840a9f8:	0f 84 86 00 00 00    	je     840aa84 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x416>
 840a9fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840aa01:	8b 58 04             	mov    0x4(%eax),%ebx
 840aa04:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840aa0b:	00 
 840aa0c:	c7 44 24 08 a4 23 00 	movl   $0x23a4,0x8(%esp)
 840aa13:	00 
 840aa14:	c7 44 24 04 40 d3 c5 	movl   $0x8c5d340,0x4(%esp)
 840aa1b:	08 
 840aa1c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840aa1f:	89 04 24             	mov    %eax,(%esp)
 840aa22:	e8 f1 4c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840aa27:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840aa2b:	c7 44 24 04 cc 58 c4 	movl   $0x8c458cc,0x4(%esp)
 840aa32:	08 
 840aa33:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840aa36:	89 04 24             	mov    %eax,(%esp)
 840aa39:	e8 4a 4d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840aa3e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840aa45:	e8 b6 ad 31 00       	call   8725800 <__cxa_allocate_exception>
 840aa4a:	89 c2                	mov    %eax,%edx
 840aa4c:	c7 02 07 00 00 00    	movl   $0x7,(%edx)
 840aa52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840aa59:	00 
 840aa5a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840aa61:	09 
 840aa62:	89 04 24             	mov    %eax,(%esp)
 840aa65:	e8 e6 a1 31 00       	call   8724c50 <__cxa_throw>
 840aa6a:	89 04 24             	mov    %eax,(%esp)
 840aa6d:	e8 6e b2 31 00       	call   8725ce0 <__cxa_begin_catch>
 840aa72:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840aa75:	c7 80 30 40 00 00 01 	movl   $0x1,0x4030(%eax)
 840aa7c:	00 00 00 
 840aa7f:	e8 ac b1 31 00       	call   8725c30 <__cxa_end_catch>
 840aa84:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840aa87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840aa8b:	8b 45 10             	mov    0x10(%ebp),%eax
 840aa8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840aa92:	8b 45 0c             	mov    0xc(%ebp),%eax
 840aa95:	89 44 24 04          	mov    %eax,0x4(%esp)
 840aa99:	8b 45 08             	mov    0x8(%ebp),%eax
 840aa9c:	89 04 24             	mov    %eax,(%esp)
 840aa9f:	e8 ca 2f 00 00       	call   840da6e <_ZN16DB_LoadInventory10SendResultEiiP18SIG_LOAD_INVENTORY>
 840aaa4:	88 45 eb             	mov    %al,-0x15(%ebp)
 840aaa7:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 840aaab:	83 f0 01             	xor    $0x1,%eax
 840aaae:	84 c0                	test   %al,%al
 840aab0:	74 07                	je     840aab9 <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x44b>
 840aab2:	b8 00 00 00 00       	mov    $0x0,%eax
 840aab7:	eb 05                	jmp    840aabe <_ZN16DB_LoadInventory8dispatchEiiP6Stream+0x450>
 840aab9:	b8 01 00 00 00       	mov    $0x1,%eax
 840aabe:	81 c4 84 00 00 00    	add    $0x84,%esp
 840aac4:	5b                   	pop    %ebx
 840aac5:	5d                   	pop    %ebp
 840aac6:	c3                   	ret
 840aac7:	90                   	nop

```

```c
// DB_LoadInventory::dispatch @ 0x840a66e

/* DB_LoadInventory::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadInventory::dispatch(DB_LoadInventory *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [20];
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_18 = Stream::GetOutBuffer<SIG_LOAD_INVENTORY>(param_3);
    if (local_18 == (SIG_LOAD_INVENTORY *)0x0) {
      uVar2 = 0;
    }
    else {
                    /* try { // try from 0840a6d4 to 0840aa69 has its CatchHandler @ 0840aa6a */
      cVar1 = GetUserInven(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_7c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2364,5);
        cMyTrace::operator()
                  (local_7c,"DB_LoadInventory::dispatch, GetUserInven ERROR charac_no=%u",uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = GetUserAvatar(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_6c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2369,5);
        cMyTrace::operator()
                  (local_6c,"DB_LoadInventory::dispatch, GetUserAvatar ERROR charac_no=%u",uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 2;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      for (local_10 = 0; local_10 < 0x8c; local_10 = local_10 + 1) {
        Inven_Item::reset((Inven_Item *)(local_18 + local_10 * 0x3d + 0xeed1));
      }
      Inven_Item::reset((Inven_Item *)(local_18 + 0x12787));
      if (*(int *)(local_18 + 0x1287c) != 0) {
        cVar1 = GetUserCreature(this,local_18);
        if (cVar1 != '\x01') {
          uVar2 = *(undefined4 *)(local_18 + 4);
          cMyTrace::cMyTrace(local_5c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                             0x2379,5);
          cMyTrace::operator()
                    (local_5c,"DB_LoadInventory::dispatch, GetUserCreature ERROR charac_no=%u",uVar2
                    );
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&int::typeinfo,0);
        }
      }
      local_14 = 0;
      local_14 = _getCharacInvenExpand(this,local_18);
      if (local_14 != 0) {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_4c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2381,5);
        cMyTrace::operator()
                  (local_4c,
                   "DB_LoadInventory::dispatch, _getCharacInvenExpand ERROR charac_no=%u, line(%d)",
                   uVar2,local_14);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 4;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      local_14 = GetItemLock(*(uint *)(local_18 + 4),(stItemLockInfo *)(local_18 + 0x14784));
      if (local_14 != 0) {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_3c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2395,5);
        cMyTrace::operator()
                  (local_3c,"DB_LoadInventory::dispatch, GetItemLock ERROR charac_no=%u, line(%d)",
                   uVar2,local_14);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 6;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = _GetEquipMaxItemLevel(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_2c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x23a4,5);
        cMyTrace::operator()
                  (local_2c,"DB_LoadInventory::dispatch, _GetEquipMaxItemLevel ERROR charac_no=%u",
                   uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 7;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = SendResult(this,param_1,param_2,local_18);
      if (cVar1 == '\x01') {
        uVar2 = 1;
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

## ~DB_LoadInventory

```asm
// === 0840a620 DB_LoadInventory::~DB_LoadInventory  [0x0840a620-0x840a64f] ===
 840a620:	55                   	push   %ebp
 840a621:	89 e5                	mov    %esp,%ebp
 840a623:	83 ec 18             	sub    $0x18,%esp
 840a626:	8b 45 08             	mov    0x8(%ebp),%eax
 840a629:	c7 00 a0 fb c5 08    	movl   $0x8c5fba0,(%eax)
 840a62f:	8b 45 08             	mov    0x8(%ebp),%eax
 840a632:	89 04 24             	mov    %eax,(%esp)
 840a635:	e8 3e 7d cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 840a63a:	b8 00 00 00 00       	mov    $0x0,%eax
 840a63f:	84 c0                	test   %al,%al
 840a641:	74 0b                	je     840a64e <_ZN16DB_LoadInventoryD1Ev+0x2e>
 840a643:	8b 45 08             	mov    0x8(%ebp),%eax
 840a646:	89 04 24             	mov    %eax,(%esp)
 840a649:	e8 a2 9e 31 00       	call   87244f0 <_ZdlPv>
 840a64e:	c9                   	leave
 840a64f:	c3                   	ret

```

```c
// DB_LoadInventory::~DB_LoadInventory @ 0x840a620

/* WARNING: Removing unreachable block (ram,0x0840a643) */
/* DB_LoadInventory::~DB_LoadInventory() */

void __thiscall DB_LoadInventory::~DB_LoadInventory(DB_LoadInventory *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fba0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_LoadInventory_0840a650

```asm
// === 0840a650 DB_LoadInventory::~DB_LoadInventory  [0x0840a650-0x840a66d] ===
 840a650:	55                   	push   %ebp
 840a651:	89 e5                	mov    %esp,%ebp
 840a653:	83 ec 18             	sub    $0x18,%esp
 840a656:	8b 45 08             	mov    0x8(%ebp),%eax
 840a659:	89 04 24             	mov    %eax,(%esp)
 840a65c:	e8 bf ff ff ff       	call   840a620 <_ZN16DB_LoadInventoryD1Ev>
 840a661:	8b 45 08             	mov    0x8(%ebp),%eax
 840a664:	89 04 24             	mov    %eax,(%esp)
 840a667:	e8 84 9e 31 00       	call   87244f0 <_ZdlPv>
 840a66c:	c9                   	leave
 840a66d:	c3                   	ret

```

```c
// DB_LoadInventory::~DB_LoadInventory @ 0x840a650

/* DB_LoadInventory::~DB_LoadInventory() */

void __thiscall DB_LoadInventory::~DB_LoadInventory(DB_LoadInventory *this)

{
  ~DB_LoadInventory(this);
  operator_delete(this);
  return;
}

```

