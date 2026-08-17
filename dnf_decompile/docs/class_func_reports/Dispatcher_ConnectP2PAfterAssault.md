# Dispatcher_ConnectP2PAfterAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08206cfa Dispatcher_ConnectP2PAfterAssault::dispatch_sig  [0x08206cfa-0x8206f0f] ===
 8206cfa:	55                   	push   %ebp
 8206cfb:	89 e5                	mov    %esp,%ebp
 8206cfd:	53                   	push   %ebx
 8206cfe:	83 ec 24             	sub    $0x24,%esp
 8206d01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206d04:	89 04 24             	mov    %eax,(%esp)
 8206d07:	e8 80 36 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8206d0c:	83 f8 01             	cmp    $0x1,%eax
 8206d0f:	0f 9e c0             	setle  %al
 8206d12:	84 c0                	test   %al,%al
 8206d14:	74 29                	je     8206d3f <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x45>
 8206d16:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206d1d:	00 
 8206d1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206d25:	00 
 8206d26:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206d2d:	08 
 8206d2e:	c7 04 24 6f a1 00 00 	movl   $0xa16f,(%esp)
 8206d35:	e8 9d 9b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206d3a:	e9 cb 01 00 00       	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206d3f:	c6 45 f3 ff          	movb   $0xff,-0xd(%ebp)
 8206d43:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8206d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206d4a:	8b 45 10             	mov    0x10(%ebp),%eax
 8206d4d:	89 04 24             	mov    %eax,(%esp)
 8206d50:	e8 cd 61 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8206d55:	83 f0 01             	xor    $0x1,%eax
 8206d58:	84 c0                	test   %al,%al
 8206d5a:	74 29                	je     8206d85 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 8206d5c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206d63:	00 
 8206d64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206d6b:	00 
 8206d6c:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206d73:	08 
 8206d74:	c7 04 24 73 a1 00 00 	movl   $0xa173,(%esp)
 8206d7b:	e8 57 9b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206d80:	e9 85 01 00 00       	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206d85:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8206d89:	3c 04                	cmp    $0x4,%al
 8206d8b:	7f 08                	jg     8206d95 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 8206d8d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8206d91:	84 c0                	test   %al,%al
 8206d93:	79 29                	jns    8206dbe <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0xc4>
 8206d95:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206d9c:	00 
 8206d9d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206da4:	00 
 8206da5:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206dac:	08 
 8206dad:	c7 04 24 77 a1 00 00 	movl   $0xa177,(%esp)
 8206db4:	e8 1e 9b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206db9:	e9 4c 01 00 00       	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206dbe:	c7 45 ef 00 00 00 00 	movl   $0x0,-0x11(%ebp)
 8206dc5:	c6 45 ee ff          	movb   $0xff,-0x12(%ebp)
 8206dc9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8206dd0:	e9 c8 00 00 00       	jmp    8206e9d <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 8206dd5:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8206dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206ddc:	8b 45 10             	mov    0x10(%ebp),%eax
 8206ddf:	89 04 24             	mov    %eax,(%esp)
 8206de2:	e8 3b 61 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8206de7:	83 f0 01             	xor    $0x1,%eax
 8206dea:	84 c0                	test   %al,%al
 8206dec:	74 29                	je     8206e17 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 8206dee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206df5:	00 
 8206df6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206dfd:	00 
 8206dfe:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206e05:	08 
 8206e06:	c7 04 24 7e a1 00 00 	movl   $0xa17e,(%esp)
 8206e0d:	e8 c5 9a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206e12:	e9 f3 00 00 00       	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206e17:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8206e1b:	3c 03                	cmp    $0x3,%al
 8206e1d:	7f 08                	jg     8206e27 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x12d>
 8206e1f:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8206e23:	84 c0                	test   %al,%al
 8206e25:	79 29                	jns    8206e50 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x156>
 8206e27:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206e2e:	00 
 8206e2f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206e36:	00 
 8206e37:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206e3e:	08 
 8206e3f:	c7 04 24 82 a1 00 00 	movl   $0xa182,(%esp)
 8206e46:	e8 8c 9a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206e4b:	e9 ba 00 00 00       	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206e50:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8206e54:	0f be c0             	movsbl %al,%eax
 8206e57:	8d 55 ef             	lea    -0x11(%ebp),%edx
 8206e5a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8206e5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206e61:	8b 45 10             	mov    0x10(%ebp),%eax
 8206e64:	89 04 24             	mov    %eax,(%esp)
 8206e67:	e8 b6 60 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8206e6c:	83 f0 01             	xor    $0x1,%eax
 8206e6f:	84 c0                	test   %al,%al
 8206e71:	74 26                	je     8206e99 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x19f>
 8206e73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206e7a:	00 
 8206e7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206e82:	00 
 8206e83:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206e8a:	08 
 8206e8b:	c7 04 24 89 a1 00 00 	movl   $0xa189,(%esp)
 8206e92:	e8 40 9a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206e97:	eb 71                	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206e99:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8206e9d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8206ea1:	0f be c0             	movsbl %al,%eax
 8206ea4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8206ea7:	0f 9f c0             	setg   %al
 8206eaa:	84 c0                	test   %al,%al
 8206eac:	0f 85 23 ff ff ff    	jne    8206dd5 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0xdb>
 8206eb2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8206eb6:	0f be d8             	movsbl %al,%ebx
 8206eb9:	e8 e2 e1 02 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 8206ebe:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8206ec2:	8d 55 ef             	lea    -0x11(%ebp),%edx
 8206ec5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8206ec9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206ecc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206ed0:	89 04 24             	mov    %eax,(%esp)
 8206ed3:	e8 48 84 0e 00       	call   82ef320 <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci>
 8206ed8:	83 f0 01             	xor    $0x1,%eax
 8206edb:	84 c0                	test   %al,%al
 8206edd:	74 26                	je     8206f05 <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 8206edf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206ee6:	00 
 8206ee7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206eee:	00 
 8206eef:	c7 44 24 04 20 eb bc 	movl   $0x8bceb20,0x4(%esp)
 8206ef6:	08 
 8206ef7:	c7 04 24 8f a1 00 00 	movl   $0xa18f,(%esp)
 8206efe:	e8 d4 99 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206f03:	eb 05                	jmp    8206f0a <_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x210>
 8206f05:	b8 00 00 00 00       	mov    $0x0,%eax
 8206f0a:	83 c4 24             	add    $0x24,%esp
 8206f0d:	5b                   	pop    %ebx
 8206f0e:	5d                   	pop    %ebp
 8206f0f:	c3                   	ret

```

```c
// Dispatcher_ConnectP2PAfterAssault::dispatch_sig @ 0x8206cfa

/* Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PAfterAssault::dispatch_sig
          (Dispatcher_ConnectP2PAfterAssault *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  char local_16;
  char local_15 [5];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa16f,
                     "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_15[4] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_15 + 4);
    if (cVar1 == '\x01') {
      if ((local_15[4] < '\x05') && (-1 < local_15[4])) {
        local_15[0] = '\0';
        local_15[1] = '\0';
        local_15[2] = '\0';
        local_15[3] = '\0';
        local_16 = -1;
        for (local_10 = 0; local_10 < local_15[4]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_16);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa17e,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\x03' < local_16) || (local_16 < '\0')) {
            uVar3 = LineFunc(0xa182,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_15 + local_16);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa189,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        pCVar4 = (CUser *)pvp_assault::GetInstanceAssaultMgr();
        cVar1 = pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault
                          (pCVar4,(char *)param_1,(int)local_15);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa18f,
                           "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa177,
                         "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa173,
                       "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

