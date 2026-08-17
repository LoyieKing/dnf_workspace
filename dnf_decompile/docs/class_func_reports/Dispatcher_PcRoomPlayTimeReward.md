# Dispatcher_PcRoomPlayTimeReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081e4f5c Dispatcher_PcRoomPlayTimeReward::process  [0x081e4f5c-0x81e501f] ===
 81e4f5c:	55                   	push   %ebp
 81e4f5d:	89 e5                	mov    %esp,%ebp
 81e4f5f:	83 ec 28             	sub    $0x28,%esp
 81e4f62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4f65:	89 04 24             	mov    %eax,(%esp)
 81e4f68:	e8 1f 54 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e4f6d:	83 f8 02             	cmp    $0x2,%eax
 81e4f70:	7e 0f                	jle    81e4f81 <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0x25>
 81e4f72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4f75:	89 04 24             	mov    %eax,(%esp)
 81e4f78:	e8 b5 b4 f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e4f7d:	85 c0                	test   %eax,%eax
 81e4f7f:	75 07                	jne    81e4f88 <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81e4f81:	b8 01 00 00 00       	mov    $0x1,%eax
 81e4f86:	eb 05                	jmp    81e4f8d <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81e4f88:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4f8d:	84 c0                	test   %al,%al
 81e4f8f:	74 0a                	je     81e4f9b <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81e4f91:	b8 03 00 00 00       	mov    $0x3,%eax
 81e4f96:	e9 83 00 00 00       	jmp    81e501e <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81e4f9b:	8b 45 14             	mov    0x14(%ebp),%eax
 81e4f9e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e4fa1:	e8 f5 71 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e4fa6:	89 04 24             	mov    %eax,(%esp)
 81e4fa9:	e8 b4 bb f2 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81e4fae:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 81e4fb5:	00 
 81e4fb6:	89 04 24             	mov    %eax,(%esp)
 81e4fb9:	e8 ac 69 f2 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 81e4fbe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4fc1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e4fc5:	75 11                	jne    81e4fd8 <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0x7c>
 81e4fc7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4fca:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81e4fd1:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4fd6:	eb 46                	jmp    81e501e <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81e4fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4fdf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4fe2:	89 04 24             	mov    %eax,(%esp)
 81e4fe5:	e8 4e ba f2 ff       	call   8110a38 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser>
 81e4fea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e4fed:	89 42 04             	mov    %eax,0x4(%edx)
 81e4ff0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4ff3:	8b 40 04             	mov    0x4(%eax),%eax
 81e4ff6:	85 c0                	test   %eax,%eax
 81e4ff8:	74 07                	je     81e5001 <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0xa5>
 81e4ffa:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4fff:	eb 1d                	jmp    81e501e <_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81e5001:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5004:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5008:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e500b:	89 04 24             	mov    %eax,(%esp)
 81e500e:	e8 89 b8 f2 ff       	call   811089c <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser>
 81e5013:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e5016:	89 42 04             	mov    %eax,0x4(%edx)
 81e5019:	b8 00 00 00 00       	mov    $0x0,%eax
 81e501e:	c9                   	leave
 81e501f:	c3                   	ret

```

```c
// Dispatcher_PcRoomPlayTimeReward::process @ 0x81e4f5c

