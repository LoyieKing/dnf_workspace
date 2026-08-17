# GiveGrowCreatureEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CheckEventInfo

```asm
// === 081b6e7a GiveGrowCreatureEvent::CheckEventInfo  [0x081b6e7a-0x81b6f75] ===
 81b6e7a:	55                   	push   %ebp
 81b6e7b:	89 e5                	mov    %esp,%ebp
 81b6e7d:	83 ec 38             	sub    $0x38,%esp
 81b6e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6e83:	89 04 24             	mov    %eax,(%esp)
 81b6e86:	e8 95 70 f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b6e8b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81b6e8e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b6e95:	e8 04 4e f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b6e9a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b6e9d:	e8 f9 52 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6ea2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81b6ea5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b6ea9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b6eac:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6eb0:	89 04 24             	mov    %eax,(%esp)
 81b6eb3:	e8 42 ec 1a 00       	call   8365afa <_ZN12CDataManager35isAvailableGiveGrowCreatureEventJobEii>
 81b6eb8:	83 f0 01             	xor    $0x1,%eax
 81b6ebb:	84 c0                	test   %al,%al
 81b6ebd:	74 0a                	je     81b6ec9 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0x4f>
 81b6ebf:	b8 03 00 00 00       	mov    $0x3,%eax
 81b6ec4:	e9 aa 00 00 00       	jmp    81b6f73 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xf9>
 81b6ec9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6ecc:	89 04 24             	mov    %eax,(%esp)
 81b6ecf:	e8 e8 ae 4d 00       	call   8691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>
 81b6ed4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b6ed7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b6eda:	89 04 24             	mov    %eax,(%esp)
 81b6edd:	e8 64 06 00 00       	call   81b7546 <_ZNKSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE5emptyEv>
 81b6ee2:	84 c0                	test   %al,%al
 81b6ee4:	74 0a                	je     81b6ef0 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0x76>
 81b6ee6:	b8 00 00 00 00       	mov    $0x0,%eax
 81b6eeb:	e9 83 00 00 00       	jmp    81b6f73 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xf9>
 81b6ef0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b6ef3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b6ef6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6efa:	89 04 24             	mov    %eax,(%esp)
 81b6efd:	e8 88 06 00 00       	call   81b758a <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE5beginEv>
 81b6f02:	83 ec 04             	sub    $0x4,%esp
 81b6f05:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b6f08:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81b6f0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6f0f:	89 04 24             	mov    %eax,(%esp)
 81b6f12:	e8 97 06 00 00       	call   81b75ae <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE3endEv>
 81b6f17:	83 ec 04             	sub    $0x4,%esp
 81b6f1a:	eb 3c                	jmp    81b6f58 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xde>
 81b6f1c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b6f1f:	89 04 24             	mov    %eax,(%esp)
 81b6f22:	e8 0d 07 00 00       	call   81b7634 <_ZNK9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEdeEv>
 81b6f27:	8b 40 08             	mov    0x8(%eax),%eax
 81b6f2a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81b6f2d:	0f 94 c0             	sete   %al
 81b6f30:	84 c0                	test   %al,%al
 81b6f32:	74 07                	je     81b6f3b <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xc1>
 81b6f34:	b8 03 00 00 00       	mov    $0x3,%eax
 81b6f39:	eb 38                	jmp    81b6f73 <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xf9>
 81b6f3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6f3e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b6f45:	00 
 81b6f46:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81b6f49:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6f4d:	89 04 24             	mov    %eax,(%esp)
 81b6f50:	e8 ab 06 00 00       	call   81b7600 <_ZN9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEppEi>
 81b6f55:	83 ec 04             	sub    $0x4,%esp
 81b6f58:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81b6f5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6f5f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b6f62:	89 04 24             	mov    %eax,(%esp)
 81b6f65:	e8 6a 06 00 00       	call   81b75d4 <_ZN9__gnu_cxxneIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81b6f6a:	84 c0                	test   %al,%al
 81b6f6c:	75 ae                	jne    81b6f1c <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser+0xa2>
 81b6f6e:	b8 00 00 00 00       	mov    $0x0,%eax
 81b6f73:	c9                   	leave
 81b6f74:	c3                   	ret
 81b6f75:	90                   	nop

```

```c
// GiveGrowCreatureEvent::CheckEventInfo @ 0x81b6e7a

/* GiveGrowCreatureEvent::CheckEventInfo(CUser&) */

undefined4 __thiscall
GiveGrowCreatureEvent::CheckEventInfo(GiveGrowCreatureEvent *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator local_24 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_20 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_18 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  this_00 = (CDataManager *)G_CDataManager();
  cVar1 = CDataManager::isAvailableGiveGrowCreatureEventJob(this_00,local_18,local_14);
  if (cVar1 == '\x01') {
    local_10 = CUser::getGrowthCreatureEventdata(param_1);
    cVar1 = std::
            vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
            ::empty();
    if (cVar1 == '\0') {
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::begin();
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::end();
      while (bVar2 = __gnu_cxx::operator!=(local_20,local_24), bVar2) {
        iVar4 = __gnu_cxx::
                __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                ::operator*(local_20);
        if (*(int *)(iVar4 + 8) == local_18) {
          return 3;
        }
        __gnu_cxx::
        __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
        ::operator++(local_1c,(int)local_20);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}

```

---

## EndEvent

```asm
// === 081b6a6a GiveGrowCreatureEvent::EndEvent  [0x081b6a6a-0x81b6abb] ===
 81b6a6a:	55                   	push   %ebp
 81b6a6b:	89 e5                	mov    %esp,%ebp
 81b6a6d:	83 ec 28             	sub    $0x28,%esp
 81b6a70:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6a73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b6a7a:	00 
 81b6a7b:	89 04 24             	mov    %eax,(%esp)
 81b6a7e:	e8 5f 1a f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b6a83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b6a8a:	00 
 81b6a8b:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81b6a92:	00 
 81b6a93:	c7 44 24 04 20 ba bb 	movl   $0x8bbba20,0x4(%esp)
 81b6a9a:	08 
 81b6a9b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6a9e:	89 04 24             	mov    %eax,(%esp)
 81b6aa1:	e8 72 8c 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b6aa6:	c7 44 24 04 e0 ad bb 	movl   $0x8bbade0,0x4(%esp)
 81b6aad:	08 
 81b6aae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6ab1:	89 04 24             	mov    %eax,(%esp)
 81b6ab4:	e8 cf 8c 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b6ab9:	c9                   	leave
 81b6aba:	c3                   	ret
 81b6abb:	90                   	nop

```

