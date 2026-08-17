# Dispatcher_ChangeHost

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08204c1e Dispatcher_ChangeHost::dispatch_sig  [0x08204c1e-0x8204d8d] ===
 8204c1e:	55                   	push   %ebp
 8204c1f:	89 e5                	mov    %esp,%ebp
 8204c21:	83 ec 28             	sub    $0x28,%esp
 8204c24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204c27:	89 04 24             	mov    %eax,(%esp)
 8204c2a:	e8 5d 57 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8204c2f:	83 f8 02             	cmp    $0x2,%eax
 8204c32:	0f 9e c0             	setle  %al
 8204c35:	84 c0                	test   %al,%al
 8204c37:	74 29                	je     8204c62 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x44>
 8204c39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204c40:	00 
 8204c41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204c48:	00 
 8204c49:	c7 44 24 04 e0 ee bc 	movl   $0x8bceee0,0x4(%esp)
 8204c50:	08 
 8204c51:	c7 04 24 bf 9c 00 00 	movl   $0x9cbf,(%esp)
 8204c58:	e8 7a bc 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204c5d:	e9 2a 01 00 00       	jmp    8204d8c <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x16e>
 8204c62:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8204c65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204c69:	8b 45 10             	mov    0x10(%ebp),%eax
 8204c6c:	89 04 24             	mov    %eax,(%esp)
 8204c6f:	e8 ae 82 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8204c74:	83 f0 01             	xor    $0x1,%eax
 8204c77:	84 c0                	test   %al,%al
 8204c79:	74 29                	je     8204ca4 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x86>
 8204c7b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204c82:	00 
 8204c83:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204c8a:	00 
 8204c8b:	c7 44 24 04 e0 ee bc 	movl   $0x8bceee0,0x4(%esp)
 8204c92:	08 
 8204c93:	c7 04 24 c2 9c 00 00 	movl   $0x9cc2,(%esp)
 8204c9a:	e8 38 bc 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204c9f:	e9 e8 00 00 00       	jmp    8204d8c <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x16e>
 8204ca4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8204cab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204cae:	89 04 24             	mov    %eax,(%esp)
 8204cb1:	e8 96 04 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8204cb6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8204cb9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8204cbd:	75 25                	jne    8204ce4 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 8204cbf:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8204cc6:	00 
 8204cc7:	c7 44 24 04 7c 00 00 	movl   $0x7c,0x4(%esp)
 8204cce:	00 
 8204ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204cd2:	89 04 24             	mov    %eax,(%esp)
 8204cd5:	e8 68 72 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8204cda:	b8 00 00 00 00       	mov    $0x0,%eax
 8204cdf:	e9 a8 00 00 00       	jmp    8204d8c <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x16e>
 8204ce4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8204ce7:	89 04 24             	mov    %eax,(%esp)
 8204cea:	e8 1f 8c 02 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 8204cef:	89 04 24             	mov    %eax,(%esp)
 8204cf2:	e8 f7 8a 02 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 8204cf7:	84 c0                	test   %al,%al
 8204cf9:	78 1e                	js     8204d19 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 8204cfb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8204cfe:	89 04 24             	mov    %eax,(%esp)
 8204d01:	e8 08 8c 02 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 8204d06:	89 04 24             	mov    %eax,(%esp)
 8204d09:	e8 e0 8a 02 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 8204d0e:	3c 03                	cmp    $0x3,%al
 8204d10:	7f 07                	jg     8204d19 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 8204d12:	b8 01 00 00 00       	mov    $0x1,%eax
 8204d17:	eb 05                	jmp    8204d1e <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x100>
 8204d19:	b8 00 00 00 00       	mov    $0x0,%eax
 8204d1e:	84 c0                	test   %al,%al
 8204d20:	74 22                	je     8204d44 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x126>
 8204d22:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 8204d29:	00 
 8204d2a:	c7 44 24 04 7c 00 00 	movl   $0x7c,0x4(%esp)
 8204d31:	00 
 8204d32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204d35:	89 04 24             	mov    %eax,(%esp)
 8204d38:	e8 05 72 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8204d3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8204d42:	eb 48                	jmp    8204d8c <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x16e>
 8204d44:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8204d48:	0f be c0             	movsbl %al,%eax
 8204d4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8204d4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204d52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204d56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8204d59:	89 04 24             	mov    %eax,(%esp)
 8204d5c:	e8 17 7c 39 00       	call   859c978 <_ZN6CParty14change_managerEP5CUseri>
 8204d61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8204d64:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8204d68:	7e 1d                	jle    8204d87 <_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf+0x169>
 8204d6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8204d6d:	0f b6 c0             	movzbl %al,%eax
 8204d70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8204d74:	c7 44 24 04 7c 00 00 	movl   $0x7c,0x4(%esp)
 8204d7b:	00 
 8204d7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204d7f:	89 04 24             	mov    %eax,(%esp)
 8204d82:	e8 bb 71 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8204d87:	b8 00 00 00 00       	mov    $0x0,%eax
 8204d8c:	c9                   	leave
 8204d8d:	c3                   	ret

```

```c
// Dispatcher_ChangeHost::dispatch_sig @ 0x8204c1e

/* Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeHost::dispatch_sig(Dispatcher_ChangeHost *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPartyTelePort *pCVar5;
  char local_15;
  uint local_14;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0x9cbf,"virtual int Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_15);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9cc2,"virtual int Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  local_14 = 0;
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x7c,0x13);
    return 0;
  }
  pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
  if (-1 < cVar2) {
    pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
    if (cVar2 < '\x04') {
      bVar1 = true;
      goto LAB_08204d1e;
    }
  }
  bVar1 = false;
LAB_08204d1e:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x7c,0x9e);
  }
  else {
    local_14 = CParty::change_manager(local_10,param_1,(int)local_15);
    if (0 < (int)local_14) {
      CUser::SendCmdErrorPacket(param_1,0x7c,local_14 & 0xff);
    }
  }
  return 0;
}

```

