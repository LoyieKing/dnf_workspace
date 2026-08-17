# CUserPlayTimeStatisticMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## InsertUserPlayTime

```asm
// === 0860cd14 CUserPlayTimeStatisticMgr::InsertUserPlayTime  [0x0860cd14-0x860cfa4] ===
 860cd14:	55                   	push   %ebp
 860cd15:	89 e5                	mov    %esp,%ebp
 860cd17:	56                   	push   %esi
 860cd18:	53                   	push   %ebx
 860cd19:	83 ec 30             	sub    $0x30,%esp
 860cd1c:	8b 45 08             	mov    0x8(%ebp),%eax
 860cd1f:	89 04 24             	mov    %eax,(%esp)
 860cd22:	e8 71 43 00 00       	call   8611098 <_ZNKSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE4sizeEv>
 860cd27:	85 c0                	test   %eax,%eax
 860cd29:	0f 95 c0             	setne  %al
 860cd2c:	84 c0                	test   %al,%al
 860cd2e:	0f 84 62 02 00 00    	je     860cf96 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x282>
 860cd34:	8b 55 08             	mov    0x8(%ebp),%edx
 860cd37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cd3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cd3e:	89 04 24             	mov    %eax,(%esp)
 860cd41:	e8 66 43 00 00       	call   86110ac <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 860cd46:	83 ec 04             	sub    $0x4,%esp
 860cd49:	8b 55 08             	mov    0x8(%ebp),%edx
 860cd4c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860cd4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cd53:	89 04 24             	mov    %eax,(%esp)
 860cd56:	e8 55 42 00 00       	call   8610fb0 <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 860cd5b:	83 ec 04             	sub    $0x4,%esp
 860cd5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860cd65:	00 
 860cd66:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860cd6d:	00 
 860cd6e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cd71:	89 04 24             	mov    %eax,(%esp)
 860cd74:	e8 ad be ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860cd79:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 860cd80:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860cd87:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860cd8e:	e9 72 01 00 00       	jmp    860cf05 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x1f1>
 860cd93:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cd96:	89 04 24             	mov    %eax,(%esp)
 860cd99:	e8 4c 42 00 00       	call   8610fea <_ZNKSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEptEv>
 860cd9e:	8b 00                	mov    (%eax),%eax
 860cda0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860cda3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cda6:	89 04 24             	mov    %eax,(%esp)
 860cda9:	e8 3c 42 00 00       	call   8610fea <_ZNKSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEptEv>
 860cdae:	83 c0 04             	add    $0x4,%eax
 860cdb1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860cdb4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cdb7:	89 04 24             	mov    %eax,(%esp)
 860cdba:	e8 3b 42 af ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 860cdbf:	85 c0                	test   %eax,%eax
 860cdc1:	0f 95 c0             	setne  %al
 860cdc4:	84 c0                	test   %al,%al
 860cdc6:	0f 84 93 00 00 00    	je     860ce5f <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x14b>
 860cdcc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860cdd1:	c7 44 24 08 4a 02 00 	movl   $0x24a,0x8(%esp)
 860cdd8:	00 
 860cdd9:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860cde0:	08 
 860cde1:	89 04 24             	mov    %eax,(%esp)
 860cde4:	e8 9d 2c c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860cde9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860cded:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cdf0:	89 04 24             	mov    %eax,(%esp)
 860cdf3:	e8 4c 18 ad ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 860cdf8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cdfb:	89 04 24             	mov    %eax,(%esp)
 860cdfe:	e8 43 be ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ce03:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 860ce0a:	00 
 860ce0b:	89 04 24             	mov    %eax,(%esp)
 860ce0e:	e8 43 be ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ce13:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860ce16:	89 04 24             	mov    %eax,(%esp)
 860ce19:	e8 28 be ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ce1e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860ce25:	ff 
 860ce26:	89 04 24             	mov    %eax,(%esp)
 860ce29:	e8 28 be ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ce2e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860ce31:	89 04 24             	mov    %eax,(%esp)
 860ce34:	e8 15 be ab ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 860ce39:	89 04 24             	mov    %eax,(%esp)
 860ce3c:	e8 af 42 00 00       	call   86110f0 <_ZN12CStreamGuard11GetInBufferI28SIG_USER_PLAY_TIME_STATISTICEEPT_v>
 860ce41:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860ce44:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 860ce4b:	00 
 860ce4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ce53:	00 
 860ce54:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860ce57:	89 04 24             	mov    %eax,(%esp)
 860ce5a:	e8 61 0e a7 ff       	call   807dcc0 <memset@plt>
 860ce5f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860ce62:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 860ce65:	89 d0                	mov    %edx,%eax
 860ce67:	01 c0                	add    %eax,%eax
 860ce69:	01 d0                	add    %edx,%eax
 860ce6b:	c1 e0 02             	shl    $0x2,%eax
 860ce6e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 860ce71:	8d 50 04             	lea    0x4(%eax),%edx
 860ce74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860ce77:	89 02                	mov    %eax,(%edx)
 860ce79:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860ce7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860ce7f:	8b 08                	mov    (%eax),%ecx
 860ce81:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 860ce84:	89 d0                	mov    %edx,%eax
 860ce86:	01 c0                	add    %eax,%eax
 860ce88:	01 d0                	add    %edx,%eax
 860ce8a:	c1 e0 02             	shl    $0x2,%eax
 860ce8d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 860ce90:	83 c0 08             	add    $0x8,%eax
 860ce93:	89 08                	mov    %ecx,(%eax)
 860ce95:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860ce98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860ce9b:	8b 48 04             	mov    0x4(%eax),%ecx
 860ce9e:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 860cea1:	89 d0                	mov    %edx,%eax
 860cea3:	01 c0                	add    %eax,%eax
 860cea5:	01 d0                	add    %edx,%eax
 860cea7:	c1 e0 02             	shl    $0x2,%eax
 860ceaa:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 860cead:	83 c0 0c             	add    $0xc,%eax
 860ceb0:	89 08                	mov    %ecx,(%eax)
 860ceb2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 860ceb6:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 860ceba:	7e 3e                	jle    860cefa <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x1e6>
 860cebc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860cebf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860cec2:	89 10                	mov    %edx,(%eax)
 860cec4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860cec9:	8d 55 d8             	lea    -0x28(%ebp),%edx
 860cecc:	89 54 24 08          	mov    %edx,0x8(%esp)
 860ced0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860ced7:	00 
 860ced8:	89 04 24             	mov    %eax,(%esp)
 860cedb:	e8 fe 40 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860cee0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860cee7:	00 
 860cee8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860ceeb:	89 04 24             	mov    %eax,(%esp)
 860ceee:	e8 51 17 ad ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 860cef3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860cefa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cefd:	89 04 24             	mov    %eax,(%esp)
 860cf00:	e8 cd 41 00 00       	call   86110d2 <_ZNSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEppEv>
 860cf05:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860cf08:	89 44 24 04          	mov    %eax,0x4(%esp)
 860cf0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cf0f:	89 04 24             	mov    %eax,(%esp)
 860cf12:	e8 bf 40 00 00       	call   8610fd6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEneERKS4_>
 860cf17:	84 c0                	test   %al,%al
 860cf19:	0f 85 74 fe ff ff    	jne    860cd93 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x7f>
 860cf1f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 860cf23:	7e 3e                	jle    860cf63 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x24f>
 860cf25:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860cf28:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860cf2b:	89 10                	mov    %edx,(%eax)
 860cf2d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860cf32:	8d 55 d8             	lea    -0x28(%ebp),%edx
 860cf35:	89 54 24 08          	mov    %edx,0x8(%esp)
 860cf39:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860cf40:	00 
 860cf41:	89 04 24             	mov    %eax,(%esp)
 860cf44:	e8 95 40 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860cf49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860cf50:	00 
 860cf51:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cf54:	89 04 24             	mov    %eax,(%esp)
 860cf57:	e8 e8 16 ad ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 860cf5c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860cf63:	8b 45 08             	mov    0x8(%ebp),%eax
 860cf66:	89 04 24             	mov    %eax,(%esp)
 860cf69:	e8 98 41 00 00       	call   8611106 <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 860cf6e:	eb 1b                	jmp    860cf8b <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv+0x277>
 860cf70:	89 d3                	mov    %edx,%ebx
 860cf72:	89 c6                	mov    %eax,%esi
 860cf74:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cf77:	89 04 24             	mov    %eax,(%esp)
 860cf7a:	e8 53 f9 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860cf7f:	89 f0                	mov    %esi,%eax
 860cf81:	89 da                	mov    %ebx,%edx
 860cf83:	89 04 24             	mov    %eax,(%esp)
 860cf86:	e8 c5 67 4d 00       	call   8ae3750 <_Unwind_Resume>
 860cf8b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860cf8e:	89 04 24             	mov    %eax,(%esp)
 860cf91:	e8 3c f9 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860cf96:	b8 01 00 00 00       	mov    $0x1,%eax
 860cf9b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860cf9e:	83 c4 00             	add    $0x0,%esp
 860cfa1:	5b                   	pop    %ebx
 860cfa2:	5e                   	pop    %esi
 860cfa3:	5d                   	pop    %ebp
 860cfa4:	c3                   	ret

```

