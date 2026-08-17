# Dispatcher_LevelupSupportReqestItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0825fc3a Dispatcher_LevelupSupportReqestItem::dispatch_sig  [0x0825fc3a-0x825fed9] ===
 825fc3a:	55                   	push   %ebp
 825fc3b:	89 e5                	mov    %esp,%ebp
 825fc3d:	56                   	push   %esi
 825fc3e:	53                   	push   %ebx
 825fc3f:	83 ec 40             	sub    $0x40,%esp
 825fc42:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825fc46:	75 0a                	jne    825fc52 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x18>
 825fc48:	b8 49 0a 00 00       	mov    $0xa49,%eax
 825fc4d:	e9 81 02 00 00       	jmp    825fed3 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x299>
 825fc52:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fc55:	89 04 24             	mov    %eax,(%esp)
 825fc58:	e8 2f a7 e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825fc5d:	83 f8 02             	cmp    $0x2,%eax
 825fc60:	0f 9e c0             	setle  %al
 825fc63:	84 c0                	test   %al,%al
 825fc65:	74 0a                	je     825fc71 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x37>
 825fc67:	b8 00 00 00 00       	mov    $0x0,%eax
 825fc6c:	e9 62 02 00 00       	jmp    825fed3 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x299>
 825fc71:	a1 30 f7 41 09       	mov    0x941f730,%eax
 825fc76:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 825fc7d:	00 
 825fc7e:	89 04 24             	mov    %eax,(%esp)
 825fc81:	e8 12 5d eb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 825fc86:	8b 10                	mov    (%eax),%edx
 825fc88:	83 c2 34             	add    $0x34,%edx
 825fc8b:	8b 12                	mov    (%edx),%edx
 825fc8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825fc94:	00 
 825fc95:	89 04 24             	mov    %eax,(%esp)
 825fc98:	ff d2                	call   *%edx
 825fc9a:	83 f0 01             	xor    $0x1,%eax
 825fc9d:	84 c0                	test   %al,%al
 825fc9f:	74 68                	je     825fd09 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 825fca1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825fca8:	00 
 825fca9:	c7 44 24 04 55 02 00 	movl   $0x255,0x4(%esp)
 825fcb0:	00 
 825fcb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fcb4:	89 04 24             	mov    %eax,(%esp)
 825fcb7:	e8 86 c2 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 825fcbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fcbf:	89 04 24             	mov    %eax,(%esp)
 825fcc2:	e8 87 bf e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 825fcc7:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 825fcce:	00 
 825fccf:	89 44 24 14          	mov    %eax,0x14(%esp)
 825fcd3:	c7 44 24 10 58 86 be 	movl   $0x8be8658,0x10(%esp)
 825fcda:	08 
 825fcdb:	c7 44 24 0c 50 0a 00 	movl   $0xa50,0xc(%esp)
 825fce2:	00 
 825fce3:	c7 44 24 08 c0 9c be 	movl   $0x8be9cc0,0x8(%esp)
 825fcea:	08 
 825fceb:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825fcf2:	08 
 825fcf3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825fcfa:	e8 0b 3f 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825fcff:	b8 00 00 00 00       	mov    $0x0,%eax
 825fd04:	e9 ca 01 00 00       	jmp    825fed3 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x299>
 825fd09:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 825fd10:	8d 45 f0             	lea    -0x10(%ebp),%eax
 825fd13:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fd17:	8b 45 10             	mov    0x10(%ebp),%eax
 825fd1a:	89 04 24             	mov    %eax,(%esp)
 825fd1d:	e8 ce d3 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825fd22:	83 f0 01             	xor    $0x1,%eax
 825fd25:	84 c0                	test   %al,%al
 825fd27:	74 0a                	je     825fd33 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0xf9>
 825fd29:	b8 56 0a 00 00       	mov    $0xa56,%eax
 825fd2e:	e9 a0 01 00 00       	jmp    825fed3 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x299>
 825fd33:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 825fd3a:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 825fd3d:	e8 26 80 ee ff       	call   8147d68 <_ZN4ARAD9SingletonI25LevelupSupportEventMangerE3GetEv>
 825fd42:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825fd46:	89 04 24             	mov    %eax,(%esp)
 825fd49:	e8 14 76 ee ff       	call   8147362 <_ZN25LevelupSupportEventManger12GetStepIndexEi>
 825fd4e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825fd51:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 825fd55:	75 07                	jne    825fd5e <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x124>
 825fd57:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 825fd5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825fd61:	8b 55 0c             	mov    0xc(%ebp),%edx
 825fd64:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 825fd6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fd6e:	89 14 24             	mov    %edx,(%esp)
 825fd71:	e8 a0 7f ee ff       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 825fd76:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 825fd7a:	0f b7 c0             	movzwl %ax,%eax
 825fd7d:	83 f8 01             	cmp    $0x1,%eax
 825fd80:	74 12                	je     825fd94 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 825fd82:	83 f8 02             	cmp    $0x2,%eax
 825fd85:	74 28                	je     825fdaf <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x175>
 825fd87:	85 c0                	test   %eax,%eax
 825fd89:	75 2b                	jne    825fdb6 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 825fd8b:	c7 45 ec 13 00 00 00 	movl   $0x13,-0x14(%ebp)
 825fd92:	eb 22                	jmp    825fdb6 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 825fd94:	8d 45 ec             	lea    -0x14(%ebp),%eax
 825fd97:	89 44 24 08          	mov    %eax,0x8(%esp)
 825fd9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825fd9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fda2:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fda5:	89 04 24             	mov    %eax,(%esp)
 825fda8:	e8 1f 76 ee ff       	call   81473cc <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR>
 825fdad:	eb 07                	jmp    825fdb6 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 825fdaf:	c7 45 ec 12 00 00 00 	movl   $0x12,-0x14(%ebp)
 825fdb6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825fdb9:	85 c0                	test   %eax,%eax
 825fdbb:	0f 85 a5 00 00 00    	jne    825fe66 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x22c>
 825fdc1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fdc4:	89 04 24             	mov    %eax,(%esp)
 825fdc7:	e8 80 df 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825fdcc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fdcf:	89 04 24             	mov    %eax,(%esp)
 825fdd2:	e8 0f bb e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 825fdd7:	c7 44 24 08 55 02 00 	movl   $0x255,0x8(%esp)
 825fdde:	00 
 825fddf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825fde6:	00 
 825fde7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fdea:	89 04 24             	mov    %eax,(%esp)
 825fded:	e8 0a bb e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825fdf2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825fdf9:	00 
 825fdfa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fdfd:	89 04 24             	mov    %eax,(%esp)
 825fe00:	e8 1b bb e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825fe05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825fe08:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fe0c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fe0f:	89 04 24             	mov    %eax,(%esp)
 825fe12:	e8 25 bb e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 825fe17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825fe1e:	00 
 825fe1f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fe22:	89 04 24             	mov    %eax,(%esp)
 825fe25:	e8 2e bb e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825fe2a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fe2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fe31:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fe34:	89 04 24             	mov    %eax,(%esp)
 825fe37:	e8 7e 87 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825fe3c:	eb 1b                	jmp    825fe59 <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 825fe3e:	89 d3                	mov    %edx,%ebx
 825fe40:	89 c6                	mov    %eax,%esi
 825fe42:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fe45:	89 04 24             	mov    %eax,(%esp)
 825fe48:	e8 33 e0 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825fe4d:	89 f0                	mov    %esi,%eax
 825fe4f:	89 da                	mov    %ebx,%edx
 825fe51:	89 04 24             	mov    %eax,(%esp)
 825fe54:	e8 f7 38 88 00       	call   8ae3750 <_Unwind_Resume>
 825fe59:	8d 45 e0             	lea    -0x20(%ebp),%eax
 825fe5c:	89 04 24             	mov    %eax,(%esp)
 825fe5f:	e8 1c e0 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825fe64:	eb 68                	jmp    825fece <_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf+0x294>
 825fe66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825fe69:	0f b6 c0             	movzbl %al,%eax
 825fe6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 825fe70:	c7 44 24 04 55 02 00 	movl   $0x255,0x4(%esp)
 825fe77:	00 
 825fe78:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fe7b:	89 04 24             	mov    %eax,(%esp)
 825fe7e:	e8 bf c0 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 825fe83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825fe86:	89 c6                	mov    %eax,%esi
 825fe88:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 825fe8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fe8e:	89 04 24             	mov    %eax,(%esp)
 825fe91:	e8 b8 bd e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 825fe96:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 825fe9a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 825fe9e:	89 44 24 14          	mov    %eax,0x14(%esp)
 825fea2:	c7 44 24 10 70 86 be 	movl   $0x8be8670,0x10(%esp)
 825fea9:	08 
 825feaa:	c7 44 24 0c 78 0a 00 	movl   $0xa78,0xc(%esp)
 825feb1:	00 
 825feb2:	c7 44 24 08 c0 9c be 	movl   $0x8be9cc0,0x8(%esp)
 825feb9:	08 
 825feba:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825fec1:	08 
 825fec2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825fec9:	e8 3c 3d 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825fece:	b8 00 00 00 00       	mov    $0x0,%eax
 825fed3:	83 c4 40             	add    $0x40,%esp
 825fed6:	5b                   	pop    %ebx
 825fed7:	5e                   	pop    %esi
 825fed8:	5d                   	pop    %ebp
 825fed9:	c3                   	ret

