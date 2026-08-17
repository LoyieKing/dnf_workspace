# TimerFinishItemEffect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _processSepecialEffectContinuousItem

```asm
// === 08637d64 TimerFinishItemEffect::_processSepecialEffectContinuousItem  [0x08637d64-0x8637d91] ===
 8637d64:	55                   	push   %ebp
 8637d65:	89 e5                	mov    %esp,%ebp
 8637d67:	83 ec 18             	sub    $0x18,%esp
 8637d6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8637d6d:	3d d1 1c 00 00       	cmp    $0x1cd1,%eax
 8637d72:	75 1c                	jne    8637d90 <_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj+0x2c>
 8637d74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8637d77:	ba 00 00 00 00       	mov    $0x0,%edx
 8637d7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637d80:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637d87:	00 
 8637d88:	89 04 24             	mov    %eax,(%esp)
 8637d8b:	e8 8c 40 00 00       	call   863be1c <_ZN15CUserCharacInfo22SetExpAffectItemEffectEbf>
 8637d90:	c9                   	leave
 8637d91:	c3                   	ret

```

```c
// TimerFinishItemEffect::_processSepecialEffectContinuousItem @ 0x8637d64

/* TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int) */

void __thiscall
TimerFinishItemEffect::_processSepecialEffectContinuousItem
          (TimerFinishItemEffect *this,CUser *param_1,uint param_2)

{
  if (param_2 == 0x1cd1) {
    CUserCharacInfo::SetExpAffectItemEffect((CUserCharacInfo *)param_1,false,0.0);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 08637aac TimerFinishItemEffect::dispatch_sig  [0x08637aac-0x8637d63] ===
 8637aac:	55                   	push   %ebp
 8637aad:	89 e5                	mov    %esp,%ebp
 8637aaf:	57                   	push   %edi
 8637ab0:	56                   	push   %esi
 8637ab1:	53                   	push   %ebx
 8637ab2:	83 ec 5c             	sub    $0x5c,%esp
 8637ab5:	e8 d4 46 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637aba:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8637ac1:	00 
 8637ac2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637ac5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637ac9:	89 04 24             	mov    %eax,(%esp)
 8637acc:	e8 d3 cc c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8637ad1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8637ad4:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8637ad8:	75 0a                	jne    8637ae4 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x38>
 8637ada:	bb 00 00 00 00       	mov    $0x0,%ebx
 8637adf:	e9 76 02 00 00       	jmp    8637d5a <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x2ae>
 8637ae4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637ae7:	89 04 24             	mov    %eax,(%esp)
 8637aea:	e8 9d 28 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8637aef:	83 f8 02             	cmp    $0x2,%eax
 8637af2:	0f 9e c0             	setle  %al
 8637af5:	84 c0                	test   %al,%al
 8637af7:	74 0a                	je     8637b03 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x57>
 8637af9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8637afe:	e9 57 02 00 00       	jmp    8637d5a <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x2ae>
 8637b03:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8637b07:	74 17                	je     8637b20 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x74>
 8637b09:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637b0c:	89 04 24             	mov    %eax,(%esp)
 8637b0f:	e8 3a 41 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8637b14:	3b 45 14             	cmp    0x14(%ebp),%eax
 8637b17:	74 07                	je     8637b20 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x74>
 8637b19:	b8 01 00 00 00       	mov    $0x1,%eax
 8637b1e:	eb 05                	jmp    8637b25 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x79>
 8637b20:	b8 00 00 00 00       	mov    $0x0,%eax
 8637b25:	84 c0                	test   %al,%al
 8637b27:	74 0a                	je     8637b33 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x87>
 8637b29:	bb 00 00 00 00       	mov    $0x0,%ebx
 8637b2e:	e9 27 02 00 00       	jmp    8637d5a <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x2ae>
 8637b33:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8637b3a:	e8 5f 41 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637b3f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8637b42:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637b45:	89 04 24             	mov    %eax,(%esp)
 8637b48:	e8 ad 9e f9 ff       	call   85d19fa <_ZNK15CUserCharacInfo27GetCurCharacEffectItemListREv>
 8637b4d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8637b50:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8637b54:	75 0a                	jne    8637b60 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0xb4>
 8637b56:	bb 00 00 00 00       	mov    $0x0,%ebx
 8637b5b:	e9 fa 01 00 00       	jmp    8637d5a <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x2ae>
 8637b60:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8637b67:	e9 d0 01 00 00       	jmp    8637d3c <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x290>
 8637b6c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8637b6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637b73:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8637b76:	89 04 24             	mov    %eax,(%esp)
 8637b79:	e8 5e 57 00 00       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8637b7e:	8b 10                	mov    (%eax),%edx
 8637b80:	8b 45 10             	mov    0x10(%ebp),%eax
 8637b83:	39 c2                	cmp    %eax,%edx
 8637b85:	0f 94 c0             	sete   %al
 8637b88:	84 c0                	test   %al,%al
 8637b8a:	0f 84 a8 01 00 00    	je     8637d38 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x28c>
 8637b90:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637b93:	89 04 24             	mov    %eax,(%esp)
 8637b96:	e8 b1 61 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8637b9b:	c7 44 24 08 ae 00 00 	movl   $0xae,0x8(%esp)
 8637ba2:	00 
 8637ba3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637baa:	00 
 8637bab:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637bae:	89 04 24             	mov    %eax,(%esp)
 8637bb1:	e8 46 3d a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8637bb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637bbd:	00 
 8637bbe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637bc1:	89 04 24             	mov    %eax,(%esp)
 8637bc4:	e8 57 3d a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8637bc9:	8b 45 10             	mov    0x10(%ebp),%eax
 8637bcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637bd0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637bd3:	89 04 24             	mov    %eax,(%esp)
 8637bd6:	e8 61 3d a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8637bdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637be2:	00 
 8637be3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637be6:	89 04 24             	mov    %eax,(%esp)
 8637be9:	e8 4e 3d a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8637bee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637bf5:	00 
 8637bf6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637bf9:	89 04 24             	mov    %eax,(%esp)
 8637bfc:	e8 57 3d a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8637c01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8637c04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637c08:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8637c0b:	89 04 24             	mov    %eax,(%esp)
 8637c0e:	e8 c9 56 00 00       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8637c13:	8b 40 04             	mov    0x4(%eax),%eax
 8637c16:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8637c19:	0f 96 c0             	setbe  %al
 8637c1c:	84 c0                	test   %al,%al
 8637c1e:	74 37                	je     8637c57 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x1ab>
 8637c20:	8b 45 10             	mov    0x10(%ebp),%eax
 8637c23:	89 44 24 08          	mov    %eax,0x8(%esp)
 8637c27:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637c2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637c2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8637c31:	89 04 24             	mov    %eax,(%esp)
 8637c34:	e8 2b 01 00 00       	call   8637d64 <_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj>
 8637c39:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637c3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637c40:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637c43:	89 04 24             	mov    %eax,(%esp)
 8637c46:	e8 6f 09 01 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8637c4b:	89 c3                	mov    %eax,%ebx
 8637c4d:	be 00 00 00 00       	mov    $0x0,%esi
 8637c52:	e9 d2 00 00 00       	jmp    8637d29 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x27d>
 8637c57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8637c5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637c5e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8637c61:	89 04 24             	mov    %eax,(%esp)
 8637c64:	e8 73 56 00 00       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8637c69:	8b 40 04             	mov    0x4(%eax),%eax
 8637c6c:	2b 45 d8             	sub    -0x28(%ebp),%eax
 8637c6f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8637c72:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 8637c76:	77 06                	ja     8637c7e <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x1d2>
 8637c78:	83 7d e4 3c          	cmpl   $0x3c,-0x1c(%ebp)
 8637c7c:	77 55                	ja     8637cd3 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x227>
 8637c7e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637c81:	89 04 24             	mov    %eax,(%esp)
 8637c84:	e8 c5 3f a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8637c89:	89 c7                	mov    %eax,%edi
 8637c8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8637c8e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8637c91:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637c94:	89 04 24             	mov    %eax,(%esp)
 8637c97:	e8 fa 0f a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8637c9c:	89 c6                	mov    %eax,%esi
 8637c9e:	e8 d9 e7 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637ca3:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8637ca7:	8b 55 10             	mov    0x10(%ebp),%edx
 8637caa:	89 54 24 14          	mov    %edx,0x14(%esp)
 8637cae:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8637cb1:	89 54 24 10          	mov    %edx,0x10(%esp)
 8637cb5:	c7 44 24 0c 76 00 00 	movl   $0x76,0xc(%esp)
 8637cbc:	00 
 8637cbd:	89 74 24 08          	mov    %esi,0x8(%esp)
 8637cc1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637cc8:	00 
 8637cc9:	89 04 24             	mov    %eax,(%esp)
 8637ccc:	e8 45 91 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637cd1:	eb 34                	jmp    8637d07 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x25b>
 8637cd3:	8b 45 10             	mov    0x10(%ebp),%eax
 8637cd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8637cda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637cdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637ce1:	8b 45 08             	mov    0x8(%ebp),%eax
 8637ce4:	89 04 24             	mov    %eax,(%esp)
 8637ce7:	e8 78 00 00 00       	call   8637d64 <_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj>
 8637cec:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637cef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637cf3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8637cf6:	89 04 24             	mov    %eax,(%esp)
 8637cf9:	e8 bc 08 01 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8637cfe:	89 c3                	mov    %eax,%ebx
 8637d00:	be 00 00 00 00       	mov    $0x0,%esi
 8637d05:	eb 22                	jmp    8637d29 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x27d>
 8637d07:	be 01 00 00 00       	mov    $0x1,%esi
 8637d0c:	eb 1b                	jmp    8637d29 <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x27d>
 8637d0e:	89 d3                	mov    %edx,%ebx
 8637d10:	89 c6                	mov    %eax,%esi
 8637d12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637d15:	89 04 24             	mov    %eax,(%esp)
 8637d18:	e8 63 61 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8637d1d:	89 f0                	mov    %esi,%eax
 8637d1f:	89 da                	mov    %ebx,%edx
 8637d21:	89 04 24             	mov    %eax,(%esp)
 8637d24:	e8 27 ba 4a 00       	call   8ae3750 <_Unwind_Resume>
 8637d29:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8637d2c:	89 04 24             	mov    %eax,(%esp)
 8637d2f:	e8 4c 61 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8637d34:	85 f6                	test   %esi,%esi
 8637d36:	74 22                	je     8637d5a <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0x2ae>
 8637d38:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8637d3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8637d3f:	89 04 24             	mov    %eax,(%esp)
 8637d42:	e8 79 55 00 00       	call   863d2c0 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE4sizeEv>
 8637d47:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8637d4a:	0f 97 c0             	seta   %al
 8637d4d:	84 c0                	test   %al,%al
 8637d4f:	0f 85 17 fe ff ff    	jne    8637b6c <_ZN21TimerFinishItemEffect12dispatch_sigEiij+0xc0>
 8637d55:	bb 01 00 00 00       	mov    $0x1,%ebx
 8637d5a:	89 d8                	mov    %ebx,%eax
 8637d5c:	83 c4 5c             	add    $0x5c,%esp
 8637d5f:	5b                   	pop    %ebx
 8637d60:	5e                   	pop    %esi
 8637d61:	5f                   	pop    %edi
 8637d62:	5d                   	pop    %ebp
 8637d63:	c3                   	ret

```

