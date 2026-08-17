# CPowerWarPacketLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CPowerWarPacketLog

```asm
// === 0848085a CPowerWarPacketLog::CPowerWarPacketLog  [0x0848085a-0x848089b] ===
 848085a:	55                   	push   %ebp
 848085b:	89 e5                	mov    %esp,%ebp
 848085d:	56                   	push   %esi
 848085e:	53                   	push   %ebx
 848085f:	83 ec 10             	sub    $0x10,%esp
 8480862:	8b 45 08             	mov    0x8(%ebp),%eax
 8480865:	89 04 24             	mov    %eax,(%esp)
 8480868:	e8 a9 08 00 00       	call   8481116 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 848086d:	8b 45 08             	mov    0x8(%ebp),%eax
 8480870:	89 04 24             	mov    %eax,(%esp)
 8480873:	e8 66 00 00 00       	call   84808de <_ZN18CPowerWarPacketLog5ResetEv>
 8480878:	eb 1b                	jmp    8480895 <_ZN18CPowerWarPacketLogC1Ev+0x3b>
 848087a:	89 d3                	mov    %edx,%ebx
 848087c:	89 c6                	mov    %eax,%esi
 848087e:	8b 45 08             	mov    0x8(%ebp),%eax
 8480881:	89 04 24             	mov    %eax,(%esp)
 8480884:	e8 4d 08 00 00       	call   84810d6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8480889:	89 f0                	mov    %esi,%eax
 848088b:	89 da                	mov    %ebx,%edx
 848088d:	89 04 24             	mov    %eax,(%esp)
 8480890:	e8 bb 2e 66 00       	call   8ae3750 <_Unwind_Resume>
 8480895:	83 c4 10             	add    $0x10,%esp
 8480898:	5b                   	pop    %ebx
 8480899:	5e                   	pop    %esi
 848089a:	5d                   	pop    %ebp
 848089b:	c3                   	ret

```

```c
// CPowerWarPacketLog::CPowerWarPacketLog @ 0x848085a

/* CPowerWarPacketLog::CPowerWarPacketLog() */

void __thiscall CPowerWarPacketLog::CPowerWarPacketLog(CPowerWarPacketLog *this)

{
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::map
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
                    /* try { // try from 08480873 to 08480877 has its CatchHandler @ 0848087a */
  Reset(this);
  return;
}

```

---

## InsertPacketLog

