# StackableAction__Action

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Action

```asm
// === 0827f6d8 StackableAction::Action::Action  [0x0827f6d8-0x827f75f] ===
 827f6d8:	55                   	push   %ebp
 827f6d9:	89 e5                	mov    %esp,%ebp
 827f6db:	56                   	push   %esi
 827f6dc:	53                   	push   %ebx
 827f6dd:	83 ec 10             	sub    $0x10,%esp
 827f6e0:	8b 45 08             	mov    0x8(%ebp),%eax
 827f6e3:	89 04 24             	mov    %eax,(%esp)
 827f6e6:	e8 ad 07 00 00       	call   827fe98 <_ZN5boost12noncopyable_11noncopyableC1Ev>
 827f6eb:	8b 45 08             	mov    0x8(%ebp),%eax
 827f6ee:	89 04 24             	mov    %eax,(%esp)
 827f6f1:	e8 22 08 00 00       	call   827ff18 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEEC1Ev>
 827f6f6:	8b 45 08             	mov    0x8(%ebp),%eax
 827f6f9:	83 c0 18             	add    $0x18,%eax
 827f6fc:	89 04 24             	mov    %eax,(%esp)
 827f6ff:	e8 14 08 00 00       	call   827ff18 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEEC1Ev>
 827f704:	8b 45 08             	mov    0x8(%ebp),%eax
 827f707:	89 04 24             	mov    %eax,(%esp)
 827f70a:	e8 b9 00 00 00       	call   827f7c8 <_ZN15StackableAction6Action18init_function_typeEv>
 827f70f:	eb 48                	jmp    827f759 <_ZN15StackableAction6ActionC1Ev+0x81>
 827f711:	89 d3                	mov    %edx,%ebx
 827f713:	89 c6                	mov    %eax,%esi
 827f715:	8b 45 08             	mov    0x8(%ebp),%eax
 827f718:	83 c0 18             	add    $0x18,%eax
 827f71b:	89 04 24             	mov    %eax,(%esp)
 827f71e:	e8 81 07 00 00       	call   827fea4 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEED1Ev>
 827f723:	89 f0                	mov    %esi,%eax
 827f725:	89 da                	mov    %ebx,%edx
 827f727:	eb 00                	jmp    827f729 <_ZN15StackableAction6ActionC1Ev+0x51>
 827f729:	89 d3                	mov    %edx,%ebx
 827f72b:	89 c6                	mov    %eax,%esi
 827f72d:	8b 45 08             	mov    0x8(%ebp),%eax
 827f730:	89 04 24             	mov    %eax,(%esp)
 827f733:	e8 6c 07 00 00       	call   827fea4 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEED1Ev>
 827f738:	89 f0                	mov    %esi,%eax
 827f73a:	89 da                	mov    %ebx,%edx
 827f73c:	eb 00                	jmp    827f73e <_ZN15StackableAction6ActionC1Ev+0x66>
 827f73e:	89 d3                	mov    %edx,%ebx
 827f740:	89 c6                	mov    %eax,%esi
 827f742:	8b 45 08             	mov    0x8(%ebp),%eax
 827f745:	89 04 24             	mov    %eax,(%esp)
 827f748:	e8 51 07 00 00       	call   827fe9e <_ZN5boost12noncopyable_11noncopyableD1Ev>
 827f74d:	89 f0                	mov    %esi,%eax
 827f74f:	89 da                	mov    %ebx,%edx
 827f751:	89 04 24             	mov    %eax,(%esp)
 827f754:	e8 f7 3f 86 00       	call   8ae3750 <_Unwind_Resume>
 827f759:	83 c4 10             	add    $0x10,%esp
 827f75c:	5b                   	pop    %ebx
 827f75d:	5e                   	pop    %esi
 827f75e:	5d                   	pop    %ebp
 827f75f:	c3                   	ret

```

```c
// StackableAction::Action::Action @ 0x827f6d8

/* StackableAction::Action::Action() */

void __thiscall StackableAction::Action::Action(Action *this)

{
  boost::noncopyable_::noncopyable::noncopyable((noncopyable *)this);
                    /* try { // try from 0827f6f1 to 0827f6f5 has its CatchHandler @ 0827f73e */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
         *)this);
                    /* try { // try from 0827f6ff to 0827f703 has its CatchHandler @ 0827f729 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
         *)(this + 0x18));
                    /* try { // try from 0827f70a to 0827f70e has its CatchHandler @ 0827f711 */
  init_function_type();
  return;
}

```

---

## check

