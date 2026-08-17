# Dispatcher_QueryCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08205f68 Dispatcher_QueryCharacInfo::dispatch_sig  [0x08205f68-0x8206123] ===
 8205f68:	55                   	push   %ebp
 8205f69:	89 e5                	mov    %esp,%ebp
 8205f6b:	56                   	push   %esi
 8205f6c:	53                   	push   %ebx
 8205f6d:	83 ec 40             	sub    $0x40,%esp
 8205f70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205f73:	89 04 24             	mov    %eax,(%esp)
 8205f76:	e8 11 44 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8205f7b:	83 f8 02             	cmp    $0x2,%eax
 8205f7e:	7e 0f                	jle    8205f8f <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8205f80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205f83:	89 04 24             	mov    %eax,(%esp)
 8205f86:	e8 a7 a4 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8205f8b:	85 c0                	test   %eax,%eax
 8205f8d:	75 07                	jne    8205f96 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8205f8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8205f94:	eb 05                	jmp    8205f9b <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8205f96:	b8 00 00 00 00       	mov    $0x0,%eax
 8205f9b:	84 c0                	test   %al,%al
 8205f9d:	74 29                	je     8205fc8 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x60>
 8205f9f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205fa6:	00 
 8205fa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205fae:	00 
 8205faf:	c7 44 24 04 00 ed bc 	movl   $0x8bced00,0x4(%esp)
 8205fb6:	08 
 8205fb7:	c7 04 24 60 9f 00 00 	movl   $0x9f60,(%esp)
 8205fbe:	e8 14 a9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205fc3:	e9 55 01 00 00       	jmp    820611d <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x1b5>
 8205fc8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8205fcf:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8205fd2:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 8205fd7:	ba 00 00 00 00       	mov    $0x0,%edx
 8205fdc:	89 c1                	mov    %eax,%ecx
 8205fde:	83 e1 02             	and    $0x2,%ecx
 8205fe1:	85 c9                	test   %ecx,%ecx
 8205fe3:	74 09                	je     8205fee <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x86>
 8205fe5:	66 89 10             	mov    %dx,(%eax)
 8205fe8:	83 c0 02             	add    $0x2,%eax
 8205feb:	83 eb 02             	sub    $0x2,%ebx
 8205fee:	89 de                	mov    %ebx,%esi
 8205ff0:	83 e6 fc             	and    $0xfffffffc,%esi
 8205ff3:	b9 00 00 00 00       	mov    $0x0,%ecx
 8205ff8:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 8205ffb:	83 c1 04             	add    $0x4,%ecx
 8205ffe:	39 f1                	cmp    %esi,%ecx
 8206000:	72 f6                	jb     8205ff8 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x90>
 8206002:	01 c8                	add    %ecx,%eax
 8206004:	89 d9                	mov    %ebx,%ecx
 8206006:	83 e1 02             	and    $0x2,%ecx
 8206009:	85 c9                	test   %ecx,%ecx
 820600b:	74 06                	je     8206013 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0xab>
 820600d:	66 89 10             	mov    %dx,(%eax)
 8206010:	83 c0 02             	add    $0x2,%eax
 8206013:	89 d9                	mov    %ebx,%ecx
 8206015:	83 e1 01             	and    $0x1,%ecx
 8206018:	85 c9                	test   %ecx,%ecx
 820601a:	74 05                	je     8206021 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 820601c:	88 10                	mov    %dl,(%eax)
 820601e:	83 c0 01             	add    $0x1,%eax
 8206021:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8206024:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206028:	8b 45 10             	mov    0x10(%ebp),%eax
 820602b:	89 04 24             	mov    %eax,(%esp)
 820602e:	e8 bd 70 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8206033:	83 f0 01             	xor    $0x1,%eax
 8206036:	84 c0                	test   %al,%al
 8206038:	74 29                	je     8206063 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 820603a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206041:	00 
 8206042:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206049:	00 
 820604a:	c7 44 24 04 00 ed bc 	movl   $0x8bced00,0x4(%esp)
 8206051:	08 
 8206052:	c7 04 24 65 9f 00 00 	movl   $0x9f65,(%esp)
 8206059:	e8 79 a8 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820605e:	e9 ba 00 00 00       	jmp    820611d <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x1b5>
 8206063:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8206066:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820606a:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8206071:	00 
 8206072:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8206075:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206079:	8b 45 10             	mov    0x10(%ebp),%eax
 820607c:	89 04 24             	mov    %eax,(%esp)
 820607f:	e8 38 72 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8206084:	83 f0 01             	xor    $0x1,%eax
 8206087:	84 c0                	test   %al,%al
 8206089:	74 26                	je     82060b1 <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x149>
 820608b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206092:	00 
 8206093:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820609a:	00 
 820609b:	c7 44 24 04 00 ed bc 	movl   $0x8bced00,0x4(%esp)
 82060a2:	08 
 82060a3:	c7 04 24 66 9f 00 00 	movl   $0x9f66,(%esp)
 82060aa:	e8 28 a8 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82060af:	eb 6c                	jmp    820611d <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x1b5>
 82060b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82060b4:	89 04 24             	mov    %eax,(%esp)
 82060b7:	e8 6c af ef ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82060bc:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 82060c3:	00 
 82060c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82060c8:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 82060cb:	89 04 24             	mov    %eax,(%esp)
 82060ce:	e8 ed 87 e7 ff       	call   807e8c0 <strncmp@plt>
 82060d3:	85 c0                	test   %eax,%eax
 82060d5:	0f 94 c0             	sete   %al
 82060d8:	84 c0                	test   %al,%al
 82060da:	74 22                	je     82060fe <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x196>
 82060dc:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 82060e3:	00 
 82060e4:	c7 44 24 04 8b 00 00 	movl   $0x8b,0x4(%esp)
 82060eb:	00 
 82060ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 82060ef:	89 04 24             	mov    %eax,(%esp)
 82060f2:	e8 4b 5e 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82060f7:	b8 00 00 00 00       	mov    $0x0,%eax
 82060fc:	eb 1f                	jmp    820611d <_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf+0x1b5>
 82060fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206101:	89 04 24             	mov    %eax,(%esp)
 8206104:	e8 8d 2b ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8206109:	8d 55 d6             	lea    -0x2a(%ebp),%edx
 820610c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206110:	89 04 24             	mov    %eax,(%esp)
 8206113:	e8 00 0c 22 00       	call   8426d18 <_ZN21DB_ReqQueryCharacInfo11makeRequestEiPKc>
 8206118:	b8 00 00 00 00       	mov    $0x0,%eax
 820611d:	83 c4 40             	add    $0x40,%esp
 8206120:	5b                   	pop    %ebx
 8206121:	5e                   	pop    %esi
 8206122:	5d                   	pop    %ebp
 8206123:	c3                   	ret