```c
// GiveGrowCreatureEvent::EndEvent @ 0x81b6a6a

/* GiveGrowCreatureEvent::EndEvent() */

void __thiscall GiveGrowCreatureEvent::EndEvent(GiveGrowCreatureEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event end!");
  return;
}

```

---

## GiveGrowCreatureEvent

```asm
// === 081b695c GiveGrowCreatureEvent::GiveGrowCreatureEvent  [0x081b695c-0x81b6977] ===
 81b695c:	55                   	push   %ebp
 81b695d:	89 e5                	mov    %esp,%ebp
 81b695f:	83 ec 18             	sub    $0x18,%esp
 81b6962:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6965:	89 04 24             	mov    %eax,(%esp)
 81b6968:	e8 bf 44 f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b696d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6970:	c7 00 e8 ba bb 08    	movl   $0x8bbbae8,(%eax)
 81b6976:	c9                   	leave
 81b6977:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::GiveGrowCreatureEvent @ 0x81b695c

/* GiveGrowCreatureEvent::GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__GiveGrowCreatureEvent_08bbbae8;
  return;
}

```

---

## SendGrowthCreatureEventInfo

```asm
// === 081b6b70 GiveGrowCreatureEvent::SendGrowthCreatureEventInfo  [0x081b6b70-0x81b6e79] ===
 81b6b70:	55                   	push   %ebp
 81b6b71:	89 e5                	mov    %esp,%ebp
 81b6b73:	56                   	push   %esi
 81b6b74:	53                   	push   %ebx
 81b6b75:	83 ec 50             	sub    $0x50,%esp
 81b6b78:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6b7b:	89 04 24             	mov    %eax,(%esp)
 81b6b7e:	e8 c9 71 3d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81b6b83:	c7 44 24 08 c0 01 00 	movl   $0x1c0,0x8(%esp)
 81b6b8a:	00 
 81b6b8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b6b92:	00 
 81b6b93:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6b96:	89 04 24             	mov    %eax,(%esp)
 81b6b99:	e8 5e 4d f1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81b6b9e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b6ba5:	e8 f4 50 f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b6baa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b6bad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6bb0:	89 04 24             	mov    %eax,(%esp)
 81b6bb3:	e8 68 73 f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b6bb8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81b6bbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6bbe:	89 04 24             	mov    %eax,(%esp)
 81b6bc1:	e8 f6 b1 4d 00       	call   8691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>
 81b6bc6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81b6bc9:	e8 cd 55 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6bce:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81b6bd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6bd5:	89 04 24             	mov    %eax,(%esp)
 81b6bd8:	e8 47 ee 1a 00       	call   8365a24 <_ZN12CDataManager32getGiveGrowCreatureEventJobCountEi>
 81b6bdd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b6be0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b6be3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6be7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6bea:	89 04 24             	mov    %eax,(%esp)
 81b6bed:	e8 2e 4d f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6bf2:	e8 a4 55 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6bf7:	8d 90 04 4c 00 00    	lea    0x4c04(%eax),%edx
 81b6bfd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6c00:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6c04:	89 04 24             	mov    %eax,(%esp)
 81b6c07:	e8 8e 08 00 00       	call   81b749a <_ZNSt3mapIiN33CharacterCreateCreatureGiftScript8eventJobESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 81b6c0c:	83 ec 04             	sub    $0x4,%esp
 81b6c0f:	e8 87 55 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6c14:	8d 90 04 4c 00 00    	lea    0x4c04(%eax),%edx
 81b6c1a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b6c1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6c21:	89 04 24             	mov    %eax,(%esp)
 81b6c24:	e8 97 08 00 00       	call   81b74c0 <_ZNSt3mapIiN33CharacterCreateCreatureGiftScript8eventJobESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81b6c29:	83 ec 04             	sub    $0x4,%esp
 81b6c2c:	e9 d8 01 00 00       	jmp    81b6e09 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x299>
 81b6c31:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6c34:	89 04 24             	mov    %eax,(%esp)
 81b6c37:	e8 fc 08 00 00       	call   81b7538 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEptEv>
 81b6c3c:	8b 40 04             	mov    0x4(%eax),%eax
 81b6c3f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81b6c42:	7d 1a                	jge    81b6c5e <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0xee>
 81b6c44:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6c47:	89 04 24             	mov    %eax,(%esp)
 81b6c4a:	e8 e9 08 00 00       	call   81b7538 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEptEv>
 81b6c4f:	8b 40 08             	mov    0x8(%eax),%eax
 81b6c52:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81b6c55:	7e 07                	jle    81b6c5e <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0xee>
 81b6c57:	b8 01 00 00 00       	mov    $0x1,%eax
 81b6c5c:	eb 05                	jmp    81b6c63 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0xf3>
 81b6c5e:	b8 00 00 00 00       	mov    $0x0,%eax
 81b6c63:	84 c0                	test   %al,%al
 81b6c65:	0f 84 81 01 00 00    	je     81b6dec <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x27c>
 81b6c6b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6c6e:	89 04 24             	mov    %eax,(%esp)
 81b6c71:	e8 c2 08 00 00       	call   81b7538 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEptEv>
 81b6c76:	8b 00                	mov    (%eax),%eax
 81b6c78:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6c7c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6c7f:	89 04 24             	mov    %eax,(%esp)
 81b6c82:	e8 99 4c f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6c87:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81b6c8a:	89 04 24             	mov    %eax,(%esp)
 81b6c8d:	e8 b4 08 00 00       	call   81b7546 <_ZNKSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE5emptyEv>
 81b6c92:	83 f0 01             	xor    $0x1,%eax
 81b6c95:	84 c0                	test   %al,%al
 81b6c97:	0f 84 10 01 00 00    	je     81b6dad <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x23d>
 81b6c9d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b6ca0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b6ca3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6ca7:	89 04 24             	mov    %eax,(%esp)
 81b6caa:	e8 db 08 00 00       	call   81b758a <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE5beginEv>
 81b6caf:	83 ec 04             	sub    $0x4,%esp
 81b6cb2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b6cb5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81b6cb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6cbc:	89 04 24             	mov    %eax,(%esp)
 81b6cbf:	e8 ea 08 00 00       	call   81b75ae <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE3endEv>
 81b6cc4:	83 ec 04             	sub    $0x4,%esp
 81b6cc7:	e9 c5 00 00 00       	jmp    81b6d91 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x221>
 81b6ccc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b6ccf:	89 04 24             	mov    %eax,(%esp)
 81b6cd2:	e8 5d 09 00 00       	call   81b7634 <_ZNK9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEdeEv>
 81b6cd7:	8b 58 08             	mov    0x8(%eax),%ebx
 81b6cda:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6cdd:	89 04 24             	mov    %eax,(%esp)
 81b6ce0:	e8 53 08 00 00       	call   81b7538 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEptEv>
 81b6ce5:	8b 00                	mov    (%eax),%eax
 81b6ce7:	39 c3                	cmp    %eax,%ebx
 81b6ce9:	0f 94 c0             	sete   %al
 81b6cec:	84 c0                	test   %al,%al
 81b6cee:	0f 84 80 00 00 00    	je     81b6d74 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x204>
 81b6cf4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b6cf7:	89 04 24             	mov    %eax,(%esp)
 81b6cfa:	e8 35 09 00 00       	call   81b7634 <_ZNK9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEdeEv>
 81b6cff:	83 c0 0c             	add    $0xc,%eax
 81b6d02:	89 04 24             	mov    %eax,(%esp)
 81b6d05:	e8 a6 76 ec ff       	call   807e3b0 <strlen@plt>
 81b6d0a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b6d0d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b6d11:	75 15                	jne    81b6d28 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x1b8>
 81b6d13:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b6d1a:	00 
 81b6d1b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6d1e:	89 04 24             	mov    %eax,(%esp)
 81b6d21:	e8 fa 4b f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6d26:	eb 4c                	jmp    81b6d74 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x204>
 81b6d28:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81b6d2f:	00 
 81b6d30:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6d33:	89 04 24             	mov    %eax,(%esp)
 81b6d36:	e8 e5 4b f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6d3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b6d3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6d42:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6d45:	89 04 24             	mov    %eax,(%esp)
 81b6d48:	e8 ef 4b f1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81b6d4d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b6d50:	89 04 24             	mov    %eax,(%esp)
 81b6d53:	e8 dc 08 00 00       	call   81b7634 <_ZNK9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEdeEv>
 81b6d58:	83 c0 0c             	add    $0xc,%eax
 81b6d5b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b6d5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b6d62:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6d66:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6d69:	89 04 24             	mov    %eax,(%esp)
 81b6d6c:	e8 73 06 00 00       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81b6d71:	90                   	nop
 81b6d72:	eb 78                	jmp    81b6dec <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x27c>
 81b6d74:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81b6d77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b6d7e:	00 
 81b6d7f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81b6d82:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6d86:	89 04 24             	mov    %eax,(%esp)
 81b6d89:	e8 72 08 00 00       	call   81b7600 <_ZN9__gnu_cxx17__normal_iteratorIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEppEi>
 81b6d8e:	83 ec 04             	sub    $0x4,%esp
 81b6d91:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81b6d94:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6d98:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b6d9b:	89 04 24             	mov    %eax,(%esp)
 81b6d9e:	e8 31 08 00 00       	call   81b75d4 <_ZN9__gnu_cxxneIPN19GrowthCreatureEvent15eventCharacInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81b6da3:	84 c0                	test   %al,%al
 81b6da5:	0f 85 21 ff ff ff    	jne    81b6ccc <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x15c>
 81b6dab:	eb 3f                	jmp    81b6dec <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x27c>
 81b6dad:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6db0:	89 04 24             	mov    %eax,(%esp)
 81b6db3:	e8 80 07 00 00       	call   81b7538 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEptEv>
 81b6db8:	8b 00                	mov    (%eax),%eax
 81b6dba:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81b6dbd:	0f 94 c0             	sete   %al
 81b6dc0:	84 c0                	test   %al,%al
 81b6dc2:	74 15                	je     81b6dd9 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x269>
 81b6dc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b6dcb:	00 
 81b6dcc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6dcf:	89 04 24             	mov    %eax,(%esp)
 81b6dd2:	e8 49 4b f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6dd7:	eb 13                	jmp    81b6dec <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x27c>
 81b6dd9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b6de0:	00 
 81b6de1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6de4:	89 04 24             	mov    %eax,(%esp)
 81b6de7:	e8 34 4b f1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81b6dec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81b6def:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b6df6:	00 
 81b6df7:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81b6dfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6dfe:	89 04 24             	mov    %eax,(%esp)
 81b6e01:	e8 f4 06 00 00       	call   81b74fa <_ZNSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEppEi>
 81b6e06:	83 ec 04             	sub    $0x4,%esp
 81b6e09:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b6e0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6e10:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b6e13:	89 04 24             	mov    %eax,(%esp)
 81b6e16:	e8 cb 06 00 00       	call   81b74e6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN33CharacterCreateCreatureGiftScript8eventJobEEEneERKS5_>
 81b6e1b:	84 c0                	test   %al,%al
 81b6e1d:	0f 85 0e fe ff ff    	jne    81b6c31 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0xc1>
 81b6e23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b6e2a:	00 
 81b6e2b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6e2e:	89 04 24             	mov    %eax,(%esp)
 81b6e31:	e8 22 4b f1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81b6e36:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6e39:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6e3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6e40:	89 04 24             	mov    %eax,(%esp)
 81b6e43:	e8 72 17 49 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81b6e48:	eb 1b                	jmp    81b6e65 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser+0x2f5>
 81b6e4a:	89 d3                	mov    %edx,%ebx
 81b6e4c:	89 c6                	mov    %eax,%esi
 81b6e4e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6e51:	89 04 24             	mov    %eax,(%esp)
 81b6e54:	e8 27 70 3d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81b6e59:	89 f0                	mov    %esi,%eax
 81b6e5b:	89 da                	mov    %ebx,%edx
 81b6e5d:	89 04 24             	mov    %eax,(%esp)
 81b6e60:	e8 eb c8 92 00       	call   8ae3750 <_Unwind_Resume>
 81b6e65:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81b6e68:	89 04 24             	mov    %eax,(%esp)
 81b6e6b:	e8 10 70 3d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81b6e70:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81b6e73:	83 c4 00             	add    $0x0,%esp
 81b6e76:	5b                   	pop    %ebx
 81b6e77:	5e                   	pop    %esi
 81b6e78:	5d                   	pop    %ebp
 81b6e79:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::SendGrowthCreatureEventInfo @ 0x81b6b70

/* GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&) */

void __thiscall
GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(GiveGrowCreatureEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  int *piVar4;
  __normal_iterator local_44 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_40 [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_3c [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_38 [4];
  PacketGuard local_34 [12];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>> local_24 [4];
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 081b6b99 to 081b6e47 has its CatchHandler @ 081b6e4a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x1c0);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_18 = CUser::getGrowthCreatureEventdata(param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::getGiveGrowCreatureEventJobCount(this_00,local_20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_14);
  G_CDataManager();
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::begin(local_38);
  G_CDataManager();
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::end(local_3c);
  do {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          *)local_38,(_Rb_tree_iterator *)local_3c);
    if (cVar2 == '\0') {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      PacketGuard::~PacketGuard(local_34);
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          *)local_38);
    if ((*(int *)(iVar3 + 4) < local_20) &&
       (iVar3 = std::
                _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                              *)local_38), local_20 < *(int *)(iVar3 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      piVar4 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                    *)local_38);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*piVar4);
      cVar2 = std::
              vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
              ::empty();
      if (cVar2 == '\x01') {
        piVar4 = (int *)std::
                        _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                        ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                      *)local_38);
        if (*piVar4 == local_1c) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        }
      }
      else {
        std::
        vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
        ::begin();
        std::
        vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
        ::end();
        while (bVar1 = __gnu_cxx::operator!=(local_40,local_44), bVar1) {
          iVar3 = __gnu_cxx::
                  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                  ::operator*(local_40);
          iVar3 = *(int *)(iVar3 + 8);
          piVar4 = (int *)std::
                          _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                        *)local_38);
          if (iVar3 == *piVar4) {
            iVar3 = __gnu_cxx::
                    __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                    ::operator*(local_40);
            local_10 = strlen((char *)(iVar3 + 0xc));
            if (local_10 != 0) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,2);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_10);
              iVar3 = __gnu_cxx::
                      __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                      ::operator*(local_40);
              InterfacePacketBuf::put_str
                        ((InterfacePacketBuf *)local_34,(char *)(iVar3 + 0xc),local_10);
              break;
            }
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
          __gnu_cxx::
          __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
          ::operator++(local_28,(int)local_40);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>::
    operator++(local_24,(int)local_38);
  } while( true );
}

```

