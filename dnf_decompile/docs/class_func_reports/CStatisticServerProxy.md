# CStatisticServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CStatisticServerProxy

```asm
// === 08471f84 CStatisticServerProxy::CStatisticServerProxy  [0x08471f84-0x8471fd9] ===
 8471f84:	55                   	push   %ebp
 8471f85:	89 e5                	mov    %esp,%ebp
 8471f87:	56                   	push   %esi
 8471f88:	53                   	push   %ebx
 8471f89:	83 ec 10             	sub    $0x10,%esp
 8471f8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8471f8f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8471f92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8471f96:	89 04 24             	mov    %eax,(%esp)
 8471f99:	e8 12 5a 29 00       	call   87079b0 <_ZNSsC1ERKSs>
 8471f9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8471fa1:	8b 55 10             	mov    0x10(%ebp),%edx
 8471fa4:	89 50 04             	mov    %edx,0x4(%eax)
 8471fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8471faa:	83 c0 08             	add    $0x8,%eax
 8471fad:	89 04 24             	mov    %eax,(%esp)
 8471fb0:	e8 63 15 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 8471fb5:	eb 1b                	jmp    8471fd2 <_ZN21CStatisticServerProxyC1ESsi+0x4e>
 8471fb7:	89 d3                	mov    %edx,%ebx
 8471fb9:	89 c6                	mov    %eax,%esi
 8471fbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8471fbe:	89 04 24             	mov    %eax,(%esp)
 8471fc1:	e8 1a 5c 29 00       	call   8707be0 <_ZNSsD1Ev>
 8471fc6:	89 f0                	mov    %esi,%eax
 8471fc8:	89 da                	mov    %ebx,%edx
 8471fca:	89 04 24             	mov    %eax,(%esp)
 8471fcd:	e8 7e 17 67 00       	call   8ae3750 <_Unwind_Resume>
 8471fd2:	83 c4 10             	add    $0x10,%esp
 8471fd5:	5b                   	pop    %ebx
 8471fd6:	5e                   	pop    %esi
 8471fd7:	5d                   	pop    %ebp
 8471fd8:	c3                   	ret
 8471fd9:	90                   	nop

```

```c
// CStatisticServerProxy::CStatisticServerProxy @ 0x8471f84

/* CStatisticServerProxy::CStatisticServerProxy(std::string, int) */

void __thiscall
CStatisticServerProxy::CStatisticServerProxy(CStatisticServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08471fb0 to 08471fb4 has its CatchHandler @ 08471fb7 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}

```

---

## Init

```asm
// === 08471fda CStatisticServerProxy::Init  [0x08471fda-0x8472043] ===
 8471fda:	55                   	push   %ebp
 8471fdb:	89 e5                	mov    %esp,%ebp
 8471fdd:	83 ec 28             	sub    $0x28,%esp
 8471fe0:	8b 45 08             	mov    0x8(%ebp),%eax
 8471fe3:	8b 40 04             	mov    0x4(%eax),%eax
 8471fe6:	85 c0                	test   %eax,%eax
 8471fe8:	75 07                	jne    8471ff1 <_ZN21CStatisticServerProxy4InitEv+0x17>
 8471fea:	b8 01 00 00 00       	mov    $0x1,%eax
 8471fef:	eb 50                	jmp    8472041 <_ZN21CStatisticServerProxy4InitEv+0x67>
 8471ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 8471ff4:	83 c0 08             	add    $0x8,%eax
 8471ff7:	89 04 24             	mov    %eax,(%esp)
 8471ffa:	e8 9b 16 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 8471fff:	83 f8 ff             	cmp    $0xffffffff,%eax
 8472002:	0f 94 c0             	sete   %al
 8472005:	84 c0                	test   %al,%al
 8472007:	74 33                	je     847203c <_ZN21CStatisticServerProxy4InitEv+0x62>
 8472009:	c7 44 24 10 60 d9 c6 	movl   $0x8c6d960,0x10(%esp)
 8472010:	08 
 8472011:	c7 44 24 0c 67 02 00 	movl   $0x267,0xc(%esp)
 8472018:	00 
 8472019:	c7 44 24 08 c0 e5 c6 	movl   $0x8c6e5c0,0x8(%esp)
 8472020:	08 
 8472021:	c7 44 24 04 9c d9 c6 	movl   $0x8c6d99c,0x4(%esp)
 8472028:	08 
 8472029:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8472030:	e8 d5 1b 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8472035:	b8 00 00 00 00       	mov    $0x0,%eax
 847203a:	eb 05                	jmp    8472041 <_ZN21CStatisticServerProxy4InitEv+0x67>
 847203c:	b8 01 00 00 00       	mov    $0x1,%eax
 8472041:	c9                   	leave
 8472042:	c3                   	ret
 8472043:	90                   	nop

```

```c
// CStatisticServerProxy::Init @ 0x8471fda

/* CStatisticServerProxy::Init() */

undefined4 __thiscall CStatisticServerProxy::Init(CStatisticServerProxy *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 4) == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"DF_StatisticServerProxy.cpp","bool CStatisticServerProxy::Init()",0x267,
                 "[CStatisticServerProxy::Init] Can\'t init udp client socket\n");
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## SendFileStatistic

```asm
// === 08472092 CStatisticServerProxy::SendFileStatistic  [0x08472092-0x84720b3] ===
 8472092:	55                   	push   %ebp
 8472093:	89 e5                	mov    %esp,%ebp
 8472095:	83 ec 18             	sub    $0x18,%esp
 8472098:	c7 44 24 08 b8 d9 c6 	movl   $0x8c6d9b8,0x8(%esp)
 847209f:	08 
 84720a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84720a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84720a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84720aa:	89 04 24             	mov    %eax,(%esp)
 84720ad:	e8 02 00 00 00       	call   84720b4 <_ZN21CStatisticServerProxy17SendFileStatisticEPKcS1_>
 84720b2:	c9                   	leave
 84720b3:	c3                   	ret

