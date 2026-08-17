# CExpertJobList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## destroy

```asm
// === 0896dac6 CExpertJobList::destroy  [0x0896dac6-0x896db46] ===
 896dac6:	55                   	push   %ebp
 896dac7:	89 e5                	mov    %esp,%ebp
 896dac9:	53                   	push   %ebx
 896daca:	83 ec 24             	sub    $0x24,%esp
 896dacd:	8b 55 08             	mov    0x8(%ebp),%edx
 896dad0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896dad3:	89 54 24 04          	mov    %edx,0x4(%esp)
 896dad7:	89 04 24             	mov    %eax,(%esp)
 896dada:	e8 7b 23 00 00       	call   896fe5a <_ZNSt3mapIiP17STExpertJobScriptSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 896dadf:	83 ec 04             	sub    $0x4,%esp
 896dae2:	8b 55 08             	mov    0x8(%ebp),%edx
 896dae5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896dae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 896daec:	89 04 24             	mov    %eax,(%esp)
 896daef:	e8 e6 7f 8c ff       	call   8235ada <_ZNSt3mapIiP17STExpertJobScriptSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 896daf4:	83 ec 04             	sub    $0x4,%esp
 896daf7:	eb 33                	jmp    896db2c <_ZN14CExpertJobList7destroyEv+0x66>
 896daf9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896dafc:	89 04 24             	mov    %eax,(%esp)
 896daff:	e8 9a 23 00 00       	call   896fe9e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP17STExpertJobScriptEEdeEv>
 896db04:	8b 40 04             	mov    0x4(%eax),%eax
 896db07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 896db0a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 896db0d:	85 db                	test   %ebx,%ebx
 896db0f:	74 10                	je     896db21 <_ZN14CExpertJobList7destroyEv+0x5b>
 896db11:	89 1c 24             	mov    %ebx,(%esp)
 896db14:	e8 03 0d 00 00       	call   896e81c <_ZN17STExpertJobScriptD1Ev>
 896db19:	89 1c 24             	mov    %ebx,(%esp)
 896db1c:	e8 cf 69 db ff       	call   87244f0 <_ZdlPv>
 896db21:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896db24:	89 04 24             	mov    %eax,(%esp)
 896db27:	e8 54 23 00 00       	call   896fe80 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP17STExpertJobScriptEEppEv>
 896db2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896db2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 896db33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896db36:	89 04 24             	mov    %eax,(%esp)
 896db39:	e8 c2 7f 8c ff       	call   8235b00 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP17STExpertJobScriptEEneERKS5_>
 896db3e:	84 c0                	test   %al,%al
 896db40:	75 b7                	jne    896daf9 <_ZN14CExpertJobList7destroyEv+0x33>
 896db42:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 896db45:	c9                   	leave
 896db46:	c3                   	ret

```

```c
// CExpertJobList::destroy @ 0x896dac6

/* CExpertJobList::destroy() */

void CExpertJobList::destroy(void)

{
  STExpertJobScript *this;
  char cVar1;
  int iVar2;
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  local_18 [4];
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  local_14 [4];
  STExpertJobScript *local_10;
  
  std::
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  ::begin(local_14);
  std::
  map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
  ::end(local_18);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14);
    this = *(STExpertJobScript **)(iVar2 + 4);
    local_10 = this;
    if (this != (STExpertJobScript *)0x0) {
      STExpertJobScript::~STExpertJobScript(this);
      operator_delete(this);
    }
    std::_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STExpertJobScript*>> *)local_14);
  }
  return;
}

```

---

## init