---

## StartAction

```asm
// === 081b6abc GiveGrowCreatureEvent::StartAction  [0x081b6abc-0x81b6b6f] ===
 81b6abc:	55                   	push   %ebp
 81b6abd:	89 e5                	mov    %esp,%ebp
 81b6abf:	83 ec 28             	sub    $0x28,%esp
 81b6ac2:	e8 e0 38 f2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81b6ac7:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 81b6acd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6ad0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6ad4:	89 04 24             	mov    %eax,(%esp)
 81b6ad7:	e8 ca 0d f4 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 81b6adc:	83 ec 04             	sub    $0x4,%esp
 81b6adf:	eb 55                	jmp    81b6b36 <_ZN21GiveGrowCreatureEvent11StartActionEv+0x7a>
 81b6ae1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6ae4:	89 04 24             	mov    %eax,(%esp)
 81b6ae7:	e8 58 0e f4 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 81b6aec:	8b 40 04             	mov    0x4(%eax),%eax
 81b6aef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b6af2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b6af5:	89 04 24             	mov    %eax,(%esp)
 81b6af8:	e8 8f 38 f2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81b6afd:	83 f8 02             	cmp    $0x2,%eax
 81b6b00:	0f 9f c0             	setg   %al
 81b6b03:	84 c0                	test   %al,%al
 81b6b05:	74 12                	je     81b6b19 <_ZN21GiveGrowCreatureEvent11StartActionEv+0x5d>
 81b6b07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b6b0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6b11:	89 04 24             	mov    %eax,(%esp)
 81b6b14:	e8 57 00 00 00       	call   81b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>
 81b6b19:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b6b1c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b6b23:	00 
 81b6b24:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81b6b27:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6b2b:	89 04 24             	mov    %eax,(%esp)
 81b6b2e:	e8 d3 0d f4 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 81b6b33:	83 ec 04             	sub    $0x4,%esp
 81b6b36:	e8 6c 38 f2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81b6b3b:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 81b6b41:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b6b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6b48:	89 04 24             	mov    %eax,(%esp)
 81b6b4b:	e8 7c 0d f4 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 81b6b50:	83 ec 04             	sub    $0x4,%esp
 81b6b53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b6b56:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b6b5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6b5d:	89 04 24             	mov    %eax,(%esp)
 81b6b60:	e8 8d 0d f4 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 81b6b65:	84 c0                	test   %al,%al
 81b6b67:	0f 85 74 ff ff ff    	jne    81b6ae1 <_ZN21GiveGrowCreatureEvent11StartActionEv+0x25>
 81b6b6d:	c9                   	leave
 81b6b6e:	c3                   	ret
 81b6b6f:	90                   	nop

```

