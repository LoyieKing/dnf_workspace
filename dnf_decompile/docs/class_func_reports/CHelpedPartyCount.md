# CHelpedPartyCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## InsertDatabase

```asm
// === 0860e8aa CHelpedPartyCount::InsertDatabase  [0x0860e8aa-0x860e9df] ===
 860e8aa:	55                   	push   %ebp
 860e8ab:	89 e5                	mov    %esp,%ebp
 860e8ad:	56                   	push   %esi
 860e8ae:	53                   	push   %ebx
 860e8af:	83 ec 20             	sub    $0x20,%esp
 860e8b2:	8b 45 08             	mov    0x8(%ebp),%eax
 860e8b5:	83 c0 04             	add    $0x4,%eax
 860e8b8:	89 04 24             	mov    %eax,(%esp)
 860e8bb:	e8 80 6f c2 ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 860e8c0:	85 c0                	test   %eax,%eax
 860e8c2:	0f 94 c0             	sete   %al
 860e8c5:	84 c0                	test   %al,%al
 860e8c7:	0f 85 0b 01 00 00    	jne    860e9d8 <_ZN17CHelpedPartyCount14InsertDatabaseEv+0x12e>
 860e8cd:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860e8d2:	c7 44 24 08 12 05 00 	movl   $0x512,0x8(%esp)
 860e8d9:	00 
 860e8da:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860e8e1:	08 
 860e8e2:	89 04 24             	mov    %eax,(%esp)
 860e8e5:	e8 9c 11 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860e8ea:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860e8f1:	00 
 860e8f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e8f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e8f9:	89 04 24             	mov    %eax,(%esp)
 860e8fc:	e8 25 a3 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860e901:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e904:	89 04 24             	mov    %eax,(%esp)
 860e907:	e8 3a a3 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e90c:	c7 44 24 04 03 01 00 	movl   $0x103,0x4(%esp)
 860e913:	00 
 860e914:	89 04 24             	mov    %eax,(%esp)
 860e917:	e8 3a a3 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e91c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e91f:	89 04 24             	mov    %eax,(%esp)
 860e922:	e8 1f a3 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e927:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860e92e:	ff 
 860e92f:	89 04 24             	mov    %eax,(%esp)
 860e932:	e8 1f a3 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e937:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860e93e:	eb 37                	jmp    860e977 <_ZN17CHelpedPartyCount14InsertDatabaseEv+0xcd>
 860e940:	8b 45 08             	mov    0x8(%ebp),%eax
 860e943:	8d 50 04             	lea    0x4(%eax),%edx
 860e946:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e949:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e94d:	89 14 24             	mov    %edx,(%esp)
 860e950:	e8 57 4b b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860e955:	8b 18                	mov    (%eax),%ebx
 860e957:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e95a:	89 04 24             	mov    %eax,(%esp)
 860e95d:	e8 e4 a2 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e962:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e966:	89 04 24             	mov    %eax,(%esp)
 860e969:	e8 e8 a2 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e96e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860e971:	83 c0 01             	add    $0x1,%eax
 860e974:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860e977:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860e97a:	83 f8 04             	cmp    $0x4,%eax
 860e97d:	0f 9e c0             	setle  %al
 860e980:	84 c0                	test   %al,%al
 860e982:	75 bc                	jne    860e940 <_ZN17CHelpedPartyCount14InsertDatabaseEv+0x96>
 860e984:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860e989:	8d 55 f0             	lea    -0x10(%ebp),%edx
 860e98c:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e990:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860e997:	00 
 860e998:	89 04 24             	mov    %eax,(%esp)
 860e99b:	e8 3e 26 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860e9a0:	8b 45 08             	mov    0x8(%ebp),%eax
 860e9a3:	83 c0 04             	add    $0x4,%eax
 860e9a6:	89 04 24             	mov    %eax,(%esp)
 860e9a9:	e8 30 83 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860e9ae:	eb 1b                	jmp    860e9cb <_ZN17CHelpedPartyCount14InsertDatabaseEv+0x121>
 860e9b0:	89 d3                	mov    %edx,%ebx
 860e9b2:	89 c6                	mov    %eax,%esi
 860e9b4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e9b7:	89 04 24             	mov    %eax,(%esp)
 860e9ba:	e8 13 df 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e9bf:	89 f0                	mov    %esi,%eax
 860e9c1:	89 da                	mov    %ebx,%edx
 860e9c3:	89 04 24             	mov    %eax,(%esp)
 860e9c6:	e8 85 4d 4d 00       	call   8ae3750 <_Unwind_Resume>
 860e9cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e9ce:	89 04 24             	mov    %eax,(%esp)
 860e9d1:	e8 fc de 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e9d6:	eb 01                	jmp    860e9d9 <_ZN17CHelpedPartyCount14InsertDatabaseEv+0x12f>
 860e9d8:	90                   	nop
 860e9d9:	83 c4 20             	add    $0x20,%esp
 860e9dc:	5b                   	pop    %ebx
 860e9dd:	5e                   	pop    %esi
 860e9de:	5d                   	pop    %ebp
 860e9df:	c3                   	ret

```

```c
// CHelpedPartyCount::InsertDatabase @ 0x860e8aa

/* CHelpedPartyCount::InsertDatabase() */

void __thiscall CHelpedPartyCount::InsertDatabase(CHelpedPartyCount *this)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int local_18;
  CStreamGuard local_14 [8];
  
  iVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 4));
  if (iVar1 != 0) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x512);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860e917 to 0860e9ad has its CatchHandler @ 0860e9b0 */
    CStreamGuard::operator<<(pCVar3,0x103);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)(this + 4),&local_18);
      iVar1 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar3,iVar1);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

