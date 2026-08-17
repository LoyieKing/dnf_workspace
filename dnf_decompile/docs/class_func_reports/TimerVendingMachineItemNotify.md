# TimerVendingMachineItemNotify

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637f40 TimerVendingMachineItemNotify::dispatch_sig  [0x08637f40-0x8638073] ===
 8637f40:	55                   	push   %ebp
 8637f41:	89 e5                	mov    %esp,%ebp
 8637f43:	56                   	push   %esi
 8637f44:	53                   	push   %ebx
 8637f45:	83 ec 20             	sub    $0x20,%esp
 8637f48:	e8 41 42 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637f4d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8637f54:	00 
 8637f55:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637f58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637f5c:	89 04 24             	mov    %eax,(%esp)
 8637f5f:	e8 40 c8 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8637f64:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8637f67:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8637f6b:	75 0a                	jne    8637f77 <_ZN29TimerVendingMachineItemNotify12dispatch_sigEiij+0x37>
 8637f6d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8637f72:	e9 f4 00 00 00       	jmp    863806b <_ZN29TimerVendingMachineItemNotify12dispatch_sigEiij+0x12b>
 8637f77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637f7a:	89 04 24             	mov    %eax,(%esp)
 8637f7d:	e8 ca 5d f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8637f82:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 8637f89:	00 
 8637f8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637f91:	00 
 8637f92:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637f95:	89 04 24             	mov    %eax,(%esp)
 8637f98:	e8 5f 39 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8637f9d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8637fa4:	00 
 8637fa5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637fa8:	89 04 24             	mov    %eax,(%esp)
 8637fab:	e8 70 39 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8637fb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637fb7:	00 
 8637fb8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637fbb:	89 04 24             	mov    %eax,(%esp)
 8637fbe:	e8 5d 39 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8637fc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637fc6:	89 04 24             	mov    %eax,(%esp)
 8637fc9:	e8 ae 23 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8637fce:	0f b7 c0             	movzwl %ax,%eax
 8637fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637fd5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637fd8:	89 04 24             	mov    %eax,(%esp)
 8637fdb:	e8 c4 1e aa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8637fe0:	8b 45 10             	mov    0x10(%ebp),%eax
 8637fe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637fe7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637fea:	89 04 24             	mov    %eax,(%esp)
 8637fed:	e8 a2 37 bf ff       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 8637ff2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637ff9:	00 
 8637ffa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637ffd:	89 04 24             	mov    %eax,(%esp)
 8638000:	e8 1b 39 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8638005:	8b 45 14             	mov    0x14(%ebp),%eax
 8638008:	89 44 24 04          	mov    %eax,0x4(%esp)
 863800c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863800f:	89 04 24             	mov    %eax,(%esp)
 8638012:	e8 25 39 a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8638017:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863801e:	00 
 863801f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638022:	89 04 24             	mov    %eax,(%esp)
 8638025:	e8 2e 39 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863802a:	e8 78 23 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863802f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8638032:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638036:	89 04 24             	mov    %eax,(%esp)
 8638039:	e8 d6 0b 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 863803e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8638043:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638046:	89 04 24             	mov    %eax,(%esp)
 8638049:	e8 32 5e f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863804e:	eb 1b                	jmp    863806b <_ZN29TimerVendingMachineItemNotify12dispatch_sigEiij+0x12b>
 8638050:	89 d3                	mov    %edx,%ebx
 8638052:	89 c6                	mov    %eax,%esi
 8638054:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8638057:	89 04 24             	mov    %eax,(%esp)
 863805a:	e8 21 5e f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863805f:	89 f0                	mov    %esi,%eax
 8638061:	89 da                	mov    %ebx,%edx
 8638063:	89 04 24             	mov    %eax,(%esp)
 8638066:	e8 e5 b6 4a 00       	call   8ae3750 <_Unwind_Resume>
 863806b:	89 d8                	mov    %ebx,%eax
 863806d:	83 c4 20             	add    $0x20,%esp
 8638070:	5b                   	pop    %ebx
 8638071:	5e                   	pop    %esi
 8638072:	5d                   	pop    %ebp
 8638073:	c3                   	ret

```

```c
// TimerVendingMachineItemNotify::dispatch_sig @ 0x8637f40

/* TimerVendingMachineItemNotify::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerVendingMachineItemNotify::dispatch_sig
          (TimerVendingMachineItemNotify *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  GameWorld *this_00;
  bool bVar3;
  PacketGuard local_1c [12];
  CUser *local_10;
  
  iVar1 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar1,param_1);
  bVar3 = local_10 != (CUser *)0x0;
  if (bVar3) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08637f98 to 0863803d has its CatchHandler @ 08638050 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    uVar2 = CUser::get_unique_id(local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_1c,param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return bVar3;
}

```

---

## registTimer

```asm
// === 08638074 TimerVendingMachineItemNotify::registTimer  [0x08638074-0x86380bb] ===
 8638074:	55                   	push   %ebp
 8638075:	89 e5                	mov    %esp,%ebp
 8638077:	56                   	push   %esi
 8638078:	53                   	push   %ebx
 8638079:	83 ec 20             	sub    $0x20,%esp
 863807c:	8b 75 0c             	mov    0xc(%ebp),%esi
 863807f:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8638082:	e8 f5 e3 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8638087:	8b 55 10             	mov    0x10(%ebp),%edx
 863808a:	89 54 24 18          	mov    %edx,0x18(%esp)
 863808e:	89 74 24 14          	mov    %esi,0x14(%esp)
 8638092:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8638096:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 863809d:	00 
 863809e:	8b 55 08             	mov    0x8(%ebp),%edx
 86380a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86380a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86380ac:	00 
 86380ad:	89 04 24             	mov    %eax,(%esp)
 86380b0:	e8 61 8d ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86380b5:	83 c4 20             	add    $0x20,%esp
 86380b8:	5b                   	pop    %ebx
 86380b9:	5e                   	pop    %esi
 86380ba:	5d                   	pop    %ebp
 86380bb:	c3                   	ret

```

```c
// TimerVendingMachineItemNotify::registTimer @ 0x8638074

/* TimerVendingMachineItemNotify::registTimer(int, unsigned long, unsigned int, unsigned int) */

void TimerVendingMachineItemNotify::registTimer(int param_1,ulong param_2,uint param_3,uint param_4)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,0,param_1,10,param_4,param_2,param_3);
  return;
}

```