```asm
// === 0827fa26 StackableAction::Action::check  [0x0827fa26-0x827fa99] ===
 827fa26:	55                   	push   %ebp
 827fa27:	89 e5                	mov    %esp,%ebp
 827fa29:	83 ec 28             	sub    $0x28,%esp
 827fa2c:	8b 55 08             	mov    0x8(%ebp),%edx
 827fa2f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827fa32:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 827fa35:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827fa39:	89 54 24 04          	mov    %edx,0x4(%esp)
 827fa3d:	89 04 24             	mov    %eax,(%esp)
 827fa40:	e8 9d 06 00 00       	call   82800e2 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE4findERSA_>
 827fa45:	83 ec 04             	sub    $0x4,%esp
 827fa48:	8b 55 08             	mov    0x8(%ebp),%edx
 827fa4b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827fa4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 827fa52:	89 04 24             	mov    %eax,(%esp)
 827fa55:	e8 b4 06 00 00       	call   828010e <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE3endEv>
 827fa5a:	83 ec 04             	sub    $0x4,%esp
 827fa5d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827fa60:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fa64:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827fa67:	89 04 24             	mov    %eax,(%esp)
 827fa6a:	e8 c5 06 00 00       	call   8280134 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEEneERKSA_>
 827fa6f:	84 c0                	test   %al,%al
 827fa71:	74 1f                	je     827fa92 <_ZN15StackableAction6Action5checkEiRNS_11input_paramE+0x6c>
 827fa73:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827fa76:	89 04 24             	mov    %eax,(%esp)
 827fa79:	e8 ca 06 00 00       	call   8280148 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEEptEv>
 827fa7e:	8d 50 04             	lea    0x4(%eax),%edx
 827fa81:	8b 45 10             	mov    0x10(%ebp),%eax
 827fa84:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fa88:	89 14 24             	mov    %edx,(%esp)
 827fa8b:	e8 14 07 00 00       	call   82801a4 <_ZNK5boost9function1IiRN15StackableAction11input_paramEEclES3_>
 827fa90:	eb 05                	jmp    827fa97 <_ZN15StackableAction6Action5checkEiRNS_11input_paramE+0x71>
 827fa92:	b8 00 00 00 00       	mov    $0x0,%eax
 827fa97:	c9                   	leave
 827fa98:	c3                   	ret
 827fa99:	90                   	nop

```

```c
// StackableAction::Action::check @ 0x827fa26

/* StackableAction::Action::check(int, StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::check(Action *this,int param_1,input_param *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
  local_14 [4];
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  local_10 [12];
  
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::find((int *)local_14);
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
            ::operator->(local_14);
    uVar3 = boost::function1<int,StackableAction::input_param&>::operator()
                      ((function1<int,StackableAction::input_param&> *)(iVar2 + 4),param_2);
  }
  return uVar3;
}

```

---

## init_function_type

