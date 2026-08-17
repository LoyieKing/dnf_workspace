# Inter_LoadEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf0c4 Inter_LoadEventItem::dispatch_sig  [0x084cf0c4-0x84cf2dd] ===
 84cf0c4:	55                   	push   %ebp
 84cf0c5:	89 e5                	mov    %esp,%ebp
 84cf0c7:	56                   	push   %esi
 84cf0c8:	53                   	push   %ebx
 84cf0c9:	83 ec 50             	sub    $0x50,%esp
 84cf0cc:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf0cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cf0d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf0d5:	8b 18                	mov    (%eax),%ebx
 84cf0d7:	e8 b2 d0 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84cf0dc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cf0e0:	89 04 24             	mov    %eax,(%esp)
 84cf0e3:	e8 de 57 dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84cf0e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cf0eb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84cf0ef:	75 0a                	jne    84cf0fb <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x37>
 84cf0f1:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf0f6:	e9 db 01 00 00       	jmp    84cf2d6 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x212>
 84cf0fb:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 84cf102:	00 
 84cf103:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cf10a:	00 
 84cf10b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cf10e:	89 04 24             	mov    %eax,(%esp)
 84cf111:	e8 aa eb ba ff       	call   807dcc0 <memset@plt>
 84cf116:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84cf11d:	e9 c0 00 00 00       	jmp    84cf1e2 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x11e>
 84cf122:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cf125:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf128:	c1 e2 04             	shl    $0x4,%edx
 84cf12b:	8b 44 02 10          	mov    0x10(%edx,%eax,1),%eax
 84cf12f:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 84cf134:	74 2c                	je     84cf162 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x9e>
 84cf136:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cf139:	89 04 24             	mov    %eax,(%esp)
 84cf13c:	e8 4b b2 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf141:	83 f8 02             	cmp    $0x2,%eax
 84cf144:	7e 15                	jle    84cf15b <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x97>
 84cf146:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cf149:	89 04 24             	mov    %eax,(%esp)
 84cf14c:	e8 fd ca bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84cf151:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cf154:	8b 52 04             	mov    0x4(%edx),%edx
 84cf157:	39 d0                	cmp    %edx,%eax
 84cf159:	74 07                	je     84cf162 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x9e>
 84cf15b:	b8 01 00 00 00       	mov    $0x1,%eax
 84cf160:	eb 05                	jmp    84cf167 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0xa3>
 84cf162:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf167:	84 c0                	test   %al,%al
 84cf169:	75 72                	jne    84cf1dd <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x119>
 84cf16b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cf16e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf171:	c1 e2 04             	shl    $0x4,%edx
 84cf174:	8b 5c 02 0c          	mov    0xc(%edx,%eax,1),%ebx
 84cf178:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cf17b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf17e:	c1 e2 04             	shl    $0x4,%edx
 84cf181:	8b 4c 02 18          	mov    0x18(%edx,%eax,1),%ecx
 84cf185:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cf188:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf18b:	c1 e2 04             	shl    $0x4,%edx
 84cf18e:	8b 54 02 14          	mov    0x14(%edx,%eax,1),%edx
 84cf192:	8b 75 f4             	mov    -0xc(%ebp),%esi
 84cf195:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf198:	c1 e6 04             	shl    $0x4,%esi
 84cf19b:	8b 44 06 10          	mov    0x10(%esi,%eax,1),%eax
 84cf19f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84cf1a3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84cf1a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cf1ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf1af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cf1b2:	89 04 24             	mov    %eax,(%esp)
 84cf1b5:	e8 64 20 1f 00       	call   86c121e <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj>
 84cf1ba:	84 c0                	test   %al,%al
 84cf1bc:	74 20                	je     84cf1de <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x11a>
 84cf1be:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cf1c1:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84cf1c4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cf1c7:	c1 e1 04             	shl    $0x4,%ecx
 84cf1ca:	8b 54 11 0c          	mov    0xc(%ecx,%edx,1),%edx
 84cf1ce:	89 54 85 d8          	mov    %edx,-0x28(%ebp,%eax,4)
 84cf1d2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cf1d5:	83 c0 01             	add    $0x1,%eax
 84cf1d8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84cf1db:	eb 01                	jmp    84cf1de <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x11a>
 84cf1dd:	90                   	nop
 84cf1de:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84cf1e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cf1e5:	8b 40 08             	mov    0x8(%eax),%eax
 84cf1e8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84cf1eb:	0f 9f c0             	setg   %al
 84cf1ee:	84 c0                	test   %al,%al
 84cf1f0:	0f 85 2c ff ff ff    	jne    84cf122 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x5e>
 84cf1f6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cf1f9:	85 c0                	test   %eax,%eax
 84cf1fb:	0f 84 d0 00 00 00    	je     84cf2d1 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x20d>
 84cf201:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84cf206:	c7 44 24 08 1f 2c 00 	movl   $0x2c1f,0x8(%esp)
 84cf20d:	00 
 84cf20e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cf215:	08 
 84cf216:	89 04 24             	mov    %eax,(%esp)
 84cf219:	e8 68 08 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84cf21e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cf225:	00 
 84cf226:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf22a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf22d:	89 04 24             	mov    %eax,(%esp)
 84cf230:	e8 f1 99 bf ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84cf235:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf238:	89 04 24             	mov    %eax,(%esp)
 84cf23b:	e8 06 9a bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84cf240:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 84cf247:	00 
 84cf248:	89 04 24             	mov    %eax,(%esp)
 84cf24b:	e8 06 9a bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84cf250:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf253:	89 04 24             	mov    %eax,(%esp)
 84cf256:	e8 eb 99 bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84cf25b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cf262:	ff 
 84cf263:	89 04 24             	mov    %eax,(%esp)
 84cf266:	e8 eb 99 bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84cf26b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf26e:	89 04 24             	mov    %eax,(%esp)
 84cf271:	e8 d8 99 bf ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84cf276:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 84cf27d:	00 
 84cf27e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84cf281:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cf285:	89 04 24             	mov    %eax,(%esp)
 84cf288:	e8 c5 f3 c0 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84cf28d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84cf292:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84cf295:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cf299:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cf2a0:	00 
 84cf2a1:	89 04 24             	mov    %eax,(%esp)
 84cf2a4:	e8 35 1d 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84cf2a9:	eb 1b                	jmp    84cf2c6 <_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci+0x202>
 84cf2ab:	89 d3                	mov    %edx,%ebx
 84cf2ad:	89 c6                	mov    %eax,%esi
 84cf2af:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf2b2:	89 04 24             	mov    %eax,(%esp)
 84cf2b5:	e8 18 d6 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84cf2ba:	89 f0                	mov    %esi,%eax
 84cf2bc:	89 da                	mov    %ebx,%edx
 84cf2be:	89 04 24             	mov    %eax,(%esp)
 84cf2c1:	e8 8a 44 61 00       	call   8ae3750 <_Unwind_Resume>
 84cf2c6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cf2c9:	89 04 24             	mov    %eax,(%esp)
 84cf2cc:	e8 01 d6 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84cf2d1:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf2d6:	83 c4 50             	add    $0x50,%esp
 84cf2d9:	5b                   	pop    %ebx
 84cf2da:	5e                   	pop    %esi
 84cf2db:	5d                   	pop    %ebp
 84cf2dc:	c3                   	ret
 84cf2dd:	90                   	nop

