# Dispatcher_UseVendingMachine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Dispatcher_UseVendingMachine

```asm
// === 0821c25c Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine  [0x0821c25c-0x821c2e5] ===
 821c25c:	55                   	push   %ebp
 821c25d:	89 e5                	mov    %esp,%ebp
 821c25f:	57                   	push   %edi
 821c260:	56                   	push   %esi
 821c261:	53                   	push   %ebx
 821c262:	83 ec 2c             	sub    $0x2c,%esp
 821c265:	8b 45 08             	mov    0x8(%ebp),%eax
 821c268:	89 04 24             	mov    %eax,(%esp)
 821c26b:	e8 e6 a7 01 00       	call   8236a56 <_ZN17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state0EEC1Ev>
 821c270:	8b 45 08             	mov    0x8(%ebp),%eax
 821c273:	c7 00 08 76 bd 08    	movl   $0x8bd7608,(%eax)
 821c279:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 821c280:	e8 cb 14 e6 ff       	call   807d750 <time@plt>
 821c285:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 821c288:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 821c28b:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 821c292:	e8 b9 81 50 00       	call   8724450 <_Znwj>
 821c297:	89 c3                	mov    %eax,%ebx
 821c299:	89 d8                	mov    %ebx,%eax
 821c29b:	89 74 24 04          	mov    %esi,0x4(%esp)
 821c29f:	89 04 24             	mov    %eax,(%esp)
 821c2a2:	e8 83 f7 ea ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 821c2a7:	eb 12                	jmp    821c2bb <_ZN28Dispatcher_UseVendingMachineC1Ev+0x5f>
 821c2a9:	89 d6                	mov    %edx,%esi
 821c2ab:	89 c7                	mov    %eax,%edi
 821c2ad:	89 1c 24             	mov    %ebx,(%esp)
 821c2b0:	e8 3b 82 50 00       	call   87244f0 <_ZdlPv>
 821c2b5:	89 f8                	mov    %edi,%eax
 821c2b7:	89 f2                	mov    %esi,%edx
 821c2b9:	eb 10                	jmp    821c2cb <_ZN28Dispatcher_UseVendingMachineC1Ev+0x6f>
 821c2bb:	89 da                	mov    %ebx,%edx
 821c2bd:	8b 45 08             	mov    0x8(%ebp),%eax
 821c2c0:	89 50 04             	mov    %edx,0x4(%eax)
 821c2c3:	83 c4 2c             	add    $0x2c,%esp
 821c2c6:	5b                   	pop    %ebx
 821c2c7:	5e                   	pop    %esi
 821c2c8:	5f                   	pop    %edi
 821c2c9:	5d                   	pop    %ebp
 821c2ca:	c3                   	ret
 821c2cb:	89 d3                	mov    %edx,%ebx
 821c2cd:	89 c6                	mov    %eax,%esi
 821c2cf:	8b 45 08             	mov    0x8(%ebp),%eax
 821c2d2:	89 04 24             	mov    %eax,(%esp)
 821c2d5:	e8 bc 93 f0 ff       	call   8125696 <_ZN17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state0EED1Ev>
 821c2da:	89 f0                	mov    %esi,%eax
 821c2dc:	89 da                	mov    %ebx,%edx
 821c2de:	89 04 24             	mov    %eax,(%esp)
 821c2e1:	e8 6a 74 8c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine @ 0x821c25c

/* Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine() */

void __thiscall
Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine(Dispatcher_UseVendingMachine *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  IPacketDispatcher<MSG_BASE,ParamBase,(ch_state)0>::IPacketDispatcher
            ((IPacketDispatcher<MSG_BASE,ParamBase,(ch_state)0> *)this);
  *(undefined ***)this = &PTR_dispatch_template_08bd7608;
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0821c292 to 0821c296 has its CatchHandler @ 0821c2cb */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0821c2a2 to 0821c2a6 has its CatchHandler @ 0821c2a9 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 4) = this_00;
  return;
}

```

---

## _getBonusItem

```asm
// === 0821c058 Dispatcher_UseVendingMachine::_getBonusItem  [0x0821c058-0x821c17b] ===
 821c058:	55                   	push   %ebp
 821c059:	89 e5                	mov    %esp,%ebp
 821c05b:	53                   	push   %ebx
 821c05c:	83 ec 24             	sub    $0x24,%esp
 821c05f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 821c062:	89 1c 24             	mov    %ebx,(%esp)
 821c065:	e8 ea f7 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821c06a:	c7 43 02 ff ff ff ff 	movl   $0xffffffff,0x2(%ebx)
 821c071:	a1 30 f7 41 09       	mov    0x941f730,%eax
 821c076:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 821c07d:	00 
 821c07e:	89 04 24             	mov    %eax,(%esp)
 821c081:	e8 12 99 ef ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 821c086:	8b 10                	mov    (%eax),%edx
 821c088:	83 c2 34             	add    $0x34,%edx
 821c08b:	8b 12                	mov    (%edx),%edx
 821c08d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821c094:	00 
 821c095:	89 04 24             	mov    %eax,(%esp)
 821c098:	ff d2                	call   *%edx
 821c09a:	83 f0 01             	xor    $0x1,%eax
 821c09d:	84 c0                	test   %al,%al
 821c09f:	0f 85 ca 00 00 00    	jne    821c16f <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0x117>
 821c0a5:	8b 45 10             	mov    0x10(%ebp),%eax
 821c0a8:	83 c0 20             	add    $0x20,%eax
 821c0ab:	89 04 24             	mov    %eax,(%esp)
 821c0ae:	e8 ff be 01 00       	call   8237fb2 <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE5emptyEv>
 821c0b3:	84 c0                	test   %al,%al
 821c0b5:	0f 85 b7 00 00 00    	jne    821c172 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0x11a>
 821c0bb:	8b 45 10             	mov    0x10(%ebp),%eax
 821c0be:	8b 40 1c             	mov    0x1c(%eax),%eax
 821c0c1:	83 e8 01             	sub    $0x1,%eax
 821c0c4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821c0c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c0ca:	8b 40 04             	mov    0x4(%eax),%eax
 821c0cd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 821c0d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c0d4:	89 04 24             	mov    %eax,(%esp)
 821c0d7:	e8 e2 f9 ea ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 821c0dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821c0df:	8b 45 10             	mov    0x10(%ebp),%eax
 821c0e2:	8d 50 20             	lea    0x20(%eax),%edx
 821c0e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c0e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c0ec:	89 04 24             	mov    %eax,(%esp)
 821c0ef:	e8 1a be 01 00       	call   8237f0e <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE5beginEv>
 821c0f4:	83 ec 04             	sub    $0x4,%esp
 821c0f7:	8b 45 10             	mov    0x10(%ebp),%eax
 821c0fa:	8d 50 20             	lea    0x20(%eax),%edx
 821c0fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821c100:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c104:	89 04 24             	mov    %eax,(%esp)
 821c107:	e8 2e be 01 00       	call   8237f3a <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE3endEv>
 821c10c:	83 ec 04             	sub    $0x4,%esp
 821c10f:	eb 46                	jmp    821c157 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0xff>
 821c111:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c114:	89 04 24             	mov    %eax,(%esp)
 821c117:	e8 8c be 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821c11c:	8b 40 04             	mov    0x4(%eax),%eax
 821c11f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 821c122:	0f 97 c0             	seta   %al
 821c125:	84 c0                	test   %al,%al
 821c127:	74 23                	je     821c14c <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0xf4>
 821c129:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c12c:	89 04 24             	mov    %eax,(%esp)
 821c12f:	e8 74 be 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821c134:	8b 00                	mov    (%eax),%eax
 821c136:	89 43 02             	mov    %eax,0x2(%ebx)
 821c139:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c13c:	89 04 24             	mov    %eax,(%esp)
 821c13f:	e8 64 be 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821c144:	8b 40 08             	mov    0x8(%eax),%eax
 821c147:	89 43 07             	mov    %eax,0x7(%ebx)
 821c14a:	eb 27                	jmp    821c173 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0x11b>
 821c14c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c14f:	89 04 24             	mov    %eax,(%esp)
 821c152:	e8 3b be 01 00       	call   8237f92 <_ZN9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEppEv>
 821c157:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821c15a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c15e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c161:	89 04 24             	mov    %eax,(%esp)
 821c164:	e8 fd bd 01 00       	call   8237f66 <_ZN9__gnu_cxxneIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 821c169:	84 c0                	test   %al,%al
 821c16b:	75 a4                	jne    821c111 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0xb9>
 821c16d:	eb 04                	jmp    821c173 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0x11b>
 821c16f:	90                   	nop
 821c170:	eb 01                	jmp    821c173 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t+0x11b>
 821c172:	90                   	nop
 821c173:	89 d8                	mov    %ebx,%eax
 821c175:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 821c178:	c9                   	leave
 821c179:	c2 04 00             	ret    $0x4

```

```c
// Dispatcher_UseVendingMachine::_getBonusItem @ 0x821c058

/* Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t const*) const */

stVendingMachineInfo_t *
Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator local_1c [4];
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)param_1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x23);
  cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if ((cVar1 == '\x01') &&
     (cVar1 = std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::empty
                        (), cVar1 == '\0')) {
    local_14 = *(int *)(in_stack_0000000c + 0x1c) - 1;
    local_10 = CMTRand::randInt(*(CMTRand **)(in_stack_00000008 + 4),&local_14);
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_18,local_1c), bVar2) {
      iVar4 = __gnu_cxx::
              __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
              ::operator->(local_18);
      if (local_10 < *(uint *)(iVar4 + 4)) {
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                 ::operator->(local_18);
        *(undefined4 *)(param_1 + 2) = *puVar5;
        iVar4 = __gnu_cxx::
                __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                ::operator->(local_18);
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(iVar4 + 8);
        return param_1;
      }
      __gnu_cxx::
      __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
      ::operator++(local_18);
    }
  }
  return param_1;
}

```

---

## _getGiveItem

```asm
// === 0821bf82 Dispatcher_UseVendingMachine::_getGiveItem  [0x0821bf82-0x821c057] ===
 821bf82:	55                   	push   %ebp
 821bf83:	89 e5                	mov    %esp,%ebp
 821bf85:	53                   	push   %ebx
 821bf86:	83 ec 24             	sub    $0x24,%esp
 821bf89:	8b 5d 08             	mov    0x8(%ebp),%ebx
 821bf8c:	89 1c 24             	mov    %ebx,(%esp)
 821bf8f:	e8 c0 f8 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821bf94:	c7 43 02 ff ff ff ff 	movl   $0xffffffff,0x2(%ebx)
 821bf9b:	8b 45 10             	mov    0x10(%ebp),%eax
 821bf9e:	8b 40 0c             	mov    0xc(%eax),%eax
 821bfa1:	83 e8 01             	sub    $0x1,%eax
 821bfa4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821bfa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bfaa:	8b 40 04             	mov    0x4(%eax),%eax
 821bfad:	8d 55 f0             	lea    -0x10(%ebp),%edx
 821bfb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bfb4:	89 04 24             	mov    %eax,(%esp)
 821bfb7:	e8 02 fb ea ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 821bfbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821bfbf:	8b 45 10             	mov    0x10(%ebp),%eax
 821bfc2:	8d 50 10             	lea    0x10(%eax),%edx
 821bfc5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821bfc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bfcc:	89 04 24             	mov    %eax,(%esp)
 821bfcf:	e8 3a bf 01 00       	call   8237f0e <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE5beginEv>
 821bfd4:	83 ec 04             	sub    $0x4,%esp
 821bfd7:	8b 45 10             	mov    0x10(%ebp),%eax
 821bfda:	8d 50 10             	lea    0x10(%eax),%edx
 821bfdd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821bfe0:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bfe4:	89 04 24             	mov    %eax,(%esp)
 821bfe7:	e8 4e bf 01 00       	call   8237f3a <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE3endEv>
 821bfec:	83 ec 04             	sub    $0x4,%esp
 821bfef:	eb 46                	jmp    821c037 <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t+0xb5>
 821bff1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821bff4:	89 04 24             	mov    %eax,(%esp)
 821bff7:	e8 ac bf 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821bffc:	8b 40 04             	mov    0x4(%eax),%eax
 821bfff:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 821c002:	0f 97 c0             	seta   %al
 821c005:	84 c0                	test   %al,%al
 821c007:	74 23                	je     821c02c <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t+0xaa>
 821c009:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c00c:	89 04 24             	mov    %eax,(%esp)
 821c00f:	e8 94 bf 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821c014:	8b 00                	mov    (%eax),%eax
 821c016:	89 43 02             	mov    %eax,0x2(%ebx)
 821c019:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c01c:	89 04 24             	mov    %eax,(%esp)
 821c01f:	e8 84 bf 01 00       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 821c024:	8b 40 08             	mov    0x8(%eax),%eax
 821c027:	89 43 07             	mov    %eax,0x7(%ebx)
 821c02a:	eb 22                	jmp    821c04e <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t+0xcc>
 821c02c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c02f:	89 04 24             	mov    %eax,(%esp)
 821c032:	e8 5b bf 01 00       	call   8237f92 <_ZN9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEppEv>
 821c037:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821c03a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c03e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c041:	89 04 24             	mov    %eax,(%esp)
 821c044:	e8 1d bf 01 00       	call   8237f66 <_ZN9__gnu_cxxneIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 821c049:	84 c0                	test   %al,%al
 821c04b:	75 a4                	jne    821bff1 <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t+0x6f>
 821c04d:	90                   	nop
 821c04e:	89 d8                	mov    %ebx,%eax
 821c050:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 821c053:	c9                   	leave
 821c054:	c2 04 00             	ret    $0x4
 821c057:	90                   	nop

```

```c
// Dispatcher_UseVendingMachine::_getGiveItem @ 0x821bf82

/* Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t const*) const */

stVendingMachineInfo_t * Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator local_1c [4];
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)param_1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  local_14 = *(int *)(in_stack_0000000c + 0xc) - 1;
  local_10 = CMTRand::randInt(*(CMTRand **)(in_stack_00000008 + 4),&local_14);
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return param_1;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
            ::operator->(local_18);
    if (local_10 < *(uint *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
    ::operator++(local_18);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
           ::operator->(local_18);
  *(undefined4 *)(param_1 + 2) = *puVar3;
  iVar2 = __gnu_cxx::
          __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
          ::operator->(local_18);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(iVar2 + 8);
  return param_1;
}

```

---

## _getVendingMachine

