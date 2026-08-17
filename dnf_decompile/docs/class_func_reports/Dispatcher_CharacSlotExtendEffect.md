# Dispatcher_CharacSlotExtendEffect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d7fb6 Dispatcher_CharacSlotExtendEffect::process  [0x081d7fb6-0x81d81e5] ===
 81d7fb6:	55                   	push   %ebp
 81d7fb7:	89 e5                	mov    %esp,%ebp
 81d7fb9:	57                   	push   %edi
 81d7fba:	56                   	push   %esi
 81d7fbb:	53                   	push   %ebx
 81d7fbc:	83 ec 4c             	sub    $0x4c,%esp
 81d7fbf:	8b 45 14             	mov    0x14(%ebp),%eax
 81d7fc2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d7fc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7fc8:	89 04 24             	mov    %eax,(%esp)
 81d7fcb:	e8 bc 23 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7fd0:	83 f8 02             	cmp    $0x2,%eax
 81d7fd3:	0f 95 c0             	setne  %al
 81d7fd6:	84 c0                	test   %al,%al
 81d7fd8:	74 14                	je     81d7fee <_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase+0x38>
 81d7fda:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d7fdd:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 81d7fe4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d7fe9:	e9 ee 01 00 00       	jmp    81d81dc <_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase+0x226>
 81d7fee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7ff1:	89 04 24             	mov    %eax,(%esp)
 81d7ff4:	e8 77 88 05 00       	call   8230870 <_ZNK5CUser18getSlotEffectCountEv>
 81d7ff9:	89 c3                	mov    %eax,%ebx
 81d7ffb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7ffe:	89 04 24             	mov    %eax,(%esp)
 81d8001:	e8 5a 88 05 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81d8006:	38 c3                	cmp    %al,%bl
 81d8008:	0f 93 c0             	setae  %al
 81d800b:	84 c0                	test   %al,%al
 81d800d:	0f 84 8f 00 00 00    	je     81d80a2 <_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase+0xec>
 81d8013:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8016:	89 04 24             	mov    %eax,(%esp)
 81d8019:	e8 42 88 05 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81d801e:	0f b6 f8             	movzbl %al,%edi
 81d8021:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8024:	89 04 24             	mov    %eax,(%esp)
 81d8027:	e8 44 88 05 00       	call   8230870 <_ZNK5CUser18getSlotEffectCountEv>
 81d802c:	0f b6 f0             	movzbl %al,%esi
 81d802f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8032:	89 04 24             	mov    %eax,(%esp)
 81d8035:	e8 34 23 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d803a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d8041:	00 
 81d8042:	89 04 24             	mov    %eax,(%esp)
 81d8045:	e8 01 10 f3 ff       	call   810904b <_Z14NumberToStringji>
 81d804a:	89 c3                	mov    %eax,%ebx
 81d804c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d8053:	00 
 81d8054:	c7 44 24 08 91 42 00 	movl   $0x4291,0x8(%esp)
 81d805b:	00 
 81d805c:	c7 44 24 04 e0 26 bd 	movl   $0x8bd26e0,0x4(%esp)
 81d8063:	08 
 81d8064:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d8067:	89 04 24             	mov    %eax,(%esp)
 81d806a:	e8 a9 76 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d806f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81d8073:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d8077:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d807b:	c7 44 24 04 fc 18 bc 	movl   $0x8bc18fc,0x4(%esp)
 81d8082:	08 
 81d8083:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d8086:	89 04 24             	mov    %eax,(%esp)
 81d8089:	e8 fa 76 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d808e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8091:	c7 40 04 12 00 00 00 	movl   $0x12,0x4(%eax)
 81d8098:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d809d:	e9 3a 01 00 00       	jmp    81d81dc <_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase+0x226>
 81d80a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d80a5:	89 04 24             	mov    %eax,(%esp)
 81d80a8:	e8 b3 87 05 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81d80ad:	0f b6 c0             	movzbl %al,%eax
 81d80b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d80b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d80b7:	89 04 24             	mov    %eax,(%esp)
 81d80ba:	e8 c1 87 05 00       	call   8230880 <_ZN5CUser18setSlotEffectCountEh>
 81d80bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d80c2:	89 04 24             	mov    %eax,(%esp)
 81d80c5:	e8 a6 87 05 00       	call   8230870 <_ZNK5CUser18getSlotEffectCountEv>
 81d80ca:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81d80cd:	88 42 08             	mov    %al,0x8(%edx)
 81d80d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d80d3:	89 04 24             	mov    %eax,(%esp)
 81d80d6:	e8 85 87 05 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81d80db:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81d80de:	88 42 09             	mov    %al,0x9(%edx)
 81d80e1:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81d80e6:	c7 44 24 08 9a 42 00 	movl   $0x429a,0x8(%esp)
 81d80ed:	00 
 81d80ee:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81d80f5:	08 
 81d80f6:	89 04 24             	mov    %eax,(%esp)
 81d80f9:	e8 88 79 0b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81d80fe:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d8105:	00 
 81d8106:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d810a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d810d:	89 04 24             	mov    %eax,(%esp)
 81d8110:	e8 11 0b ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81d8115:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8118:	89 04 24             	mov    %eax,(%esp)
 81d811b:	e8 26 0b ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81d8120:	c7 44 24 04 8a 02 00 	movl   $0x28a,0x4(%esp)
 81d8127:	00 
 81d8128:	89 04 24             	mov    %eax,(%esp)
 81d812b:	e8 26 0b ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81d8130:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8133:	89 04 24             	mov    %eax,(%esp)
 81d8136:	e8 0b 0b ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81d813b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81d8142:	ff 
 81d8143:	89 04 24             	mov    %eax,(%esp)
 81d8146:	e8 0b 0b ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81d814b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d814e:	89 04 24             	mov    %eax,(%esp)
 81d8151:	e8 f8 0a ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81d8156:	89 04 24             	mov    %eax,(%esp)
 81d8159:	e8 42 ef 05 00       	call   82370a0 <_ZN12CStreamGuard11GetInBufferI22SIG_EXTEND_CHARAC_SLOTEEPT_v>
 81d815e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d8161:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8164:	89 04 24             	mov    %eax,(%esp)
 81d8167:	e8 02 22 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d816c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d816f:	89 02                	mov    %eax,(%edx)
 81d8171:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8174:	89 04 24             	mov    %eax,(%esp)
 81d8177:	e8 f4 86 05 00       	call   8230870 <_ZNK5CUser18getSlotEffectCountEv>
 81d817c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d817f:	88 42 04             	mov    %al,0x4(%edx)
 81d8182:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8185:	89 04 24             	mov    %eax,(%esp)
 81d8188:	e8 d3 86 05 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81d818d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d8190:	88 42 05             	mov    %al,0x5(%edx)
 81d8193:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81d8198:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81d819b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d819f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81d81a6:	00 
 81d81a7:	89 04 24             	mov    %eax,(%esp)
 81d81aa:	e8 2f 8e 39 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81d81af:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d81b4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d81b7:	89 04 24             	mov    %eax,(%esp)
 81d81ba:	e8 13 47 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81d81bf:	eb 1b                	jmp    81d81dc <_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase+0x226>
 81d81c1:	89 d3                	mov    %edx,%ebx
 81d81c3:	89 c6                	mov    %eax,%esi
 81d81c5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d81c8:	89 04 24             	mov    %eax,(%esp)
 81d81cb:	e8 02 47 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81d81d0:	89 f0                	mov    %esi,%eax
 81d81d2:	89 da                	mov    %ebx,%edx
 81d81d4:	89 04 24             	mov    %eax,(%esp)
 81d81d7:	e8 74 b5 90 00       	call   8ae3750 <_Unwind_Resume>
 81d81dc:	89 d8                	mov    %ebx,%eax
 81d81de:	83 c4 4c             	add    $0x4c,%esp
 81d81e1:	5b                   	pop    %ebx
 81d81e2:	5e                   	pop    %esi
 81d81e3:	5f                   	pop    %edi
 81d81e4:	5d                   	pop    %ebp
 81d81e5:	c3                   	ret

