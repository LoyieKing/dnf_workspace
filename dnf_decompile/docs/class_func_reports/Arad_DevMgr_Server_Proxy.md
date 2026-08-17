# Arad_DevMgr_Server_Proxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Arad_DevMgr_Server_Proxy

```asm
// === 0818dd78 Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy  [0x0818dd78-0x818ddab] ===
 818dd78:	55                   	push   %ebp
 818dd79:	89 e5                	mov    %esp,%ebp
 818dd7b:	83 ec 18             	sub    $0x18,%esp
 818dd7e:	8b 45 08             	mov    0x8(%ebp),%eax
 818dd81:	8b 55 10             	mov    0x10(%ebp),%edx
 818dd84:	89 10                	mov    %edx,(%eax)
 818dd86:	8b 45 08             	mov    0x8(%ebp),%eax
 818dd89:	8d 50 04             	lea    0x4(%eax),%edx
 818dd8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 818dd8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 818dd93:	89 14 24             	mov    %edx,(%esp)
 818dd96:	e8 15 9c 57 00       	call   87079b0 <_ZNSsC1ERKSs>
 818dd9b:	8b 45 08             	mov    0x8(%ebp),%eax
 818dd9e:	83 c0 08             	add    $0x8,%eax
 818dda1:	89 04 24             	mov    %eax,(%esp)
 818dda4:	e8 b7 01 00 00       	call   818df60 <_ZN8CNetworkILi6144ELi100000EEC1Ev>
 818dda9:	c9                   	leave
 818ddaa:	c3                   	ret
 818ddab:	90                   	nop

```

```c
// Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy @ 0x818dd78

/* Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::string, int) */

void __thiscall
Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy
          (Arad_DevMgr_Server_Proxy *this,string param_1,int param_2)

{
  *(int *)this = param_2;
  std::string::string((string *)(this + 4),(string *)param_1._M_dataplus._M_p);
  CNetwork<6144,100000>::CNetwork((CNetwork<6144,100000> *)(this + 8));
  return;
}

```

---

## disconnect

```asm
// === 0818de2a Arad_DevMgr_Server_Proxy::disconnect  [0x0818de2a-0x818de3f] ===
 818de2a:	55                   	push   %ebp
 818de2b:	89 e5                	mov    %esp,%ebp
 818de2d:	83 ec 18             	sub    $0x18,%esp
 818de30:	8b 45 08             	mov    0x8(%ebp),%eax
 818de33:	83 c0 08             	add    $0x8,%eax
 818de36:	89 04 24             	mov    %eax,(%esp)
 818de39:	e8 c2 02 00 00       	call   818e100 <_ZN8CNetworkILi6144ELi100000EE10disconnectEv>
 818de3e:	c9                   	leave
 818de3f:	c3                   	ret

```

```c
// Arad_DevMgr_Server_Proxy::disconnect @ 0x818de2a

/* Arad_DevMgr_Server_Proxy::disconnect() */

void __thiscall Arad_DevMgr_Server_Proxy::disconnect(Arad_DevMgr_Server_Proxy *this)

{
  CNetwork<6144,100000>::disconnect((CNetwork<6144,100000> *)(this + 8));
  return;
}

```

---

## init

