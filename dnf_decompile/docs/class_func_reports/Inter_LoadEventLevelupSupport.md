# Inter_LoadEventLevelupSupport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8ce4 Inter_LoadEventLevelupSupport::dispatch_sig  [0x084e8ce4-0x84e8f67] ===
 84e8ce4:	55                   	push   %ebp
 84e8ce5:	89 e5                	mov    %esp,%ebp
 84e8ce7:	57                   	push   %edi
 84e8ce8:	56                   	push   %esi
 84e8ce9:	53                   	push   %ebx
 84e8cea:	83 ec 4c             	sub    $0x4c,%esp
 84e8ced:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e8cf1:	74 06                	je     84e8cf9 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x15>
 84e8cf3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84e8cf7:	75 48                	jne    84e8d41 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x5d>
 84e8cf9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8d00:	00 
 84e8d01:	c7 44 24 08 ee 6d 00 	movl   $0x6dee,0x8(%esp)
 84e8d08:	00 
 84e8d09:	c7 44 24 04 00 b3 c8 	movl   $0x8c8b300,0x4(%esp)
 84e8d10:	08 
 84e8d11:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e8d14:	89 04 24             	mov    %eax,(%esp)
 84e8d17:	e8 fc 69 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8d1c:	c7 44 24 08 00 b3 c8 	movl   $0x8c8b300,0x8(%esp)
 84e8d23:	08 
 84e8d24:	c7 44 24 04 b0 a4 c8 	movl   $0x8c8a4b0,0x4(%esp)
 84e8d2b:	08 
 84e8d2c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e8d2f:	89 04 24             	mov    %eax,(%esp)
 84e8d32:	e8 51 6a 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8d37:	b8 ef 6d 00 00       	mov    $0x6def,%eax
 84e8d3c:	e9 1f 02 00 00       	jmp    84e8f60 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x27c>
 84e8d41:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8d44:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84e8d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8d4a:	05 e4 d0 08 00       	add    $0x8d0e4,%eax
 84e8d4f:	89 04 24             	mov    %eax,(%esp)
 84e8d52:	e8 8b ee c5 ff       	call   8147be2 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE5clearEv>
 84e8d57:	e8 0c f0 c5 ff       	call   8147d68 <_ZN4ARAD9SingletonI25LevelupSupportEventMangerE3GetEv>
 84e8d5c:	89 04 24             	mov    %eax,(%esp)
 84e8d5f:	e8 ae e2 c5 ff       	call   8147012 <_ZNK25LevelupSupportEventManger19GetDefaultEventInfoEv>
 84e8d64:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e8d67:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 84e8d6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8d71:	89 14 24             	mov    %edx,(%esp)
 84e8d74:	e8 35 89 00 00       	call   84f16ae <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEaSERKS3_>
 84e8d79:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84e8d80:	eb 54                	jmp    84e8dd6 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0xf2>
 84e8d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8d85:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 84e8d8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e8d8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8d92:	89 14 24             	mov    %edx,(%esp)
 84e8d95:	e8 7c ef c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8d9a:	0f b7 00             	movzwl (%eax),%eax
 84e8d9d:	0f b7 d8             	movzwl %ax,%ebx
 84e8da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8da3:	89 04 24             	mov    %eax,(%esp)
 84e8da6:	e8 0d 15 bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e8dab:	39 c3                	cmp    %eax,%ebx
 84e8dad:	0f 9e c0             	setle  %al
 84e8db0:	84 c0                	test   %al,%al
 84e8db2:	74 1e                	je     84e8dd2 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0xee>
 84e8db4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8db7:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 84e8dbd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e8dc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8dc4:	89 14 24             	mov    %edx,(%esp)
 84e8dc7:	e8 4a ef c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8dcc:	66 c7 40 02 01 00    	movw   $0x1,0x2(%eax)
 84e8dd2:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84e8dd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8dd9:	05 e4 d0 08 00       	add    $0x8d0e4,%eax
 84e8dde:	89 04 24             	mov    %eax,(%esp)
 84e8de1:	e8 14 ef c5 ff       	call   8147cfa <_ZNKSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE4sizeEv>
 84e8de6:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 84e8de9:	0f 97 c0             	seta   %al
 84e8dec:	84 c0                	test   %al,%al
 84e8dee:	75 92                	jne    84e8d82 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x9e>
 84e8df0:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84e8df7:	e9 98 00 00 00       	jmp    84e8e94 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x1b0>
 84e8dfc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e8dff:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e8e02:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 84e8e08:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8e0c:	89 14 24             	mov    %edx,(%esp)
 84e8e0f:	e8 02 ef c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8e14:	0f b7 08             	movzwl (%eax),%ecx
 84e8e17:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84e8e1a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e8e1d:	0f b7 44 90 04       	movzwl 0x4(%eax,%edx,4),%eax
 84e8e22:	66 39 c1             	cmp    %ax,%cx
 84e8e25:	0f 94 c0             	sete   %al
 84e8e28:	84 c0                	test   %al,%al
 84e8e2a:	74 29                	je     84e8e55 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x171>
 84e8e2c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e8e2f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e8e32:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 84e8e38:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8e3c:	89 14 24             	mov    %edx,(%esp)
 84e8e3f:	e8 d2 ee c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8e44:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e8e47:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84e8e4a:	0f b7 54 8a 06       	movzwl 0x6(%edx,%ecx,4),%edx
 84e8e4f:	66 89 50 02          	mov    %dx,0x2(%eax)
 84e8e53:	eb 3b                	jmp    84e8e90 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x1ac>
 84e8e55:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8e58:	89 04 24             	mov    %eax,(%esp)
 84e8e5b:	e8 ee 2d be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e8e60:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e8e64:	c7 44 24 10 30 a5 c8 	movl   $0x8c8a530,0x10(%esp)
 84e8e6b:	08 
 84e8e6c:	c7 44 24 0c 06 6e 00 	movl   $0x6e06,0xc(%esp)
 84e8e73:	00 
 84e8e74:	c7 44 24 08 00 b3 c8 	movl   $0x8c8b300,0x8(%esp)
 84e8e7b:	08 
 84e8e7c:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e8e83:	08 
 84e8e84:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e8e8b:	e8 7a ad 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e8e90:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84e8e94:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e8e97:	8b 00                	mov    (%eax),%eax
 84e8e99:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84e8e9c:	0f 9f c0             	setg   %al
 84e8e9f:	84 c0                	test   %al,%al
 84e8ea1:	0f 85 55 ff ff ff    	jne    84e8dfc <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x118>
 84e8ea7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e8eaa:	8b 00                	mov    (%eax),%eax
 84e8eac:	85 c0                	test   %eax,%eax
 84e8eae:	0f 85 94 00 00 00    	jne    84e8f48 <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x264>
 84e8eb4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84e8ebb:	eb 6d                	jmp    84e8f2a <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x246>
 84e8ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8ec0:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 84e8ec6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e8ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8ecd:	89 14 24             	mov    %edx,(%esp)
 84e8ed0:	e8 41 ee c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8ed5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84e8ed9:	0f b7 f8             	movzwl %ax,%edi
 84e8edc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8edf:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 84e8ee5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e8ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8eec:	89 14 24             	mov    %edx,(%esp)
 84e8eef:	e8 22 ee c5 ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 84e8ef4:	0f b7 00             	movzwl (%eax),%eax
 84e8ef7:	0f b7 f0             	movzwl %ax,%esi
 84e8efa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8efd:	89 04 24             	mov    %eax,(%esp)
 84e8f00:	e8 49 2d be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e8f05:	89 c3                	mov    %eax,%ebx
 84e8f07:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8f0a:	89 04 24             	mov    %eax,(%esp)
 84e8f0d:	e8 84 fd bd ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84e8f12:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e8f16:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e8f1a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8f1e:	89 04 24             	mov    %eax,(%esp)
 84e8f21:	e8 08 3d f6 ff       	call   844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>
 84e8f26:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84e8f2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8f2d:	05 e4 d0 08 00       	add    $0x8d0e4,%eax
 84e8f32:	89 04 24             	mov    %eax,(%esp)
 84e8f35:	e8 c0 ed c5 ff       	call   8147cfa <_ZNKSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE4sizeEv>
 84e8f3a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84e8f3d:	0f 97 c0             	seta   %al
 84e8f40:	84 c0                	test   %al,%al
 84e8f42:	0f 85 75 ff ff ff    	jne    84e8ebd <_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci+0x1d9>
 84e8f48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e8f4f:	00 
 84e8f50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8f53:	89 04 24             	mov    %eax,(%esp)
 84e8f56:	e8 c3 e0 c5 ff       	call   814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>
 84e8f5b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e8f60:	83 c4 4c             	add    $0x4c,%esp
 84e8f63:	5b                   	pop    %ebx
 84e8f64:	5e                   	pop    %esi
 84e8f65:	5f                   	pop    %edi
 84e8f66:	5d                   	pop    %ebp
 84e8f67:	c3                   	ret

