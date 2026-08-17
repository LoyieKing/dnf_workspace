# InstanceRentalSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CheckRentableItem

```asm
// === 082702dc InstanceRentalSystem::CheckRentableItem  [0x082702dc-0x827031f] ===
 82702dc:	55                   	push   %ebp
 82702dd:	89 e5                	mov    %esp,%ebp
 82702df:	83 ec 28             	sub    $0x28,%esp
 82702e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82702e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82702e9:	8b 45 08             	mov    0x8(%ebp),%eax
 82702ec:	89 04 24             	mov    %eax,(%esp)
 82702ef:	e8 54 00 00 00       	call   8270348 <_ZN20InstanceRentalSystem10getMachineEi>
 82702f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82702f7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82702fb:	75 07                	jne    8270304 <_ZN20InstanceRentalSystem17CheckRentableItemEij+0x28>
 82702fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8270302:	eb 19                	jmp    827031d <_ZN20InstanceRentalSystem17CheckRentableItemEij+0x41>
 8270304:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270307:	8b 00                	mov    (%eax),%eax
 8270309:	83 c0 10             	add    $0x10,%eax
 827030c:	8b 10                	mov    (%eax),%edx
 827030e:	8b 45 10             	mov    0x10(%ebp),%eax
 8270311:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270315:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270318:	89 04 24             	mov    %eax,(%esp)
 827031b:	ff d2                	call   *%edx
 827031d:	c9                   	leave
 827031e:	c3                   	ret
 827031f:	90                   	nop

```

```c
// InstanceRentalSystem::CheckRentableItem @ 0x82702dc

/* InstanceRentalSystem::CheckRentableItem(int, unsigned int) */

undefined4 __thiscall
InstanceRentalSystem::CheckRentableItem(InstanceRentalSystem *this,int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)getMachine((int)this);
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return uVar2;
}

```

---

## InstanceRentalSystem

