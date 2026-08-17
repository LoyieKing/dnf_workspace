# CSchoolServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CSchoolServerProxy

```asm
// === 08471e24 CSchoolServerProxy::CSchoolServerProxy  [0x08471e24-0x8471e79] ===
 8471e24:	55                   	push   %ebp
 8471e25:	89 e5                	mov    %esp,%ebp
 8471e27:	56                   	push   %esi
 8471e28:	53                   	push   %ebx
 8471e29:	83 ec 10             	sub    $0x10,%esp
 8471e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8471e2f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8471e32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8471e36:	89 04 24             	mov    %eax,(%esp)
 8471e39:	e8 72 5b 29 00       	call   87079b0 <_ZNSsC1ERKSs>
 8471e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8471e41:	8b 55 10             	mov    0x10(%ebp),%edx
 8471e44:	89 50 04             	mov    %edx,0x4(%eax)
 8471e47:	8b 45 08             	mov    0x8(%ebp),%eax
 8471e4a:	83 c0 08             	add    $0x8,%eax
 8471e4d:	89 04 24             	mov    %eax,(%esp)
 8471e50:	e8 c3 16 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 8471e55:	eb 1b                	jmp    8471e72 <_ZN18CSchoolServerProxyC1ESsi+0x4e>
 8471e57:	89 d3                	mov    %edx,%ebx
 8471e59:	89 c6                	mov    %eax,%esi
 8471e5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8471e5e:	89 04 24             	mov    %eax,(%esp)
 8471e61:	e8 7a 5d 29 00       	call   8707be0 <_ZNSsD1Ev>
 8471e66:	89 f0                	mov    %esi,%eax
 8471e68:	89 da                	mov    %ebx,%edx
 8471e6a:	89 04 24             	mov    %eax,(%esp)
 8471e6d:	e8 de 18 67 00       	call   8ae3750 <_Unwind_Resume>
 8471e72:	83 c4 10             	add    $0x10,%esp
 8471e75:	5b                   	pop    %ebx
 8471e76:	5e                   	pop    %esi
 8471e77:	5d                   	pop    %ebp
 8471e78:	c3                   	ret
 8471e79:	90                   	nop

```

```c
// CSchoolServerProxy::CSchoolServerProxy @ 0x8471e24

/* CSchoolServerProxy::CSchoolServerProxy(std::string, int) */

void __thiscall
CSchoolServerProxy::CSchoolServerProxy(CSchoolServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08471e50 to 08471e54 has its CatchHandler @ 08471e57 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}

```

---

## Init

```asm
// === 08471e7a CSchoolServerProxy::Init  [0x08471e7a-0x8471ed1] ===
 8471e7a:	55                   	push   %ebp
 8471e7b:	89 e5                	mov    %esp,%ebp
 8471e7d:	83 ec 28             	sub    $0x28,%esp
 8471e80:	8b 45 08             	mov    0x8(%ebp),%eax
 8471e83:	83 c0 08             	add    $0x8,%eax
 8471e86:	89 04 24             	mov    %eax,(%esp)
 8471e89:	e8 0c 18 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 8471e8e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8471e91:	0f 94 c0             	sete   %al
 8471e94:	84 c0                	test   %al,%al
 8471e96:	74 33                	je     8471ecb <_ZN18CSchoolServerProxy4InitEv+0x51>
 8471e98:	c7 44 24 10 c0 cc c6 	movl   $0x8c6ccc0,0x10(%esp)
 8471e9f:	08 
 8471ea0:	c7 44 24 0c 3c 00 00 	movl   $0x3c,0xc(%esp)
 8471ea7:	00 
 8471ea8:	c7 44 24 08 20 d9 c6 	movl   $0x8c6d920,0x8(%esp)
 8471eaf:	08 
 8471eb0:	c7 44 24 04 f9 cc c6 	movl   $0x8c6ccf9,0x4(%esp)
 8471eb7:	08 
 8471eb8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8471ebf:	e8 46 1d 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8471ec4:	b8 00 00 00 00       	mov    $0x0,%eax
 8471ec9:	eb 05                	jmp    8471ed0 <_ZN18CSchoolServerProxy4InitEv+0x56>
 8471ecb:	b8 01 00 00 00       	mov    $0x1,%eax
 8471ed0:	c9                   	leave
 8471ed1:	c3                   	ret

```

```c
// CSchoolServerProxy::Init @ 0x8471e7a

/* CSchoolServerProxy::Init() */

bool __thiscall CSchoolServerProxy::Init(CSchoolServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_SchoolServerProxy.cpp","bool CSchoolServerProxy::Init()",0x3c,
               "[CSchoolServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}

```

---

## SendPacket

```asm
// === 08471ed2 CSchoolServerProxy::SendPacket  [0x08471ed2-0x8471f11] ===
 8471ed2:	55                   	push   %ebp
 8471ed3:	89 e5                	mov    %esp,%ebp
 8471ed5:	83 ec 28             	sub    $0x28,%esp
 8471ed8:	8b 45 08             	mov    0x8(%ebp),%eax
 8471edb:	89 04 24             	mov    %eax,(%esp)
 8471ede:	e8 0d 46 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 8471ee3:	8b 55 08             	mov    0x8(%ebp),%edx
 8471ee6:	8b 52 04             	mov    0x4(%edx),%edx
 8471ee9:	0f b7 d2             	movzwl %dx,%edx
 8471eec:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8471eef:	83 c1 08             	add    $0x8,%ecx
 8471ef2:	89 44 24 10          	mov    %eax,0x10(%esp)
 8471ef6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8471efa:	8b 45 10             	mov    0x10(%ebp),%eax
 8471efd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8471f01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471f04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471f08:	89 0c 24             	mov    %ecx,(%esp)
 8471f0b:	e8 58 1c 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 8471f10:	c9                   	leave
 8471f11:	c3                   	ret

```

```c
// CSchoolServerProxy::SendPacket @ 0x8471ed2

/* CSchoolServerProxy::SendPacket(char*, int) */

void __thiscall CSchoolServerProxy::SendPacket(CSchoolServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  return;
}

```