```

```c
// CStatisticServerProxy::SendFileStatistic @ 0x8472092

/* CStatisticServerProxy::SendFileStatistic(char const*) */

void __thiscall CStatisticServerProxy::SendFileStatistic(CStatisticServerProxy *this,char *param_1)

{
  SendFileStatistic(this,param_1,"");
  return;
}

```

---

## SendFileStatistic_084720b4

```asm
// === 084720b4 CStatisticServerProxy::SendFileStatistic  [0x084720b4-0x8472121] ===
 84720b4:	55                   	push   %ebp
 84720b5:	89 e5                	mov    %esp,%ebp
 84720b7:	81 ec 28 09 00 00    	sub    $0x928,%esp
 84720bd:	8d 85 ee f6 ff ff    	lea    -0x912(%ebp),%eax
 84720c3:	89 04 24             	mov    %eax,(%esp)
 84720c6:	e8 b3 00 00 00       	call   847217e <_ZN21Packet_File_StatisticC1Ev>
 84720cb:	8b 45 10             	mov    0x10(%ebp),%eax
 84720ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84720d2:	8d 85 ee f6 ff ff    	lea    -0x912(%ebp),%eax
 84720d8:	83 c0 0a             	add    $0xa,%eax
 84720db:	89 04 24             	mov    %eax,(%esp)
 84720de:	e8 0d be c0 ff       	call   807def0 <strcpy@plt>
 84720e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84720e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84720ea:	8d 85 ee f6 ff ff    	lea    -0x912(%ebp),%eax
 84720f0:	05 0a 01 00 00       	add    $0x10a,%eax
 84720f5:	89 04 24             	mov    %eax,(%esp)
 84720f8:	e8 f3 bd c0 ff       	call   807def0 <strcpy@plt>
 84720fd:	0f b7 85 f0 f6 ff ff 	movzwl -0x910(%ebp),%eax
 8472104:	0f b7 d0             	movzwl %ax,%edx
 8472107:	8d 85 ee f6 ff ff    	lea    -0x912(%ebp),%eax
 847210d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8472111:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472115:	8b 45 08             	mov    0x8(%ebp),%eax
 8472118:	89 04 24             	mov    %eax,(%esp)
 847211b:	e8 24 ff ff ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8472120:	c9                   	leave
 8472121:	c3                   	ret

```

```c
// CStatisticServerProxy::SendFileStatistic @ 0x84720b4

/* CStatisticServerProxy::SendFileStatistic(char const*, char const*) */

void __thiscall
CStatisticServerProxy::SendFileStatistic(CStatisticServerProxy *this,char *param_1,char *param_2)

{
  Packet_File_Statistic local_916 [2];
  ushort local_914;
  char acStack_90c [256];
  char acStack_80c [2056];
  
  Packet_File_Statistic::Packet_File_Statistic(local_916);
  strcpy(acStack_90c,param_2);
  strcpy(acStack_80c,param_1);
  SendPacket(this,(char *)local_916,(uint)local_914);
  return;
}

```

---

## SendPacket

```asm
// === 08472044 CStatisticServerProxy::SendPacket  [0x08472044-0x8472091] ===
 8472044:	55                   	push   %ebp
 8472045:	89 e5                	mov    %esp,%ebp
 8472047:	83 ec 28             	sub    $0x28,%esp
 847204a:	8b 45 08             	mov    0x8(%ebp),%eax
 847204d:	8b 40 04             	mov    0x4(%eax),%eax
 8472050:	85 c0                	test   %eax,%eax
 8472052:	74 3a                	je     847208e <_ZN21CStatisticServerProxy10SendPacketEPci+0x4a>
 8472054:	8b 45 08             	mov    0x8(%ebp),%eax
 8472057:	89 04 24             	mov    %eax,(%esp)
 847205a:	e8 91 44 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 847205f:	8b 55 08             	mov    0x8(%ebp),%edx
 8472062:	8b 52 04             	mov    0x4(%edx),%edx
 8472065:	0f b7 d2             	movzwl %dx,%edx
 8472068:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847206b:	83 c1 08             	add    $0x8,%ecx
 847206e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8472072:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8472076:	8b 45 10             	mov    0x10(%ebp),%eax
 8472079:	89 44 24 08          	mov    %eax,0x8(%esp)
 847207d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472080:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472084:	89 0c 24             	mov    %ecx,(%esp)
 8472087:	e8 dc 1a 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 847208c:	eb 01                	jmp    847208f <_ZN21CStatisticServerProxy10SendPacketEPci+0x4b>
 847208e:	90                   	nop
 847208f:	c9                   	leave
 8472090:	c3                   	ret
 8472091:	90                   	nop

```

```c
// CStatisticServerProxy::SendPacket @ 0x8472044

/* CStatisticServerProxy::SendPacket(char*, int) */

void __thiscall
CStatisticServerProxy::SendPacket(CStatisticServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  }
  return;
}

```

