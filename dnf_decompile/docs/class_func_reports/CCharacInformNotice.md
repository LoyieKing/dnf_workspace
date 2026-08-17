# CCharacInformNotice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CCharacInformNotice

```asm
// === 080e4790 CCharacInformNotice::CCharacInformNotice  [0x080e4790-0x80e47b7] ===
 80e4790:	55                   	push   %ebp
 80e4791:	89 e5                	mov    %esp,%ebp
 80e4793:	83 ec 18             	sub    $0x18,%esp
 80e4796:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4799:	89 04 24             	mov    %eax,(%esp)
 80e479c:	e8 19 45 fe ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 80e47a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47a4:	c7 00 68 e9 b2 08    	movl   $0x8b2e968,(%eax)
 80e47aa:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47ad:	89 04 24             	mov    %eax,(%esp)
 80e47b0:	e8 03 03 00 00       	call   80e4ab8 <_ZN19CCharacInformNotice6_resetEv>
 80e47b5:	c9                   	leave
 80e47b6:	c3                   	ret
 80e47b7:	90                   	nop

```

```c
// CCharacInformNotice::CCharacInformNotice @ 0x80e4790

/* CCharacInformNotice::CCharacInformNotice() */

void __thiscall CCharacInformNotice::CCharacInformNotice(CCharacInformNotice *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b2e968;
  _reset(this);
  return;
}

```

---

## _reset

```asm
// === 080e4ab8 CCharacInformNotice::_reset  [0x080e4ab8-0x80e4add] ===
 80e4ab8:	55                   	push   %ebp
 80e4ab9:	89 e5                	mov    %esp,%ebp
 80e4abb:	83 ec 18             	sub    $0x18,%esp
 80e4abe:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4ac1:	83 c0 05             	add    $0x5,%eax
 80e4ac4:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80e4acb:	00 
 80e4acc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80e4ad3:	00 
 80e4ad4:	89 04 24             	mov    %eax,(%esp)
 80e4ad7:	e8 e4 91 f9 ff       	call   807dcc0 <memset@plt>
 80e4adc:	c9                   	leave
 80e4add:	c3                   	ret

```

```c
// CCharacInformNotice::_reset @ 0x80e4ab8

/* CCharacInformNotice::_reset() */

void __thiscall CCharacInformNotice::_reset(CCharacInformNotice *this)

{
  memset(this + 5,0,0x10);
  return;
}

```

---

## _saveData

