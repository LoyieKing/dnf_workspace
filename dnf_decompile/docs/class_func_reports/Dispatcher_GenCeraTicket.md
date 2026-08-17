# Dispatcher_GenCeraTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081feb12 Dispatcher_GenCeraTicket::dispatch_sig  [0x081feb12-0x81feca9] ===
 81feb12:	55                   	push   %ebp
 81feb13:	89 e5                	mov    %esp,%ebp
 81feb15:	56                   	push   %esi
 81feb16:	53                   	push   %ebx
 81feb17:	83 ec 40             	sub    $0x40,%esp
 81feb1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81feb1d:	89 04 24             	mov    %eax,(%esp)
 81feb20:	e8 67 b8 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81feb25:	83 f8 02             	cmp    $0x2,%eax
 81feb28:	7e 0f                	jle    81feb39 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81feb2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81feb2d:	89 04 24             	mov    %eax,(%esp)
 81feb30:	e8 fd 18 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81feb35:	85 c0                	test   %eax,%eax
 81feb37:	75 07                	jne    81feb40 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 81feb39:	b8 01 00 00 00       	mov    $0x1,%eax
 81feb3e:	eb 05                	jmp    81feb45 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x33>
 81feb40:	b8 00 00 00 00       	mov    $0x0,%eax
 81feb45:	84 c0                	test   %al,%al
 81feb47:	74 2b                	je     81feb74 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x62>
 81feb49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81feb50:	00 
 81feb51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81feb58:	00 
 81feb59:	c7 44 24 04 80 fa bc 	movl   $0x8bcfa80,0x4(%esp)
 81feb60:	08 
 81feb61:	c7 04 24 f0 91 00 00 	movl   $0x91f0,(%esp)
 81feb68:	e8 6a 1d 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81feb6d:	89 c3                	mov    %eax,%ebx
 81feb6f:	e9 2d 01 00 00       	jmp    81feca1 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x18f>
 81feb74:	c7 04 24 ff ff 00 00 	movl   $0xffff,(%esp)
 81feb7b:	e8 07 30 4b 00       	call   86b1b87 <_Z12get_rand_inti>
 81feb80:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81feb83:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81feb88:	c7 44 24 08 f5 91 00 	movl   $0x91f5,0x8(%esp)
 81feb8f:	00 
 81feb90:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81feb97:	08 
 81feb98:	89 04 24             	mov    %eax,(%esp)
 81feb9b:	e8 e6 0e 09 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81feba0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81feba7:	00 
 81feba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81febac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81febaf:	89 04 24             	mov    %eax,(%esp)
 81febb2:	e8 6f a0 ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81febb7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81febba:	89 04 24             	mov    %eax,(%esp)
 81febbd:	e8 84 a0 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81febc2:	c7 44 24 04 49 00 00 	movl   $0x49,0x4(%esp)
 81febc9:	00 
 81febca:	89 04 24             	mov    %eax,(%esp)
 81febcd:	e8 84 a0 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81febd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81febd5:	89 04 24             	mov    %eax,(%esp)
 81febd8:	e8 b9 a0 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81febdd:	89 c3                	mov    %eax,%ebx
 81febdf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81febe2:	89 04 24             	mov    %eax,(%esp)
 81febe5:	e8 5c a0 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81febea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81febee:	89 04 24             	mov    %eax,(%esp)
 81febf1:	e8 60 a0 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81febf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81febf9:	89 04 24             	mov    %eax,(%esp)
 81febfc:	e8 6d b7 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fec01:	89 c3                	mov    %eax,%ebx
 81fec03:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fec06:	89 04 24             	mov    %eax,(%esp)
 81fec09:	e8 38 a0 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fec0e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fec12:	89 04 24             	mov    %eax,(%esp)
 81fec15:	e8 78 36 ee ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 81fec1a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fec1d:	89 04 24             	mov    %eax,(%esp)
 81fec20:	e8 21 a0 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fec25:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81fec28:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fec2c:	89 04 24             	mov    %eax,(%esp)
 81fec2f:	e8 22 a0 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fec34:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81fec37:	89 04 24             	mov    %eax,(%esp)
 81fec3a:	e8 99 8a 2b 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 81fec3f:	89 c3                	mov    %eax,%ebx
 81fec41:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fec44:	89 04 24             	mov    %eax,(%esp)
 81fec47:	e8 fa 9f ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fec4c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fec50:	89 04 24             	mov    %eax,(%esp)
 81fec53:	e8 32 c1 02 00       	call   822ad8a <_ZN12CStreamGuardlsEPc>
 81fec58:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81fec5d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81fec60:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fec64:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fec6b:	00 
 81fec6c:	89 04 24             	mov    %eax,(%esp)
 81fec6f:	e8 6a 23 37 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81fec74:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fec79:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fec7c:	89 04 24             	mov    %eax,(%esp)
 81fec7f:	e8 4e dc 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81fec84:	eb 1b                	jmp    81feca1 <_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf+0x18f>
 81fec86:	89 d3                	mov    %edx,%ebx
 81fec88:	89 c6                	mov    %eax,%esi
 81fec8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fec8d:	89 04 24             	mov    %eax,(%esp)
 81fec90:	e8 3d dc 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81fec95:	89 f0                	mov    %esi,%eax
 81fec97:	89 da                	mov    %ebx,%edx
 81fec99:	89 04 24             	mov    %eax,(%esp)
 81fec9c:	e8 af 4a 8e 00       	call   8ae3750 <_Unwind_Resume>
 81feca1:	89 d8                	mov    %ebx,%eax
 81feca3:	83 c4 40             	add    $0x40,%esp
 81feca6:	5b                   	pop    %ebx
 81feca7:	5e                   	pop    %esi
 81feca8:	5d                   	pop    %ebp
 81feca9:	c3                   	ret

```

```c
// Dispatcher_GenCeraTicket::dispatch_sig @ 0x81feb12

/* Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GenCeraTicket::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  char *pcVar7;
  char local_38 [32];
  CStreamGuard local_18 [8];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081feb45;
    }
  }
  bVar1 = true;
LAB_081feb45:
  if (bVar1) {
    uVar3 = LineFunc(0x91f0,"virtual int Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_10 = get_rand_int(0xffff);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x91f5);
    CStreamGuard::CStreamGuard(local_18,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081febcd to 081fec73 has its CatchHandler @ 081fec86 */
    CStreamGuard::operator<<(pCVar5,0x49);
    iVar2 = CUser::GetUID((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,iVar2);
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,uVar6);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,local_10);
    pcVar7 = (char *)WongWork::CGenUniqueNo::GenUniqueNo(local_38);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,pcVar7);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    uVar3 = 0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return uVar3;
}

```