```asm
// === 0821b60a Dispatcher_UseVendingMachine::_getVendingMachine  [0x0821b60a-0x821b697] ===
 821b60a:	55                   	push   %ebp
 821b60b:	89 e5                	mov    %esp,%ebp
 821b60d:	83 ec 28             	sub    $0x28,%esp
 821b610:	e8 86 0b eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821b615:	89 04 24             	mov    %eax,(%esp)
 821b618:	e8 2f 00 01 00       	call   822b64c <_ZNK12CDataManager22getVendingMachineTableEv>
 821b61d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821b620:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b623:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821b626:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b62a:	89 04 24             	mov    %eax,(%esp)
 821b62d:	e8 28 c6 01 00       	call   8237c5a <_ZNKSt6vectorI18stVendingMachine_tSaIS0_EE5beginEv>
 821b632:	83 ec 04             	sub    $0x4,%esp
 821b635:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b638:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821b63b:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b63f:	89 04 24             	mov    %eax,(%esp)
 821b642:	e8 3f c6 01 00       	call   8237c86 <_ZNKSt6vectorI18stVendingMachine_tSaIS0_EE3endEv>
 821b647:	83 ec 04             	sub    $0x4,%esp
 821b64a:	eb 2f                	jmp    821b67b <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj+0x71>
 821b64c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b64f:	89 04 24             	mov    %eax,(%esp)
 821b652:	e8 9d c6 01 00       	call   8237cf4 <_ZNK9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEptEv>
 821b657:	8b 00                	mov    (%eax),%eax
 821b659:	3b 45 0c             	cmp    0xc(%ebp),%eax
 821b65c:	0f 94 c0             	sete   %al
 821b65f:	84 c0                	test   %al,%al
 821b661:	74 0d                	je     821b670 <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj+0x66>
 821b663:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b666:	89 04 24             	mov    %eax,(%esp)
 821b669:	e8 90 c6 01 00       	call   8237cfe <_ZNK9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEdeEv>
 821b66e:	eb 26                	jmp    821b696 <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj+0x8c>
 821b670:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b673:	89 04 24             	mov    %eax,(%esp)
 821b676:	e8 63 c6 01 00       	call   8237cde <_ZN9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEppEv>
 821b67b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b682:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b685:	89 04 24             	mov    %eax,(%esp)
 821b688:	e8 25 c6 01 00       	call   8237cb2 <_ZN9__gnu_cxxneIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 821b68d:	84 c0                	test   %al,%al
 821b68f:	75 bb                	jne    821b64c <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj+0x42>
 821b691:	b8 00 00 00 00       	mov    $0x0,%eax
 821b696:	c9                   	leave
 821b697:	c3                   	ret

```

```c
// Dispatcher_UseVendingMachine::_getVendingMachine @ 0x821b60a

/* Dispatcher_UseVendingMachine::_getVendingMachine(unsigned int) const */

undefined4 __thiscall
Dispatcher_UseVendingMachine::_getVendingMachine(Dispatcher_UseVendingMachine *this,uint param_1)

{
  bool bVar1;
  CDataManager *this_00;
  uint *puVar2;
  undefined4 uVar3;
  __normal_iterator local_18 [4];
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  local_14 [4];
  undefined4 local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::getVendingMachineTable(this_00);
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::begin();
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
                     ::operator->(local_14);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator++(local_14);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
          ::operator*(local_14);
  return uVar3;
}

```

---

## _getVendingMachineInfo

```asm
// === 0821b698 Dispatcher_UseVendingMachine::_getVendingMachineInfo  [0x0821b698-0x821b71b] ===
 821b698:	55                   	push   %ebp
 821b699:	89 e5                	mov    %esp,%ebp
 821b69b:	83 ec 28             	sub    $0x28,%esp
 821b69e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b6a1:	8d 50 04             	lea    0x4(%eax),%edx
 821b6a4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b6a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b6ab:	89 04 24             	mov    %eax,(%esp)
 821b6ae:	e8 55 c6 01 00       	call   8237d08 <_ZNKSt6vectorI22stVendingMachineInfo_tSaIS0_EE5beginEv>
 821b6b3:	83 ec 04             	sub    $0x4,%esp
 821b6b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b6b9:	8d 50 04             	lea    0x4(%eax),%edx
 821b6bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b6bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b6c3:	89 04 24             	mov    %eax,(%esp)
 821b6c6:	e8 69 c6 01 00       	call   8237d34 <_ZNKSt6vectorI22stVendingMachineInfo_tSaIS0_EE3endEv>
 821b6cb:	83 ec 04             	sub    $0x4,%esp
 821b6ce:	eb 2f                	jmp    821b6ff <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj+0x67>
 821b6d0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b6d3:	89 04 24             	mov    %eax,(%esp)
 821b6d6:	e8 c7 c6 01 00       	call   8237da2 <_ZNK9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 821b6db:	8b 00                	mov    (%eax),%eax
 821b6dd:	3b 45 10             	cmp    0x10(%ebp),%eax
 821b6e0:	0f 94 c0             	sete   %al
 821b6e3:	84 c0                	test   %al,%al
 821b6e5:	74 0d                	je     821b6f4 <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj+0x5c>
 821b6e7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b6ea:	89 04 24             	mov    %eax,(%esp)
 821b6ed:	e8 ba c6 01 00       	call   8237dac <_ZNK9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 821b6f2:	eb 26                	jmp    821b71a <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj+0x82>
 821b6f4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b6f7:	89 04 24             	mov    %eax,(%esp)
 821b6fa:	e8 8d c6 01 00       	call   8237d8c <_ZN9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 821b6ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821b702:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b706:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b709:	89 04 24             	mov    %eax,(%esp)
 821b70c:	e8 4f c6 01 00       	call   8237d60 <_ZN9__gnu_cxxneIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 821b711:	84 c0                	test   %al,%al
 821b713:	75 bb                	jne    821b6d0 <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj+0x38>
 821b715:	b8 00 00 00 00       	mov    $0x0,%eax
 821b71a:	c9                   	leave
 821b71b:	c3                   	ret

```

```c
// Dispatcher_UseVendingMachine::_getVendingMachineInfo @ 0x821b698

/* Dispatcher_UseVendingMachine::_getVendingMachineInfo(stVendingMachine_t const*, unsigned int)
   const */

undefined4 __thiscall
Dispatcher_UseVendingMachine::_getVendingMachineInfo
          (Dispatcher_UseVendingMachine *this,stVendingMachine_t *param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
  local_10 [12];
  
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::begin();
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
                     ::operator->(local_10);
    if (*puVar2 == param_2) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
    ::operator++(local_10);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
          ::operator*(local_10);
  return uVar3;
}

```

---

## _notifyItemInfo

```asm
// === 0821c17c Dispatcher_UseVendingMachine::_notifyItemInfo  [0x0821c17c-0x821c25b] ===
 821c17c:	55                   	push   %ebp
 821c17d:	89 e5                	mov    %esp,%ebp
 821c17f:	56                   	push   %esi
 821c180:	53                   	push   %ebx
 821c181:	83 ec 30             	sub    $0x30,%esp
 821c184:	8b 45 14             	mov    0x14(%ebp),%eax
 821c187:	8d 50 04             	lea    0x4(%eax),%edx
 821c18a:	8b 45 14             	mov    0x14(%ebp),%eax
 821c18d:	89 54 24 08          	mov    %edx,0x8(%esp)
 821c191:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c195:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821c198:	89 04 24             	mov    %eax,(%esp)
 821c19b:	e8 56 be 01 00       	call   8237ff6 <_ZNSt4pairIiiEC1IRKmRKjEEOT_OT0_>
 821c1a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c1a3:	8d 50 2c             	lea    0x2c(%eax),%edx
 821c1a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821c1a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c1ad:	89 04 24             	mov    %eax,(%esp)
 821c1b0:	e8 97 50 ef ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 821c1b5:	83 ec 04             	sub    $0x4,%esp
 821c1b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c1bb:	8d 50 2c             	lea    0x2c(%eax),%edx
 821c1be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821c1c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c1c5:	89 04 24             	mov    %eax,(%esp)
 821c1c8:	e8 53 50 ef ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 821c1cd:	83 ec 04             	sub    $0x4,%esp
 821c1d0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821c1d3:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 821c1d6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821c1da:	8b 55 ec             	mov    -0x14(%ebp),%edx
 821c1dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 821c1e1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821c1e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c1e8:	89 04 24             	mov    %eax,(%esp)
 821c1eb:	e8 37 be 01 00       	call   8238027 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEES3_ET_SA_SA_RKT0_>
 821c1f0:	83 ec 04             	sub    $0x4,%esp
 821c1f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c1f6:	8d 50 2c             	lea    0x2c(%eax),%edx
 821c1f9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821c1fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c200:	89 04 24             	mov    %eax,(%esp)
 821c203:	e8 44 50 ef ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 821c208:	83 ec 04             	sub    $0x4,%esp
 821c20b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821c20e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c212:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821c215:	89 04 24             	mov    %eax,(%esp)
 821c218:	e8 ba 61 ef ff       	call   81123d7 <_ZN9__gnu_cxxeqIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 821c21d:	84 c0                	test   %al,%al
 821c21f:	75 30                	jne    821c251 <_ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE+0xd5>
 821c221:	8b 45 14             	mov    0x14(%ebp),%eax
 821c224:	8b 70 04             	mov    0x4(%eax),%esi
 821c227:	8b 45 14             	mov    0x14(%ebp),%eax
 821c22a:	8b 18                	mov    (%eax),%ebx
 821c22c:	8b 45 10             	mov    0x10(%ebp),%eax
 821c22f:	89 04 24             	mov    %eax,(%esp)
 821c232:	e8 5f ca ea ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 821c237:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 821c23e:	00 
 821c23f:	89 74 24 08          	mov    %esi,0x8(%esp)
 821c243:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821c247:	89 04 24             	mov    %eax,(%esp)
 821c24a:	e8 25 be 41 00       	call   8638074 <_ZN29TimerVendingMachineItemNotify11registTimerEimjj>
 821c24f:	eb 01                	jmp    821c252 <_ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE+0xd6>
 821c251:	90                   	nop
 821c252:	8d 65 f8             	lea    -0x8(%ebp),%esp
 821c255:	83 c4 00             	add    $0x0,%esp
 821c258:	5b                   	pop    %ebx
 821c259:	5e                   	pop    %esi
 821c25a:	5d                   	pop    %ebp
 821c25b:	c3                   	ret

```

```c
// Dispatcher_UseVendingMachine::_notifyItemInfo @ 0x821c17c

/* Dispatcher_UseVendingMachine::_notifyItemInfo(stVendingMachineInfo_t const*, CUser*,
   Dispatcher_UseVendingMachine::stPutItemResult_t const&) const */

void __thiscall
Dispatcher_UseVendingMachine::_notifyItemInfo
          (Dispatcher_UseVendingMachine *this,stVendingMachineInfo_t *param_1,CUser *param_2,
          stPutItemResult_t *param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_24 [4];
  pair<int,int> local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [4];
  
  std::pair<int,int>::pair<unsigned_long_const&,unsigned_int_const&>
            (local_20,(ulong *)param_3,(uint *)(param_3 + 4));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
            (local_24,local_14,local_18,local_20);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  bVar3 = __gnu_cxx::operator==(local_24,local_10);
  if (!bVar3) {
    uVar1 = *(uint *)(param_3 + 4);
    uVar2 = *(ulong *)param_3;
    iVar4 = CUser::GetUID(param_2);
    TimerVendingMachineItemNotify::registTimer(iVar4,uVar2,uVar1,5);
  }
  return;
}

```

---

## _putItemIntoUser