```c
// GiveGrowCreatureEvent::StartAction @ 0x81b6abc

/* GiveGrowCreatureEvent::StartAction() */

void __thiscall GiveGrowCreatureEvent::StartAction(GiveGrowCreatureEvent *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      SendGrowthCreatureEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}

```

---

## StartEvent

```asm
// === 081b69c6 GiveGrowCreatureEvent::StartEvent  [0x081b69c6-0x81b6a17] ===
 81b69c6:	55                   	push   %ebp
 81b69c7:	89 e5                	mov    %esp,%ebp
 81b69c9:	83 ec 28             	sub    $0x28,%esp
 81b69cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81b69cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b69d6:	00 
 81b69d7:	89 04 24             	mov    %eax,(%esp)
 81b69da:	e8 03 1b f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b69df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b69e6:	00 
 81b69e7:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81b69ee:	00 
 81b69ef:	c7 44 24 04 a0 ba bb 	movl   $0x8bbbaa0,0x4(%esp)
 81b69f6:	08 
 81b69f7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b69fa:	89 04 24             	mov    %eax,(%esp)
 81b69fd:	e8 16 8d 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b6a02:	c7 44 24 04 84 ad bb 	movl   $0x8bbad84,0x4(%esp)
 81b6a09:	08 
 81b6a0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6a0d:	89 04 24             	mov    %eax,(%esp)
 81b6a10:	e8 73 8d 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b6a15:	c9                   	leave
 81b6a16:	c3                   	ret
 81b6a17:	90                   	nop

```