```

```c
// Dispatcher_QueryCharacInfo::dispatch_sig @ 0x8205f68

/* WARNING: Removing unreachable block (ram,0x0820601c) */
/* Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QueryCharacInfo::dispatch_sig
          (Dispatcher_QueryCharacInfo *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_2e [30];
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar4 = LineFunc(0x9f60,
                     "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    local_10 = 0;
    pcVar5 = local_2e;
    uVar7 = 0x1e;
    bVar8 = ((uint)pcVar5 & 2) != 0;
    if (bVar8) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      pcVar5 = local_2e + 2;
      uVar7 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar1 = pcVar5 + uVar6;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar7 & 0xfffffffc));
    if (!bVar8) {
      (pcVar5 + uVar6)[0] = '\0';
      (pcVar5 + uVar6)[1] = '\0';
    }
    cVar2 = PacketBuf::get_int(param_2,&local_10);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_str(param_2,local_2e,0x1e,local_10);
      if (cVar2 == '\x01') {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        iVar3 = strncmp(local_2e,pcVar5,0x1d);
        if (iVar3 == 0) {
          CUser::SendCmdErrorPacket(param_1,0x8b,7);
          uVar4 = 0;
        }
        else {
          iVar3 = CUser::GetUID(param_1);
          DB_ReqQueryCharacInfo::makeRequest(iVar3,local_2e);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x9f66,
                         "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar4 = LineFunc(0x9f65,
                       "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar4;
}

```