```asm
// === 0827f7c8 StackableAction::Action::init_function_type  [0x0827f7c8-0x827fa25] ===
 827f7c8:	55                   	push   %ebp
 827f7c9:	89 e5                	mov    %esp,%ebp
 827f7cb:	57                   	push   %edi
 827f7cc:	56                   	push   %esi
 827f7cd:	53                   	push   %ebx
 827f7ce:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 827f7d4:	ba 14 fb 27 08       	mov    $0x827fb14,%edx
 827f7d9:	b9 00 00 00 00       	mov    $0x0,%ecx
 827f7de:	8d 9d 60 ff ff ff    	lea    -0xa0(%ebp),%ebx
 827f7e4:	88 44 24 10          	mov    %al,0x10(%esp)
 827f7e8:	8b 45 08             	mov    0x8(%ebp),%eax
 827f7eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827f7ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 827f7f3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827f7f7:	89 1c 24             	mov    %ebx,(%esp)
 827f7fa:	e8 92 07 00 00       	call   827ff91 <_ZN5boost4bindIiN15StackableAction6ActionERNS1_11input_paramEPS2_NS_3argILi1EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf1ISA_T0_T1_EENS8_9list_av_2IT2_T3_E4typeEEEMSD_FSA_SE_ESH_SI_>
 827f7ff:	83 ec 04             	sub    $0x4,%esp
 827f802:	c7 85 6c ff ff ff 34 	movl   $0x34,-0x94(%ebp)
 827f809:	00 00 00 
 827f80c:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 827f812:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 827f818:	89 44 24 08          	mov    %eax,0x8(%esp)
 827f81c:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 827f822:	89 44 24 04          	mov    %eax,0x4(%esp)
 827f826:	89 14 24             	mov    %edx,(%esp)
 827f829:	e8 d9 07 00 00       	call   8280007 <_ZSt9make_pairIN15StackableAction4TypeEN5boost3_bi6bind_tIiNS2_4_mfi3mf1IiNS0_6ActionERNS0_11input_paramEEENS3_5list2INS3_5valueIPS7_EENS2_3argILi1EEEEEEEESt4pairINSt17__decay_and_stripIT_E6__typeENSK_IT0_E6__typeEEOSL_OSO_>
 827f82e:	83 ec 04             	sub    $0x4,%esp
 827f831:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 827f837:	89 44 24 04          	mov    %eax,0x4(%esp)
 827f83b:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 827f841:	89 04 24             	mov    %eax,(%esp)
 827f844:	e8 05 08 00 00       	call   828004e <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEC1INS3_4TypeENS1_3_bi6bind_tIiNS1_4_mfi3mf1IiNS3_6ActionES5_EENSB_5list2INSB_5valueIPSF_EENS1_3argILi1EEEEEEEEEOS_IT_T0_E>
 827f849:	8b 45 08             	mov    0x8(%ebp),%eax
 827f84c:	8d 48 18             	lea    0x18(%eax),%ecx
 827f84f:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 827f855:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 827f85b:	89 44 24 08          	mov    %eax,0x8(%esp)
 827f85f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827f863:	89 14 24             	mov    %edx,(%esp)
 827f866:	e8 4b 08 00 00       	call   82800b6 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE6insertERKSB_>
 827f86b:	83 ec 04             	sub    $0x4,%esp
 827f86e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 827f874:	89 04 24             	mov    %eax,(%esp)
 827f877:	e8 50 06 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827f87c:	c7 85 18 ff ff ff 86 	movl   $0x827fb86,-0xe8(%ebp)
 827f883:	fb 27 08 
 827f886:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
 827f88d:	00 00 00 
 827f890:	8d 55 9c             	lea    -0x64(%ebp),%edx
 827f893:	0f b6 85 17 ff ff ff 	movzbl -0xe9(%ebp),%eax
 827f89a:	88 44 24 10          	mov    %al,0x10(%esp)
 827f89e:	8b 45 08             	mov    0x8(%ebp),%eax
 827f8a1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827f8a5:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 827f8ab:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
 827f8b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827f8b5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827f8b9:	89 14 24             	mov    %edx,(%esp)
 827f8bc:	e8 d0 06 00 00       	call   827ff91 <_ZN5boost4bindIiN15StackableAction6ActionERNS1_11input_paramEPS2_NS_3argILi1EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf1ISA_T0_T1_EENS8_9list_av_2IT2_T3_E4typeEEEMSD_FSA_SE_ESH_SI_>
 827f8c1:	83 ec 04             	sub    $0x4,%esp
 827f8c4:	c7 45 a8 36 00 00 00 	movl   $0x36,-0x58(%ebp)
 827f8cb:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827f8ce:	8d 55 9c             	lea    -0x64(%ebp),%edx
 827f8d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 827f8d5:	8d 55 a8             	lea    -0x58(%ebp),%edx
 827f8d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 827f8dc:	89 04 24             	mov    %eax,(%esp)
 827f8df:	e8 23 07 00 00       	call   8280007 <_ZSt9make_pairIN15StackableAction4TypeEN5boost3_bi6bind_tIiNS2_4_mfi3mf1IiNS0_6ActionERNS0_11input_paramEEENS3_5list2INS3_5valueIPS7_EENS2_3argILi1EEEEEEEESt4pairINSt17__decay_and_stripIT_E6__typeENSK_IT0_E6__typeEEOSL_OSO_>
 827f8e4:	83 ec 04             	sub    $0x4,%esp
 827f8e7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827f8ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 827f8ee:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827f8f4:	89 04 24             	mov    %eax,(%esp)
 827f8f7:	e8 52 07 00 00       	call   828004e <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEC1INS3_4TypeENS1_3_bi6bind_tIiNS1_4_mfi3mf1IiNS3_6ActionES5_EENSB_5list2INSB_5valueIPSF_EENS1_3argILi1EEEEEEEEEOS_IT_T0_E>
 827f8fc:	8b 45 08             	mov    0x8(%ebp),%eax
 827f8ff:	8d 48 18             	lea    0x18(%eax),%ecx
 827f902:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 827f908:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 827f90e:	89 54 24 08          	mov    %edx,0x8(%esp)
 827f912:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827f916:	89 04 24             	mov    %eax,(%esp)
 827f919:	e8 98 07 00 00       	call   82800b6 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE6insertERKSB_>
 827f91e:	eb 1e                	jmp    827f93e <_ZN15StackableAction6Action18init_function_typeEv+0x176>
 827f920:	89 d3                	mov    %edx,%ebx
 827f922:	89 c6                	mov    %eax,%esi
 827f924:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 827f92a:	89 04 24             	mov    %eax,(%esp)
 827f92d:	e8 9a 05 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827f932:	89 f0                	mov    %esi,%eax
 827f934:	89 da                	mov    %ebx,%edx
 827f936:	89 04 24             	mov    %eax,(%esp)
 827f939:	e8 12 3e 86 00       	call   8ae3750 <_Unwind_Resume>
 827f93e:	83 ec 04             	sub    $0x4,%esp
 827f941:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827f947:	89 04 24             	mov    %eax,(%esp)
 827f94a:	e8 7d 05 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827f94f:	be d6 fb 27 08       	mov    $0x827fbd6,%esi
 827f954:	bf 00 00 00 00       	mov    $0x0,%edi
 827f959:	8d 45 d8             	lea    -0x28(%ebp),%eax
 827f95c:	0f b6 9d 27 ff ff ff 	movzbl -0xd9(%ebp),%ebx
 827f963:	88 5c 24 10          	mov    %bl,0x10(%esp)
 827f967:	8b 55 08             	mov    0x8(%ebp),%edx
 827f96a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827f96e:	89 74 24 04          	mov    %esi,0x4(%esp)
 827f972:	89 7c 24 08          	mov    %edi,0x8(%esp)
 827f976:	89 04 24             	mov    %eax,(%esp)
 827f979:	e8 13 06 00 00       	call   827ff91 <_ZN5boost4bindIiN15StackableAction6ActionERNS1_11input_paramEPS2_NS_3argILi1EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf1ISA_T0_T1_EENS8_9list_av_2IT2_T3_E4typeEEEMSD_FSA_SE_ESH_SI_>
 827f97e:	83 ec 04             	sub    $0x4,%esp
 827f981:	c7 45 e4 37 00 00 00 	movl   $0x37,-0x1c(%ebp)
 827f988:	8d 45 c8             	lea    -0x38(%ebp),%eax
 827f98b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 827f98e:	89 54 24 08          	mov    %edx,0x8(%esp)
 827f992:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 827f995:	89 54 24 04          	mov    %edx,0x4(%esp)
 827f999:	89 04 24             	mov    %eax,(%esp)
 827f99c:	e8 66 06 00 00       	call   8280007 <_ZSt9make_pairIN15StackableAction4TypeEN5boost3_bi6bind_tIiNS2_4_mfi3mf1IiNS0_6ActionERNS0_11input_paramEEENS3_5list2INS3_5valueIPS7_EENS2_3argILi1EEEEEEEESt4pairINSt17__decay_and_stripIT_E6__typeENSK_IT0_E6__typeEEOSL_OSO_>
 827f9a1:	83 ec 04             	sub    $0x4,%esp
 827f9a4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 827f9a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 827f9ab:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 827f9ae:	89 04 24             	mov    %eax,(%esp)
 827f9b1:	e8 98 06 00 00       	call   828004e <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEC1INS3_4TypeENS1_3_bi6bind_tIiNS1_4_mfi3mf1IiNS3_6ActionES5_EENSB_5list2INSB_5valueIPSF_EENS1_3argILi1EEEEEEEEEOS_IT_T0_E>
 827f9b6:	8b 45 08             	mov    0x8(%ebp),%eax
 827f9b9:	8d 48 18             	lea    0x18(%eax),%ecx
 827f9bc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827f9bf:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 827f9c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 827f9c6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827f9ca:	89 04 24             	mov    %eax,(%esp)
 827f9cd:	e8 e4 06 00 00       	call   82800b6 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE6insertERKSB_>
 827f9d2:	eb 1e                	jmp    827f9f2 <_ZN15StackableAction6Action18init_function_typeEv+0x22a>
 827f9d4:	89 d3                	mov    %edx,%ebx
 827f9d6:	89 c6                	mov    %eax,%esi
 827f9d8:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827f9de:	89 04 24             	mov    %eax,(%esp)
 827f9e1:	e8 e6 04 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827f9e6:	89 f0                	mov    %esi,%eax
 827f9e8:	89 da                	mov    %ebx,%edx
 827f9ea:	89 04 24             	mov    %eax,(%esp)
 827f9ed:	e8 5e 3d 86 00       	call   8ae3750 <_Unwind_Resume>
 827f9f2:	83 ec 04             	sub    $0x4,%esp
 827f9f5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 827f9f8:	89 04 24             	mov    %eax,(%esp)
 827f9fb:	e8 cc 04 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827fa00:	8d 65 f4             	lea    -0xc(%ebp),%esp
 827fa03:	83 c4 00             	add    $0x0,%esp
 827fa06:	5b                   	pop    %ebx
 827fa07:	5e                   	pop    %esi
 827fa08:	5f                   	pop    %edi
 827fa09:	5d                   	pop    %ebp
 827fa0a:	c3                   	ret
 827fa0b:	89 d3                	mov    %edx,%ebx
 827fa0d:	89 c6                	mov    %eax,%esi
 827fa0f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 827fa12:	89 04 24             	mov    %eax,(%esp)
 827fa15:	e8 b2 04 00 00       	call   827fecc <_ZNSt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEED1Ev>
 827fa1a:	89 f0                	mov    %esi,%eax
 827fa1c:	89 da                	mov    %ebx,%edx
 827fa1e:	89 04 24             	mov    %eax,(%esp)
 827fa21:	e8 2a 3d 86 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// StackableAction::Action::init_function_type @ 0x827f7c8

/* StackableAction::Action::init_function_type() */

void __regparm1 StackableAction::Action::init_function_type(void)

{
  undefined4 in_stack_00000004;
  undefined1 local_ed;
  undefined1 local_dd;
  pair local_d0 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_c8 [20];
  Type local_b4 [16];
  undefined1 local_a4 [12];
  undefined4 local_98;
  pair local_94 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_8c [20];
  Type local_78 [16];
  undefined1 local_68 [12];
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_50 [20];
  Type local_3c [16];
  undefined1 local_2c [12];
  undefined4 local_20 [4];
  
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_a4,proc_bingo,0);
  local_98 = 0x34;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_b4,(bind_t *)&local_98);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_c8,local_b4);
                    /* try { // try from 0827f866 to 0827f86a has its CatchHandler @ 0827f920 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_d0);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_c8);
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_68,proc_lotteryCount,0,in_stack_00000004,local_ed);
  local_5c = 0x36;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_78,(bind_t *)&local_5c);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_8c,local_78);
                    /* try { // try from 0827f919 to 0827f91d has its CatchHandler @ 0827f9d4 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_94);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_8c);
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_2c,proc_addFatigue,0,in_stack_00000004,local_dd);
  local_20[0] = 0x37;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_3c,(bind_t *)local_20);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_50,local_3c);
                    /* try { // try from 0827f9cd to 0827f9d1 has its CatchHandler @ 0827fa0b */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_58);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_50);
  return;
}

```

