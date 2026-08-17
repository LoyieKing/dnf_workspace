# Global__CBossTowerFunc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## DieCharacInDungeon

```asm
// === 08146824 Global::CBossTowerFunc::DieCharacInDungeon  [0x08146824-0x81468a9] ===
 8146824:	55                   	push   %ebp
 8146825:	89 e5                	mov    %esp,%ebp
 8146827:	83 ec 28             	sub    $0x28,%esp
 814682a:	8b 45 08             	mov    0x8(%ebp),%eax
 814682d:	89 04 24             	mov    %eax,(%esp)
 8146830:	e8 57 3b f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8146835:	83 f8 0a             	cmp    $0xa,%eax
 8146838:	74 07                	je     8146841 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x1d>
 814683a:	83 f8 0c             	cmp    $0xc,%eax
 814683d:	74 2f                	je     814686e <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x4a>
 814683f:	eb 61                	jmp    81468a2 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x7e>
 8146841:	8b 45 08             	mov    0x8(%ebp),%eax
 8146844:	89 04 24             	mov    %eax,(%esp)
 8146847:	e8 58 ea 50 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 814684c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814684f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8146853:	74 12                	je     8146867 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x43>
 8146855:	8b 45 08             	mov    0x8(%ebp),%eax
 8146858:	89 44 24 04          	mov    %eax,0x4(%esp)
 814685c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814685f:	89 04 24             	mov    %eax,(%esp)
 8146862:	e8 f3 f0 31 00       	call   846595a <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser>
 8146867:	b8 01 00 00 00       	mov    $0x1,%eax
 814686c:	eb 39                	jmp    81468a7 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x83>
 814686e:	8b 45 08             	mov    0x8(%ebp),%eax
 8146871:	89 04 24             	mov    %eax,(%esp)
 8146874:	e8 a7 e9 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 8146879:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814687c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8146880:	74 19                	je     814689b <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x77>
 8146882:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146885:	8b 00                	mov    (%eax),%eax
 8146887:	83 c0 10             	add    $0x10,%eax
 814688a:	8b 10                	mov    (%eax),%edx
 814688c:	8b 45 08             	mov    0x8(%ebp),%eax
 814688f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146893:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146896:	89 04 24             	mov    %eax,(%esp)
 8146899:	ff d2                	call   *%edx
 814689b:	b8 01 00 00 00       	mov    $0x1,%eax
 81468a0:	eb 05                	jmp    81468a7 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser+0x83>
 81468a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81468a7:	c9                   	leave
 81468a8:	c3                   	ret
 81468a9:	90                   	nop

```

```c
// Global::CBossTowerFunc::DieCharacInDungeon @ 0x8146824

/* Global::CBossTowerFunc::DieCharacInDungeon(CUser*) */

undefined4 Global::CBossTowerFunc::DieCharacInDungeon(CUser *param_1)

{
  int iVar1;
  CDeathTower *this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleDieUser(this,param_1);
    }
    uVar3 = 1;
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## DieMob

```asm
// === 081468aa Global::CBossTowerFunc::DieMob  [0x081468aa-0x8146915] ===
 81468aa:	55                   	push   %ebp
 81468ab:	89 e5                	mov    %esp,%ebp
 81468ad:	53                   	push   %ebx
 81468ae:	83 ec 44             	sub    $0x44,%esp
 81468b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81468b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81468b7:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 81468bb:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 81468bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81468c2:	89 04 24             	mov    %eax,(%esp)
 81468c5:	e8 56 e9 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 81468ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81468cd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81468d1:	74 38                	je     814690b <_ZN6Global14CBossTowerFunc6DieMobEP5CUserttRK15MSG_MONSTER_DIEPi+0x61>
 81468d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81468d6:	8b 00                	mov    (%eax),%eax
 81468d8:	83 c0 24             	add    $0x24,%eax
 81468db:	8b 18                	mov    (%eax),%ebx
 81468dd:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 81468e1:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81468e5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81468ec:	00 
 81468ed:	8b 4d 14             	mov    0x14(%ebp),%ecx
 81468f0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81468f4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81468f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81468fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81468ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146903:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146906:	89 04 24             	mov    %eax,(%esp)
 8146909:	ff d3                	call   *%ebx
 814690b:	b8 01 00 00 00       	mov    $0x1,%eax
 8146910:	83 c4 44             	add    $0x44,%esp
 8146913:	5b                   	pop    %ebx
 8146914:	5d                   	pop    %ebp
 8146915:	c3                   	ret

