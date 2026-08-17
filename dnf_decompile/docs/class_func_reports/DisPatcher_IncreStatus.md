# DisPatcher_IncreStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ede34 DisPatcher_IncreStatus::dispatch_sig  [0x081ede34-0x81ee00f] ===
 81ede34:	55                   	push   %ebp
 81ede35:	89 e5                	mov    %esp,%ebp
 81ede37:	56                   	push   %esi
 81ede38:	53                   	push   %ebx
 81ede39:	83 ec 50             	sub    $0x50,%esp
 81ede3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ede3f:	89 04 24             	mov    %eax,(%esp)
 81ede42:	e8 45 c5 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ede47:	83 f8 02             	cmp    $0x2,%eax
 81ede4a:	0f 9e c0             	setle  %al
 81ede4d:	84 c0                	test   %al,%al
 81ede4f:	74 0a                	je     81ede5b <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ede51:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ede56:	e9 ac 01 00 00       	jmp    81ee007 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 81ede5b:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81ede5e:	83 c0 0d             	add    $0xd,%eax
 81ede61:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ede65:	8b 45 10             	mov    0x10(%ebp),%eax
 81ede68:	89 04 24             	mov    %eax,(%esp)
 81ede6b:	e8 50 f1 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ede70:	83 f0 01             	xor    $0x1,%eax
 81ede73:	84 c0                	test   %al,%al
 81ede75:	74 2b                	je     81edea2 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x6e>
 81ede77:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ede7e:	00 
 81ede7f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ede86:	00 
 81ede87:	c7 44 24 04 40 04 bd 	movl   $0x8bd0440,0x4(%esp)
 81ede8e:	08 
 81ede8f:	c7 04 24 fc 70 00 00 	movl   $0x70fc,(%esp)
 81ede96:	e8 3c 2a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ede9b:	89 c3                	mov    %eax,%ebx
 81ede9d:	e9 65 01 00 00       	jmp    81ee007 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 81edea2:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81edea6:	0f bf d0             	movswl %ax,%edx
 81edea9:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81edeae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81edeb2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81edeb9:	00 
 81edeba:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edebd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edec1:	89 04 24             	mov    %eax,(%esp)
 81edec4:	e8 0d a6 09 00       	call   82884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>
 81edec9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81edecc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81eded0:	75 2b                	jne    81edefd <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 81eded2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eded9:	00 
 81ededa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81edee1:	00 
 81edee2:	c7 44 24 04 40 04 bd 	movl   $0x8bd0440,0x4(%esp)
 81edee9:	08 
 81edeea:	c7 04 24 01 71 00 00 	movl   $0x7101,(%esp)
 81edef1:	e8 e1 29 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81edef6:	89 c3                	mov    %eax,%ebx
 81edef8:	e9 0a 01 00 00       	jmp    81ee007 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 81edefd:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81edf02:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81edf05:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81edf09:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81edf10:	00 
 81edf11:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edf14:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edf18:	89 04 24             	mov    %eax,(%esp)
 81edf1b:	e8 66 a8 09 00       	call   8288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>
 81edf20:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81edf23:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81edf27:	74 5f                	je     81edf88 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x154>
 81edf29:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81edf2c:	89 04 24             	mov    %eax,(%esp)
 81edf2f:	e8 18 fe 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81edf34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81edf37:	0f b6 c0             	movzbl %al,%eax
 81edf3a:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81edf3d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81edf41:	89 44 24 08          	mov    %eax,0x8(%esp)
 81edf45:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 81edf4c:	00 
 81edf4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edf50:	89 04 24             	mov    %eax,(%esp)
 81edf53:	e8 56 e0 48 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 81edf58:	bb 00 00 00 00       	mov    $0x0,%ebx
 81edf5d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81edf60:	89 04 24             	mov    %eax,(%esp)
 81edf63:	e8 18 ff 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81edf68:	e9 9a 00 00 00       	jmp    81ee007 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 81edf6d:	89 d3                	mov    %edx,%ebx
 81edf6f:	89 c6                	mov    %eax,%esi
 81edf71:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81edf74:	89 04 24             	mov    %eax,(%esp)
 81edf77:	e8 04 ff 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81edf7c:	89 f0                	mov    %esi,%eax
 81edf7e:	89 da                	mov    %ebx,%edx
 81edf80:	89 04 24             	mov    %eax,(%esp)
 81edf83:	e8 c8 57 8f 00       	call   8ae3750 <_Unwind_Resume>
 81edf88:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81edf8c:	66 3d 98 00          	cmp    $0x98,%ax
 81edf90:	7e 5c                	jle    81edfee <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1ba>
 81edf92:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81edf96:	98                   	cwtl
 81edf97:	89 44 24 04          	mov    %eax,0x4(%esp)
 81edf9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edf9e:	89 04 24             	mov    %eax,(%esp)
 81edfa1:	e8 74 ad 47 00       	call   8668d1a <_ZN5CUser12UseQuestItemEi>
 81edfa6:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81edfaa:	0f bf d8             	movswl %ax,%ebx
 81edfad:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81edfb4:	00 
 81edfb5:	c7 44 24 08 0f 71 00 	movl   $0x710f,0x8(%esp)
 81edfbc:	00 
 81edfbd:	c7 44 24 04 40 04 bd 	movl   $0x8bd0440,0x4(%esp)
 81edfc4:	08 
 81edfc5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81edfc8:	89 04 24             	mov    %eax,(%esp)
 81edfcb:	e8 48 17 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81edfd0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81edfd4:	c7 44 24 04 4b 21 bc 	movl   $0x8bc214b,0x4(%esp)
 81edfdb:	08 
 81edfdc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81edfdf:	89 04 24             	mov    %eax,(%esp)
 81edfe2:	e8 a1 17 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81edfe7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81edfec:	eb 19                	jmp    81ee007 <_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 81edfee:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81edff2:	98                   	cwtl
 81edff3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81edff7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edffa:	89 04 24             	mov    %eax,(%esp)
 81edffd:	e8 fa 77 47 00       	call   86657fc <_ZN5CUser15increase_statusEs>
 81ee002:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ee007:	89 d8                	mov    %ebx,%eax
 81ee009:	83 c4 50             	add    $0x50,%esp
 81ee00c:	5b                   	pop    %ebx
 81ee00d:	5e                   	pop    %esi
 81ee00e:	5d                   	pop    %ebp
 81ee00f:	c3                   	ret

