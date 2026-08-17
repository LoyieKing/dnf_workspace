# TimerAvatarExpire

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CheckExpiredAvatar

```asm
// === 08632a82 TimerAvatarExpire::CheckExpiredAvatar  [0x08632a82-0x8632b31] ===
 8632a82:	55                   	push   %ebp
 8632a83:	89 e5                	mov    %esp,%ebp
 8632a85:	56                   	push   %esi
 8632a86:	53                   	push   %ebx
 8632a87:	83 ec 20             	sub    $0x20,%esp
 8632a8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8632a8d:	89 04 24             	mov    %eax,(%esp)
 8632a90:	e8 b7 b2 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8632a95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632a98:	89 04 24             	mov    %eax,(%esp)
 8632a9b:	e8 ec 78 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8632aa0:	85 c0                	test   %eax,%eax
 8632aa2:	0f 94 c0             	sete   %al
 8632aa5:	84 c0                	test   %al,%al
 8632aa7:	74 07                	je     8632ab0 <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x2e>
 8632aa9:	bb 01 00 00 00       	mov    $0x1,%ebx
 8632aae:	eb 6e                	jmp    8632b1e <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x9c>
 8632ab0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632ab3:	89 04 24             	mov    %eax,(%esp)
 8632ab6:	e8 77 d9 ae ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8632abb:	85 c0                	test   %eax,%eax
 8632abd:	0f 94 c0             	sete   %al
 8632ac0:	84 c0                	test   %al,%al
 8632ac2:	74 07                	je     8632acb <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x49>
 8632ac4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8632ac9:	eb 53                	jmp    8632b1e <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x9c>
 8632acb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632ace:	89 04 24             	mov    %eax,(%esp)
 8632ad1:	e8 a8 77 aa ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8632ad6:	89 04 24             	mov    %eax,(%esp)
 8632ad9:	e8 a0 68 ed ff       	call   850937e <_ZNK10CInventory22isAnyExpiredAvatarItemEv>
 8632ade:	84 c0                	test   %al,%al
 8632ae0:	74 1a                	je     8632afc <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x7a>
 8632ae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632ae5:	89 04 24             	mov    %eax,(%esp)
 8632ae8:	e8 a1 77 aa ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8632aed:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8632af0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8632af4:	89 04 24             	mov    %eax,(%esp)
 8632af7:	e8 6a 69 ed ff       	call   8509466 <_ZN10CInventory17ExpiredAvatarItemEP11PacketGuard>
 8632afc:	bb 01 00 00 00       	mov    $0x1,%ebx
 8632b01:	eb 1b                	jmp    8632b1e <_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser+0x9c>
 8632b03:	89 d3                	mov    %edx,%ebx
 8632b05:	89 c6                	mov    %eax,%esi
 8632b07:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8632b0a:	89 04 24             	mov    %eax,(%esp)
 8632b0d:	e8 6e b3 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8632b12:	89 f0                	mov    %esi,%eax
 8632b14:	89 da                	mov    %ebx,%edx
 8632b16:	89 04 24             	mov    %eax,(%esp)
 8632b19:	e8 32 0c 4b 00       	call   8ae3750 <_Unwind_Resume>
 8632b1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8632b21:	89 04 24             	mov    %eax,(%esp)
 8632b24:	e8 57 b3 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8632b29:	89 d8                	mov    %ebx,%eax
 8632b2b:	83 c4 20             	add    $0x20,%esp
 8632b2e:	5b                   	pop    %ebx
 8632b2f:	5e                   	pop    %esi
 8632b30:	5d                   	pop    %ebp
 8632b31:	c3                   	ret

```

```c
// TimerAvatarExpire::CheckExpiredAvatar @ 0x8632a82

/* TimerAvatarExpire::CheckExpiredAvatar(CUser*) */

undefined4 __thiscall TimerAvatarExpire::CheckExpiredAvatar(TimerAvatarExpire *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CInventory *this_00;
  PacketGuard *pPVar3;
  undefined4 uVar4;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 08632ad9 to 08632afb has its CatchHandler @ 08632b03 */
      cVar1 = CInventory::isAnyExpiredAvatarItem(this_00);
      if (cVar1 != '\0') {
        pPVar3 = (PacketGuard *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::ExpiredAvatarItem(pPVar3);
      }
      uVar4 = 1;
    }
  }
  PacketGuard::~PacketGuard(local_18);
  return uVar4;
}

```

