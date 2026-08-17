# Dispatcher_RequestBlackList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081ce046 Dispatcher_RequestBlackList::check_error  [0x081ce046-0x81ce06f] ===
 81ce046:	55                   	push   %ebp
 81ce047:	89 e5                	mov    %esp,%ebp
 81ce049:	83 ec 18             	sub    $0x18,%esp
 81ce04c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce04f:	89 04 24             	mov    %eax,(%esp)
 81ce052:	e8 35 c3 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ce057:	83 f8 02             	cmp    $0x2,%eax
 81ce05a:	0f 9e c0             	setle  %al
 81ce05d:	84 c0                	test   %al,%al
 81ce05f:	74 07                	je     81ce068 <_ZN27Dispatcher_RequestBlackList11check_errorEP5CUserR8MSG_BASE+0x22>
 81ce061:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce066:	eb 05                	jmp    81ce06d <_ZN27Dispatcher_RequestBlackList11check_errorEP5CUserR8MSG_BASE+0x27>
 81ce068:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce06d:	c9                   	leave
 81ce06e:	c3                   	ret
 81ce06f:	90                   	nop

```

```c
// Dispatcher_RequestBlackList::check_error @ 0x81ce046

/* Dispatcher_RequestBlackList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_RequestBlackList::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 < 3) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081ce070 Dispatcher_RequestBlackList::process  [0x081ce070-0x81ce151] ===
 81ce070:	55                   	push   %ebp
 81ce071:	89 e5                	mov    %esp,%ebp
 81ce073:	53                   	push   %ebx
 81ce074:	83 ec 34             	sub    $0x34,%esp
 81ce077:	8b 45 14             	mov    0x14(%ebp),%eax
 81ce07a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce07d:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce080:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce084:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce087:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce08b:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce08e:	89 04 24             	mov    %eax,(%esp)
 81ce091:	e8 b0 ff ff ff       	call   81ce046 <_ZN27Dispatcher_RequestBlackList11check_errorEP5CUserR8MSG_BASE>
 81ce096:	89 c2                	mov    %eax,%edx
 81ce098:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce09b:	89 50 04             	mov    %edx,0x4(%eax)
 81ce09e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce0a1:	8b 40 04             	mov    0x4(%eax),%eax
 81ce0a4:	85 c0                	test   %eax,%eax
 81ce0a6:	7e 0a                	jle    81ce0b2 <_ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81ce0a8:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce0ad:	e9 99 00 00 00       	jmp    81ce14b <_ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase+0xdb>
 81ce0b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce0b5:	8b 40 04             	mov    0x4(%eax),%eax
 81ce0b8:	85 c0                	test   %eax,%eax
 81ce0ba:	79 2f                	jns    81ce0eb <_ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81ce0bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce0bf:	89 04 24             	mov    %eax,(%esp)
 81ce0c2:	e8 a7 c2 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce0c7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ce0ca:	8b 52 04             	mov    0x4(%edx),%edx
 81ce0cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ce0d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ce0d5:	c7 44 24 04 00 46 bd 	movl   $0x8bd4600,0x4(%esp)
 81ce0dc:	08 
 81ce0dd:	c7 04 24 17 27 00 00 	movl   $0x2717,(%esp)
 81ce0e4:	e8 ee 27 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce0e9:	eb 60                	jmp    81ce14b <_ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase+0xdb>
 81ce0eb:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81ce0ee:	89 04 24             	mov    %eax,(%esp)
 81ce0f1:	e8 bc da 05 00       	call   822bbb2 <_ZN24Packet_Request_BlackListC1Ev>
 81ce0f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce0f9:	89 04 24             	mov    %eax,(%esp)
 81ce0fc:	e8 6d c2 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce101:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ce104:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce107:	89 04 24             	mov    %eax,(%esp)
 81ce10a:	e8 87 ab ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81ce10f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce112:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 81ce115:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce118:	89 04 24             	mov    %eax,(%esp)
 81ce11b:	e8 70 db ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81ce120:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81ce126:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce12a:	89 14 24             	mov    %edx,(%esp)
 81ce12d:	e8 58 3f f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81ce132:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81ce139:	00 
 81ce13a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ce13e:	89 04 24             	mov    %eax,(%esp)
 81ce141:	e8 ae 2c 2a 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81ce146:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce14b:	83 c4 34             	add    $0x34,%esp
 81ce14e:	5b                   	pop    %ebx
 81ce14f:	5d                   	pop    %ebp
 81ce150:	c3                   	ret
 81ce151:	90                   	nop

```

```c
// Dispatcher_RequestBlackList::process @ 0x81ce070

/* Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestBlackList::process
          (Dispatcher_RequestBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Request_BlackList local_22 [10];
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2717,
                       "virtual int Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Request_BlackList::Packet_Request_BlackList(local_22);
      local_18 = CUser::get_acc_id(param_1);
      local_14 = CUser::GetUID(param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_22,0x12);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081ce03c Dispatcher_RequestBlackList::read  [0x081ce03c-0x81ce045] ===
 81ce03c:	55                   	push   %ebp
 81ce03d:	89 e5                	mov    %esp,%ebp
 81ce03f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce044:	5d                   	pop    %ebp
 81ce045:	c3                   	ret

```

```c
// Dispatcher_RequestBlackList::read @ 0x81ce03c

/* Dispatcher_RequestBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_RequestBlackList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