```asm
// === 0821b71c Dispatcher_UseVendingMachine::_putItemIntoUser  [0x0821b71c-0x821bf81] ===
 821b71c:	55                   	push   %ebp
 821b71d:	89 e5                	mov    %esp,%ebp
 821b71f:	57                   	push   %edi
 821b720:	56                   	push   %esi
 821b721:	53                   	push   %ebx
 821b722:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 821b728:	8b 45 18             	mov    0x18(%ebp),%eax
 821b72b:	8b 55 10             	mov    0x10(%ebp),%edx
 821b72e:	89 10                	mov    %edx,(%eax)
 821b730:	8b 45 18             	mov    0x18(%ebp),%eax
 821b733:	8b 55 14             	mov    0x14(%ebp),%edx
 821b736:	89 50 04             	mov    %edx,0x4(%eax)
 821b739:	8b 45 18             	mov    0x18(%ebp),%eax
 821b73c:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 821b743:	8b 45 18             	mov    0x18(%ebp),%eax
 821b746:	66 c7 40 0c ff ff    	movw   $0xffff,0xc(%eax)
 821b74c:	8b 45 18             	mov    0x18(%ebp),%eax
 821b74f:	c6 40 0e 01          	movb   $0x1,0xe(%eax)
 821b753:	8b 45 18             	mov    0x18(%ebp),%eax
 821b756:	8b 00                	mov    (%eax),%eax
 821b758:	83 f8 ff             	cmp    $0xffffffff,%eax
 821b75b:	0f 84 0e 08 00 00    	je     821bf6f <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x853>
 821b761:	66 c7 45 d6 ff ff    	movw   $0xffff,-0x2a(%ebp)
 821b767:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 821b76b:	75 3d                	jne    821b7aa <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x8e>
 821b76d:	8b 5d 14             	mov    0x14(%ebp),%ebx
 821b770:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b773:	89 04 24             	mov    %eax,(%esp)
 821b776:	e8 13 eb eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821b77b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 821b782:	00 
 821b783:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821b78a:	00 
 821b78b:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 821b792:	00 
 821b793:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b797:	89 04 24             	mov    %eax,(%esp)
 821b79a:	e8 fd 3a 2e 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 821b79f:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 821b7a5:	e9 8d 07 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821b7aa:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 821b7ae:	75 71                	jne    821b821 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x105>
 821b7b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b7b3:	89 04 24             	mov    %eax,(%esp)
 821b7b6:	e8 d3 ea eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821b7bb:	89 04 24             	mov    %eax,(%esp)
 821b7be:	e8 b7 54 ef ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 821b7c3:	89 c3                	mov    %eax,%ebx
 821b7c5:	03 5d 14             	add    0x14(%ebp),%ebx
 821b7c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b7cb:	89 04 24             	mov    %eax,(%esp)
 821b7ce:	e8 bb ea eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821b7d3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b7d7:	89 04 24             	mov    %eax,(%esp)
 821b7da:	e8 a7 54 ef ff       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 821b7df:	8b 5d 14             	mov    0x14(%ebp),%ebx
 821b7e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b7e5:	89 04 24             	mov    %eax,(%esp)
 821b7e8:	e8 91 ea eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821b7ed:	89 04 24             	mov    %eax,(%esp)
 821b7f0:	e8 85 54 ef ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 821b7f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 821b7f8:	81 c2 00 97 07 00    	add    $0x79700,%edx
 821b7fe:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 821b805:	00 
 821b806:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821b80a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b80e:	89 14 24             	mov    %edx,(%esp)
 821b811:	e8 42 84 46 00       	call   8683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>
 821b816:	66 c7 45 d6 01 00    	movw   $0x1,-0x2a(%ebp)
 821b81c:	e9 16 07 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821b821:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 821b825:	75 25                	jne    821b84c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x130>
 821b827:	8b 45 14             	mov    0x14(%ebp),%eax
 821b82a:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 821b831:	00 
 821b832:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b836:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b839:	89 04 24             	mov    %eax,(%esp)
 821b83c:	e8 eb 44 43 00       	call   864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>
 821b841:	66 c7 45 d6 02 00    	movw   $0x2,-0x2a(%ebp)
 821b847:	e9 eb 06 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821b84c:	8b 5d 10             	mov    0x10(%ebp),%ebx
 821b84f:	e8 47 09 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821b854:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b858:	89 04 24             	mov    %eax,(%esp)
 821b85b:	e8 d2 41 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 821b860:	89 45 d8             	mov    %eax,-0x28(%ebp)
 821b863:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 821b867:	75 0c                	jne    821b875 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x159>
 821b869:	8b 45 18             	mov    0x18(%ebp),%eax
 821b86c:	c6 40 0e 00          	movb   $0x0,0xe(%eax)
 821b870:	e9 01 07 00 00       	jmp    821bf76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x85a>
 821b875:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 821b87b:	89 04 24             	mov    %eax,(%esp)
 821b87e:	e8 d1 ff ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821b883:	8b 45 10             	mov    0x10(%ebp),%eax
 821b886:	89 85 39 ff ff ff    	mov    %eax,-0xc7(%ebp)
 821b88c:	8b 5d 14             	mov    0x14(%ebp),%ebx
 821b88f:	e8 07 09 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821b894:	8b 40 0c             	mov    0xc(%eax),%eax
 821b897:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821b89b:	8d 95 37 ff ff ff    	lea    -0xc9(%ebp),%edx
 821b8a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 821b8a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b8ac:	00 
 821b8ad:	89 04 24             	mov    %eax,(%esp)
 821b8b0:	e8 03 67 2f 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 821b8b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821b8b8:	8b 00                	mov    (%eax),%eax
 821b8ba:	83 c0 0c             	add    $0xc,%eax
 821b8bd:	8b 10                	mov    (%eax),%edx
 821b8bf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821b8c2:	89 04 24             	mov    %eax,(%esp)
 821b8c5:	ff d2                	call   *%edx
 821b8c7:	83 f8 17             	cmp    $0x17,%eax
 821b8ca:	0f 94 c0             	sete   %al
 821b8cd:	84 c0                	test   %al,%al
 821b8cf:	0f 84 f1 00 00 00    	je     821b9c6 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x2aa>
 821b8d5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821b8d8:	89 04 24             	mov    %eax,(%esp)
 821b8db:	e8 2a 11 01 00       	call   822ca0a <_ZNK14CStackableItem19getGlobalEffectDataEv>
 821b8e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b8e4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821b8e7:	89 04 24             	mov    %eax,(%esp)
 821b8ea:	e8 c7 c4 01 00       	call   8237db6 <_ZNSt6vectorI16stGlobalEffect_tSaIS0_EEC1ERKS2_>
 821b8ef:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b8f2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 821b8f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b8f9:	89 04 24             	mov    %eax,(%esp)
 821b8fc:	e8 69 c5 01 00       	call   8237e6a <_ZNKSt6vectorI16stGlobalEffect_tSaIS0_EE5beginEv>
 821b901:	83 ec 04             	sub    $0x4,%esp
 821b904:	8d 45 c0             	lea    -0x40(%ebp),%eax
 821b907:	8d 55 c8             	lea    -0x38(%ebp),%edx
 821b90a:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b90e:	89 04 24             	mov    %eax,(%esp)
 821b911:	e8 80 c5 01 00       	call   8237e96 <_ZNKSt6vectorI16stGlobalEffect_tSaIS0_EE3endEv>
 821b916:	83 ec 04             	sub    $0x4,%esp
 821b919:	eb 68                	jmp    821b983 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x267>
 821b91b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b91e:	89 04 24             	mov    %eax,(%esp)
 821b921:	e8 de c5 01 00       	call   8237f04 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stGlobalEffect_tSt6vectorIS1_SaIS1_EEEptEv>
 821b926:	8b 40 08             	mov    0x8(%eax),%eax
 821b929:	89 c7                	mov    %eax,%edi
 821b92b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b92e:	89 04 24             	mov    %eax,(%esp)
 821b931:	e8 f2 56 ee ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 821b936:	89 c3                	mov    %eax,%ebx
 821b938:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b93b:	89 04 24             	mov    %eax,(%esp)
 821b93e:	e8 c1 c5 01 00       	call   8237f04 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stGlobalEffect_tSt6vectorIS1_SaIS1_EEEptEv>
 821b943:	8b 70 04             	mov    0x4(%eax),%esi
 821b946:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b949:	89 04 24             	mov    %eax,(%esp)
 821b94c:	e8 b3 c5 01 00       	call   8237f04 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stGlobalEffect_tSt6vectorIS1_SaIS1_EEEptEv>
 821b951:	8b 10                	mov    (%eax),%edx
 821b953:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 821b958:	89 7c 24 14          	mov    %edi,0x14(%esp)
 821b95c:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 821b963:	00 
 821b964:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821b968:	89 74 24 08          	mov    %esi,0x8(%esp)
 821b96c:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b970:	89 04 24             	mov    %eax,(%esp)
 821b973:	e8 ba bf 29 00       	call   84b7932 <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll>
 821b978:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b97b:	89 04 24             	mov    %eax,(%esp)
 821b97e:	e8 6b c5 01 00       	call   8237eee <_ZN9__gnu_cxx17__normal_iteratorIPK16stGlobalEffect_tSt6vectorIS1_SaIS1_EEEppEv>
 821b983:	8d 45 c0             	lea    -0x40(%ebp),%eax
 821b986:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b98a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821b98d:	89 04 24             	mov    %eax,(%esp)
 821b990:	e8 2d c5 01 00       	call   8237ec2 <_ZN9__gnu_cxxneIPK16stGlobalEffect_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 821b995:	84 c0                	test   %al,%al
 821b997:	75 82                	jne    821b91b <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x1ff>
 821b999:	eb 1b                	jmp    821b9b6 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x29a>
 821b99b:	89 d3                	mov    %edx,%ebx
 821b99d:	89 c6                	mov    %eax,%esi
 821b99f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821b9a2:	89 04 24             	mov    %eax,(%esp)
 821b9a5:	e8 80 a2 01 00       	call   8235c2a <_ZNSt6vectorI16stGlobalEffect_tSaIS0_EED1Ev>
 821b9aa:	89 f0                	mov    %esi,%eax
 821b9ac:	89 da                	mov    %ebx,%edx
 821b9ae:	89 04 24             	mov    %eax,(%esp)
 821b9b1:	e8 9a 7d 8c 00       	call   8ae3750 <_Unwind_Resume>
 821b9b6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821b9b9:	89 04 24             	mov    %eax,(%esp)
 821b9bc:	e8 69 a2 01 00       	call   8235c2a <_ZNSt6vectorI16stGlobalEffect_tSaIS0_EED1Ev>
 821b9c1:	e9 71 05 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821b9c6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821b9c9:	8b 00                	mov    (%eax),%eax
 821b9cb:	83 c0 10             	add    $0x10,%eax
 821b9ce:	8b 10                	mov    (%eax),%edx
 821b9d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821b9d3:	89 04 24             	mov    %eax,(%esp)
 821b9d6:	ff d2                	call   *%edx
 821b9d8:	84 c0                	test   %al,%al
 821b9da:	0f 84 96 00 00 00    	je     821ba76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x35a>
 821b9e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b9e3:	89 04 24             	mov    %eax,(%esp)
 821b9e6:	e8 63 02 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821b9eb:	8d 55 a8             	lea    -0x58(%ebp),%edx
 821b9ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 821b9f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b9f6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821b9fd:	e8 4e bd 29 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 821ba02:	89 c6                	mov    %eax,%esi
 821ba04:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821ba07:	89 04 24             	mov    %eax,(%esp)
 821ba0a:	e8 51 52 ef ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 821ba0f:	89 c3                	mov    %eax,%ebx
 821ba11:	8b 7d 10             	mov    0x10(%ebp),%edi
 821ba14:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ba17:	89 04 24             	mov    %eax,(%esp)
 821ba1a:	e8 6f e8 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821ba1f:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 821ba26:	00 
 821ba27:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 821ba2e:	00 
 821ba2f:	c7 44 24 1c 0e 00 00 	movl   $0xe,0x1c(%esp)
 821ba36:	00 
 821ba37:	89 74 24 18          	mov    %esi,0x18(%esp)
 821ba3b:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 821ba42:	ff 
 821ba43:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 821ba4a:	00 
 821ba4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ba52:	00 
 821ba53:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821ba57:	89 7c 24 04          	mov    %edi,0x4(%esp)
 821ba5b:	89 04 24             	mov    %eax,(%esp)
 821ba5e:	e8 3b e1 2e 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 821ba63:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 821ba67:	8b 45 18             	mov    0x18(%ebp),%eax
 821ba6a:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 821ba71:	e9 c1 04 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821ba76:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821ba79:	8b 00                	mov    (%eax),%eax
 821ba7b:	83 c0 14             	add    $0x14,%eax
 821ba7e:	8b 10                	mov    (%eax),%edx
 821ba80:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821ba83:	89 04 24             	mov    %eax,(%esp)
 821ba86:	ff d2                	call   *%edx
 821ba88:	84 c0                	test   %al,%al
 821ba8a:	74 1e                	je     821baaa <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x38e>
 821ba8c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821ba8f:	8b 00                	mov    (%eax),%eax
 821ba91:	83 c0 0c             	add    $0xc,%eax
 821ba94:	8b 10                	mov    (%eax),%edx
 821ba96:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821ba99:	89 04 24             	mov    %eax,(%esp)
 821ba9c:	ff d2                	call   *%edx
 821ba9e:	83 f8 16             	cmp    $0x16,%eax
 821baa1:	75 07                	jne    821baaa <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x38e>
 821baa3:	b8 01 00 00 00       	mov    $0x1,%eax
 821baa8:	eb 05                	jmp    821baaf <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x393>
 821baaa:	b8 00 00 00 00       	mov    $0x0,%eax
 821baaf:	84 c0                	test   %al,%al
 821bab1:	0f 84 65 01 00 00    	je     821bc1c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x500>
 821bab7:	0f b6 85 38 ff ff ff 	movzbl -0xc8(%ebp),%eax
 821babe:	3c 05                	cmp    $0x5,%al
 821bac0:	0f 85 71 04 00 00    	jne    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821bac6:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 821bacc:	89 04 24             	mov    %eax,(%esp)
 821bacf:	e8 da b3 11 00       	call   8336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>
 821bad4:	83 f0 01             	xor    $0x1,%eax
 821bad7:	84 c0                	test   %al,%al
 821bad9:	0f 85 93 04 00 00    	jne    821bf72 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x856>
 821badf:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bae2:	89 04 24             	mov    %eax,(%esp)
 821bae5:	e8 a4 e7 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821baea:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 821baf1:	00 
 821baf2:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 821baf9:	00 
 821bafa:	c7 44 24 44 23 00 00 	movl   $0x23,0x44(%esp)
 821bb01:	00 
 821bb02:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 821bb08:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bb0c:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 821bb12:	89 54 24 08          	mov    %edx,0x8(%esp)
 821bb16:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 821bb1c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821bb20:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 821bb26:	89 54 24 10          	mov    %edx,0x10(%esp)
 821bb2a:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 821bb30:	89 54 24 14          	mov    %edx,0x14(%esp)
 821bb34:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 821bb3a:	89 54 24 18          	mov    %edx,0x18(%esp)
 821bb3e:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 821bb44:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 821bb48:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 821bb4e:	89 54 24 20          	mov    %edx,0x20(%esp)
 821bb52:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 821bb58:	89 54 24 24          	mov    %edx,0x24(%esp)
 821bb5c:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 821bb62:	89 54 24 28          	mov    %edx,0x28(%esp)
 821bb66:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 821bb6c:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 821bb70:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 821bb76:	89 54 24 30          	mov    %edx,0x30(%esp)
 821bb7a:	8b 95 67 ff ff ff    	mov    -0x99(%ebp),%edx
 821bb80:	89 54 24 34          	mov    %edx,0x34(%esp)
 821bb84:	8b 95 6b ff ff ff    	mov    -0x95(%ebp),%edx
 821bb8a:	89 54 24 38          	mov    %edx,0x38(%esp)
 821bb8e:	8b 95 6f ff ff ff    	mov    -0x91(%ebp),%edx
 821bb94:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 821bb98:	0f b6 95 73 ff ff ff 	movzbl -0x8d(%ebp),%edx
 821bb9f:	88 54 24 40          	mov    %dl,0x40(%esp)
 821bba3:	89 04 24             	mov    %eax,(%esp)
 821bba6:	e8 db 71 2e 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 821bbab:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 821bbaf:	66 83 7d d6 00       	cmpw   $0x0,-0x2a(%ebp)
 821bbb4:	78 57                	js     821bc0d <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x4f1>
 821bbb6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821bbb9:	89 04 24             	mov    %eax,(%esp)
 821bbbc:	e8 45 57 ed ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 821bbc1:	89 c6                	mov    %eax,%esi
 821bbc3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821bbc6:	89 04 24             	mov    %eax,(%esp)
 821bbc9:	e8 92 50 ef ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 821bbce:	89 c3                	mov    %eax,%ebx
 821bbd0:	0f bf 7d d6          	movswl -0x2a(%ebp),%edi
 821bbd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bbd7:	89 04 24             	mov    %eax,(%esp)
 821bbda:	e8 af e6 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821bbdf:	89 04 24             	mov    %eax,(%esp)
 821bbe2:	e8 81 19 ec ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 821bbe7:	89 74 24 14          	mov    %esi,0x14(%esp)
 821bbeb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 821bbef:	c7 44 24 0c 23 00 00 	movl   $0x23,0xc(%esp)
 821bbf6:	00 
 821bbf7:	89 7c 24 08          	mov    %edi,0x8(%esp)
 821bbfb:	8d 95 37 ff ff ff    	lea    -0xc9(%ebp),%edx
 821bc01:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bc05:	89 04 24             	mov    %eax,(%esp)
 821bc08:	e8 f7 f5 11 00       	call   833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>
 821bc0d:	8b 45 18             	mov    0x18(%ebp),%eax
 821bc10:	c7 40 08 07 00 00 00 	movl   $0x7,0x8(%eax)
 821bc17:	e9 1b 03 00 00       	jmp    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821bc1c:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 821bc23:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 821bc2a:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 821bc2e:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 821bc32:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 821bc38:	89 c2                	mov    %eax,%edx
 821bc3a:	a1 44 f7 41 09       	mov    0x941f744,%eax
 821bc3f:	8d 4d 9f             	lea    -0x61(%ebp),%ecx
 821bc42:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 821bc46:	8d 4d a0             	lea    -0x60(%ebp),%ecx
 821bc49:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 821bc4d:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 821bc50:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 821bc54:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bc58:	89 04 24             	mov    %eax,(%esp)
 821bc5b:	e8 be 8d 10 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 821bc60:	84 c0                	test   %al,%al
 821bc62:	0f 84 e2 01 00 00    	je     821be4a <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x72e>
 821bc68:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821bc6b:	8b 00                	mov    (%eax),%eax
 821bc6d:	83 c0 0c             	add    $0xc,%eax
 821bc70:	8b 10                	mov    (%eax),%edx
 821bc72:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821bc75:	89 04 24             	mov    %eax,(%esp)
 821bc78:	ff d2                	call   *%edx
 821bc7a:	83 f8 10             	cmp    $0x10,%eax
 821bc7d:	0f 95 c0             	setne  %al
 821bc80:	84 c0                	test   %al,%al
 821bc82:	0f 84 c2 01 00 00    	je     821be4a <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x72e>
 821bc88:	8d 45 90             	lea    -0x70(%ebp),%eax
 821bc8b:	89 04 24             	mov    %eax,(%esp)
 821bc8e:	e8 ff ef f2 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 821bc93:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 821bc9a:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 821bca0:	89 c3                	mov    %eax,%ebx
 821bca2:	e8 f4 04 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821bca7:	8b 40 0c             	mov    0xc(%eax),%eax
 821bcaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821bcae:	89 04 24             	mov    %eax,(%esp)
 821bcb1:	e8 56 e4 f5 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 821bcb6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 821bcb9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821bcc0:	e8 d9 ff ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 821bcc5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 821bcc8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 821bcce:	89 04 24             	mov    %eax,(%esp)
 821bcd1:	e8 6e e5 f5 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 821bcd6:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 821bcdc:	89 c2                	mov    %eax,%edx
 821bcde:	a1 44 f7 41 09       	mov    0x941f744,%eax
 821bce3:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 821bcea:	00 
 821bceb:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 821bcf2:	00 
 821bcf3:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 821bcfa:	00 
 821bcfb:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 821bd02:	00 
 821bd03:	8d 8d 74 ff ff ff    	lea    -0x8c(%ebp),%ecx
 821bd09:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 821bd0d:	8d 4d 90             	lea    -0x70(%ebp),%ecx
 821bd10:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 821bd14:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 821bd1b:	00 
 821bd1c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 821bd1f:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 821bd23:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 821bd26:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 821bd2a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 821bd2d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 821bd31:	89 54 24 08          	mov    %edx,0x8(%esp)
 821bd35:	8b 55 0c             	mov    0xc(%ebp),%edx
 821bd38:	89 54 24 04          	mov    %edx,0x4(%esp)
 821bd3c:	89 04 24             	mov    %eax,(%esp)
 821bd3f:	e8 3a 9b 10 00       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 821bd44:	84 c0                	test   %al,%al
 821bd46:	0f 84 8d 00 00 00    	je     821bdd9 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x6bd>
 821bd4c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 821bd4f:	85 c0                	test   %eax,%eax
 821bd51:	74 0a                	je     821bd5d <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x641>
 821bd53:	bb 00 00 00 00       	mov    $0x0,%ebx
 821bd58:	e9 9f 00 00 00       	jmp    821bdfc <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x6e0>
 821bd5d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 821bd61:	74 20                	je     821bd83 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x667>
 821bd63:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821bd66:	89 44 24 04          	mov    %eax,0x4(%esp)
 821bd6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bd6d:	89 04 24             	mov    %eax,(%esp)
 821bd70:	e8 03 1b 43 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 821bd75:	83 f0 01             	xor    $0x1,%eax
 821bd78:	84 c0                	test   %al,%al
 821bd7a:	74 07                	je     821bd83 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x667>
 821bd7c:	b8 01 00 00 00       	mov    $0x1,%eax
 821bd81:	eb 05                	jmp    821bd88 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x66c>
 821bd83:	b8 00 00 00 00       	mov    $0x0,%eax
 821bd88:	84 c0                	test   %al,%al
 821bd8a:	74 4d                	je     821bdd9 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x6bd>
 821bd8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821bd8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 821bd93:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bd96:	89 04 24             	mov    %eax,(%esp)
 821bd99:	e8 b0 1a 43 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 821bd9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821bda5:	00 
 821bda6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821bda9:	89 44 24 08          	mov    %eax,0x8(%esp)
 821bdad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821bdb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 821bdb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bdb7:	89 04 24             	mov    %eax,(%esp)
 821bdba:	e8 71 9c 10 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 821bdbf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821bdc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 821bdc6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821bdcd:	00 
 821bdce:	8b 45 0c             	mov    0xc(%ebp),%eax
 821bdd1:	89 04 24             	mov    %eax,(%esp)
 821bdd4:	e8 cb 1b 43 00       	call   864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>
 821bdd9:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 821bddd:	bb 01 00 00 00       	mov    $0x1,%ebx
 821bde2:	eb 18                	jmp    821bdfc <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x6e0>
 821bde4:	89 d3                	mov    %edx,%ebx
 821bde6:	89 c6                	mov    %eax,%esi
 821bde8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 821bdee:	89 04 24             	mov    %eax,(%esp)
 821bdf1:	e8 06 e5 f5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 821bdf6:	89 f0                	mov    %esi,%eax
 821bdf8:	89 da                	mov    %ebx,%edx
 821bdfa:	eb 20                	jmp    821be1c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x700>
 821bdfc:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 821be02:	89 04 24             	mov    %eax,(%esp)
 821be05:	e8 f2 e4 f5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 821be0a:	85 db                	test   %ebx,%ebx
 821be0c:	75 07                	jne    821be15 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x6f9>
 821be0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 821be13:	eb 22                	jmp    821be37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x71b>
 821be15:	bb 01 00 00 00       	mov    $0x1,%ebx
 821be1a:	eb 1b                	jmp    821be37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x71b>
 821be1c:	89 d3                	mov    %edx,%ebx
 821be1e:	89 c6                	mov    %eax,%esi
 821be20:	8d 45 90             	lea    -0x70(%ebp),%eax
 821be23:	89 04 24             	mov    %eax,(%esp)
 821be26:	e8 7b ee f2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 821be2b:	89 f0                	mov    %esi,%eax
 821be2d:	89 da                	mov    %ebx,%edx
 821be2f:	89 04 24             	mov    %eax,(%esp)
 821be32:	e8 19 79 8c 00       	call   8ae3750 <_Unwind_Resume>
 821be37:	8d 45 90             	lea    -0x70(%ebp),%eax
 821be3a:	89 04 24             	mov    %eax,(%esp)
 821be3d:	e8 64 ee f2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 821be42:	85 db                	test   %ebx,%ebx
 821be44:	0f 84 2c 01 00 00    	je     821bf76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x85a>
 821be4a:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 821be4e:	83 f0 01             	xor    $0x1,%eax
 821be51:	84 c0                	test   %al,%al
 821be53:	0f 84 de 00 00 00    	je     821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821be59:	8b 45 0c             	mov    0xc(%ebp),%eax
 821be5c:	89 04 24             	mov    %eax,(%esp)
 821be5f:	e8 2a e4 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821be64:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 821be6b:	00 
 821be6c:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 821be73:	00 
 821be74:	c7 44 24 44 23 00 00 	movl   $0x23,0x44(%esp)
 821be7b:	00 
 821be7c:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 821be82:	89 54 24 04          	mov    %edx,0x4(%esp)
 821be86:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 821be8c:	89 54 24 08          	mov    %edx,0x8(%esp)
 821be90:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 821be96:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821be9a:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 821bea0:	89 54 24 10          	mov    %edx,0x10(%esp)
 821bea4:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 821beaa:	89 54 24 14          	mov    %edx,0x14(%esp)
 821beae:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 821beb4:	89 54 24 18          	mov    %edx,0x18(%esp)
 821beb8:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 821bebe:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 821bec2:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 821bec8:	89 54 24 20          	mov    %edx,0x20(%esp)
 821becc:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 821bed2:	89 54 24 24          	mov    %edx,0x24(%esp)
 821bed6:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 821bedc:	89 54 24 28          	mov    %edx,0x28(%esp)
 821bee0:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 821bee6:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 821beea:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 821bef0:	89 54 24 30          	mov    %edx,0x30(%esp)
 821bef4:	8b 95 67 ff ff ff    	mov    -0x99(%ebp),%edx
 821befa:	89 54 24 34          	mov    %edx,0x34(%esp)
 821befe:	8b 95 6b ff ff ff    	mov    -0x95(%ebp),%edx
 821bf04:	89 54 24 38          	mov    %edx,0x38(%esp)
 821bf08:	8b 95 6f ff ff ff    	mov    -0x91(%ebp),%edx
 821bf0e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 821bf12:	0f b6 95 73 ff ff ff 	movzbl -0x8d(%ebp),%edx
 821bf19:	88 54 24 40          	mov    %dl,0x40(%esp)
 821bf1d:	89 04 24             	mov    %eax,(%esp)
 821bf20:	e8 61 6e 2e 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 821bf25:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 821bf29:	66 83 7d d6 ff       	cmpw   $0xffff,-0x2a(%ebp)
 821bf2e:	75 07                	jne    821bf37 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x81b>
 821bf30:	8b 45 18             	mov    0x18(%ebp),%eax
 821bf33:	c6 40 0e 00          	movb   $0x0,0xe(%eax)
 821bf37:	8b 45 18             	mov    0x18(%ebp),%eax
 821bf3a:	0f b7 55 d6          	movzwl -0x2a(%ebp),%edx
 821bf3e:	66 89 50 0c          	mov    %dx,0xc(%eax)
 821bf42:	8b 45 18             	mov    0x18(%ebp),%eax
 821bf45:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 821bf49:	84 c0                	test   %al,%al
 821bf4b:	74 28                	je     821bf75 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x859>
 821bf4d:	8b 45 18             	mov    0x18(%ebp),%eax
 821bf50:	8b 70 04             	mov    0x4(%eax),%esi
 821bf53:	8b 45 18             	mov    0x18(%ebp),%eax
 821bf56:	8b 18                	mov    (%eax),%ebx
 821bf58:	e8 50 39 3f 00       	call   860f8ad <_Z34GetInstanceVendingMachineStatisticv>
 821bf5d:	89 74 24 08          	mov    %esi,0x8(%esp)
 821bf61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821bf65:	89 04 24             	mov    %eax,(%esp)
 821bf68:	e8 37 36 3f 00       	call   860f5a4 <_ZN24CVendingMachineStatistic13addOutputItemEmj>
 821bf6d:	eb 07                	jmp    821bf76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x85a>
 821bf6f:	90                   	nop
 821bf70:	eb 04                	jmp    821bf76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x85a>
 821bf72:	90                   	nop
 821bf73:	eb 01                	jmp    821bf76 <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE+0x85a>
 821bf75:	90                   	nop
 821bf76:	8d 65 f4             	lea    -0xc(%ebp),%esp
 821bf79:	83 c4 00             	add    $0x0,%esp
 821bf7c:	5b                   	pop    %ebx
 821bf7d:	5e                   	pop    %esi
 821bf7e:	5f                   	pop    %edi
 821bf7f:	5d                   	pop    %ebp
 821bf80:	c3                   	ret
 821bf81:	90                   	nop

```