---

## RegistTimer

```asm
// === 08632b32 TimerAvatarExpire::RegistTimer  [0x08632b32-0x8632bbb] ===
 8632b32:	55                   	push   %ebp
 8632b33:	89 e5                	mov    %esp,%ebp
 8632b35:	57                   	push   %edi
 8632b36:	56                   	push   %esi
 8632b37:	53                   	push   %ebx
 8632b38:	83 ec 3c             	sub    $0x3c,%esp
 8632b3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632b3e:	89 04 24             	mov    %eax,(%esp)
 8632b41:	e8 08 91 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8632b46:	89 c3                	mov    %eax,%ebx
 8632b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632b4b:	89 04 24             	mov    %eax,(%esp)
 8632b4e:	e8 29 78 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8632b53:	0f b7 f8             	movzwl %ax,%edi
 8632b56:	e8 26 96 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8632b5b:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 8632b61:	c1 e0 02             	shl    $0x2,%eax
 8632b64:	89 c2                	mov    %eax,%edx
 8632b66:	c1 e2 04             	shl    $0x4,%edx
 8632b69:	89 d1                	mov    %edx,%ecx
 8632b6b:	29 c1                	sub    %eax,%ecx
 8632b6d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8632b70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632b73:	89 04 24             	mov    %eax,(%esp)
 8632b76:	e8 c7 a1 eb ff       	call   84ecd42 <_ZNK5CUser10GetSlotIDXEv>
 8632b7b:	0f bf f0             	movswl %ax,%esi
 8632b7e:	e8 f9 38 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8632b83:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8632b87:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8632b8b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8632b8e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8632b92:	c7 44 24 0c 51 00 00 	movl   $0x51,0xc(%esp)
 8632b99:	00 
 8632b9a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8632b9e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8632ba5:	00 
 8632ba6:	89 04 24             	mov    %eax,(%esp)
 8632ba9:	e8 68 e2 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8632bae:	b8 01 00 00 00       	mov    $0x1,%eax
 8632bb3:	83 c4 3c             	add    $0x3c,%esp
 8632bb6:	5b                   	pop    %ebx
 8632bb7:	5e                   	pop    %esi
 8632bb8:	5f                   	pop    %edi
 8632bb9:	5d                   	pop    %ebp
 8632bba:	c3                   	ret
 8632bbb:	90                   	nop

```

```c
// TimerAvatarExpire::RegistTimer @ 0x8632b32

/* TimerAvatarExpire::RegistTimer(CUser*) */

undefined4 __thiscall TimerAvatarExpire::RegistTimer(TimerAvatarExpire *this,CUser *param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  TimerQueue *pTVar5;
  
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar1 = CUser::get_unique_id(param_1);
  iVar4 = G_CEnvironment();
  iVar4 = *(int *)(iVar4 + 0x380);
  sVar2 = CUser::GetSlotIDX(param_1);
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,0,(int)sVar2,0x51,iVar4 * 0x3c,uVar1,uVar3);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08632a78 TimerAvatarExpire::dispatch_sig  [0x08632a78-0x8632a81] ===
 8632a78:	55                   	push   %ebp
 8632a79:	89 e5                	mov    %esp,%ebp
 8632a7b:	b8 01 00 00 00       	mov    $0x1,%eax
 8632a80:	5d                   	pop    %ebp
 8632a81:	c3                   	ret

```

```c
// TimerAvatarExpire::dispatch_sig @ 0x8632a78

/* TimerAvatarExpire::dispatch_sig(int, int, unsigned int) */

undefined4 TimerAvatarExpire::dispatch_sig(int param_1,int param_2,uint param_3)

{
  return 1;
}

```

