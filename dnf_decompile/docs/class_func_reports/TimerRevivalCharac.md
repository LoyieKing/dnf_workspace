# TimerRevivalCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638e78 TimerRevivalCharac::dispatch_sig  [0x08638e78-0x8638f69] ===
 8638e78:	55                   	push   %ebp
 8638e79:	89 e5                	mov    %esp,%ebp
 8638e7b:	56                   	push   %esi
 8638e7c:	53                   	push   %ebx
 8638e7d:	83 ec 20             	sub    $0x20,%esp
 8638e80:	e8 09 33 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638e85:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8638e8c:	00 
 8638e8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638e90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638e94:	89 04 24             	mov    %eax,(%esp)
 8638e97:	e8 08 b9 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8638e9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638e9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638ea3:	75 0a                	jne    8638eaf <_ZN18TimerRevivalCharac12dispatch_sigEiij+0x37>
 8638ea5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8638eaa:	e9 b2 00 00 00       	jmp    8638f61 <_ZN18TimerRevivalCharac12dispatch_sigEiij+0xe9>
 8638eaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638eb2:	89 04 24             	mov    %eax,(%esp)
 8638eb5:	e8 78 75 ae ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8638eba:	85 c0                	test   %eax,%eax
 8638ebc:	0f 94 c0             	sete   %al
 8638ebf:	84 c0                	test   %al,%al
 8638ec1:	74 0a                	je     8638ecd <_ZN18TimerRevivalCharac12dispatch_sigEiij+0x55>
 8638ec3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8638ec8:	e9 94 00 00 00       	jmp    8638f61 <_ZN18TimerRevivalCharac12dispatch_sigEiij+0xe9>
 8638ecd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638ed0:	89 04 24             	mov    %eax,(%esp)
 8638ed3:	e8 b4 1b b1 ff       	call   814aa8c <_ZN5CUser14GetRevivalTimeEv>
 8638ed8:	3b 45 10             	cmp    0x10(%ebp),%eax
 8638edb:	0f 95 c0             	setne  %al
 8638ede:	84 c0                	test   %al,%al
 8638ee0:	74 07                	je     8638ee9 <_ZN18TimerRevivalCharac12dispatch_sigEiij+0x71>
 8638ee2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8638ee7:	eb 78                	jmp    8638f61 <_ZN18TimerRevivalCharac12dispatch_sigEiij+0xe9>
 8638ee9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638eec:	89 04 24             	mov    %eax,(%esp)
 8638eef:	e8 58 4e f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8638ef4:	c7 44 24 08 e4 00 00 	movl   $0xe4,0x8(%esp)
 8638efb:	00 
 8638efc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8638f03:	00 
 8638f04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638f07:	89 04 24             	mov    %eax,(%esp)
 8638f0a:	e8 ed 29 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8638f0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638f16:	00 
 8638f17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638f1a:	89 04 24             	mov    %eax,(%esp)
 8638f1d:	e8 36 2a a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8638f22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638f25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638f29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638f2c:	89 04 24             	mov    %eax,(%esp)
 8638f2f:	e8 86 f6 00 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8638f34:	bb 01 00 00 00       	mov    $0x1,%ebx
 8638f39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638f3c:	89 04 24             	mov    %eax,(%esp)
 8638f3f:	e8 3c 4f f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638f44:	eb 1b                	jmp    8638f61 <_ZN18TimerRevivalCharac12dispatch_sigEiij+0xe9>
 8638f46:	89 d3                	mov    %edx,%ebx
 8638f48:	89 c6                	mov    %eax,%esi
 8638f4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638f4d:	89 04 24             	mov    %eax,(%esp)
 8638f50:	e8 2b 4f f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638f55:	89 f0                	mov    %esi,%eax
 8638f57:	89 da                	mov    %ebx,%edx
 8638f59:	89 04 24             	mov    %eax,(%esp)
 8638f5c:	e8 ef a7 4a 00       	call   8ae3750 <_Unwind_Resume>
 8638f61:	89 d8                	mov    %ebx,%eax
 8638f63:	83 c4 20             	add    $0x20,%esp
 8638f66:	5b                   	pop    %ebx
 8638f67:	5e                   	pop    %esi
 8638f68:	5d                   	pop    %ebp
 8638f69:	c3                   	ret

```

```c
// TimerRevivalCharac::dispatch_sig @ 0x8638e78

/* TimerRevivalCharac::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRevivalCharac::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  CUser *local_10;
  
  iVar1 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_10);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = CUser::GetRevivalTime(local_10);
      if (uVar2 == param_3) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08638f0a to 08638f33 has its CatchHandler @ 08638f46 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xe4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(local_10,local_1c);
        uVar3 = 1;
        PacketGuard::~PacketGuard(local_1c);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

