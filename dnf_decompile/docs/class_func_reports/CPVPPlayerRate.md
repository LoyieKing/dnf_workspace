# CPVPPlayerRate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## InsertDatabase

```asm
// === 0860e9e0 CPVPPlayerRate::InsertDatabase  [0x0860e9e0-0x860eb15] ===
 860e9e0:	55                   	push   %ebp
 860e9e1:	89 e5                	mov    %esp,%ebp
 860e9e3:	56                   	push   %esi
 860e9e4:	53                   	push   %ebx
 860e9e5:	83 ec 20             	sub    $0x20,%esp
 860e9e8:	8b 45 08             	mov    0x8(%ebp),%eax
 860e9eb:	83 c0 04             	add    $0x4,%eax
 860e9ee:	89 04 24             	mov    %eax,(%esp)
 860e9f1:	e8 4a 6e c2 ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 860e9f6:	85 c0                	test   %eax,%eax
 860e9f8:	0f 94 c0             	sete   %al
 860e9fb:	84 c0                	test   %al,%al
 860e9fd:	0f 85 0b 01 00 00    	jne    860eb0e <_ZN14CPVPPlayerRate14InsertDatabaseEv+0x12e>
 860ea03:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860ea08:	c7 44 24 08 25 05 00 	movl   $0x525,0x8(%esp)
 860ea0f:	00 
 860ea10:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860ea17:	08 
 860ea18:	89 04 24             	mov    %eax,(%esp)
 860ea1b:	e8 66 10 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860ea20:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860ea27:	00 
 860ea28:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ea2c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ea2f:	89 04 24             	mov    %eax,(%esp)
 860ea32:	e8 ef a1 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860ea37:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ea3a:	89 04 24             	mov    %eax,(%esp)
 860ea3d:	e8 04 a2 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ea42:	c7 44 24 04 04 01 00 	movl   $0x104,0x4(%esp)
 860ea49:	00 
 860ea4a:	89 04 24             	mov    %eax,(%esp)
 860ea4d:	e8 04 a2 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ea52:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ea55:	89 04 24             	mov    %eax,(%esp)
 860ea58:	e8 e9 a1 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ea5d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860ea64:	ff 
 860ea65:	89 04 24             	mov    %eax,(%esp)
 860ea68:	e8 e9 a1 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ea6d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860ea74:	eb 37                	jmp    860eaad <_ZN14CPVPPlayerRate14InsertDatabaseEv+0xcd>
 860ea76:	8b 45 08             	mov    0x8(%ebp),%eax
 860ea79:	8d 50 04             	lea    0x4(%eax),%edx
 860ea7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ea7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ea83:	89 14 24             	mov    %edx,(%esp)
 860ea86:	e8 21 4a b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860ea8b:	8b 18                	mov    (%eax),%ebx
 860ea8d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ea90:	89 04 24             	mov    %eax,(%esp)
 860ea93:	e8 ae a1 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ea98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ea9c:	89 04 24             	mov    %eax,(%esp)
 860ea9f:	e8 b2 a1 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860eaa4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860eaa7:	83 c0 01             	add    $0x1,%eax
 860eaaa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860eaad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860eab0:	83 f8 05             	cmp    $0x5,%eax
 860eab3:	0f 9e c0             	setle  %al
 860eab6:	84 c0                	test   %al,%al
 860eab8:	75 bc                	jne    860ea76 <_ZN14CPVPPlayerRate14InsertDatabaseEv+0x96>
 860eaba:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860eabf:	8d 55 f0             	lea    -0x10(%ebp),%edx
 860eac2:	89 54 24 08          	mov    %edx,0x8(%esp)
 860eac6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860eacd:	00 
 860eace:	89 04 24             	mov    %eax,(%esp)
 860ead1:	e8 08 25 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860ead6:	8b 45 08             	mov    0x8(%ebp),%eax
 860ead9:	83 c0 04             	add    $0x4,%eax
 860eadc:	89 04 24             	mov    %eax,(%esp)
 860eadf:	e8 fa 81 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860eae4:	eb 1b                	jmp    860eb01 <_ZN14CPVPPlayerRate14InsertDatabaseEv+0x121>
 860eae6:	89 d3                	mov    %edx,%ebx
 860eae8:	89 c6                	mov    %eax,%esi
 860eaea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eaed:	89 04 24             	mov    %eax,(%esp)
 860eaf0:	e8 dd dd 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860eaf5:	89 f0                	mov    %esi,%eax
 860eaf7:	89 da                	mov    %ebx,%edx
 860eaf9:	89 04 24             	mov    %eax,(%esp)
 860eafc:	e8 4f 4c 4d 00       	call   8ae3750 <_Unwind_Resume>
 860eb01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eb04:	89 04 24             	mov    %eax,(%esp)
 860eb07:	e8 c6 dd 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860eb0c:	eb 01                	jmp    860eb0f <_ZN14CPVPPlayerRate14InsertDatabaseEv+0x12f>
 860eb0e:	90                   	nop
 860eb0f:	83 c4 20             	add    $0x20,%esp
 860eb12:	5b                   	pop    %ebx
 860eb13:	5e                   	pop    %esi
 860eb14:	5d                   	pop    %ebp
 860eb15:	c3                   	ret

```

```c
// CPVPPlayerRate::InsertDatabase @ 0x860e9e0

/* CPVPPlayerRate::InsertDatabase() */

void __thiscall CPVPPlayerRate::InsertDatabase(CPVPPlayerRate *this)

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
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x525);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860ea4d to 0860eae3 has its CatchHandler @ 0860eae6 */
    CStreamGuard::operator<<(pCVar3,0x104);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
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

