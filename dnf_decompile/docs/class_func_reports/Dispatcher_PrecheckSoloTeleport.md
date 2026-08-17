# Dispatcher_PrecheckSoloTeleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e1a9e Dispatcher_PrecheckSoloTeleport::check_error  [0x081e1a9e-0x81e1acb] ===
 81e1a9e:	55                   	push   %ebp
 81e1a9f:	89 e5                	mov    %esp,%ebp
 81e1aa1:	83 ec 28             	sub    $0x28,%esp
 81e1aa4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e1aa8:	75 07                	jne    81e1ab1 <_ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x13>
 81e1aaa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1aaf:	eb 18                	jmp    81e1ac9 <_ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81e1ab1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e1ab8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1abb:	89 04 24             	mov    %eax,(%esp)
 81e1abe:	e8 97 21 0a 00       	call   8283c5a <_ZN8Teleport10check_ruleEP5CUser>
 81e1ac3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1ac6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1ac9:	c9                   	leave
 81e1aca:	c3                   	ret
 81e1acb:	90                   	nop

```

```c
// Dispatcher_PrecheckSoloTeleport::check_error @ 0x81e1a9e

/* Dispatcher_PrecheckSoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_PrecheckSoloTeleport::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Teleport::check_rule((CUser *)param_2);
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e19ca Dispatcher_PrecheckSoloTeleport::process  [0x081e19ca-0x81e1a9d] ===
 81e19ca:	55                   	push   %ebp
 81e19cb:	89 e5                	mov    %esp,%ebp
 81e19cd:	53                   	push   %ebx
 81e19ce:	83 ec 44             	sub    $0x44,%esp
 81e19d1:	8b 45 14             	mov    0x14(%ebp),%eax
 81e19d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e19d7:	8b 45 10             	mov    0x10(%ebp),%eax
 81e19da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e19dd:	8b 45 14             	mov    0x14(%ebp),%eax
 81e19e0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e19e4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e19e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e19eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e19ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e19f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81e19f5:	89 04 24             	mov    %eax,(%esp)
 81e19f8:	e8 a1 00 00 00       	call   81e1a9e <_ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81e19fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1a00:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1a04:	7e 0b                	jle    81e1a11 <_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x47>
 81e1a06:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1a09:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e1a0c:	89 50 04             	mov    %edx,0x4(%eax)
 81e1a0f:	eb 0d                	jmp    81e1a1e <_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x54>
 81e1a11:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1a15:	79 07                	jns    81e1a1e <_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x54>
 81e1a17:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1a1c:	eb 7a                	jmp    81e1a98 <_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xce>
 81e1a1e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1a22:	75 6f                	jne    81e1a93 <_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xc9>
 81e1a24:	8d 45 c9             	lea    -0x37(%ebp),%eax
 81e1a27:	89 04 24             	mov    %eax,(%esp)
 81e1a2a:	e8 a3 ab 04 00       	call   822c5d2 <_ZN34Packet_Monitor_Request_Charac_InfoC1Ev>
 81e1a2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1a32:	8b 40 2c             	mov    0x2c(%eax),%eax
 81e1a35:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e1a38:	83 c2 0d             	add    $0xd,%edx
 81e1a3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e1a3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1a43:	8d 45 c9             	lea    -0x37(%ebp),%eax
 81e1a46:	83 c0 0a             	add    $0xa,%eax
 81e1a49:	89 04 24             	mov    %eax,(%esp)
 81e1a4c:	e8 7f be e9 ff       	call   807d8d0 <strncpy@plt>
 81e1a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1a54:	89 04 24             	mov    %eax,(%esp)
 81e1a57:	e8 f2 a1 ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81e1a5c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e1a5f:	8d 5d c9             	lea    -0x37(%ebp),%ebx
 81e1a62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1a65:	89 04 24             	mov    %eax,(%esp)
 81e1a68:	e8 23 a2 ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e1a6d:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81e1a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1a77:	89 14 24             	mov    %edx,(%esp)
 81e1a7a:	e8 0b 06 f3 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81e1a7f:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 81e1a86:	00 
 81e1a87:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e1a8b:	89 04 24             	mov    %eax,(%esp)
 81e1a8e:	e8 61 f3 28 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81e1a93:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1a98:	83 c4 44             	add    $0x44,%esp
 81e1a9b:	5b                   	pop    %ebx
 81e1a9c:	5d                   	pop    %ebp
 81e1a9d:	c3                   	ret

```

```c
// Dispatcher_PrecheckSoloTeleport::process @ 0x81e19ca

/* Dispatcher_PrecheckSoloTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PrecheckSoloTeleport::process
          (Dispatcher_PrecheckSoloTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Request_Charac_Info local_3b [10];
  char acStack_31 [21];
  undefined4 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  local_14 = param_2;
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(local_18 + 4) = local_10;
  }
  if (local_10 == 0) {
    Packet_Monitor_Request_Charac_Info::Packet_Monitor_Request_Charac_Info(local_3b);
    strncpy(acStack_31,(char *)(local_14 + 0xd),*(size_t *)(local_14 + 0x2c));
    local_1c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar1 = CUser::GetServerGroup(param_1);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this_00,(char *)local_3b,0x23);
  }
  return 0;
}

```

---

## read

```asm
// === 081e1920 Dispatcher_PrecheckSoloTeleport::read  [0x081e1920-0x81e19c9] ===
 81e1920:	55                   	push   %ebp
 81e1921:	89 e5                	mov    %esp,%ebp
 81e1923:	83 ec 28             	sub    $0x28,%esp
 81e1926:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1929:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e192c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e192f:	83 c0 2c             	add    $0x2c,%eax
 81e1932:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1936:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1939:	89 04 24             	mov    %eax,(%esp)
 81e193c:	e8 af b7 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e1941:	83 f0 01             	xor    $0x1,%eax
 81e1944:	84 c0                	test   %al,%al
 81e1946:	74 26                	je     81e196e <_ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE+0x4e>
 81e1948:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e194f:	00 
 81e1950:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1957:	00 
 81e1958:	c7 44 24 04 e0 17 bd 	movl   $0x8bd17e0,0x4(%esp)
 81e195f:	08 
 81e1960:	c7 04 24 2d 57 00 00 	movl   $0x572d,(%esp)
 81e1967:	e8 6b ef 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e196c:	eb 59                	jmp    81e19c7 <_ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE+0xa7>
 81e196e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1971:	8b 40 2c             	mov    0x2c(%eax),%eax
 81e1974:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e1977:	83 c2 0d             	add    $0xd,%edx
 81e197a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e197e:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81e1985:	00 
 81e1986:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e198a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e198d:	89 04 24             	mov    %eax,(%esp)
 81e1990:	e8 27 b9 3a 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81e1995:	83 f0 01             	xor    $0x1,%eax
 81e1998:	84 c0                	test   %al,%al
 81e199a:	74 26                	je     81e19c2 <_ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE+0xa2>
 81e199c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e19a3:	00 
 81e19a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e19ab:	00 
 81e19ac:	c7 44 24 04 e0 17 bd 	movl   $0x8bd17e0,0x4(%esp)
 81e19b3:	08 
 81e19b4:	c7 04 24 30 57 00 00 	movl   $0x5730,(%esp)
 81e19bb:	e8 17 ef 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e19c0:	eb 05                	jmp    81e19c7 <_ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE+0xa7>
 81e19c2:	b8 00 00 00 00       	mov    $0x0,%eax
 81e19c7:	c9                   	leave
 81e19c8:	c3                   	ret
 81e19c9:	90                   	nop

```

```c
// Dispatcher_PrecheckSoloTeleport::read @ 0x81e1920

/* Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PrecheckSoloTeleport::read
          (Dispatcher_PrecheckSoloTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x2c));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x1e,*(int *)(param_2 + 0x2c));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5730,
                       "virtual int Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x572d,
                     "virtual int Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e1acc Dispatcher_PrecheckSoloTeleport::send  [0x081e1acc-0x81e1b9b] ===
 81e1acc:	55                   	push   %ebp
 81e1acd:	89 e5                	mov    %esp,%ebp
 81e1acf:	56                   	push   %esi
 81e1ad0:	53                   	push   %ebx
 81e1ad1:	83 ec 20             	sub    $0x20,%esp
 81e1ad4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1ad7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1ada:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1add:	8b 40 04             	mov    0x4(%eax),%eax
 81e1ae0:	85 c0                	test   %eax,%eax
 81e1ae2:	0f 84 ab 00 00 00    	je     81e1b93 <_ZN31Dispatcher_PrecheckSoloTeleport4sendEP5CUserR9ParamBase+0xc7>
 81e1ae8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1aeb:	89 04 24             	mov    %eax,(%esp)
 81e1aee:	e8 59 c2 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e1af3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1af6:	89 04 24             	mov    %eax,(%esp)
 81e1af9:	e8 e8 9d ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e1afe:	c7 44 24 08 d6 01 00 	movl   $0x1d6,0x8(%esp)
 81e1b05:	00 
 81e1b06:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e1b0d:	00 
 81e1b0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b11:	89 04 24             	mov    %eax,(%esp)
 81e1b14:	e8 e3 9d ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e1b19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e1b20:	00 
 81e1b21:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b24:	89 04 24             	mov    %eax,(%esp)
 81e1b27:	e8 f4 9d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e1b2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1b2f:	8b 40 04             	mov    0x4(%eax),%eax
 81e1b32:	0f be c0             	movsbl %al,%eax
 81e1b35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1b39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b3c:	89 04 24             	mov    %eax,(%esp)
 81e1b3f:	e8 dc 9d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e1b44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e1b4b:	00 
 81e1b4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b4f:	89 04 24             	mov    %eax,(%esp)
 81e1b52:	e8 01 9e ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e1b57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1b5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1b61:	89 04 24             	mov    %eax,(%esp)
 81e1b64:	e8 51 6a 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e1b69:	eb 1b                	jmp    81e1b86 <_ZN31Dispatcher_PrecheckSoloTeleport4sendEP5CUserR9ParamBase+0xba>
 81e1b6b:	89 d3                	mov    %edx,%ebx
 81e1b6d:	89 c6                	mov    %eax,%esi
 81e1b6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b72:	89 04 24             	mov    %eax,(%esp)
 81e1b75:	e8 06 c3 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e1b7a:	89 f0                	mov    %esi,%eax
 81e1b7c:	89 da                	mov    %ebx,%edx
 81e1b7e:	89 04 24             	mov    %eax,(%esp)
 81e1b81:	e8 ca 1b 90 00       	call   8ae3750 <_Unwind_Resume>
 81e1b86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1b89:	89 04 24             	mov    %eax,(%esp)
 81e1b8c:	e8 ef c2 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e1b91:	eb 01                	jmp    81e1b94 <_ZN31Dispatcher_PrecheckSoloTeleport4sendEP5CUserR9ParamBase+0xc8>
 81e1b93:	90                   	nop
 81e1b94:	83 c4 20             	add    $0x20,%esp
 81e1b97:	5b                   	pop    %ebx
 81e1b98:	5e                   	pop    %esi
 81e1b99:	5d                   	pop    %ebp
 81e1b9a:	c3                   	ret
 81e1b9b:	90                   	nop

```

```c
// Dispatcher_PrecheckSoloTeleport::send @ 0x81e1acc

/* Dispatcher_PrecheckSoloTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PrecheckSoloTeleport::send
          (Dispatcher_PrecheckSoloTeleport *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e1af9 to 081e1b68 has its CatchHandler @ 081e1b6b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1d6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

