# CItemDictionary

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CItemDictionary

```asm
// === 0811d5d4 CItemDictionary::CItemDictionary  [0x0811d5d4-0x811d5ef] ===
 811d5d4:	55                   	push   %ebp
 811d5d5:	89 e5                	mov    %esp,%ebp
 811d5d7:	83 ec 18             	sub    $0x18,%esp
 811d5da:	8b 45 08             	mov    0x8(%ebp),%eax
 811d5dd:	89 04 24             	mov    %eax,(%esp)
 811d5e0:	e8 d5 b6 fa ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 811d5e5:	8b 45 08             	mov    0x8(%ebp),%eax
 811d5e8:	c7 00 08 69 b5 08    	movl   $0x8b56908,(%eax)
 811d5ee:	c9                   	leave
 811d5ef:	c3                   	ret

```

```c
// CItemDictionary::CItemDictionary @ 0x811d5d4

/* CItemDictionary::CItemDictionary() */

void __thiscall CItemDictionary::CItemDictionary(CItemDictionary *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b56908;
  return;
}

```

---

## _reset

```asm
// === 0811d774 CItemDictionary::_reset  [0x0811d774-0x811d799] ===
 811d774:	55                   	push   %ebp
 811d775:	89 e5                	mov    %esp,%ebp
 811d777:	83 ec 18             	sub    $0x18,%esp
 811d77a:	8b 45 08             	mov    0x8(%ebp),%eax
 811d77d:	83 c0 05             	add    $0x5,%eax
 811d780:	c7 44 24 08 88 13 00 	movl   $0x1388,0x8(%esp)
 811d787:	00 
 811d788:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d78f:	00 
 811d790:	89 04 24             	mov    %eax,(%esp)
 811d793:	e8 28 05 f6 ff       	call   807dcc0 <memset@plt>
 811d798:	c9                   	leave
 811d799:	c3                   	ret

```

```c
// CItemDictionary::_reset @ 0x811d774

/* CItemDictionary::_reset() */

void __thiscall CItemDictionary::_reset(CItemDictionary *this)

{
  memset(this + 5,0,5000);
  return;
}

```

---

## _saveData

```asm
// === 0811d63e CItemDictionary::_saveData  [0x0811d63e-0x811d773] ===
 811d63e:	55                   	push   %ebp
 811d63f:	89 e5                	mov    %esp,%ebp
 811d641:	56                   	push   %esi
 811d642:	53                   	push   %ebx
 811d643:	83 ec 20             	sub    $0x20,%esp
 811d646:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 811d64b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 811d652:	00 
 811d653:	c7 44 24 04 80 5b b5 	movl   $0x8b55b80,0x4(%esp)
 811d65a:	08 
 811d65b:	89 04 24             	mov    %eax,(%esp)
 811d65e:	e8 23 24 17 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 811d663:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 811d66a:	00 
 811d66b:	89 44 24 04          	mov    %eax,0x4(%esp)
 811d66f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d672:	89 04 24             	mov    %eax,(%esp)
 811d675:	e8 ac b5 fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 811d67a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d67d:	89 04 24             	mov    %eax,(%esp)
 811d680:	e8 c1 b5 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 811d685:	c7 44 24 04 b2 02 00 	movl   $0x2b2,0x4(%esp)
 811d68c:	00 
 811d68d:	89 04 24             	mov    %eax,(%esp)
 811d690:	e8 c1 b5 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 811d695:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d698:	89 04 24             	mov    %eax,(%esp)
 811d69b:	e8 f6 b5 fa ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 811d6a0:	89 c3                	mov    %eax,%ebx
 811d6a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d6a5:	89 04 24             	mov    %eax,(%esp)
 811d6a8:	e8 99 b5 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 811d6ad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811d6b1:	89 04 24             	mov    %eax,(%esp)
 811d6b4:	e8 9d b5 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 811d6b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d6bc:	89 04 24             	mov    %eax,(%esp)
 811d6bf:	e8 8a b5 fa ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 811d6c4:	89 04 24             	mov    %eax,(%esp)
 811d6c7:	e8 60 08 00 00       	call   811df2c <_ZN12CStreamGuard11GetInBufferI24SIG_ITEM_DICTIONARY_FLAGEEPT_v>
 811d6cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811d6cf:	c7 44 24 08 8c 13 00 	movl   $0x138c,0x8(%esp)
 811d6d6:	00 
 811d6d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d6de:	00 
 811d6df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d6e2:	89 04 24             	mov    %eax,(%esp)
 811d6e5:	e8 d6 05 f6 ff       	call   807dcc0 <memset@plt>
 811d6ea:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 811d6f1:	ff 
 811d6f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d6f5:	89 04 24             	mov    %eax,(%esp)
 811d6f8:	e8 a3 08 53 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 811d6fd:	89 c2                	mov    %eax,%edx
 811d6ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d702:	89 10                	mov    %edx,(%eax)
 811d704:	8b 45 08             	mov    0x8(%ebp),%eax
 811d707:	8d 50 05             	lea    0x5(%eax),%edx
 811d70a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d70d:	83 c0 04             	add    $0x4,%eax
 811d710:	c7 44 24 08 88 13 00 	movl   $0x1388,0x8(%esp)
 811d717:	00 
 811d718:	89 54 24 04          	mov    %edx,0x4(%esp)
 811d71c:	89 04 24             	mov    %eax,(%esp)
 811d71f:	e8 7c 01 f6 ff       	call   807d8a0 <memcpy@plt>
 811d724:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 811d729:	8d 55 ec             	lea    -0x14(%ebp),%edx
 811d72c:	89 54 24 08          	mov    %edx,0x8(%esp)
 811d730:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 811d737:	00 
 811d738:	89 04 24             	mov    %eax,(%esp)
 811d73b:	e8 9e 38 45 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 811d740:	bb 01 00 00 00       	mov    $0x1,%ebx
 811d745:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d748:	89 04 24             	mov    %eax,(%esp)
 811d74b:	e8 82 f1 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 811d750:	89 d8                	mov    %ebx,%eax
 811d752:	83 c4 20             	add    $0x20,%esp
 811d755:	5b                   	pop    %ebx
 811d756:	5e                   	pop    %esi
 811d757:	5d                   	pop    %ebp
 811d758:	c3                   	ret
 811d759:	89 d3                	mov    %edx,%ebx
 811d75b:	89 c6                	mov    %eax,%esi
 811d75d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d760:	89 04 24             	mov    %eax,(%esp)
 811d763:	e8 6a f1 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 811d768:	89 f0                	mov    %esi,%eax
 811d76a:	89 da                	mov    %ebx,%edx
 811d76c:	89 04 24             	mov    %eax,(%esp)
 811d76f:	e8 dc 5f 9c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CItemDictionary::_saveData @ 0x811d63e

/* CItemDictionary::_saveData(CUser*) */

undefined4 __thiscall CItemDictionary::_saveData(CItemDictionary *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_ITEM_DICTIONARY_FLAG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemDictionary.cpp",0x18);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0811d690 to 0811d73f has its CatchHandler @ 0811d759 */
  CStreamGuard::operator<<(pCVar2,0x2b2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ITEM_DICTIONARY_FLAG>(pCVar2);
  memset(local_10,0,0x138c);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_10 = uVar4;
  memcpy(local_10 + 4,this + 5,5000);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## getData

```asm
// === 0811d7e0 CItemDictionary::getData  [0x0811d7e0-0x811d80d] ===
 811d7e0:	55                   	push   %ebp
 811d7e1:	89 e5                	mov    %esp,%ebp
 811d7e3:	83 ec 28             	sub    $0x28,%esp
 811d7e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d7e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811d7ec:	8b 45 08             	mov    0x8(%ebp),%eax
 811d7ef:	8d 50 05             	lea    0x5(%eax),%edx
 811d7f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d7f5:	83 c0 04             	add    $0x4,%eax
 811d7f8:	c7 44 24 08 88 13 00 	movl   $0x1388,0x8(%esp)
 811d7ff:	00 
 811d800:	89 54 24 04          	mov    %edx,0x4(%esp)
 811d804:	89 04 24             	mov    %eax,(%esp)
 811d807:	e8 94 00 f6 ff       	call   807d8a0 <memcpy@plt>
 811d80c:	c9                   	leave
 811d80d:	c3                   	ret