```

```c
// Dispatcher_LevelupSupportReqestItem::dispatch_sig @ 0x825fc3a

/* Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_LevelupSupportReqestItem::dispatch_sig
          (Dispatcher_LevelupSupportReqestItem *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  PacketGuard local_24 [12];
  uint local_18;
  int local_14;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xa49;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 < 3) {
      uVar4 = 0;
    }
    else {
      piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9e);
      cVar3 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
      if (cVar3 == '\x01') {
        local_14 = 0;
        cVar3 = PacketBuf::get_int(param_2,&local_14);
        if (cVar3 == '\x01') {
          local_18 = 0;
          iVar5 = ARAD::Singleton<LevelupSupportEventManger>::Get();
          local_10 = LevelupSupportEventManger::GetStepIndex(iVar5);
          if (local_10 == 0xffffffff) {
            local_18 = 1;
          }
          iVar5 = std::
                  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                  ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                                *)(param_1 + 0x8d0e4),local_10);
          sVar1 = *(short *)(iVar5 + 2);
          if (sVar1 == 1) {
            LevelupSupportEventManger::InsertItem(param_1,local_10,(ENUM_ERROR *)&local_18);
          }
          else if (sVar1 == 2) {
            local_18 = 0x12;
          }
          else if (sVar1 == 0) {
            local_18 = 0x13;
          }
          if (local_18 == 0) {
            PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0825fdd2 to 0825fe3b has its CatchHandler @ 0825fe3e */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x255);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
            CUser::Send(param_1,local_24);
            PacketGuard::~PacketGuard(local_24);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x255,local_18 & 0xff);
            iVar5 = local_14;
            uVar2 = local_18;
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            LogManager::logFormat
                      (1,"PacketDispatcher_Impl_2.cpp",
                       "virtual int Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xa78,"charac_no:%d, request_level:%d, error:%d",uVar4,iVar5,uVar2);
          }
          uVar4 = 0;
        }
        else {
          uVar4 = 0xa56;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x255,1);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_2.cpp",
                   "virtual int Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)"
                   ,0xa50,"charac_no:%d, error:%d",uVar4,1);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

