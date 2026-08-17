# TimerCheckMailTimeOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635d20 TimerCheckMailTimeOut::dispatch_sig  [0x08635d20-0x8635e95] ===
 8635d20:	55                   	push   %ebp
 8635d21:	89 e5                	mov    %esp,%ebp
 8635d23:	56                   	push   %esi
 8635d24:	53                   	push   %ebx
 8635d25:	83 ec 30             	sub    $0x30,%esp
 8635d28:	e8 61 64 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635d2d:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8635d34:	00 
 8635d35:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635d38:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635d3c:	89 04 24             	mov    %eax,(%esp)
 8635d3f:	e8 60 ea c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8635d44:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8635d47:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8635d4b:	75 0a                	jne    8635d57 <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x37>
 8635d4d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8635d52:	e9 35 01 00 00       	jmp    8635e8c <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x16c>
 8635d57:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635d5a:	89 04 24             	mov    %eax,(%esp)
 8635d5d:	e8 2a 46 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8635d62:	83 f8 01             	cmp    $0x1,%eax
 8635d65:	0f 9e c0             	setle  %al
 8635d68:	84 c0                	test   %al,%al
 8635d6a:	74 0a                	je     8635d76 <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x56>
 8635d6c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8635d71:	e9 16 01 00 00       	jmp    8635e8c <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x16c>
 8635d76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635d79:	89 04 24             	mov    %eax,(%esp)
 8635d7c:	e8 11 99 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8635d81:	3b 45 10             	cmp    0x10(%ebp),%eax
 8635d84:	0f 95 c0             	setne  %al
 8635d87:	84 c0                	test   %al,%al
 8635d89:	74 0a                	je     8635d95 <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x75>
 8635d8b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8635d90:	e9 f7 00 00 00       	jmp    8635e8c <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x16c>
 8635d95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635d98:	89 04 24             	mov    %eax,(%esp)
 8635d9b:	e8 ae 5e a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8635da0:	3b 45 14             	cmp    0x14(%ebp),%eax
 8635da3:	0f 95 c0             	setne  %al
 8635da6:	84 c0                	test   %al,%al
 8635da8:	74 0a                	je     8635db4 <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x94>
 8635daa:	bb 00 00 00 00       	mov    $0x0,%ebx
 8635daf:	e9 d8 00 00 00       	jmp    8635e8c <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x16c>
 8635db4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635db7:	89 04 24             	mov    %eax,(%esp)
 8635dba:	e8 8d 7f f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8635dbf:	c7 44 24 08 62 00 00 	movl   $0x62,0x8(%esp)
 8635dc6:	00 
 8635dc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8635dce:	00 
 8635dcf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635dd2:	89 04 24             	mov    %eax,(%esp)
 8635dd5:	e8 22 5b a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8635dda:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635ddd:	89 04 24             	mov    %eax,(%esp)
 8635de0:	e8 67 ad ad ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8635de5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8635de8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8635def:	00 
 8635df0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635df3:	89 04 24             	mov    %eax,(%esp)
 8635df6:	e8 41 5b a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8635dfb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635dfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635e02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635e05:	89 04 24             	mov    %eax,(%esp)
 8635e08:	e8 83 f0 f1 ff       	call   8554e90 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard>
 8635e0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635e10:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8635e14:	74 3e                	je     8635e54 <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x134>
 8635e16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8635e19:	89 44 24 08          	mov    %eax,0x8(%esp)
 8635e1d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8635e20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635e24:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635e27:	89 04 24             	mov    %eax,(%esp)
 8635e2a:	e8 1b 22 e8 ff       	call   84b804a <_ZN18InterfacePacketBuf7put_intERii>
 8635e2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8635e36:	00 
 8635e37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635e3a:	89 04 24             	mov    %eax,(%esp)
 8635e3d:	e8 16 5b a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8635e42:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635e49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635e4c:	89 04 24             	mov    %eax,(%esp)
 8635e4f:	e8 66 27 01 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8635e54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635e57:	89 04 24             	mov    %eax,(%esp)
 8635e5a:	e8 83 c5 f1 ff       	call   85523e2 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser>
 8635e5f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8635e64:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635e67:	89 04 24             	mov    %eax,(%esp)
 8635e6a:	e8 11 80 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8635e6f:	eb 1b                	jmp    8635e8c <_ZN21TimerCheckMailTimeOut12dispatch_sigEiij+0x16c>
 8635e71:	89 d3                	mov    %edx,%ebx
 8635e73:	89 c6                	mov    %eax,%esi
 8635e75:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8635e78:	89 04 24             	mov    %eax,(%esp)
 8635e7b:	e8 00 80 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8635e80:	89 f0                	mov    %esi,%eax
 8635e82:	89 da                	mov    %ebx,%edx
 8635e84:	89 04 24             	mov    %eax,(%esp)
 8635e87:	e8 c4 d8 4a 00       	call   8ae3750 <_Unwind_Resume>
 8635e8c:	89 d8                	mov    %ebx,%eax
 8635e8e:	83 c4 30             	add    $0x30,%esp
 8635e91:	5b                   	pop    %ebx
 8635e92:	5e                   	pop    %esi
 8635e93:	5d                   	pop    %ebp
 8635e94:	c3                   	ret
 8635e95:	90                   	nop

```

```c
// TimerCheckMailTimeOut::dispatch_sig @ 0x8635d20

/* TimerCheckMailTimeOut::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCheckMailTimeOut::dispatch_sig
          (TimerCheckMailTimeOut *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_24;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  int local_10;
  
  iVar1 = G_CGameManager();
  local_14 = (CUserCharacInfo *)CGameManager::getUser(iVar1,param_1);
  if (local_14 == (CUserCharacInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = CUser::get_state((CUser *)local_14);
    if (iVar1 < 2) {
      uVar3 = 0;
    }
    else {
      iVar1 = CUserCharacInfo::GetLoginTick(local_14);
      if (iVar1 == param_2) {
        uVar2 = CUserCharacInfo::getCurCharacNo(local_14);
        if (uVar2 == param_3) {
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08635dd5 to 08635e5e has its CatchHandler @ 08635e71 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x62);
          local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
          local_10 = WongWork::CMailBoxHelper::CheckMailTimeout((CUser *)local_14,local_20);
          if (local_10 != 0) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,&local_24,local_10);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
            CUser::Send((CUser *)local_14,local_20);
          }
          WongWork::CMailBoxHelper::SetPeriodCheckTimer((CUser *)local_14);
          uVar3 = 1;
          PacketGuard::~PacketGuard(local_20);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