---

## proc_addFatigue

```asm
// === 0827fbd6 StackableAction::Action::proc_addFatigue  [0x0827fbd6-0x827fcd2] ===
 827fbd6:	55                   	push   %ebp
 827fbd7:	89 e5                	mov    %esp,%ebp
 827fbd9:	83 ec 38             	sub    $0x38,%esp
 827fbdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fbdf:	8b 40 08             	mov    0x8(%eax),%eax
 827fbe2:	85 c0                	test   %eax,%eax
 827fbe4:	75 0a                	jne    827fbf0 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0x1a>
 827fbe6:	b8 13 00 00 00       	mov    $0x13,%eax
 827fbeb:	e9 e1 00 00 00       	jmp    827fcd1 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0xfb>
 827fbf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fbf3:	8b 40 08             	mov    0x8(%eax),%eax
 827fbf6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827fbf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fbfc:	8b 40 0c             	mov    0xc(%eax),%eax
 827fbff:	85 c0                	test   %eax,%eax
 827fc01:	75 0a                	jne    827fc0d <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0x37>
 827fc03:	b8 13 00 00 00       	mov    $0x13,%eax
 827fc08:	e9 c4 00 00 00       	jmp    827fcd1 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0xfb>
 827fc0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fc10:	8b 40 0c             	mov    0xc(%eax),%eax
 827fc13:	05 a0 03 00 00       	add    $0x3a0,%eax
 827fc18:	89 04 24             	mov    %eax,(%esp)
 827fc1b:	e8 40 cd e9 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 827fc20:	84 c0                	test   %al,%al
 827fc22:	74 0a                	je     827fc2e <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0x58>
 827fc24:	b8 04 00 00 00       	mov    $0x4,%eax
 827fc29:	e9 a3 00 00 00       	jmp    827fcd1 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0xfb>
 827fc2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fc31:	8b 40 0c             	mov    0xc(%eax),%eax
 827fc34:	05 a0 03 00 00       	add    $0x3a0,%eax
 827fc39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827fc40:	00 
 827fc41:	89 04 24             	mov    %eax,(%esp)
 827fc44:	e8 29 70 e1 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 827fc49:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 827fc50:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fc54:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 827fc57:	89 04 24             	mov    %eax,(%esp)
 827fc5a:	e8 b9 e5 e0 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 827fc5f:	8b 00                	mov    (%eax),%eax
 827fc61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827fc64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827fc67:	89 04 24             	mov    %eax,(%esp)
 827fc6a:	e8 3f f6 fa ff       	call   822f2ae <_ZNK15CUserCharacInfo19getCurCharacFatigueEv>
 827fc6f:	0f b7 c0             	movzwl %ax,%eax
 827fc72:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 827fc75:	0f 9c c0             	setl   %al
 827fc78:	84 c0                	test   %al,%al
 827fc7a:	74 07                	je     827fc83 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0xad>
 827fc7c:	b8 5f 00 00 00       	mov    $0x5f,%eax
 827fc81:	eb 4e                	jmp    827fcd1 <_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE+0xfb>
 827fc83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827fc86:	89 04 24             	mov    %eax,(%esp)
 827fc89:	e8 20 f6 fa ff       	call   822f2ae <_ZNK15CUserCharacInfo19getCurCharacFatigueEv>
 827fc8e:	0f b7 c0             	movzwl %ax,%eax
 827fc91:	2b 45 f4             	sub    -0xc(%ebp),%eax
 827fc94:	89 45 e8             	mov    %eax,-0x18(%ebp)
 827fc97:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 827fc9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827fca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fca5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827fca8:	89 04 24             	mov    %eax,(%esp)
 827fcab:	e8 68 e5 e0 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 827fcb0:	8b 10                	mov    (%eax),%edx
 827fcb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827fcb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 827fcb9:	89 04 24             	mov    %eax,(%esp)
 827fcbc:	e8 0d f6 fa ff       	call   822f2ce <_ZN15CUserCharacInfo19setCurCharacFatigueEi>
 827fcc1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827fcc4:	89 04 24             	mov    %eax,(%esp)
 827fcc7:	e8 74 68 3d 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 827fccc:	b8 00 00 00 00       	mov    $0x0,%eax
 827fcd1:	c9                   	leave
 827fcd2:	c3                   	ret

```