```asm
// === 0818ddb6 Arad_DevMgr_Server_Proxy::init  [0x0818ddb6-0x818de29] ===
 818ddb6:	55                   	push   %ebp
 818ddb7:	89 e5                	mov    %esp,%ebp
 818ddb9:	53                   	push   %ebx
 818ddba:	83 ec 14             	sub    $0x14,%esp
 818ddbd:	8b 45 08             	mov    0x8(%ebp),%eax
 818ddc0:	8b 40 08             	mov    0x8(%eax),%eax
 818ddc3:	85 c0                	test   %eax,%eax
 818ddc5:	79 58                	jns    818de1f <_ZN24Arad_DevMgr_Server_Proxy4initEv+0x69>
 818ddc7:	8b 45 08             	mov    0x8(%ebp),%eax
 818ddca:	83 c0 04             	add    $0x4,%eax
 818ddcd:	c7 44 24 04 60 5a b9 	movl   $0x8b95a60,0x4(%esp)
 818ddd4:	08 
 818ddd5:	89 04 24             	mov    %eax,(%esp)
 818ddd8:	e8 43 a9 57 00       	call   8708720 <_ZNSsaSEPKc>
 818dddd:	8b 45 08             	mov    0x8(%ebp),%eax
 818dde0:	c7 00 30 75 00 00    	movl   $0x7530,(%eax)
 818dde6:	8b 45 08             	mov    0x8(%ebp),%eax
 818dde9:	8b 18                	mov    (%eax),%ebx
 818ddeb:	8b 45 08             	mov    0x8(%ebp),%eax
 818ddee:	83 c0 04             	add    $0x4,%eax
 818ddf1:	89 04 24             	mov    %eax,(%esp)
 818ddf4:	e8 f7 86 57 00       	call   87064f0 <_ZNKSs5c_strEv>
 818ddf9:	8b 55 08             	mov    0x8(%ebp),%edx
 818ddfc:	83 c2 08             	add    $0x8,%edx
 818ddff:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818de03:	89 44 24 04          	mov    %eax,0x4(%esp)
 818de07:	89 14 24             	mov    %edx,(%esp)
 818de0a:	e8 ef 01 00 00       	call   818dffe <_ZN8CNetworkILi6144ELi100000EE22CreateConnectionSocketERiPKci>
 818de0f:	85 c0                	test   %eax,%eax
 818de11:	0f 94 c0             	sete   %al
 818de14:	84 c0                	test   %al,%al
 818de16:	74 07                	je     818de1f <_ZN24Arad_DevMgr_Server_Proxy4initEv+0x69>
 818de18:	b8 00 00 00 00       	mov    $0x0,%eax
 818de1d:	eb 05                	jmp    818de24 <_ZN24Arad_DevMgr_Server_Proxy4initEv+0x6e>
 818de1f:	b8 01 00 00 00       	mov    $0x1,%eax
 818de24:	83 c4 14             	add    $0x14,%esp
 818de27:	5b                   	pop    %ebx
 818de28:	5d                   	pop    %ebp
 818de29:	c3                   	ret

```

```c
// Arad_DevMgr_Server_Proxy::init @ 0x818ddb6

/* Arad_DevMgr_Server_Proxy::init() */

undefined4 __thiscall Arad_DevMgr_Server_Proxy::init(Arad_DevMgr_Server_Proxy *this)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(this + 8) < 0) {
    std::string::operator=((string *)(this + 4),"127.0.0.1");
    *(undefined4 *)this = 30000;
    iVar2 = *(int *)this;
    pcVar1 = (char *)std::string::c_str((string *)(this + 4));
    iVar2 = CNetwork<6144,100000>::CreateConnectionSocket((int *)(this + 8),pcVar1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

```

---

## open

```asm
// === 0818ddac Arad_DevMgr_Server_Proxy::open  [0x0818ddac-0x818ddb5] ===
 818ddac:	55                   	push   %ebp
 818ddad:	89 e5                	mov    %esp,%ebp
 818ddaf:	b8 01 00 00 00       	mov    $0x1,%eax
 818ddb4:	5d                   	pop    %ebp
 818ddb5:	c3                   	ret

```

```c
// Arad_DevMgr_Server_Proxy::open @ 0x818ddac

/* Arad_DevMgr_Server_Proxy::open() */

undefined4 Arad_DevMgr_Server_Proxy::open(void)

{
  return 1;
}

```

---

## recv