```c
// CUserPlayTimeStatisticMgr::InsertUserPlayTime @ 0x860cd14

/* CUserPlayTimeStatisticMgr::InsertUserPlayTime() */

undefined4 __thiscall CUserPlayTimeStatisticMgr::InsertUserPlayTime(CUserPlayTimeStatisticMgr *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_2c [8];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_24 [4];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_20 [4];
  SIG_USER_PLAY_TIME_STATISTIC *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  iVar2 = std::
          map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
          ::size((map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::begin(local_20);
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::end(local_24);
    CStreamGuard::CStreamGuard(local_2c,(Stream *)0x0,false);
    local_1c = (SIG_USER_PLAY_TIME_STATISTIC *)0x0;
    local_18 = 0;
    local_14 = 0;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                         local_20,(_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                          local_20);
      local_14 = *puVar3;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                         local_20);
      local_10 = (undefined4 *)(iVar2 + 4);
      iVar2 = CStreamGuard::Get(local_2c);
      if (iVar2 != 0) {
                    /* try { // try from 0860cde4 to 0860cf6d has its CatchHandler @ 0860cf70 */
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x24a);
        CStreamGuard::Set(local_2c,pSVar4);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
        CStreamGuard::operator<<(pCVar5,0xb6);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
        local_1c = CStreamGuard::GetInBuffer<SIG_USER_PLAY_TIME_STATISTIC>(pCVar5);
        memset(local_1c,0,0xf4);
      }
      *(undefined4 *)(local_1c + local_18 * 0xc + 4) = local_14;
      *(undefined4 *)(local_1c + local_18 * 0xc + 8) = *local_10;
      *(undefined4 *)(local_1c + local_18 * 0xc + 0xc) = local_10[1];
      local_18 = local_18 + 1;
      if (0x13 < local_18) {
        *(int *)local_1c = local_18;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
        CStreamGuard::Set(local_2c,(Stream *)0x0);
        local_18 = 0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)local_20);
    }
    if (0 < local_18) {
      *(int *)local_1c = local_18;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
      CStreamGuard::Set(local_2c,(Stream *)0x0);
      local_18 = 0;
    }
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::clear((map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return 1;
}

```