```c
// StackableAction::Action::proc_addFatigue @ 0x827fbd6

/* StackableAction::Action::proc_addFatigue(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_addFatigue(Action *this,input_param *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int local_20;
  int local_1c [2];
  CUserCharacInfo *local_14;
  int local_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 0x13;
  }
  else {
    local_14 = *(CUserCharacInfo **)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0x13;
    }
    else {
      cVar1 = std::vector<int,std::allocator<int>>::empty();
      if (cVar1 == '\0') {
        piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                                  ((vector<int,std::allocator<int>> *)
                                   (*(int *)(param_1 + 0xc) + 0x3a0),0);
        local_20 = 0;
        piVar3 = std::max<int>(&local_20,piVar3);
        local_10 = *piVar3;
        uVar4 = CUserCharacInfo::getCurCharacFatigue(local_14);
        if ((int)(uVar4 & 0xffff) < local_10) {
          uVar2 = 0x5f;
        }
        else {
          uVar4 = CUserCharacInfo::getCurCharacFatigue(local_14);
          local_1c[0] = (uVar4 & 0xffff) - local_10;
          local_1c[1] = 0;
          piVar3 = std::max<int>(local_1c + 1,local_1c);
          CUserCharacInfo::setCurCharacFatigue(local_14,*piVar3);
          CUser::SendFatigue((CUser *)local_14);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}

```

