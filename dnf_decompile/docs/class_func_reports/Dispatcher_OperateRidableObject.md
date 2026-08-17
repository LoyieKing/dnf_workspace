# Dispatcher_OperateRidableObject

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08226da0 Dispatcher_OperateRidableObject::dispatch_sig  [0x08226da0-0x8226f2f] ===
 8226da0:	55                   	push   %ebp
 8226da1:	89 e5                	mov    %esp,%ebp
 8226da3:	83 ec 28             	sub    $0x28,%esp
 8226da6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226da9:	89 04 24             	mov    %eax,(%esp)
 8226dac:	e8 db 35 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8226db1:	83 f8 05             	cmp    $0x5,%eax
 8226db4:	0f 95 c0             	setne  %al
 8226db7:	84 c0                	test   %al,%al
 8226db9:	74 0a                	je     8226dc5 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8226dbb:	b8 00 00 00 00       	mov    $0x0,%eax
 8226dc0:	e9 69 01 00 00       	jmp    8226f2e <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8226dc5:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
 8226dc9:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8226dcd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8226dd4:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8226dd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226ddb:	8b 45 10             	mov    0x10(%ebp),%eax
 8226dde:	89 04 24             	mov    %eax,(%esp)
 8226de1:	e8 3c 61 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8226de6:	83 f0 01             	xor    $0x1,%eax
 8226de9:	84 c0                	test   %al,%al
 8226deb:	74 29                	je     8226e16 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x76>
 8226ded:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226df4:	00 
 8226df5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226dfc:	00 
 8226dfd:	c7 44 24 04 80 c3 bc 	movl   $0x8bcc380,0x4(%esp)
 8226e04:	08 
 8226e05:	c7 04 24 a4 e2 00 00 	movl   $0xe2a4,(%esp)
 8226e0c:	e8 c6 9a 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226e11:	e9 18 01 00 00       	jmp    8226f2e <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8226e16:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8226e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226e1d:	8b 45 10             	mov    0x10(%ebp),%eax
 8226e20:	89 04 24             	mov    %eax,(%esp)
 8226e23:	e8 c8 62 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8226e28:	83 f0 01             	xor    $0x1,%eax
 8226e2b:	84 c0                	test   %al,%al
 8226e2d:	74 29                	je     8226e58 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 8226e2f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226e36:	00 
 8226e37:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226e3e:	00 
 8226e3f:	c7 44 24 04 80 c3 bc 	movl   $0x8bcc380,0x4(%esp)
 8226e46:	08 
 8226e47:	c7 04 24 a7 e2 00 00 	movl   $0xe2a7,(%esp)
 8226e4e:	e8 84 9a 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226e53:	e9 d6 00 00 00       	jmp    8226f2e <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8226e58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226e5b:	89 04 24             	mov    %eax,(%esp)
 8226e5e:	e8 e9 e2 42 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8226e63:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8226e66:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8226e6a:	75 0a                	jne    8226e76 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0xd6>
 8226e6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8226e71:	e9 b8 00 00 00       	jmp    8226f2e <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8226e76:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8226e7a:	0f be c0             	movsbl %al,%eax
 8226e7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8226e80:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8226e84:	75 22                	jne    8226ea8 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x108>
 8226e86:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8226e89:	8b 55 0c             	mov    0xc(%ebp),%edx
 8226e8c:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8226e92:	89 44 24 08          	mov    %eax,0x8(%esp)
 8226e96:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8226e9d:	00 
 8226e9e:	89 14 24             	mov    %edx,(%esp)
 8226ea1:	e8 82 fa 45 00       	call   8686928 <_ZN15cUserHistoryLog12StartRidableENS_12eRidableTypeEi>
 8226ea6:	eb 2c                	jmp    8226ed4 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x134>
 8226ea8:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8226eac:	74 06                	je     8226eb4 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x114>
 8226eae:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8226eb2:	75 20                	jne    8226ed4 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x134>
 8226eb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8226eb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8226eba:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8226ec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8226ec4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8226ecb:	00 
 8226ecc:	89 14 24             	mov    %edx,(%esp)
 8226ecf:	e8 88 fa 45 00       	call   868695c <_ZN15cUserHistoryLog10EndRidableENS_12eRidableTypeEi>
 8226ed4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8226ed7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8226eda:	89 54 24 08          	mov    %edx,0x8(%esp)
 8226ede:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226ee2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8226ee5:	89 04 24             	mov    %eax,(%esp)
 8226ee8:	e8 3b 30 39 00       	call   85b9f28 <_ZN6CParty21SetRidableObjectStateEi19eRidableObjectState>
 8226eed:	83 f0 01             	xor    $0x1,%eax
 8226ef0:	84 c0                	test   %al,%al
 8226ef2:	74 22                	je     8226f16 <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x176>
 8226ef4:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8226efb:	00 
 8226efc:	c7 44 24 04 3d 01 00 	movl   $0x13d,0x4(%esp)
 8226f03:	00 
 8226f04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226f07:	89 04 24             	mov    %eax,(%esp)
 8226f0a:	e8 33 50 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226f0f:	b8 00 00 00 00       	mov    $0x0,%eax
 8226f14:	eb 18                	jmp    8226f2e <_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8226f16:	c7 44 24 04 3d 01 00 	movl   $0x13d,0x4(%esp)
 8226f1d:	00 
 8226f1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226f21:	89 04 24             	mov    %eax,(%esp)
 8226f24:	e8 77 4f 45 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 8226f29:	b8 00 00 00 00       	mov    $0x0,%eax
 8226f2e:	c9                   	leave
 8226f2f:	c3                   	ret

```

```c
// Dispatcher_OperateRidableObject::dispatch_sig @ 0x8226da0

/* Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_OperateRidableObject::dispatch_sig
          (Dispatcher_OperateRidableObject *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  char local_16 [2];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 5) {
    local_16[0] = '\0';
    local_16[1] = 0;
    local_1c = 0;
    cVar1 = PacketBuf::get_byte(param_2,local_16);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar1 == '\x01') {
        local_14 = (CParty *)CUser::GetParty(param_1);
        if (local_14 == (CParty *)0x0) {
          uVar3 = 0;
        }
        else {
          local_10 = (int)local_16[0];
          if (local_10 == 2) {
            cUserHistoryLog::StartRidable((cUserHistoryLog *)(param_1 + 0x79700),0,local_1c);
          }
          else if ((local_10 == 1) || (local_10 == 3)) {
            cUserHistoryLog::EndRidable((cUserHistoryLog *)(param_1 + 0x79700),0,local_1c);
          }
          cVar1 = CParty::SetRidableObjectState(local_14,local_1c,local_10);
          if (cVar1 == '\x01') {
            CUser::SendCmdOkPacket(param_1,0x13d);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x13d,0x13);
            uVar3 = 0;
          }
        }
      }
      else {
        uVar3 = LineFunc(0xe2a7,
                         "virtual int Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe2a4,
                       "virtual int Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