```asm
// === 08480970 CPowerWarPacketLog::InsertPacketLog  [0x08480970-0x8480abf] ===
 8480970:	55                   	push   %ebp
 8480971:	89 e5                	mov    %esp,%ebp
 8480973:	57                   	push   %edi
 8480974:	56                   	push   %esi
 8480975:	53                   	push   %ebx
 8480976:	83 ec 5c             	sub    $0x5c,%esp
 8480979:	8b 45 10             	mov    0x10(%ebp),%eax
 848097c:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 8480980:	0f b7 45 b4          	movzwl -0x4c(%ebp),%eax
 8480984:	0f b7 c0             	movzwl %ax,%eax
 8480987:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 848098a:	8b 55 08             	mov    0x8(%ebp),%edx
 848098d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8480990:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 8480993:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8480997:	89 54 24 04          	mov    %edx,0x4(%esp)
 848099b:	89 04 24             	mov    %eax,(%esp)
 848099e:	e8 8d 08 00 00       	call   8481230 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 84809a3:	83 ec 04             	sub    $0x4,%esp
 84809a6:	8b 55 08             	mov    0x8(%ebp),%edx
 84809a9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84809ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84809b0:	89 04 24             	mov    %eax,(%esp)
 84809b3:	e8 fe 07 00 00       	call   84811b6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 84809b8:	83 ec 04             	sub    $0x4,%esp
 84809bb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84809be:	89 44 24 04          	mov    %eax,0x4(%esp)
 84809c2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84809c5:	89 04 24             	mov    %eax,(%esp)
 84809c8:	e8 0f 08 00 00       	call   84811dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEneERKS5_>
 84809cd:	84 c0                	test   %al,%al
 84809cf:	74 25                	je     84809f6 <_ZN18CPowerWarPacketLog15InsertPacketLogEit9eSendTypePKc+0x86>
 84809d1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84809d4:	89 04 24             	mov    %eax,(%esp)
 84809d7:	e8 14 08 00 00       	call   84811f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEptEv>
 84809dc:	8b 40 04             	mov    0x4(%eax),%eax
 84809df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84809e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84809e5:	8b 40 0c             	mov    0xc(%eax),%eax
 84809e8:	8d 50 01             	lea    0x1(%eax),%edx
 84809eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84809ee:	89 50 0c             	mov    %edx,0xc(%eax)
 84809f1:	e9 be 00 00 00       	jmp    8480ab4 <_ZN18CPowerWarPacketLog15InsertPacketLogEit9eSendTypePKc+0x144>
 84809f6:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 84809fd:	e8 4e 3a 2a 00       	call   8724450 <_Znwj>
 8480a02:	89 c3                	mov    %eax,%ebx
 8480a04:	89 d8                	mov    %ebx,%eax
 8480a06:	89 04 24             	mov    %eax,(%esp)
 8480a09:	e8 f2 06 00 00       	call   8481100 <_ZN11STPacketLogC1Ev>
 8480a0e:	eb 18                	jmp    8480a28 <_ZN18CPowerWarPacketLog15InsertPacketLogEit9eSendTypePKc+0xb8>
 8480a10:	89 d6                	mov    %edx,%esi
 8480a12:	89 c7                	mov    %eax,%edi
 8480a14:	89 1c 24             	mov    %ebx,(%esp)
 8480a17:	e8 d4 3a 2a 00       	call   87244f0 <_ZdlPv>
 8480a1c:	89 f8                	mov    %edi,%eax
 8480a1e:	89 f2                	mov    %esi,%edx
 8480a20:	89 04 24             	mov    %eax,(%esp)
 8480a23:	e8 28 2d 66 00       	call   8ae3750 <_Unwind_Resume>
 8480a28:	89 d8                	mov    %ebx,%eax
 8480a2a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8480a2d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480a30:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8480a37:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480a3a:	0f b7 55 b4          	movzwl -0x4c(%ebp),%edx
 8480a3e:	0f b7 d2             	movzwl %dx,%edx
 8480a41:	89 50 08             	mov    %edx,0x8(%eax)
 8480a44:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480a47:	8b 55 14             	mov    0x14(%ebp),%edx
 8480a4a:	89 10                	mov    %edx,(%eax)
 8480a4c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480a4f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8480a52:	89 50 04             	mov    %edx,0x4(%eax)
 8480a55:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480a58:	8d 50 10             	lea    0x10(%eax),%edx
 8480a5b:	8b 45 18             	mov    0x18(%ebp),%eax
 8480a5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480a62:	89 14 24             	mov    %edx,(%esp)
 8480a65:	e8 26 7c 28 00       	call   8708690 <_ZNSs6assignEPKc>
 8480a6a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8480a6d:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8480a70:	89 54 24 08          	mov    %edx,0x8(%esp)
 8480a74:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8480a77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480a7b:	89 04 24             	mov    %eax,(%esp)
 8480a7e:	e8 d9 07 00 00       	call   848125c <_ZSt9make_pairIRtRP11STPacketLogESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8480a83:	83 ec 04             	sub    $0x4,%esp
 8480a86:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8480a89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480a8d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8480a90:	89 04 24             	mov    %eax,(%esp)
 8480a93:	e8 02 08 00 00       	call   848129a <_ZNSt4pairIKiP11STPacketLogEC1ItS2_EEOS_IT_T0_E>
 8480a98:	8b 55 08             	mov    0x8(%ebp),%edx
 8480a9b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8480a9e:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 8480aa1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8480aa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480aa9:	89 04 24             	mov    %eax,(%esp)
 8480aac:	e8 1d 08 00 00       	call   84812ce <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8480ab1:	83 ec 04             	sub    $0x4,%esp
 8480ab4:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8480ab7:	83 c4 00             	add    $0x0,%esp
 8480aba:	5b                   	pop    %ebx
 8480abb:	5e                   	pop    %esi
 8480abc:	5f                   	pop    %edi
 8480abd:	5d                   	pop    %ebp
 8480abe:	c3                   	ret
 8480abf:	90                   	nop

```