```

```c
// Global::CBossTowerFunc::DieMob @ 0x81468aa

/* Global::CBossTowerFunc::DieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&,
   int*) */

undefined4
Global::CBossTowerFunc::DieMob
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  int *piVar1;
  
  piVar1 = (int *)CUser::getBossTower(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,param_1,param_2,param_3,param_4,0);
  }
  return 1;
}

```

---

## FinishLoad

```asm
// === 08146916 Global::CBossTowerFunc::FinishLoad  [0x08146916-0x8146993] ===
 8146916:	55                   	push   %ebp
 8146917:	89 e5                	mov    %esp,%ebp
 8146919:	83 ec 28             	sub    $0x28,%esp
 814691c:	8b 45 08             	mov    0x8(%ebp),%eax
 814691f:	89 04 24             	mov    %eax,(%esp)
 8146922:	e8 65 3a f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8146927:	83 f8 0a             	cmp    $0xa,%eax
 814692a:	74 07                	je     8146933 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x1d>
 814692c:	83 f8 0c             	cmp    $0xc,%eax
 814692f:	74 2f                	je     8146960 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x4a>
 8146931:	eb 5a                	jmp    814698d <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x77>
 8146933:	8b 45 08             	mov    0x8(%ebp),%eax
 8146936:	89 04 24             	mov    %eax,(%esp)
 8146939:	e8 66 e9 50 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 814693e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8146941:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8146945:	74 12                	je     8146959 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x43>
 8146947:	8b 45 08             	mov    0x8(%ebp),%eax
 814694a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814694e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8146951:	89 04 24             	mov    %eax,(%esp)
 8146954:	e8 cb f6 31 00       	call   8466024 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser>
 8146959:	b8 01 00 00 00       	mov    $0x1,%eax
 814695e:	eb 32                	jmp    8146992 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x7c>
 8146960:	8b 45 08             	mov    0x8(%ebp),%eax
 8146963:	89 04 24             	mov    %eax,(%esp)
 8146966:	e8 b5 e8 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 814696b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814696e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8146972:	74 12                	je     8146986 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x70>
 8146974:	8b 45 08             	mov    0x8(%ebp),%eax
 8146977:	89 44 24 04          	mov    %eax,0x4(%esp)
 814697b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814697e:	89 04 24             	mov    %eax,(%esp)
 8146981:	e8 e4 d5 ff ff       	call   8143f6a <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser>
 8146986:	b8 01 00 00 00       	mov    $0x1,%eax
 814698b:	eb 05                	jmp    8146992 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser+0x7c>
 814698d:	b8 00 00 00 00       	mov    $0x0,%eax
 8146992:	c9                   	leave
 8146993:	c3                   	ret

```

```c
// Global::CBossTowerFunc::FinishLoad @ 0x8146916

/* Global::CBossTowerFunc::FinishLoad(CUser*) */

undefined4 Global::CBossTowerFunc::FinishLoad(CUser *param_1)