```c
// Dispatcher_UseVendingMachine::_putItemIntoUser @ 0x821b71c

/* Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int,
   Dispatcher_UseVendingMachine::stPutItemResult_t&) const */

void __thiscall
Dispatcher_UseVendingMachine::_putItemIntoUser
          (Dispatcher_UseVendingMachine *this,CUser *param_1,ulong param_2,uint param_3,
          stPutItemResult_t *param_4)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  char cVar6;
  CInventory *pCVar7;
  int iVar8;
  undefined4 uVar9;
  CDataManager *this_00;
  vector *pvVar10;
  char *pcVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  CCreatureMgr *this_01;
  CVendingMachineStatistic *this_02;
  int iVar15;
  Inven_Item local_cd;
  char cStack_cc;
  undefined4 uStack_cb;
  undefined2 uStack_c7;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined1 local_91;
  stCeraShopItemParam_t local_90 [24];
  int local_78;
  vector<Inven_Item,std::allocator<Inven_Item>> local_74 [15];
  bool local_65;
  int local_64 [2];
  undefined1 local_5c [24];
  __normal_iterator local_44 [4];
  __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
  local_40 [4];
  vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>> local_3c [14];
  short local_2e;
  CStackableItem *local_2c;
  char local_25;
  int local_24;
  long local_20;
  
  *(ulong *)param_4 = param_2;
  *(uint *)(param_4 + 4) = param_3;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined2 *)(param_4 + 0xc) = 0xffff;
  param_4[0xe] = (stPutItemResult_t)0x1;
  if (*(int *)param_4 == -1) {
    return;
  }
  local_2e = -1;
  if (param_2 == 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::gain_money(pCVar7,param_3,0x15,1,0);
    local_2e = 0;
    goto LAB_0821bf37;
  }
  if (param_2 == 1) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar8 = CInventory::GetEventCoin(pCVar7);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar7,iVar8 + param_3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar9 = CInventory::GetEventCoin(pCVar7);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar9,param_3,6);
    local_2e = 1;
    goto LAB_0821bf37;
  }
  if (param_2 == 2) {
    CUser::gainWinPoint(param_1,param_3,3);
    local_2e = 2;
    goto LAB_0821bf37;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_2c = (CStackableItem *)CDataManager::find_item(this_00,param_2);
  if (local_2c == (CStackableItem *)0x0) {
    param_4[0xe] = (stPutItemResult_t)0x0;
    return;
  }
  Inven_Item::Inven_Item(&local_cd);
  uStack_cb = param_2;
  iVar8 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar8 + 0xc),0,&local_cd,param_3);
  iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
  if (iVar8 == 0x17) {
    pvVar10 = (vector *)CStackableItem::getGlobalEffectData(local_2c);
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::vector(local_3c,pvVar10);
                    /* try { // try from 0821b8fc to 0821b994 has its CatchHandler @ 0821b99b */
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::begin();
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::end();
    while( true ) {
      bVar5 = __gnu_cxx::operator!=(local_40,local_44);
      if (!bVar5) break;
      iVar8 = __gnu_cxx::
              __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
              ::operator->(local_40);
      lVar1 = *(long *)(iVar8 + 8);
      pcVar11 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      iVar8 = __gnu_cxx::
              __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
              ::operator->(local_40);
      fVar2 = *(float *)(iVar8 + 4);
      puVar12 = (uint *)__gnu_cxx::
                        __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
                        ::operator->(local_40);
      CGlobalEffectManager::registNewEffect
                (GlobalData::s_globalEffectManager_,*puVar12,fVar2,pcVar11,5,lVar1);
      __gnu_cxx::
      __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
      ::operator++(local_40);
    }
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::~vector(local_3c);
    goto LAB_0821bf37;
  }
  cVar6 = (**(code **)(*(int *)local_2c + 0x10))(local_2c);
  if (cVar6 != '\0') {
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar9 = WongWork::CGenUniqueNo::genIPGNo(4,uVar9,local_5c);
    uVar13 = CItem::getUsablePeriod((CItem *)local_2c);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2e = CInventory::AddAvatarItem(pCVar7,param_2,uVar13,0,0,0xffffffff,uVar9,0xe,0,0);
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0821bf37;
  }
  cVar6 = (**(code **)(*(int *)local_2c + 0x14))(local_2c);
  if (cVar6 == '\0') {
LAB_0821baaa:
    bVar5 = false;
  }
  else {
    iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
    if (iVar8 != 0x16) goto LAB_0821baaa;
    bVar5 = true;
  }
  if (bVar5) {
    if (cStack_cc == '\x05') {
      cVar6 = user_creature::CCreatureItemConverter::SetEggItem(&local_cd);
      if (cVar6 != '\x01') {
        return;
      }
      uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_2e = CInventory::insertItemIntoInventory
                           (uVar9,CONCAT22((undefined2)uStack_cb,CONCAT11(cStack_cc,local_cd)),
                            CONCAT22(uStack_c7,uStack_cb._2_2_),local_c5,local_c1,local_bd,local_b9,
                            local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                            local_95,local_91,0x23,1,0);
      if (-1 < local_2e) {
        iVar8 = CItem::getExpirationDate((CItem *)local_2c);
        iVar14 = CItem::getUsablePeriod((CItem *)local_2c);
        iVar15 = (int)local_2e;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar7);
        user_creature::CCreatureMgr::InsertCreatureItem(this_01,&local_cd,iVar15,0x23,iVar14,iVar8);
      }
      *(undefined4 *)(param_4 + 8) = 7;
    }
    goto LAB_0821bf37;
  }
  local_64[1] = 0;
  local_64[0] = 0;
  local_65 = false;
  local_25 = '\0';
  cVar6 = WongWork::CCeraShop::IsSpecialItem
                    (GlobalData::s_pCeraShop,uStack_cb,local_64 + 1,local_64,&local_65);
  if (cVar6 != '\0') {
    iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
    if (iVar8 != 0x10) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_74);
      uVar4 = uStack_cb;
      local_78 = 0;
                    /* try { // try from 0821bca2 to 0821bcd5 has its CatchHandler @ 0821be1c */
      iVar8 = G_CDataManager();
      local_24 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),uVar4);
      local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_90);
                    /* try { // try from 0821bd3f to 0821bdd8 has its CatchHandler @ 0821bde4 */
      cVar6 = WongWork::CCeraShop::ProcessSpecialItem
                        (GlobalData::s_pCeraShop,param_1,uStack_cb,local_24,&local_78,local_20,true,
                         (vector *)local_74,local_90,'\0','\0',false,1);
      if (cVar6 == '\0') {
LAB_0821bdd9:
        local_25 = '\x01';
        bVar5 = true;
      }
      else {
        if (local_78 == 0) {
          if (local_24 == 0) {
LAB_0821bd83:
            bVar5 = false;
          }
          else {
            cVar6 = CUser::IsRestrictedGoods(param_1,local_24);
            if (cVar6 == '\x01') goto LAB_0821bd83;
            bVar5 = true;
          }
          if (bVar5) {
            CUser::SetRestrictedGoods(param_1,local_24);
            WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_24,local_20,0);
            CUser::SendRestrictedGoods(param_1,true,local_24);
          }
          goto LAB_0821bdd9;
        }
        bVar5 = false;
      }
                    /* try { // try from 0821be05 to 0821be09 has its CatchHandler @ 0821be1c */
      WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_90);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_74);
      if (!bVar5) {
        return;
      }
    }
  }
  if (local_25 != '\x01') {
    uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2e = CInventory::insertItemIntoInventory
                         (uVar9,CONCAT22((undefined2)uStack_cb,CONCAT11(cStack_cc,local_cd)),
                          CONCAT22(uStack_c7,uStack_cb._2_2_),local_c5,local_c1,local_bd,local_b9,
                          local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                          local_95,local_91,0x23,1,0);
    if (local_2e == -1) {
      param_4[0xe] = (stPutItemResult_t)0x0;
    }
  }
LAB_0821bf37:
  *(short *)(param_4 + 0xc) = local_2e;
  if (param_4[0xe] != (stPutItemResult_t)0x0) {
    uVar3 = *(uint *)(param_4 + 4);
    uVar4 = *(ulong *)param_4;
    this_02 = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
    CVendingMachineStatistic::addOutputItem(this_02,uVar4,uVar3);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 0821c2e6 Dispatcher_UseVendingMachine::dispatch_sig  [0x0821c2e6-0x821d2c3] ===
 821c2e6:	55                   	push   %ebp
 821c2e7:	89 e5                	mov    %esp,%ebp
 821c2e9:	56                   	push   %esi
 821c2ea:	53                   	push   %ebx
 821c2eb:	81 ec c0 01 00 00    	sub    $0x1c0,%esp
 821c2f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c2f4:	89 04 24             	mov    %eax,(%esp)
 821c2f7:	e8 90 e0 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821c2fc:	83 f8 03             	cmp    $0x3,%eax
 821c2ff:	0f 95 c0             	setne  %al
 821c302:	84 c0                	test   %al,%al
 821c304:	74 0a                	je     821c310 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 821c306:	bb 00 00 00 00       	mov    $0x0,%ebx
 821c30b:	e9 a7 0f 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c310:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 821c314:	74 0f                	je     821c325 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x3f>
 821c316:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c319:	89 04 24             	mov    %eax,(%esp)
 821c31c:	e8 dd df eb ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 821c321:	84 c0                	test   %al,%al
 821c323:	74 07                	je     821c32c <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x46>
 821c325:	b8 01 00 00 00       	mov    $0x1,%eax
 821c32a:	eb 05                	jmp    821c331 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x4b>
 821c32c:	b8 00 00 00 00       	mov    $0x0,%eax
 821c331:	84 c0                	test   %al,%al
 821c333:	74 0a                	je     821c33f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x59>
 821c335:	bb 00 00 00 00       	mov    $0x0,%ebx
 821c33a:	e9 78 0f 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c33f:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 821c346:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 821c34d:	66 c7 45 9e ff ff    	movw   $0xffff,-0x62(%ebp)
 821c353:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 821c356:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c35a:	8b 45 10             	mov    0x10(%ebp),%eax
 821c35d:	89 04 24             	mov    %eax,(%esp)
 821c360:	e8 db 0e 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821c365:	83 f0 01             	xor    $0x1,%eax
 821c368:	84 c0                	test   %al,%al
 821c36a:	74 2b                	je     821c397 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb1>
 821c36c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821c373:	00 
 821c374:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c37b:	00 
 821c37c:	c7 44 24 04 e0 d5 bc 	movl   $0x8bcd5e0,0x4(%esp)
 821c383:	08 
 821c384:	c7 04 24 29 d0 00 00 	movl   $0xd029,(%esp)
 821c38b:	e8 47 45 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821c390:	89 c3                	mov    %eax,%ebx
 821c392:	e9 20 0f 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c397:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821c39a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c39e:	8b 45 10             	mov    0x10(%ebp),%eax
 821c3a1:	89 04 24             	mov    %eax,(%esp)
 821c3a4:	e8 97 0e 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821c3a9:	83 f0 01             	xor    $0x1,%eax
 821c3ac:	84 c0                	test   %al,%al
 821c3ae:	74 2b                	je     821c3db <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf5>
 821c3b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821c3b7:	00 
 821c3b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c3bf:	00 
 821c3c0:	c7 44 24 04 e0 d5 bc 	movl   $0x8bcd5e0,0x4(%esp)
 821c3c7:	08 
 821c3c8:	c7 04 24 2a d0 00 00 	movl   $0xd02a,(%esp)
 821c3cf:	e8 03 45 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821c3d4:	89 c3                	mov    %eax,%ebx
 821c3d6:	e9 dc 0e 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c3db:	8d 45 9e             	lea    -0x62(%ebp),%eax
 821c3de:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c3e2:	8b 45 10             	mov    0x10(%ebp),%eax
 821c3e5:	89 04 24             	mov    %eax,(%esp)
 821c3e8:	e8 d3 0b 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821c3ed:	83 f0 01             	xor    $0x1,%eax
 821c3f0:	84 c0                	test   %al,%al
 821c3f2:	74 2b                	je     821c41f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x139>
 821c3f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821c3fb:	00 
 821c3fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c403:	00 
 821c404:	c7 44 24 04 e0 d5 bc 	movl   $0x8bcd5e0,0x4(%esp)
 821c40b:	08 
 821c40c:	c7 04 24 2b d0 00 00 	movl   $0xd02b,(%esp)
 821c413:	e8 bf 44 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821c418:	89 c3                	mov    %eax,%ebx
 821c41a:	e9 98 0e 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c41f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 821c422:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c426:	8b 45 08             	mov    0x8(%ebp),%eax
 821c429:	89 04 24             	mov    %eax,(%esp)
 821c42c:	e8 d9 f1 ff ff       	call   821b60a <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj>
 821c431:	89 45 ac             	mov    %eax,-0x54(%ebp)
 821c434:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 821c438:	75 2b                	jne    821c465 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 821c43a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821c441:	00 
 821c442:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c449:	00 
 821c44a:	c7 44 24 04 e0 d5 bc 	movl   $0x8bcd5e0,0x4(%esp)
 821c451:	08 
 821c452:	c7 04 24 2f d0 00 00 	movl   $0xd02f,(%esp)
 821c459:	e8 79 44 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821c45e:	89 c3                	mov    %eax,%ebx
 821c460:	e9 52 0e 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c465:	8b 45 a0             	mov    -0x60(%ebp),%eax
 821c468:	89 44 24 08          	mov    %eax,0x8(%esp)
 821c46c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 821c46f:	89 44 24 04          	mov    %eax,0x4(%esp)
 821c473:	8b 45 08             	mov    0x8(%ebp),%eax
 821c476:	89 04 24             	mov    %eax,(%esp)
 821c479:	e8 1a f2 ff ff       	call   821b698 <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj>
 821c47e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 821c481:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 821c485:	75 2b                	jne    821c4b2 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x1cc>
 821c487:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821c48e:	00 
 821c48f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c496:	00 
 821c497:	c7 44 24 04 e0 d5 bc 	movl   $0x8bcd5e0,0x4(%esp)
 821c49e:	08 
 821c49f:	c7 04 24 33 d0 00 00 	movl   $0xd033,(%esp)
 821c4a6:	e8 2c 44 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821c4ab:	89 c3                	mov    %eax,%ebx
 821c4ad:	e9 05 0e 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c4b2:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 821c4b9:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 821c4c0:	c7 45 bc 02 00 00 00 	movl   $0x2,-0x44(%ebp)
 821c4c7:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 821c4ce:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 821c4d5:	8d 85 a1 fe ff ff    	lea    -0x15f(%ebp),%eax
 821c4db:	89 c3                	mov    %eax,%ebx
 821c4dd:	be 01 00 00 00       	mov    $0x1,%esi
 821c4e2:	eb 0e                	jmp    821c4f2 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 821c4e4:	89 1c 24             	mov    %ebx,(%esp)
 821c4e7:	e8 68 f3 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821c4ec:	83 c3 3d             	add    $0x3d,%ebx
 821c4ef:	83 ee 01             	sub    $0x1,%esi
 821c4f2:	83 fe ff             	cmp    $0xffffffff,%esi
 821c4f5:	0f 95 c0             	setne  %al
 821c4f8:	84 c0                	test   %al,%al
 821c4fa:	75 e8                	jne    821c4e4 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x1fe>
 821c4fc:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 821c503:	eb 1c                	jmp    821c521 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 821c505:	8b 45 c8             	mov    -0x38(%ebp),%eax
 821c508:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c50b:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821c50e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821c511:	2d 57 01 00 00       	sub    $0x157,%eax
 821c516:	c7 40 02 ff ff ff ff 	movl   $0xffffffff,0x2(%eax)
 821c51d:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 821c521:	83 7d c8 01          	cmpl   $0x1,-0x38(%ebp)
 821c525:	0f 9e c0             	setle  %al
 821c528:	84 c0                	test   %al,%al
 821c52a:	75 d9                	jne    821c505 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 821c52c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 821c533:	e9 12 02 00 00       	jmp    821c74a <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x464>
 821c538:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 821c53f:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 821c543:	76 2c                	jbe    821c571 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x28b>
 821c545:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821c54c:	e8 af 92 50 00       	call   8725800 <__cxa_allocate_exception>
 821c551:	89 c2                	mov    %eax,%edx
 821c553:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 821c559:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c560:	00 
 821c561:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821c568:	08 
 821c569:	89 04 24             	mov    %eax,(%esp)
 821c56c:	e8 df 86 50 00       	call   8724c50 <__cxa_throw>
 821c571:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c574:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c577:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821c57a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821c57d:	8d 98 a9 fe ff ff    	lea    -0x157(%eax),%ebx
 821c583:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 821c589:	8b 55 b0             	mov    -0x50(%ebp),%edx
 821c58c:	89 54 24 08          	mov    %edx,0x8(%esp)
 821c590:	8b 55 08             	mov    0x8(%ebp),%edx
 821c593:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c597:	89 04 24             	mov    %eax,(%esp)
 821c59a:	e8 e3 f9 ff ff       	call   821bf82 <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t>
 821c59f:	83 ec 04             	sub    $0x4,%esp
 821c5a2:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 821c5a8:	89 03                	mov    %eax,(%ebx)
 821c5aa:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 821c5b0:	89 43 04             	mov    %eax,0x4(%ebx)
 821c5b3:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 821c5b9:	89 43 08             	mov    %eax,0x8(%ebx)
 821c5bc:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 821c5c2:	89 43 0c             	mov    %eax,0xc(%ebx)
 821c5c5:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 821c5cb:	89 43 10             	mov    %eax,0x10(%ebx)
 821c5ce:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 821c5d4:	89 43 14             	mov    %eax,0x14(%ebx)
 821c5d7:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 821c5dd:	89 43 18             	mov    %eax,0x18(%ebx)
 821c5e0:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 821c5e6:	89 43 1c             	mov    %eax,0x1c(%ebx)
 821c5e9:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 821c5ef:	89 43 20             	mov    %eax,0x20(%ebx)
 821c5f2:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 821c5f8:	89 43 24             	mov    %eax,0x24(%ebx)
 821c5fb:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 821c601:	89 43 28             	mov    %eax,0x28(%ebx)
 821c604:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 821c60a:	89 43 2c             	mov    %eax,0x2c(%ebx)
 821c60d:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 821c613:	89 43 30             	mov    %eax,0x30(%ebx)
 821c616:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 821c61c:	89 43 34             	mov    %eax,0x34(%ebx)
 821c61f:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 821c625:	89 43 38             	mov    %eax,0x38(%ebx)
 821c628:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 821c62f:	88 43 3c             	mov    %al,0x3c(%ebx)
 821c632:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c635:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c638:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821c63b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821c63e:	2d 57 01 00 00       	sub    $0x157,%eax
 821c643:	8b 40 02             	mov    0x2(%eax),%eax
 821c646:	83 f8 ff             	cmp    $0xffffffff,%eax
 821c649:	75 2c                	jne    821c677 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x391>
 821c64b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821c652:	e8 a9 91 50 00       	call   8725800 <__cxa_allocate_exception>
 821c657:	89 c2                	mov    %eax,%edx
 821c659:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 821c65f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821c666:	00 
 821c667:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821c66e:	08 
 821c66f:	89 04 24             	mov    %eax,(%esp)
 821c672:	e8 d9 85 50 00       	call   8724c50 <__cxa_throw>
 821c677:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 821c67a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c67d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c680:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821c683:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821c686:	2d 57 01 00 00       	sub    $0x157,%eax
 821c68b:	8b 40 02             	mov    0x2(%eax),%eax
 821c68e:	89 c6                	mov    %eax,%esi
 821c690:	e8 06 fb ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821c695:	89 74 24 04          	mov    %esi,0x4(%esp)
 821c699:	89 04 24             	mov    %eax,(%esp)
 821c69c:	e8 91 33 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 821c6a1:	89 44 9d 94          	mov    %eax,-0x6c(%ebp,%ebx,4)
 821c6a5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c6a8:	8b 44 85 94          	mov    -0x6c(%ebp,%eax,4),%eax
 821c6ac:	85 c0                	test   %eax,%eax
 821c6ae:	74 37                	je     821c6e7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x401>
 821c6b0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c6b3:	8b 44 85 94          	mov    -0x6c(%ebp,%eax,4),%eax
 821c6b7:	8b 00                	mov    (%eax),%eax
 821c6b9:	83 c0 0c             	add    $0xc,%eax
 821c6bc:	8b 10                	mov    (%eax),%edx
 821c6be:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c6c1:	8b 44 85 94          	mov    -0x6c(%ebp,%eax,4),%eax
 821c6c5:	89 04 24             	mov    %eax,(%esp)
 821c6c8:	ff d2                	call   *%edx
 821c6ca:	83 f8 17             	cmp    $0x17,%eax
 821c6cd:	75 18                	jne    821c6e7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x401>
 821c6cf:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 821c6d4:	89 04 24             	mov    %eax,(%esp)
 821c6d7:	e8 ee 88 01 00       	call   8234fca <_ZNK20CGlobalEffectManager12getEffectNumEv>
 821c6dc:	85 c0                	test   %eax,%eax
 821c6de:	74 07                	je     821c6e7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x401>
 821c6e0:	b8 01 00 00 00       	mov    $0x1,%eax
 821c6e5:	eb 05                	jmp    821c6ec <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x406>
 821c6e7:	b8 00 00 00 00       	mov    $0x0,%eax
 821c6ec:	84 c0                	test   %al,%al
 821c6ee:	74 34                	je     821c724 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 821c6f0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c6f3:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c6f6:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821c6f9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821c6fc:	2d 57 01 00 00       	sub    $0x157,%eax
 821c701:	c7 40 02 ff ff ff ff 	movl   $0xffffffff,0x2(%eax)
 821c708:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c70b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c70e:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821c711:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821c714:	2d 57 01 00 00       	sub    $0x157,%eax
 821c719:	c7 40 07 00 00 00 00 	movl   $0x0,0x7(%eax)
 821c720:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 821c724:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821c727:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c72a:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821c72d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821c730:	2d 57 01 00 00       	sub    $0x157,%eax
 821c735:	8b 40 02             	mov    0x2(%eax),%eax
 821c738:	83 f8 ff             	cmp    $0xffffffff,%eax
 821c73b:	0f 94 c0             	sete   %al
 821c73e:	84 c0                	test   %al,%al
 821c740:	0f 85 f9 fd ff ff    	jne    821c53f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x259>
 821c746:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 821c74a:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 821c74e:	0f 9e c0             	setle  %al
 821c751:	84 c0                	test   %al,%al
 821c753:	0f 85 df fd ff ff    	jne    821c538 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x252>
 821c759:	eb 5b                	jmp    821c7b6 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x4d0>
 821c75b:	83 fa 01             	cmp    $0x1,%edx
 821c75e:	74 08                	je     821c768 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x482>
 821c760:	89 04 24             	mov    %eax,(%esp)
 821c763:	e8 e8 6f 8c 00       	call   8ae3750 <_Unwind_Resume>
 821c768:	89 04 24             	mov    %eax,(%esp)
 821c76b:	e8 70 95 50 00       	call   8725ce0 <__cxa_begin_catch>
 821c770:	8b 00                	mov    (%eax),%eax
 821c772:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 821c775:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 821c778:	0f b6 c0             	movzbl %al,%eax
 821c77b:	89 44 24 08          	mov    %eax,0x8(%esp)
 821c77f:	c7 44 24 04 da 00 00 	movl   $0xda,0x4(%esp)
 821c786:	00 
 821c787:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c78a:	89 04 24             	mov    %eax,(%esp)
 821c78d:	e8 b0 f7 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821c792:	bb 00 00 00 00       	mov    $0x0,%ebx
 821c797:	e8 94 94 50 00       	call   8725c30 <__cxa_end_catch>
 821c79c:	e9 16 0b 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821c7a1:	89 d3                	mov    %edx,%ebx
 821c7a3:	89 c6                	mov    %eax,%esi
 821c7a5:	e8 86 94 50 00       	call   8725c30 <__cxa_end_catch>
 821c7aa:	89 f0                	mov    %esi,%eax
 821c7ac:	89 da                	mov    %ebx,%edx
 821c7ae:	89 04 24             	mov    %eax,(%esp)
 821c7b1:	e8 9a 6f 8c 00       	call   8ae3750 <_Unwind_Resume>
 821c7b6:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 821c7bd:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 821c7c4:	e9 c5 00 00 00       	jmp    821c88e <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x5a8>
 821c7c9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 821c7cc:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821c7cf:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821c7d2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821c7d5:	8d 98 a9 fe ff ff    	lea    -0x157(%eax),%ebx
 821c7db:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 821c7e1:	8b 55 b0             	mov    -0x50(%ebp),%edx
 821c7e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 821c7e8:	8b 55 08             	mov    0x8(%ebp),%edx
 821c7eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 821c7ef:	89 04 24             	mov    %eax,(%esp)
 821c7f2:	e8 61 f8 ff ff       	call   821c058 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t>
 821c7f7:	83 ec 04             	sub    $0x4,%esp
 821c7fa:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 821c800:	89 03                	mov    %eax,(%ebx)
 821c802:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 821c808:	89 43 04             	mov    %eax,0x4(%ebx)
 821c80b:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 821c811:	89 43 08             	mov    %eax,0x8(%ebx)
 821c814:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 821c81a:	89 43 0c             	mov    %eax,0xc(%ebx)
 821c81d:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 821c823:	89 43 10             	mov    %eax,0x10(%ebx)
 821c826:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 821c82c:	89 43 14             	mov    %eax,0x14(%ebx)
 821c82f:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 821c835:	89 43 18             	mov    %eax,0x18(%ebx)
 821c838:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 821c83e:	89 43 1c             	mov    %eax,0x1c(%ebx)
 821c841:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 821c847:	89 43 20             	mov    %eax,0x20(%ebx)
 821c84a:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 821c850:	89 43 24             	mov    %eax,0x24(%ebx)
 821c853:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 821c859:	89 43 28             	mov    %eax,0x28(%ebx)
 821c85c:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 821c862:	89 43 2c             	mov    %eax,0x2c(%ebx)
 821c865:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 821c86b:	89 43 30             	mov    %eax,0x30(%ebx)
 821c86e:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 821c874:	89 43 34             	mov    %eax,0x34(%ebx)
 821c877:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 821c87d:	89 43 38             	mov    %eax,0x38(%ebx)
 821c880:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 821c887:	88 43 3c             	mov    %al,0x3c(%ebx)
 821c88a:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 821c88e:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 821c892:	0f 9e c0             	setle  %al
 821c895:	84 c0                	test   %al,%al
 821c897:	0f 85 2c ff ff ff    	jne    821c7c9 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x4e3>
 821c89d:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c8a0:	89 04 24             	mov    %eax,(%esp)
 821c8a3:	e8 e6 d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c8a8:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c8af:	00 
 821c8b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821c8b7:	00 
 821c8b8:	89 04 24             	mov    %eax,(%esp)
 821c8bb:	e8 a4 86 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c8c0:	83 f0 01             	xor    $0x1,%eax
 821c8c3:	84 c0                	test   %al,%al
 821c8c5:	0f 85 30 01 00 00    	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c8cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c8ce:	89 04 24             	mov    %eax,(%esp)
 821c8d1:	e8 b8 d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c8d6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c8dd:	00 
 821c8de:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821c8e5:	00 
 821c8e6:	89 04 24             	mov    %eax,(%esp)
 821c8e9:	e8 76 86 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c8ee:	83 f0 01             	xor    $0x1,%eax
 821c8f1:	84 c0                	test   %al,%al
 821c8f3:	0f 85 02 01 00 00    	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c8f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c8fc:	89 04 24             	mov    %eax,(%esp)
 821c8ff:	e8 8a d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c904:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c90b:	00 
 821c90c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 821c913:	00 
 821c914:	89 04 24             	mov    %eax,(%esp)
 821c917:	e8 48 86 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c91c:	83 f0 01             	xor    $0x1,%eax
 821c91f:	84 c0                	test   %al,%al
 821c921:	0f 85 d4 00 00 00    	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c927:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c92a:	89 04 24             	mov    %eax,(%esp)
 821c92d:	e8 5c d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c932:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c939:	00 
 821c93a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 821c941:	00 
 821c942:	89 04 24             	mov    %eax,(%esp)
 821c945:	e8 1a 86 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c94a:	83 f0 01             	xor    $0x1,%eax
 821c94d:	84 c0                	test   %al,%al
 821c94f:	0f 85 a6 00 00 00    	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c955:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c958:	89 04 24             	mov    %eax,(%esp)
 821c95b:	e8 2e d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c960:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c967:	00 
 821c968:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 821c96f:	00 
 821c970:	89 04 24             	mov    %eax,(%esp)
 821c973:	e8 ec 85 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c978:	83 f0 01             	xor    $0x1,%eax
 821c97b:	84 c0                	test   %al,%al
 821c97d:	75 7c                	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c97f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c982:	89 04 24             	mov    %eax,(%esp)
 821c985:	e8 04 d9 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c98a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c991:	00 
 821c992:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 821c999:	00 
 821c99a:	89 04 24             	mov    %eax,(%esp)
 821c99d:	e8 c2 85 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c9a2:	83 f0 01             	xor    $0x1,%eax
 821c9a5:	84 c0                	test   %al,%al
 821c9a7:	75 52                	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c9a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c9ac:	89 04 24             	mov    %eax,(%esp)
 821c9af:	e8 da d8 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c9b4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821c9bb:	00 
 821c9bc:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 821c9c3:	00 
 821c9c4:	89 04 24             	mov    %eax,(%esp)
 821c9c7:	e8 98 85 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821c9cc:	83 f0 01             	xor    $0x1,%eax
 821c9cf:	84 c0                	test   %al,%al
 821c9d1:	75 28                	jne    821c9fb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x715>
 821c9d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 821c9d6:	89 04 24             	mov    %eax,(%esp)
 821c9d9:	e8 b0 d8 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821c9de:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 821c9e5:	00 
 821c9e6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821c9ed:	00 
 821c9ee:	89 04 24             	mov    %eax,(%esp)
 821c9f1:	e8 84 ec 2d 00       	call   84fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 821c9f6:	83 f8 01             	cmp    $0x1,%eax
 821c9f9:	7f 07                	jg     821ca02 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x71c>
 821c9fb:	b8 01 00 00 00       	mov    $0x1,%eax
 821ca00:	eb 05                	jmp    821ca07 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x721>
 821ca02:	b8 00 00 00 00       	mov    $0x0,%eax
 821ca07:	84 c0                	test   %al,%al
 821ca09:	74 2c                	je     821ca37 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x751>
 821ca0b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821ca12:	e8 e9 8d 50 00       	call   8725800 <__cxa_allocate_exception>
 821ca17:	89 c2                	mov    %eax,%edx
 821ca19:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 821ca1f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ca26:	00 
 821ca27:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821ca2e:	08 
 821ca2f:	89 04 24             	mov    %eax,(%esp)
 821ca32:	e8 19 82 50 00       	call   8724c50 <__cxa_throw>
 821ca37:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821ca3a:	8b 40 04             	mov    0x4(%eax),%eax
 821ca3d:	85 c0                	test   %eax,%eax
 821ca3f:	75 7d                	jne    821cabe <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 821ca41:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821ca44:	8b 40 08             	mov    0x8(%eax),%eax
 821ca47:	89 c3                	mov    %eax,%ebx
 821ca49:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ca4c:	89 04 24             	mov    %eax,(%esp)
 821ca4f:	e8 3a d8 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821ca54:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821ca5b:	00 
 821ca5c:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 821ca63:	00 
 821ca64:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821ca68:	89 04 24             	mov    %eax,(%esp)
 821ca6b:	e8 dc 2a 2e 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 821ca70:	83 f0 01             	xor    $0x1,%eax
 821ca73:	84 c0                	test   %al,%al
 821ca75:	74 2c                	je     821caa3 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x7bd>
 821ca77:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821ca7e:	e8 7d 8d 50 00       	call   8725800 <__cxa_allocate_exception>
 821ca83:	89 c2                	mov    %eax,%edx
 821ca85:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821ca8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ca92:	00 
 821ca93:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821ca9a:	08 
 821ca9b:	89 04 24             	mov    %eax,(%esp)
 821ca9e:	e8 ad 81 50 00       	call   8724c50 <__cxa_throw>
 821caa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 821caa6:	89 04 24             	mov    %eax,(%esp)
 821caa9:	e8 e0 d7 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821caae:	89 04 24             	mov    %eax,(%esp)
 821cab1:	e8 20 7d f1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 821cab6:	89 45 c0             	mov    %eax,-0x40(%ebp)
 821cab9:	e9 ab 03 00 00       	jmp    821ce69 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb83>
 821cabe:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cac1:	8b 40 04             	mov    0x4(%eax),%eax
 821cac4:	83 f8 01             	cmp    $0x1,%eax
 821cac7:	0f 85 a1 00 00 00    	jne    821cb6e <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x888>
 821cacd:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cad0:	89 04 24             	mov    %eax,(%esp)
 821cad3:	e8 a6 d7 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821cad8:	89 04 24             	mov    %eax,(%esp)
 821cadb:	e8 80 0b 01 00       	call   822d660 <_ZNK10CInventory12getTotalCoinEv>
 821cae0:	8b 55 b0             	mov    -0x50(%ebp),%edx
 821cae3:	8b 52 08             	mov    0x8(%edx),%edx
 821cae6:	39 d0                	cmp    %edx,%eax
 821cae8:	0f 92 c0             	setb   %al
 821caeb:	84 c0                	test   %al,%al
 821caed:	74 2c                	je     821cb1b <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x835>
 821caef:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821caf6:	e8 05 8d 50 00       	call   8725800 <__cxa_allocate_exception>
 821cafb:	89 c2                	mov    %eax,%edx
 821cafd:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821cb03:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821cb0a:	00 
 821cb0b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821cb12:	08 
 821cb13:	89 04 24             	mov    %eax,(%esp)
 821cb16:	e8 35 81 50 00       	call   8724c50 <__cxa_throw>
 821cb1b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 821cb22:	eb 1f                	jmp    821cb43 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x85d>
 821cb24:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cb27:	89 04 24             	mov    %eax,(%esp)
 821cb2a:	e8 5f d7 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821cb2f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 821cb36:	00 
 821cb37:	89 04 24             	mov    %eax,(%esp)
 821cb3a:	e8 59 df 2d 00       	call   84faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>
 821cb3f:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 821cb43:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cb46:	8b 40 08             	mov    0x8(%eax),%eax
 821cb49:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 821cb4c:	0f 97 c0             	seta   %al
 821cb4f:	84 c0                	test   %al,%al
 821cb51:	75 d1                	jne    821cb24 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x83e>
 821cb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cb56:	89 04 24             	mov    %eax,(%esp)
 821cb59:	e8 20 d7 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821cb5e:	89 04 24             	mov    %eax,(%esp)
 821cb61:	e8 fa 0a 01 00       	call   822d660 <_ZNK10CInventory12getTotalCoinEv>
 821cb66:	89 45 c0             	mov    %eax,-0x40(%ebp)
 821cb69:	e9 fb 02 00 00       	jmp    821ce69 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb83>
 821cb6e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cb71:	8b 40 04             	mov    0x4(%eax),%eax
 821cb74:	83 f8 02             	cmp    $0x2,%eax
 821cb77:	75 76                	jne    821cbef <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x909>
 821cb79:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cb7c:	89 04 24             	mov    %eax,(%esp)
 821cb7f:	e8 f8 d5 f5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 821cb84:	8b 55 b0             	mov    -0x50(%ebp),%edx
 821cb87:	8b 52 08             	mov    0x8(%edx),%edx
 821cb8a:	39 d0                	cmp    %edx,%eax
 821cb8c:	0f 92 c0             	setb   %al
 821cb8f:	84 c0                	test   %al,%al
 821cb91:	74 2c                	je     821cbbf <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x8d9>
 821cb93:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821cb9a:	e8 61 8c 50 00       	call   8725800 <__cxa_allocate_exception>
 821cb9f:	89 c2                	mov    %eax,%edx
 821cba1:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821cba7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821cbae:	00 
 821cbaf:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821cbb6:	08 
 821cbb7:	89 04 24             	mov    %eax,(%esp)
 821cbba:	e8 91 80 50 00       	call   8724c50 <__cxa_throw>
 821cbbf:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cbc2:	8b 40 08             	mov    0x8(%eax),%eax
 821cbc5:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 821cbcc:	00 
 821cbcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cbd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cbd4:	89 04 24             	mov    %eax,(%esp)
 821cbd7:	e8 ea 30 43 00       	call   864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>
 821cbdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cbdf:	89 04 24             	mov    %eax,(%esp)
 821cbe2:	e8 95 d5 f5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 821cbe7:	89 45 c0             	mov    %eax,-0x40(%ebp)
 821cbea:	e9 7a 02 00 00       	jmp    821ce69 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb83>
 821cbef:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 821cbf3:	0f bf d8             	movswl %ax,%ebx
 821cbf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cbf9:	89 04 24             	mov    %eax,(%esp)
 821cbfc:	e8 7d d6 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821cc01:	8d 95 1b ff ff ff    	lea    -0xe5(%ebp),%edx
 821cc07:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821cc0b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821cc12:	00 
 821cc13:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cc17:	89 14 24             	mov    %edx,(%esp)
 821cc1a:	e8 f9 ec 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821cc1f:	83 ec 04             	sub    $0x4,%esp
 821cc22:	8b 95 1d ff ff ff    	mov    -0xe3(%ebp),%edx
 821cc28:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cc2b:	8b 40 04             	mov    0x4(%eax),%eax
 821cc2e:	39 c2                	cmp    %eax,%edx
 821cc30:	74 2c                	je     821cc5e <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x978>
 821cc32:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821cc39:	e8 c2 8b 50 00       	call   8725800 <__cxa_allocate_exception>
 821cc3e:	89 c2                	mov    %eax,%edx
 821cc40:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 821cc46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821cc4d:	00 
 821cc4e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821cc55:	08 
 821cc56:	89 04 24             	mov    %eax,(%esp)
 821cc59:	e8 f2 7f 50 00       	call   8724c50 <__cxa_throw>
 821cc5e:	8b 95 22 ff ff ff    	mov    -0xde(%ebp),%edx
 821cc64:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cc67:	8b 40 08             	mov    0x8(%eax),%eax
 821cc6a:	39 c2                	cmp    %eax,%edx
 821cc6c:	7d 2c                	jge    821cc9a <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0x9b4>
 821cc6e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821cc75:	e8 86 8b 50 00       	call   8725800 <__cxa_allocate_exception>
 821cc7a:	89 c2                	mov    %eax,%edx
 821cc7c:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821cc82:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821cc89:	00 
 821cc8a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821cc91:	08 
 821cc92:	89 04 24             	mov    %eax,(%esp)
 821cc95:	e8 b6 7f 50 00       	call   8724c50 <__cxa_throw>
 821cc9a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cc9d:	8b 40 08             	mov    0x8(%eax),%eax
 821cca0:	89 c6                	mov    %eax,%esi
 821cca2:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 821cca6:	0f bf d8             	movswl %ax,%ebx
 821cca9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ccac:	89 04 24             	mov    %eax,(%esp)
 821ccaf:	e8 da d5 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821ccb4:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 821ccbb:	00 
 821ccbc:	c7 44 24 10 1c 00 00 	movl   $0x1c,0x10(%esp)
 821ccc3:	00 
 821ccc4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 821ccc8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821cccc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ccd3:	00 
 821ccd4:	89 04 24             	mov    %eax,(%esp)
 821ccd7:	e8 30 73 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 821ccdc:	83 f0 01             	xor    $0x1,%eax
 821ccdf:	84 c0                	test   %al,%al
 821cce1:	74 2c                	je     821cd0f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xa29>
 821cce3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821ccea:	e8 11 8b 50 00       	call   8725800 <__cxa_allocate_exception>
 821ccef:	89 c2                	mov    %eax,%edx
 821ccf1:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821ccf7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ccfe:	00 
 821ccff:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821cd06:	08 
 821cd07:	89 04 24             	mov    %eax,(%esp)
 821cd0a:	e8 41 7f 50 00       	call   8724c50 <__cxa_throw>
 821cd0f:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 821cd13:	0f bf d8             	movswl %ax,%ebx
 821cd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cd19:	89 04 24             	mov    %eax,(%esp)
 821cd1c:	e8 5d d5 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821cd21:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 821cd27:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821cd2b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821cd32:	00 
 821cd33:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cd37:	89 14 24             	mov    %edx,(%esp)
 821cd3a:	e8 d9 eb 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821cd3f:	83 ec 04             	sub    $0x4,%esp
 821cd42:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 821cd48:	89 85 1b ff ff ff    	mov    %eax,-0xe5(%ebp)
 821cd4e:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 821cd54:	89 85 1f ff ff ff    	mov    %eax,-0xe1(%ebp)
 821cd5a:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 821cd60:	89 85 23 ff ff ff    	mov    %eax,-0xdd(%ebp)
 821cd66:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 821cd6c:	89 85 27 ff ff ff    	mov    %eax,-0xd9(%ebp)
 821cd72:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 821cd78:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 821cd7e:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 821cd84:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 821cd8a:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 821cd90:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 821cd96:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 821cd9c:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 821cda2:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 821cda8:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 821cdae:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 821cdb4:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 821cdba:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 821cdc0:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 821cdc6:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 821cdcc:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 821cdd2:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 821cdd8:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 821cdde:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 821cde4:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 821cdea:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 821cdf0:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 821cdf6:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 821cdfd:	88 85 57 ff ff ff    	mov    %al,-0xa9(%ebp)
 821ce03:	8b 85 22 ff ff ff    	mov    -0xde(%ebp),%eax
 821ce09:	89 45 c0             	mov    %eax,-0x40(%ebp)
 821ce0c:	eb 5b                	jmp    821ce69 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb83>
 821ce0e:	83 fa 01             	cmp    $0x1,%edx
 821ce11:	74 08                	je     821ce1b <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb35>
 821ce13:	89 04 24             	mov    %eax,(%esp)
 821ce16:	e8 35 69 8c 00       	call   8ae3750 <_Unwind_Resume>
 821ce1b:	89 04 24             	mov    %eax,(%esp)
 821ce1e:	e8 bd 8e 50 00       	call   8725ce0 <__cxa_begin_catch>
 821ce23:	8b 00                	mov    (%eax),%eax
 821ce25:	89 45 e0             	mov    %eax,-0x20(%ebp)
 821ce28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821ce2b:	0f b6 c0             	movzbl %al,%eax
 821ce2e:	89 44 24 08          	mov    %eax,0x8(%esp)
 821ce32:	c7 44 24 04 da 00 00 	movl   $0xda,0x4(%esp)
 821ce39:	00 
 821ce3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ce3d:	89 04 24             	mov    %eax,(%esp)
 821ce40:	e8 fd f0 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821ce45:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ce4a:	e8 e1 8d 50 00       	call   8725c30 <__cxa_end_catch>
 821ce4f:	e9 63 04 00 00       	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821ce54:	89 d3                	mov    %edx,%ebx
 821ce56:	89 c6                	mov    %eax,%esi
 821ce58:	e8 d3 8d 50 00       	call   8725c30 <__cxa_end_catch>
 821ce5d:	89 f0                	mov    %esi,%eax
 821ce5f:	89 da                	mov    %ebx,%edx
 821ce61:	89 04 24             	mov    %eax,(%esp)
 821ce64:	e8 e7 68 8c 00       	call   8ae3750 <_Unwind_Resume>
 821ce69:	e8 3f 2a 3f 00       	call   860f8ad <_Z34GetInstanceVendingMachineStatisticv>
 821ce6e:	89 04 24             	mov    %eax,(%esp)
 821ce71:	e8 9e 08 01 00       	call   822d714 <_ZN24CVendingMachineStatistic11incUseCountEv>
 821ce76:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 821ce7d:	eb 5b                	jmp    821ceda <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xbf4>
 821ce7f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 821ce82:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 821ce88:	c1 e2 04             	shl    $0x4,%edx
 821ce8b:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 821ce8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821ce91:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821ce94:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821ce97:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821ce9a:	2d 57 01 00 00       	sub    $0x157,%eax
 821ce9f:	8b 40 07             	mov    0x7(%eax),%eax
 821cea2:	89 c2                	mov    %eax,%edx
 821cea4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821cea7:	6b c0 3d             	imul   $0x3d,%eax,%eax
 821ceaa:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821cead:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821ceb0:	2d 57 01 00 00       	sub    $0x157,%eax
 821ceb5:	8b 40 02             	mov    0x2(%eax),%eax
 821ceb8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 821cebc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821cec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 821cec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cec7:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cecb:	8b 45 08             	mov    0x8(%ebp),%eax
 821cece:	89 04 24             	mov    %eax,(%esp)
 821ced1:	e8 46 e8 ff ff       	call   821b71c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE>
 821ced6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 821ceda:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 821cede:	0f 9e c0             	setle  %al
 821cee1:	84 c0                	test   %al,%al
 821cee3:	75 9a                	jne    821ce7f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xb99>
 821cee5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 821ceec:	e9 ea 00 00 00       	jmp    821cfdb <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xcf5>
 821cef1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821cef4:	c1 e0 04             	shl    $0x4,%eax
 821cef7:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821cefa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821cefd:	2d a0 00 00 00       	sub    $0xa0,%eax
 821cf02:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 821cf06:	83 f0 01             	xor    $0x1,%eax
 821cf09:	84 c0                	test   %al,%al
 821cf0b:	74 70                	je     821cf7d <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xc97>
 821cf0d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cf10:	8d 50 10             	lea    0x10(%eax),%edx
 821cf13:	8d 45 a8             	lea    -0x58(%ebp),%eax
 821cf16:	89 54 24 04          	mov    %edx,0x4(%esp)
 821cf1a:	89 04 24             	mov    %eax,(%esp)
 821cf1d:	e8 ec af 01 00       	call   8237f0e <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE5beginEv>
 821cf22:	83 ec 04             	sub    $0x4,%esp
 821cf25:	8d 45 a8             	lea    -0x58(%ebp),%eax
 821cf28:	89 04 24             	mov    %eax,(%esp)
 821cf2b:	e8 4c b1 01 00       	call   823807c <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEdeEv>
 821cf30:	8b 10                	mov    (%eax),%edx
 821cf32:	89 95 78 ff ff ff    	mov    %edx,-0x88(%ebp)
 821cf38:	8b 50 04             	mov    0x4(%eax),%edx
 821cf3b:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 821cf41:	8b 40 08             	mov    0x8(%eax),%eax
 821cf44:	89 45 80             	mov    %eax,-0x80(%ebp)
 821cf47:	8b 55 e8             	mov    -0x18(%ebp),%edx
 821cf4a:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 821cf50:	c1 e2 04             	shl    $0x4,%edx
 821cf53:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 821cf56:	8b 55 80             	mov    -0x80(%ebp),%edx
 821cf59:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 821cf5f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 821cf63:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821cf67:	89 44 24 08          	mov    %eax,0x8(%esp)
 821cf6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cf6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cf72:	8b 45 08             	mov    0x8(%ebp),%eax
 821cf75:	89 04 24             	mov    %eax,(%esp)
 821cf78:	e8 9f e7 ff ff       	call   821b71c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE>
 821cf7d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821cf80:	c1 e0 04             	shl    $0x4,%eax
 821cf83:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821cf86:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821cf89:	2d a0 00 00 00       	sub    $0xa0,%eax
 821cf8e:	8b 00                	mov    (%eax),%eax
 821cf90:	83 f8 ff             	cmp    $0xffffffff,%eax
 821cf93:	74 42                	je     821cfd7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xcf1>
 821cf95:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821cf98:	c1 e0 04             	shl    $0x4,%eax
 821cf9b:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821cf9e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821cfa1:	2d 9c 00 00 00       	sub    $0x9c,%eax
 821cfa6:	8b 00                	mov    (%eax),%eax
 821cfa8:	85 c0                	test   %eax,%eax
 821cfaa:	74 2b                	je     821cfd7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xcf1>
 821cfac:	8b 55 e8             	mov    -0x18(%ebp),%edx
 821cfaf:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 821cfb5:	c1 e2 04             	shl    $0x4,%edx
 821cfb8:	01 d0                	add    %edx,%eax
 821cfba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821cfbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 821cfc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 821cfc5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821cfc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 821cfcc:	8b 45 08             	mov    0x8(%ebp),%eax
 821cfcf:	89 04 24             	mov    %eax,(%esp)
 821cfd2:	e8 a5 f1 ff ff       	call   821c17c <_ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE>
 821cfd7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 821cfdb:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 821cfdf:	0f 9e c0             	setle  %al
 821cfe2:	84 c0                	test   %al,%al
 821cfe4:	0f 85 07 ff ff ff    	jne    821cef1 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xc0b>
 821cfea:	8d 45 88             	lea    -0x78(%ebp),%eax
 821cfed:	89 04 24             	mov    %eax,(%esp)
 821cff0:	e8 57 0d 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821cff5:	c7 44 24 08 da 00 00 	movl   $0xda,0x8(%esp)
 821cffc:	00 
 821cffd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d004:	00 
 821d005:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d008:	89 04 24             	mov    %eax,(%esp)
 821d00b:	e8 ec e8 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821d010:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d017:	00 
 821d018:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d01b:	89 04 24             	mov    %eax,(%esp)
 821d01e:	e8 fd e8 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821d023:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 821d027:	98                   	cwtl
 821d028:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d02c:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d02f:	89 04 24             	mov    %eax,(%esp)
 821d032:	e8 6d ce eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821d037:	8b 45 c0             	mov    -0x40(%ebp),%eax
 821d03a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d03e:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d041:	89 04 24             	mov    %eax,(%esp)
 821d044:	e8 f3 e8 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821d049:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 821d050:	eb 48                	jmp    821d09a <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xdb4>
 821d052:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821d055:	c1 e0 04             	shl    $0x4,%eax
 821d058:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821d05b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821d05e:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d063:	8b 00                	mov    (%eax),%eax
 821d065:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d069:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d06c:	89 04 24             	mov    %eax,(%esp)
 821d06f:	e8 20 e7 00 00       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 821d074:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821d077:	c1 e0 04             	shl    $0x4,%eax
 821d07a:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821d07d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821d080:	2d 9c 00 00 00       	sub    $0x9c,%eax
 821d085:	8b 00                	mov    (%eax),%eax
 821d087:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d08b:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d08e:	89 04 24             	mov    %eax,(%esp)
 821d091:	e8 a6 e8 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821d096:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 821d09a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 821d09e:	0f 9e c0             	setle  %al
 821d0a1:	84 c0                	test   %al,%al
 821d0a3:	75 ad                	jne    821d052 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xd6c>
 821d0a5:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 821d0ac:	eb 48                	jmp    821d0f6 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xe10>
 821d0ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821d0b1:	c1 e0 04             	shl    $0x4,%eax
 821d0b4:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821d0b7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821d0ba:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d0bf:	8b 00                	mov    (%eax),%eax
 821d0c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d0c5:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d0c8:	89 04 24             	mov    %eax,(%esp)
 821d0cb:	e8 c4 e6 00 00       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 821d0d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821d0d3:	c1 e0 04             	shl    $0x4,%eax
 821d0d6:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821d0d9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821d0dc:	2d 9c 00 00 00       	sub    $0x9c,%eax
 821d0e1:	8b 00                	mov    (%eax),%eax
 821d0e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d0e7:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d0ea:	89 04 24             	mov    %eax,(%esp)
 821d0ed:	e8 4a e8 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821d0f2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 821d0f6:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 821d0fa:	0f 9e c0             	setle  %al
 821d0fd:	84 c0                	test   %al,%al
 821d0ff:	75 ad                	jne    821d0ae <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xdc8>
 821d101:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d104:	89 04 24             	mov    %eax,(%esp)
 821d107:	e8 40 3a ef ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 821d10c:	89 45 84             	mov    %eax,-0x7c(%ebp)
 821d10f:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 821d116:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821d11d:	00 
 821d11e:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d121:	89 04 24             	mov    %eax,(%esp)
 821d124:	e8 7b cd eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821d129:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 821d130:	e9 e5 00 00 00       	jmp    821d21a <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf34>
 821d135:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d138:	c1 e0 04             	shl    $0x4,%eax
 821d13b:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821d13e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821d141:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d146:	8b 00                	mov    (%eax),%eax
 821d148:	83 f8 ff             	cmp    $0xffffffff,%eax
 821d14b:	0f 84 be 00 00 00    	je     821d20f <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf29>
 821d151:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d154:	c1 e0 04             	shl    $0x4,%eax
 821d157:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821d15a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821d15d:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d162:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 821d166:	66 83 f8 ff          	cmp    $0xffff,%ax
 821d16a:	0f 84 a2 00 00 00    	je     821d212 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf2c>
 821d170:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d173:	c1 e0 04             	shl    $0x4,%eax
 821d176:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821d179:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821d17c:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d181:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 821d185:	83 f0 01             	xor    $0x1,%eax
 821d188:	84 c0                	test   %al,%al
 821d18a:	0f 85 85 00 00 00    	jne    821d215 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf2f>
 821d190:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d193:	c1 e0 04             	shl    $0x4,%eax
 821d196:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821d199:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821d19c:	2d 98 00 00 00       	sub    $0x98,%eax
 821d1a1:	8b 00                	mov    (%eax),%eax
 821d1a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d1a7:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d1aa:	89 04 24             	mov    %eax,(%esp)
 821d1ad:	e8 6e e7 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821d1b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d1b5:	c1 e0 04             	shl    $0x4,%eax
 821d1b8:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 821d1bb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 821d1be:	2d a0 00 00 00       	sub    $0xa0,%eax
 821d1c3:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 821d1c7:	0f bf f0             	movswl %ax,%esi
 821d1ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d1cd:	c1 e0 04             	shl    $0x4,%eax
 821d1d0:	8d 55 f8             	lea    -0x8(%ebp),%edx
 821d1d3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821d1d6:	2d 98 00 00 00       	sub    $0x98,%eax
 821d1db:	8b 00                	mov    (%eax),%eax
 821d1dd:	89 04 24             	mov    %eax,(%esp)
 821d1e0:	e8 60 a6 ed ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 821d1e5:	89 c3                	mov    %eax,%ebx
 821d1e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d1ea:	89 04 24             	mov    %eax,(%esp)
 821d1ed:	e8 8c d0 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821d1f2:	8d 55 88             	lea    -0x78(%ebp),%edx
 821d1f5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821d1f9:	89 74 24 08          	mov    %esi,0x8(%esp)
 821d1fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821d201:	89 04 24             	mov    %eax,(%esp)
 821d204:	e8 b3 f4 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 821d209:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 821d20d:	eb 07                	jmp    821d216 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf30>
 821d20f:	90                   	nop
 821d210:	eb 04                	jmp    821d216 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf30>
 821d212:	90                   	nop
 821d213:	eb 01                	jmp    821d216 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xf30>
 821d215:	90                   	nop
 821d216:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 821d21a:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 821d21e:	0f 9e c0             	setle  %al
 821d221:	84 c0                	test   %al,%al
 821d223:	0f 85 0c ff ff ff    	jne    821d135 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xe4f>
 821d229:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 821d22c:	89 44 24 08          	mov    %eax,0x8(%esp)
 821d230:	8d 45 84             	lea    -0x7c(%ebp),%eax
 821d233:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d237:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d23a:	89 04 24             	mov    %eax,(%esp)
 821d23d:	e8 c6 96 ef ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 821d242:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d249:	00 
 821d24a:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d24d:	89 04 24             	mov    %eax,(%esp)
 821d250:	e8 03 e7 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821d255:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d258:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d25c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d25f:	89 04 24             	mov    %eax,(%esp)
 821d262:	e8 53 b3 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821d267:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d26e:	00 
 821d26f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d276:	00 
 821d277:	c7 44 24 04 27 00 00 	movl   $0x27,0x4(%esp)
 821d27e:	00 
 821d27f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d282:	89 04 24             	mov    %eax,(%esp)
 821d285:	e8 06 51 f0 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 821d28a:	bb 00 00 00 00       	mov    $0x0,%ebx
 821d28f:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d292:	89 04 24             	mov    %eax,(%esp)
 821d295:	e8 e6 0b 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d29a:	eb 1b                	jmp    821d2b7 <_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf+0xfd1>
 821d29c:	89 d3                	mov    %edx,%ebx
 821d29e:	89 c6                	mov    %eax,%esi
 821d2a0:	8d 45 88             	lea    -0x78(%ebp),%eax
 821d2a3:	89 04 24             	mov    %eax,(%esp)
 821d2a6:	e8 d5 0b 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d2ab:	89 f0                	mov    %esi,%eax
 821d2ad:	89 da                	mov    %ebx,%edx
 821d2af:	89 04 24             	mov    %eax,(%esp)
 821d2b2:	e8 99 64 8c 00       	call   8ae3750 <_Unwind_Resume>
 821d2b7:	89 d8                	mov    %ebx,%eax
 821d2b9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 821d2bc:	83 c4 00             	add    $0x0,%esp
 821d2bf:	5b                   	pop    %ebx
 821d2c0:	5e                   	pop    %esi
 821d2c1:	5d                   	pop    %ebp
 821d2c2:	c3                   	ret
 821d2c3:	90                   	nop

```