```asm
// === 080e4b52 CCharacInformNotice::_saveData  [0x080e4b52-0x80e4c99] ===
 80e4b52:	55                   	push   %ebp
 80e4b53:	89 e5                	mov    %esp,%ebp
 80e4b55:	56                   	push   %esi
 80e4b56:	53                   	push   %ebx
 80e4b57:	83 ec 20             	sub    $0x20,%esp
 80e4b5a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e4b5f:	c7 44 24 08 77 00 00 	movl   $0x77,0x8(%esp)
 80e4b66:	00 
 80e4b67:	c7 44 24 04 20 dd b2 	movl   $0x8b2dd20,0x4(%esp)
 80e4b6e:	08 
 80e4b6f:	89 04 24             	mov    %eax,(%esp)
 80e4b72:	e8 0f af 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e4b77:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e4b7e:	00 
 80e4b7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4b83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4b86:	89 04 24             	mov    %eax,(%esp)
 80e4b89:	e8 98 40 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e4b8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4b91:	89 04 24             	mov    %eax,(%esp)
 80e4b94:	e8 ad 40 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e4b99:	c7 44 24 04 11 03 00 	movl   $0x311,0x4(%esp)
 80e4ba0:	00 
 80e4ba1:	89 04 24             	mov    %eax,(%esp)
 80e4ba4:	e8 ad 40 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e4ba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4bac:	89 04 24             	mov    %eax,(%esp)
 80e4baf:	e8 e2 40 fe ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 80e4bb4:	89 c3                	mov    %eax,%ebx
 80e4bb6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4bb9:	89 04 24             	mov    %eax,(%esp)
 80e4bbc:	e8 85 40 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e4bc1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e4bc5:	89 04 24             	mov    %eax,(%esp)
 80e4bc8:	e8 89 40 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e4bcd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4bd0:	89 04 24             	mov    %eax,(%esp)
 80e4bd3:	e8 76 40 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80e4bd8:	89 04 24             	mov    %eax,(%esp)
 80e4bdb:	e8 de 01 00 00       	call   80e4dbe <_ZN12CStreamGuard11GetInBufferI29SIG_SAVE_CHARAC_INFORM_NOTICEEEPT_v>
 80e4be0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e4be3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80e4be7:	75 0a                	jne    80e4bf3 <_ZN19CCharacInformNotice9_saveDataEP5CUser+0xa1>
 80e4be9:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e4bee:	e9 93 00 00 00       	jmp    80e4c86 <_ZN19CCharacInformNotice9_saveDataEP5CUser+0x134>
 80e4bf3:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80e4bfa:	00 
 80e4bfb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80e4c02:	00 
 80e4c03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e4c06:	89 04 24             	mov    %eax,(%esp)
 80e4c09:	e8 b2 90 f9 ff       	call   807dcc0 <memset@plt>
 80e4c0e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80e4c15:	ff 
 80e4c16:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4c19:	89 04 24             	mov    %eax,(%esp)
 80e4c1c:	e8 7f 93 56 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80e4c21:	89 c2                	mov    %eax,%edx
 80e4c23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e4c26:	89 10                	mov    %edx,(%eax)
 80e4c28:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4c2b:	8d 50 05             	lea    0x5(%eax),%edx
 80e4c2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e4c31:	83 c0 04             	add    $0x4,%eax
 80e4c34:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80e4c3b:	00 
 80e4c3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e4c40:	89 04 24             	mov    %eax,(%esp)
 80e4c43:	e8 58 8c f9 ff       	call   807d8a0 <memcpy@plt>
 80e4c48:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e4c4d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80e4c50:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e4c54:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e4c5b:	00 
 80e4c5c:	89 04 24             	mov    %eax,(%esp)
 80e4c5f:	e8 7a c3 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e4c64:	bb 01 00 00 00       	mov    $0x1,%ebx
 80e4c69:	eb 1b                	jmp    80e4c86 <_ZN19CCharacInformNotice9_saveDataEP5CUser+0x134>
 80e4c6b:	89 d3                	mov    %edx,%ebx
 80e4c6d:	89 c6                	mov    %eax,%esi
 80e4c6f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4c72:	89 04 24             	mov    %eax,(%esp)
 80e4c75:	e8 58 7c 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e4c7a:	89 f0                	mov    %esi,%eax
 80e4c7c:	89 da                	mov    %ebx,%edx
 80e4c7e:	89 04 24             	mov    %eax,(%esp)
 80e4c81:	e8 ca ea 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e4c86:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e4c89:	89 04 24             	mov    %eax,(%esp)
 80e4c8c:	e8 41 7c 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e4c91:	89 d8                	mov    %ebx,%eax
 80e4c93:	83 c4 20             	add    $0x20,%esp
 80e4c96:	5b                   	pop    %ebx
 80e4c97:	5e                   	pop    %esi
 80e4c98:	5d                   	pop    %ebp
 80e4c99:	c3                   	ret

```