---

## UpdateUserPlayTime

```asm
// === 0860cc38 CUserPlayTimeStatisticMgr::UpdateUserPlayTime  [0x0860cc38-0x860cd13] ===
 860cc38:	55                   	push   %ebp
 860cc39:	89 e5                	mov    %esp,%ebp
 860cc3b:	83 ec 58             	sub    $0x58,%esp
 860cc3e:	8b 55 08             	mov    0x8(%ebp),%edx
 860cc41:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860cc44:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 860cc47:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860cc4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cc4f:	89 04 24             	mov    %eax,(%esp)
 860cc52:	e8 2d 43 00 00       	call   8610f84 <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 860cc57:	83 ec 04             	sub    $0x4,%esp
 860cc5a:	8b 55 08             	mov    0x8(%ebp),%edx
 860cc5d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860cc60:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cc64:	89 04 24             	mov    %eax,(%esp)
 860cc67:	e8 44 43 00 00       	call   8610fb0 <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 860cc6c:	83 ec 04             	sub    $0x4,%esp
 860cc6f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860cc72:	89 44 24 04          	mov    %eax,0x4(%esp)
 860cc76:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860cc79:	89 04 24             	mov    %eax,(%esp)
 860cc7c:	e8 55 43 00 00       	call   8610fd6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEneERKS4_>
 860cc81:	84 c0                	test   %al,%al
 860cc83:	74 31                	je     860ccb6 <_ZN25CUserPlayTimeStatisticMgr18UpdateUserPlayTimeEji+0x7e>
 860cc85:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860cc88:	89 04 24             	mov    %eax,(%esp)
 860cc8b:	e8 5a 43 00 00       	call   8610fea <_ZNKSt17_Rb_tree_iteratorISt4pairIKj16stUserPlayInfo_tEEptEv>
 860cc90:	83 c0 04             	add    $0x4,%eax
 860cc93:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860cc96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860cc99:	8b 00                	mov    (%eax),%eax
 860cc9b:	89 c2                	mov    %eax,%edx
 860cc9d:	03 55 10             	add    0x10(%ebp),%edx
 860cca0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860cca3:	89 10                	mov    %edx,(%eax)
 860cca5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860cca8:	8b 40 04             	mov    0x4(%eax),%eax
 860ccab:	8d 50 01             	lea    0x1(%eax),%edx
 860ccae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860ccb1:	89 50 04             	mov    %edx,0x4(%eax)
 860ccb4:	eb 57                	jmp    860cd0d <_ZN25CUserPlayTimeStatisticMgr18UpdateUserPlayTimeEji+0xd5>
 860ccb6:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 860ccbd:	8b 45 10             	mov    0x10(%ebp),%eax
 860ccc0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 860ccc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ccc6:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 860ccc9:	89 54 24 08          	mov    %edx,0x8(%esp)
 860cccd:	8d 55 0c             	lea    0xc(%ebp),%edx
 860ccd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ccd4:	89 04 24             	mov    %eax,(%esp)
 860ccd7:	e8 1b 43 00 00       	call   8610ff7 <_ZSt9make_pairIRjR16stUserPlayInfo_tESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 860ccdc:	83 ec 04             	sub    $0x4,%esp
 860ccdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860cce2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860cce6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860cce9:	89 04 24             	mov    %eax,(%esp)
 860ccec:	e8 45 43 00 00       	call   8611036 <_ZNSt4pairIKj16stUserPlayInfo_tEC1IjS1_EEOS_IT_T0_E>
 860ccf1:	8b 55 08             	mov    0x8(%ebp),%edx
 860ccf4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860ccf7:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 860ccfa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860ccfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cd02:	89 04 24             	mov    %eax,(%esp)
 860cd05:	e8 62 43 00 00       	call   861106c <_ZNSt3mapIj16stUserPlayInfo_tSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 860cd0a:	83 ec 04             	sub    $0x4,%esp
 860cd0d:	b8 01 00 00 00       	mov    $0x1,%eax
 860cd12:	c9                   	leave
 860cd13:	c3                   	ret

```

```c
// CUserPlayTimeStatisticMgr::UpdateUserPlayTime @ 0x860cc38

/* CUserPlayTimeStatisticMgr::UpdateUserPlayTime(unsigned int, int) */

undefined4 __thiscall
CUserPlayTimeStatisticMgr::UpdateUserPlayTime
          (CUserPlayTimeStatisticMgr *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> local_38 [4];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_34 [4];
  pair local_30 [8];
  pair<unsigned_int_const,stUserPlayInfo_t> local_28 [12];
  uint local_1c [6];
  
  std::
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  ::find((uint *)local_38);
  std::
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator!=
                    (local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_int&,stUserPlayInfo_t&>(local_1c,(stUserPlayInfo_t *)&param_1);
    std::pair<unsigned_int_const,stUserPlayInfo_t>::pair<unsigned_int,stUserPlayInfo_t>
              (local_28,(pair *)local_1c);
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::insert(local_30);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                      (local_38);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  return 1;
}

```

