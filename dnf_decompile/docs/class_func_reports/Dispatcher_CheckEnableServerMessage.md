# Dispatcher_CheckEnableServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821df6a Dispatcher_CheckEnableServerMessage::dispatch_sig  [0x0821df6a-0x821e1f3] ===
 821df6a:	55                   	push   %ebp
 821df6b:	89 e5                	mov    %esp,%ebp
 821df6d:	56                   	push   %esi
 821df6e:	53                   	push   %ebx
 821df6f:	83 ec 40             	sub    $0x40,%esp
 821df72:	8b 45 0c             	mov    0xc(%ebp),%eax
 821df75:	89 04 24             	mov    %eax,(%esp)
 821df78:	e8 0f c4 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821df7d:	83 f8 03             	cmp    $0x3,%eax
 821df80:	0f 95 c0             	setne  %al
 821df83:	84 c0                	test   %al,%al
 821df85:	0f 84 93 00 00 00    	je     821e01e <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0xb4>
 821df8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821df8e:	89 04 24             	mov    %eax,(%esp)
 821df91:	e8 d8 c3 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821df96:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821df9d:	00 
 821df9e:	89 04 24             	mov    %eax,(%esp)
 821dfa1:	e8 a5 b0 ee ff       	call   810904b <_Z14NumberToStringji>
 821dfa6:	89 c3                	mov    %eax,%ebx
 821dfa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821dfab:	89 04 24             	mov    %eax,(%esp)
 821dfae:	e8 d9 c3 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821dfb3:	89 c6                	mov    %eax,%esi
 821dfb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dfbc:	00 
 821dfbd:	c7 44 24 08 36 d2 00 	movl   $0xd236,0x8(%esp)
 821dfc4:	00 
 821dfc5:	c7 44 24 04 40 d3 bc 	movl   $0x8bcd340,0x4(%esp)
 821dfcc:	08 
 821dfcd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821dfd0:	89 04 24             	mov    %eax,(%esp)
 821dfd3:	e8 40 17 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821dfd8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821dfdc:	89 74 24 08          	mov    %esi,0x8(%esp)
 821dfe0:	c7 44 24 04 14 35 bc 	movl   $0x8bc3514,0x4(%esp)
 821dfe7:	08 
 821dfe8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821dfeb:	89 04 24             	mov    %eax,(%esp)
 821dfee:	e8 95 17 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821dff3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dffa:	00 
 821dffb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e002:	00 
 821e003:	c7 44 24 04 40 d3 bc 	movl   $0x8bcd340,0x4(%esp)
 821e00a:	08 
 821e00b:	c7 04 24 37 d2 00 00 	movl   $0xd237,(%esp)
 821e012:	e8 c0 28 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e017:	89 c3                	mov    %eax,%ebx
 821e019:	e9 cd 01 00 00       	jmp    821e1eb <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x281>
 821e01e:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 821e022:	8d 45 df             	lea    -0x21(%ebp),%eax
 821e025:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e029:	8b 45 10             	mov    0x10(%ebp),%eax
 821e02c:	89 04 24             	mov    %eax,(%esp)
 821e02f:	e8 3c ef 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821e034:	83 f0 01             	xor    $0x1,%eax
 821e037:	84 c0                	test   %al,%al
 821e039:	74 2b                	je     821e066 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 821e03b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e042:	00 
 821e043:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e04a:	00 
 821e04b:	c7 44 24 04 40 d3 bc 	movl   $0x8bcd340,0x4(%esp)
 821e052:	08 
 821e053:	c7 04 24 3d d2 00 00 	movl   $0xd23d,(%esp)
 821e05a:	e8 78 28 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e05f:	89 c3                	mov    %eax,%ebx
 821e061:	e9 85 01 00 00       	jmp    821e1eb <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x281>
 821e066:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821e06d:	e8 2c dc ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 821e072:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821e075:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e078:	89 04 24             	mov    %eax,(%esp)
 821e07b:	e8 cc fc 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821e080:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 821e087:	00 
 821e088:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e08f:	00 
 821e090:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e093:	89 04 24             	mov    %eax,(%esp)
 821e096:	e8 61 d8 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821e09b:	e8 ee e0 ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821e0a0:	89 04 24             	mov    %eax,(%esp)
 821e0a3:	e8 44 ae 07 00       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 821e0a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821e0ab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821e0af:	0f 84 ce 00 00 00    	je     821e183 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x219>
 821e0b5:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 821e0bc:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 821e0c0:	0f b6 c0             	movzbl %al,%eax
 821e0c3:	8d 55 cc             	lea    -0x34(%ebp),%edx
 821e0c6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821e0ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 821e0ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e0d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e0d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821e0d8:	89 04 24             	mov    %eax,(%esp)
 821e0db:	e8 ec 2c 3e 00       	call   8600dcc <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi>
 821e0e0:	84 c0                	test   %al,%al
 821e0e2:	74 5e                	je     821e142 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 821e0e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821e0e7:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 821e0eb:	0f b6 c0             	movzbl %al,%eax
 821e0ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 821e0f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e0f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821e0f9:	89 04 24             	mov    %eax,(%esp)
 821e0fc:	e8 c7 2b 3e 00       	call   8600cc8 <_ZN27CSharedServerMessageManager18IsChangableMessageEii>
 821e101:	84 c0                	test   %al,%al
 821e103:	74 15                	je     821e11a <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x1b0>
 821e105:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e10c:	00 
 821e10d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e110:	89 04 24             	mov    %eax,(%esp)
 821e113:	e8 08 d8 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e118:	eb 69                	jmp    821e183 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x219>
 821e11a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821e121:	00 
 821e122:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e125:	89 04 24             	mov    %eax,(%esp)
 821e128:	e8 f3 d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e12d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e134:	00 
 821e135:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e138:	89 04 24             	mov    %eax,(%esp)
 821e13b:	e8 e0 d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e140:	eb 41                	jmp    821e183 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x219>
 821e142:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821e149:	00 
 821e14a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e14d:	89 04 24             	mov    %eax,(%esp)
 821e150:	e8 cb d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e155:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821e158:	85 c0                	test   %eax,%eax
 821e15a:	74 14                	je     821e170 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x206>
 821e15c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821e15f:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e163:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e166:	89 04 24             	mov    %eax,(%esp)
 821e169:	e8 b2 d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e16e:	eb 13                	jmp    821e183 <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x219>
 821e170:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 821e177:	00 
 821e178:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e17b:	89 04 24             	mov    %eax,(%esp)
 821e17e:	e8 9d d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e183:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 821e187:	0f b6 c0             	movzbl %al,%eax
 821e18a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e18e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e191:	89 04 24             	mov    %eax,(%esp)
 821e194:	e8 87 d7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e199:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e1a0:	00 
 821e1a1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e1a4:	89 04 24             	mov    %eax,(%esp)
 821e1a7:	e8 ac d7 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821e1ac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e1af:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e1b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e1b6:	89 04 24             	mov    %eax,(%esp)
 821e1b9:	e8 fc a3 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821e1be:	bb 00 00 00 00       	mov    $0x0,%ebx
 821e1c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e1c6:	89 04 24             	mov    %eax,(%esp)
 821e1c9:	e8 b2 fc 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821e1ce:	eb 1b                	jmp    821e1eb <_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x281>
 821e1d0:	89 d3                	mov    %edx,%ebx
 821e1d2:	89 c6                	mov    %eax,%esi
 821e1d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821e1d7:	89 04 24             	mov    %eax,(%esp)
 821e1da:	e8 a1 fc 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821e1df:	89 f0                	mov    %esi,%eax
 821e1e1:	89 da                	mov    %ebx,%edx
 821e1e3:	89 04 24             	mov    %eax,(%esp)
 821e1e6:	e8 65 55 8c 00       	call   8ae3750 <_Unwind_Resume>
 821e1eb:	89 d8                	mov    %ebx,%eax
 821e1ed:	83 c4 40             	add    $0x40,%esp
 821e1f0:	5b                   	pop    %ebx
 821e1f1:	5e                   	pop    %esi
 821e1f2:	5d                   	pop    %ebp
 821e1f3:	c3                   	ret

