# StackablePackage__EventProcessManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## EventProcessManager

```asm
// === 082817ca StackablePackage::EventProcessManager::EventProcessManager  [0x082817ca-0x8281829] ===
 82817ca:	55                   	push   %ebp
 82817cb:	89 e5                	mov    %esp,%ebp
 82817cd:	57                   	push   %edi
 82817ce:	56                   	push   %esi
 82817cf:	53                   	push   %ebx
 82817d0:	83 ec 1c             	sub    $0x1c,%esp
 82817d3:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 82817da:	e8 71 2c 4a 00       	call   8724450 <_Znwj>
 82817df:	89 c3                	mov    %eax,%ebx
 82817e1:	89 d8                	mov    %ebx,%eax
 82817e3:	89 04 24             	mov    %eax,(%esp)
 82817e6:	e8 3b 04 00 00       	call   8281c26 <_ZN16StackablePackage19EventProcessManager23EventProcessManagerImplC1Ev>
 82817eb:	eb 18                	jmp    8281805 <_ZN16StackablePackage19EventProcessManagerC1Ev+0x3b>
 82817ed:	89 d6                	mov    %edx,%esi
 82817ef:	89 c7                	mov    %eax,%edi
 82817f1:	89 1c 24             	mov    %ebx,(%esp)
 82817f4:	e8 f7 2c 4a 00       	call   87244f0 <_ZdlPv>
 82817f9:	89 f8                	mov    %edi,%eax
 82817fb:	89 f2                	mov    %esi,%edx
 82817fd:	89 04 24             	mov    %eax,(%esp)
 8281800:	e8 4b 1f 86 00       	call   8ae3750 <_Unwind_Resume>
 8281805:	89 da                	mov    %ebx,%edx
 8281807:	8b 45 08             	mov    0x8(%ebp),%eax
 828180a:	89 54 24 04          	mov    %edx,0x4(%esp)
 828180e:	89 04 24             	mov    %eax,(%esp)
 8281811:	e8 e6 04 00 00       	call   8281cfc <_ZNSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEC1EPS2_>
 8281816:	8b 45 08             	mov    0x8(%ebp),%eax
 8281819:	89 04 24             	mov    %eax,(%esp)
 828181c:	e8 a3 ff ff ff       	call   82817c4 <_ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv>
 8281821:	83 c4 1c             	add    $0x1c,%esp
 8281824:	5b                   	pop    %ebx
 8281825:	5e                   	pop    %esi
 8281826:	5f                   	pop    %edi
 8281827:	5d                   	pop    %ebp
 8281828:	c3                   	ret
 8281829:	90                   	nop

```

```c
// StackablePackage::EventProcessManager::EventProcessManager @ 0x82817ca

/* StackablePackage::EventProcessManager::EventProcessManager() */

void __thiscall
StackablePackage::EventProcessManager::EventProcessManager(EventProcessManager *this)

{
  EventProcessManagerImpl *this_00;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 082817e6 to 082817ea has its CatchHandler @ 082817ed */
  EventProcessManagerImpl::EventProcessManagerImpl(this_00);
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::auto_ptr
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this,
             this_00);
  setupEventProcessors();
  return;
}

```

---

## Process