```c
// CPowerWarPacketLog::InsertPacketLog @ 0x8480970

/* CPowerWarPacketLog::InsertPacketLog(int, unsigned short, eSendType, char const*) */

void __thiscall
CPowerWarPacketLog::InsertPacketLog
          (undefined4 this,undefined4 param_1,ushort param_2,undefined4 param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  STPacketLog *this_00;
  ushort local_50 [4];
  STPacketLog *local_48;
  _Rb_tree_iterator<std::pair<int_const,STPacketLog*>> local_44 [4];
  uint local_40;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,STPacketLog*> local_30 [8];
  ushort local_28 [12];
  
  local_50[0] = param_2;
  local_40 = (uint)param_2;
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::find
            ((int *)local_44);
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
            (local_3c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_3c);
  if (cVar1 == '\0') {
    this_00 = operator_new(0x14);
                    /* try { // try from 08480a09 to 08480a0d has its CatchHandler @ 08480a10 */
    STPacketLog::STPacketLog(this_00);
    *(undefined4 *)(this_00 + 0xc) = 1;
    *(uint *)(this_00 + 8) = (uint)local_50[0];
    *(undefined4 *)this_00 = param_4;
    *(undefined4 *)(this_00 + 4) = param_1;
    local_48 = this_00;
    std::string::assign((string *)(this_00 + 0x10),param_5);
    std::make_pair<unsigned_short&,STPacketLog*&>(local_28,(STPacketLog **)local_50);
    std::pair<int_const,STPacketLog*>::pair<unsigned_short,STPacketLog*>(local_30,(pair *)local_28);
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::
    insert(local_38);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->(local_44);
    *(int *)(*(int *)(iVar2 + 4) + 0xc) = *(int *)(*(int *)(iVar2 + 4) + 0xc) + 1;
  }
  return;
}

```

---

## PrintPowerWarPacketLogReport

