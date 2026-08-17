# Dispatcher_RequestItemLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08222e00 Dispatcher_RequestItemLock::dispatch_sig  [0x08222e00-0x8222f81] ===
 8222e00:	55                   	push   %ebp
 8222e01:	89 e5                	mov    %esp,%ebp
 8222e03:	83 ec 28             	sub    $0x28,%esp
 8222e06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222e09:	89 04 24             	mov    %eax,(%esp)
 8222e0c:	e8 7b 75 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8222e11:	83 f8 02             	cmp    $0x2,%eax
 8222e14:	0f 9e c0             	setle  %al
 8222e17:	84 c0                	test   %al,%al
 8222e19:	74 0a                	je     8222e25 <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8222e1b:	b8 00 00 00 00       	mov    $0x0,%eax
 8222e20:	e9 5a 01 00 00       	jmp    8222f7f <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8222e25:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8222e29:	66 c7 45 ec 00 00    	movw   $0x0,-0x14(%ebp)
 8222e2f:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8222e32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222e36:	8b 45 10             	mov    0x10(%ebp),%eax
 8222e39:	89 04 24             	mov    %eax,(%esp)
 8222e3c:	e8 e1 a0 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8222e41:	83 f0 01             	xor    $0x1,%eax
 8222e44:	84 c0                	test   %al,%al
 8222e46:	74 29                	je     8222e71 <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x71>
 8222e48:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222e4f:	00 
 8222e50:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222e57:	00 
 8222e58:	c7 44 24 04 c0 cb bc 	movl   $0x8bccbc0,0x4(%esp)
 8222e5f:	08 
 8222e60:	c7 04 24 26 dd 00 00 	movl   $0xdd26,(%esp)
 8222e67:	e8 6b da 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222e6c:	e9 0e 01 00 00       	jmp    8222f7f <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8222e71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8222e74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222e78:	8b 45 10             	mov    0x10(%ebp),%eax
 8222e7b:	89 04 24             	mov    %eax,(%esp)
 8222e7e:	e8 3d a1 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8222e83:	83 f0 01             	xor    $0x1,%eax
 8222e86:	84 c0                	test   %al,%al
 8222e88:	74 29                	je     8222eb3 <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0xb3>
 8222e8a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222e91:	00 
 8222e92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222e99:	00 
 8222e9a:	c7 44 24 04 c0 cb bc 	movl   $0x8bccbc0,0x4(%esp)
 8222ea1:	08 
 8222ea2:	c7 04 24 27 dd 00 00 	movl   $0xdd27,(%esp)
 8222ea9:	e8 29 da 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222eae:	e9 cc 00 00 00       	jmp    8222f7f <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8222eb3:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8222eb8:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8222ebf:	00 
 8222ec0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8222ec3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8222ec7:	89 04 24             	mov    %eax,(%esp)
 8222eca:	e8 33 5b 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8222ecf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8222ed2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8222ed6:	74 27                	je     8222eff <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8222ed8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8222edb:	0f b6 c0             	movzbl %al,%eax
 8222ede:	89 44 24 08          	mov    %eax,0x8(%esp)
 8222ee2:	c7 44 24 04 0f 01 00 	movl   $0x10f,0x4(%esp)
 8222ee9:	00 
 8222eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222eed:	89 04 24             	mov    %eax,(%esp)
 8222ef0:	e8 4d 90 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222ef5:	b8 00 00 00 00       	mov    $0x0,%eax
 8222efa:	e9 80 00 00 00       	jmp    8222f7f <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8222eff:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8222f06:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 8222f0a:	0f bf d0             	movswl %ax,%edx
 8222f0d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8222f11:	0f be c0             	movsbl %al,%eax
 8222f14:	89 54 24 08          	mov    %edx,0x8(%esp)
 8222f18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222f1f:	89 04 24             	mov    %eax,(%esp)
 8222f22:	e8 75 3b 42 00       	call   8646a9c <_ZNK5CUser14IsAbleItemLockEii>
 8222f27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8222f2a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8222f2e:	0f 95 c0             	setne  %al
 8222f31:	84 c0                	test   %al,%al
 8222f33:	74 24                	je     8222f59 <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x159>
 8222f35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8222f38:	0f b6 c0             	movzbl %al,%eax
 8222f3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8222f3f:	c7 44 24 04 0f 01 00 	movl   $0x10f,0x4(%esp)
 8222f46:	00 
 8222f47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222f4a:	89 04 24             	mov    %eax,(%esp)
 8222f4d:	e8 f0 8f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222f52:	b8 00 00 00 00       	mov    $0x0,%eax
 8222f57:	eb 26                	jmp    8222f7f <_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8222f59:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 8222f5d:	0f bf d0             	movswl %ax,%edx
 8222f60:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8222f64:	0f be c0             	movsbl %al,%eax
 8222f67:	89 54 24 08          	mov    %edx,0x8(%esp)
 8222f6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222f6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222f72:	89 04 24             	mov    %eax,(%esp)
 8222f75:	e8 d0 3d 42 00       	call   8646d4a <_ZN5CUser10DoItemLockEii>
 8222f7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8222f7f:	c9                   	leave
 8222f80:	c3                   	ret
 8222f81:	90                   	nop

```

```c
// Dispatcher_RequestItemLock::dispatch_sig @ 0x8222e00

/* Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemLock::dispatch_sig
          (Dispatcher_RequestItemLock *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short local_18;
  char local_15;
  uint local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x17);
        if (local_14 == 0) {
          local_10 = 0;
          local_10 = CUser::IsAbleItemLock(param_1,(int)local_15,(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemLock(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x10f,local_10 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x10f,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd27,
                         "virtual int Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd26,
                       "virtual int Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar3;
}

```