```

```c
// Dispatcher_CheckEnableServerMessage::dispatch_sig @ 0x821df6a

/* WARNING: Removing unreachable block (ram,0x0821e15c) */
/* Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckEnableServerMessage::dispatch_sig
          (Dispatcher_CheckEnableServerMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CGameManager *this_00;
  PacketGuard local_34 [15];
  byte local_25;
  cMyTrace local_24 [16];
  int local_14;
  CSharedServerMessageManager *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_25 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_25);
    if (cVar1 == '\x01') {
      local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0821e096 to 0821e1bd has its CatchHandler @ 0821e1d0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xde);
      this_00 = (CGameManager *)G_CGameManager();
      local_10 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this_00)
      ;
      if (local_10 != (CSharedServerMessageManager *)0x0) {
        cVar1 = CSharedServerMessageManager::CheckUserCondition
                          ((CUser *)local_10,(int)param_1,(int *)(uint)local_25);
        if (cVar1 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,3);
        }
        else {
          cVar1 = CSharedServerMessageManager::IsChangableMessage(local_10,(uint)local_25,local_14);
          if (cVar1 == '\0') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)local_25);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      uVar4 = 0;
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar4 = LineFunc(0xd23d,
                       "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd236,0);
    cMyTrace::operator()
              (local_24,
               "ServerMessage : Dispatcher_CheckEnableServerMessage => User State : %d, m_id : %s",
               uVar5,uVar4);
    uVar4 = LineFunc(0xd237,
                     "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar4;
}

```