---

## proc_bingo

```asm
// === 0827fb14 StackableAction::Action::proc_bingo  [0x0827fb14-0x827fb85] ===
 827fb14:	55                   	push   %ebp
 827fb15:	89 e5                	mov    %esp,%ebp
 827fb17:	83 ec 28             	sub    $0x28,%esp
 827fb1a:	a1 30 f7 41 09       	mov    0x941f730,%eax
 827fb1f:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 827fb26:	00 
 827fb27:	89 04 24             	mov    %eax,(%esp)
 827fb2a:	e8 69 5e e9 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 827fb2f:	8b 10                	mov    (%eax),%edx
 827fb31:	83 c2 34             	add    $0x34,%edx
 827fb34:	8b 12                	mov    (%edx),%edx
 827fb36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827fb3d:	00 
 827fb3e:	89 04 24             	mov    %eax,(%esp)
 827fb41:	ff d2                	call   *%edx
 827fb43:	84 c0                	test   %al,%al
 827fb45:	74 38                	je     827fb7f <_ZN15StackableAction6Action10proc_bingoERNS_11input_paramE+0x6b>
 827fb47:	a1 30 f7 41 09       	mov    0x941f730,%eax
 827fb4c:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 827fb53:	00 
 827fb54:	89 04 24             	mov    %eax,(%esp)
 827fb57:	e8 3c 5e e9 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 827fb5c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827fb5f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 827fb63:	74 1a                	je     827fb7f <_ZN15StackableAction6Action10proc_bingoERNS_11input_paramE+0x6b>
 827fb65:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fb68:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fb6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827fb6f:	89 04 24             	mov    %eax,(%esp)
 827fb72:	e8 7f a4 e4 ff       	call   80c9ff6 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE>
 827fb77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827fb7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827fb7d:	eb 05                	jmp    827fb84 <_ZN15StackableAction6Action10proc_bingoERNS_11input_paramE+0x70>
 827fb7f:	b8 13 00 00 00       	mov    $0x13,%eax
 827fb84:	c9                   	leave
 827fb85:	c3                   	ret

```