```c
// GiveGrowCreatureEvent::StartEvent @ 0x81b69c6

/* GiveGrowCreatureEvent::StartEvent() */

void __thiscall GiveGrowCreatureEvent::StartEvent(GiveGrowCreatureEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event start!");
  return;
}

```

---

## StartEvent_081b6a18

```asm
// === 081b6a18 GiveGrowCreatureEvent::StartEvent  [0x081b6a18-0x81b6a69] ===
 81b6a18:	55                   	push   %ebp
 81b6a19:	89 e5                	mov    %esp,%ebp
 81b6a1b:	83 ec 28             	sub    $0x28,%esp
 81b6a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6a21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b6a28:	00 
 81b6a29:	89 04 24             	mov    %eax,(%esp)
 81b6a2c:	e8 b1 1a f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b6a31:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b6a38:	00 
 81b6a39:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81b6a40:	00 
 81b6a41:	c7 44 24 04 60 ba bb 	movl   $0x8bbba60,0x4(%esp)
 81b6a48:	08 
 81b6a49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6a4c:	89 04 24             	mov    %eax,(%esp)
 81b6a4f:	e8 c4 8c 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b6a54:	c7 44 24 04 a8 ad bb 	movl   $0x8bbada8,0x4(%esp)
 81b6a5b:	08 
 81b6a5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b6a5f:	89 04 24             	mov    %eax,(%esp)
 81b6a62:	e8 21 8d 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b6a67:	c9                   	leave
 81b6a68:	c3                   	ret
 81b6a69:	90                   	nop

```

```c
// GiveGrowCreatureEvent::StartEvent @ 0x81b6a18

/* GiveGrowCreatureEvent::StartEvent(Word_Param) */

void GiveGrowCreatureEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event start! [monitor request]");
  return;
}

```

---

## changeCharacName