```asm
// === 0828186c StackablePackage::EventProcessManager::Process  [0x0828186c-0x82819c5] ===
 828186c:	55                   	push   %ebp
 828186d:	89 e5                	mov    %esp,%ebp
 828186f:	83 ec 38             	sub    $0x38,%esp
 8281872:	8b 45 14             	mov    0x14(%ebp),%eax
 8281875:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281879:	8b 45 08             	mov    0x8(%ebp),%eax
 828187c:	89 04 24             	mov    %eax,(%esp)
 828187f:	e8 42 01 00 00       	call   82819c6 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi>
 8281884:	83 f0 01             	xor    $0x1,%eax
 8281887:	84 c0                	test   %al,%al
 8281889:	74 0a                	je     8281895 <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x29>
 828188b:	b8 00 00 00 00       	mov    $0x0,%eax
 8281890:	e9 2f 01 00 00       	jmp    82819c4 <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x158>
 8281895:	8b 45 08             	mov    0x8(%ebp),%eax
 8281898:	89 04 24             	mov    %eax,(%esp)
 828189b:	e8 a4 04 00 00       	call   8281d44 <_ZNKSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEptEv>
 82818a0:	89 c2                	mov    %eax,%edx
 82818a2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82818a5:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82818a8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82818ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 82818b0:	89 04 24             	mov    %eax,(%esp)
 82818b3:	e8 96 04 00 00       	call   8281d4e <_ZNSt3mapIN16StackablePackage10EVENT_TYPEES_IiPNS0_14EventProcessorESt4lessIiESaISt4pairIKiS3_EEES4_IS1_ESaIS6_IKS1_SA_EEE4findERSC_>
 82818b8:	83 ec 04             	sub    $0x4,%esp
 82818bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82818be:	89 04 24             	mov    %eax,(%esp)
 82818c1:	e8 7e 04 00 00       	call   8281d44 <_ZNKSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEptEv>
 82818c6:	89 c2                	mov    %eax,%edx
 82818c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82818cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82818cf:	89 04 24             	mov    %eax,(%esp)
 82818d2:	e8 a3 04 00 00       	call   8281d7a <_ZNSt3mapIN16StackablePackage10EVENT_TYPEES_IiPNS0_14EventProcessorESt4lessIiESaISt4pairIKiS3_EEES4_IS1_ESaIS6_IKS1_SA_EEE3endEv>
 82818d7:	83 ec 04             	sub    $0x4,%esp
 82818da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82818dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82818e1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82818e4:	89 04 24             	mov    %eax,(%esp)
 82818e7:	e8 b4 04 00 00       	call   8281da0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16StackablePackage10EVENT_TYPEESt3mapIiPNS1_14EventProcessorESt4lessIiESaIS0_IKiS6_EEEEEeqERKSE_>
 82818ec:	84 c0                	test   %al,%al
 82818ee:	74 0a                	je     82818fa <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x8e>
 82818f0:	b8 00 00 00 00       	mov    $0x0,%eax
 82818f5:	e9 ca 00 00 00       	jmp    82819c4 <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x158>
 82818fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82818fd:	89 04 24             	mov    %eax,(%esp)
 8281900:	e8 af 04 00 00       	call   8281db4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16StackablePackage10EVENT_TYPEESt3mapIiPNS1_14EventProcessorESt4lessIiESaIS0_IKiS6_EEEEEdeEv>
 8281905:	83 c0 04             	add    $0x4,%eax
 8281908:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828190b:	8b 45 14             	mov    0x14(%ebp),%eax
 828190e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281912:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8281915:	89 04 24             	mov    %eax,(%esp)
 8281918:	e8 1d 03 00 00       	call   8281c3a <_ZN16StackablePackage30FindControllableEventProcessorC1Ei>
 828191d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8281920:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8281923:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281927:	89 04 24             	mov    %eax,(%esp)
 828192a:	e8 b9 04 00 00       	call   8281de8 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 828192f:	83 ec 04             	sub    $0x4,%esp
 8281932:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8281935:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8281938:	89 54 24 04          	mov    %edx,0x4(%esp)
 828193c:	89 04 24             	mov    %eax,(%esp)
 828193f:	e8 7e 04 00 00       	call   8281dc2 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 8281944:	83 ec 04             	sub    $0x4,%esp
 8281947:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828194a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 828194d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8281951:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8281954:	89 54 24 08          	mov    %edx,0x8(%esp)
 8281958:	8b 55 ec             	mov    -0x14(%ebp),%edx
 828195b:	89 54 24 04          	mov    %edx,0x4(%esp)
 828195f:	89 04 24             	mov    %eax,(%esp)
 8281962:	e8 a6 04 00 00       	call   8281e0d <_ZSt7find_ifISt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEENS3_30FindControllableEventProcessorEET_S9_S9_T0_>
 8281967:	83 ec 04             	sub    $0x4,%esp
 828196a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828196d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8281970:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281974:	89 04 24             	mov    %eax,(%esp)
 8281977:	e8 6c 04 00 00       	call   8281de8 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 828197c:	83 ec 04             	sub    $0x4,%esp
 828197f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8281982:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281986:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8281989:	89 04 24             	mov    %eax,(%esp)
 828198c:	e8 d1 04 00 00       	call   8281e62 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEEeqERKS6_>
 8281991:	84 c0                	test   %al,%al
 8281993:	74 07                	je     828199c <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x130>
 8281995:	b8 00 00 00 00       	mov    $0x0,%eax
 828199a:	eb 28                	jmp    82819c4 <_ZN16StackablePackage19EventProcessManager7ProcessENS_10EVENT_TYPEER5CUseri+0x158>
 828199c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828199f:	89 04 24             	mov    %eax,(%esp)
 82819a2:	e8 cf 04 00 00       	call   8281e76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEEdeEv>
 82819a7:	8b 40 04             	mov    0x4(%eax),%eax
 82819aa:	8b 10                	mov    (%eax),%edx
 82819ac:	83 c2 0c             	add    $0xc,%edx
 82819af:	8b 0a                	mov    (%edx),%ecx
 82819b1:	8b 55 14             	mov    0x14(%ebp),%edx
 82819b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 82819b8:	8b 55 10             	mov    0x10(%ebp),%edx
 82819bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82819bf:	89 04 24             	mov    %eax,(%esp)
 82819c2:	ff d1                	call   *%ecx
 82819c4:	c9                   	leave
 82819c5:	c3                   	ret

```