```asm
// === 08270014 InstanceRentalSystem::InstanceRentalSystem  [0x08270014-0x827010f] ===
 8270014:	55                   	push   %ebp
 8270015:	89 e5                	mov    %esp,%ebp
 8270017:	57                   	push   %edi
 8270018:	56                   	push   %esi
 8270019:	53                   	push   %ebx
 827001a:	83 ec 1c             	sub    $0x1c,%esp
 827001d:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8270024:	e8 27 44 4b 00       	call   8724450 <_Znwj>
 8270029:	89 c3                	mov    %eax,%ebx
 827002b:	89 d8                	mov    %ebx,%eax
 827002d:	89 04 24             	mov    %eax,(%esp)
 8270030:	e8 37 1a 00 00       	call   8271a6c <_ZN20InstanceRentalSystem16RentalSystemImplC1Ev>
 8270035:	eb 18                	jmp    827004f <_ZN20InstanceRentalSystemC1Ev+0x3b>
 8270037:	89 d6                	mov    %edx,%esi
 8270039:	89 c7                	mov    %eax,%edi
 827003b:	89 1c 24             	mov    %ebx,(%esp)
 827003e:	e8 ad 44 4b 00       	call   87244f0 <_ZdlPv>
 8270043:	89 f8                	mov    %edi,%eax
 8270045:	89 f2                	mov    %esi,%edx
 8270047:	89 04 24             	mov    %eax,(%esp)
 827004a:	e8 01 37 87 00       	call   8ae3750 <_Unwind_Resume>
 827004f:	89 da                	mov    %ebx,%edx
 8270051:	8b 45 08             	mov    0x8(%ebp),%eax
 8270054:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270058:	89 04 24             	mov    %eax,(%esp)
 827005b:	e8 ce 1a 00 00       	call   8271b2e <_ZNSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEC1EPS1_>
 8270060:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8270067:	e8 e4 43 4b 00       	call   8724450 <_Znwj>
 827006c:	89 c3                	mov    %eax,%ebx
 827006e:	89 d8                	mov    %ebx,%eax
 8270070:	89 04 24             	mov    %eax,(%esp)
 8270073:	e8 48 03 00 00       	call   82703c0 <_ZN19RentalMachinePcRoomC1Ev>
 8270078:	eb 12                	jmp    827008c <_ZN20InstanceRentalSystemC1Ev+0x78>
 827007a:	89 d6                	mov    %edx,%esi
 827007c:	89 c7                	mov    %eax,%edi
 827007e:	89 1c 24             	mov    %ebx,(%esp)
 8270081:	e8 6a 44 4b 00       	call   87244f0 <_ZdlPv>
 8270086:	89 f8                	mov    %edi,%eax
 8270088:	89 f2                	mov    %esi,%edx
 827008a:	eb 60                	jmp    82700ec <_ZN20InstanceRentalSystemC1Ev+0xd8>
 827008c:	89 d8                	mov    %ebx,%eax
 827008e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8270092:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8270099:	00 
 827009a:	8b 45 08             	mov    0x8(%ebp),%eax
 827009d:	89 04 24             	mov    %eax,(%esp)
 82700a0:	e8 7b 02 00 00       	call   8270320 <_ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine>
 82700a5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 82700ac:	e8 9f 43 4b 00       	call   8724450 <_Znwj>
 82700b1:	89 c3                	mov    %eax,%ebx
 82700b3:	89 d8                	mov    %ebx,%eax
 82700b5:	89 04 24             	mov    %eax,(%esp)
 82700b8:	e8 3f ea ff ff       	call   826eafc <_ZN22RentalMachineDimensionC1Ev>
 82700bd:	eb 12                	jmp    82700d1 <_ZN20InstanceRentalSystemC1Ev+0xbd>
 82700bf:	89 d6                	mov    %edx,%esi
 82700c1:	89 c7                	mov    %eax,%edi
 82700c3:	89 1c 24             	mov    %ebx,(%esp)
 82700c6:	e8 25 44 4b 00       	call   87244f0 <_ZdlPv>
 82700cb:	89 f8                	mov    %edi,%eax
 82700cd:	89 f2                	mov    %esi,%edx
 82700cf:	eb 1b                	jmp    82700ec <_ZN20InstanceRentalSystemC1Ev+0xd8>
 82700d1:	89 d8                	mov    %ebx,%eax
 82700d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82700d7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82700de:	00 
 82700df:	8b 45 08             	mov    0x8(%ebp),%eax
 82700e2:	89 04 24             	mov    %eax,(%esp)
 82700e5:	e8 36 02 00 00       	call   8270320 <_ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine>
 82700ea:	eb 1b                	jmp    8270107 <_ZN20InstanceRentalSystemC1Ev+0xf3>
 82700ec:	89 d3                	mov    %edx,%ebx
 82700ee:	89 c6                	mov    %eax,%esi
 82700f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82700f3:	89 04 24             	mov    %eax,(%esp)
 82700f6:	e8 55 1a 00 00       	call   8271b50 <_ZNSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEED1Ev>
 82700fb:	89 f0                	mov    %esi,%eax
 82700fd:	89 da                	mov    %ebx,%edx
 82700ff:	89 04 24             	mov    %eax,(%esp)
 8270102:	e8 49 36 87 00       	call   8ae3750 <_Unwind_Resume>
 8270107:	83 c4 1c             	add    $0x1c,%esp
 827010a:	5b                   	pop    %ebx
 827010b:	5e                   	pop    %esi
 827010c:	5f                   	pop    %edi
 827010d:	5d                   	pop    %ebp
 827010e:	c3                   	ret
 827010f:	90                   	nop

```