```

```c
// CItemDictionary::getData @ 0x811d7e0

/* CItemDictionary::getData(char*) const */

void __thiscall CItemDictionary::getData(CItemDictionary *this,char *param_1)

{
  memcpy(param_1 + 4,this + 5,5000);
  return;
}

```

---

## getGainItemCount

```asm
// === 0811daee CItemDictionary::getGainItemCount  [0x0811daee-0x811db5f] ===
 811daee:	55                   	push   %ebp
 811daef:	89 e5                	mov    %esp,%ebp
 811daf1:	53                   	push   %ebx
 811daf2:	83 ec 10             	sub    $0x10,%esp
 811daf5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 811dafc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 811db03:	eb 44                	jmp    811db49 <_ZNK15CItemDictionary16getGainItemCountEv+0x5b>
 811db05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 811db08:	8b 55 08             	mov    0x8(%ebp),%edx
 811db0b:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 811db10:	88 45 f7             	mov    %al,-0x9(%ebp)
 811db13:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 811db1a:	eb 1e                	jmp    811db3a <_ZNK15CItemDictionary16getGainItemCountEv+0x4c>
 811db1c:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 811db20:	8b 45 f8             	mov    -0x8(%ebp),%eax
 811db23:	89 d3                	mov    %edx,%ebx
 811db25:	89 c1                	mov    %eax,%ecx
 811db27:	d3 fb                	sar    %cl,%ebx
 811db29:	89 d8                	mov    %ebx,%eax
 811db2b:	83 e0 01             	and    $0x1,%eax
 811db2e:	84 c0                	test   %al,%al
 811db30:	74 04                	je     811db36 <_ZNK15CItemDictionary16getGainItemCountEv+0x48>
 811db32:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 811db36:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 811db3a:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 811db3e:	0f 9e c0             	setle  %al
 811db41:	84 c0                	test   %al,%al
 811db43:	75 d7                	jne    811db1c <_ZNK15CItemDictionary16getGainItemCountEv+0x2e>
 811db45:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 811db49:	81 7d f0 87 13 00 00 	cmpl   $0x1387,-0x10(%ebp)
 811db50:	0f 9e c0             	setle  %al
 811db53:	84 c0                	test   %al,%al
 811db55:	75 ae                	jne    811db05 <_ZNK15CItemDictionary16getGainItemCountEv+0x17>
 811db57:	8b 45 ec             	mov    -0x14(%ebp),%eax
 811db5a:	83 c4 10             	add    $0x10,%esp
 811db5d:	5b                   	pop    %ebx
 811db5e:	5d                   	pop    %ebp
 811db5f:	c3                   	ret

```

```c
// CItemDictionary::getGainItemCount @ 0x811daee

/* CItemDictionary::getGainItemCount() const */

int __thiscall CItemDictionary::getGainItemCount(CItemDictionary *this)