```asm
// === 081b717a GiveGrowCreatureEvent::changeCharacName  [0x081b717a-0x81b7340] ===
 81b717a:	55                   	push   %ebp
 81b717b:	89 e5                	mov    %esp,%ebp
 81b717d:	83 ec 58             	sub    $0x58,%esp
 81b7180:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b7184:	0f 84 b1 01 00 00    	je     81b733b <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x1c1>
 81b718a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b718d:	89 04 24             	mov    %eax,(%esp)
 81b7190:	e8 e7 37 49 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81b7195:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b7198:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b719b:	89 04 24             	mov    %eax,(%esp)
 81b719e:	e8 19 ac 4d 00       	call   8691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>
 81b71a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81b71a6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b71a9:	89 04 24             	mov    %eax,(%esp)
 81b71ac:	e8 95 03 00 00       	call   81b7546 <_ZNKSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE5emptyEv>
 81b71b1:	84 c0                	test   %al,%al
 81b71b3:	0f 85 85 01 00 00    	jne    81b733e <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x1c4>
 81b71b9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81b71c0:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 81b71c4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81b71cb:	e9 a9 00 00 00       	jmp    81b7279 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xff>
 81b71d0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b71d3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b71d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b71da:	89 04 24             	mov    %eax,(%esp)
 81b71dd:	e8 14 05 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b71e2:	0f b7 00             	movzwl (%eax),%eax
 81b71e5:	98                   	cwtl
 81b71e6:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81b71e9:	75 49                	jne    81b7234 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xba>
 81b71eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b71ee:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b71f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b71f5:	89 04 24             	mov    %eax,(%esp)
 81b71f8:	e8 f9 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b71fd:	8b 40 04             	mov    0x4(%eax),%eax
 81b7200:	3b 45 10             	cmp    0x10(%ebp),%eax
 81b7203:	75 2f                	jne    81b7234 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xba>
 81b7205:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b7208:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b720b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b720f:	89 04 24             	mov    %eax,(%esp)
 81b7212:	e8 df 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b7217:	83 c0 0c             	add    $0xc,%eax
 81b721a:	8b 55 14             	mov    0x14(%ebp),%edx
 81b721d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b7221:	89 04 24             	mov    %eax,(%esp)
 81b7224:	e8 b7 72 ec ff       	call   807e4e0 <strcmp@plt>
 81b7229:	85 c0                	test   %eax,%eax
 81b722b:	74 07                	je     81b7234 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xba>
 81b722d:	b8 01 00 00 00       	mov    $0x1,%eax
 81b7232:	eb 05                	jmp    81b7239 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xbf>
 81b7234:	b8 00 00 00 00       	mov    $0x0,%eax
 81b7239:	84 c0                	test   %al,%al
 81b723b:	74 38                	je     81b7275 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0xfb>
 81b723d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b7240:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b7243:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b7247:	89 04 24             	mov    %eax,(%esp)
 81b724a:	e8 a7 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b724f:	83 c0 0c             	add    $0xc,%eax
 81b7252:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81b7259:	00 
 81b725a:	8b 55 14             	mov    0x14(%ebp),%edx
 81b725d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b7261:	89 04 24             	mov    %eax,(%esp)
 81b7264:	e8 67 66 ec ff       	call   807d8d0 <strncpy@plt>
 81b7269:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 81b726d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b7270:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81b7273:	eb 1d                	jmp    81b7292 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x118>
 81b7275:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81b7279:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b727c:	89 04 24             	mov    %eax,(%esp)
 81b727f:	e8 50 04 00 00       	call   81b76d4 <_ZNKSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE4sizeEv>
 81b7284:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81b7287:	0f 97 c0             	seta   %al
 81b728a:	84 c0                	test   %al,%al
 81b728c:	0f 85 3e ff ff ff    	jne    81b71d0 <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x56>
 81b7292:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 81b7296:	0f 84 a3 00 00 00    	je     81b733f <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x1c5>
 81b729c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b729f:	89 04 24             	mov    %eax,(%esp)
 81b72a2:	e8 6f 01 00 00       	call   81b7416 <_ZN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoC1Ev>
 81b72a7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b72aa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b72ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b72b1:	89 04 24             	mov    %eax,(%esp)
 81b72b4:	e8 3d 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b72b9:	0f b7 00             	movzwl (%eax),%eax
 81b72bc:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 81b72c0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b72c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b72c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b72ca:	89 04 24             	mov    %eax,(%esp)
 81b72cd:	e8 24 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b72d2:	8b 40 04             	mov    0x4(%eax),%eax
 81b72d5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81b72d8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b72db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b72de:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b72e2:	89 04 24             	mov    %eax,(%esp)
 81b72e5:	e8 0c 04 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b72ea:	8b 40 08             	mov    0x8(%eax),%eax
 81b72ed:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81b72f0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b72f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b72f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b72fa:	89 04 24             	mov    %eax,(%esp)
 81b72fd:	e8 f4 03 00 00       	call   81b76f6 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EEixEj>
 81b7302:	83 c0 0c             	add    $0xc,%eax
 81b7305:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81b730c:	00 
 81b730d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b7311:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b7314:	83 c0 0c             	add    $0xc,%eax
 81b7317:	89 04 24             	mov    %eax,(%esp)
 81b731a:	e8 b1 65 ec ff       	call   807d8d0 <strncpy@plt>
 81b731f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b7322:	89 04 24             	mov    %eax,(%esp)
 81b7325:	e8 44 30 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81b732a:	8d 55 b8             	lea    -0x48(%ebp),%edx
 81b732d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b7331:	89 04 24             	mov    %eax,(%esp)
 81b7334:	e8 e3 29 29 00       	call   8449d1c <_ZN30DB_EventUpdateGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE>
 81b7339:	eb 04                	jmp    81b733f <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x1c5>
 81b733b:	90                   	nop
 81b733c:	eb 01                	jmp    81b733f <_ZN21GiveGrowCreatureEvent16changeCharacNameEP5CUseriPci+0x1c5>
 81b733e:	90                   	nop
 81b733f:	c9                   	leave
 81b7340:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::changeCharacName @ 0x81b717a

/* GiveGrowCreatureEvent::changeCharacName(CUser*, int, char*, int) */

void GiveGrowCreatureEvent::changeCharacName(CUser *param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  short *psVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  char acStack_40 [32];
  int local_20;
  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
  *local_1c;
  uint local_18;
  char local_11;
  uint local_10;
  
  if (param_2 != 0) {
    local_20 = CUser::GetServerGroupToPvP((CUser *)param_2);
    local_1c = (vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                *)CUser::getGrowthCreatureEventdata((CUser *)param_2);
    cVar2 = std::
            vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
            ::empty();
    if (cVar2 == '\0') {
      local_18 = 0;
      local_11 = '\0';
      local_10 = 0;
      while (uVar4 = std::
                     vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                     ::size(local_1c), local_10 < uVar4) {
        psVar3 = (short *)std::
                          vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                          ::operator[](local_1c,local_10);
        if ((*psVar3 == local_20) &&
           (iVar6 = std::
                    vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                    ::operator[](local_1c,local_10), *(char **)(iVar6 + 4) == param_3)) {
          iVar6 = std::
                  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                  ::operator[](local_1c,local_10);
          iVar6 = strcmp((char *)(iVar6 + 0xc),(char *)param_4);
          if (iVar6 == 0) goto LAB_081b7234;
          bVar1 = true;
        }
        else {
LAB_081b7234:
          bVar1 = false;
        }
        if (bVar1) {
          iVar6 = std::
                  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                  ::operator[](local_1c,local_10);
          strncpy((char *)(iVar6 + 0xc),(char *)param_4,0x1d);
          local_11 = '\x01';
          local_18 = local_10;
          break;
        }
        local_10 = local_10 + 1;
      }
      if (local_11 != '\0') {
        SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo::eventCharacInfo
                  ((eventCharacInfo *)local_4c);
        puVar5 = (undefined2 *)
                 std::
                 vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                 ::operator[](local_1c,local_18);
        local_4c[0] = *puVar5;
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        local_48 = *(undefined4 *)(iVar6 + 4);
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        local_44 = *(undefined4 *)(iVar6 + 8);
        iVar6 = std::
                vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                ::operator[](local_1c,local_18);
        strncpy(acStack_40,(char *)(iVar6 + 0xc),0x1d);
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        DB_EventUpdateGiveGrowCreature::makeRequest(uVar4,(eventCharacInfo *)local_4c);
      }
    }
  }
  return;
}

```

---

## isGrowCreatureMaxLevel

```asm
// === 081b7156 GiveGrowCreatureEvent::isGrowCreatureMaxLevel  [0x081b7156-0x81b7179] ===
 81b7156:	55                   	push   %ebp
 81b7157:	89 e5                	mov    %esp,%ebp
 81b7159:	83 ec 18             	sub    $0x18,%esp
 81b715c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b715f:	89 04 24             	mov    %eax,(%esp)
 81b7162:	e8 17 31 f2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81b7167:	89 04 24             	mov    %eax,(%esp)
 81b716a:	e8 99 02 00 00       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 81b716f:	89 04 24             	mov    %eax,(%esp)
 81b7172:	e8 3b 4a 18 00       	call   833bbb2 <_ZNK13user_creature12CCreatureMgr22isGrowCreatureMaxLevelEv>
 81b7177:	c9                   	leave
 81b7178:	c3                   	ret
 81b7179:	90                   	nop

```