```c
// InstanceRentalSystem::InstanceRentalSystem @ 0x8270014

/* InstanceRentalSystem::InstanceRentalSystem() */

void __thiscall InstanceRentalSystem::InstanceRentalSystem(InstanceRentalSystem *this)

{
  RentalSystemImpl *this_00;
  RentalMachinePcRoom *this_01;
  RentalMachineDimension *this_02;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 08270030 to 08270034 has its CatchHandler @ 08270037 */
  RentalSystemImpl::RentalSystemImpl(this_00);
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::auto_ptr
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this,this_00);
                    /* try { // try from 08270067 to 0827006b has its CatchHandler @ 082700ec */
  this_01 = operator_new(8);
                    /* try { // try from 08270073 to 08270077 has its CatchHandler @ 0827007a */
  RentalMachinePcRoom::RentalMachinePcRoom(this_01);
                    /* try { // try from 082700a0 to 082700b0 has its CatchHandler @ 082700ec */
  registerRentalMachine(this,1,(IRentalMachine *)this_01);
  this_02 = operator_new(8);
                    /* try { // try from 082700b8 to 082700bc has its CatchHandler @ 082700bf */
  RentalMachineDimension::RentalMachineDimension(this_02);
                    /* try { // try from 082700e5 to 082700e9 has its CatchHandler @ 082700ec */
  registerRentalMachine(this,2,(IRentalMachine *)this_02);
  return;
}

```

---

## Ready

```asm
// === 082701dc InstanceRentalSystem::Ready  [0x082701dc-0x8270287] ===
 82701dc:	55                   	push   %ebp
 82701dd:	89 e5                	mov    %esp,%ebp
 82701df:	83 ec 28             	sub    $0x28,%esp
 82701e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82701e5:	89 04 24             	mov    %eax,(%esp)
 82701e8:	e8 89 19 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 82701ed:	89 c2                	mov    %eax,%edx
 82701ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82701f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82701f6:	89 04 24             	mov    %eax,(%esp)
 82701f9:	e8 82 19 00 00       	call   8271b80 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 82701fe:	83 ec 04             	sub    $0x4,%esp
 8270201:	eb 49                	jmp    827024c <_ZN20InstanceRentalSystem5ReadyEv+0x70>
 8270203:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8270206:	89 04 24             	mov    %eax,(%esp)
 8270209:	e8 f0 19 00 00       	call   8271bfe <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEdeEv>
 827020e:	8b 40 04             	mov    0x4(%eax),%eax
 8270211:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8270214:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8270218:	75 07                	jne    8270221 <_ZN20InstanceRentalSystem5ReadyEv+0x45>
 827021a:	b8 00 00 00 00       	mov    $0x0,%eax
 827021f:	eb 65                	jmp    8270286 <_ZN20InstanceRentalSystem5ReadyEv+0xaa>
 8270221:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270224:	8b 00                	mov    (%eax),%eax
 8270226:	83 c0 0c             	add    $0xc,%eax
 8270229:	8b 10                	mov    (%eax),%edx
 827022b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827022e:	89 04 24             	mov    %eax,(%esp)
 8270231:	ff d2                	call   *%edx
 8270233:	83 f0 01             	xor    $0x1,%eax
 8270236:	84 c0                	test   %al,%al
 8270238:	74 07                	je     8270241 <_ZN20InstanceRentalSystem5ReadyEv+0x65>
 827023a:	b8 00 00 00 00       	mov    $0x0,%eax
 827023f:	eb 45                	jmp    8270286 <_ZN20InstanceRentalSystem5ReadyEv+0xaa>
 8270241:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8270244:	89 04 24             	mov    %eax,(%esp)
 8270247:	e8 94 19 00 00       	call   8271be0 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEppEv>
 827024c:	8b 45 08             	mov    0x8(%ebp),%eax
 827024f:	89 04 24             	mov    %eax,(%esp)
 8270252:	e8 1f 19 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 8270257:	89 c2                	mov    %eax,%edx
 8270259:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827025c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270260:	89 04 24             	mov    %eax,(%esp)
 8270263:	e8 3e 19 00 00       	call   8271ba6 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8270268:	83 ec 04             	sub    $0x4,%esp
 827026b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827026e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270272:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8270275:	89 04 24             	mov    %eax,(%esp)
 8270278:	e8 4f 19 00 00       	call   8271bcc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEneERKS5_>
 827027d:	84 c0                	test   %al,%al
 827027f:	75 82                	jne    8270203 <_ZN20InstanceRentalSystem5ReadyEv+0x27>
 8270281:	b8 01 00 00 00       	mov    $0x1,%eax
 8270286:	c9                   	leave
 8270287:	c3                   	ret

```

