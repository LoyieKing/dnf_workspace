# Dispatcher_AgreeEnchant

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820adc6 Dispatcher_AgreeEnchant::dispatch_sig  [0x0820adc6-0x820ae83] ===
 820adc6:	55                   	push   %ebp
 820adc7:	89 e5                	mov    %esp,%ebp
 820adc9:	83 ec 28             	sub    $0x28,%esp
 820adcc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820add3:	00 
 820add4:	8b 45 10             	mov    0x10(%ebp),%eax
 820add7:	89 04 24             	mov    %eax,(%esp)
 820adda:	e8 23 09 02 00       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 820addf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820ade2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ade5:	89 04 24             	mov    %eax,(%esp)
 820ade8:	e8 45 56 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820aded:	85 c0                	test   %eax,%eax
 820adef:	0f 94 c0             	sete   %al
 820adf2:	84 c0                	test   %al,%al
 820adf4:	74 26                	je     820ae1c <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0x56>
 820adf6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820adfd:	00 
 820adfe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820ae05:	00 
 820ae06:	c7 44 24 04 e0 e2 bc 	movl   $0x8bce2e0,0x4(%esp)
 820ae0d:	08 
 820ae0e:	c7 04 24 f1 a6 00 00 	movl   $0xa6f1,(%esp)
 820ae15:	e8 bd 5a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820ae1a:	eb 65                	jmp    820ae81 <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 820ae1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ae1f:	89 04 24             	mov    %eax,(%esp)
 820ae22:	e8 ad 4a 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820ae27:	85 c0                	test   %eax,%eax
 820ae29:	0f 94 c0             	sete   %al
 820ae2c:	84 c0                	test   %al,%al
 820ae2e:	74 07                	je     820ae37 <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0x71>
 820ae30:	b8 00 00 00 00       	mov    $0x0,%eax
 820ae35:	eb 4a                	jmp    820ae81 <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 820ae37:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ae3a:	89 04 24             	mov    %eax,(%esp)
 820ae3d:	e8 92 4a 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820ae42:	89 04 24             	mov    %eax,(%esp)
 820ae45:	e8 4c 99 02 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 820ae4a:	83 f8 01             	cmp    $0x1,%eax
 820ae4d:	0f 95 c0             	setne  %al
 820ae50:	84 c0                	test   %al,%al
 820ae52:	74 07                	je     820ae5b <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0x95>
 820ae54:	b8 00 00 00 00       	mov    $0x0,%eax
 820ae59:	eb 26                	jmp    820ae81 <_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 820ae5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ae5e:	89 04 24             	mov    %eax,(%esp)
 820ae61:	e8 6e 4a 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820ae66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 820ae69:	89 54 24 08          	mov    %edx,0x8(%esp)
 820ae6d:	8b 55 0c             	mov    0xc(%ebp),%edx
 820ae70:	89 54 24 04          	mov    %edx,0x4(%esp)
 820ae74:	89 04 24             	mov    %eax,(%esp)
 820ae77:	e8 02 32 29 00       	call   849e07e <_ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND>
 820ae7c:	b8 00 00 00 00       	mov    $0x0,%eax
 820ae81:	c9                   	leave
 820ae82:	c3                   	ret
 820ae83:	90                   	nop

```

```c
// Dispatcher_AgreeEnchant::dispatch_sig @ 0x820adc6

/* Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AgreeEnchant::dispatch_sig
          (Dispatcher_AgreeEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND *pMVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar1 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa6f1,"virtual int Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      iVar2 = expert_job::CExpertJob::GetType(this_00);
      if (iVar2 == 1) {
        this_01 = (CEnchanter *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        expert_job::CEnchanter::OnAgreeEnchant(this_01,param_1,pMVar1);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

