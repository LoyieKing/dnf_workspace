# Dispatcher_TryEnchant

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820ae84 Dispatcher_TryEnchant::dispatch_sig  [0x0820ae84-0x820b099] ===
 820ae84:	55                   	push   %ebp
 820ae85:	89 e5                	mov    %esp,%ebp
 820ae87:	83 ec 28             	sub    $0x28,%esp
 820ae8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ae91:	00 
 820ae92:	8b 45 10             	mov    0x10(%ebp),%eax
 820ae95:	89 04 24             	mov    %eax,(%esp)
 820ae98:	e8 65 08 02 00       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 820ae9d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 820aea0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820aea3:	89 04 24             	mov    %eax,(%esp)
 820aea6:	e8 87 55 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820aeab:	85 c0                	test   %eax,%eax
 820aead:	0f 94 c0             	sete   %al
 820aeb0:	84 c0                	test   %al,%al
 820aeb2:	74 29                	je     820aedd <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x59>
 820aeb4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820aebb:	00 
 820aebc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820aec3:	00 
 820aec4:	c7 44 24 04 80 e2 bc 	movl   $0x8bce280,0x4(%esp)
 820aecb:	08 
 820aecc:	c7 04 24 0b a7 00 00 	movl   $0xa70b,(%esp)
 820aed3:	e8 ff 59 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820aed8:	e9 bb 01 00 00       	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820aedd:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 820aee2:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 820aee9:	00 
 820aeea:	8b 55 0c             	mov    0xc(%ebp),%edx
 820aeed:	89 54 24 04          	mov    %edx,0x4(%esp)
 820aef1:	89 04 24             	mov    %eax,(%esp)
 820aef4:	e8 09 db 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 820aef9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 820aefc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 820af00:	74 27                	je     820af29 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 820af02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820af05:	0f b6 c0             	movzbl %al,%eax
 820af08:	89 44 24 08          	mov    %eax,0x8(%esp)
 820af0c:	c7 44 24 04 ac 00 00 	movl   $0xac,0x4(%esp)
 820af13:	00 
 820af14:	8b 45 0c             	mov    0xc(%ebp),%eax
 820af17:	89 04 24             	mov    %eax,(%esp)
 820af1a:	e8 23 10 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820af1f:	b8 00 00 00 00       	mov    $0x0,%eax
 820af24:	e9 6f 01 00 00       	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820af29:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820af2c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 820af30:	0f b6 c0             	movzbl %al,%eax
 820af33:	83 f8 01             	cmp    $0x1,%eax
 820af36:	74 76                	je     820afae <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x12a>
 820af38:	83 f8 02             	cmp    $0x2,%eax
 820af3b:	0f 84 a6 00 00 00    	je     820afe7 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x163>
 820af41:	85 c0                	test   %eax,%eax
 820af43:	0f 85 bc 00 00 00    	jne    820b005 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x181>
 820af49:	a1 68 f7 41 09       	mov    0x941f768,%eax
 820af4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820af55:	00 
 820af56:	89 04 24             	mov    %eax,(%esp)
 820af59:	e8 7e 32 29 00       	call   849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>
 820af5e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820af61:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 820af65:	75 25                	jne    820af8c <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x108>
 820af67:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 820af6e:	00 
 820af6f:	c7 44 24 04 ac 00 00 	movl   $0xac,0x4(%esp)
 820af76:	00 
 820af77:	8b 45 0c             	mov    0xc(%ebp),%eax
 820af7a:	89 04 24             	mov    %eax,(%esp)
 820af7d:	e8 c0 0f 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820af82:	b8 00 00 00 00       	mov    $0x0,%eax
 820af87:	e9 0c 01 00 00       	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820af8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820af8f:	8b 00                	mov    (%eax),%eax
 820af91:	8b 10                	mov    (%eax),%edx
 820af93:	8b 45 0c             	mov    0xc(%ebp),%eax
 820af96:	89 44 24 08          	mov    %eax,0x8(%esp)
 820af9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820af9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 820afa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820afa4:	89 04 24             	mov    %eax,(%esp)
 820afa7:	ff d2                	call   *%edx
 820afa9:	e9 81 00 00 00       	jmp    820b02f <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x1ab>
 820afae:	8b 45 0c             	mov    0xc(%ebp),%eax
 820afb1:	89 04 24             	mov    %eax,(%esp)
 820afb4:	e8 1b 49 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820afb9:	85 c0                	test   %eax,%eax
 820afbb:	0f 94 c0             	sete   %al
 820afbe:	84 c0                	test   %al,%al
 820afc0:	74 69                	je     820b02b <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x1a7>
 820afc2:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 820afc9:	00 
 820afca:	c7 44 24 04 ac 00 00 	movl   $0xac,0x4(%esp)
 820afd1:	00 
 820afd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820afd5:	89 04 24             	mov    %eax,(%esp)
 820afd8:	e8 65 0f 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820afdd:	b8 00 00 00 00       	mov    $0x0,%eax
 820afe2:	e9 b1 00 00 00       	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820afe7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820afea:	89 04 24             	mov    %eax,(%esp)
 820afed:	e8 e2 48 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820aff2:	85 c0                	test   %eax,%eax
 820aff4:	0f 94 c0             	sete   %al
 820aff7:	84 c0                	test   %al,%al
 820aff9:	74 33                	je     820b02e <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x1aa>
 820affb:	b8 00 00 00 00       	mov    $0x0,%eax
 820b000:	e9 93 00 00 00       	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820b005:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b00c:	00 
 820b00d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b014:	00 
 820b015:	c7 44 24 04 80 e2 bc 	movl   $0x8bce280,0x4(%esp)
 820b01c:	08 
 820b01d:	c7 04 24 32 a7 00 00 	movl   $0xa732,(%esp)
 820b024:	e8 ae 58 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b029:	eb 6d                	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820b02b:	90                   	nop
 820b02c:	eb 01                	jmp    820b02f <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x1ab>
 820b02e:	90                   	nop
 820b02f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b032:	89 04 24             	mov    %eax,(%esp)
 820b035:	e8 9a 48 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820b03a:	89 04 24             	mov    %eax,(%esp)
 820b03d:	e8 54 97 02 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 820b042:	83 f8 01             	cmp    $0x1,%eax
 820b045:	0f 95 c0             	setne  %al
 820b048:	84 c0                	test   %al,%al
 820b04a:	74 26                	je     820b072 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x1ee>
 820b04c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b053:	00 
 820b054:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b05b:	00 
 820b05c:	c7 44 24 04 80 e2 bc 	movl   $0x8bce280,0x4(%esp)
 820b063:	08 
 820b064:	c7 04 24 37 a7 00 00 	movl   $0xa737,(%esp)
 820b06b:	e8 67 58 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b070:	eb 26                	jmp    820b098 <_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820b072:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b075:	89 04 24             	mov    %eax,(%esp)
 820b078:	e8 57 48 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820b07d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 820b080:	89 54 24 08          	mov    %edx,0x8(%esp)
 820b084:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b087:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b08b:	89 04 24             	mov    %eax,(%esp)
 820b08e:	e8 39 2f 29 00       	call   849dfcc <_ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND>
 820b093:	b8 00 00 00 00       	mov    $0x0,%eax
 820b098:	c9                   	leave
 820b099:	c3                   	ret