```c
// StackableAction::Action::proc_bingo @ 0x827fb14

/* StackableAction::Action::proc_bingo(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_bingo(Action *this,input_param *param_1)

{
  char cVar1;
  int *piVar2;
  BingoEvent *this_00;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') &&
     (this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a),
     this_00 != (BingoEvent *)0x0)) {
    uVar3 = BingoEvent::reqBingoMark(this_00,param_1);
    return uVar3;
  }
  return 0x13;
}

```

---

## proc_lotteryCount

```asm
// === 0827fb86 StackableAction::Action::proc_lotteryCount  [0x0827fb86-0x827fbd5] ===
 827fb86:	55                   	push   %ebp
 827fb87:	89 e5                	mov    %esp,%ebp
 827fb89:	83 ec 18             	sub    $0x18,%esp
 827fb8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fb8f:	8b 40 08             	mov    0x8(%eax),%eax
 827fb92:	85 c0                	test   %eax,%eax
 827fb94:	74 39                	je     827fbcf <_ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE+0x49>
 827fb96:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fb99:	8b 40 0c             	mov    0xc(%eax),%eax
 827fb9c:	85 c0                	test   %eax,%eax
 827fb9e:	74 2f                	je     827fbcf <_ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE+0x49>
 827fba0:	8b 45 0c             	mov    0xc(%ebp),%eax
 827fba3:	8b 40 0c             	mov    0xc(%eax),%eax
 827fba6:	89 04 24             	mov    %eax,(%esp)
 827fba9:	e8 9a 10 e9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 827fbae:	8b 55 0c             	mov    0xc(%ebp),%edx
 827fbb1:	8b 52 08             	mov    0x8(%edx),%edx
 827fbb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827fbbb:	00 
 827fbbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fbc0:	89 14 24             	mov    %edx,(%esp)
 827fbc3:	e8 82 19 41 00       	call   869154a <_ZN5CUser20giveLotteryCountItemEib>
 827fbc8:	b8 00 00 00 00       	mov    $0x0,%eax
 827fbcd:	eb 05                	jmp    827fbd4 <_ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE+0x4e>
 827fbcf:	b8 13 00 00 00       	mov    $0x13,%eax
 827fbd4:	c9                   	leave
 827fbd5:	c3                   	ret

```

```c
// StackableAction::Action::proc_lotteryCount @ 0x827fb86

/* StackableAction::Action::proc_lotteryCount(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_lotteryCount(Action *this,input_param *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    uVar2 = 0x13;
  }
  else {
    iVar1 = CItem::get_index(*(CItem **)(param_1 + 0xc));
    CUser::giveLotteryCountItem(*(CUser **)(param_1 + 8),iVar1,false);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## run

```asm
// === 0827fa9a StackableAction::Action::run  [0x0827fa9a-0x827fb13] ===
 827fa9a:	55                   	push   %ebp
 827fa9b:	89 e5                	mov    %esp,%ebp
 827fa9d:	83 ec 28             	sub    $0x28,%esp
 827faa0:	8b 45 08             	mov    0x8(%ebp),%eax
 827faa3:	8d 48 18             	lea    0x18(%eax),%ecx
 827faa6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827faa9:	8d 55 0c             	lea    0xc(%ebp),%edx
 827faac:	89 54 24 08          	mov    %edx,0x8(%esp)
 827fab0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827fab4:	89 04 24             	mov    %eax,(%esp)
 827fab7:	e8 26 06 00 00       	call   82800e2 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE4findERSA_>
 827fabc:	83 ec 04             	sub    $0x4,%esp
 827fabf:	8b 45 08             	mov    0x8(%ebp),%eax
 827fac2:	8d 50 18             	lea    0x18(%eax),%edx
 827fac5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827fac8:	89 54 24 04          	mov    %edx,0x4(%esp)
 827facc:	89 04 24             	mov    %eax,(%esp)
 827facf:	e8 3a 06 00 00       	call   828010e <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEE3endEv>
 827fad4:	83 ec 04             	sub    $0x4,%esp
 827fad7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827fada:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fade:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827fae1:	89 04 24             	mov    %eax,(%esp)
 827fae4:	e8 4b 06 00 00       	call   8280134 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEEneERKSA_>
 827fae9:	84 c0                	test   %al,%al
 827faeb:	74 1f                	je     827fb0c <_ZN15StackableAction6Action3runEiRNS_11input_paramE+0x72>
 827faed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827faf0:	89 04 24             	mov    %eax,(%esp)
 827faf3:	e8 50 06 00 00       	call   8280148 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5boost8functionIFiRN15StackableAction11input_paramEEEEEEptEv>
 827faf8:	8d 50 04             	lea    0x4(%eax),%edx
 827fafb:	8b 45 10             	mov    0x10(%ebp),%eax
 827fafe:	89 44 24 04          	mov    %eax,0x4(%esp)
 827fb02:	89 14 24             	mov    %edx,(%esp)
 827fb05:	e8 9a 06 00 00       	call   82801a4 <_ZNK5boost9function1IiRN15StackableAction11input_paramEEclES3_>
 827fb0a:	eb 05                	jmp    827fb11 <_ZN15StackableAction6Action3runEiRNS_11input_paramE+0x77>
 827fb0c:	b8 00 00 00 00       	mov    $0x0,%eax
 827fb11:	c9                   	leave
 827fb12:	c3                   	ret
 827fb13:	90                   	nop