```c
// CCharacInformNotice::_saveData @ 0x80e4b52

/* CCharacInformNotice::_saveData(CUser*) */

bool __thiscall CCharacInformNotice::_saveData(CCharacInformNotice *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_SAVE_CHARAC_INFORM_NOTICE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacInformNotice.cpp",0x77);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080e4ba4 to 080e4c63 has its CatchHandler @ 080e4c6b */
  CStreamGuard::operator<<(pCVar2,0x311);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CHARAC_INFORM_NOTICE>(pCVar2);
  bVar5 = local_10 != (SIG_SAVE_CHARAC_INFORM_NOTICE *)0x0;
  if (bVar5) {
    memset(local_10,0,0x14);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_10 = uVar4;
    memcpy(local_10 + 4,this + 5,0x10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## checkInformNoticeFlag

```asm
// === 080e4892 CCharacInformNotice::checkInformNoticeFlag  [0x080e4892-0x80e48eb] ===
 80e4892:	55                   	push   %ebp
 80e4893:	89 e5                	mov    %esp,%ebp
 80e4895:	53                   	push   %ebx
 80e4896:	83 ec 10             	sub    $0x10,%esp
 80e4899:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 80e489d:	76 07                	jbe    80e48a6 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x14>
 80e489f:	b8 00 00 00 00       	mov    $0x0,%eax
 80e48a4:	eb 40                	jmp    80e48e6 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x54>
 80e48a6:	83 7d 10 0f          	cmpl   $0xf,0x10(%ebp)
 80e48aa:	76 07                	jbe    80e48b3 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x21>
 80e48ac:	b8 00 00 00 00       	mov    $0x0,%eax
 80e48b1:	eb 33                	jmp    80e48e6 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x54>
 80e48b3:	8b 45 10             	mov    0x10(%ebp),%eax
 80e48b6:	8b 55 08             	mov    0x8(%ebp),%edx
 80e48b9:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 80e48be:	88 45 fb             	mov    %al,-0x5(%ebp)
 80e48c1:	0f b6 55 fb          	movzbl -0x5(%ebp),%edx
 80e48c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e48c8:	89 d3                	mov    %edx,%ebx
 80e48ca:	89 c1                	mov    %eax,%ecx
 80e48cc:	d3 fb                	sar    %cl,%ebx
 80e48ce:	89 d8                	mov    %ebx,%eax
 80e48d0:	83 e0 01             	and    $0x1,%eax
 80e48d3:	83 f0 01             	xor    $0x1,%eax
 80e48d6:	84 c0                	test   %al,%al
 80e48d8:	74 07                	je     80e48e1 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x4f>
 80e48da:	b8 01 00 00 00       	mov    $0x1,%eax
 80e48df:	eb 05                	jmp    80e48e6 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj+0x54>
 80e48e1:	b8 00 00 00 00       	mov    $0x0,%eax
 80e48e6:	83 c4 10             	add    $0x10,%esp
 80e48e9:	5b                   	pop    %ebx
 80e48ea:	5d                   	pop    %ebp
 80e48eb:	c3                   	ret

```

```c
// CCharacInformNotice::checkInformNoticeFlag @ 0x80e4892

/* CCharacInformNotice::checkInformNoticeFlag(unsigned int, unsigned int) */