```c
// GiveGrowCreatureEvent::isGrowCreatureMaxLevel @ 0x81b7156

/* GiveGrowCreatureEvent::isGrowCreatureMaxLevel(CUser&) */

void __thiscall
GiveGrowCreatureEvent::isGrowCreatureMaxLevel(GiveGrowCreatureEvent *this,CUser *param_1)

{
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
  user_creature::CCreatureMgr::isGrowCreatureMaxLevel(this_01);
  return;
}

```

---

## processEvent

```asm
// === 081b6f76 GiveGrowCreatureEvent::processEvent  [0x081b6f76-0x81b7155] ===
 81b6f76:	55                   	push   %ebp
 81b6f77:	89 e5                	mov    %esp,%ebp
 81b6f79:	81 ec 88 00 00 00    	sub    $0x88,%esp
 81b6f7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b6f82:	89 04 24             	mov    %eax,(%esp)
 81b6f85:	e8 f4 32 f2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81b6f8a:	89 04 24             	mov    %eax,(%esp)
 81b6f8d:	e8 76 04 00 00       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 81b6f92:	89 04 24             	mov    %eax,(%esp)
 81b6f95:	e8 9e 36 18 00       	call   833a638 <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv>
 81b6f9a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b6f9d:	e8 f9 51 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6fa2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81b6fa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6fa9:	89 04 24             	mov    %eax,(%esp)
 81b6fac:	e8 f5 eb 1a 00       	call   8365ba6 <_ZN12CDataManager30getInfinityChangeCreatureIndexEi>
 81b6fb1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81b6fb4:	e8 e2 51 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6fb9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81b6fbc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6fc0:	89 04 24             	mov    %eax,(%esp)
 81b6fc3:	e8 4e ec 1a 00       	call   8365c16 <_ZN12CDataManager28getClientChangeCreatureIndexEi>
 81b6fc8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81b6fcb:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 81b6fcf:	74 06                	je     81b6fd7 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x61>
 81b6fd1:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 81b6fd5:	75 0a                	jne    81b6fe1 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x6b>
 81b6fd7:	b8 16 00 00 00       	mov    $0x16,%eax
 81b6fdc:	e9 73 01 00 00       	jmp    81b7154 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x1de>
 81b6fe1:	e8 b5 51 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b6fe6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81b6fe9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b6fed:	89 04 24             	mov    %eax,(%esp)
 81b6ff0:	e8 3d 8a 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81b6ff5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b6ff8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81b6ffc:	75 0a                	jne    81b7008 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x92>
 81b6ffe:	b8 16 00 00 00       	mov    $0x16,%eax
 81b7003:	e9 4c 01 00 00       	jmp    81b7154 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x1de>
 81b7008:	e8 8e 51 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b700d:	89 04 24             	mov    %eax,(%esp)
 81b7010:	e8 83 eb 1a 00       	call   8365b98 <_ZN12CDataManager24getChangeAbleCreatureLevEv>
 81b7015:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b7018:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b701b:	8b 00                	mov    (%eax),%eax
 81b701d:	83 c0 0c             	add    $0xc,%eax
 81b7020:	8b 10                	mov    (%eax),%edx
 81b7022:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b7025:	89 04 24             	mov    %eax,(%esp)
 81b7028:	ff d2                	call   *%edx
 81b702a:	83 f8 16             	cmp    $0x16,%eax
 81b702d:	0f 94 c0             	sete   %al
 81b7030:	84 c0                	test   %al,%al
 81b7032:	74 41                	je     81b7075 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0xff>
 81b7034:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b7037:	89 04 24             	mov    %eax,(%esp)
 81b703a:	e8 4f 32 f2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81b703f:	89 04 24             	mov    %eax,(%esp)
 81b7042:	e8 21 65 f2 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81b7047:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b704a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b704e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b7051:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b7055:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81b7058:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b705c:	89 04 24             	mov    %eax,(%esp)
 81b705f:	e8 ba 69 18 00       	call   833da1e <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii>
 81b7064:	83 f0 01             	xor    $0x1,%eax
 81b7067:	84 c0                	test   %al,%al
 81b7069:	74 0a                	je     81b7075 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0xff>
 81b706b:	b8 16 00 00 00       	mov    $0x16,%eax
 81b7070:	e9 df 00 00 00       	jmp    81b7154 <_ZN21GiveGrowCreatureEvent12processEventER5CUser+0x1de>
 81b7075:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b7078:	89 04 24             	mov    %eax,(%esp)
 81b707b:	e8 96 03 00 00       	call   81b7416 <_ZN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoC1Ev>
 81b7080:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b7083:	89 04 24             	mov    %eax,(%esp)
 81b7086:	e8 f1 38 49 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81b708b:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 81b708f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b7092:	89 04 24             	mov    %eax,(%esp)
 81b7095:	e8 b4 4b f1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81b709a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81b709d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b70a0:	89 04 24             	mov    %eax,(%esp)
 81b70a3:	e8 78 6e f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b70a8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81b70ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b70ae:	89 04 24             	mov    %eax,(%esp)
 81b70b1:	e8 72 9f f4 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81b70b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b70ba:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b70bd:	83 c0 0c             	add    $0xc,%eax
 81b70c0:	89 04 24             	mov    %eax,(%esp)
 81b70c3:	e8 76 05 00 00       	call   81b763e <_Z9ss_strcpyILj30EEiRAT__cPKc>
 81b70c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b70cb:	89 04 24             	mov    %eax,(%esp)
 81b70ce:	e8 9b 32 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81b70d3:	8d 55 b8             	lea    -0x48(%ebp),%edx
 81b70d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b70da:	89 04 24             	mov    %eax,(%esp)
 81b70dd:	e8 50 2a 29 00       	call   8449b32 <_ZN28DB_EventSaveGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE>
 81b70e2:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81b70e5:	89 04 24             	mov    %eax,(%esp)
 81b70e8:	e8 6b 03 00 00       	call   81b7458 <_ZN19GrowthCreatureEvent15eventCharacInfoC1Ev>
 81b70ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b70f0:	89 04 24             	mov    %eax,(%esp)
 81b70f3:	e8 84 38 49 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81b70f8:	66 89 45 8c          	mov    %ax,-0x74(%ebp)
 81b70fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b70ff:	89 04 24             	mov    %eax,(%esp)
 81b7102:	e8 47 4b f1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81b7107:	89 45 90             	mov    %eax,-0x70(%ebp)
 81b710a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b710d:	89 04 24             	mov    %eax,(%esp)
 81b7110:	e8 0b 6e f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b7115:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81b7118:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b711b:	89 04 24             	mov    %eax,(%esp)
 81b711e:	e8 05 9f f4 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81b7123:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b7127:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81b712a:	83 c0 0c             	add    $0xc,%eax
 81b712d:	89 04 24             	mov    %eax,(%esp)
 81b7130:	e8 09 05 00 00       	call   81b763e <_Z9ss_strcpyILj30EEiRAT__cPKc>
 81b7135:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b7138:	89 04 24             	mov    %eax,(%esp)
 81b713b:	e8 7c ac 4d 00       	call   8691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>
 81b7140:	8d 55 8c             	lea    -0x74(%ebp),%edx
 81b7143:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b7147:	89 04 24             	mov    %eax,(%esp)
 81b714a:	e8 11 05 00 00       	call   81b7660 <_ZNSt6vectorIN19GrowthCreatureEvent15eventCharacInfoESaIS1_EE9push_backERKS1_>
 81b714f:	b8 00 00 00 00       	mov    $0x0,%eax
 81b7154:	c9                   	leave
 81b7155:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::processEvent @ 0x81b6f76

/* GiveGrowCreatureEvent::processEvent(CUser&) */

undefined4 __thiscall
GiveGrowCreatureEvent::processEvent(GiveGrowCreatureEvent *this,CUser *param_1)

{
  char cVar1;
  CInventory *pCVar2;
  CCreatureMgr *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  char *pcVar7;
  uint uVar8;
  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
  *this_00;
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined4 local_70;
  char acStack_6c [32];
  undefined2 local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  char acStack_40 [32];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar2);
  local_20 = user_creature::CCreatureMgr::GetCreatureItemId(pCVar3);
  iVar4 = G_CDataManager();
  local_1c = CDataManager::getInfinityChangeCreatureIndex(iVar4);
  iVar4 = G_CDataManager();
  local_18 = CDataManager::getClientChangeCreatureIndex(iVar4);
  if ((local_1c == -1) || (local_18 == -1)) {
    uVar5 = 0x16;
  }
  else {
    pCVar6 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(pCVar6,local_1c);
    if (local_14 == (int *)0x0) {
      uVar5 = 0x16;
    }
    else {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::getChangeAbleCreatureLev(pCVar6);
      iVar4 = (**(code **)(*local_14 + 0xc))(local_14);
      if (iVar4 == 0x16) {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
        cVar1 = user_creature::CCreatureMgr::EventEvoluteCreature(pCVar3,local_1c,local_10,local_18)
        ;
        if (cVar1 != '\x01') {
          return 0x16;
        }
      }
      SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo::eventCharacInfo((eventCharacInfo *)local_4c);
      local_4c[0] = CUser::GetServerGroupToPvP(param_1);
      local_48 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_44 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      ss_strcpy<30u>(acStack_40,pcVar7);
      uVar8 = CUser::get_acc_id(param_1);
      DB_EventSaveGiveGrowCreature::makeRequest(uVar8,(eventCharacInfo *)local_4c);
      GrowthCreatureEvent::eventCharacInfo::eventCharacInfo((eventCharacInfo *)local_78);
      local_78[0] = CUser::GetServerGroupToPvP(param_1);
      local_74 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_70 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      ss_strcpy<30u>(acStack_6c,pcVar7);
      this_00 = (vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                 *)CUser::getGrowthCreatureEventdata(param_1);
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::push_back(this_00,(eventCharacInfo *)local_78);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## ~GiveGrowCreatureEvent

```asm
// === 081b6978 GiveGrowCreatureEvent::~GiveGrowCreatureEvent  [0x081b6978-0x81b69a7] ===
 81b6978:	55                   	push   %ebp
 81b6979:	89 e5                	mov    %esp,%ebp
 81b697b:	83 ec 18             	sub    $0x18,%esp
 81b697e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b6981:	c7 00 e8 ba bb 08    	movl   $0x8bbbae8,(%eax)
 81b6987:	8b 45 08             	mov    0x8(%ebp),%eax
 81b698a:	89 04 24             	mov    %eax,(%esp)
 81b698d:	e8 c0 44 f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b6992:	b8 00 00 00 00       	mov    $0x0,%eax
 81b6997:	84 c0                	test   %al,%al
 81b6999:	74 0b                	je     81b69a6 <_ZN21GiveGrowCreatureEventD1Ev+0x2e>
 81b699b:	8b 45 08             	mov    0x8(%ebp),%eax
 81b699e:	89 04 24             	mov    %eax,(%esp)
 81b69a1:	e8 4a db 56 00       	call   87244f0 <_ZdlPv>
 81b69a6:	c9                   	leave
 81b69a7:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::~GiveGrowCreatureEvent @ 0x81b6978