```c
// InstanceRentalSystem::Ready @ 0x82701dc

/* InstanceRentalSystem::Ready() */

undefined4 __thiscall InstanceRentalSystem::Ready(InstanceRentalSystem *this)

{
  char cVar1;
  int iVar2;
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_18 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_14 [4];
  int *local_10;
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::begin(local_18);
  while( true ) {
    std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
              ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
    std::
    map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>::
    end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18);
    local_10 = *(int **)(iVar2 + 4);
    if (local_10 == (int *)0x0) break;
    cVar1 = (**(code **)(*local_10 + 0xc))(local_10);
    if (cVar1 != '\x01') {
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18);
  }
  return 0;
}

```

---

## Rent

```asm
// === 08270288 InstanceRentalSystem::Rent  [0x08270288-0x82702db] ===
 8270288:	55                   	push   %ebp
 8270289:	89 e5                	mov    %esp,%ebp
 827028b:	83 ec 28             	sub    $0x28,%esp
 827028e:	8b 45 10             	mov    0x10(%ebp),%eax
 8270291:	8b 40 0c             	mov    0xc(%eax),%eax
 8270294:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270298:	8b 45 08             	mov    0x8(%ebp),%eax
 827029b:	89 04 24             	mov    %eax,(%esp)
 827029e:	e8 a5 00 00 00       	call   8270348 <_ZN20InstanceRentalSystem10getMachineEi>
 82702a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82702a6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82702aa:	75 07                	jne    82702b3 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE+0x2b>
 82702ac:	b8 01 00 00 00       	mov    $0x1,%eax
 82702b1:	eb 27                	jmp    82702da <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE+0x52>
 82702b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82702b6:	8b 00                	mov    (%eax),%eax
 82702b8:	83 c0 08             	add    $0x8,%eax
 82702bb:	8b 10                	mov    (%eax),%edx
 82702bd:	8b 45 14             	mov    0x14(%ebp),%eax
 82702c0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82702c4:	8b 45 10             	mov    0x10(%ebp),%eax
 82702c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82702cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82702ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 82702d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82702d5:	89 04 24             	mov    %eax,(%esp)
 82702d8:	ff d2                	call   *%edx
 82702da:	c9                   	leave
 82702db:	c3                   	ret

```

```c
// InstanceRentalSystem::Rent @ 0x8270288

/* InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

undefined4 __thiscall
InstanceRentalSystem::Rent
          (InstanceRentalSystem *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)getMachine((int)this);
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

```

---

## getMachine

```asm
// === 08270348 InstanceRentalSystem::getMachine  [0x08270348-0x82703bf] ===
 8270348:	55                   	push   %ebp
 8270349:	89 e5                	mov    %esp,%ebp
 827034b:	83 ec 28             	sub    $0x28,%esp
 827034e:	8b 45 08             	mov    0x8(%ebp),%eax
 8270351:	89 04 24             	mov    %eax,(%esp)
 8270354:	e8 1d 18 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 8270359:	89 c2                	mov    %eax,%edx
 827035b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827035e:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8270361:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8270365:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270369:	89 04 24             	mov    %eax,(%esp)
 827036c:	e8 91 19 00 00       	call   8271d02 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8270371:	83 ec 04             	sub    $0x4,%esp
 8270374:	8b 45 08             	mov    0x8(%ebp),%eax
 8270377:	89 04 24             	mov    %eax,(%esp)
 827037a:	e8 f7 17 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 827037f:	89 c2                	mov    %eax,%edx
 8270381:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8270384:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270388:	89 04 24             	mov    %eax,(%esp)
 827038b:	e8 16 18 00 00       	call   8271ba6 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8270390:	83 ec 04             	sub    $0x4,%esp
 8270393:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8270396:	89 44 24 04          	mov    %eax,0x4(%esp)
 827039a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827039d:	89 04 24             	mov    %eax,(%esp)
 82703a0:	e8 89 19 00 00       	call   8271d2e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEeqERKS5_>
 82703a5:	84 c0                	test   %al,%al
 82703a7:	74 07                	je     82703b0 <_ZN20InstanceRentalSystem10getMachineEi+0x68>
 82703a9:	b8 00 00 00 00       	mov    $0x0,%eax
 82703ae:	eb 0e                	jmp    82703be <_ZN20InstanceRentalSystem10getMachineEi+0x76>
 82703b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82703b3:	89 04 24             	mov    %eax,(%esp)
 82703b6:	e8 43 18 00 00       	call   8271bfe <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEdeEv>
 82703bb:	8b 40 04             	mov    0x4(%eax),%eax
 82703be:	c9                   	leave
 82703bf:	c3                   	ret

```

