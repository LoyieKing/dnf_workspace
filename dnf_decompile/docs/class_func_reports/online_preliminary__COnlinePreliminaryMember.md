# online_preliminary__COnlinePreliminaryMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## COnlinePreliminaryMember

```asm
// === 08585f34 online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember  [0x08585f34-0x8585f4f] ===
 8585f34:	55                   	push   %ebp
 8585f35:	89 e5                	mov    %esp,%ebp
 8585f37:	83 ec 18             	sub    $0x18,%esp
 8585f3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f3d:	89 04 24             	mov    %eax,(%esp)
 8585f40:	e8 75 2d b4 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 8585f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f48:	c7 00 08 b8 ca 08    	movl   $0x8cab808,(%eax)
 8585f4e:	c9                   	leave
 8585f4f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember @ 0x8585f34

/* online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab808;
  return;
}

```

---

## IncreaseLoseCount

```asm
// === 08586146 online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount  [0x08586146-0x8586167] ===
 8586146:	55                   	push   %ebp
 8586147:	89 e5                	mov    %esp,%ebp
 8586149:	83 ec 18             	sub    $0x18,%esp
 858614c:	8b 45 08             	mov    0x8(%ebp),%eax
 858614f:	8b 40 10             	mov    0x10(%eax),%eax
 8586152:	8d 50 01             	lea    0x1(%eax),%edx
 8586155:	8b 45 08             	mov    0x8(%ebp),%eax
 8586158:	89 50 10             	mov    %edx,0x10(%eax)
 858615b:	8b 45 08             	mov    0x8(%ebp),%eax
 858615e:	89 04 24             	mov    %eax,(%esp)
 8586161:	e8 5e 2a b4 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8586166:	c9                   	leave
 8586167:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount @ 0x8586146

/* online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount(COnlinePreliminaryMember *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## IncreaseWinCount

```asm
// === 08586124 online_preliminary::COnlinePreliminaryMember::IncreaseWinCount  [0x08586124-0x8586145] ===
 8586124:	55                   	push   %ebp
 8586125:	89 e5                	mov    %esp,%ebp
 8586127:	83 ec 18             	sub    $0x18,%esp
 858612a:	8b 45 08             	mov    0x8(%ebp),%eax
 858612d:	8b 40 0c             	mov    0xc(%eax),%eax
 8586130:	8d 50 01             	lea    0x1(%eax),%edx
 8586133:	8b 45 08             	mov    0x8(%ebp),%eax
 8586136:	89 50 0c             	mov    %edx,0xc(%eax)
 8586139:	8b 45 08             	mov    0x8(%ebp),%eax
 858613c:	89 04 24             	mov    %eax,(%esp)
 858613f:	e8 80 2a b4 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8586144:	c9                   	leave
 8586145:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::IncreaseWinCount @ 0x8586124

/* online_preliminary::COnlinePreliminaryMember::IncreaseWinCount() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::IncreaseWinCount(COnlinePreliminaryMember *this)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## SetRating

```asm
// === 08586168 online_preliminary::COnlinePreliminaryMember::SetRating  [0x08586168-0x8586183] ===
 8586168:	55                   	push   %ebp
 8586169:	89 e5                	mov    %esp,%ebp
 858616b:	83 ec 18             	sub    $0x18,%esp
 858616e:	8b 45 08             	mov    0x8(%ebp),%eax
 8586171:	8b 55 0c             	mov    0xc(%ebp),%edx
 8586174:	89 50 08             	mov    %edx,0x8(%eax)
 8586177:	8b 45 08             	mov    0x8(%ebp),%eax
 858617a:	89 04 24             	mov    %eax,(%esp)
 858617d:	e8 42 2a b4 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8586182:	c9                   	leave
 8586183:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::SetRating @ 0x8586168

/* online_preliminary::COnlinePreliminaryMember::SetRating(float) */