undefined4 __thiscall
CCharacInformNotice::checkInformNoticeFlag(CCharacInformNotice *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if (param_2 < 0x10) {
      if (((byte)((int)(uint)(byte)this[param_2 + 5] >> ((byte)param_1 & 0x1f)) & 1) == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getData

```asm
// === 080e4b2c CCharacInformNotice::getData  [0x080e4b2c-0x80e4b51] ===
 80e4b2c:	55                   	push   %ebp
 80e4b2d:	89 e5                	mov    %esp,%ebp
 80e4b2f:	83 ec 18             	sub    $0x18,%esp
 80e4b32:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4b35:	83 c0 05             	add    $0x5,%eax
 80e4b38:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80e4b3f:	00 
 80e4b40:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4b44:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4b47:	89 04 24             	mov    %eax,(%esp)
 80e4b4a:	e8 51 8d f9 ff       	call   807d8a0 <memcpy@plt>
 80e4b4f:	c9                   	leave
 80e4b50:	c3                   	ret
 80e4b51:	90                   	nop

```

```c
// CCharacInformNotice::getData @ 0x80e4b2c

/* CCharacInformNotice::getData(char*) const */

void __thiscall CCharacInformNotice::getData(CCharacInformNotice *this,char *param_1)

{
  memcpy(param_1,this + 5,0x10);
  return;
}

```

---

## getInformNoticeFlag

```asm
// === 080e48ec CCharacInformNotice::getInformNoticeFlag  [0x080e48ec-0x80e48fb] ===
 80e48ec:	55                   	push   %ebp
 80e48ed:	89 e5                	mov    %esp,%ebp
 80e48ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e48f2:	8b 55 08             	mov    0x8(%ebp),%edx
 80e48f5:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 80e48fa:	5d                   	pop    %ebp
 80e48fb:	c3                   	ret

```

```c
// CCharacInformNotice::getInformNoticeFlag @ 0x80e48ec

/* CCharacInformNotice::getInformNoticeFlag(int) */

CCharacInformNotice __thiscall
CCharacInformNotice::getInformNoticeFlag(CCharacInformNotice *this,int param_1)

{
  return this[param_1 + 5];
}

```

---

## getInformNoticeFlagIndex

```asm
// === 080e48fc CCharacInformNotice::getInformNoticeFlagIndex  [0x080e48fc-0x80e4993] ===
 80e48fc:	55                   	push   %ebp
 80e48fd:	89 e5                	mov    %esp,%ebp
 80e48ff:	53                   	push   %ebx
 80e4900:	83 ec 24             	sub    $0x24,%esp
 80e4903:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4906:	89 04 24             	mov    %eax,(%esp)
 80e4909:	e8 e8 03 00 00       	call   80e4cf6 <_ZNSt6vectorIhSaIhEE5clearEv>
 80e490e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80e4915:	eb 6c                	jmp    80e4983 <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE+0x87>
 80e4917:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e491a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e491e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4921:	89 04 24             	mov    %eax,(%esp)
 80e4924:	e8 c3 ff ff ff       	call   80e48ec <_ZN19CCharacInformNotice19getInformNoticeFlagEi>
 80e4929:	88 45 f3             	mov    %al,-0xd(%ebp)
 80e492c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e4933:	eb 3f                	jmp    80e4974 <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE+0x78>
 80e4935:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 80e4939:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e493c:	89 d3                	mov    %edx,%ebx
 80e493e:	89 c1                	mov    %eax,%ecx
 80e4940:	d3 fb                	sar    %cl,%ebx
 80e4942:	89 d8                	mov    %ebx,%eax
 80e4944:	83 e0 01             	and    $0x1,%eax
 80e4947:	84 c0                	test   %al,%al
 80e4949:	74 25                	je     80e4970 <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE+0x74>
 80e494b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e494e:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e4955:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e4958:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e495b:	88 45 eb             	mov    %al,-0x15(%ebp)
 80e495e:	8d 45 eb             	lea    -0x15(%ebp),%eax
 80e4961:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4965:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4968:	89 04 24             	mov    %eax,(%esp)
 80e496b:	e8 14 04 00 00       	call   80e4d84 <_ZNSt6vectorIhSaIhEE9push_backEOh>
 80e4970:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e4974:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 80e4978:	0f 9e c0             	setle  %al
 80e497b:	84 c0                	test   %al,%al
 80e497d:	75 b6                	jne    80e4935 <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE+0x39>
 80e497f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80e4983:	83 7d ec 0f          	cmpl   $0xf,-0x14(%ebp)
 80e4987:	0f 9e c0             	setle  %al
 80e498a:	84 c0                	test   %al,%al
 80e498c:	75 89                	jne    80e4917 <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE+0x1b>
 80e498e:	83 c4 24             	add    $0x24,%esp
 80e4991:	5b                   	pop    %ebx
 80e4992:	5d                   	pop    %ebp
 80e4993:	c3                   	ret

```

```c
// CCharacInformNotice::getInformNoticeFlagIndex @ 0x80e48fc

/* CCharacInformNotice::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned
   char> >&) */

void __thiscall
CCharacInformNotice::getInformNoticeFlagIndex(CCharacInformNotice *this,vector *param_1)

{
  uchar local_19;
  int local_18;
  byte local_11;
  int local_10;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1);
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    local_11 = getInformNoticeFlag(this,local_18);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (((int)(uint)local_11 >> ((byte)local_10 & 0x1f) & 1U) != 0) {
        local_19 = (char)local_18 * '\b' + (byte)local_10;
        std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1,&local_19);
      }
    }
  }
  return;
}

```

---

## handleInformNoticeFlag

```asm
// === 080e4806 CCharacInformNotice::handleInformNoticeFlag  [0x080e4806-0x80e4891] ===
 80e4806:	55                   	push   %ebp
 80e4807:	89 e5                	mov    %esp,%ebp
 80e4809:	57                   	push   %edi
 80e480a:	56                   	push   %esi
 80e480b:	53                   	push   %ebx
 80e480c:	83 ec 2c             	sub    $0x2c,%esp
 80e480f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4812:	83 e0 07             	and    $0x7,%eax
 80e4815:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80e4818:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 80e481c:	77 65                	ja     80e4883 <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x7d>
 80e481e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4821:	c1 e8 03             	shr    $0x3,%eax
 80e4824:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80e4827:	83 7d e4 0f          	cmpl   $0xf,-0x1c(%ebp)
 80e482b:	77 59                	ja     80e4886 <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x80>
 80e482d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e4830:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e4834:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e4837:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e483b:	8b 45 08             	mov    0x8(%ebp),%eax
 80e483e:	89 04 24             	mov    %eax,(%esp)
 80e4841:	e8 4c 00 00 00       	call   80e4892 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj>
 80e4846:	84 c0                	test   %al,%al
 80e4848:	74 3f                	je     80e4889 <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x83>
 80e484a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e484d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80e4850:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80e4853:	0f b6 54 11 05       	movzbl 0x5(%ecx,%edx,1),%edx
 80e4858:	89 d3                	mov    %edx,%ebx
 80e485a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80e485d:	be 01 00 00 00       	mov    $0x1,%esi
 80e4862:	89 f7                	mov    %esi,%edi
 80e4864:	89 d1                	mov    %edx,%ecx
 80e4866:	d3 e7                	shl    %cl,%edi
 80e4868:	89 fa                	mov    %edi,%edx
 80e486a:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 80e486d:	89 d1                	mov    %edx,%ecx
 80e486f:	8b 55 08             	mov    0x8(%ebp),%edx
 80e4872:	88 4c 02 05          	mov    %cl,0x5(%edx,%eax,1)
 80e4876:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4879:	89 04 24             	mov    %eax,(%esp)
 80e487c:	e8 43 43 fe ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80e4881:	eb 07                	jmp    80e488a <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x84>
 80e4883:	90                   	nop
 80e4884:	eb 04                	jmp    80e488a <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x84>
 80e4886:	90                   	nop
 80e4887:	eb 01                	jmp    80e488a <_ZN19CCharacInformNotice22handleInformNoticeFlagEj+0x84>
 80e4889:	90                   	nop
 80e488a:	83 c4 2c             	add    $0x2c,%esp
 80e488d:	5b                   	pop    %ebx
 80e488e:	5e                   	pop    %esi
 80e488f:	5f                   	pop    %edi
 80e4890:	5d                   	pop    %ebp
 80e4891:	c3                   	ret

```

```c
// CCharacInformNotice::handleInformNoticeFlag @ 0x80e4806

/* CCharacInformNotice::handleInformNoticeFlag(unsigned int) */

void __thiscall CCharacInformNotice::handleInformNoticeFlag(CCharacInformNotice *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 7;
  if (((uVar2 < 8) && (uVar3 = param_1 >> 3, uVar3 < 0x10)) &&
     (cVar1 = checkInformNoticeFlag(this,uVar2,uVar3), cVar1 != '\0')) {
    this[uVar3 + 5] = (CCharacInformNotice)((char)this[uVar3 + 5] + (char)(1 << (sbyte)uVar2));
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## loadData

```asm
// === 080e4ade CCharacInformNotice::loadData  [0x080e4ade-0x80e4b2b] ===
 80e4ade:	55                   	push   %ebp
 80e4adf:	89 e5                	mov    %esp,%ebp
 80e4ae1:	83 ec 18             	sub    $0x18,%esp
 80e4ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4ae7:	8b 00                	mov    (%eax),%eax
 80e4ae9:	83 c0 1c             	add    $0x1c,%eax
 80e4aec:	8b 10                	mov    (%eax),%edx
 80e4aee:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4af1:	89 04 24             	mov    %eax,(%esp)
 80e4af4:	ff d2                	call   *%edx
 80e4af6:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4af9:	8d 50 05             	lea    0x5(%eax),%edx
 80e4afc:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80e4b03:	00 
 80e4b04:	8b 45 10             	mov    0x10(%ebp),%eax
 80e4b07:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4b0b:	89 14 24             	mov    %edx,(%esp)
 80e4b0e:	e8 8d 8d f9 ff       	call   807d8a0 <memcpy@plt>
 80e4b13:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4b16:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e4b1d:	89 04 24             	mov    %eax,(%esp)
 80e4b20:	e8 6f fe ff ff       	call   80e4994 <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser>
 80e4b25:	b8 01 00 00 00       	mov    $0x1,%eax
 80e4b2a:	c9                   	leave
 80e4b2b:	c3                   	ret

```

```c
// CCharacInformNotice::loadData @ 0x80e4ade

/* CCharacInformNotice::loadData(CUser*, char*) */

undefined4 __thiscall
CCharacInformNotice::loadData(CCharacInformNotice *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  memcpy(this + 5,param_2,0x10);
  sendInformNoticeFlag(this,param_1);
  return 1;
}

```

---

## sendInformNoticeFlag

```asm
// === 080e4994 CCharacInformNotice::sendInformNoticeFlag  [0x080e4994-0x80e4ab7] ===
 80e4994:	55                   	push   %ebp
 80e4995:	89 e5                	mov    %esp,%ebp
 80e4997:	56                   	push   %esi
 80e4998:	53                   	push   %ebx
 80e4999:	83 ec 30             	sub    $0x30,%esp
 80e499c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e499f:	89 04 24             	mov    %eax,(%esp)
 80e49a2:	e8 6b 03 00 00       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 80e49a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e49aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e49ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80e49b1:	89 04 24             	mov    %eax,(%esp)
 80e49b4:	e8 43 ff ff ff       	call   80e48fc <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE>
 80e49b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e49bc:	89 04 24             	mov    %eax,(%esp)
 80e49bf:	e8 88 93 4a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80e49c4:	c7 44 24 08 b8 01 00 	movl   $0x1b8,0x8(%esp)
 80e49cb:	00 
 80e49cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80e49d3:	00 
 80e49d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e49d7:	89 04 24             	mov    %eax,(%esp)
 80e49da:	e8 1d 6f fe ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80e49df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e49e2:	89 04 24             	mov    %eax,(%esp)
 80e49e5:	e8 b6 ab f9 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 80e49ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e49ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e49f1:	89 04 24             	mov    %eax,(%esp)
 80e49f4:	e8 27 6f fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80e49f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e4a00:	eb 2b                	jmp    80e4a2d <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser+0x99>
 80e4a02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e4a05:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4a09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e4a0c:	89 04 24             	mov    %eax,(%esp)
 80e4a0f:	e8 9c 03 00 00       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 80e4a14:	0f b6 00             	movzbl (%eax),%eax
 80e4a17:	0f b6 c0             	movzbl %al,%eax
 80e4a1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4a1e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e4a21:	89 04 24             	mov    %eax,(%esp)
 80e4a24:	e8 f7 6e fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80e4a29:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e4a2d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e4a30:	89 04 24             	mov    %eax,(%esp)
 80e4a33:	e8 68 ab f9 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 80e4a38:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e4a3b:	0f 97 c0             	seta   %al
 80e4a3e:	84 c0                	test   %al,%al
 80e4a40:	75 c0                	jne    80e4a02 <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser+0x6e>
 80e4a42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e4a49:	00 
 80e4a4a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e4a4d:	89 04 24             	mov    %eax,(%esp)
 80e4a50:	e8 03 6f fe ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80e4a55:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e4a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e4a5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e4a5f:	89 04 24             	mov    %eax,(%esp)
 80e4a62:	e8 53 3b 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80e4a67:	eb 15                	jmp    80e4a7e <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser+0xea>
 80e4a69:	89 d3                	mov    %edx,%ebx
 80e4a6b:	89 c6                	mov    %eax,%esi
 80e4a6d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e4a70:	89 04 24             	mov    %eax,(%esp)
 80e4a73:	e8 08 94 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80e4a78:	89 f0                	mov    %esi,%eax
 80e4a7a:	89 da                	mov    %ebx,%edx
 80e4a7c:	eb 0d                	jmp    80e4a8b <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser+0xf7>
 80e4a7e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e4a81:	89 04 24             	mov    %eax,(%esp)
 80e4a84:	e8 f7 93 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80e4a89:	eb 1b                	jmp    80e4aa6 <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser+0x112>
 80e4a8b:	89 d3                	mov    %edx,%ebx
 80e4a8d:	89 c6                	mov    %eax,%esi
 80e4a8f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e4a92:	89 04 24             	mov    %eax,(%esp)
 80e4a95:	e8 8c 02 00 00       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 80e4a9a:	89 f0                	mov    %esi,%eax
 80e4a9c:	89 da                	mov    %ebx,%edx
 80e4a9e:	89 04 24             	mov    %eax,(%esp)
 80e4aa1:	e8 aa ec 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e4aa6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e4aa9:	89 04 24             	mov    %eax,(%esp)
 80e4aac:	e8 75 02 00 00       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 80e4ab1:	83 c4 30             	add    $0x30,%esp
 80e4ab4:	5b                   	pop    %ebx
 80e4ab5:	5e                   	pop    %esi
 80e4ab6:	5d                   	pop    %ebp
 80e4ab7:	c3                   	ret

```

```c
// CCharacInformNotice::sendInformNoticeFlag @ 0x80e4994

/* CCharacInformNotice::sendInformNoticeFlag(CUser*) */

void __thiscall CCharacInformNotice::sendInformNoticeFlag(CCharacInformNotice *this,CUser *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  PacketGuard local_28 [12];
  vector<unsigned_char,std::allocator<unsigned_char>> local_1c [12];
  uint local_10;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_1c);
                    /* try { // try from 080e49b4 to 080e49c3 has its CatchHandler @ 080e4a8b */
  getInformNoticeFlagIndex(this,(vector *)local_1c);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 080e49da to 080e4a66 has its CatchHandler @ 080e4a69 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x1b8);
  iVar1 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_1c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar1);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_1c);
    if (uVar3 <= local_10) break;
    pbVar2 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                               (local_1c,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*pbVar2);
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
                    /* try { // try from 080e4a84 to 080e4a88 has its CatchHandler @ 080e4a8b */
  PacketGuard::~PacketGuard(local_28);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_1c);
  return;
}