{
  int iVar1;
  CDeathTower *this;
  CBossTower *this_00;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleFinishLoading(this,param_1);
    }
    uVar2 = 1;
  }
  else if (iVar1 == 0xc) {
    this_00 = (CBossTower *)CUser::getBossTower(param_1);
    if (this_00 != (CBossTower *)0x0) {
      WongWork::CBossTower::handleFinishLoading(this_00,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetItem

```asm
// === 08146994 Global::CBossTowerFunc::GetItem  [0x08146994-0x8146ad7] ===
 8146994:	55                   	push   %ebp
 8146995:	89 e5                	mov    %esp,%ebp
 8146997:	56                   	push   %esi
 8146998:	53                   	push   %ebx
 8146999:	83 ec 60             	sub    $0x60,%esp
 814699c:	8b 55 10             	mov    0x10(%ebp),%edx
 814699f:	8b 45 14             	mov    0x14(%ebp),%eax
 81469a2:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 81469a5:	88 45 c0             	mov    %al,-0x40(%ebp)
 81469a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81469ab:	89 04 24             	mov    %eax,(%esp)
 81469ae:	e8 6d e8 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 81469b3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81469b6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81469ba:	0f 84 c5 00 00 00    	je     8146a85 <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc+0xf1>
 81469c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81469c3:	8b 00                	mov    (%eax),%eax
 81469c5:	83 c0 28             	add    $0x28,%eax
 81469c8:	8b 08                	mov    (%eax),%ecx
 81469ca:	0f be 55 c0          	movsbl -0x40(%ebp),%edx
 81469ce:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 81469d2:	89 54 24 10          	mov    %edx,0x10(%esp)
 81469d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81469da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81469dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81469e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81469e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81469e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81469eb:	89 04 24             	mov    %eax,(%esp)
 81469ee:	ff d1                	call   *%ecx
 81469f0:	88 45 f7             	mov    %al,-0x9(%ebp)
 81469f3:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 81469f7:	0f 84 cf 00 00 00    	je     8146acc <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc+0x138>
 81469fd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a00:	89 04 24             	mov    %eax,(%esp)
 8146a03:	e8 44 73 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8146a08:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 8146a0f:	00 
 8146a10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8146a17:	00 
 8146a18:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a1b:	89 04 24             	mov    %eax,(%esp)
 8146a1e:	e8 d9 4e f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8146a23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8146a2a:	00 
 8146a2b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a2e:	89 04 24             	mov    %eax,(%esp)
 8146a31:	e8 ea 4e f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8146a36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8146a3d:	00 
 8146a3e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a41:	89 04 24             	mov    %eax,(%esp)
 8146a44:	e8 0f 4f f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8146a49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146a50:	8b 45 08             	mov    0x8(%ebp),%eax
 8146a53:	89 04 24             	mov    %eax,(%esp)
 8146a56:	e8 5f 1b 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8146a5b:	eb 1b                	jmp    8146a78 <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc+0xe4>
 8146a5d:	89 d3                	mov    %edx,%ebx
 8146a5f:	89 c6                	mov    %eax,%esi
 8146a61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a64:	89 04 24             	mov    %eax,(%esp)
 8146a67:	e8 14 74 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8146a6c:	89 f0                	mov    %esi,%eax
 8146a6e:	89 da                	mov    %ebx,%edx
 8146a70:	89 04 24             	mov    %eax,(%esp)
 8146a73:	e8 d8 cc 99 00       	call   8ae3750 <_Unwind_Resume>
 8146a78:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8146a7b:	89 04 24             	mov    %eax,(%esp)
 8146a7e:	e8 fd 73 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8146a83:	eb 47                	jmp    8146acc <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc+0x138>
 8146a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8146a88:	89 04 24             	mov    %eax,(%esp)
 8146a8b:	e8 be 51 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8146a90:	89 c3                	mov    %eax,%ebx
 8146a92:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8146a99:	00 
 8146a9a:	c7 44 24 08 b7 00 00 	movl   $0xb7,0x8(%esp)
 8146aa1:	00 
 8146aa2:	c7 44 24 04 60 2e b7 	movl   $0x8b72e60,0x4(%esp)
 8146aa9:	08 
 8146aaa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8146aad:	89 04 24             	mov    %eax,(%esp)
 8146ab0:	e8 63 8c 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8146ab5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8146ab9:	c7 44 24 04 3c 22 b7 	movl   $0x8b7223c,0x4(%esp)
 8146ac0:	08 
 8146ac1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8146ac4:	89 04 24             	mov    %eax,(%esp)
 8146ac7:	e8 bc 8c 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8146acc:	b8 01 00 00 00       	mov    $0x1,%eax
 8146ad1:	83 c4 60             	add    $0x60,%esp
 8146ad4:	5b                   	pop    %ebx
 8146ad5:	5e                   	pop    %esi
 8146ad6:	5d                   	pop    %ebp
 8146ad7:	c3                   	ret

```

```c
// Global::CBossTowerFunc::GetItem @ 0x8146994

/* Global::CBossTowerFunc::GetItem(CUser*, int, bool, char) */

undefined4 Global::CBossTowerFunc::GetItem(CUser *param_1,int param_2,bool param_3,char param_4)

{
  undefined4 uVar1;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  char local_d;
  
  local_14 = (int *)CUser::getBossTower(param_1);
  if (local_14 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "static bool Global::CBossTowerFunc::GetItem(CUser*, int, bool, char)",0xb7,5
                      );
    cMyTrace::operator()(local_24,"bossTower not find : charac_no - %u",uVar1);
  }
  else {
    local_d = (**(code **)(*local_14 + 0x28))(local_14,param_1,param_2,param_3,(int)param_4);
    if (local_d != '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08146a1e to 08146a5a has its CatchHandler @ 08146a5d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 1;
}

```

---

## GiveUpGame

```asm
// === 08146ad8 Global::CBossTowerFunc::GiveUpGame  [0x08146ad8-0x8146ba1] ===
 8146ad8:	55                   	push   %ebp
 8146ad9:	89 e5                	mov    %esp,%ebp
 8146adb:	83 ec 38             	sub    $0x38,%esp
 8146ade:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ae1:	89 04 24             	mov    %eax,(%esp)
 8146ae4:	e8 a3 38 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8146ae9:	83 f8 0a             	cmp    $0xa,%eax
 8146aec:	74 52                	je     8146b40 <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0x68>
 8146aee:	83 f8 0c             	cmp    $0xc,%eax
 8146af1:	74 75                	je     8146b68 <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0x90>
 8146af3:	83 f8 05             	cmp    $0x5,%eax
 8146af6:	0f 85 9f 00 00 00    	jne    8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146afc:	8b 45 08             	mov    0x8(%ebp),%eax
 8146aff:	89 04 24             	mov    %eax,(%esp)
 8146b02:	e8 45 e6 50 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8146b07:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8146b0a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8146b0e:	0f 84 83 00 00 00    	je     8146b97 <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xbf>
 8146b14:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8146b1b:	00 
 8146b1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8146b23:	00 
 8146b24:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8146b2b:	00 
 8146b2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8146b2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146b33:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8146b36:	89 04 24             	mov    %eax,(%esp)
 8146b39:	e8 6c c0 46 00       	call   85b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>
 8146b3e:	eb 5b                	jmp    8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146b40:	8b 45 08             	mov    0x8(%ebp),%eax
 8146b43:	89 04 24             	mov    %eax,(%esp)
 8146b46:	e8 59 e7 50 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 8146b4b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8146b4e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8146b52:	74 46                	je     8146b9a <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc2>
 8146b54:	8b 45 08             	mov    0x8(%ebp),%eax
 8146b57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146b5b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8146b5e:	89 04 24             	mov    %eax,(%esp)
 8146b61:	e8 5c ef 31 00       	call   8465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>
 8146b66:	eb 33                	jmp    8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146b68:	8b 45 08             	mov    0x8(%ebp),%eax
 8146b6b:	89 04 24             	mov    %eax,(%esp)
 8146b6e:	e8 ad e6 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 8146b73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8146b76:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8146b7a:	74 1f                	je     8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146b7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146b7f:	8b 00                	mov    (%eax),%eax
 8146b81:	83 c0 14             	add    $0x14,%eax
 8146b84:	8b 10                	mov    (%eax),%edx
 8146b86:	8b 45 08             	mov    0x8(%ebp),%eax
 8146b89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146b8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146b90:	89 04 24             	mov    %eax,(%esp)
 8146b93:	ff d2                	call   *%edx
 8146b95:	eb 04                	jmp    8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146b97:	90                   	nop
 8146b98:	eb 01                	jmp    8146b9b <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser+0xc3>
 8146b9a:	90                   	nop
 8146b9b:	b8 01 00 00 00       	mov    $0x1,%eax
 8146ba0:	c9                   	leave
 8146ba1:	c3                   	ret

```

```c
// Global::CBossTowerFunc::GiveUpGame @ 0x8146ad8

/* Global::CBossTowerFunc::GiveUpGame(CUser*) */

undefined4 Global::CBossTowerFunc::GiveUpGame(CUser *param_1)

{
  int iVar1;
  CParty *this;
  CDeathTower *this_00;
  int *piVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this_00 = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this_00 != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleLeaveUser(this_00,param_1);
    }
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,param_1);
    }
  }
  else if ((iVar1 == 5) && (this = (CParty *)CUser::GetParty(param_1), this != (CParty *)0x0)) {
    CParty::giveup_game(this,param_1,true,false,false);
  }
  return 1;
}

```

---

## MoveMap

```asm
// === 08146ba2 Global::CBossTowerFunc::MoveMap  [0x08146ba2-0x8146c1f] ===
 8146ba2:	55                   	push   %ebp
 8146ba3:	89 e5                	mov    %esp,%ebp
 8146ba5:	83 ec 28             	sub    $0x28,%esp
 8146ba8:	8b 45 08             	mov    0x8(%ebp),%eax
 8146bab:	89 04 24             	mov    %eax,(%esp)
 8146bae:	e8 d9 37 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8146bb3:	83 f8 0a             	cmp    $0xa,%eax
 8146bb6:	74 07                	je     8146bbf <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x1d>
 8146bb8:	83 f8 0c             	cmp    $0xc,%eax
 8146bbb:	74 28                	je     8146be5 <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x43>
 8146bbd:	eb 5a                	jmp    8146c19 <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x77>
 8146bbf:	8b 45 08             	mov    0x8(%ebp),%eax
 8146bc2:	89 04 24             	mov    %eax,(%esp)
 8146bc5:	e8 da e6 50 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 8146bca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8146bcd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8146bd1:	74 0b                	je     8146bde <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x3c>
 8146bd3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8146bd6:	89 04 24             	mov    %eax,(%esp)
 8146bd9:	e8 b6 f0 31 00       	call   8465c94 <_ZN8WongWork11CDeathTower13handleMoveMapEv>
 8146bde:	b8 01 00 00 00       	mov    $0x1,%eax
 8146be3:	eb 39                	jmp    8146c1e <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x7c>
 8146be5:	8b 45 08             	mov    0x8(%ebp),%eax
 8146be8:	89 04 24             	mov    %eax,(%esp)
 8146beb:	e8 30 e6 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 8146bf0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8146bf3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8146bf7:	74 19                	je     8146c12 <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x70>
 8146bf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146bfc:	8b 00                	mov    (%eax),%eax
 8146bfe:	83 c0 18             	add    $0x18,%eax
 8146c01:	8b 10                	mov    (%eax),%edx
 8146c03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146c0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146c0d:	89 04 24             	mov    %eax,(%esp)
 8146c10:	ff d2                	call   *%edx
 8146c12:	b8 01 00 00 00       	mov    $0x1,%eax
 8146c17:	eb 05                	jmp    8146c1e <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt+0x7c>
 8146c19:	b8 00 00 00 00       	mov    $0x0,%eax
 8146c1e:	c9                   	leave
 8146c1f:	c3                   	ret

```

```c
// Global::CBossTowerFunc::MoveMap @ 0x8146ba2

/* Global::CBossTowerFunc::MoveMap(CUser*, unsigned short*) */

undefined4 Global::CBossTowerFunc::MoveMap(CUser *param_1,ushort *param_2)

{
  int iVar1;
  CDeathTower *this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 10) {
    this = (CDeathTower *)CUser::getDeathTower(param_1);
    if (this != (CDeathTower *)0x0) {
      WongWork::CDeathTower::handleMoveMap(this);
    }
    uVar3 = 1;
  }
  else if (iVar1 == 0xc) {
    piVar2 = (int *)CUser::getBossTower(param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## SelectDungeon

```asm
// === 08146722 Global::CBossTowerFunc::SelectDungeon  [0x08146722-0x8146823] ===
 8146722:	55                   	push   %ebp
 8146723:	89 e5                	mov    %esp,%ebp
 8146725:	83 ec 58             	sub    $0x58,%esp
 8146728:	8b 45 0c             	mov    0xc(%ebp),%eax
 814672b:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 814672f:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8146733:	75 0a                	jne    814673f <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0x1d>
 8146735:	b8 00 00 00 00       	mov    $0x0,%eax
 814673a:	e9 e3 00 00 00       	jmp    8146822 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0x100>
 814673f:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
 8146743:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8146747:	e8 42 5a f8 ff       	call   80cc18e <_Z14G_CGameManagerv>
 814674c:	89 04 24             	mov    %eax,(%esp)
 814674f:	e8 b2 f1 14 00       	call   8295906 <_ZN12CGameManager12getBossTowerEv>
 8146754:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8146757:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 814675b:	75 3b                	jne    8146798 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0x76>
 814675d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8146764:	00 
 8146765:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 814676c:	00 
 814676d:	c7 44 24 04 c0 2e b7 	movl   $0x8b72ec0,0x4(%esp)
 8146774:	08 
 8146775:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8146778:	89 04 24             	mov    %eax,(%esp)
 814677b:	e8 98 8f 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8146780:	c7 44 24 04 20 22 b7 	movl   $0x8b72220,0x4(%esp)
 8146787:	08 
 8146788:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814678b:	89 04 24             	mov    %eax,(%esp)
 814678e:	e8 f5 8f 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8146793:	e9 86 00 00 00       	jmp    814681e <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xfc>
 8146798:	8b 45 08             	mov    0x8(%ebp),%eax
 814679b:	89 04 24             	mov    %eax,(%esp)
 814679e:	e8 c7 39 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81467a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81467a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81467a9:	83 f8 02             	cmp    $0x2,%eax
 81467ac:	74 1e                	je     81467cc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xaa>
 81467ae:	83 f8 02             	cmp    $0x2,%eax
 81467b1:	7f 07                	jg     81467ba <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0x98>
 81467b3:	83 f8 01             	cmp    $0x1,%eax
 81467b6:	74 0e                	je     81467c6 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xa4>
 81467b8:	eb 22                	jmp    81467dc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xba>
 81467ba:	83 f8 03             	cmp    $0x3,%eax
 81467bd:	74 13                	je     81467d2 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xb0>
 81467bf:	83 f8 04             	cmp    $0x4,%eax
 81467c2:	74 14                	je     81467d8 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xb6>
 81467c4:	eb 16                	jmp    81467dc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xba>
 81467c6:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 81467ca:	eb 10                	jmp    81467dc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xba>
 81467cc:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 81467d0:	eb 0a                	jmp    81467dc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xba>
 81467d2:	c6 45 ef 02          	movb   $0x2,-0x11(%ebp)
 81467d6:	eb 04                	jmp    81467dc <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xba>
 81467d8:	c6 45 ef 03          	movb   $0x3,-0x11(%ebp)
 81467dc:	0f be 55 ef          	movsbl -0x11(%ebp),%edx
 81467e0:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 81467e4:	8b 4d 10             	mov    0x10(%ebp),%ecx
 81467e7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81467eb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81467ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81467f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81467f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81467fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81467fd:	89 04 24             	mov    %eax,(%esp)
 8146800:	e8 ef cc ff ff       	call   81434f4 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE>
 8146805:	88 45 ee             	mov    %al,-0x12(%ebp)
 8146808:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 814680c:	83 f0 01             	xor    $0x1,%eax
 814680f:	84 c0                	test   %al,%al
 8146811:	74 0b                	je     814681e <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE+0xfc>
 8146813:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8146816:	89 04 24             	mov    %eax,(%esp)
 8146819:	e8 18 c3 ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 814681e:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8146822:	c9                   	leave
 8146823:	c3                   	ret

```

```c
// Global::CBossTowerFunc::SelectDungeon @ 0x8146722

/* Global::CBossTowerFunc::SelectDungeon(CParty*, short, ENUM_DUNGEON_TYPE) */

char Global::CBossTowerFunc::SelectDungeon(CParty *param_1,short param_2,undefined4 param_3)

{
  CGameManager *this;
  cMyTrace local_28 [18];
  char local_16;
  char local_15;
  CBossTower *local_14;
  int local_10;
  
  if (param_1 == (CParty *)0x0) {
    local_16 = '\0';
  }
  else {
    local_16 = '\0';
    local_15 = '\0';
    this = (CGameManager *)G_CGameManager();
    local_14 = (CBossTower *)CGameManager::getBossTower(this);
    if (local_14 == (CBossTower *)0x0) {
      cMyTrace::cMyTrace(local_28,
                         "static bool Global::CBossTowerFunc::SelectDungeon(CParty*, short int, ENUM_DUNGEON_TYPE)"
                         ,0x34,5);
      cMyTrace::operator()(local_28,"StaticPool BossTower NULL");
    }
    else {
      local_10 = CParty::get_member_count(param_1);
      if (local_10 == 2) {
        local_15 = '\x01';
      }
      else if (local_10 < 3) {
        if (local_10 == 1) {
          local_15 = '\0';
        }
      }
      else if (local_10 == 3) {
        local_15 = '\x02';
      }
      else if (local_10 == 4) {
        local_15 = '\x03';
      }
      local_16 = WongWork::CBossTower::handleStartGame
                           (local_14,param_1,(int)param_2,(int)local_15,param_3);
      if (local_16 != '\x01') {
        WongWork::CBossTower::_destroy(local_14);
      }
    }
  }
  return local_16;
}

```

---

## UseItem

```asm
// === 08146c20 Global::CBossTowerFunc::UseItem  [0x08146c20-0x8146cbc] ===
 8146c20:	55                   	push   %ebp
 8146c21:	89 e5                	mov    %esp,%ebp
 8146c23:	83 ec 28             	sub    $0x28,%esp
 8146c26:	8b 45 08             	mov    0x8(%ebp),%eax
 8146c29:	89 04 24             	mov    %eax,(%esp)
 8146c2c:	e8 5b 37 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8146c31:	83 f8 05             	cmp    $0x5,%eax
 8146c34:	74 07                	je     8146c3d <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x1d>
 8146c36:	83 f8 0c             	cmp    $0xc,%eax
 8146c39:	74 36                	je     8146c71 <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x51>
 8146c3b:	eb 79                	jmp    8146cb6 <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x96>
 8146c3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8146c40:	89 04 24             	mov    %eax,(%esp)
 8146c43:	e8 04 e5 50 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8146c48:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8146c4b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8146c4f:	74 19                	je     8146c6a <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x4a>
 8146c51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146c54:	89 44 24 08          	mov    %eax,0x8(%esp)
 8146c58:	8b 45 08             	mov    0x8(%ebp),%eax
 8146c5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146c5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8146c62:	89 04 24             	mov    %eax,(%esp)
 8146c65:	e8 96 0b 46 00       	call   85a7800 <_ZN6CParty7useItemEP5CUserRK10Inven_Item>
 8146c6a:	b8 01 00 00 00       	mov    $0x1,%eax
 8146c6f:	eb 4a                	jmp    8146cbb <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x9b>
 8146c71:	8b 45 08             	mov    0x8(%ebp),%eax
 8146c74:	89 04 24             	mov    %eax,(%esp)
 8146c77:	e8 a4 e5 50 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 8146c7c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8146c7f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8146c83:	74 2a                	je     8146caf <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x8f>
 8146c85:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146c88:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8146c8c:	0f b6 d0             	movzbl %al,%edx
 8146c8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8146c92:	8b 40 02             	mov    0x2(%eax),%eax
 8146c95:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8146c99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8146c9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ca0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146ca4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146ca7:	89 04 24             	mov    %eax,(%esp)
 8146caa:	e8 09 e8 ff ff       	call   81454b8 <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh>
 8146caf:	b8 01 00 00 00       	mov    $0x1,%eax
 8146cb4:	eb 05                	jmp    8146cbb <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item+0x9b>
 8146cb6:	b8 00 00 00 00       	mov    $0x0,%eax
 8146cbb:	c9                   	leave
 8146cbc:	c3                   	ret

```

```c
// Global::CBossTowerFunc::UseItem @ 0x8146c20

/* Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&) */

undefined4 Global::CBossTowerFunc::UseItem(CUser *param_1,Inven_Item *param_2)

{
  int iVar1;
  CParty *this;
  CBossTower *this_00;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 5) {
    this = (CParty *)CUser::GetParty(param_1);
    if (this != (CParty *)0x0) {
      CParty::useItem(this,param_1,param_2);
    }
    uVar2 = 1;
  }
  else if (iVar1 == 0xc) {
    this_00 = (CBossTower *)CUser::getBossTower(param_1);
    if (this_00 != (CBossTower *)0x0) {
      WongWork::CBossTower::handleUseItem(this_00,param_1,*(ulong *)(param_2 + 2),(uchar)param_2[1])
      ;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

