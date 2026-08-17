# CPVPMapCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## InsertDatabase

```asm
// === 0860eb16 CPVPMapCount::InsertDatabase  [0x0860eb16-0x860ecc5] ===
 860eb16:	55                   	push   %ebp
 860eb17:	89 e5                	mov    %esp,%ebp
 860eb19:	56                   	push   %esi
 860eb1a:	53                   	push   %ebx
 860eb1b:	83 ec 20             	sub    $0x20,%esp
 860eb1e:	8b 45 08             	mov    0x8(%ebp),%eax
 860eb21:	83 c0 04             	add    $0x4,%eax
 860eb24:	89 04 24             	mov    %eax,(%esp)
 860eb27:	e8 14 6d c2 ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 860eb2c:	85 c0                	test   %eax,%eax
 860eb2e:	0f 94 c0             	sete   %al
 860eb31:	84 c0                	test   %al,%al
 860eb33:	0f 85 81 01 00 00    	jne    860ecba <_ZN12CPVPMapCount14InsertDatabaseEv+0x1a4>
 860eb39:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860eb3e:	c7 44 24 08 38 05 00 	movl   $0x538,0x8(%esp)
 860eb45:	00 
 860eb46:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860eb4d:	08 
 860eb4e:	89 04 24             	mov    %eax,(%esp)
 860eb51:	e8 30 0f c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860eb56:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860eb5d:	00 
 860eb5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860eb62:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eb65:	89 04 24             	mov    %eax,(%esp)
 860eb68:	e8 b9 a0 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860eb6d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eb70:	89 04 24             	mov    %eax,(%esp)
 860eb73:	e8 ce a0 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860eb78:	c7 44 24 04 05 01 00 	movl   $0x105,0x4(%esp)
 860eb7f:	00 
 860eb80:	89 04 24             	mov    %eax,(%esp)
 860eb83:	e8 ce a0 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860eb88:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eb8b:	89 04 24             	mov    %eax,(%esp)
 860eb8e:	e8 b3 a0 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860eb93:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860eb9a:	ff 
 860eb9b:	89 04 24             	mov    %eax,(%esp)
 860eb9e:	e8 b3 a0 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860eba3:	8b 45 08             	mov    0x8(%ebp),%eax
 860eba6:	83 c0 04             	add    $0x4,%eax
 860eba9:	89 04 24             	mov    %eax,(%esp)
 860ebac:	e8 8f 6c c2 ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 860ebb1:	89 c3                	mov    %eax,%ebx
 860ebb3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ebb6:	89 04 24             	mov    %eax,(%esp)
 860ebb9:	e8 88 a0 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ebbe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ebc2:	89 04 24             	mov    %eax,(%esp)
 860ebc5:	e8 8c a0 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ebca:	8b 45 08             	mov    0x8(%ebp),%eax
 860ebcd:	8d 50 04             	lea    0x4(%eax),%edx
 860ebd0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ebd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ebd7:	89 04 24             	mov    %eax,(%esp)
 860ebda:	e8 c1 33 b4 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 860ebdf:	83 ec 04             	sub    $0x4,%esp
 860ebe2:	8b 45 08             	mov    0x8(%ebp),%eax
 860ebe5:	8d 50 04             	lea    0x4(%eax),%edx
 860ebe8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ebeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ebef:	89 04 24             	mov    %eax,(%esp)
 860ebf2:	e8 23 e7 ab ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860ebf7:	83 ec 04             	sub    $0x4,%esp
 860ebfa:	eb 54                	jmp    860ec50 <_ZN12CPVPMapCount14InsertDatabaseEv+0x13a>
 860ebfc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ebff:	89 04 24             	mov    %eax,(%esp)
 860ec02:	e8 39 e7 ab ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860ec07:	8b 18                	mov    (%eax),%ebx
 860ec09:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ec0c:	89 04 24             	mov    %eax,(%esp)
 860ec0f:	e8 32 a0 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ec14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ec18:	89 04 24             	mov    %eax,(%esp)
 860ec1b:	e8 36 a0 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ec20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ec23:	89 04 24             	mov    %eax,(%esp)
 860ec26:	e8 15 e7 ab ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860ec2b:	8b 58 04             	mov    0x4(%eax),%ebx
 860ec2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ec31:	89 04 24             	mov    %eax,(%esp)
 860ec34:	e8 0d a0 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ec39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ec3d:	89 04 24             	mov    %eax,(%esp)
 860ec40:	e8 11 a0 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ec45:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ec48:	89 04 24             	mov    %eax,(%esp)
 860ec4b:	e8 f6 ba ac ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 860ec50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ec53:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ec57:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ec5a:	89 04 24             	mov    %eax,(%esp)
 860ec5d:	e8 66 b7 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860ec62:	84 c0                	test   %al,%al
 860ec64:	75 96                	jne    860ebfc <_ZN12CPVPMapCount14InsertDatabaseEv+0xe6>
 860ec66:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860ec6b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 860ec6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 860ec72:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860ec79:	00 
 860ec7a:	89 04 24             	mov    %eax,(%esp)
 860ec7d:	e8 5c 23 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860ec82:	8b 45 08             	mov    0x8(%ebp),%eax
 860ec85:	83 c0 04             	add    $0x4,%eax
 860ec88:	89 04 24             	mov    %eax,(%esp)
 860ec8b:	e8 4e 80 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860ec90:	eb 1b                	jmp    860ecad <_ZN12CPVPMapCount14InsertDatabaseEv+0x197>
 860ec92:	89 d3                	mov    %edx,%ebx
 860ec94:	89 c6                	mov    %eax,%esi
 860ec96:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ec99:	89 04 24             	mov    %eax,(%esp)
 860ec9c:	e8 31 dc 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860eca1:	89 f0                	mov    %esi,%eax
 860eca3:	89 da                	mov    %ebx,%edx
 860eca5:	89 04 24             	mov    %eax,(%esp)
 860eca8:	e8 a3 4a 4d 00       	call   8ae3750 <_Unwind_Resume>
 860ecad:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ecb0:	89 04 24             	mov    %eax,(%esp)
 860ecb3:	e8 1a dc 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860ecb8:	eb 01                	jmp    860ecbb <_ZN12CPVPMapCount14InsertDatabaseEv+0x1a5>
 860ecba:	90                   	nop
 860ecbb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860ecbe:	83 c4 00             	add    $0x0,%esp
 860ecc1:	5b                   	pop    %ebx
 860ecc2:	5e                   	pop    %esi
 860ecc3:	5d                   	pop    %ebp
 860ecc4:	c3                   	ret
 860ecc5:	90                   	nop

```

```c
// CPVPMapCount::InsertDatabase @ 0x860eb16

/* CPVPMapCount::InsertDatabase() */

void __thiscall CPVPMapCount::InsertDatabase(CPVPMapCount *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CStreamGuard local_14 [8];
  
  iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 4));
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x538);
    CStreamGuard::CStreamGuard(local_14,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860eb83 to 0860ec8f has its CatchHandler @ 0860ec92 */
    CStreamGuard::operator<<(pCVar4,0x105);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                      ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                       (this + 4));
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      iVar2 = *(int *)(iVar2 + 4);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

