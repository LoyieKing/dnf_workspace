# Dispatcher_P2PHolePunchingSuccessRateStatistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 0825ffb6 Dispatcher_P2PHolePunchingSuccessRateStatistics::process  [0x0825ffb6-0x8260093] ===
 825ffb6:	55                   	push   %ebp
 825ffb7:	89 e5                	mov    %esp,%ebp
 825ffb9:	56                   	push   %esi
 825ffba:	53                   	push   %ebx
 825ffbb:	83 ec 20             	sub    $0x20,%esp
 825ffbe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 825ffc3:	c7 44 24 08 4c 0b 00 	movl   $0xb4c,0x8(%esp)
 825ffca:	00 
 825ffcb:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825ffd2:	08 
 825ffd3:	89 04 24             	mov    %eax,(%esp)
 825ffd6:	e8 ab fa 02 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 825ffdb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825ffe2:	00 
 825ffe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ffe7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 825ffea:	89 04 24             	mov    %eax,(%esp)
 825ffed:	e8 34 8c e6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 825fff2:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fff5:	89 04 24             	mov    %eax,(%esp)
 825fff8:	e8 99 8c e6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 825fffd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8260001:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 8260008:	00 
 8260009:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826000c:	89 04 24             	mov    %eax,(%esp)
 826000f:	e8 3c 39 f0 ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8260014:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8260017:	89 04 24             	mov    %eax,(%esp)
 826001a:	e8 2f 8c e6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 826001f:	89 04 24             	mov    %eax,(%esp)
 8260022:	e8 57 07 00 00       	call   826077e <_ZN12CStreamGuard11GetInBufferI34MSG_P2P_HOLE_PUNCHING_SUCCESS_RATEEEPT_v>
 8260027:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826002a:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8260031:	00 
 8260032:	8b 45 10             	mov    0x10(%ebp),%eax
 8260035:	89 44 24 04          	mov    %eax,0x4(%esp)
 8260039:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826003c:	89 04 24             	mov    %eax,(%esp)
 826003f:	e8 5c d8 e1 ff       	call   807d8a0 <memcpy@plt>
 8260044:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8260049:	8d 55 ec             	lea    -0x14(%ebp),%edx
 826004c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8260050:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8260057:	00 
 8260058:	89 04 24             	mov    %eax,(%esp)
 826005b:	e8 7e 0f 31 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8260060:	bb 00 00 00 00       	mov    $0x0,%ebx
 8260065:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8260068:	89 04 24             	mov    %eax,(%esp)
 826006b:	e8 62 c8 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8260070:	89 d8                	mov    %ebx,%eax
 8260072:	83 c4 20             	add    $0x20,%esp
 8260075:	5b                   	pop    %ebx
 8260076:	5e                   	pop    %esi
 8260077:	5d                   	pop    %ebp
 8260078:	c3                   	ret
 8260079:	89 d3                	mov    %edx,%ebx
 826007b:	89 c6                	mov    %eax,%esi
 826007d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8260080:	89 04 24             	mov    %eax,(%esp)
 8260083:	e8 4a c8 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8260088:	89 f0                	mov    %esi,%eax
 826008a:	89 da                	mov    %ebx,%edx
 826008c:	89 04 24             	mov    %eax,(%esp)
 826008f:	e8 bc 36 88 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Dispatcher_P2PHolePunchingSuccessRateStatistics::process @ 0x825ffb6

/* Dispatcher_P2PHolePunchingSuccessRateStatistics::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_P2PHolePunchingSuccessRateStatistics::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_2.cpp",0xb4c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  uVar2 = CUser::GetUID((CUser *)param_2);
                    /* try { // try from 0826000f to 0826005f has its CatchHandler @ 08260079 */
  Taiwan::internal_stream(local_18,0xf,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE>(this);
  memcpy(local_10,param_3,0x16);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}

```

---

## read

```asm
// === 0825feda Dispatcher_P2PHolePunchingSuccessRateStatistics::read  [0x0825feda-0x825ffb5] ===
 825feda:	55                   	push   %ebp
 825fedb:	89 e5                	mov    %esp,%ebp
 825fedd:	83 ec 28             	sub    $0x28,%esp
 825fee0:	8b 45 10             	mov    0x10(%ebp),%eax
 825fee3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825fee6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825fee9:	83 c0 0d             	add    $0xd,%eax
 825feec:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fef3:	89 04 24             	mov    %eax,(%esp)
 825fef6:	e8 75 d0 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 825fefb:	83 f0 01             	xor    $0x1,%eax
 825fefe:	84 c0                	test   %al,%al
 825ff00:	74 29                	je     825ff2b <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0x51>
 825ff02:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ff09:	00 
 825ff0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ff11:	00 
 825ff12:	c7 44 24 04 60 9c be 	movl   $0x8be9c60,0x4(%esp)
 825ff19:	08 
 825ff1a:	c7 04 24 3d 0b 00 00 	movl   $0xb3d,(%esp)
 825ff21:	e8 b1 09 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ff26:	e9 89 00 00 00       	jmp    825ffb4 <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0xda>
 825ff2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ff2e:	83 c0 0e             	add    $0xe,%eax
 825ff31:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ff35:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ff38:	89 04 24             	mov    %eax,(%esp)
 825ff3b:	e8 00 d3 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 825ff40:	83 f0 01             	xor    $0x1,%eax
 825ff43:	84 c0                	test   %al,%al
 825ff45:	74 26                	je     825ff6d <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0x93>
 825ff47:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ff4e:	00 
 825ff4f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ff56:	00 
 825ff57:	c7 44 24 04 60 9c be 	movl   $0x8be9c60,0x4(%esp)
 825ff5e:	08 
 825ff5f:	c7 04 24 40 0b 00 00 	movl   $0xb40,(%esp)
 825ff66:	e8 6c 09 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ff6b:	eb 47                	jmp    825ffb4 <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0xda>
 825ff6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ff70:	83 c0 12             	add    $0x12,%eax
 825ff73:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ff77:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ff7a:	89 04 24             	mov    %eax,(%esp)
 825ff7d:	e8 be d2 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 825ff82:	83 f0 01             	xor    $0x1,%eax
 825ff85:	84 c0                	test   %al,%al
 825ff87:	74 26                	je     825ffaf <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0xd5>
 825ff89:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ff90:	00 
 825ff91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ff98:	00 
 825ff99:	c7 44 24 04 60 9c be 	movl   $0x8be9c60,0x4(%esp)
 825ffa0:	08 
 825ffa1:	c7 04 24 43 0b 00 00 	movl   $0xb43,(%esp)
 825ffa8:	e8 2a 09 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ffad:	eb 05                	jmp    825ffb4 <_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE+0xda>
 825ffaf:	b8 00 00 00 00       	mov    $0x0,%eax
 825ffb4:	c9                   	leave
 825ffb5:	c3                   	ret

```

```c
// Dispatcher_P2PHolePunchingSuccessRateStatistics::read @ 0x825feda

/* Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_P2PHolePunchingSuccessRateStatistics::read
          (Dispatcher_P2PHolePunchingSuccessRateStatistics *this,PacketBuf *param_1,
          MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xb43,
                         "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xb40,
                       "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xb3d,
                     "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