```

```c
// Inter_LoadEventLevelupSupport::dispatch_sig @ 0x84e8ce4

/* Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEventLevelupSupport::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  LevelupSupportEventManger *this;
  vector *pvVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  cMyTrace local_3c [16];
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_3c,
                       "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)"
                       ,0x6dee,5);
    cMyTrace::operator()
              (local_3c,"[%s] pUser or p is null.",
               "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)");
    uVar3 = 0x6def;
  }
  else {
    local_2c = (int *)param_3;
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(param_2 + 0x8d0e4));
    this = (LevelupSupportEventManger *)ARAD::Singleton<LevelupSupportEventManger>::Get();
    pvVar4 = (vector *)LevelupSupportEventManger::GetDefaultEventInfo(this);
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::operator=((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 *)(param_2 + 0x8d0e4),pvVar4);
    local_28 = 0;
    while( true ) {
      uVar5 = std::
              vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
              ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                      *)(param_2 + 0x8d0e4));
      if (uVar5 <= local_28) break;
      puVar8 = (ushort *)
               std::
               vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
               ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                             *)(param_2 + 0x8d0e4),local_28);
      uVar1 = *puVar8;
      iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if ((int)(uint)uVar1 <= iVar7) {
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_28);
        *(undefined2 *)(iVar7 + 2) = 1;
      }
      local_28 = local_28 + 1;
    }
    for (local_24 = 0; (int)local_24 < *local_2c; local_24 = local_24 + 1) {
      psVar6 = (short *)std::
                        vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                                      *)(param_2 + 0x8d0e4),local_24);
      if (*psVar6 == (short)local_2c[local_24 + 1]) {
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_24);
        *(undefined2 *)(iVar7 + 2) = *(undefined2 *)((int)local_2c + local_24 * 4 + 6);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)",
                   0x6e06,"Inter_LoadEventLevelupSupport diff state charac_no:%d",uVar3);
      }
    }
    if (*local_2c == 0) {
      local_20 = 0;
      while( true ) {
        uVar5 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        *)(param_2 + 0x8d0e4));
        if (uVar5 <= local_20) break;
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_20);
        uVar1 = *(ushort *)(iVar7 + 2);
        puVar8 = (ushort *)
                 std::
                 vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                               *)(param_2 + 0x8d0e4),local_20);
        uVar2 = *puVar8;
        iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        iVar9 = CUser::GetUID((CUser *)param_2);
        DB_SaveEventLevelupSupport::makeRequest(iVar9,iVar7,(uint)uVar2,(uint)uVar1);
        local_20 = local_20 + 1;
      }
    }
    LevelupSupportEventManger::SendCharacState((CUser *)param_2,0);
    uVar3 = 0;
  }
  return uVar3;
}

```