```c
// TimerFinishItemEffect::dispatch_sig @ 0x8637aac

/* TimerFinishItemEffect::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerFinishItemEffect::dispatch_sig
          (TimerFinishItemEffect *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  undefined4 unaff_EBX;
  undefined4 uVar7;
  PacketGuard local_3c [12];
  CUserCharacInfo *local_30;
  uint local_2c;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_28;
  uint local_24;
  uint local_20;
  
  iVar2 = G_CGameManager();
  local_30 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (local_30 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  iVar2 = CUser::get_state((CUser *)local_30);
  if (2 < iVar2) {
    if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(local_30), uVar3 == param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_28 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
                 CUserCharacInfo::GetCurCharacEffectItemListR(local_30);
      if (local_28 == (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)0x0) {
        uVar7 = 0;
      }
      else {
        local_24 = 0;
        while (uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size
                                 (local_28), local_24 < uVar3) {
          piVar4 = (int *)std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::
                          operator[](local_28,local_24);
          if (*piVar4 == param_2) {
            PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08637bb1 to 08637cfd has its CatchHandler @ 08637d0e */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xae);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
            iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                              (local_28,local_24);
            if (local_2c < *(uint *)(iVar2 + 4)) {
              iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                                (local_28,local_24);
              local_20 = *(int *)(iVar2 + 4) - local_2c;
              if ((local_20 < 6) && (0x3c < local_20)) {
                _processSepecialEffectContinuousItem(this,(CUser *)local_30,param_2);
                unaff_EBX = CUser::Send((CUser *)local_30,local_3c);
                bVar1 = false;
              }
              else {
                uVar7 = CUserCharacInfo::getCurCharacNo(local_30);
                uVar3 = local_20;
                uVar5 = CUser::GetUID((CUser *)local_30);
                pTVar6 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar6,0,uVar5,0x76,uVar3,param_2,uVar7);
                bVar1 = true;
              }
            }
            else {
              _processSepecialEffectContinuousItem(this,(CUser *)local_30,param_2);
              unaff_EBX = CUser::Send((CUser *)local_30,local_3c);
              bVar1 = false;
            }
            PacketGuard::~PacketGuard(local_3c);
            if (!bVar1) {
              return unaff_EBX;
            }
          }
          local_24 = local_24 + 1;
        }
        uVar7 = 1;
      }
    }
    return uVar7;
  }
  return 0;
}

```