```

```c
// Dispatcher_CharacSlotExtendEffect::process @ 0x81d7fb6

/* Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CharacSlotExtendEffect::process
          (Dispatcher_CharacSlotExtendEffect *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  ParamBase PVar4;
  SIG_EXTEND_CHARAC_SLOT SVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  CStreamGuard local_3c [8];
  cMyTrace local_34 [16];
  ParamBase *local_24;
  SIG_EXTEND_CHARAC_SLOT *local_20;
  
  local_24 = param_3;
  iVar6 = CUser::get_state(param_1);
  if (iVar6 == 2) {
    bVar1 = CUser::getSlotEffectCount(param_1);
    bVar2 = CUser::getCharacSlotLimit(param_1);
    if (bVar1 < bVar2) {
      uVar3 = CUser::getCharacSlotLimit(param_1);
      CUser::setSlotEffectCount(param_1,uVar3);
      PVar4 = (ParamBase)CUser::getSlotEffectCount(param_1);
      local_24[8] = PVar4;
      PVar4 = (ParamBase)CUser::getCharacSlotLimit(param_1);
      local_24[9] = PVar4;
      pSVar11 = (Stream *)
                StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x429a);
      CStreamGuard::CStreamGuard(local_3c,pSVar11,true);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 081d812b to 081d81ae has its CatchHandler @ 081d81c1 */
      CStreamGuard::operator<<(pCVar12,0x28a);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
      CStreamGuard::operator<<(pCVar12,-1);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
      local_20 = CStreamGuard::GetInBuffer<SIG_EXTEND_CHARAC_SLOT>(pCVar12);
      uVar10 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_20 = uVar10;
      SVar5 = (SIG_EXTEND_CHARAC_SLOT)CUser::getSlotEffectCount(param_1);
      local_20[4] = SVar5;
      SVar5 = (SIG_EXTEND_CHARAC_SLOT)CUser::getCharacSlotLimit(param_1);
      local_20[5] = SVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_3c);
      CStreamGuard::~CStreamGuard(local_3c);
    }
    else {
      uVar7 = CUser::getCharacSlotLimit(param_1);
      uVar8 = CUser::getSlotEffectCount(param_1);
      uVar9 = CUser::get_acc_id(param_1);
      uVar10 = NumberToString(uVar9,0);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x4291,0);
      cMyTrace::operator()
                (local_34,
                 "CharacSlotExtendEffect m_id(%s), SlotEffectCount(%u), CharacSlotLimit(%u)",uVar10,
                 uVar8 & 0xff,uVar7 & 0xff);
      *(undefined4 *)(local_24 + 4) = 0x12;
    }
  }
  else {
    *(undefined4 *)(local_24 + 4) = 7;
  }
  return 0;
}