{
  int local_18;
  int local_14;
  int local_c;
  
  local_18 = 0;
  for (local_14 = 0; local_14 < 5000; local_14 = local_14 + 1) {
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      if (((int)(uint)(byte)this[local_14 + 5] >> ((byte)local_c & 0x1f) & 1U) != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}

```

---

## getGainItemList

```asm
// === 0811dba6 CItemDictionary::getGainItemList  [0x0811dba6-0x811dce5] ===
 811dba6:	55                   	push   %ebp
 811dba7:	89 e5                	mov    %esp,%ebp
 811dba9:	57                   	push   %edi
 811dbaa:	56                   	push   %esi
 811dbab:	53                   	push   %ebx
 811dbac:	83 ec 3c             	sub    $0x3c,%esp
 811dbaf:	8b 5d 08             	mov    0x8(%ebp),%ebx
 811dbb2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 811dbb9:	89 d8                	mov    %ebx,%eax
 811dbbb:	89 04 24             	mov    %eax,(%esp)
 811dbbe:	e8 e9 05 f7 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 811dbc3:	89 d8                	mov    %ebx,%eax
 811dbc5:	89 04 24             	mov    %eax,(%esp)
 811dbc8:	e8 a1 8f f7 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 811dbcd:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 811dbd4:	e9 cd 00 00 00       	jmp    811dca6 <_ZN15CItemDictionary15getGainItemListEv+0x100>
 811dbd9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811dbdc:	8b 55 0c             	mov    0xc(%ebp),%edx
 811dbdf:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 811dbe4:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811dbe7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 811dbee:	e9 a0 00 00 00       	jmp    811dc93 <_ZN15CItemDictionary15getGainItemListEv+0xed>
 811dbf3:	0f b6 55 e3          	movzbl -0x1d(%ebp),%edx
 811dbf7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 811dbfa:	89 d6                	mov    %edx,%esi
 811dbfc:	89 c1                	mov    %eax,%ecx
 811dbfe:	d3 fe                	sar    %cl,%esi
 811dc00:	89 f0                	mov    %esi,%eax
 811dc02:	83 e0 01             	and    $0x1,%eax
 811dc05:	84 c0                	test   %al,%al
 811dc07:	0f 84 82 00 00 00    	je     811dc8f <_ZN15CItemDictionary15getGainItemListEv+0xe9>
 811dc0d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811dc10:	c1 e0 03             	shl    $0x3,%eax
 811dc13:	03 45 e4             	add    -0x1c(%ebp),%eax
 811dc16:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 811dc19:	e8 7d e5 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811dc1e:	8d 88 40 a9 00 00    	lea    0xa940(%eax),%ecx
 811dc24:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811dc27:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 811dc2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 811dc2e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 811dc32:	89 04 24             	mov    %eax,(%esp)
 811dc35:	e8 b4 f6 fa ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 811dc3a:	83 ec 04             	sub    $0x4,%esp
 811dc3d:	e8 59 e5 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811dc42:	8d 90 40 a9 00 00    	lea    0xa940(%eax),%edx
 811dc48:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811dc4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811dc4f:	89 04 24             	mov    %eax,(%esp)
 811dc52:	e8 c3 f6 fa ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 811dc57:	83 ec 04             	sub    $0x4,%esp
 811dc5a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811dc5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 811dc61:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811dc64:	89 04 24             	mov    %eax,(%esp)
 811dc67:	e8 84 9c fa ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 811dc6c:	84 c0                	test   %al,%al
 811dc6e:	75 1e                	jne    811dc8e <_ZN15CItemDictionary15getGainItemListEv+0xe8>
 811dc70:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811dc73:	89 04 24             	mov    %eax,(%esp)
 811dc76:	e8 c5 f6 fa ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 811dc7b:	8d 50 04             	lea    0x4(%eax),%edx
 811dc7e:	89 d8                	mov    %ebx,%eax
 811dc80:	89 54 24 04          	mov    %edx,0x4(%esp)
 811dc84:	89 04 24             	mov    %eax,(%esp)
 811dc87:	e8 9a 34 ff ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 811dc8c:	eb 01                	jmp    811dc8f <_ZN15CItemDictionary15getGainItemListEv+0xe9>
 811dc8e:	90                   	nop
 811dc8f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 811dc93:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 811dc97:	0f 9e c0             	setle  %al
 811dc9a:	84 c0                	test   %al,%al
 811dc9c:	0f 85 51 ff ff ff    	jne    811dbf3 <_ZN15CItemDictionary15getGainItemListEv+0x4d>
 811dca2:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 811dca6:	81 7d dc 87 13 00 00 	cmpl   $0x1387,-0x24(%ebp)
 811dcad:	0f 9e c0             	setle  %al
 811dcb0:	84 c0                	test   %al,%al
 811dcb2:	0f 85 21 ff ff ff    	jne    811dbd9 <_ZN15CItemDictionary15getGainItemListEv+0x33>
 811dcb8:	eb 1a                	jmp    811dcd4 <_ZN15CItemDictionary15getGainItemListEv+0x12e>
 811dcba:	89 d6                	mov    %edx,%esi
 811dcbc:	89 c7                	mov    %eax,%edi
 811dcbe:	89 d8                	mov    %ebx,%eax
 811dcc0:	89 04 24             	mov    %eax,(%esp)
 811dcc3:	e8 12 61 f6 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 811dcc8:	89 f8                	mov    %edi,%eax
 811dcca:	89 f2                	mov    %esi,%edx
 811dccc:	89 04 24             	mov    %eax,(%esp)
 811dccf:	e8 7c 5a 9c 00       	call   8ae3750 <_Unwind_Resume>
 811dcd4:	89 d8                	mov    %ebx,%eax
 811dcd6:	89 d8                	mov    %ebx,%eax
 811dcd8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 811dcdb:	83 c4 00             	add    $0x0,%esp
 811dcde:	5b                   	pop    %ebx
 811dcdf:	5e                   	pop    %esi
 811dce0:	5f                   	pop    %edi
 811dce1:	5d                   	pop    %ebp
 811dce2:	c2 04 00             	ret    $0x4
 811dce5:	90                   	nop

```

```c
// CItemDictionary::getGainItemList @ 0x811dba6

/* CItemDictionary::getGainItemList() */

vector<int,std::allocator<int>> * CItemDictionary::getGainItemList(void)

{
  char cVar1;
  int iVar2;
  vector<int,std::allocator<int>> *in_stack_00000004;
  int in_stack_00000008;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  int local_30;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  int local_28;
  byte local_21;
  int local_20;
  
  local_30 = 0;
  std::vector<int,std::allocator<int>>::vector(in_stack_00000004);
                    /* try { // try from 0811dbc8 to 0811dc8b has its CatchHandler @ 0811dcba */
  std::vector<int,std::allocator<int>>::clear(in_stack_00000004);
  for (local_28 = 0; local_28 < 5000; local_28 = local_28 + 1) {
    local_21 = *(byte *)(in_stack_00000008 + 5 + local_28);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (((int)(uint)local_21 >> ((byte)local_20 & 0x1f) & 1U) != 0) {
        local_30 = local_28 * 8 + local_20;
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_34);
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                          (local_34,(_Rb_tree_iterator *)local_2c);
        if (cVar1 == '\0') {
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
          std::vector<int,std::allocator<int>>::push_back(in_stack_00000004,(int *)(iVar2 + 4));
        }
      }
    }
  }
  return in_stack_00000004;
}