```asm
// === 0896d8ec CExpertJobList::init  [0x0896d8ec-0x896dac5] ===
 896d8ec:	55                   	push   %ebp
 896d8ed:	89 e5                	mov    %esp,%ebp
 896d8ef:	57                   	push   %edi
 896d8f0:	56                   	push   %esi
 896d8f1:	53                   	push   %ebx
 896d8f2:	83 ec 5c             	sub    $0x5c,%esp
 896d8f5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 896d8fc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 896d8ff:	89 04 24             	mov    %eax,(%esp)
 896d902:	e8 d1 63 94 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 896d907:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 896d90a:	c7 44 24 04 60 77 4f 	movl   $0x94f7760,0x4(%esp)
 896d911:	09 
 896d912:	89 04 24             	mov    %eax,(%esp)
 896d915:	e8 d8 87 77 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 896d91a:	83 ec 04             	sub    $0x4,%esp
 896d91d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 896d920:	89 45 bc             	mov    %eax,-0x44(%ebp)
 896d923:	e9 24 01 00 00       	jmp    896da4c <_ZN14CExpertJobList4initEv+0x160>
 896d928:	8d 45 bc             	lea    -0x44(%ebp),%eax
 896d92b:	89 04 24             	mov    %eax,(%esp)
 896d92e:	e8 85 88 77 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 896d933:	83 c0 04             	add    $0x4,%eax
 896d936:	89 04 24             	mov    %eax,(%esp)
 896d939:	e8 b2 8b d9 ff       	call   87064f0 <_ZNKSs5c_strEv>
 896d93e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 896d941:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 896d945:	0f 84 33 01 00 00    	je     896da7e <_ZN14CExpertJobList4initEv+0x192>
 896d94b:	c7 04 24 90 02 00 00 	movl   $0x290,(%esp)
 896d952:	e8 f9 6a db ff       	call   8724450 <_Znwj>
 896d957:	89 c3                	mov    %eax,%ebx
 896d959:	89 d8                	mov    %ebx,%eax
 896d95b:	89 04 24             	mov    %eax,(%esp)
 896d95e:	e8 af 09 00 00       	call   896e312 <_ZN17STExpertJobScriptC1Ev>
 896d963:	eb 18                	jmp    896d97d <_ZN14CExpertJobList4initEv+0x91>
 896d965:	89 d6                	mov    %edx,%esi
 896d967:	89 c7                	mov    %eax,%edi
 896d969:	89 1c 24             	mov    %ebx,(%esp)
 896d96c:	e8 7f 6b db ff       	call   87244f0 <_ZdlPv>
 896d971:	89 f8                	mov    %edi,%eax
 896d973:	89 f2                	mov    %esi,%edx
 896d975:	89 04 24             	mov    %eax,(%esp)
 896d978:	e8 d3 5d 17 00       	call   8ae3750 <_Unwind_Resume>
 896d97d:	89 d8                	mov    %ebx,%eax
 896d97f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 896d982:	8b 45 b8             	mov    -0x48(%ebp),%eax
 896d985:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 896d988:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d98c:	89 04 24             	mov    %eax,(%esp)
 896d98f:	e8 50 d7 ff ff       	call   896b0e4 <_Z21ImportExpertJobScriptP17STExpertJobScriptPKc>
 896d994:	83 f0 01             	xor    $0x1,%eax
 896d997:	84 c0                	test   %al,%al
 896d999:	74 34                	je     896d9cf <_ZN14CExpertJobList4initEv+0xe3>
 896d99b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 896d99e:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d9a2:	c7 04 24 1c 3d e1 08 	movl   $0x8e13d1c,(%esp)
 896d9a9:	e8 b2 01 71 ff       	call   807db60 <printf@plt>
 896d9ae:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 896d9b1:	85 db                	test   %ebx,%ebx
 896d9b3:	74 10                	je     896d9c5 <_ZN14CExpertJobList4initEv+0xd9>
 896d9b5:	89 1c 24             	mov    %ebx,(%esp)
 896d9b8:	e8 5f 0e 00 00       	call   896e81c <_ZN17STExpertJobScriptD1Ev>
 896d9bd:	89 1c 24             	mov    %ebx,(%esp)
 896d9c0:	e8 2b 6b db ff       	call   87244f0 <_ZdlPv>
 896d9c5:	b8 00 00 00 00       	mov    $0x0,%eax
 896d9ca:	e9 ec 00 00 00       	jmp    896dabb <_ZN14CExpertJobList4initEv+0x1cf>
 896d9cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 896d9d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d9d6:	c7 04 24 60 77 4f 09 	movl   $0x94f7760,(%esp)
 896d9dd:	e8 74 d4 f4 ff       	call   88bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>
 896d9e2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 896d9e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 896d9e8:	8d 55 b8             	lea    -0x48(%ebp),%edx
 896d9eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 896d9ef:	8d 55 dc             	lea    -0x24(%ebp),%edx
 896d9f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d9f6:	89 04 24             	mov    %eax,(%esp)
 896d9f9:	e8 b9 23 00 00       	call   896fdb7 <_ZSt9make_pairIiRP17STExpertJobScriptESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 896d9fe:	83 ec 04             	sub    $0x4,%esp
 896da01:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 896da04:	89 44 24 04          	mov    %eax,0x4(%esp)
 896da08:	8d 45 cc             	lea    -0x34(%ebp),%eax
 896da0b:	89 04 24             	mov    %eax,(%esp)
 896da0e:	e8 eb 23 00 00       	call   896fdfe <_ZNSt4pairIKiP17STExpertJobScriptEC1IiS2_EEOS_IT_T0_E>
 896da13:	8b 55 08             	mov    0x8(%ebp),%edx
 896da16:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 896da19:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 896da1c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 896da20:	89 54 24 04          	mov    %edx,0x4(%esp)
 896da24:	89 04 24             	mov    %eax,(%esp)
 896da27:	e8 02 24 00 00       	call   896fe2e <_ZNSt3mapIiP17STExpertJobScriptSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 896da2c:	83 ec 04             	sub    $0x4,%esp
 896da2f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 896da32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 896da39:	00 
 896da3a:	8d 55 bc             	lea    -0x44(%ebp),%edx
 896da3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 896da41:	89 04 24             	mov    %eax,(%esp)
 896da44:	e8 9b 3c 9d ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 896da49:	83 ec 04             	sub    $0x4,%esp
 896da4c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 896da4f:	c7 44 24 04 60 77 4f 	movl   $0x94f7760,0x4(%esp)
 896da56:	09 
 896da57:	89 04 24             	mov    %eax,(%esp)
 896da5a:	e8 b9 86 77 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 896da5f:	83 ec 04             	sub    $0x4,%esp
 896da62:	8d 45 c0             	lea    -0x40(%ebp),%eax
 896da65:	89 44 24 04          	mov    %eax,0x4(%esp)
 896da69:	8d 45 bc             	lea    -0x44(%ebp),%eax
 896da6c:	89 04 24             	mov    %eax,(%esp)
 896da6f:	e8 ca 86 77 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 896da74:	84 c0                	test   %al,%al
 896da76:	0f 85 ac fe ff ff    	jne    896d928 <_ZN14CExpertJobList4initEv+0x3c>
 896da7c:	eb 01                	jmp    896da7f <_ZN14CExpertJobList4initEv+0x193>
 896da7e:	90                   	nop
 896da7f:	8b 45 08             	mov    0x8(%ebp),%eax
 896da82:	83 c0 18             	add    $0x18,%eax
 896da85:	c7 44 24 04 39 3d e1 	movl   $0x8e13d39,0x4(%esp)
 896da8c:	08 
 896da8d:	89 04 24             	mov    %eax,(%esp)
 896da90:	e8 8c d3 ff ff       	call   896ae21 <_Z24ImportExpertJobEtcScriptR20STExpertJobEtcScriptPKc>
 896da95:	83 f0 01             	xor    $0x1,%eax
 896da98:	84 c0                	test   %al,%al
 896da9a:	74 1a                	je     896dab6 <_ZN14CExpertJobList4initEv+0x1ca>
 896da9c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 896da9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 896daa3:	c7 04 24 48 3d e1 08 	movl   $0x8e13d48,(%esp)
 896daaa:	e8 b1 00 71 ff       	call   807db60 <printf@plt>
 896daaf:	b8 00 00 00 00       	mov    $0x0,%eax
 896dab4:	eb 05                	jmp    896dabb <_ZN14CExpertJobList4initEv+0x1cf>
 896dab6:	b8 01 00 00 00       	mov    $0x1,%eax
 896dabb:	8d 65 f4             	lea    -0xc(%ebp),%esp
 896dabe:	83 c4 00             	add    $0x0,%esp
 896dac1:	5b                   	pop    %ebx
 896dac2:	5e                   	pop    %esi
 896dac3:	5f                   	pop    %edi
 896dac4:	5d                   	pop    %ebp
 896dac5:	c3                   	ret

```