```

---

## read

```asm
// === 081d7fac Dispatcher_CharacSlotExtendEffect::read  [0x081d7fac-0x81d7fb5] ===
 81d7fac:	55                   	push   %ebp
 81d7fad:	89 e5                	mov    %esp,%ebp
 81d7faf:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7fb4:	5d                   	pop    %ebp
 81d7fb5:	c3                   	ret

```

```c
// Dispatcher_CharacSlotExtendEffect::read @ 0x81d7fac

/* Dispatcher_CharacSlotExtendEffect::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CharacSlotExtendEffect::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d81e6 Dispatcher_CharacSlotExtendEffect::send  [0x081d81e6-0x81d82e7] ===
 81d81e6:	55                   	push   %ebp
 81d81e7:	89 e5                	mov    %esp,%ebp
 81d81e9:	56                   	push   %esi
 81d81ea:	53                   	push   %ebx
 81d81eb:	83 ec 20             	sub    $0x20,%esp
 81d81ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81d81f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d81f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d81f7:	89 04 24             	mov    %eax,(%esp)
 81d81fa:	e8 4d 5b 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d81ff:	c7 44 24 08 9f 01 00 	movl   $0x19f,0x8(%esp)
 81d8206:	00 
 81d8207:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d820e:	00 
 81d820f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d8212:	89 04 24             	mov    %eax,(%esp)
 81d8215:	e8 e2 36 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d821a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d821d:	8b 40 04             	mov    0x4(%eax),%eax
 81d8220:	85 c0                	test   %eax,%eax
 81d8222:	75 47                	jne    81d826b <_ZN33Dispatcher_CharacSlotExtendEffect4sendEP5CUserR9ParamBase+0x85>
 81d8224:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d822b:	00 
 81d822c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d822f:	89 04 24             	mov    %eax,(%esp)
 81d8232:	e8 e9 36 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d8237:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d823a:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81d823e:	0f b6 c0             	movzbl %al,%eax
 81d8241:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8245:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d8248:	89 04 24             	mov    %eax,(%esp)
 81d824b:	e8 d0 36 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d8250:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8253:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81d8257:	0f b6 c0             	movzbl %al,%eax
 81d825a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d825e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d8261:	89 04 24             	mov    %eax,(%esp)
 81d8264:	e8 b7 36 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d8269:	eb 28                	jmp    81d8293 <_ZN33Dispatcher_CharacSlotExtendEffect4sendEP5CUserR9ParamBase+0xad>
 81d826b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d8272:	00 
 81d8273:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d8276:	89 04 24             	mov    %eax,(%esp)
 81d8279:	e8 a2 36 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d827e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8281:	8b 40 04             	mov    0x4(%eax),%eax
 81d8284:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8288:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d828b:	89 04 24             	mov    %eax,(%esp)
 81d828e:	e8 8d 36 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d8293:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d829a:	00 
 81d829b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d829e:	89 04 24             	mov    %eax,(%esp)
 81d82a1:	e8 b2 36 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d82a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d82a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d82ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d82b0:	89 04 24             	mov    %eax,(%esp)
 81d82b3:	e8 02 03 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d82b8:	eb 1b                	jmp    81d82d5 <_ZN33Dispatcher_CharacSlotExtendEffect4sendEP5CUserR9ParamBase+0xef>
 81d82ba:	89 d3                	mov    %edx,%ebx
 81d82bc:	89 c6                	mov    %eax,%esi
 81d82be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d82c1:	89 04 24             	mov    %eax,(%esp)
 81d82c4:	e8 b7 5b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d82c9:	89 f0                	mov    %esi,%eax
 81d82cb:	89 da                	mov    %ebx,%edx
 81d82cd:	89 04 24             	mov    %eax,(%esp)
 81d82d0:	e8 7b b4 90 00       	call   8ae3750 <_Unwind_Resume>
 81d82d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d82d8:	89 04 24             	mov    %eax,(%esp)
 81d82db:	e8 a0 5b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d82e0:	83 c4 20             	add    $0x20,%esp
 81d82e3:	5b                   	pop    %ebx
 81d82e4:	5e                   	pop    %esi
 81d82e5:	5d                   	pop    %ebp
 81d82e6:	c3                   	ret
 81d82e7:	90                   	nop

```

```c
// Dispatcher_CharacSlotExtendEffect::send @ 0x81d81e6

/* Dispatcher_CharacSlotExtendEffect::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CharacSlotExtendEffect::send
          (Dispatcher_CharacSlotExtendEffect *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d8215 to 081d82b7 has its CatchHandler @ 081d82ba */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x19f);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[9]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