/* Dispatcher_PcRoomPlayTimeReward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PcRoomPlayTimeReward::process
          (Dispatcher_PcRoomPlayTimeReward *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CPcRoomPlayTime *this_01;
  
  iVar2 = CUser::get_state(param_1);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081e4f8d;
    }
  }
  bVar1 = true;
LAB_081e4f8d:
  if (bVar1) {
    uVar3 = 3;
  }
  else {
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(this_00);
    this_01 = (CPcRoomPlayTime *)EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (this_01 == (CPcRoomPlayTime *)0x0) {
      *(undefined4 *)(param_3 + 4) = 0xb2;
      uVar3 = 0;
    }
    else {
      uVar3 = EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(this_01,param_1);
      *(undefined4 *)(param_3 + 4) = uVar3;
      if (*(int *)(param_3 + 4) == 0) {
        uVar3 = EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(this_01,param_1);
        *(undefined4 *)(param_3 + 4) = uVar3;
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

---

## read

```asm
// === 081e4f52 Dispatcher_PcRoomPlayTimeReward::read  [0x081e4f52-0x81e4f5b] ===
 81e4f52:	55                   	push   %ebp
 81e4f53:	89 e5                	mov    %esp,%ebp
 81e4f55:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4f5a:	5d                   	pop    %ebp
 81e4f5b:	c3                   	ret

```

```c
// Dispatcher_PcRoomPlayTimeReward::read @ 0x81e4f52

/* Dispatcher_PcRoomPlayTimeReward::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_PcRoomPlayTimeReward::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081e5020 Dispatcher_PcRoomPlayTimeReward::send  [0x081e5020-0x81e512d] ===
 81e5020:	55                   	push   %ebp
 81e5021:	89 e5                	mov    %esp,%ebp
 81e5023:	56                   	push   %esi
 81e5024:	53                   	push   %ebx
 81e5025:	83 ec 20             	sub    $0x20,%esp
 81e5028:	8b 45 10             	mov    0x10(%ebp),%eax
 81e502b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e502e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5031:	89 04 24             	mov    %eax,(%esp)
 81e5034:	e8 13 8d 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e5039:	c7 44 24 08 ed 01 00 	movl   $0x1ed,0x8(%esp)
 81e5040:	00 
 81e5041:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5048:	00 
 81e5049:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e504c:	89 04 24             	mov    %eax,(%esp)
 81e504f:	e8 a8 68 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e5054:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5057:	8b 40 04             	mov    0x4(%eax),%eax
 81e505a:	85 c0                	test   %eax,%eax
 81e505c:	75 2f                	jne    81e508d <_ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase+0x6d>
 81e505e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5065:	00 
 81e5066:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5069:	89 04 24             	mov    %eax,(%esp)
 81e506c:	e8 af 68 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5071:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5074:	89 04 24             	mov    %eax,(%esp)
 81e5077:	e8 70 bd f2 ff       	call   8110dec <_ZNK5CUser26getPcRoomPlayTimeRewardCntEv>
 81e507c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5080:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5083:	89 04 24             	mov    %eax,(%esp)
 81e5086:	e8 95 68 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e508b:	eb 4d                	jmp    81e50da <_ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase+0xba>
 81e508d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e5094:	00 
 81e5095:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5098:	89 04 24             	mov    %eax,(%esp)
 81e509b:	e8 80 68 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e50a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e50a3:	8b 40 04             	mov    0x4(%eax),%eax
 81e50a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e50aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e50ad:	89 04 24             	mov    %eax,(%esp)
 81e50b0:	e8 6b 68 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e50b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e50b8:	8b 40 04             	mov    0x4(%eax),%eax
 81e50bb:	83 f8 13             	cmp    $0x13,%eax
 81e50be:	75 1a                	jne    81e50da <_ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase+0xba>
 81e50c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e50c3:	89 04 24             	mov    %eax,(%esp)
 81e50c6:	e8 45 bd f2 ff       	call   8110e10 <_ZNK5CUser22getTotalPcRoomPlayTimeEv>
 81e50cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e50cf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e50d2:	89 04 24             	mov    %eax,(%esp)
 81e50d5:	e8 62 68 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e50da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e50e1:	00 
 81e50e2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e50e5:	89 04 24             	mov    %eax,(%esp)
 81e50e8:	e8 6b 68 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e50ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e50f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e50f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e50f7:	89 04 24             	mov    %eax,(%esp)
 81e50fa:	e8 bb 34 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e50ff:	eb 1b                	jmp    81e511c <_ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase+0xfc>
 81e5101:	89 d3                	mov    %edx,%ebx
 81e5103:	89 c6                	mov    %eax,%esi
 81e5105:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5108:	89 04 24             	mov    %eax,(%esp)
 81e510b:	e8 70 8d 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5110:	89 f0                	mov    %esi,%eax
 81e5112:	89 da                	mov    %ebx,%edx
 81e5114:	89 04 24             	mov    %eax,(%esp)
 81e5117:	e8 34 e6 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e511c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e511f:	89 04 24             	mov    %eax,(%esp)
 81e5122:	e8 59 8d 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5127:	83 c4 20             	add    $0x20,%esp
 81e512a:	5b                   	pop    %ebx
 81e512b:	5e                   	pop    %esi
 81e512c:	5d                   	pop    %ebp
 81e512d:	c3                   	ret

```

```c
// Dispatcher_PcRoomPlayTimeReward::send @ 0x81e5020

/* Dispatcher_PcRoomPlayTimeReward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PcRoomPlayTimeReward::send
          (Dispatcher_PcRoomPlayTimeReward *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e504f to 081e50fe has its CatchHandler @ 081e5101 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ed);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    iVar1 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 0x13) {
      iVar1 = CUser::getTotalPcRoomPlayTime(param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