```

```c
// Inter_LoadEventItem::dispatch_sig @ 0x84cf0c4

/* Inter_LoadEventItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEventItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CGameManager *this;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_38 [8];
  int local_30;
  undefined4 auStack_2c [5];
  int local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = param_3;
  uVar1 = *(uint *)param_3;
  this = (CGameManager *)G_CGameManager();
  local_14 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_14 != (CUser *)0x0) {
    memset(&local_30,0,0x18);
    for (local_10 = 0; local_10 < *(int *)(local_18 + 8); local_10 = local_10 + 1) {
      if ((*(int *)(local_10 * 0x10 + 0x10 + local_18) == 999) ||
         ((iVar4 = CUser::get_state(local_14), 2 < iVar4 &&
          (iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14),
          iVar4 == *(int *)(local_18 + 4))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) &&
         (cVar3 = WongWork::CWebEvent::RecvInfoFromDB
                            (local_14,*(uint *)(local_10 * 0x10 + 0x10 + local_18),
                             *(uint *)(local_10 * 0x10 + 0x14 + local_18),
                             *(uint *)(local_10 * 0x10 + 0x18 + local_18),
                             *(uint *)(local_10 * 0x10 + 0xc + local_18)), cVar3 != '\0')) {
        auStack_2c[local_30] = *(undefined4 *)(local_10 * 0x10 + 0xc + local_18);
        local_30 = local_30 + 1;
      }
    }
    if (local_30 != 0) {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2c1f)
      ;
      CStreamGuard::CStreamGuard(local_38,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084cf24b to 084cf2a8 has its CatchHandler @ 084cf2ab */
      CStreamGuard::operator<<(pCVar6,0x4d);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar6,-1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_38);
      CStreamGuard::put_binary(pCVar6,&local_30,0x18);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
      CStreamGuard::~CStreamGuard(local_38);
    }
  }
  return 0;
}

```