```asm
// === 08480ac0 CPowerWarPacketLog::PrintPowerWarPacketLogReport  [0x08480ac0-0x8480d97] ===
 8480ac0:	55                   	push   %ebp
 8480ac1:	89 e5                	mov    %esp,%ebp
 8480ac3:	57                   	push   %edi
 8480ac4:	56                   	push   %esi
 8480ac5:	53                   	push   %ebx
 8480ac6:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 8480acc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480ad3:	00 
 8480ad4:	c7 44 24 08 a1 03 00 	movl   $0x3a1,0x8(%esp)
 8480adb:	00 
 8480adc:	c7 44 24 04 c0 2e c7 	movl   $0x8c72ec0,0x4(%esp)
 8480ae3:	08 
 8480ae4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8480ae7:	89 04 24             	mov    %eax,(%esp)
 8480aea:	e8 29 ec 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480aef:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 8480af6:	08 
 8480af7:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8480afa:	89 04 24             	mov    %eax,(%esp)
 8480afd:	e8 86 ec 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480b02:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480b09:	00 
 8480b0a:	c7 44 24 08 a2 03 00 	movl   $0x3a2,0x8(%esp)
 8480b11:	00 
 8480b12:	c7 44 24 04 c0 2e c7 	movl   $0x8c72ec0,0x4(%esp)
 8480b19:	08 
 8480b1a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8480b1d:	89 04 24             	mov    %eax,(%esp)
 8480b20:	e8 f3 eb 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480b25:	c7 44 24 04 ac 21 c7 	movl   $0x8c721ac,0x4(%esp)
 8480b2c:	08 
 8480b2d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8480b30:	89 04 24             	mov    %eax,(%esp)
 8480b33:	e8 50 ec 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480b38:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480b3f:	00 
 8480b40:	c7 44 24 08 a3 03 00 	movl   $0x3a3,0x8(%esp)
 8480b47:	00 
 8480b48:	c7 44 24 04 c0 2e c7 	movl   $0x8c72ec0,0x4(%esp)
 8480b4f:	08 
 8480b50:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8480b53:	89 04 24             	mov    %eax,(%esp)
 8480b56:	e8 bd eb 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480b5b:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 8480b62:	08 
 8480b63:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8480b66:	89 04 24             	mov    %eax,(%esp)
 8480b69:	e8 1a ec 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480b6e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8480b74:	89 04 24             	mov    %eax,(%esp)
 8480b77:	e8 7e 07 00 00       	call   84812fa <_ZNSt6vectorIP11STPacketLogSaIS1_EEC1Ev>
 8480b7c:	8b 55 08             	mov    0x8(%ebp),%edx
 8480b7f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8480b85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480b89:	89 04 24             	mov    %eax,(%esp)
 8480b8c:	e8 ff 05 00 00       	call   8481190 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8480b91:	83 ec 04             	sub    $0x4,%esp
 8480b94:	eb 31                	jmp    8480bc7 <_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv+0x107>
 8480b96:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8480b9c:	89 04 24             	mov    %eax,(%esp)
 8480b9f:	e8 4c 06 00 00       	call   84811f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEptEv>
 8480ba4:	83 c0 04             	add    $0x4,%eax
 8480ba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480bab:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8480bb1:	89 04 24             	mov    %eax,(%esp)
 8480bb4:	e8 b3 07 00 00       	call   848136c <_ZNSt6vectorIP11STPacketLogSaIS1_EE9push_backERKS1_>
 8480bb9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8480bbf:	89 04 24             	mov    %eax,(%esp)
 8480bc2:	e8 37 06 00 00       	call   84811fe <_ZNSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEppEv>
 8480bc7:	8b 55 08             	mov    0x8(%ebp),%edx
 8480bca:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8480bcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480bd1:	89 04 24             	mov    %eax,(%esp)
 8480bd4:	e8 dd 05 00 00       	call   84811b6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8480bd9:	83 ec 04             	sub    $0x4,%esp
 8480bdc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8480bdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480be3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8480be9:	89 04 24             	mov    %eax,(%esp)
 8480bec:	e8 eb 05 00 00       	call   84811dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEneERKS5_>
 8480bf1:	84 c0                	test   %al,%al
 8480bf3:	75 a1                	jne    8480b96 <_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv+0xd6>
 8480bf5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8480bf8:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8480bfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480c02:	89 04 24             	mov    %eax,(%esp)
 8480c05:	e8 fa 07 00 00       	call   8481404 <_ZNSt6vectorIP11STPacketLogSaIS1_EE3endEv>
 8480c0a:	83 ec 04             	sub    $0x4,%esp
 8480c0d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8480c10:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8480c16:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480c1a:	89 04 24             	mov    %eax,(%esp)
 8480c1d:	e8 be 07 00 00       	call   84813e0 <_ZNSt6vectorIP11STPacketLogSaIS1_EE5beginEv>
 8480c22:	83 ec 04             	sub    $0x4,%esp
 8480c25:	c7 44 24 08 30 10 48 	movl   $0x8481030,0x8(%esp)
 8480c2c:	08 
 8480c2d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8480c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480c34:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8480c37:	89 04 24             	mov    %eax,(%esp)
 8480c3a:	e8 eb 07 00 00       	call   848142a <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPP11STPacketLogSt6vectorIS3_SaIS3_EEEEPFbPKS2_SA_EEvT_SD_T0_>
 8480c3f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8480c45:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8480c4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480c4f:	89 04 24             	mov    %eax,(%esp)
 8480c52:	e8 89 07 00 00       	call   84813e0 <_ZNSt6vectorIP11STPacketLogSaIS1_EE5beginEv>
 8480c57:	83 ec 04             	sub    $0x4,%esp
 8480c5a:	e9 95 00 00 00       	jmp    8480cf4 <_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv+0x234>
 8480c5f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8480c65:	89 04 24             	mov    %eax,(%esp)
 8480c68:	e8 5b 08 00 00       	call   84814c8 <_ZNK9__gnu_cxx17__normal_iteratorIPP11STPacketLogSt6vectorIS2_SaIS2_EEEdeEv>
 8480c6d:	8b 00                	mov    (%eax),%eax
 8480c6f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8480c72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8480c75:	83 c0 10             	add    $0x10,%eax
 8480c78:	89 04 24             	mov    %eax,(%esp)
 8480c7b:	e8 70 58 28 00       	call   87064f0 <_ZNKSs5c_strEv>
 8480c80:	89 c3                	mov    %eax,%ebx
 8480c82:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8480c85:	8b 40 0c             	mov    0xc(%eax),%eax
 8480c88:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8480c8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8480c91:	8b 78 08             	mov    0x8(%eax),%edi
 8480c94:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8480c97:	8b 70 04             	mov    0x4(%eax),%esi
 8480c9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480ca1:	00 
 8480ca2:	c7 44 24 08 b1 03 00 	movl   $0x3b1,0x8(%esp)
 8480ca9:	00 
 8480caa:	c7 44 24 04 c0 2e c7 	movl   $0x8c72ec0,0x4(%esp)
 8480cb1:	08 
 8480cb2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480cb5:	89 04 24             	mov    %eax,(%esp)
 8480cb8:	e8 5b ea 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480cbd:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8480cc1:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8480cc7:	89 44 24 10          	mov    %eax,0x10(%esp)
 8480ccb:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8480ccf:	89 74 24 08          	mov    %esi,0x8(%esp)
 8480cd3:	c7 44 24 04 1c 22 c7 	movl   $0x8c7221c,0x4(%esp)
 8480cda:	08 
 8480cdb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480cde:	89 04 24             	mov    %eax,(%esp)
 8480ce1:	e8 a2 ea 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480ce6:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8480cec:	89 04 24             	mov    %eax,(%esp)
 8480cef:	e8 de 07 00 00       	call   84814d2 <_ZN9__gnu_cxx17__normal_iteratorIPP11STPacketLogSt6vectorIS2_SaIS2_EEEppEv>
 8480cf4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8480cf7:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8480cfd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8480d01:	89 04 24             	mov    %eax,(%esp)
 8480d04:	e8 fb 06 00 00       	call   8481404 <_ZNSt6vectorIP11STPacketLogSaIS1_EE3endEv>
 8480d09:	83 ec 04             	sub    $0x4,%esp
 8480d0c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8480d0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480d13:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8480d19:	89 04 24             	mov    %eax,(%esp)
 8480d1c:	e8 7a 07 00 00       	call   848149b <_ZN9__gnu_cxxneIPP11STPacketLogSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8480d21:	84 c0                	test   %al,%al
 8480d23:	0f 85 36 ff ff ff    	jne    8480c5f <_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv+0x19f>
 8480d29:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480d30:	00 
 8480d31:	c7 44 24 08 b6 03 00 	movl   $0x3b6,0x8(%esp)
 8480d38:	00 
 8480d39:	c7 44 24 04 c0 2e c7 	movl   $0x8c72ec0,0x4(%esp)
 8480d40:	08 
 8480d41:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8480d44:	89 04 24             	mov    %eax,(%esp)
 8480d47:	e8 cc e9 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480d4c:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 8480d53:	08 
 8480d54:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8480d57:	89 04 24             	mov    %eax,(%esp)
 8480d5a:	e8 29 ea 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480d5f:	eb 1e                	jmp    8480d7f <_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv+0x2bf>
 8480d61:	89 d3                	mov    %edx,%ebx
 8480d63:	89 c6                	mov    %eax,%esi
 8480d65:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8480d6b:	89 04 24             	mov    %eax,(%esp)
 8480d6e:	e8 9b 05 00 00       	call   848130e <_ZNSt6vectorIP11STPacketLogSaIS1_EED1Ev>
 8480d73:	89 f0                	mov    %esi,%eax
 8480d75:	89 da                	mov    %ebx,%edx
 8480d77:	89 04 24             	mov    %eax,(%esp)
 8480d7a:	e8 d1 29 66 00       	call   8ae3750 <_Unwind_Resume>
 8480d7f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8480d85:	89 04 24             	mov    %eax,(%esp)
 8480d88:	e8 81 05 00 00       	call   848130e <_ZNSt6vectorIP11STPacketLogSaIS1_EED1Ev>
 8480d8d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8480d90:	83 c4 00             	add    $0x0,%esp
 8480d93:	5b                   	pop    %ebx
 8480d94:	5e                   	pop    %esi
 8480d95:	5f                   	pop    %edi
 8480d96:	5d                   	pop    %ebp
 8480d97:	c3                   	ret

```