```

---

## ~CCharacInformNotice

```asm
// === 080e47b8 CCharacInformNotice::~CCharacInformNotice  [0x080e47b8-0x80e47e7] ===
 80e47b8:	55                   	push   %ebp
 80e47b9:	89 e5                	mov    %esp,%ebp
 80e47bb:	83 ec 18             	sub    $0x18,%esp
 80e47be:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47c1:	c7 00 68 e9 b2 08    	movl   $0x8b2e968,(%eax)
 80e47c7:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47ca:	89 04 24             	mov    %eax,(%esp)
 80e47cd:	e8 10 44 fe ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 80e47d2:	b8 00 00 00 00       	mov    $0x0,%eax
 80e47d7:	84 c0                	test   %al,%al
 80e47d9:	74 0b                	je     80e47e6 <_ZN19CCharacInformNoticeD1Ev+0x2e>
 80e47db:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47de:	89 04 24             	mov    %eax,(%esp)
 80e47e1:	e8 0a fd 63 00       	call   87244f0 <_ZdlPv>
 80e47e6:	c9                   	leave
 80e47e7:	c3                   	ret

```

```c
// CCharacInformNotice::~CCharacInformNotice @ 0x80e47b8

/* WARNING: Removing unreachable block (ram,0x080e47db) */
/* CCharacInformNotice::~CCharacInformNotice() */