```

```c
// StackableAction::Action::run @ 0x827fa9a

/* StackableAction::Action::run(int, StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::run(Action *this,int param_1,input_param *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
  local_14 [4];
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  local_10 [12];
  
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::find((int *)local_14);
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
            ::operator->(local_14);
    uVar3 = boost::function1<int,StackableAction::input_param&>::operator()
                      ((function1<int,StackableAction::input_param&> *)(iVar2 + 4),param_2);
  }
  return uVar3;
}

```

---

## ~Action

```asm
// === 0827f760 StackableAction::Action::~Action  [0x0827f760-0x827f7c7] ===
 827f760:	55                   	push   %ebp
 827f761:	89 e5                	mov    %esp,%ebp
 827f763:	56                   	push   %esi
 827f764:	53                   	push   %ebx
 827f765:	83 ec 10             	sub    $0x10,%esp
 827f768:	8b 45 08             	mov    0x8(%ebp),%eax
 827f76b:	83 c0 18             	add    $0x18,%eax
 827f76e:	89 04 24             	mov    %eax,(%esp)
 827f771:	e8 2e 07 00 00       	call   827fea4 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEED1Ev>
 827f776:	eb 15                	jmp    827f78d <_ZN15StackableAction6ActionD1Ev+0x2d>
 827f778:	89 d3                	mov    %edx,%ebx
 827f77a:	89 c6                	mov    %eax,%esi
 827f77c:	8b 45 08             	mov    0x8(%ebp),%eax
 827f77f:	89 04 24             	mov    %eax,(%esp)
 827f782:	e8 1d 07 00 00       	call   827fea4 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEED1Ev>
 827f787:	89 f0                	mov    %esi,%eax
 827f789:	89 da                	mov    %ebx,%edx
 827f78b:	eb 0d                	jmp    827f79a <_ZN15StackableAction6ActionD1Ev+0x3a>
 827f78d:	8b 45 08             	mov    0x8(%ebp),%eax
 827f790:	89 04 24             	mov    %eax,(%esp)
 827f793:	e8 0c 07 00 00       	call   827fea4 <_ZNSt3mapIiN5boost8functionIFiRN15StackableAction11input_paramEEEESt4lessIiESaISt4pairIKiS6_EEED1Ev>
 827f798:	eb 1b                	jmp    827f7b5 <_ZN15StackableAction6ActionD1Ev+0x55>
 827f79a:	89 d3                	mov    %edx,%ebx
 827f79c:	89 c6                	mov    %eax,%esi
 827f79e:	8b 45 08             	mov    0x8(%ebp),%eax
 827f7a1:	89 04 24             	mov    %eax,(%esp)
 827f7a4:	e8 f5 06 00 00       	call   827fe9e <_ZN5boost12noncopyable_11noncopyableD1Ev>
 827f7a9:	89 f0                	mov    %esi,%eax
 827f7ab:	89 da                	mov    %ebx,%edx
 827f7ad:	89 04 24             	mov    %eax,(%esp)
 827f7b0:	e8 9b 3f 86 00       	call   8ae3750 <_Unwind_Resume>
 827f7b5:	8b 45 08             	mov    0x8(%ebp),%eax
 827f7b8:	89 04 24             	mov    %eax,(%esp)
 827f7bb:	e8 de 06 00 00       	call   827fe9e <_ZN5boost12noncopyable_11noncopyableD1Ev>
 827f7c0:	83 c4 10             	add    $0x10,%esp
 827f7c3:	5b                   	pop    %ebx
 827f7c4:	5e                   	pop    %esi
 827f7c5:	5d                   	pop    %ebp
 827f7c6:	c3                   	ret
 827f7c7:	90                   	nop

```

```c
// StackableAction::Action::~Action @ 0x827f760

/* StackableAction::Action::~Action() */

void __thiscall StackableAction::Action::~Action(Action *this)

{
                    /* try { // try from 0827f771 to 0827f775 has its CatchHandler @ 0827f778 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::~map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
          *)(this + 0x18));
                    /* try { // try from 0827f793 to 0827f797 has its CatchHandler @ 0827f79a */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::~map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
          *)this);
  boost::noncopyable_::noncopyable::~noncopyable((noncopyable *)this);
  return;
}

```