/* WARNING: Removing unreachable block (ram,0x081b699b) */
/* GiveGrowCreatureEvent::~GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::~GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  *(undefined ***)this = &PTR__GiveGrowCreatureEvent_08bbbae8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~GiveGrowCreatureEvent_081b69a8

```asm
// === 081b69a8 GiveGrowCreatureEvent::~GiveGrowCreatureEvent  [0x081b69a8-0x81b69c5] ===
 81b69a8:	55                   	push   %ebp
 81b69a9:	89 e5                	mov    %esp,%ebp
 81b69ab:	83 ec 18             	sub    $0x18,%esp
 81b69ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81b69b1:	89 04 24             	mov    %eax,(%esp)
 81b69b4:	e8 bf ff ff ff       	call   81b6978 <_ZN21GiveGrowCreatureEventD1Ev>
 81b69b9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b69bc:	89 04 24             	mov    %eax,(%esp)
 81b69bf:	e8 2c db 56 00       	call   87244f0 <_ZdlPv>
 81b69c4:	c9                   	leave
 81b69c5:	c3                   	ret

```

```c
// GiveGrowCreatureEvent::~GiveGrowCreatureEvent @ 0x81b69a8

/* GiveGrowCreatureEvent::~GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::~GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  ~GiveGrowCreatureEvent(this);
  operator_delete(this);
  return;
}

```