```c
// CExpertJobList::init @ 0x896d8ec

/* CExpertJobList::init() */

bool __thiscall CExpertJobList::init(CExpertJobList *this)

{
  char cVar1;
  int iVar2;
  STExpertJobScript *pSVar3;
  undefined4 local_50;
  STExpertJobScript *local_4c;
  undefined4 local_48;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_44 [4];
  pair local_40 [8];
  pair<int_const,STExpertJobScript*> local_38 [8];
  int local_30 [2];
  STExpertJobScript *local_28;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_24 [4];
  char *local_20;
  
  local_20 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )&local_50);
  local_48 = local_50;
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_44);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48,
                       (_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48);
    local_20 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_20 == (char *)0x0) break;
    pSVar3 = operator_new(0x290);
                    /* try { // try from 0896d95e to 0896d962 has its CatchHandler @ 0896d965 */
    STExpertJobScript::STExpertJobScript(pSVar3);
    local_4c = pSVar3;
    cVar1 = ImportExpertJobScript(pSVar3,local_20);
    if (cVar1 != '\x01') {
      printf("expert job Script Error: %s\n",local_20);
      pSVar3 = local_4c;
      if (local_4c != (STExpertJobScript *)0x0) {
        STExpertJobScript::~STExpertJobScript(local_4c);
        operator_delete(pSVar3);
      }
      return false;
    }
    local_28 = (STExpertJobScript *)
               STScriptFileList::FindIndexByFullScan
                         ((STScriptFileList *)g_expertJobScriptFileList,local_20);
    std::make_pair<int,STExpertJobScript*&>(local_30,&local_28);
    std::pair<int_const,STExpertJobScript*>::pair<int,STExpertJobScript*>(local_38,(pair *)local_30)
    ;
    std::
    map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
    ::insert(local_40);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_24,(int)&local_48);
  }
  cVar1 = ImportExpertJobEtcScript((STExpertJobEtcScript *)(this + 0x18),"expertjob.etc");
  if (cVar1 != '\x01') {
    printf("ExpertJob ETC Script Error : %s\n",local_20);
  }
  return cVar1 == '\x01';
}

```