```

---

## getItemCheckFlag

```asm
// === 0811da32 CItemDictionary::getItemCheckFlag  [0x0811da32-0x811daed] ===
 811da32:	55                   	push   %ebp
 811da33:	89 e5                	mov    %esp,%ebp
 811da35:	53                   	push   %ebx
 811da36:	83 ec 44             	sub    $0x44,%esp
 811da39:	8b 45 10             	mov    0x10(%ebp),%eax
 811da3c:	c1 e8 03             	shr    $0x3,%eax
 811da3f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 811da42:	8b 45 10             	mov    0x10(%ebp),%eax
 811da45:	83 e0 07             	and    $0x7,%eax
 811da48:	89 45 f0             	mov    %eax,-0x10(%ebp)
 811da4b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 811da4f:	78 15                	js     811da66 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0x34>
 811da51:	81 7d ec 87 13 00 00 	cmpl   $0x1387,-0x14(%ebp)
 811da58:	7f 0c                	jg     811da66 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0x34>
 811da5a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 811da5e:	78 06                	js     811da66 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0x34>
 811da60:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 811da64:	7e 4f                	jle    811dab5 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0x83>
 811da66:	8b 45 f0             	mov    -0x10(%ebp),%eax
 811da69:	89 44 24 20          	mov    %eax,0x20(%esp)
 811da6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 811da70:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 811da74:	8b 45 10             	mov    0x10(%ebp),%eax
 811da77:	89 44 24 18          	mov    %eax,0x18(%esp)
 811da7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 811da7e:	89 44 24 14          	mov    %eax,0x14(%esp)
 811da82:	c7 44 24 10 d4 5b b5 	movl   $0x8b55bd4,0x10(%esp)
 811da89:	08 
 811da8a:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 811da91:	00 
 811da92:	c7 44 24 08 40 68 b5 	movl   $0x8b56840,0x8(%esp)
 811da99:	08 
 811da9a:	c7 44 24 04 80 5b b5 	movl   $0x8b55b80,0x4(%esp)
 811daa1:	08 
 811daa2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 811daa9:	e8 5c 61 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 811daae:	b8 01 00 00 00       	mov    $0x1,%eax
 811dab3:	eb 33                	jmp    811dae8 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0xb6>
 811dab5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 811dab8:	8b 55 08             	mov    0x8(%ebp),%edx
 811dabb:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 811dac0:	88 45 f7             	mov    %al,-0x9(%ebp)
 811dac3:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 811dac7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 811daca:	89 d3                	mov    %edx,%ebx
 811dacc:	89 c1                	mov    %eax,%ecx
 811dace:	d3 fb                	sar    %cl,%ebx
 811dad0:	89 d8                	mov    %ebx,%eax
 811dad2:	83 e0 01             	and    $0x1,%eax
 811dad5:	83 f0 01             	xor    $0x1,%eax
 811dad8:	84 c0                	test   %al,%al
 811dada:	74 07                	je     811dae3 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0xb1>
 811dadc:	b8 00 00 00 00       	mov    $0x0,%eax
 811dae1:	eb 05                	jmp    811dae8 <_ZNK15CItemDictionary16getItemCheckFlagEjj+0xb6>
 811dae3:	b8 01 00 00 00       	mov    $0x1,%eax
 811dae8:	83 c4 44             	add    $0x44,%esp
 811daeb:	5b                   	pop    %ebx
 811daec:	5d                   	pop    %ebp
 811daed:	c3                   	ret

```

```c
// CItemDictionary::getItemCheckFlag @ 0x811da32

/* CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const */