```c
// CPowerWarPacketLog::PrintPowerWarPacketLogReport @ 0x8480ac0

/* CPowerWarPacketLog::PrintPowerWarPacketLogReport() */

void CPowerWarPacketLog::PrintPowerWarPacketLogReport(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_94 [4];
  __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>
  local_90 [4];
  vector<STPacketLog*,std::allocator<STPacketLog*>> local_8c [12];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  __normal_iterator local_44 [4];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  cMyTrace::cMyTrace(local_80,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a1,0);
  cMyTrace::operator()
            (local_80,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_70,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a2,0);
  cMyTrace::operator()
            (local_70,
             "|                                   POWAR WAR PACKET RESULT REPORT                                          |"
            );
  cMyTrace::cMyTrace(local_60,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a3,0);
  cMyTrace::operator()
            (local_60,
             "-------------------------------------------------------------------------------------------------------------"
            );
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::vector(local_8c);
                    /* try { // try from 08480b8c to 08480d5e has its CatchHandler @ 08480d61 */
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::begin
            (local_94);
  while( true ) {
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
              (local_50);
    cVar4 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94,
                       (_Rb_tree_iterator *)local_50);
    if (cVar4 == '\0') break;
    iVar6 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94);
    std::vector<STPacketLog*,std::allocator<STPacketLog*>>::push_back
              (local_8c,(STPacketLog **)(iVar6 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94);
  }
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::end();
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::begin();
  std::
  sort<__gnu_cxx::__normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>,bool(*)(STPacketLog_const*,STPacketLog_const*)>
            (local_48,local_4c,STPacketLog::Compare);
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::begin();
  while( true ) {
    std::vector<STPacketLog*,std::allocator<STPacketLog*>>::end();
    bVar5 = __gnu_cxx::operator!=(local_90,local_44);
    if (!bVar5) break;
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>
                    ::operator*(local_90);
    local_20 = *piVar7;
    uVar8 = std::string::c_str((string *)(local_20 + 0x10));
    uVar1 = *(undefined4 *)(local_20 + 0xc);
    uVar2 = *(undefined4 *)(local_20 + 8);
    uVar3 = *(undefined4 *)(local_20 + 4);
    cMyTrace::cMyTrace(local_40,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3b1,0);
    cMyTrace::operator()
              (local_40,"- PACKET CLASS:%d NO:%5d, COUNT:%8d, NAME:%s",uVar3,uVar2,uVar1,uVar8);
    __gnu_cxx::
    __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>::
    operator++(local_90);
  }
  cMyTrace::cMyTrace(local_30,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3b6,0);
  cMyTrace::operator()
            (local_30,
             "-------------------------------------------------------------------------------------------------------------"
            );
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::~vector(local_8c);
  return;
}

```