```c
// StackablePackage::EventProcessManager::Process @ 0x828186c

/* StackablePackage::EventProcessManager::Process(StackablePackage::EVENT_TYPE, CUser&, int) */

undefined4 __thiscall
StackablePackage::EventProcessManager::Process
          (EventProcessManager *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_iterator local_28 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_14 [4];
  int local_10;
  
  cVar1 = isStackablePackageItem(this,param_4);
  if (cVar1 == '\x01') {
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::find(local_28);
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                          *)local_24,local_28);
    if (cVar1 == '\0') {
      local_10 = std::
                 _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                 ::operator*((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                              *)local_28);
      local_10 = local_10 + 4;
      FindControllableEventProcessor::FindControllableEventProcessor
                ((FindControllableEventProcessor *)&local_20,param_4);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end((map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
             *)&local_1c);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::begin((map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
               *)&local_18);
      std::
      find_if<std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>,StackablePackage::FindControllableEventProcessor>
                (local_2c,local_18,local_1c,local_20);
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator==((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                          *)local_14,local_2c);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
                operator*((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                           *)local_2c);
        uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0xc))(*(int **)(iVar3 + 4),param_3,param_4);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## destroy

```asm
// === 08281a9a StackablePackage::EventProcessManager::destroy  [0x08281a9a-0x8281b9d] ===
 8281a9a:	55                   	push   %ebp
 8281a9b:	89 e5                	mov    %esp,%ebp
 8281a9d:	83 ec 38             	sub    $0x38,%esp
 8281aa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8281aa3:	89 04 24             	mov    %eax,(%esp)
 8281aa6:	e8 99 02 00 00       	call   8281d44 <_ZNKSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEptEv>
 8281aab:	89 c2                	mov    %eax,%edx
 8281aad:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8281ab0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281ab4:	89 04 24             	mov    %eax,(%esp)
 8281ab7:	e8 98 05 00 00       	call   8282054 <_ZNSt3mapIN16StackablePackage10EVENT_TYPEES_IiPNS0_14EventProcessorESt4lessIiESaISt4pairIKiS3_EEES4_IS1_ESaIS6_IKS1_SA_EEE5beginEv>
 8281abc:	83 ec 04             	sub    $0x4,%esp
 8281abf:	e9 9f 00 00 00       	jmp    8281b63 <_ZN16StackablePackage19EventProcessManager7destroyEv+0xc9>
 8281ac4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8281ac7:	89 04 24             	mov    %eax,(%esp)
 8281aca:	e8 e5 02 00 00       	call   8281db4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16StackablePackage10EVENT_TYPEESt3mapIiPNS1_14EventProcessorESt4lessIiESaIS0_IKiS6_EEEEEdeEv>
 8281acf:	83 c0 04             	add    $0x4,%eax
 8281ad2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8281ad5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8281ad8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8281adb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281adf:	89 04 24             	mov    %eax,(%esp)
 8281ae2:	e8 db 02 00 00       	call   8281dc2 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 8281ae7:	83 ec 04             	sub    $0x4,%esp
 8281aea:	eb 41                	jmp    8281b2d <_ZN16StackablePackage19EventProcessManager7destroyEv+0x93>
 8281aec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8281aef:	89 04 24             	mov    %eax,(%esp)
 8281af2:	e8 7f 03 00 00       	call   8281e76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEEdeEv>
 8281af7:	8b 40 04             	mov    0x4(%eax),%eax
 8281afa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8281afd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8281b01:	74 1f                	je     8281b22 <_ZN16StackablePackage19EventProcessManager7destroyEv+0x88>
 8281b03:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8281b07:	74 12                	je     8281b1b <_ZN16StackablePackage19EventProcessManager7destroyEv+0x81>
 8281b09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8281b0c:	8b 00                	mov    (%eax),%eax
 8281b0e:	83 c0 04             	add    $0x4,%eax
 8281b11:	8b 10                	mov    (%eax),%edx
 8281b13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8281b16:	89 04 24             	mov    %eax,(%esp)
 8281b19:	ff d2                	call   *%edx
 8281b1b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8281b22:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8281b25:	89 04 24             	mov    %eax,(%esp)
 8281b28:	e8 93 05 00 00       	call   82820c0 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEEppEv>
 8281b2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8281b30:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8281b33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281b37:	89 04 24             	mov    %eax,(%esp)
 8281b3a:	e8 a9 02 00 00       	call   8281de8 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8281b3f:	83 ec 04             	sub    $0x4,%esp
 8281b42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8281b45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281b49:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8281b4c:	89 04 24             	mov    %eax,(%esp)
 8281b4f:	e8 58 05 00 00       	call   82820ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN16StackablePackage14EventProcessorEEEneERKS6_>
 8281b54:	84 c0                	test   %al,%al
 8281b56:	75 94                	jne    8281aec <_ZN16StackablePackage19EventProcessManager7destroyEv+0x52>
 8281b58:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8281b5b:	89 04 24             	mov    %eax,(%esp)
 8281b5e:	e8 2b 05 00 00       	call   828208e <_ZNSt17_Rb_tree_iteratorISt4pairIKN16StackablePackage10EVENT_TYPEESt3mapIiPNS1_14EventProcessorESt4lessIiESaIS0_IKiS6_EEEEEppEv>
 8281b63:	8b 45 08             	mov    0x8(%ebp),%eax
 8281b66:	89 04 24             	mov    %eax,(%esp)
 8281b69:	e8 d6 01 00 00       	call   8281d44 <_ZNKSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEptEv>
 8281b6e:	89 c2                	mov    %eax,%edx
 8281b70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8281b73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281b77:	89 04 24             	mov    %eax,(%esp)
 8281b7a:	e8 fb 01 00 00       	call   8281d7a <_ZNSt3mapIN16StackablePackage10EVENT_TYPEES_IiPNS0_14EventProcessorESt4lessIiESaISt4pairIKiS3_EEES4_IS1_ESaIS6_IKS1_SA_EEE3endEv>
 8281b7f:	83 ec 04             	sub    $0x4,%esp
 8281b82:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8281b85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281b89:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8281b8c:	89 04 24             	mov    %eax,(%esp)
 8281b8f:	e8 e6 04 00 00       	call   828207a <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16StackablePackage10EVENT_TYPEESt3mapIiPNS1_14EventProcessorESt4lessIiESaIS0_IKiS6_EEEEEneERKSE_>
 8281b94:	84 c0                	test   %al,%al
 8281b96:	0f 85 28 ff ff ff    	jne    8281ac4 <_ZN16StackablePackage19EventProcessManager7destroyEv+0x2a>
 8281b9c:	c9                   	leave
 8281b9d:	c3                   	ret