undefined4 __thiscall
CItemDictionary::getItemCheckFlag(CItemDictionary *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 >> 3;
  uVar2 = param_2 & 7;
  if ((uVar1 < 5000) && (uVar2 < 8)) {
    if (((byte)((int)(uint)(byte)this[uVar1 + 5] >> (sbyte)uVar2) & 1) == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"ItemDictionary.cpp",
               "bool CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const",0x7d,
               "getItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",param_1,param_2,
               uVar1,uVar2);
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## getLengthBinary

```asm
// === 0811db60 CItemDictionary::getLengthBinary  [0x0811db60-0x811dba5] ===
 811db60:	55                   	push   %ebp
 811db61:	89 e5                	mov    %esp,%ebp
 811db63:	83 ec 10             	sub    $0x10,%esp
 811db66:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 811db6d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 811db74:	eb 1c                	jmp    811db92 <_ZNK15CItemDictionary15getLengthBinaryEv+0x32>
 811db76:	8b 45 fc             	mov    -0x4(%ebp),%eax
 811db79:	8b 55 08             	mov    0x8(%ebp),%edx
 811db7c:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 811db81:	84 c0                	test   %al,%al
 811db83:	74 09                	je     811db8e <_ZNK15CItemDictionary15getLengthBinaryEv+0x2e>
 811db85:	8b 45 fc             	mov    -0x4(%ebp),%eax
 811db88:	83 c0 01             	add    $0x1,%eax
 811db8b:	89 45 f8             	mov    %eax,-0x8(%ebp)
 811db8e:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 811db92:	81 7d fc 87 13 00 00 	cmpl   $0x1387,-0x4(%ebp)
 811db99:	0f 9e c0             	setle  %al
 811db9c:	84 c0                	test   %al,%al
 811db9e:	75 d6                	jne    811db76 <_ZNK15CItemDictionary15getLengthBinaryEv+0x16>
 811dba0:	8b 45 f8             	mov    -0x8(%ebp),%eax
 811dba3:	c9                   	leave
 811dba4:	c3                   	ret
 811dba5:	90                   	nop

```

```c
// CItemDictionary::getLengthBinary @ 0x811db60

/* CItemDictionary::getLengthBinary() const */

int __thiscall CItemDictionary::getLengthBinary(CItemDictionary *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5000; local_8 = local_8 + 1) {
    if (this[local_8 + 5] != (CItemDictionary)0x0) {
      local_c = local_8 + 1;
    }
  }
  return local_c;
}

```

---

## loadData

```asm
// === 0811d79a CItemDictionary::loadData  [0x0811d79a-0x811d7df] ===
 811d79a:	55                   	push   %ebp
 811d79b:	89 e5                	mov    %esp,%ebp
 811d79d:	83 ec 28             	sub    $0x28,%esp
 811d7a0:	8b 45 08             	mov    0x8(%ebp),%eax
 811d7a3:	8b 00                	mov    (%eax),%eax
 811d7a5:	83 c0 1c             	add    $0x1c,%eax
 811d7a8:	8b 10                	mov    (%eax),%edx
 811d7aa:	8b 45 08             	mov    0x8(%ebp),%eax
 811d7ad:	89 04 24             	mov    %eax,(%esp)
 811d7b0:	ff d2                	call   *%edx
 811d7b2:	8b 45 10             	mov    0x10(%ebp),%eax
 811d7b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811d7b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d7bb:	8d 50 04             	lea    0x4(%eax),%edx
 811d7be:	8b 45 08             	mov    0x8(%ebp),%eax
 811d7c1:	83 c0 05             	add    $0x5,%eax
 811d7c4:	c7 44 24 08 88 13 00 	movl   $0x1388,0x8(%esp)
 811d7cb:	00 
 811d7cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 811d7d0:	89 04 24             	mov    %eax,(%esp)
 811d7d3:	e8 c8 00 f6 ff       	call   807d8a0 <memcpy@plt>
 811d7d8:	b8 01 00 00 00       	mov    $0x1,%eax
 811d7dd:	c9                   	leave
 811d7de:	c3                   	ret
 811d7df:	90                   	nop

```

```c
// CItemDictionary::loadData @ 0x811d79a

/* CItemDictionary::loadData(CUser*, char*) */

undefined4 __thiscall CItemDictionary::loadData(CItemDictionary *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  memcpy(this + 5,param_2 + 4,5000);
  return 1;
}

```

---

## sendItemDictionaryInfo

```asm
// === 0811dce6 CItemDictionary::sendItemDictionaryInfo  [0x0811dce6-0x811dd99] ===
 811dce6:	55                   	push   %ebp
 811dce7:	89 e5                	mov    %esp,%ebp
 811dce9:	56                   	push   %esi
 811dcea:	53                   	push   %ebx
 811dceb:	83 ec 20             	sub    $0x20,%esp
 811dcee:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 811dcf2:	0f 84 9a 00 00 00    	je     811dd92 <_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj+0xac>
 811dcf8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dcfb:	89 04 24             	mov    %eax,(%esp)
 811dcfe:	e8 49 00 47 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 811dd03:	c7 44 24 08 81 01 00 	movl   $0x181,0x8(%esp)
 811dd0a:	00 
 811dd0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811dd12:	00 
 811dd13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd16:	89 04 24             	mov    %eax,(%esp)
 811dd19:	e8 de db fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 811dd1e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811dd25:	00 
 811dd26:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd29:	89 04 24             	mov    %eax,(%esp)
 811dd2c:	e8 ef db fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811dd31:	8b 45 10             	mov    0x10(%ebp),%eax
 811dd34:	89 44 24 04          	mov    %eax,0x4(%esp)
 811dd38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd3b:	89 04 24             	mov    %eax,(%esp)
 811dd3e:	e8 f9 db fa ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 811dd43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811dd4a:	00 
 811dd4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd4e:	89 04 24             	mov    %eax,(%esp)
 811dd51:	e8 02 dc fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 811dd56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd59:	89 44 24 04          	mov    %eax,0x4(%esp)
 811dd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 811dd60:	89 04 24             	mov    %eax,(%esp)
 811dd63:	e8 52 a8 52 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 811dd68:	eb 1b                	jmp    811dd85 <_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj+0x9f>
 811dd6a:	89 d3                	mov    %edx,%ebx
 811dd6c:	89 c6                	mov    %eax,%esi
 811dd6e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd71:	89 04 24             	mov    %eax,(%esp)
 811dd74:	e8 07 01 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811dd79:	89 f0                	mov    %esi,%eax
 811dd7b:	89 da                	mov    %ebx,%edx
 811dd7d:	89 04 24             	mov    %eax,(%esp)
 811dd80:	e8 cb 59 9c 00       	call   8ae3750 <_Unwind_Resume>
 811dd85:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811dd88:	89 04 24             	mov    %eax,(%esp)
 811dd8b:	e8 f0 00 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811dd90:	eb 01                	jmp    811dd93 <_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj+0xad>
 811dd92:	90                   	nop
 811dd93:	83 c4 20             	add    $0x20,%esp
 811dd96:	5b                   	pop    %ebx
 811dd97:	5e                   	pop    %esi
 811dd98:	5d                   	pop    %ebp
 811dd99:	c3                   	ret

```

```c
// CItemDictionary::sendItemDictionaryInfo @ 0x811dce6

/* CItemDictionary::sendItemDictionaryInfo(CUser*, unsigned int) */

void __thiscall
CItemDictionary::sendItemDictionaryInfo(CItemDictionary *this,CUser *param_1,uint param_2)

{
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0811dd19 to 0811dd67 has its CatchHandler @ 0811dd6a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x181);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## sendItemDictionaryInfoTotal

```asm
// === 0811dd9a CItemDictionary::sendItemDictionaryInfoTotal  [0x0811dd9a-0x811de7f] ===
 811dd9a:	55                   	push   %ebp
 811dd9b:	89 e5                	mov    %esp,%ebp
 811dd9d:	56                   	push   %esi
 811dd9e:	53                   	push   %ebx
 811dd9f:	83 ec 20             	sub    $0x20,%esp
 811dda2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 811dda6:	0f 84 cc 00 00 00    	je     811de78 <_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser+0xde>
 811ddac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811ddaf:	89 04 24             	mov    %eax,(%esp)
 811ddb2:	e8 95 ff 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 811ddb7:	c7 44 24 08 8a 01 00 	movl   $0x18a,0x8(%esp)
 811ddbe:	00 
 811ddbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811ddc6:	00 
 811ddc7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811ddca:	89 04 24             	mov    %eax,(%esp)
 811ddcd:	e8 2a db fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 811ddd2:	8b 45 08             	mov    0x8(%ebp),%eax
 811ddd5:	89 04 24             	mov    %eax,(%esp)
 811ddd8:	e8 83 fd ff ff       	call   811db60 <_ZNK15CItemDictionary15getLengthBinaryEv>
 811dddd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811dde0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 811dde4:	75 15                	jne    811ddfb <_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser+0x61>
 811dde6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811dded:	00 
 811ddee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811ddf1:	89 04 24             	mov    %eax,(%esp)
 811ddf4:	e8 43 db fa ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 811ddf9:	eb 2e                	jmp    811de29 <_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser+0x8f>
 811ddfb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811ddfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 811de02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de05:	89 04 24             	mov    %eax,(%esp)
 811de08:	e8 2f db fa ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 811de0d:	8b 45 08             	mov    0x8(%ebp),%eax
 811de10:	83 c0 05             	add    $0x5,%eax
 811de13:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811de16:	89 54 24 08          	mov    %edx,0x8(%esp)
 811de1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 811de1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de21:	89 04 24             	mov    %eax,(%esp)
 811de24:	e8 df 00 00 00       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 811de29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811de30:	00 
 811de31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de34:	89 04 24             	mov    %eax,(%esp)
 811de37:	e8 1c db fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 811de3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 811de43:	8b 45 0c             	mov    0xc(%ebp),%eax
 811de46:	89 04 24             	mov    %eax,(%esp)
 811de49:	e8 6c a7 52 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 811de4e:	eb 1b                	jmp    811de6b <_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser+0xd1>
 811de50:	89 d3                	mov    %edx,%ebx
 811de52:	89 c6                	mov    %eax,%esi
 811de54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de57:	89 04 24             	mov    %eax,(%esp)
 811de5a:	e8 21 00 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811de5f:	89 f0                	mov    %esi,%eax
 811de61:	89 da                	mov    %ebx,%edx
 811de63:	89 04 24             	mov    %eax,(%esp)
 811de66:	e8 e5 58 9c 00       	call   8ae3750 <_Unwind_Resume>
 811de6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811de6e:	89 04 24             	mov    %eax,(%esp)
 811de71:	e8 0a 00 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811de76:	eb 01                	jmp    811de79 <_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser+0xdf>
 811de78:	90                   	nop
 811de79:	83 c4 20             	add    $0x20,%esp
 811de7c:	5b                   	pop    %ebx
 811de7d:	5e                   	pop    %esi
 811de7e:	5d                   	pop    %ebp
 811de7f:	c3                   	ret

```

```c
// CItemDictionary::sendItemDictionaryInfoTotal @ 0x811dd9a

/* CItemDictionary::sendItemDictionaryInfoTotal(CUser*) */

void __thiscall CItemDictionary::sendItemDictionaryInfoTotal(CItemDictionary *this,CUser *param_1)

{
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0811ddcd to 0811de4d has its CatchHandler @ 0811de50 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x18a);
    local_10 = getLengthBinary(this);
    if (local_10 == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)(this + 5),local_10);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## setGainItemFlag

```asm
// === 0811d80e CItemDictionary::setGainItemFlag  [0x0811d80e-0x811d8fb] ===
 811d80e:	55                   	push   %ebp
 811d80f:	89 e5                	mov    %esp,%ebp
 811d811:	53                   	push   %ebx
 811d812:	83 ec 34             	sub    $0x34,%esp
 811d815:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 811d819:	0f 84 d0 00 00 00    	je     811d8ef <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe1>
 811d81f:	8b 5d 10             	mov    0x10(%ebp),%ebx
 811d822:	e8 74 e9 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811d827:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811d82b:	89 04 24             	mov    %eax,(%esp)
 811d82e:	e8 ff 21 24 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 811d833:	89 45 f0             	mov    %eax,-0x10(%ebp)
 811d836:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 811d83a:	74 0f                	je     811d84b <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0x3d>
 811d83c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 811d83f:	89 04 24             	mov    %eax,(%esp)
 811d842:	e8 b3 3a fd ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 811d847:	84 c0                	test   %al,%al
 811d849:	74 07                	je     811d852 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0x44>
 811d84b:	b8 01 00 00 00       	mov    $0x1,%eax
 811d850:	eb 05                	jmp    811d857 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0x49>
 811d852:	b8 00 00 00 00       	mov    $0x0,%eax
 811d857:	84 c0                	test   %al,%al
 811d859:	0f 85 93 00 00 00    	jne    811d8f2 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe4>
 811d85f:	8b 45 10             	mov    0x10(%ebp),%eax
 811d862:	89 45 e8             	mov    %eax,-0x18(%ebp)
 811d865:	e8 31 e9 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811d86a:	8d 88 28 a9 00 00    	lea    0xa928(%eax),%ecx
 811d870:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811d873:	8d 55 e8             	lea    -0x18(%ebp),%edx
 811d876:	89 54 24 08          	mov    %edx,0x8(%esp)
 811d87a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 811d87e:	89 04 24             	mov    %eax,(%esp)
 811d881:	e8 68 fa fa ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 811d886:	83 ec 04             	sub    $0x4,%esp
 811d889:	e8 0d e9 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811d88e:	8d 90 28 a9 00 00    	lea    0xa928(%eax),%edx
 811d894:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d897:	89 54 24 04          	mov    %edx,0x4(%esp)
 811d89b:	89 04 24             	mov    %eax,(%esp)
 811d89e:	e8 77 fa fa ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 811d8a3:	83 ec 04             	sub    $0x4,%esp
 811d8a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811d8a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 811d8ad:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811d8b0:	89 04 24             	mov    %eax,(%esp)
 811d8b3:	e8 38 a0 fa ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 811d8b8:	84 c0                	test   %al,%al
 811d8ba:	75 39                	jne    811d8f5 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe7>
 811d8bc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811d8bf:	89 04 24             	mov    %eax,(%esp)
 811d8c2:	e8 79 fa fa ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 811d8c7:	8b 40 04             	mov    0x4(%eax),%eax
 811d8ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811d8cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811d8d0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811d8d4:	8b 45 10             	mov    0x10(%ebp),%eax
 811d8d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 811d8db:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d8de:	89 44 24 04          	mov    %eax,0x4(%esp)
 811d8e2:	8b 45 08             	mov    0x8(%ebp),%eax
 811d8e5:	89 04 24             	mov    %eax,(%esp)
 811d8e8:	e8 0f 00 00 00       	call   811d8fc <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj>
 811d8ed:	eb 07                	jmp    811d8f6 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe8>
 811d8ef:	90                   	nop
 811d8f0:	eb 04                	jmp    811d8f6 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe8>
 811d8f2:	90                   	nop
 811d8f3:	eb 01                	jmp    811d8f6 <_ZN15CItemDictionary15setGainItemFlagEP5CUserj+0xe8>
 811d8f5:	90                   	nop
 811d8f6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 811d8f9:	c9                   	leave
 811d8fa:	c3                   	ret
 811d8fb:	90                   	nop

```

```c
// CItemDictionary::setGainItemFlag @ 0x811d80e

/* CItemDictionary::setGainItemFlag(CUser*, unsigned int) */

void __thiscall CItemDictionary::setGainItemFlag(CItemDictionary *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  uint local_1c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CItem *local_14;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(this_00,param_2);
    if ((local_14 == (CItem *)0x0) || (cVar2 = CItem::is_stackable(local_14), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_1c = param_2;
      G_CDataManager();
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_20);
      G_CDataManager();
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_20,(_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
        local_10 = *(uint *)(iVar3 + 4);
        setItemCheckFlag(this,param_1,param_2,local_10);
      }
    }
  }
  return;
}

```

---

## setItemCheckFlag

```asm
// === 0811d8fc CItemDictionary::setItemCheckFlag  [0x0811d8fc-0x811da31] ===
 811d8fc:	55                   	push   %ebp
 811d8fd:	89 e5                	mov    %esp,%ebp
 811d8ff:	57                   	push   %edi
 811d900:	56                   	push   %esi
 811d901:	53                   	push   %ebx
 811d902:	83 ec 4c             	sub    $0x4c,%esp
 811d905:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 811d909:	0f 84 16 01 00 00    	je     811da25 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x129>
 811d90f:	8b 45 14             	mov    0x14(%ebp),%eax
 811d912:	c1 e8 03             	shr    $0x3,%eax
 811d915:	89 45 dc             	mov    %eax,-0x24(%ebp)
 811d918:	8b 45 14             	mov    0x14(%ebp),%eax
 811d91b:	83 e0 07             	and    $0x7,%eax
 811d91e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 811d921:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 811d925:	78 15                	js     811d93c <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x40>
 811d927:	81 7d dc 87 13 00 00 	cmpl   $0x1387,-0x24(%ebp)
 811d92e:	7f 0c                	jg     811d93c <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x40>
 811d930:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 811d934:	78 06                	js     811d93c <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x40>
 811d936:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 811d93a:	7e 5d                	jle    811d999 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x9d>
 811d93c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 811d943:	ff 
 811d944:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d947:	89 04 24             	mov    %eax,(%esp)
 811d94a:	e8 51 06 53 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 811d94f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 811d952:	89 54 24 20          	mov    %edx,0x20(%esp)
 811d956:	8b 55 dc             	mov    -0x24(%ebp),%edx
 811d959:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 811d95d:	8b 55 14             	mov    0x14(%ebp),%edx
 811d960:	89 54 24 18          	mov    %edx,0x18(%esp)
 811d964:	89 44 24 14          	mov    %eax,0x14(%esp)
 811d968:	c7 44 24 10 94 5b b5 	movl   $0x8b55b94,0x10(%esp)
 811d96f:	08 
 811d970:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 811d977:	00 
 811d978:	c7 44 24 08 a0 68 b5 	movl   $0x8b568a0,0x8(%esp)
 811d97f:	08 
 811d980:	c7 44 24 04 80 5b b5 	movl   $0x8b55b80,0x4(%esp)
 811d987:	08 
 811d988:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 811d98f:	e8 76 62 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 811d994:	e9 90 00 00 00       	jmp    811da29 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x12d>
 811d999:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811d99c:	8b 55 08             	mov    0x8(%ebp),%edx
 811d99f:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 811d9a4:	88 45 e7             	mov    %al,-0x19(%ebp)
 811d9a7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 811d9ae:	ff 
 811d9af:	8b 45 0c             	mov    0xc(%ebp),%eax
 811d9b2:	89 04 24             	mov    %eax,(%esp)
 811d9b5:	e8 e6 05 53 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 811d9ba:	8b 55 14             	mov    0x14(%ebp),%edx
 811d9bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 811d9c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 811d9c5:	8b 45 08             	mov    0x8(%ebp),%eax
 811d9c8:	89 04 24             	mov    %eax,(%esp)
 811d9cb:	e8 62 00 00 00       	call   811da32 <_ZNK15CItemDictionary16getItemCheckFlagEjj>
 811d9d0:	83 f0 01             	xor    $0x1,%eax
 811d9d3:	84 c0                	test   %al,%al
 811d9d5:	74 51                	je     811da28 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x12c>
 811d9d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811d9da:	8b 55 dc             	mov    -0x24(%ebp),%edx
 811d9dd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 811d9e0:	0f b6 5c 11 05       	movzbl 0x5(%ecx,%edx,1),%ebx
 811d9e5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 811d9e8:	be 01 00 00 00       	mov    $0x1,%esi
 811d9ed:	89 f7                	mov    %esi,%edi
 811d9ef:	89 d1                	mov    %edx,%ecx
 811d9f1:	d3 e7                	shl    %cl,%edi
 811d9f3:	89 fa                	mov    %edi,%edx
 811d9f5:	8d 0c 13             	lea    (%ebx,%edx,1),%ecx
 811d9f8:	8b 55 08             	mov    0x8(%ebp),%edx
 811d9fb:	88 4c 02 05          	mov    %cl,0x5(%edx,%eax,1)
 811d9ff:	8b 45 10             	mov    0x10(%ebp),%eax
 811da02:	89 44 24 08          	mov    %eax,0x8(%esp)
 811da06:	8b 45 0c             	mov    0xc(%ebp),%eax
 811da09:	89 44 24 04          	mov    %eax,0x4(%esp)
 811da0d:	8b 45 08             	mov    0x8(%ebp),%eax
 811da10:	89 04 24             	mov    %eax,(%esp)
 811da13:	e8 ce 02 00 00       	call   811dce6 <_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj>
 811da18:	8b 45 08             	mov    0x8(%ebp),%eax
 811da1b:	89 04 24             	mov    %eax,(%esp)
 811da1e:	e8 a1 b1 fa ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 811da23:	eb 04                	jmp    811da29 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x12d>
 811da25:	90                   	nop
 811da26:	eb 01                	jmp    811da29 <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj+0x12d>
 811da28:	90                   	nop
 811da29:	83 c4 4c             	add    $0x4c,%esp
 811da2c:	5b                   	pop    %ebx
 811da2d:	5e                   	pop    %esi
 811da2e:	5f                   	pop    %edi
 811da2f:	5d                   	pop    %ebp
 811da30:	c3                   	ret
 811da31:	90                   	nop

```

```c
// CItemDictionary::setItemCheckFlag @ 0x811d8fc

/* CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int) */

void __thiscall
CItemDictionary::setItemCheckFlag(CItemDictionary *this,CUser *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 != (CUser *)0x0) {
    uVar2 = param_3 >> 3;
    uVar3 = param_3 & 7;
    if ((uVar2 < 5000) && (uVar3 < 8)) {
      uVar5 = CUser::get_charac_no(param_1,-1);
      cVar1 = getItemCheckFlag(this,uVar5,param_3);
      if (cVar1 != '\x01') {
        this[uVar2 + 5] = (CItemDictionary)((char)this[uVar2 + 5] + (char)(1 << (sbyte)uVar3));
        sendItemDictionaryInfo(this,param_1,param_2);
        charac_expand::CData::alter((CData *)this);
      }
    }
    else {
      uVar4 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"ItemDictionary.cpp",
                 "void CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int)",0x62,
                 "setItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",uVar4,param_3,
                 uVar2,uVar3);
    }
  }
  return;
}

```

---

## ~CItemDictionary

```asm
// === 0811d5f0 CItemDictionary::~CItemDictionary  [0x0811d5f0-0x811d61f] ===
 811d5f0:	55                   	push   %ebp
 811d5f1:	89 e5                	mov    %esp,%ebp
 811d5f3:	83 ec 18             	sub    $0x18,%esp
 811d5f6:	8b 45 08             	mov    0x8(%ebp),%eax
 811d5f9:	c7 00 08 69 b5 08    	movl   $0x8b56908,(%eax)
 811d5ff:	8b 45 08             	mov    0x8(%ebp),%eax
 811d602:	89 04 24             	mov    %eax,(%esp)
 811d605:	e8 d8 b5 fa ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 811d60a:	b8 00 00 00 00       	mov    $0x0,%eax
 811d60f:	84 c0                	test   %al,%al
 811d611:	74 0b                	je     811d61e <_ZN15CItemDictionaryD1Ev+0x2e>
 811d613:	8b 45 08             	mov    0x8(%ebp),%eax
 811d616:	89 04 24             	mov    %eax,(%esp)
 811d619:	e8 d2 6e 60 00       	call   87244f0 <_ZdlPv>
 811d61e:	c9                   	leave
 811d61f:	c3                   	ret

```

```c
// CItemDictionary::~CItemDictionary @ 0x811d5f0

/* WARNING: Removing unreachable block (ram,0x0811d613) */
/* CItemDictionary::~CItemDictionary() */

void __thiscall CItemDictionary::~CItemDictionary(CItemDictionary *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b56908;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CItemDictionary_0811d620

```asm
// === 0811d620 CItemDictionary::~CItemDictionary  [0x0811d620-0x811d63d] ===
 811d620:	55                   	push   %ebp
 811d621:	89 e5                	mov    %esp,%ebp
 811d623:	83 ec 18             	sub    $0x18,%esp
 811d626:	8b 45 08             	mov    0x8(%ebp),%eax
 811d629:	89 04 24             	mov    %eax,(%esp)
 811d62c:	e8 bf ff ff ff       	call   811d5f0 <_ZN15CItemDictionaryD1Ev>
 811d631:	8b 45 08             	mov    0x8(%ebp),%eax
 811d634:	89 04 24             	mov    %eax,(%esp)
 811d637:	e8 b4 6e 60 00       	call   87244f0 <_ZdlPv>
 811d63c:	c9                   	leave
 811d63d:	c3                   	ret

```

```c
// CItemDictionary::~CItemDictionary @ 0x811d620

/* CItemDictionary::~CItemDictionary() */

void __thiscall CItemDictionary::~CItemDictionary(CItemDictionary *this)

{
  ~CItemDictionary(this);
  operator_delete(this);
  return;
}

```