```

```c
// Dispatcher_TryEnchant::dispatch_sig @ 0x820ae84

/* Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_TryEnchant::dispatch_sig(Dispatcher_TryEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND MVar1;
  MSG_STATIC_COMMAND *pMVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar2 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    uVar4 = LineFunc(0xa70b,"virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1f);
    if (uVar5 == 0) {
      MVar1 = pMVar2[0xd];
      if (MVar1 == (MSG_STATIC_COMMAND)0x1) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        if (iVar3 == 0) {
          CUser::SendCmdErrorPacket(param_1,0xac,0x16);
          return 0;
        }
      }
      else if (MVar1 == (MSG_STATIC_COMMAND)0x2) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (MVar1 != (MSG_STATIC_COMMAND)0x0) {
          uVar4 = LineFunc(0xa732,
                           "virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
          return uVar4;
        }
        puVar6 = (undefined4 *)
                 expert_job::CExpertJobMgr::AcquireExpertJob(GlobalData::s_ExpertJobMgr,1);
        if (puVar6 == (undefined4 *)0x0) {
          CUser::SendCmdErrorPacket(param_1,0xac,0x16);
          return 0;
        }
        (**(code **)*puVar6)(puVar6,param_1,param_1);
      }
      this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      iVar3 = expert_job::CExpertJob::GetType(this_00);
      if (iVar3 == 1) {
        this_01 = (CEnchanter *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        expert_job::CEnchanter::OnTryEnchant(this_01,param_1,pMVar2);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0xa737,
                         "virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xac,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