void __thiscall
online_preliminary::COnlinePreliminaryMember::SetRating
          (COnlinePreliminaryMember *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## _reset

```asm
// === 08586100 online_preliminary::COnlinePreliminaryMember::_reset  [0x08586100-0x8586123] ===
 8586100:	55                   	push   %ebp
 8586101:	89 e5                	mov    %esp,%ebp
 8586103:	8b 45 08             	mov    0x8(%ebp),%eax
 8586106:	ba 00 00 00 00       	mov    $0x0,%edx
 858610b:	89 50 08             	mov    %edx,0x8(%eax)
 858610e:	8b 45 08             	mov    0x8(%ebp),%eax
 8586111:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8586118:	8b 45 08             	mov    0x8(%ebp),%eax
 858611b:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8586122:	5d                   	pop    %ebp
 8586123:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::_reset @ 0x8586100

/* online_preliminary::COnlinePreliminaryMember::_reset() */

void __thiscall online_preliminary::COnlinePreliminaryMember::_reset(COnlinePreliminaryMember *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

---

## _saveData

```asm
// === 08585fd6 online_preliminary::COnlinePreliminaryMember::_saveData  [0x08585fd6-0x85860ff] ===
 8585fd6:	55                   	push   %ebp
 8585fd7:	89 e5                	mov    %esp,%ebp
 8585fd9:	56                   	push   %esi
 8585fda:	53                   	push   %ebx
 8585fdb:	83 ec 20             	sub    $0x20,%esp
 8585fde:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8585fe3:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 8585fea:	00 
 8585feb:	c7 44 24 04 e0 aa ca 	movl   $0x8caaae0,0x4(%esp)
 8585ff2:	08 
 8585ff3:	89 04 24             	mov    %eax,(%esp)
 8585ff6:	e8 8b 9a d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8585ffb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8586002:	00 
 8586003:	89 44 24 04          	mov    %eax,0x4(%esp)
 8586007:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858600a:	89 04 24             	mov    %eax,(%esp)
 858600d:	e8 14 2c b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8586012:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8586015:	89 04 24             	mov    %eax,(%esp)
 8586018:	e8 29 2c b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 858601d:	c7 44 24 04 e7 01 00 	movl   $0x1e7,0x4(%esp)
 8586024:	00 
 8586025:	89 04 24             	mov    %eax,(%esp)
 8586028:	e8 29 2c b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 858602d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8586030:	89 04 24             	mov    %eax,(%esp)
 8586033:	e8 5e 2c b4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8586038:	89 c3                	mov    %eax,%ebx
 858603a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858603d:	89 04 24             	mov    %eax,(%esp)
 8586040:	e8 01 2c b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8586045:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8586049:	89 04 24             	mov    %eax,(%esp)
 858604c:	e8 05 2c b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8586051:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8586054:	89 04 24             	mov    %eax,(%esp)
 8586057:	e8 f2 2b b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 858605c:	89 04 24             	mov    %eax,(%esp)
 858605f:	e8 1e 09 00 00       	call   8586982 <_ZN12CStreamGuard11GetInBufferI29SIG_ONLINE_PRELIMINARY_MEMBEREEPT_v>
 8586064:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8586067:	8b 45 0c             	mov    0xc(%ebp),%eax
 858606a:	89 04 24             	mov    %eax,(%esp)
 858606d:	e8 1e 5c b4 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8586072:	89 c2                	mov    %eax,%edx
 8586074:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8586077:	66 89 10             	mov    %dx,(%eax)
 858607a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858607d:	89 04 24             	mov    %eax,(%esp)
 8586080:	e8 c9 5b b4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8586085:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8586088:	89 42 04             	mov    %eax,0x4(%edx)
 858608b:	8b 45 08             	mov    0x8(%ebp),%eax
 858608e:	8b 50 08             	mov    0x8(%eax),%edx
 8586091:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8586094:	89 50 08             	mov    %edx,0x8(%eax)
 8586097:	8b 45 08             	mov    0x8(%ebp),%eax
 858609a:	8b 50 0c             	mov    0xc(%eax),%edx
 858609d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85860a0:	89 50 0c             	mov    %edx,0xc(%eax)
 85860a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85860a6:	8b 50 10             	mov    0x10(%eax),%edx
 85860a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85860ac:	89 50 10             	mov    %edx,0x10(%eax)
 85860af:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85860b4:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85860b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85860bb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85860c2:	00 
 85860c3:	89 04 24             	mov    %eax,(%esp)
 85860c6:	e8 13 af fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85860cb:	bb 01 00 00 00       	mov    $0x1,%ebx
 85860d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85860d3:	89 04 24             	mov    %eax,(%esp)
 85860d6:	e8 f7 67 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85860db:	89 d8                	mov    %ebx,%eax
 85860dd:	83 c4 20             	add    $0x20,%esp
 85860e0:	5b                   	pop    %ebx
 85860e1:	5e                   	pop    %esi
 85860e2:	5d                   	pop    %ebp
 85860e3:	c3                   	ret
 85860e4:	89 d3                	mov    %edx,%ebx
 85860e6:	89 c6                	mov    %eax,%esi
 85860e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85860eb:	89 04 24             	mov    %eax,(%esp)
 85860ee:	e8 df 67 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85860f3:	89 f0                	mov    %esi,%eax
 85860f5:	89 da                	mov    %ebx,%edx
 85860f7:	89 04 24             	mov    %eax,(%esp)
 85860fa:	e8 51 d6 55 00       	call   8ae3750 <_Unwind_Resume>
 85860ff:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryMember::_saveData @ 0x8585fd6

/* online_preliminary::COnlinePreliminaryMember::_saveData(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMember::_saveData
          (COnlinePreliminaryMember *this,CUser *param_1)

{
  undefined2 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_ONLINE_PRELIMINARY_MEMBER *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x21)
  ;
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08586028 to 085860ca has its CatchHandler @ 085860e4 */
  CStreamGuard::operator<<(pCVar3,0x1e7);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER>(pCVar3);
  uVar1 = CUser::GetServerGroup(param_1);
  *(undefined2 *)local_10 = uVar1;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar5;
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(local_10 + 0x10) = *(undefined4 *)(this + 0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## loadData

```asm
// === 08585f9e online_preliminary::COnlinePreliminaryMember::loadData  [0x08585f9e-0x8585fd5] ===
 8585f9e:	55                   	push   %ebp
 8585f9f:	89 e5                	mov    %esp,%ebp
 8585fa1:	83 ec 10             	sub    $0x10,%esp
 8585fa4:	8b 45 10             	mov    0x10(%ebp),%eax
 8585fa7:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8585faa:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8585fad:	8b 50 08             	mov    0x8(%eax),%edx
 8585fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8585fb3:	89 50 08             	mov    %edx,0x8(%eax)
 8585fb6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8585fb9:	8b 50 0c             	mov    0xc(%eax),%edx
 8585fbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8585fbf:	89 50 0c             	mov    %edx,0xc(%eax)
 8585fc2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8585fc5:	8b 50 10             	mov    0x10(%eax),%edx
 8585fc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8585fcb:	89 50 10             	mov    %edx,0x10(%eax)
 8585fce:	b8 01 00 00 00       	mov    $0x1,%eax
 8585fd3:	c9                   	leave
 8585fd4:	c3                   	ret
 8585fd5:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryMember::loadData @ 0x8585f9e

/* online_preliminary::COnlinePreliminaryMember::loadData(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMember::loadData
          (COnlinePreliminaryMember *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return 1;
}

```

---

## ~COnlinePreliminaryMember

```asm
// === 08585f50 online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember  [0x08585f50-0x8585f7f] ===
 8585f50:	55                   	push   %ebp
 8585f51:	89 e5                	mov    %esp,%ebp
 8585f53:	83 ec 18             	sub    $0x18,%esp
 8585f56:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f59:	c7 00 08 b8 ca 08    	movl   $0x8cab808,(%eax)
 8585f5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f62:	89 04 24             	mov    %eax,(%esp)
 8585f65:	e8 78 2c b4 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 8585f6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8585f6f:	84 c0                	test   %al,%al
 8585f71:	74 0b                	je     8585f7e <_ZN18online_preliminary24COnlinePreliminaryMemberD1Ev+0x2e>
 8585f73:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f76:	89 04 24             	mov    %eax,(%esp)
 8585f79:	e8 72 e5 19 00       	call   87244f0 <_ZdlPv>
 8585f7e:	c9                   	leave
 8585f7f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember @ 0x8585f50

/* WARNING: Removing unreachable block (ram,0x08585f73) */
/* online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab808;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~COnlinePreliminaryMember_08585f80

```asm
// === 08585f80 online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember  [0x08585f80-0x8585f9d] ===
 8585f80:	55                   	push   %ebp
 8585f81:	89 e5                	mov    %esp,%ebp
 8585f83:	83 ec 18             	sub    $0x18,%esp
 8585f86:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f89:	89 04 24             	mov    %eax,(%esp)
 8585f8c:	e8 bf ff ff ff       	call   8585f50 <_ZN18online_preliminary24COnlinePreliminaryMemberD1Ev>
 8585f91:	8b 45 08             	mov    0x8(%ebp),%eax
 8585f94:	89 04 24             	mov    %eax,(%esp)
 8585f97:	e8 54 e5 19 00       	call   87244f0 <_ZdlPv>
 8585f9c:	c9                   	leave
 8585f9d:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember @ 0x8585f80

/* online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  ~COnlinePreliminaryMember(this);
  operator_delete(this);
  return;
}

```