```

```c
// DisPatcher_IncreStatus::dispatch_sig @ 0x81ede34

/* DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_IncreStatus::dispatch_sig(DisPatcher_IncreStatus *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_40 [26];
  short local_26;
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = PacketBuf::get_short(param_2,&local_26);
    if (cVar1 == '\x01') {
      local_14 = CSecu_ProtectionField::GetItemPtr
                           (GlobalData::s_pSecuProtectionField,param_1,'\0',local_26);
      if (local_14 == 0) {
        uVar3 = LineFunc(0x7101,
                         "virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
      else {
        local_10 = CSecu_ProtectionField::CheckItem
                             (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_14);
        if (local_10 == 0) {
          if (local_26 < 0x99) {
            CUser::increase_status(param_1,local_26);
            uVar3 = 0;
          }
          else {
            CUser::UseQuestItem((int)param_1);
            cMyTrace::cMyTrace(local_24,
                               "virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)"
                               ,0x710f,5);
            cMyTrace::operator()(local_24,"__ USE QUEST ITEM __ %d",(int)local_26);
            uVar3 = 0;
          }
        }
        else {
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 081edf53 to 081edf57 has its CatchHandler @ 081edf6d */
          CUser::SendCmdErrorPacket(param_1,0x20,local_10 & 0xff,local_40);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_40);
        }
      }
    }
    else {
      uVar3 = LineFunc(0x70fc,"virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