```

```c
// StackablePackage::EventProcessManager::destroy @ 0x8281a9a

/* StackablePackage::EventProcessManager::destroy() */

void __thiscall StackablePackage::EventProcessManager::destroy(EventProcessManager *this)

{
  char cVar1;
  int iVar2;
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_24 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_20 [4];
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  local_1c [4];
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  local_18 [4];
  int local_14;
  int *local_10;
  
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
  std::
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  ::begin(local_20);
  while( true ) {
    std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::operator->
              ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
    std::
    map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                          *)local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = std::
               _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                            *)local_20);
    local_14 = local_14 + 4;
    std::
    map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>
                          *)local_24,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::
              operator*((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>> *
                        )local_24);
      local_10 = *(int **)(iVar2 + 4);
      if (local_10 != (int *)0x0) {
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))(local_10);
        }
        local_10 = (int *)0x0;
      }
      std::_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,StackablePackage::EventProcessor*>> *)
                 local_24);
    }
    std::
    _Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>
                  *)local_20);
  }
  return;
}

```

---

## isStackablePackageItem

```asm
// === 082819c6 StackablePackage::EventProcessManager::isStackablePackageItem  [0x082819c6-0x8281a29] ===
 82819c6:	55                   	push   %ebp
 82819c7:	89 e5                	mov    %esp,%ebp
 82819c9:	83 ec 28             	sub    $0x28,%esp
 82819cc:	e8 ca a7 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82819d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 82819d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82819d8:	89 04 24             	mov    %eax,(%esp)
 82819db:	e8 52 e0 0d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82819e0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82819e3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82819e7:	75 07                	jne    82819f0 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi+0x2a>
 82819e9:	b8 00 00 00 00       	mov    $0x0,%eax
 82819ee:	eb 37                	jmp    8281a27 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi+0x61>
 82819f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82819f3:	89 04 24             	mov    %eax,(%esp)
 82819f6:	e8 ff f8 e6 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 82819fb:	83 f0 01             	xor    $0x1,%eax
 82819fe:	84 c0                	test   %al,%al
 8281a00:	74 07                	je     8281a09 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi+0x43>
 8281a02:	b8 00 00 00 00       	mov    $0x0,%eax
 8281a07:	eb 1e                	jmp    8281a27 <_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi+0x61>
 8281a09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8281a0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8281a0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8281a12:	8b 00                	mov    (%eax),%eax
 8281a14:	83 c0 0c             	add    $0xc,%eax
 8281a17:	8b 10                	mov    (%eax),%edx
 8281a19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8281a1c:	89 04 24             	mov    %eax,(%esp)
 8281a1f:	ff d2                	call   *%edx
 8281a21:	83 f8 26             	cmp    $0x26,%eax
 8281a24:	0f 94 c0             	sete   %al
 8281a27:	c9                   	leave
 8281a28:	c3                   	ret
 8281a29:	90                   	nop