---

## Reset

```asm
// === 084808de CPowerWarPacketLog::Reset  [0x084808de-0x848096f] ===
 84808de:	55                   	push   %ebp
 84808df:	89 e5                	mov    %esp,%ebp
 84808e1:	53                   	push   %ebx
 84808e2:	83 ec 24             	sub    $0x24,%esp
 84808e5:	8b 55 08             	mov    0x8(%ebp),%edx
 84808e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84808eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84808ef:	89 04 24             	mov    %eax,(%esp)
 84808f2:	e8 99 08 00 00       	call   8481190 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 84808f7:	83 ec 04             	sub    $0x4,%esp
 84808fa:	eb 39                	jmp    8480935 <_ZN18CPowerWarPacketLog5ResetEv+0x57>
 84808fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84808ff:	89 04 24             	mov    %eax,(%esp)
 8480902:	e8 e9 08 00 00       	call   84811f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEptEv>
 8480907:	8b 40 04             	mov    0x4(%eax),%eax
 848090a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848090d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8480911:	74 17                	je     848092a <_ZN18CPowerWarPacketLog5ResetEv+0x4c>
 8480913:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8480916:	85 db                	test   %ebx,%ebx
 8480918:	74 10                	je     848092a <_ZN18CPowerWarPacketLog5ResetEv+0x4c>
 848091a:	89 1c 24             	mov    %ebx,(%esp)
 848091d:	e8 c8 07 00 00       	call   84810ea <_ZN11STPacketLogD1Ev>
 8480922:	89 1c 24             	mov    %ebx,(%esp)
 8480925:	e8 c6 3b 2a 00       	call   87244f0 <_ZdlPv>
 848092a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848092d:	89 04 24             	mov    %eax,(%esp)
 8480930:	e8 c9 08 00 00       	call   84811fe <_ZNSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEppEv>
 8480935:	8b 55 08             	mov    0x8(%ebp),%edx
 8480938:	8d 45 f0             	lea    -0x10(%ebp),%eax
 848093b:	89 54 24 04          	mov    %edx,0x4(%esp)
 848093f:	89 04 24             	mov    %eax,(%esp)
 8480942:	e8 6f 08 00 00       	call   84811b6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8480947:	83 ec 04             	sub    $0x4,%esp
 848094a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 848094d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480951:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8480954:	89 04 24             	mov    %eax,(%esp)
 8480957:	e8 80 08 00 00       	call   84811dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP11STPacketLogEEneERKS5_>
 848095c:	84 c0                	test   %al,%al
 848095e:	75 9c                	jne    84808fc <_ZN18CPowerWarPacketLog5ResetEv+0x1e>
 8480960:	8b 45 08             	mov    0x8(%ebp),%eax
 8480963:	89 04 24             	mov    %eax,(%esp)
 8480966:	e8 b1 08 00 00       	call   848121c <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 848096b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 848096e:	c9                   	leave
 848096f:	c3                   	ret

```

