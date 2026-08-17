# Dispatcher_ImageCommunicationEquipmentUse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e2280 Dispatcher_ImageCommunicationEquipmentUse::check_error  [0x081e2280-0x81e22e5] ===
 81e2280:	55                   	push   %ebp
 81e2281:	89 e5                	mov    %esp,%ebp
 81e2283:	53                   	push   %ebx
 81e2284:	83 ec 14             	sub    $0x14,%esp
 81e2287:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e228b:	75 07                	jne    81e2294 <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x14>
 81e228d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e2292:	eb 4b                	jmp    81e22df <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x5f>
 81e2294:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2297:	89 04 24             	mov    %eax,(%esp)
 81e229a:	e8 ed 80 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e229f:	83 f8 02             	cmp    $0x2,%eax
 81e22a2:	0f 9e c0             	setle  %al
 81e22a5:	84 c0                	test   %al,%al
 81e22a7:	74 07                	je     81e22b0 <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x30>
 81e22a9:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81e22ae:	eb 2f                	jmp    81e22df <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x5f>
 81e22b0:	e8 e6 9e ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e22b5:	89 04 24             	mov    %eax,(%esp)
 81e22b8:	e8 61 31 18 00       	call   836541e <_ZN12CDataManager24GetImageCommnicationDataEv>
 81e22bd:	8b 18                	mov    (%eax),%ebx
 81e22bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e22c2:	89 04 24             	mov    %eax,(%esp)
 81e22c5:	e8 be 7e f9 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81e22ca:	39 c3                	cmp    %eax,%ebx
 81e22cc:	0f 9f c0             	setg   %al
 81e22cf:	84 c0                	test   %al,%al
 81e22d1:	74 07                	je     81e22da <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x5a>
 81e22d3:	b8 0a 00 00 00       	mov    $0xa,%eax
 81e22d8:	eb 05                	jmp    81e22df <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE+0x5f>
 81e22da:	b8 00 00 00 00       	mov    $0x0,%eax
 81e22df:	83 c4 14             	add    $0x14,%esp
 81e22e2:	5b                   	pop    %ebx
 81e22e3:	5d                   	pop    %ebp
 81e22e4:	c3                   	ret
 81e22e5:	90                   	nop

```

```c
// Dispatcher_ImageCommunicationEquipmentUse::check_error @ 0x81e2280

/* Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  CDataManager *this;
  int *piVar3;
  int iVar4;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xfffffffe;
    }
    else {
      this = (CDataManager *)G_CDataManager();
      piVar3 = (int *)CDataManager::GetImageCommnicationData(this);
      iVar2 = *piVar3;
      iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
      if (iVar4 < iVar2) {
        uVar1 = 10;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e21d6 Dispatcher_ImageCommunicationEquipmentUse::process  [0x081e21d6-0x81e227f] ===
 81e21d6:	55                   	push   %ebp
 81e21d7:	89 e5                	mov    %esp,%ebp
 81e21d9:	53                   	push   %ebx
 81e21da:	83 ec 24             	sub    $0x24,%esp
 81e21dd:	8b 45 10             	mov    0x10(%ebp),%eax
 81e21e0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e21e3:	8b 45 14             	mov    0x14(%ebp),%eax
 81e21e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e21e9:	8b 45 10             	mov    0x10(%ebp),%eax
 81e21ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e21f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e21f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e21f7:	8b 45 08             	mov    0x8(%ebp),%eax
 81e21fa:	89 04 24             	mov    %eax,(%esp)
 81e21fd:	e8 7e 00 00 00       	call   81e2280 <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE>
 81e2202:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e2205:	89 42 04             	mov    %eax,0x4(%edx)
 81e2208:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e220b:	8b 40 04             	mov    0x4(%eax),%eax
 81e220e:	85 c0                	test   %eax,%eax
 81e2210:	74 07                	je     81e2219 <_ZN41Dispatcher_ImageCommunicationEquipmentUse7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81e2212:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2217:	eb 61                	jmp    81e227a <_ZN41Dispatcher_ImageCommunicationEquipmentUse7processEP5CUserR8MSG_BASER9ParamBase+0xa4>
 81e2219:	e8 7d 9f ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e221e:	89 04 24             	mov    %eax,(%esp)
 81e2221:	e8 f8 31 18 00       	call   836541e <_ZN12CDataManager24GetImageCommnicationDataEv>
 81e2226:	8b 18                	mov    (%eax),%ebx
 81e2228:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e222b:	89 04 24             	mov    %eax,(%esp)
 81e222e:	e8 5b 80 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e2233:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e223a:	00 
 81e223b:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 81e2242:	00 
 81e2243:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e2247:	89 04 24             	mov    %eax,(%esp)
 81e224a:	e8 fd d2 31 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81e224f:	e8 47 9f ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e2254:	89 04 24             	mov    %eax,(%esp)
 81e2257:	e8 c2 31 18 00       	call   836541e <_ZN12CDataManager24GetImageCommnicationDataEv>
 81e225c:	8b 10                	mov    (%eax),%edx
 81e225e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2261:	89 50 08             	mov    %edx,0x8(%eax)
 81e2264:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2267:	89 04 24             	mov    %eax,(%esp)
 81e226a:	e8 19 7f f9 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81e226f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e2272:	89 42 0c             	mov    %eax,0xc(%edx)
 81e2275:	b8 00 00 00 00       	mov    $0x0,%eax
 81e227a:	83 c4 24             	add    $0x24,%esp
 81e227d:	5b                   	pop    %ebx
 81e227e:	5d                   	pop    %ebp
 81e227f:	c3                   	ret

```

```c
// Dispatcher_ImageCommunicationEquipmentUse::process @ 0x81e21d6

/* Dispatcher_ImageCommunicationEquipmentUse::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ImageCommunicationEquipmentUse::process
          (Dispatcher_ImageCommunicationEquipmentUse *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  CDataManager *pCVar2;
  undefined4 *puVar3;
  CInventory *pCVar4;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    pCVar2 = (CDataManager *)G_CDataManager();
    puVar3 = (undefined4 *)CDataManager::GetImageCommnicationData(pCVar2);
    uVar1 = *puVar3;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar4,uVar1,0x30,1);
    pCVar2 = (CDataManager *)G_CDataManager();
    puVar3 = (undefined4 *)CDataManager::GetImageCommnicationData(pCVar2);
    *(undefined4 *)(param_3 + 8) = *puVar3;
    uVar1 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
  }
  return 0;
}

```

---

## read

```asm
// === 081e21cc Dispatcher_ImageCommunicationEquipmentUse::read  [0x081e21cc-0x81e21d5] ===
 81e21cc:	55                   	push   %ebp
 81e21cd:	89 e5                	mov    %esp,%ebp
 81e21cf:	b8 00 00 00 00       	mov    $0x0,%eax
 81e21d4:	5d                   	pop    %ebp
 81e21d5:	c3                   	ret

```

```c
// Dispatcher_ImageCommunicationEquipmentUse::read @ 0x81e21cc

/* Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081e22e6 Dispatcher_ImageCommunicationEquipmentUse::send  [0x081e22e6-0x81e23df] ===
 81e22e6:	55                   	push   %ebp
 81e22e7:	89 e5                	mov    %esp,%ebp
 81e22e9:	56                   	push   %esi
 81e22ea:	53                   	push   %ebx
 81e22eb:	83 ec 20             	sub    $0x20,%esp
 81e22ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81e22f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e22f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e22f7:	89 04 24             	mov    %eax,(%esp)
 81e22fa:	e8 4d ba 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e22ff:	c7 44 24 08 dc 01 00 	movl   $0x1dc,0x8(%esp)
 81e2306:	00 
 81e2307:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e230e:	00 
 81e230f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e2312:	89 04 24             	mov    %eax,(%esp)
 81e2315:	e8 e2 95 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e231a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e231d:	8b 40 04             	mov    0x4(%eax),%eax
 81e2320:	85 c0                	test   %eax,%eax
 81e2322:	74 2a                	je     81e234e <_ZN41Dispatcher_ImageCommunicationEquipmentUse4sendEP5CUserR9ParamBase+0x68>
 81e2324:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e232b:	00 
 81e232c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e232f:	89 04 24             	mov    %eax,(%esp)
 81e2332:	e8 e9 95 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e2337:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e233a:	8b 40 04             	mov    0x4(%eax),%eax
 81e233d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2341:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e2344:	89 04 24             	mov    %eax,(%esp)
 81e2347:	e8 d4 95 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e234c:	eb 3d                	jmp    81e238b <_ZN41Dispatcher_ImageCommunicationEquipmentUse4sendEP5CUserR9ParamBase+0xa5>
 81e234e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e2355:	00 
 81e2356:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e2359:	89 04 24             	mov    %eax,(%esp)
 81e235c:	e8 bf 95 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e2361:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2364:	8b 40 08             	mov    0x8(%eax),%eax
 81e2367:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e236b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e236e:	89 04 24             	mov    %eax,(%esp)
 81e2371:	e8 c6 95 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e2376:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2379:	8b 40 0c             	mov    0xc(%eax),%eax
 81e237c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2380:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e2383:	89 04 24             	mov    %eax,(%esp)
 81e2386:	e8 b1 95 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e238b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e2392:	00 
 81e2393:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e2396:	89 04 24             	mov    %eax,(%esp)
 81e2399:	e8 ba 95 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e239e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e23a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e23a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e23a8:	89 04 24             	mov    %eax,(%esp)
 81e23ab:	e8 0a 62 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e23b0:	eb 1b                	jmp    81e23cd <_ZN41Dispatcher_ImageCommunicationEquipmentUse4sendEP5CUserR9ParamBase+0xe7>
 81e23b2:	89 d3                	mov    %edx,%ebx
 81e23b4:	89 c6                	mov    %eax,%esi
 81e23b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e23b9:	89 04 24             	mov    %eax,(%esp)
 81e23bc:	e8 bf ba 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e23c1:	89 f0                	mov    %esi,%eax
 81e23c3:	89 da                	mov    %ebx,%edx
 81e23c5:	89 04 24             	mov    %eax,(%esp)
 81e23c8:	e8 83 13 90 00       	call   8ae3750 <_Unwind_Resume>
 81e23cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e23d0:	89 04 24             	mov    %eax,(%esp)
 81e23d3:	e8 a8 ba 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e23d8:	83 c4 20             	add    $0x20,%esp
 81e23db:	5b                   	pop    %ebx
 81e23dc:	5e                   	pop    %esi
 81e23dd:	5d                   	pop    %ebp
 81e23de:	c3                   	ret
 81e23df:	90                   	nop

```

```c
// Dispatcher_ImageCommunicationEquipmentUse::send @ 0x81e22e6

/* Dispatcher_ImageCommunicationEquipmentUse::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ImageCommunicationEquipmentUse::send
          (Dispatcher_ImageCommunicationEquipmentUse *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e2315 to 081e23af has its CatchHandler @ 081e23b2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1dc);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
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