```

```c
// StackablePackage::EventProcessManager::isStackablePackageItem @ 0x82819c6

/* StackablePackage::EventProcessManager::isStackablePackageItem(int) const */

bool __thiscall
StackablePackage::EventProcessManager::isStackablePackageItem(EventProcessManager *this,int param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  bool bVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    bVar3 = false;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
      bVar3 = iVar2 == 0x26;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

```

---

## registerEventProcessor

```asm
// === 08281a2a StackablePackage::EventProcessManager::registerEventProcessor  [0x08281a2a-0x8281a99] ===
 8281a2a:	55                   	push   %ebp
 8281a2b:	89 e5                	mov    %esp,%ebp
 8281a2d:	83 ec 38             	sub    $0x38,%esp
 8281a30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8281a33:	89 04 24             	mov    %eax,(%esp)
 8281a36:	e8 cb 01 00 00       	call   8281c06 <_ZNK16StackablePackage14EventProcessor10GetEventIdEv>
 8281a3b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8281a3e:	8d 45 0c             	lea    0xc(%ebp),%eax
 8281a41:	89 44 24 08          	mov    %eax,0x8(%esp)
 8281a45:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8281a48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281a4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8281a4f:	89 04 24             	mov    %eax,(%esp)
 8281a52:	e8 a3 05 00 00       	call   8281ffa <_ZNSt4pairIKiPN16StackablePackage14EventProcessorEEC1IiRS3_EEOT_OT0_>
 8281a57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8281a5a:	89 04 24             	mov    %eax,(%esp)
 8281a5d:	e8 98 01 00 00       	call   8281bfa <_ZNK16StackablePackage14EventProcessor12GetEventTypeEv>
 8281a62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8281a65:	8b 45 08             	mov    0x8(%ebp),%eax
 8281a68:	89 04 24             	mov    %eax,(%esp)
 8281a6b:	e8 d4 02 00 00       	call   8281d44 <_ZNKSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEEptEv>
 8281a70:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8281a73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8281a77:	89 04 24             	mov    %eax,(%esp)
 8281a7a:	e8 2f 04 00 00       	call   8281eae <_ZNSt3mapIN16StackablePackage10EVENT_TYPEES_IiPNS0_14EventProcessorESt4lessIiESaISt4pairIKiS3_EEES4_IS1_ESaIS6_IKS1_SA_EEEixERSC_>
 8281a7f:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8281a82:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8281a85:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8281a89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8281a8d:	89 14 24             	mov    %edx,(%esp)
 8281a90:	e8 93 05 00 00       	call   8282028 <_ZNSt3mapIiPN16StackablePackage14EventProcessorESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 8281a95:	83 ec 04             	sub    $0x4,%esp
 8281a98:	c9                   	leave
 8281a99:	c3                   	ret

```

```c
// StackablePackage::EventProcessManager::registerEventProcessor @ 0x8281a2a

/* StackablePackage::EventProcessManager::registerEventProcessor(StackablePackage::EventProcessor*)
    */

void __thiscall
StackablePackage::EventProcessManager::registerEventProcessor
          (EventProcessManager *this,EventProcessor *param_1)

{
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  *this_00;
  pair local_24 [8];
  pair<int_const,StackablePackage::EventProcessor*> local_1c [8];
  int local_14;
  undefined4 local_10 [3];
  
  local_14 = EventProcessor::GetEventId(param_1);
  std::pair<int_const,StackablePackage::EventProcessor*>::
  pair<int,StackablePackage::EventProcessor*&>(local_1c,&local_14,&param_1);
  local_10[0] = EventProcessor::GetEventType(param_1);
  this_00 = (map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
             *)std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::
               operator->((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>
                           *)this);
  std::
  map<StackablePackage::EVENT_TYPE,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>,std::less<StackablePackage::EVENT_TYPE>,std::allocator<std::pair<StackablePackage::EVENT_TYPE_const,std::map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>>>>
  ::operator[](this_00,(EVENT_TYPE *)local_10);
  std::
  map<int,StackablePackage::EventProcessor*,std::less<int>,std::allocator<std::pair<int_const,StackablePackage::EventProcessor*>>>
  ::insert(local_24);
  return;
}

```

---

## setupEventProcessors

```asm
// === 082817c4 StackablePackage::EventProcessManager::setupEventProcessors  [0x082817c4-0x82817c9] ===
 82817c4:	55                   	push   %ebp
 82817c5:	89 e5                	mov    %esp,%ebp
 82817c7:	5d                   	pop    %ebp
 82817c8:	c3                   	ret
 82817c9:	90                   	nop

```

```c
// StackablePackage::EventProcessManager::setupEventProcessors @ 0x82817c4

/* StackablePackage::EventProcessManager::setupEventProcessors() */

void StackablePackage::EventProcessManager::setupEventProcessors(void)

{
  return;
}

```

---

## ~EventProcessManager

```asm
// === 0828182a StackablePackage::EventProcessManager::~EventProcessManager  [0x0828182a-0x828186b] ===
 828182a:	55                   	push   %ebp
 828182b:	89 e5                	mov    %esp,%ebp
 828182d:	56                   	push   %esi
 828182e:	53                   	push   %ebx
 828182f:	83 ec 10             	sub    $0x10,%esp
 8281832:	8b 45 08             	mov    0x8(%ebp),%eax
 8281835:	89 04 24             	mov    %eax,(%esp)
 8281838:	e8 5d 02 00 00       	call   8281a9a <_ZN16StackablePackage19EventProcessManager7destroyEv>
 828183d:	eb 1b                	jmp    828185a <_ZN16StackablePackage19EventProcessManagerD1Ev+0x30>
 828183f:	89 d3                	mov    %edx,%ebx
 8281841:	89 c6                	mov    %eax,%esi
 8281843:	8b 45 08             	mov    0x8(%ebp),%eax
 8281846:	89 04 24             	mov    %eax,(%esp)
 8281849:	e8 d0 04 00 00       	call   8281d1e <_ZNSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEED1Ev>
 828184e:	89 f0                	mov    %esi,%eax
 8281850:	89 da                	mov    %ebx,%edx
 8281852:	89 04 24             	mov    %eax,(%esp)
 8281855:	e8 f6 1e 86 00       	call   8ae3750 <_Unwind_Resume>
 828185a:	8b 45 08             	mov    0x8(%ebp),%eax
 828185d:	89 04 24             	mov    %eax,(%esp)
 8281860:	e8 b9 04 00 00       	call   8281d1e <_ZNSt8auto_ptrIN16StackablePackage19EventProcessManager23EventProcessManagerImplEED1Ev>
 8281865:	83 c4 10             	add    $0x10,%esp
 8281868:	5b                   	pop    %ebx
 8281869:	5e                   	pop    %esi
 828186a:	5d                   	pop    %ebp
 828186b:	c3                   	ret

```

```c
// StackablePackage::EventProcessManager::~EventProcessManager @ 0x828182a

/* StackablePackage::EventProcessManager::~EventProcessManager() */

void __thiscall
StackablePackage::EventProcessManager::~EventProcessManager(EventProcessManager *this)

{
                    /* try { // try from 08281838 to 0828183c has its CatchHandler @ 0828183f */
  destroy(this);
  std::auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl>::~auto_ptr
            ((auto_ptr<StackablePackage::EventProcessManager::EventProcessManagerImpl> *)this);
  return;
}

```