```c
// Dispatcher_UseVendingMachine::dispatch_sig @ 0x821c2e6

/* Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseVendingMachine::dispatch_sig
          (Dispatcher_UseVendingMachine *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  CInventory *pCVar6;
  undefined4 *puVar7;
  uint uVar8;
  CVendingMachineStatistic *this_01;
  ulong *puVar9;
  Inven_Item *this_02;
  int iVar10;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  Inven_Item local_163 [7];
  undefined1 auStack_15c [5];
  undefined4 auStack_157 [12];
  undefined1 auStack_127 [62];
  undefined2 local_e9;
  undefined2 uStack_e7;
  undefined2 uStack_e5;
  undefined1 uStack_e3;
  int iStack_e2;
  undefined1 uStack_de;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined1 local_ad;
  stPutItemResult_t local_ac [4];
  int aiStack_a8 [2];
  short sStack_a0;
  char acStack_9e [18];
  ulong local_8c;
  ulong local_88;
  uint local_84;
  int local_80;
  PacketGuard local_7c [12];
  int local_70 [2];
  short local_66;
  uint local_64;
  uint local_60;
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_5c [4];
  stVendingMachine_t *local_58;
  stVendingMachineInfo_t *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  if ((param_1 == (CUser *)0x0) || (cVar3 = CUser::CheckInTrade(param_1), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0;
  }
  local_60 = 0;
  local_64 = 0;
  local_66 = -1;
  cVar3 = PacketBuf::get_int(param_2,&local_60);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd029,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_64);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd02a,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_66);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd02b,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_58 = (stVendingMachine_t *)_getVendingMachine(this,local_60);
  if (local_58 == (stVendingMachine_t *)0x0) {
    uVar5 = LineFunc(0xd02f,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_54 = (stVendingMachineInfo_t *)_getVendingMachineInfo(this,local_58,local_64);
  if (local_54 == (stVendingMachineInfo_t *)0x0) {
    uVar5 = LineFunc(0xd033,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_50 = 1;
  local_4c = 1;
  local_48 = 2;
  local_70[0] = 0;
  local_70[1] = 0;
  this_02 = local_163;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_02);
    this_02 = this_02 + 0x3d;
  }
  for (local_3c = 0; local_3c < 2; local_3c = local_3c + 1) {
    *(undefined4 *)(local_163 + local_3c * 0x3d + 2) = 0xffffffff;
  }
  for (local_38 = 0; local_38 < 1; local_38 = local_38 + 1) {
    local_34 = 0;
    do {
      if (2 < local_34) {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0821c56c to 0821c6c9 has its CatchHandler @ 0821c75b */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      iVar4 = local_38 * 0x3d;
      _getGiveItem((stVendingMachineInfo_t *)&local_1ac);
      *(undefined4 *)(local_163 + iVar4) = local_1ac;
      *(undefined4 *)(local_163 + iVar4 + 4) = local_1a8;
      *(undefined4 *)((int)auStack_157 + iVar4 + -4) = local_1a4;
      *(undefined4 *)((int)auStack_157 + iVar4) = local_1a0;
      *(undefined4 *)((int)auStack_157 + iVar4 + 4) = local_19c;
      *(undefined4 *)((int)auStack_157 + iVar4 + 8) = local_198;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0xc) = local_194;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x10) = local_190;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x14) = local_18c;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x18) = local_188;
      *(undefined4 *)(auStack_127 + iVar4 + -0x14) = local_184;
      *(undefined4 *)(auStack_127 + iVar4 + -0x10) = local_180;
      *(undefined4 *)(auStack_127 + iVar4 + -0xc) = local_17c;
      *(undefined4 *)(auStack_127 + iVar4 + -8) = local_178;
      *(undefined4 *)(auStack_127 + iVar4 + -4) = local_174;
      auStack_127[iVar4] = local_170;
      iVar4 = local_38;
      if (*(int *)(local_163 + local_38 * 0x3d + 2) == -1) {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      iVar10 = *(int *)(local_163 + local_38 * 0x3d + 2);
      this_00 = (CDataManager *)G_CDataManager();
      iVar10 = CDataManager::find_item(this_00,iVar10);
      local_70[iVar4] = iVar10;
      if (((local_70[local_38] == 0) ||
          (iVar4 = (**(code **)(*(int *)local_70[local_38] + 0xc))(local_70[local_38]),
          iVar4 != 0x17)) ||
         (iVar4 = CGlobalEffectManager::getEffectNum(GlobalData::s_globalEffectManager_), iVar4 == 0
         )) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined4 *)(local_163 + local_38 * 0x3d + 2) = 0xffffffff;
        *(undefined4 *)((int)auStack_157 + local_38 * 0x3d + -5) = 0;
        local_34 = local_34 + 1;
      }
    } while (*(int *)(local_163 + local_38 * 0x3d + 2) == -1);
  }
  local_44 = 0;
  for (local_2c = 1; local_2c < 2; local_2c = local_2c + 1) {
    iVar4 = local_2c * 0x3d;
    _getBonusItem((stVendingMachineInfo_t *)&local_1ac);
    *(undefined4 *)(local_163 + iVar4) = local_1ac;
    *(undefined4 *)(local_163 + iVar4 + 4) = local_1a8;
    *(undefined4 *)((int)auStack_157 + iVar4 + -4) = local_1a4;
    *(undefined4 *)((int)auStack_157 + iVar4) = local_1a0;
    *(undefined4 *)((int)auStack_157 + iVar4 + 4) = local_19c;
    *(undefined4 *)((int)auStack_157 + iVar4 + 8) = local_198;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0xc) = local_194;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x10) = local_190;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x14) = local_18c;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x18) = local_188;
    *(undefined4 *)(auStack_127 + iVar4 + -0x14) = local_184;
    *(undefined4 *)(auStack_127 + iVar4 + -0x10) = local_180;
    *(undefined4 *)(auStack_127 + iVar4 + -0xc) = local_17c;
    *(undefined4 *)(auStack_127 + iVar4 + -8) = local_178;
    *(undefined4 *)(auStack_127 + iVar4 + -4) = local_174;
    auStack_127[iVar4] = local_170;
  }
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0821c8bb to 0821cd3e has its CatchHandler @ 0821ce0e */
  cVar3 = CInventory::check_empty_count(pCVar6,1,2);
  if (cVar3 == '\x01') {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::check_empty_count(pCVar6,2,2);
    if (cVar3 == '\x01') {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::check_empty_count(pCVar6,3,2);
      if (cVar3 == '\x01') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar3 = CInventory::check_empty_count(pCVar6,10,2);
        if (cVar3 == '\x01') {
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar3 = CInventory::check_empty_count(pCVar6,9,2);
          if (cVar3 == '\x01') {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar3 = CInventory::check_empty_count(pCVar6,5,2);
            if (cVar3 == '\x01') {
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar3 = CInventory::check_empty_count(pCVar6,6,2);
              if (cVar3 == '\x01') {
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                iVar4 = CInventory::GetRemainCapacity(pCVar6,2,8);
                if (1 < iVar4) {
                  bVar2 = false;
                  goto LAB_0821ca07;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_0821ca07:
  if (bVar2) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (*(int *)(local_54 + 4) == 0) {
    uVar5 = *(undefined4 *)(local_54 + 8);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar6,uVar5,0x1c,1);
    if (cVar3 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_44 = CInventory::get_money(pCVar6);
  }
  else if (*(int *)(local_54 + 4) == 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar8 = CInventory::getTotalCoin(pCVar6);
    if (uVar8 < *(uint *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    for (local_28 = 0; local_28 < *(uint *)(local_54 + 8); local_28 = local_28 + 1) {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::UseCoin(pCVar6,6);
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_44 = CInventory::getTotalCoin(pCVar6);
  }
  else if (*(int *)(local_54 + 4) == 2) {
    uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    if (uVar8 < *(uint *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    CUser::UseWinPoint(param_1,*(undefined4 *)(local_54 + 8),4);
    local_44 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
  }
  else {
    iVar10 = (int)local_66;
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = 1;
    CInventory::GetInvenSlot((int)&local_e9,iVar4);
    if (CONCAT22(uStack_e5,uStack_e7) != *(int *)(local_54 + 4)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,iVar10);
      *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    if (iStack_e2 < *(int *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,iVar10);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    uVar5 = *(undefined4 *)(local_54 + 8);
    iVar4 = (int)local_66;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar6,1,iVar4,uVar5,0x1c,1);
    if (cVar3 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_1ac,iVar4);
    local_e9 = (undefined2)local_1ac;
    uStack_e7 = (undefined2)((uint)local_1ac >> 0x10);
    uStack_e5 = (undefined2)local_1a8;
    uStack_e3 = (undefined1)((uint)local_1a8 >> 0x10);
    iStack_e2._1_3_ = (undefined3)local_1a4;
    iStack_e2 = CONCAT31(iStack_e2._1_3_,(char)((uint)local_1a8 >> 0x18));
    uStack_de = (undefined1)((uint)local_1a4 >> 0x18);
    local_dd = local_1a0;
    local_d9 = local_19c;
    local_d5 = local_198;
    local_d1 = local_194;
    local_cd = local_190;
    local_c9 = local_18c;
    local_c5 = local_188;
    local_c1 = local_184;
    local_bd = local_180;
    local_b9 = local_17c;
    local_b5 = local_178;
    local_b1 = local_174;
    local_ad = local_170;
    local_44 = iStack_e2;
  }
  this_01 = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
  CVendingMachineStatistic::incUseCount(this_01);
  for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
    _putItemIntoUser(this,param_1,*(ulong *)(local_163 + local_20 * 0x3d + 2),
                     *(uint *)((int)auStack_157 + local_20 * 0x3d + -5),local_ac + local_20 * 0x10);
  }
  for (local_1c = 0; local_1c < 1; local_1c = local_1c + 1) {
    if (acStack_9e[local_1c * 0x10] != '\x01') {
      std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
      puVar9 = (ulong *)__gnu_cxx::
                        __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                        ::operator*(local_5c);
      local_8c = *puVar9;
      local_88 = puVar9[1];
      local_84 = puVar9[2];
      _putItemIntoUser(this,param_1,local_8c,local_84,local_ac + local_1c * 0x10);
    }
    if ((*(int *)(local_ac + local_1c * 0x10) != -1) && (aiStack_a8[local_1c * 4] != 0)) {
      _notifyItemInfo(this,local_54,param_1,local_ac + local_1c * 0x10);
    }
  }
  PacketGuard::PacketGuard(local_7c);
                    /* try { // try from 0821d00b to 0821d289 has its CatchHandler @ 0821d29c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_7c,1,0xda);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_7c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,(int)local_66);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,local_44);
  for (local_18 = 0; local_18 < 1; local_18 = local_18 + 1) {
    InterfacePacketBuf::put_item_idx
              ((InterfacePacketBuf *)local_7c,*(ulong *)(local_ac + local_18 * 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,aiStack_a8[local_18 * 4]);
  }
  for (local_14 = 1; local_14 < 2; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_item_idx
              ((InterfacePacketBuf *)local_7c,*(ulong *)(local_ac + local_14 * 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,aiStack_a8[local_14 * 4]);
  }
  local_80 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_7c);
  local_40 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,0);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (((*(int *)(local_ac + local_10 * 0x10) != -1) && ((&sStack_a0)[local_10 * 8] != -1)) &&
       (acStack_9e[local_10 * 0x10] == '\x01')) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_7c,aiStack_a8[local_10 * 4 + 1]);
      sVar1 = (&sStack_a0)[local_10 * 8];
      uVar5 = GetInvenTypeFromItemSpace(aiStack_a8[local_10 * 4 + 1]);
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar6,uVar5,(int)sVar1,local_7c);
      local_40 = local_40 + 1;
    }
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,&local_80,local_40);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_7c,true);
  CUser::Send(param_1,local_7c);
  APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x27,0,0);
  PacketGuard::~PacketGuard(local_7c);
  return 0;
}

```