```c
// CPowerWarPacketLog::Reset @ 0x84808de

/* CPowerWarPacketLog::Reset() */

void __thiscall CPowerWarPacketLog::Reset(CPowerWarPacketLog *this)

{
  STPacketLog *this_00;
  char cVar1;
  int iVar2;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_18 [4];
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_14 [4];
  STPacketLog *local_10;
  
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::begin
            (local_18);
  while( true ) {
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18);
    this_00 = *(STPacketLog **)(iVar2 + 4);
    local_10 = this_00;
    if ((this_00 != (STPacketLog *)0x0) && (this_00 != (STPacketLog *)0x0)) {
      STPacketLog::~STPacketLog(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18);
  }
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::clear
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
  return;
}

```

---

## ~CPowerWarPacketLog

```asm
// === 0848089c CPowerWarPacketLog::~CPowerWarPacketLog  [0x0848089c-0x84808dd] ===
 848089c:	55                   	push   %ebp
 848089d:	89 e5                	mov    %esp,%ebp
 848089f:	56                   	push   %esi
 84808a0:	53                   	push   %ebx
 84808a1:	83 ec 10             	sub    $0x10,%esp
 84808a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84808a7:	89 04 24             	mov    %eax,(%esp)
 84808aa:	e8 2f 00 00 00       	call   84808de <_ZN18CPowerWarPacketLog5ResetEv>
 84808af:	eb 1b                	jmp    84808cc <_ZN18CPowerWarPacketLogD1Ev+0x30>
 84808b1:	89 d3                	mov    %edx,%ebx
 84808b3:	89 c6                	mov    %eax,%esi
 84808b5:	8b 45 08             	mov    0x8(%ebp),%eax
 84808b8:	89 04 24             	mov    %eax,(%esp)
 84808bb:	e8 16 08 00 00       	call   84810d6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 84808c0:	89 f0                	mov    %esi,%eax
 84808c2:	89 da                	mov    %ebx,%edx
 84808c4:	89 04 24             	mov    %eax,(%esp)
 84808c7:	e8 84 2e 66 00       	call   8ae3750 <_Unwind_Resume>
 84808cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84808cf:	89 04 24             	mov    %eax,(%esp)
 84808d2:	e8 ff 07 00 00       	call   84810d6 <_ZNSt3mapIiP11STPacketLogSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 84808d7:	83 c4 10             	add    $0x10,%esp
 84808da:	5b                   	pop    %ebx
 84808db:	5e                   	pop    %esi
 84808dc:	5d                   	pop    %ebp
 84808dd:	c3                   	ret

```

```c
// CPowerWarPacketLog::~CPowerWarPacketLog @ 0x848089c

/* CPowerWarPacketLog::~CPowerWarPacketLog() */

void __thiscall CPowerWarPacketLog::~CPowerWarPacketLog(CPowerWarPacketLog *this)

{
                    /* try { // try from 084808aa to 084808ae has its CatchHandler @ 084808b1 */
  Reset(this);
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::~map
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
  return;
}

```