```c
// InstanceRentalSystem::getMachine @ 0x8270348

/* InstanceRentalSystem::getMachine(int) */

undefined4 InstanceRentalSystem::getMachine(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_14 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_10 [12];
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)param_1);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::find((int *)local_14);
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)param_1);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_10,local_14);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## registerRentalMachine

```asm
// === 08270320 InstanceRentalSystem::registerRentalMachine  [0x08270320-0x8270347] ===
 8270320:	55                   	push   %ebp
 8270321:	89 e5                	mov    %esp,%ebp
 8270323:	83 ec 18             	sub    $0x18,%esp
 8270326:	8b 45 08             	mov    0x8(%ebp),%eax
 8270329:	89 04 24             	mov    %eax,(%esp)
 827032c:	e8 45 18 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 8270331:	8d 55 0c             	lea    0xc(%ebp),%edx
 8270334:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270338:	89 04 24             	mov    %eax,(%esp)
 827033b:	e8 cc 18 00 00       	call   8271c0c <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEEixERS5_>
 8270340:	8b 55 10             	mov    0x10(%ebp),%edx
 8270343:	89 10                	mov    %edx,(%eax)
 8270345:	c9                   	leave
 8270346:	c3                   	ret
 8270347:	90                   	nop

```

```c
// InstanceRentalSystem::registerRentalMachine @ 0x8270320

/* InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*) */

void __thiscall
InstanceRentalSystem::registerRentalMachine
          (InstanceRentalSystem *this,int param_1,IRentalMachine *param_2)

{
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  *this_00;
  undefined4 *puVar1;
  
  this_00 = (map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
             *)std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
                         ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  puVar1 = (undefined4 *)
           std::
           map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
           ::operator[](this_00,&param_1);
  *puVar1 = param_2;
  return;
}