void __thiscall CCharacInformNotice::~CCharacInformNotice(CCharacInformNotice *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b2e968;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CCharacInformNotice_080e47e8

```asm
// === 080e47e8 CCharacInformNotice::~CCharacInformNotice  [0x080e47e8-0x80e4805] ===
 80e47e8:	55                   	push   %ebp
 80e47e9:	89 e5                	mov    %esp,%ebp
 80e47eb:	83 ec 18             	sub    $0x18,%esp
 80e47ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47f1:	89 04 24             	mov    %eax,(%esp)
 80e47f4:	e8 bf ff ff ff       	call   80e47b8 <_ZN19CCharacInformNoticeD1Ev>
 80e47f9:	8b 45 08             	mov    0x8(%ebp),%eax
 80e47fc:	89 04 24             	mov    %eax,(%esp)
 80e47ff:	e8 ec fc 63 00       	call   87244f0 <_ZdlPv>
 80e4804:	c9                   	leave
 80e4805:	c3                   	ret

```

```c
// CCharacInformNotice::~CCharacInformNotice @ 0x80e47e8

/* CCharacInformNotice::~CCharacInformNotice() */

void __thiscall CCharacInformNotice::~CCharacInformNotice(CCharacInformNotice *this)

{
  ~CCharacInformNotice(this);
  operator_delete(this);
  return;
}

```