```asm
// === 0818de40 Arad_DevMgr_Server_Proxy::recv  [0x0818de40-0x818ded1] ===
 818de40:	55                   	push   %ebp
 818de41:	89 e5                	mov    %esp,%ebp
 818de43:	83 ec 38             	sub    $0x38,%esp
 818de46:	8b 45 08             	mov    0x8(%ebp),%eax
 818de49:	83 c0 08             	add    $0x8,%eax
 818de4c:	89 04 24             	mov    %eax,(%esp)
 818de4f:	e8 20 03 00 00       	call   818e174 <_ZN8CNetworkILi6144ELi100000EE11recv_packetEv>
 818de54:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818de57:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818de5b:	7e 56                	jle    818deb3 <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x73>
 818de5d:	8b 45 08             	mov    0x8(%ebp),%eax
 818de60:	8d 50 08             	lea    0x8(%eax),%edx
 818de63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818de66:	89 44 24 04          	mov    %eax,0x4(%esp)
 818de6a:	89 14 24             	mov    %edx,(%esp)
 818de6d:	e8 56 04 00 00       	call   818e2c8 <_ZN8CNetworkILi6144ELi100000EE20Parsing_ServerPacketEi>
 818de72:	83 f0 01             	xor    $0x1,%eax
 818de75:	84 c0                	test   %al,%al
 818de77:	74 33                	je     818deac <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x6c>
 818de79:	c7 44 24 10 6a 5a b9 	movl   $0x8b95a6a,0x10(%esp)
 818de80:	08 
 818de81:	c7 44 24 0c 34 00 00 	movl   $0x34,0xc(%esp)
 818de88:	00 
 818de89:	c7 44 24 08 1c 67 b9 	movl   $0x8b9671c,0x8(%esp)
 818de90:	08 
 818de91:	c7 44 24 04 88 5a b9 	movl   $0x8b95a88,0x4(%esp)
 818de98:	08 
 818de99:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818dea0:	e8 65 5d 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818dea5:	b8 00 00 00 00       	mov    $0x0,%eax
 818deaa:	eb 24                	jmp    818ded0 <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x90>
 818deac:	b8 01 00 00 00       	mov    $0x1,%eax
 818deb1:	eb 1d                	jmp    818ded0 <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x90>
 818deb3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818deb7:	7f 12                	jg     818decb <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x8b>
 818deb9:	8b 45 08             	mov    0x8(%ebp),%eax
 818debc:	89 04 24             	mov    %eax,(%esp)
 818debf:	e8 66 ff ff ff       	call   818de2a <_ZN24Arad_DevMgr_Server_Proxy10disconnectEv>
 818dec4:	b8 00 00 00 00       	mov    $0x0,%eax
 818dec9:	eb 05                	jmp    818ded0 <_ZN24Arad_DevMgr_Server_Proxy4recvEv+0x90>
 818decb:	b8 01 00 00 00       	mov    $0x1,%eax
 818ded0:	c9                   	leave
 818ded1:	c3                   	ret

```

```c
// Arad_DevMgr_Server_Proxy::recv @ 0x818de40

/* Arad_DevMgr_Server_Proxy::recv() */

undefined4 __thiscall Arad_DevMgr_Server_Proxy::recv(Arad_DevMgr_Server_Proxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<6144,100000>::recv_packet((CNetwork<6144,100000> *)(this + 8));
  if (iVar2 < 1) {
    if (iVar2 < 1) {
      disconnect(this);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = CNetwork<6144,100000>::Parsing_ServerPacket((CNetwork<6144,100000> *)(this + 8),iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DevMgr_Server_Proxy.cpp","recv",0x34,
                 "Monitor Recv Parsing Err!!!");
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## send

```asm
// === 0818ded2 Arad_DevMgr_Server_Proxy::send  [0x0818ded2-0x818df03] ===
 818ded2:	55                   	push   %ebp
 818ded3:	89 e5                	mov    %esp,%ebp
 818ded5:	83 ec 18             	sub    $0x18,%esp
 818ded8:	8b 45 08             	mov    0x8(%ebp),%eax
 818dedb:	83 c0 08             	add    $0x8,%eax
 818dede:	89 04 24             	mov    %eax,(%esp)
 818dee1:	e8 0e 06 00 00       	call   818e4f4 <_ZN8CNetworkILi6144ELi100000EE11send_packetEv>
 818dee6:	c1 e8 1f             	shr    $0x1f,%eax
 818dee9:	84 c0                	test   %al,%al
 818deeb:	74 07                	je     818def4 <_ZN24Arad_DevMgr_Server_Proxy4sendEPci+0x22>
 818deed:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818def2:	eb 0e                	jmp    818df02 <_ZN24Arad_DevMgr_Server_Proxy4sendEPci+0x30>
 818def4:	8b 45 08             	mov    0x8(%ebp),%eax
 818def7:	83 c0 08             	add    $0x8,%eax
 818defa:	89 04 24             	mov    %eax,(%esp)
 818defd:	e8 9e 08 00 00       	call   818e7a0 <_ZN8CNetworkILi6144ELi100000EE17GetRemainSendSizeEv>
 818df02:	c9                   	leave
 818df03:	c3                   	ret

```

```c
// Arad_DevMgr_Server_Proxy::send @ 0x818ded2

/* Arad_DevMgr_Server_Proxy::send(char*, int) */

undefined4 Arad_DevMgr_Server_Proxy::send(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CNetwork<6144,100000>::send_packet((CNetwork<6144,100000> *)(param_1 + 8));
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = CNetwork<6144,100000>::GetRemainSendSize((CNetwork<6144,100000> *)(param_1 + 8));
  }
  return uVar2;
}

```