```

---

## ~InstanceRentalSystem

```asm
// === 08270110 InstanceRentalSystem::~InstanceRentalSystem  [0x08270110-0x82701db] ===
 8270110:	55                   	push   %ebp
 8270111:	89 e5                	mov    %esp,%ebp
 8270113:	56                   	push   %esi
 8270114:	53                   	push   %ebx
 8270115:	83 ec 20             	sub    $0x20,%esp
 8270118:	8b 45 08             	mov    0x8(%ebp),%eax
 827011b:	89 04 24             	mov    %eax,(%esp)
 827011e:	e8 53 1a 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 8270123:	89 c2                	mov    %eax,%edx
 8270125:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8270128:	89 54 24 04          	mov    %edx,0x4(%esp)
 827012c:	89 04 24             	mov    %eax,(%esp)
 827012f:	e8 4c 1a 00 00       	call   8271b80 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8270134:	83 ec 04             	sub    $0x4,%esp
 8270137:	eb 3b                	jmp    8270174 <_ZN20InstanceRentalSystemD1Ev+0x64>
 8270139:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827013c:	89 04 24             	mov    %eax,(%esp)
 827013f:	e8 ba 1a 00 00       	call   8271bfe <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEdeEv>
 8270144:	8b 40 04             	mov    0x4(%eax),%eax
 8270147:	85 c0                	test   %eax,%eax
 8270149:	74 0c                	je     8270157 <_ZN20InstanceRentalSystemD1Ev+0x47>
 827014b:	8b 10                	mov    (%eax),%edx
 827014d:	83 c2 04             	add    $0x4,%edx
 8270150:	8b 12                	mov    (%edx),%edx
 8270152:	89 04 24             	mov    %eax,(%esp)
 8270155:	ff d2                	call   *%edx
 8270157:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827015a:	89 04 24             	mov    %eax,(%esp)
 827015d:	e8 9c 1a 00 00       	call   8271bfe <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEdeEv>
 8270162:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8270169:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827016c:	89 04 24             	mov    %eax,(%esp)
 827016f:	e8 6c 1a 00 00       	call   8271be0 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEppEv>
 8270174:	8b 45 08             	mov    0x8(%ebp),%eax
 8270177:	89 04 24             	mov    %eax,(%esp)
 827017a:	e8 f7 19 00 00       	call   8271b76 <_ZNKSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEEptEv>
 827017f:	89 c2                	mov    %eax,%edx
 8270181:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8270184:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270188:	89 04 24             	mov    %eax,(%esp)
 827018b:	e8 16 1a 00 00       	call   8271ba6 <_ZNSt3mapIiP14IRentalMachineSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8270190:	83 ec 04             	sub    $0x4,%esp
 8270193:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8270196:	89 44 24 04          	mov    %eax,0x4(%esp)
 827019a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827019d:	89 04 24             	mov    %eax,(%esp)
 82701a0:	e8 27 1a 00 00       	call   8271bcc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP14IRentalMachineEEneERKS5_>
 82701a5:	84 c0                	test   %al,%al
 82701a7:	75 90                	jne    8270139 <_ZN20InstanceRentalSystemD1Ev+0x29>
 82701a9:	eb 1b                	jmp    82701c6 <_ZN20InstanceRentalSystemD1Ev+0xb6>
 82701ab:	89 d3                	mov    %edx,%ebx
 82701ad:	89 c6                	mov    %eax,%esi
 82701af:	8b 45 08             	mov    0x8(%ebp),%eax
 82701b2:	89 04 24             	mov    %eax,(%esp)
 82701b5:	e8 96 19 00 00       	call   8271b50 <_ZNSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEED1Ev>
 82701ba:	89 f0                	mov    %esi,%eax
 82701bc:	89 da                	mov    %ebx,%edx
 82701be:	89 04 24             	mov    %eax,(%esp)
 82701c1:	e8 8a 35 87 00       	call   8ae3750 <_Unwind_Resume>
 82701c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82701c9:	89 04 24             	mov    %eax,(%esp)
 82701cc:	e8 7f 19 00 00       	call   8271b50 <_ZNSt8auto_ptrIN20InstanceRentalSystem16RentalSystemImplEED1Ev>
 82701d1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82701d4:	83 c4 00             	add    $0x0,%esp
 82701d7:	5b                   	pop    %ebx
 82701d8:	5e                   	pop    %esi
 82701d9:	5d                   	pop    %ebp
 82701da:	c3                   	ret
 82701db:	90                   	nop

```

```c
// InstanceRentalSystem::~InstanceRentalSystem @ 0x8270110

/* InstanceRentalSystem::~InstanceRentalSystem() */

void __thiscall InstanceRentalSystem::~InstanceRentalSystem(InstanceRentalSystem *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_14 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_10 [4];
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
                    /* try { // try from 0827012f to 0827018f has its CatchHandler @ 082701ab */
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::begin(local_14);
  while( true ) {
    std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
              ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
    std::
    map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>::
    end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    piVar1 = *(int **)(iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
  }
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::~auto_ptr
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  return;
}

```

