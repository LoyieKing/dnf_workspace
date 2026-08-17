# CSkillList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CSkillList

```asm
// === 08350842 CSkillList::CSkillList  [0x08350842-0x83509eb] ===
 8350842:	55                   	push   %ebp
 8350843:	89 e5                	mov    %esp,%ebp
 8350845:	57                   	push   %edi
 8350846:	56                   	push   %esi
 8350847:	53                   	push   %ebx
 8350848:	83 ec 2c             	sub    $0x2c,%esp
 835084b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 835084e:	89 df                	mov    %ebx,%edi
 8350850:	be 0a 00 00 00       	mov    $0xa,%esi
 8350855:	eb 0e                	jmp    8350865 <_ZN10CSkillListC1Ev+0x23>
 8350857:	89 3c 24             	mov    %edi,(%esp)
 835085a:	e8 2b ed 03 00       	call   838f58a <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 835085f:	83 c7 14             	add    $0x14,%edi
 8350862:	83 ee 01             	sub    $0x1,%esi
 8350865:	83 fe ff             	cmp    $0xffffffff,%esi
 8350868:	0f 95 c0             	setne  %al
 835086b:	84 c0                	test   %al,%al
 835086d:	75 e8                	jne    8350857 <_ZN10CSkillListC1Ev+0x15>
 835086f:	eb 3d                	jmp    83508ae <_ZN10CSkillListC1Ev+0x6c>
 8350871:	89 d7                	mov    %edx,%edi
 8350873:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8350876:	85 db                	test   %ebx,%ebx
 8350878:	74 27                	je     83508a1 <_ZN10CSkillListC1Ev+0x5f>
 835087a:	b8 0a 00 00 00       	mov    $0xa,%eax
 835087f:	29 f0                	sub    %esi,%eax
 8350881:	89 c2                	mov    %eax,%edx
 8350883:	89 d0                	mov    %edx,%eax
 8350885:	c1 e0 02             	shl    $0x2,%eax
 8350888:	01 d0                	add    %edx,%eax
 835088a:	c1 e0 02             	shl    $0x2,%eax
 835088d:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8350890:	39 de                	cmp    %ebx,%esi
 8350892:	74 0d                	je     83508a1 <_ZN10CSkillListC1Ev+0x5f>
 8350894:	83 ee 14             	sub    $0x14,%esi
 8350897:	89 34 24             	mov    %esi,(%esp)
 835089a:	e8 11 97 02 00       	call   8379fb0 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 835089f:	eb ef                	jmp    8350890 <_ZN10CSkillListC1Ev+0x4e>
 83508a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83508a4:	89 fa                	mov    %edi,%edx
 83508a6:	89 04 24             	mov    %eax,(%esp)
 83508a9:	e8 a2 2e 79 00       	call   8ae3750 <_Unwind_Resume>
 83508ae:	8b 45 08             	mov    0x8(%ebp),%eax
 83508b1:	8d b0 dc 00 00 00    	lea    0xdc(%eax),%esi
 83508b7:	89 f7                	mov    %esi,%edi
 83508b9:	bb 0a 00 00 00       	mov    $0xa,%ebx
 83508be:	eb 0e                	jmp    83508ce <_ZN10CSkillListC1Ev+0x8c>
 83508c0:	89 3c 24             	mov    %edi,(%esp)
 83508c3:	e8 96 ed 03 00       	call   838f65e <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 83508c8:	83 c7 18             	add    $0x18,%edi
 83508cb:	83 eb 01             	sub    $0x1,%ebx
 83508ce:	83 fb ff             	cmp    $0xffffffff,%ebx
 83508d1:	0f 95 c0             	setne  %al
 83508d4:	84 c0                	test   %al,%al
 83508d6:	75 e8                	jne    83508c0 <_ZN10CSkillListC1Ev+0x7e>
 83508d8:	eb 39                	jmp    8350913 <_ZN10CSkillListC1Ev+0xd1>
 83508da:	89 d7                	mov    %edx,%edi
 83508dc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83508df:	85 f6                	test   %esi,%esi
 83508e1:	74 26                	je     8350909 <_ZN10CSkillListC1Ev+0xc7>
 83508e3:	b8 0a 00 00 00       	mov    $0xa,%eax
 83508e8:	29 d8                	sub    %ebx,%eax
 83508ea:	89 c2                	mov    %eax,%edx
 83508ec:	89 d0                	mov    %edx,%eax
 83508ee:	01 c0                	add    %eax,%eax
 83508f0:	01 d0                	add    %edx,%eax
 83508f2:	c1 e0 03             	shl    $0x3,%eax
 83508f5:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 83508f8:	39 f3                	cmp    %esi,%ebx
 83508fa:	74 0d                	je     8350909 <_ZN10CSkillListC1Ev+0xc7>
 83508fc:	83 eb 18             	sub    $0x18,%ebx
 83508ff:	89 1c 24             	mov    %ebx,(%esp)
 8350902:	e8 bd 96 02 00       	call   8379fc4 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8350907:	eb ef                	jmp    83508f8 <_ZN10CSkillListC1Ev+0xb6>
 8350909:	8b 45 e0             	mov    -0x20(%ebp),%eax
 835090c:	89 fa                	mov    %edi,%edx
 835090e:	e9 a5 00 00 00       	jmp    83509b8 <_ZN10CSkillListC1Ev+0x176>
 8350913:	8b 45 08             	mov    0x8(%ebp),%eax
 8350916:	8d b0 e4 01 00 00    	lea    0x1e4(%eax),%esi
 835091c:	89 f7                	mov    %esi,%edi
 835091e:	bb 0a 00 00 00       	mov    $0xa,%ebx
 8350923:	eb 0e                	jmp    8350933 <_ZN10CSkillListC1Ev+0xf1>
 8350925:	89 3c 24             	mov    %edi,(%esp)
 8350928:	e8 bf 34 03 00       	call   8383dec <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEEC1Ev>
 835092d:	83 c7 18             	add    $0x18,%edi
 8350930:	83 eb 01             	sub    $0x1,%ebx
 8350933:	83 fb ff             	cmp    $0xffffffff,%ebx
 8350936:	0f 95 c0             	setne  %al
 8350939:	84 c0                	test   %al,%al
 835093b:	75 e8                	jne    8350925 <_ZN10CSkillListC1Ev+0xe3>
 835093d:	eb 46                	jmp    8350985 <_ZN10CSkillListC1Ev+0x143>
 835093f:	89 d7                	mov    %edx,%edi
 8350941:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8350944:	85 f6                	test   %esi,%esi
 8350946:	74 26                	je     835096e <_ZN10CSkillListC1Ev+0x12c>
 8350948:	b8 0a 00 00 00       	mov    $0xa,%eax
 835094d:	29 d8                	sub    %ebx,%eax
 835094f:	89 c2                	mov    %eax,%edx
 8350951:	89 d0                	mov    %edx,%eax
 8350953:	01 c0                	add    %eax,%eax
 8350955:	01 d0                	add    %edx,%eax
 8350957:	c1 e0 03             	shl    $0x3,%eax
 835095a:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 835095d:	39 f3                	cmp    %esi,%ebx
 835095f:	74 0d                	je     835096e <_ZN10CSkillListC1Ev+0x12c>
 8350961:	83 eb 18             	sub    $0x18,%ebx
 8350964:	89 1c 24             	mov    %ebx,(%esp)
 8350967:	e8 98 f0 01 00       	call   836fa04 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEED1Ev>
 835096c:	eb ef                	jmp    835095d <_ZN10CSkillListC1Ev+0x11b>
 835096e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8350971:	89 fa                	mov    %edi,%edx
 8350973:	89 d6                	mov    %edx,%esi
 8350975:	89 c7                	mov    %eax,%edi
 8350977:	8b 45 08             	mov    0x8(%ebp),%eax
 835097a:	05 dc 00 00 00       	add    $0xdc,%eax
 835097f:	85 c0                	test   %eax,%eax
 8350981:	74 31                	je     83509b4 <_ZN10CSkillListC1Ev+0x172>
 8350983:	eb 08                	jmp    835098d <_ZN10CSkillListC1Ev+0x14b>
 8350985:	83 c4 2c             	add    $0x2c,%esp
 8350988:	5b                   	pop    %ebx
 8350989:	5e                   	pop    %esi
 835098a:	5f                   	pop    %edi
 835098b:	5d                   	pop    %ebp
 835098c:	c3                   	ret
 835098d:	8b 45 08             	mov    0x8(%ebp),%eax
 8350990:	05 dc 00 00 00       	add    $0xdc,%eax
 8350995:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 835099b:	8b 45 08             	mov    0x8(%ebp),%eax
 835099e:	05 dc 00 00 00       	add    $0xdc,%eax
 83509a3:	39 c3                	cmp    %eax,%ebx
 83509a5:	74 0d                	je     83509b4 <_ZN10CSkillListC1Ev+0x172>
 83509a7:	83 eb 18             	sub    $0x18,%ebx
 83509aa:	89 1c 24             	mov    %ebx,(%esp)
 83509ad:	e8 12 96 02 00       	call   8379fc4 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 83509b2:	eb e7                	jmp    835099b <_ZN10CSkillListC1Ev+0x159>
 83509b4:	89 f8                	mov    %edi,%eax
 83509b6:	89 f2                	mov    %esi,%edx
 83509b8:	89 d6                	mov    %edx,%esi
 83509ba:	89 c7                	mov    %eax,%edi
 83509bc:	8b 45 08             	mov    0x8(%ebp),%eax
 83509bf:	85 c0                	test   %eax,%eax
 83509c1:	74 1d                	je     83509e0 <_ZN10CSkillListC1Ev+0x19e>
 83509c3:	8b 45 08             	mov    0x8(%ebp),%eax
 83509c6:	8d 98 dc 00 00 00    	lea    0xdc(%eax),%ebx
 83509cc:	8b 45 08             	mov    0x8(%ebp),%eax
 83509cf:	39 c3                	cmp    %eax,%ebx
 83509d1:	74 0d                	je     83509e0 <_ZN10CSkillListC1Ev+0x19e>
 83509d3:	83 eb 14             	sub    $0x14,%ebx
 83509d6:	89 1c 24             	mov    %ebx,(%esp)
 83509d9:	e8 d2 95 02 00       	call   8379fb0 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 83509de:	eb ec                	jmp    83509cc <_ZN10CSkillListC1Ev+0x18a>
 83509e0:	89 f8                	mov    %edi,%eax
 83509e2:	89 f2                	mov    %esi,%edx
 83509e4:	89 04 24             	mov    %eax,(%esp)
 83509e7:	e8 64 2d 79 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CSkillList::CSkillList @ 0x8350842

/* CSkillList::CSkillList() */

void __thiscall CSkillList::CSkillList(CSkillList *this)

{
  int iVar1;
  CSkillList *this_00;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *this_01;
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  *this_02;
  
  this_00 = this;
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0835085a to 0835085e has its CatchHandler @ 08350871 */
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::hash_map((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
                *)this_00);
    this_00 = this_00 + 0x14;
  }
  this_01 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
            (this + 0xdc);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 083508c3 to 083508c7 has its CatchHandler @ 083508da */
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::multimap
              (this_01);
    this_01 = this_01 + 0x18;
  }
  this_02 = (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
             *)(this + 0x1e4);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08350928 to 0835092c has its CatchHandler @ 0835093f */
    std::
    map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
    ::map(this_02);
    this_02 = this_02 + 0x18;
  }
  return;
}

```

---

## destroy

```asm
// === 08350b42 CSkillList::destroy  [0x08350b42-0x8350c25] ===
 8350b42:	55                   	push   %ebp
 8350b43:	89 e5                	mov    %esp,%ebp
 8350b45:	53                   	push   %ebx
 8350b46:	83 ec 34             	sub    $0x34,%esp
 8350b49:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8350b50:	e9 bc 00 00 00       	jmp    8350c11 <_ZN10CSkillList7destroyEv+0xcf>
 8350b55:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8350b58:	89 d0                	mov    %edx,%eax
 8350b5a:	c1 e0 02             	shl    $0x2,%eax
 8350b5d:	01 d0                	add    %edx,%eax
 8350b5f:	c1 e0 02             	shl    $0x2,%eax
 8350b62:	03 45 08             	add    0x8(%ebp),%eax
 8350b65:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8350b68:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8350b6b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8350b6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350b72:	89 04 24             	mov    %eax,(%esp)
 8350b75:	e8 5e eb 03 00       	call   838f6d8 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8350b7a:	83 ec 04             	sub    $0x4,%esp
 8350b7d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8350b80:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8350b83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350b87:	89 04 24             	mov    %eax,(%esp)
 8350b8a:	e8 6f eb 03 00       	call   838f6fe <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8350b8f:	83 ec 04             	sub    $0x4,%esp
 8350b92:	eb 33                	jmp    8350bc7 <_ZN10CSkillList7destroyEv+0x85>
 8350b94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8350b97:	89 04 24             	mov    %eax,(%esp)
 8350b9a:	e8 31 ec 03 00       	call   838f7d0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEdeEv>
 8350b9f:	8b 40 04             	mov    0x4(%eax),%eax
 8350ba2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8350ba5:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8350ba8:	85 db                	test   %ebx,%ebx
 8350baa:	74 10                	je     8350bbc <_ZN10CSkillList7destroyEv+0x7a>
 8350bac:	89 1c 24             	mov    %ebx,(%esp)
 8350baf:	e8 24 94 02 00       	call   8379fd8 <_ZN6CSkillD1Ev>
 8350bb4:	89 1c 24             	mov    %ebx,(%esp)
 8350bb7:	e8 34 39 3d 00       	call   87244f0 <_ZdlPv>
 8350bbc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8350bbf:	89 04 24             	mov    %eax,(%esp)
 8350bc2:	e8 71 eb 03 00       	call   838f738 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 8350bc7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8350bca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350bce:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8350bd1:	89 04 24             	mov    %eax,(%esp)
 8350bd4:	e8 4b eb 03 00       	call   838f724 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8350bd9:	84 c0                	test   %al,%al
 8350bdb:	75 b7                	jne    8350b94 <_ZN10CSkillList7destroyEv+0x52>
 8350bdd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8350be0:	89 04 24             	mov    %eax,(%esp)
 8350be3:	e8 f6 eb 03 00       	call   838f7de <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 8350be8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8350beb:	89 d0                	mov    %edx,%eax
 8350bed:	01 c0                	add    %eax,%eax
 8350bef:	01 d0                	add    %edx,%eax
 8350bf1:	c1 e0 03             	shl    $0x3,%eax
 8350bf4:	05 d0 00 00 00       	add    $0xd0,%eax
 8350bf9:	03 45 08             	add    0x8(%ebp),%eax
 8350bfc:	83 c0 0c             	add    $0xc,%eax
 8350bff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8350c02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8350c05:	89 04 24             	mov    %eax,(%esp)
 8350c08:	e8 e5 eb 03 00       	call   838f7f2 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8350c0d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8350c11:	83 7d e8 0a          	cmpl   $0xa,-0x18(%ebp)
 8350c15:	0f 9e c0             	setle  %al
 8350c18:	84 c0                	test   %al,%al
 8350c1a:	0f 85 35 ff ff ff    	jne    8350b55 <_ZN10CSkillList7destroyEv+0x13>
 8350c20:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8350c23:	c9                   	leave
 8350c24:	c3                   	ret
 8350c25:	90                   	nop

```

```c
// CSkillList::destroy @ 0x8350b42

/* CSkillList::destroy() */

void __thiscall CSkillList::destroy(CSkillList *this)

{
  CSkill *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_2c [8]
  ;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_24 [8]
  ;
  int local_1c;
  CSkillList *local_18;
  CSkill *local_14;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *local_10;
  
  for (local_1c = 0; local_1c < 0xb; local_1c = local_1c + 1) {
    local_18 = this + local_1c * 0x14;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::begin(local_24);
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_2c);
    while( true ) {
      cVar1 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator!=((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                            *)local_24,(_Hashtable_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator*((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                           *)local_24);
      this_00 = *(CSkill **)(iVar2 + 4);
      local_14 = this_00;
      if (this_00 != (CSkill *)0x0) {
        CSkill::~CSkill(this_00);
        operator_delete(this_00);
      }
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                    *)local_24);
    }
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::clear((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *
            )local_18);
    local_10 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
               (this + local_1c * 0x18 + 0xdc);
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::clear
              (local_10);
  }
  return;
}

```

---

## find_skill

```asm
// === 08351b74 CSkillList::find_skill  [0x08351b74-0x8351c1d] ===
 8351b74:	55                   	push   %ebp
 8351b75:	89 e5                	mov    %esp,%ebp
 8351b77:	83 ec 38             	sub    $0x38,%esp
 8351b7a:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 8351b7e:	7e 0a                	jle    8351b8a <_ZN10CSkillList10find_skillEii+0x16>
 8351b80:	b8 00 00 00 00       	mov    $0x0,%eax
 8351b85:	e9 91 00 00 00       	jmp    8351c1b <_ZN10CSkillList10find_skillEii+0xa7>
 8351b8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351b8d:	89 04 24             	mov    %eax,(%esp)
 8351b90:	e8 c3 df 03 00       	call   838fb58 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 8351b95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351b98:	89 d0                	mov    %edx,%eax
 8351b9a:	c1 e0 02             	shl    $0x2,%eax
 8351b9d:	01 d0                	add    %edx,%eax
 8351b9f:	c1 e0 02             	shl    $0x2,%eax
 8351ba2:	89 c2                	mov    %eax,%edx
 8351ba4:	03 55 08             	add    0x8(%ebp),%edx
 8351ba7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8351baa:	8d 4d 10             	lea    0x10(%ebp),%ecx
 8351bad:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8351bb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351bb5:	89 04 24             	mov    %eax,(%esp)
 8351bb8:	e8 eb df 03 00       	call   838fba8 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8351bbd:	83 ec 04             	sub    $0x4,%esp
 8351bc0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8351bc3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8351bc6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8351bc9:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8351bcc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351bcf:	89 d0                	mov    %edx,%eax
 8351bd1:	c1 e0 02             	shl    $0x2,%eax
 8351bd4:	01 d0                	add    %edx,%eax
 8351bd6:	c1 e0 02             	shl    $0x2,%eax
 8351bd9:	89 c2                	mov    %eax,%edx
 8351bdb:	03 55 08             	add    0x8(%ebp),%edx
 8351bde:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8351be1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351be5:	89 04 24             	mov    %eax,(%esp)
 8351be8:	e8 11 db 03 00       	call   838f6fe <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8351bed:	83 ec 04             	sub    $0x4,%esp
 8351bf0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8351bf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351bf7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351bfa:	89 04 24             	mov    %eax,(%esp)
 8351bfd:	e8 d2 df 03 00       	call   838fbd4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8351c02:	84 c0                	test   %al,%al
 8351c04:	74 07                	je     8351c0d <_ZN10CSkillList10find_skillEii+0x99>
 8351c06:	b8 00 00 00 00       	mov    $0x0,%eax
 8351c0b:	eb 0e                	jmp    8351c1b <_ZN10CSkillList10find_skillEii+0xa7>
 8351c0d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351c10:	89 04 24             	mov    %eax,(%esp)
 8351c13:	e8 46 df 03 00       	call   838fb5e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8351c18:	8b 40 04             	mov    0x4(%eax),%eax
 8351c1b:	c9                   	leave
 8351c1c:	c3                   	ret
 8351c1d:	90                   	nop

```

```c
// CSkillList::find_skill @ 0x8351b74

/* CSkillList::find_skill(int, int) */

undefined4 CSkillList::find_skill(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_14 [16];
  
  if (param_2 < 0xb) {
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_iterator();
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::find(&local_24);
    local_1c = local_24;
    local_18 = local_20;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_14);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
            ::operator==((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                          *)&local_1c,(_Hashtable_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar3 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                            *)&local_1c);
      uVar2 = *(undefined4 *)(iVar3 + 4);
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

## get_post_learning_skill

```asm
// === 08352028 CSkillList::get_post_learning_skill  [0x08352028-0x83520c7] ===
 8352028:	55                   	push   %ebp
 8352029:	89 e5                	mov    %esp,%ebp
 835202b:	83 ec 28             	sub    $0x28,%esp
 835202e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8352031:	89 d0                	mov    %edx,%eax
 8352033:	01 c0                	add    %eax,%eax
 8352035:	01 d0                	add    %edx,%eax
 8352037:	c1 e0 03             	shl    $0x3,%eax
 835203a:	05 e0 01 00 00       	add    $0x1e0,%eax
 835203f:	03 45 08             	add    0x8(%ebp),%eax
 8352042:	8d 48 04             	lea    0x4(%eax),%ecx
 8352045:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352048:	8d 55 10             	lea    0x10(%ebp),%edx
 835204b:	89 54 24 08          	mov    %edx,0x8(%esp)
 835204f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8352053:	89 04 24             	mov    %eax,(%esp)
 8352056:	e8 ad dd 03 00       	call   838fe08 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE4findERS7_>
 835205b:	83 ec 04             	sub    $0x4,%esp
 835205e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8352061:	89 d0                	mov    %edx,%eax
 8352063:	01 c0                	add    %eax,%eax
 8352065:	01 d0                	add    %edx,%eax
 8352067:	c1 e0 03             	shl    $0x3,%eax
 835206a:	05 e0 01 00 00       	add    $0x1e0,%eax
 835206f:	03 45 08             	add    0x8(%ebp),%eax
 8352072:	8d 50 04             	lea    0x4(%eax),%edx
 8352075:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352078:	89 54 24 04          	mov    %edx,0x4(%esp)
 835207c:	89 04 24             	mov    %eax,(%esp)
 835207f:	e8 b0 dd 03 00       	call   838fe34 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE3endEv>
 8352084:	83 ec 04             	sub    $0x4,%esp
 8352087:	8d 45 f4             	lea    -0xc(%ebp),%eax
 835208a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835208e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352091:	89 04 24             	mov    %eax,(%esp)
 8352094:	e8 5b de 03 00       	call   838fef4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEneERKS7_>
 8352099:	84 c0                	test   %al,%al
 835209b:	74 24                	je     83520c1 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE+0x99>
 835209d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83520a0:	89 04 24             	mov    %eax,(%esp)
 83520a3:	e8 2a de 03 00       	call   838fed2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEptEv>
 83520a8:	83 c0 04             	add    $0x4,%eax
 83520ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 83520af:	8b 45 14             	mov    0x14(%ebp),%eax
 83520b2:	89 04 24             	mov    %eax,(%esp)
 83520b5:	e8 d2 cf fb ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 83520ba:	b8 01 00 00 00       	mov    $0x1,%eax
 83520bf:	eb 05                	jmp    83520c6 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE+0x9e>
 83520c1:	b8 00 00 00 00       	mov    $0x0,%eax
 83520c6:	c9                   	leave
 83520c7:	c3                   	ret

```

```c
// CSkillList::get_post_learning_skill @ 0x8352028

/* CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

bool CSkillList::get_post_learning_skill(int param_1,int param_2,vector *param_3)

{
  char cVar1;
  int iVar2;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *in_stack_00000010;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_14 [4];
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            ::operator->(local_14);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              (in_stack_00000010,(vector *)(iVar2 + 4));
  }
  return cVar1 != '\0';
}

```

---

## get_ran_groupskill_index

```asm
// === 08351c1e CSkillList::get_ran_groupskill_index  [0x08351c1e-0x8351e17] ===
 8351c1e:	55                   	push   %ebp
 8351c1f:	89 e5                	mov    %esp,%ebp
 8351c21:	83 ec 68             	sub    $0x68,%esp
 8351c24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351c27:	89 d0                	mov    %edx,%eax
 8351c29:	01 c0                	add    %eax,%eax
 8351c2b:	01 d0                	add    %edx,%eax
 8351c2d:	c1 e0 03             	shl    $0x3,%eax
 8351c30:	05 d0 00 00 00       	add    $0xd0,%eax
 8351c35:	03 45 08             	add    0x8(%ebp),%eax
 8351c38:	8d 50 0c             	lea    0xc(%eax),%edx
 8351c3b:	8d 45 10             	lea    0x10(%ebp),%eax
 8351c3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351c42:	89 14 24             	mov    %edx,(%esp)
 8351c45:	e8 52 e0 03 00       	call   838fc9c <_ZNKSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEE5countERS5_>
 8351c4a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8351c4d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8351c51:	75 0a                	jne    8351c5d <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x3f>
 8351c53:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8351c58:	e9 b8 01 00 00       	jmp    8351e15 <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1f7>
 8351c5d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8351c60:	89 04 24             	mov    %eax,(%esp)
 8351c63:	e8 1f ff 35 00       	call   86b1b87 <_Z12get_rand_inti>
 8351c68:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8351c6b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351c6e:	89 d0                	mov    %edx,%eax
 8351c70:	01 c0                	add    %eax,%eax
 8351c72:	01 d0                	add    %edx,%eax
 8351c74:	c1 e0 03             	shl    $0x3,%eax
 8351c77:	05 d0 00 00 00       	add    $0xd0,%eax
 8351c7c:	03 45 08             	add    0x8(%ebp),%eax
 8351c7f:	8d 48 0c             	lea    0xc(%eax),%ecx
 8351c82:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8351c85:	8d 55 10             	lea    0x10(%ebp),%edx
 8351c88:	89 54 24 08          	mov    %edx,0x8(%esp)
 8351c8c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8351c90:	89 04 24             	mov    %eax,(%esp)
 8351c93:	e8 1e e0 03 00       	call   838fcb6 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEE11equal_rangeERS5_>
 8351c98:	83 ec 04             	sub    $0x4,%esp
 8351c9b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8351c9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351ca2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8351ca5:	89 04 24             	mov    %eax,(%esp)
 8351ca8:	e8 35 e0 03 00       	call   838fce2 <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiP6CSkillEES5_EC1ISt17_Rb_tree_iteratorIS4_ES9_EEOS_IT_T0_E>
 8351cad:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8351cb0:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8351cb3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8351cba:	eb 21                	jmp    8351cdd <_ZN10CSkillList24get_ran_groupskill_indexEiii+0xbf>
 8351cbc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8351cbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8351cc6:	00 
 8351cc7:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8351cca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351cce:	89 04 24             	mov    %eax,(%esp)
 8351cd1:	e8 4e e0 03 00       	call   838fd24 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEppEi>
 8351cd6:	83 ec 04             	sub    $0x4,%esp
 8351cd9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8351cdd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8351ce0:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8351ce3:	0f 9c c0             	setl   %al
 8351ce6:	84 c0                	test   %al,%al
 8351ce8:	75 d2                	jne    8351cbc <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x9e>
 8351cea:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8351ced:	89 04 24             	mov    %eax,(%esp)
 8351cf0:	e8 6d e0 03 00       	call   838fd62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEptEv>
 8351cf5:	8b 40 04             	mov    0x4(%eax),%eax
 8351cf8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8351cfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8351cfe:	89 04 24             	mov    %eax,(%esp)
 8351d01:	e8 74 2e 02 00       	call   8374b7a <_ZNK6CSkill9get_indexEv>
 8351d06:	3b 45 14             	cmp    0x14(%ebp),%eax
 8351d09:	0f 94 c0             	sete   %al
 8351d0c:	84 c0                	test   %al,%al
 8351d0e:	0f 84 f6 00 00 00    	je     8351e0a <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1ec>
 8351d14:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8351d17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8351d1e:	00 
 8351d1f:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8351d22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351d26:	89 04 24             	mov    %eax,(%esp)
 8351d29:	e8 f6 df 03 00       	call   838fd24 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEppEi>
 8351d2e:	83 ec 04             	sub    $0x4,%esp
 8351d31:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8351d34:	83 c0 04             	add    $0x4,%eax
 8351d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351d3b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8351d3e:	89 04 24             	mov    %eax,(%esp)
 8351d41:	e8 2a e0 03 00       	call   838fd70 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEeqERKS5_>
 8351d46:	84 c0                	test   %al,%al
 8351d48:	0f 84 ab 00 00 00    	je     8351df9 <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1db>
 8351d4e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8351d51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8351d58:	00 
 8351d59:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8351d5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351d60:	89 04 24             	mov    %eax,(%esp)
 8351d63:	e8 1c e0 03 00       	call   838fd84 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEmmEi>
 8351d68:	83 ec 04             	sub    $0x4,%esp
 8351d6b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8351d6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351d72:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8351d75:	89 04 24             	mov    %eax,(%esp)
 8351d78:	e8 f3 df 03 00       	call   838fd70 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEeqERKS5_>
 8351d7d:	84 c0                	test   %al,%al
 8351d7f:	74 48                	je     8351dc9 <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1ab>
 8351d81:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8351d88:	00 
 8351d89:	c7 44 24 08 de 0f 00 	movl   $0xfde,0x8(%esp)
 8351d90:	00 
 8351d91:	c7 44 24 04 80 47 c3 	movl   $0x8c34780,0x4(%esp)
 8351d98:	08 
 8351d99:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351d9c:	89 04 24             	mov    %eax,(%esp)
 8351d9f:	e8 74 d9 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8351da4:	c7 44 24 0c de 0f 00 	movl   $0xfde,0xc(%esp)
 8351dab:	00 
 8351dac:	c7 44 24 08 80 47 c3 	movl   $0x8c34780,0x8(%esp)
 8351db3:	08 
 8351db4:	c7 44 24 04 cc 00 c3 	movl   $0x8c300cc,0x4(%esp)
 8351dbb:	08 
 8351dbc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351dbf:	89 04 24             	mov    %eax,(%esp)
 8351dc2:	e8 c1 d9 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8351dc7:	eb 41                	jmp    8351e0a <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1ec>
 8351dc9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8351dcc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8351dd3:	00 
 8351dd4:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8351dd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351ddb:	89 04 24             	mov    %eax,(%esp)
 8351dde:	e8 a1 df 03 00       	call   838fd84 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEmmEi>
 8351de3:	83 ec 04             	sub    $0x4,%esp
 8351de6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8351de9:	89 04 24             	mov    %eax,(%esp)
 8351dec:	e8 71 df 03 00       	call   838fd62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEptEv>
 8351df1:	8b 40 04             	mov    0x4(%eax),%eax
 8351df4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8351df7:	eb 11                	jmp    8351e0a <_ZN10CSkillList24get_ran_groupskill_indexEiii+0x1ec>
 8351df9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8351dfc:	89 04 24             	mov    %eax,(%esp)
 8351dff:	e8 5e df 03 00       	call   838fd62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP6CSkillEEptEv>
 8351e04:	8b 40 04             	mov    0x4(%eax),%eax
 8351e07:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8351e0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8351e0d:	89 04 24             	mov    %eax,(%esp)
 8351e10:	e8 65 2d 02 00       	call   8374b7a <_ZNK6CSkill9get_indexEv>
 8351e15:	c9                   	leave
 8351e16:	c3                   	ret
 8351e17:	90                   	nop

```

```c
// CSkillList::get_ran_groupskill_index @ 0x8351c1e

/* CSkillList::get_ran_groupskill_index(int, int, int) */

undefined4 __thiscall
CSkillList::get_ran_groupskill_index(CSkillList *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  _Rb_tree_const_iterator a_Stack_48 [4];
  int local_44 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_34 [4];
  cMyTrace local_30 [16];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_20 [4];
  int local_1c;
  int local_18;
  CSkill *local_14;
  int local_10;
  
  local_1c = std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>
             ::count((multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>
                      *)(this + param_1 * 0x18 + 0xdc),&param_2);
  if (local_1c == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = get_rand_int(local_1c);
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::
    equal_range(local_44);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>>
    ::
    pair<std::_Rb_tree_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_iterator<std::pair<int_const,CSkill*>>>
              ((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>>
                *)&local_4c,(pair *)local_44);
    local_50 = local_4c;
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator++
                (local_3c,(int)&local_50);
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
    local_14 = *(CSkill **)(iVar3 + 4);
    iVar3 = CSkill::get_index(local_14);
    if (iVar3 == param_3) {
      std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator++
                (local_38,(int)&local_50);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator==
                        ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50,
                         a_Stack_48);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
        local_14 = *(CSkill **)(iVar3 + 4);
      }
      else {
        std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator--
                  (local_34,(int)&local_50);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator==
                          ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50,
                           (_Rb_tree_const_iterator *)&local_4c);
        if (cVar1 == '\0') {
          std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator--
                    (local_20,(int)&local_50);
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                            ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
          local_14 = *(CSkill **)(iVar3 + 4);
        }
        else {
          cMyTrace::cMyTrace(local_30,"int CSkillList::get_ran_groupskill_index(int, int, int)",
                             0xfde,5);
          cMyTrace::operator()
                    (local_30,"[%s][%d]_( i == res.first )",
                     "int CSkillList::get_ran_groupskill_index(int, int, int)",0xfde);
        }
      }
    }
    uVar2 = CSkill::get_index(local_14);
  }
  return uVar2;
}

```

---

## init

```asm
// === 08350c26 CSkillList::init  [0x08350c26-0x83519a5] ===
 8350c26:	55                   	push   %ebp
 8350c27:	89 e5                	mov    %esp,%ebp
 8350c29:	57                   	push   %edi
 8350c2a:	56                   	push   %esi
 8350c2b:	53                   	push   %ebx
 8350c2c:	81 ec ac 0b 00 00    	sub    $0xbac,%esp
 8350c32:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8350c38:	89 04 24             	mov    %eax,(%esp)
 8350c3b:	e8 02 4a 02 00       	call   8375642 <_ZN13STSkillScriptC1Ev>
 8350c40:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 8350c47:	e8 68 bf 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350c4c:	89 04 24             	mov    %eax,(%esp)
 8350c4f:	e8 9c 1b 2d 00       	call   86227f0 <_ZN11sync_script11CSyncScript20truncate_skill_indexEv>
 8350c54:	e8 5b bf 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350c59:	89 04 24             	mov    %eax,(%esp)
 8350c5c:	e8 31 21 2d 00       	call   8622d92 <_ZN11sync_script11CSyncScript19trancate_skill_infoEv>
 8350c61:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8350c68:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8350c6f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8350c75:	89 04 24             	mov    %eax,(%esp)
 8350c78:	e8 5b 30 f6 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8350c7d:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8350c84:	e9 bd 0b 00 00       	jmp    8351846 <_ZN10CSkillList4initEv+0xc20>
 8350c89:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350c8c:	89 d0                	mov    %edx,%eax
 8350c8e:	01 c0                	add    %eax,%eax
 8350c90:	01 d0                	add    %edx,%eax
 8350c92:	c1 e0 03             	shl    $0x3,%eax
 8350c95:	8d 90 20 08 50 09    	lea    0x9500820(%eax),%edx
 8350c9b:	8d 85 84 f4 ff ff    	lea    -0xb7c(%ebp),%eax
 8350ca1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350ca5:	89 04 24             	mov    %eax,(%esp)
 8350ca8:	e8 45 54 d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8350cad:	83 ec 04             	sub    $0x4,%esp
 8350cb0:	8b 85 84 f4 ff ff    	mov    -0xb7c(%ebp),%eax
 8350cb6:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8350cbc:	e9 37 0b 00 00       	jmp    83517f8 <_ZN10CSkillList4initEv+0xbd2>
 8350cc1:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8350cc7:	89 04 24             	mov    %eax,(%esp)
 8350cca:	e8 e9 54 d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8350ccf:	83 c0 04             	add    $0x4,%eax
 8350cd2:	89 04 24             	mov    %eax,(%esp)
 8350cd5:	e8 16 58 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 8350cda:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8350cdd:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 8350ce1:	0f 84 5a 0b 00 00    	je     8351841 <_ZN10CSkillList4initEv+0xc1b>
 8350ce7:	8b 45 90             	mov    -0x70(%ebp),%eax
 8350cea:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8350cf1:	ff 
 8350cf2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8350cf9:	00 
 8350cfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350cfe:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350d01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350d05:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8350d0b:	89 04 24             	mov    %eax,(%esp)
 8350d0e:	e8 1c 6c 74 00       	call   8a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>
 8350d13:	83 f0 01             	xor    $0x1,%eax
 8350d16:	84 c0                	test   %al,%al
 8350d18:	74 1d                	je     8350d37 <_ZN10CSkillList4initEv+0x111>
 8350d1a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350d1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350d21:	c7 04 24 2f 00 c3 08 	movl   $0x8c3002f,(%esp)
 8350d28:	e8 33 ce d2 ff       	call   807db60 <printf@plt>
 8350d2d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350d32:	e9 53 0c 00 00       	jmp    835198a <_ZN10CSkillList4initEv+0xd64>
 8350d37:	e8 78 be 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350d3c:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350d3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8350d43:	8d 95 98 fc ff ff    	lea    -0x368(%ebp),%edx
 8350d49:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350d4d:	89 04 24             	mov    %eax,(%esp)
 8350d50:	e8 d7 18 2d 00       	call   862262c <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti>
 8350d55:	83 f0 01             	xor    $0x1,%eax
 8350d58:	84 c0                	test   %al,%al
 8350d5a:	74 1d                	je     8350d79 <_ZN10CSkillList4initEv+0x153>
 8350d5c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350d5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350d63:	c7 04 24 47 00 c3 08 	movl   $0x8c30047,(%esp)
 8350d6a:	e8 f1 cd d2 ff       	call   807db60 <printf@plt>
 8350d6f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350d74:	e9 11 0c 00 00       	jmp    835198a <_ZN10CSkillList4initEv+0xd64>
 8350d79:	e8 36 be 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350d7e:	89 04 24             	mov    %eax,(%esp)
 8350d81:	e8 82 64 f5 ff       	call   82a7208 <_ZN11sync_script11CSyncScript8IsEnableEv>
 8350d86:	84 c0                	test   %al,%al
 8350d88:	0f 84 02 03 00 00    	je     8351090 <_ZN10CSkillList4initEv+0x46a>
 8350d8e:	e8 21 be 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350d93:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8350d9a:	00 
 8350d9b:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350d9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8350da2:	8d 95 98 fc ff ff    	lea    -0x368(%ebp),%edx
 8350da8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350dac:	89 04 24             	mov    %eax,(%esp)
 8350daf:	e8 54 20 2d 00       	call   8622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>
 8350db4:	83 f0 01             	xor    $0x1,%eax
 8350db7:	84 c0                	test   %al,%al
 8350db9:	74 1d                	je     8350dd8 <_ZN10CSkillList4initEv+0x1b2>
 8350dbb:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350dbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350dc2:	c7 04 24 65 00 c3 08 	movl   $0x8c30065,(%esp)
 8350dc9:	e8 92 cd d2 ff       	call   807db60 <printf@plt>
 8350dce:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350dd3:	e9 b2 0b 00 00       	jmp    835198a <_ZN10CSkillList4initEv+0xd64>
 8350dd8:	8d 85 ec f9 ff ff    	lea    -0x614(%ebp),%eax
 8350dde:	89 04 24             	mov    %eax,(%esp)
 8350de1:	e8 5c 48 02 00       	call   8375642 <_ZN13STSkillScriptC1Ev>
 8350de6:	8b 45 90             	mov    -0x70(%ebp),%eax
 8350de9:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8350df0:	ff 
 8350df1:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 8350df8:	00 
 8350df9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350dfd:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350e00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350e04:	8d 85 ec f9 ff ff    	lea    -0x614(%ebp),%eax
 8350e0a:	89 04 24             	mov    %eax,(%esp)
 8350e0d:	e8 1d 6b 74 00       	call   8a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>
 8350e12:	83 f0 01             	xor    $0x1,%eax
 8350e15:	84 c0                	test   %al,%al
 8350e17:	74 22                	je     8350e3b <_ZN10CSkillList4initEv+0x215>
 8350e19:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350e1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350e20:	c7 04 24 2f 00 c3 08 	movl   $0x8c3002f,(%esp)
 8350e27:	e8 34 cd d2 ff       	call   807db60 <printf@plt>
 8350e2c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350e31:	be 00 00 00 00       	mov    $0x0,%esi
 8350e36:	e9 3f 02 00 00       	jmp    835107a <_ZN10CSkillList4initEv+0x454>
 8350e3b:	e8 74 bd 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350e40:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 8350e47:	00 
 8350e48:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350e4b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8350e4f:	8d 95 ec f9 ff ff    	lea    -0x614(%ebp),%edx
 8350e55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350e59:	89 04 24             	mov    %eax,(%esp)
 8350e5c:	e8 a7 1f 2d 00       	call   8622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>
 8350e61:	83 f0 01             	xor    $0x1,%eax
 8350e64:	84 c0                	test   %al,%al
 8350e66:	74 22                	je     8350e8a <_ZN10CSkillList4initEv+0x264>
 8350e68:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350e6f:	c7 04 24 65 00 c3 08 	movl   $0x8c30065,(%esp)
 8350e76:	e8 e5 cc d2 ff       	call   807db60 <printf@plt>
 8350e7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350e80:	be 00 00 00 00       	mov    $0x0,%esi
 8350e85:	e9 f0 01 00 00       	jmp    835107a <_ZN10CSkillList4initEv+0x454>
 8350e8a:	8d 85 40 f7 ff ff    	lea    -0x8c0(%ebp),%eax
 8350e90:	89 04 24             	mov    %eax,(%esp)
 8350e93:	e8 aa 47 02 00       	call   8375642 <_ZN13STSkillScriptC1Ev>
 8350e98:	8b 45 90             	mov    -0x70(%ebp),%eax
 8350e9b:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8350ea2:	ff 
 8350ea3:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 8350eaa:	00 
 8350eab:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350eaf:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350eb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350eb6:	8d 85 40 f7 ff ff    	lea    -0x8c0(%ebp),%eax
 8350ebc:	89 04 24             	mov    %eax,(%esp)
 8350ebf:	e8 6b 6a 74 00       	call   8a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>
 8350ec4:	83 f0 01             	xor    $0x1,%eax
 8350ec7:	84 c0                	test   %al,%al
 8350ec9:	74 22                	je     8350eed <_ZN10CSkillList4initEv+0x2c7>
 8350ecb:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350ece:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350ed2:	c7 04 24 2f 00 c3 08 	movl   $0x8c3002f,(%esp)
 8350ed9:	e8 82 cc d2 ff       	call   807db60 <printf@plt>
 8350ede:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350ee3:	be 00 00 00 00       	mov    $0x0,%esi
 8350ee8:	e9 52 01 00 00       	jmp    835103f <_ZN10CSkillList4initEv+0x419>
 8350eed:	e8 c2 bc 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350ef2:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 8350ef9:	00 
 8350efa:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350efd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8350f01:	8d 95 40 f7 ff ff    	lea    -0x8c0(%ebp),%edx
 8350f07:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350f0b:	89 04 24             	mov    %eax,(%esp)
 8350f0e:	e8 f5 1e 2d 00       	call   8622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>
 8350f13:	83 f0 01             	xor    $0x1,%eax
 8350f16:	84 c0                	test   %al,%al
 8350f18:	74 22                	je     8350f3c <_ZN10CSkillList4initEv+0x316>
 8350f1a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350f1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350f21:	c7 04 24 65 00 c3 08 	movl   $0x8c30065,(%esp)
 8350f28:	e8 33 cc d2 ff       	call   807db60 <printf@plt>
 8350f2d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350f32:	be 00 00 00 00       	mov    $0x0,%esi
 8350f37:	e9 03 01 00 00       	jmp    835103f <_ZN10CSkillList4initEv+0x419>
 8350f3c:	8d 85 94 f4 ff ff    	lea    -0xb6c(%ebp),%eax
 8350f42:	89 04 24             	mov    %eax,(%esp)
 8350f45:	e8 f8 46 02 00       	call   8375642 <_ZN13STSkillScriptC1Ev>
 8350f4a:	8b 45 90             	mov    -0x70(%ebp),%eax
 8350f4d:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8350f54:	ff 
 8350f55:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8350f5c:	00 
 8350f5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350f61:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350f68:	8d 85 94 f4 ff ff    	lea    -0xb6c(%ebp),%eax
 8350f6e:	89 04 24             	mov    %eax,(%esp)
 8350f71:	e8 b9 69 74 00       	call   8a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>
 8350f76:	83 f0 01             	xor    $0x1,%eax
 8350f79:	84 c0                	test   %al,%al
 8350f7b:	74 1f                	je     8350f9c <_ZN10CSkillList4initEv+0x376>
 8350f7d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350f84:	c7 04 24 2f 00 c3 08 	movl   $0x8c3002f,(%esp)
 8350f8b:	e8 d0 cb d2 ff       	call   807db60 <printf@plt>
 8350f90:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350f95:	be 00 00 00 00       	mov    $0x0,%esi
 8350f9a:	eb 6b                	jmp    8351007 <_ZN10CSkillList4initEv+0x3e1>
 8350f9c:	e8 13 bc 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8350fa1:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8350fa8:	00 
 8350fa9:	8b 55 90             	mov    -0x70(%ebp),%edx
 8350fac:	89 54 24 08          	mov    %edx,0x8(%esp)
 8350fb0:	8d 95 94 f4 ff ff    	lea    -0xb6c(%ebp),%edx
 8350fb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350fba:	89 04 24             	mov    %eax,(%esp)
 8350fbd:	e8 46 1e 2d 00       	call   8622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>
 8350fc2:	83 f0 01             	xor    $0x1,%eax
 8350fc5:	84 c0                	test   %al,%al
 8350fc7:	74 1f                	je     8350fe8 <_ZN10CSkillList4initEv+0x3c2>
 8350fc9:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8350fcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350fd0:	c7 04 24 65 00 c3 08 	movl   $0x8c30065,(%esp)
 8350fd7:	e8 84 cb d2 ff       	call   807db60 <printf@plt>
 8350fdc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8350fe1:	be 00 00 00 00       	mov    $0x0,%esi
 8350fe6:	eb 1f                	jmp    8351007 <_ZN10CSkillList4initEv+0x3e1>
 8350fe8:	be 01 00 00 00       	mov    $0x1,%esi
 8350fed:	eb 18                	jmp    8351007 <_ZN10CSkillList4initEv+0x3e1>
 8350fef:	89 d3                	mov    %edx,%ebx
 8350ff1:	89 c6                	mov    %eax,%esi
 8350ff3:	8d 85 94 f4 ff ff    	lea    -0xb6c(%ebp),%eax
 8350ff9:	89 04 24             	mov    %eax,(%esp)
 8350ffc:	e8 f9 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351001:	89 f0                	mov    %esi,%eax
 8351003:	89 da                	mov    %ebx,%edx
 8351005:	eb 20                	jmp    8351027 <_ZN10CSkillList4initEv+0x401>
 8351007:	8d 85 94 f4 ff ff    	lea    -0xb6c(%ebp),%eax
 835100d:	89 04 24             	mov    %eax,(%esp)
 8351010:	e8 e5 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351015:	85 f6                	test   %esi,%esi
 8351017:	75 07                	jne    8351020 <_ZN10CSkillList4initEv+0x3fa>
 8351019:	be 00 00 00 00       	mov    $0x0,%esi
 835101e:	eb 1f                	jmp    835103f <_ZN10CSkillList4initEv+0x419>
 8351020:	be 01 00 00 00       	mov    $0x1,%esi
 8351025:	eb 18                	jmp    835103f <_ZN10CSkillList4initEv+0x419>
 8351027:	89 d3                	mov    %edx,%ebx
 8351029:	89 c6                	mov    %eax,%esi
 835102b:	8d 85 40 f7 ff ff    	lea    -0x8c0(%ebp),%eax
 8351031:	89 04 24             	mov    %eax,(%esp)
 8351034:	e8 c1 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351039:	89 f0                	mov    %esi,%eax
 835103b:	89 da                	mov    %ebx,%edx
 835103d:	eb 20                	jmp    835105f <_ZN10CSkillList4initEv+0x439>
 835103f:	8d 85 40 f7 ff ff    	lea    -0x8c0(%ebp),%eax
 8351045:	89 04 24             	mov    %eax,(%esp)
 8351048:	e8 ad 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 835104d:	85 f6                	test   %esi,%esi
 835104f:	75 07                	jne    8351058 <_ZN10CSkillList4initEv+0x432>
 8351051:	be 00 00 00 00       	mov    $0x0,%esi
 8351056:	eb 22                	jmp    835107a <_ZN10CSkillList4initEv+0x454>
 8351058:	be 01 00 00 00       	mov    $0x1,%esi
 835105d:	eb 1b                	jmp    835107a <_ZN10CSkillList4initEv+0x454>
 835105f:	89 d3                	mov    %edx,%ebx
 8351061:	89 c6                	mov    %eax,%esi
 8351063:	8d 85 ec f9 ff ff    	lea    -0x614(%ebp),%eax
 8351069:	89 04 24             	mov    %eax,(%esp)
 835106c:	e8 89 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351071:	89 f0                	mov    %esi,%eax
 8351073:	89 da                	mov    %ebx,%edx
 8351075:	e9 f2 08 00 00       	jmp    835196c <_ZN10CSkillList4initEv+0xd46>
 835107a:	8d 85 ec f9 ff ff    	lea    -0x614(%ebp),%eax
 8351080:	89 04 24             	mov    %eax,(%esp)
 8351083:	e8 72 90 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351088:	85 f6                	test   %esi,%esi
 835108a:	0f 84 fa 08 00 00    	je     835198a <_ZN10CSkillList4initEv+0xd64>
 8351090:	c7 04 24 9c 01 00 00 	movl   $0x19c,(%esp)
 8351097:	e8 b4 33 3d 00       	call   8724450 <_Znwj>
 835109c:	89 c6                	mov    %eax,%esi
 835109e:	89 f0                	mov    %esi,%eax
 83510a0:	89 04 24             	mov    %eax,(%esp)
 83510a3:	e8 9c 38 02 00       	call   8374944 <_ZN6CSkillC1Ev>
 83510a8:	eb 15                	jmp    83510bf <_ZN10CSkillList4initEv+0x499>
 83510aa:	89 d3                	mov    %edx,%ebx
 83510ac:	89 c7                	mov    %eax,%edi
 83510ae:	89 34 24             	mov    %esi,(%esp)
 83510b1:	e8 3a 34 3d 00       	call   87244f0 <_ZdlPv>
 83510b6:	89 f8                	mov    %edi,%eax
 83510b8:	89 da                	mov    %ebx,%edx
 83510ba:	e9 ad 08 00 00       	jmp    835196c <_ZN10CSkillList4initEv+0xd46>
 83510bf:	89 75 84             	mov    %esi,-0x7c(%ebp)
 83510c2:	8b 85 98 fc ff ff    	mov    -0x368(%ebp),%eax
 83510c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83510cc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83510cf:	89 04 24             	mov    %eax,(%esp)
 83510d2:	e8 95 3a 02 00       	call   8374b6c <_ZN6CSkill9set_indexEi>
 83510d7:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83510dd:	05 dc 01 00 00       	add    $0x1dc,%eax
 83510e2:	89 04 24             	mov    %eax,(%esp)
 83510e5:	e8 d6 d0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83510ea:	89 c2                	mov    %eax,%edx
 83510ec:	0f b6 85 f8 fe ff ff 	movzbl -0x108(%ebp),%eax
 83510f3:	0f b6 c0             	movzbl %al,%eax
 83510f6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83510fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 83510fe:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351104:	83 c0 60             	add    $0x60,%eax
 8351107:	89 44 24 04          	mov    %eax,0x4(%esp)
 835110b:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835110e:	89 04 24             	mov    %eax,(%esp)
 8351111:	e8 d2 f6 ff ff       	call   83507e8 <_ZN6CSkill18reform_ui_group_noERibi>
 8351116:	8b 85 f8 fc ff ff    	mov    -0x308(%ebp),%eax
 835111c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351120:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351123:	89 04 24             	mov    %eax,(%esp)
 8351126:	e8 59 3a 02 00       	call   8374b84 <_ZN6CSkill9set_groupEi>
 835112b:	8b 45 90             	mov    -0x70(%ebp),%eax
 835112e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351132:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351135:	89 04 24             	mov    %eax,(%esp)
 8351138:	e8 67 3a 02 00       	call   8374ba4 <_ZN6CSkill12set_job_typeEi>
 835113d:	8b 85 f4 fc ff ff    	mov    -0x30c(%ebp),%eax
 8351143:	0f be c0             	movsbl %al,%eax
 8351146:	89 44 24 04          	mov    %eax,0x4(%esp)
 835114a:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835114d:	89 04 24             	mov    %eax,(%esp)
 8351150:	e8 5d 3a 02 00       	call   8374bb2 <_ZN6CSkill14set_skill_typeEc>
 8351155:	8b 85 c8 fc ff ff    	mov    -0x338(%ebp),%eax
 835115b:	89 44 24 04          	mov    %eax,0x4(%esp)
 835115f:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351162:	89 04 24             	mov    %eax,(%esp)
 8351165:	e8 60 3a 02 00       	call   8374bca <_ZN6CSkill15set_level_limitEi>
 835116a:	8b 95 cc fc ff ff    	mov    -0x334(%ebp),%edx
 8351170:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351173:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 8351179:	0f b6 85 80 fe ff ff 	movzbl -0x180(%ebp),%eax
 8351180:	0f b6 c0             	movzbl %al,%eax
 8351183:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351187:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835118a:	89 04 24             	mov    %eax,(%esp)
 835118d:	e8 9a 39 02 00       	call   8374b2c <_ZN6CSkill12SetStealableEb>
 8351192:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 8351198:	89 44 24 04          	mov    %eax,0x4(%esp)
 835119c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835119f:	89 04 24             	mov    %eax,(%esp)
 83511a2:	e8 a1 39 02 00       	call   8374b48 <_ZN6CSkill20SetStealLevelPenaltyEi>
 83511a7:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 83511ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 83511b1:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83511b4:	89 04 24             	mov    %eax,(%esp)
 83511b7:	e8 9e 39 02 00       	call   8374b5a <_ZN6CSkill17SetStealSPPenaltyEi>
 83511bc:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 83511c3:	eb 36                	jmp    83511fb <_ZN10CSkillList4initEv+0x5d5>
 83511c5:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83511c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83511cc:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83511d2:	05 dc 01 00 00       	add    $0x1dc,%eax
 83511d7:	89 04 24             	mov    %eax,(%esp)
 83511da:	e8 fd cf d3 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 83511df:	8b 10                	mov    (%eax),%edx
 83511e1:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83511e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 83511e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83511ec:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83511ef:	89 04 24             	mov    %eax,(%esp)
 83511f2:	e8 23 3a 02 00       	call   8374c1a <_ZN6CSkill15set_fitGrowTypeEii>
 83511f7:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 83511fb:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351201:	05 dc 01 00 00       	add    $0x1dc,%eax
 8351206:	89 04 24             	mov    %eax,(%esp)
 8351209:	e8 b2 cf d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 835120e:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 8351211:	0f 97 c0             	seta   %al
 8351214:	84 c0                	test   %al,%al
 8351216:	75 ad                	jne    83511c5 <_ZN10CSkillList4initEv+0x59f>
 8351218:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 835121f:	eb 27                	jmp    8351248 <_ZN10CSkillList4initEv+0x622>
 8351221:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8351224:	83 c0 18             	add    $0x18,%eax
 8351227:	8b 84 85 9c fc ff ff 	mov    -0x364(%ebp,%eax,4),%eax
 835122e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8351232:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8351235:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351239:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835123c:	89 04 24             	mov    %eax,(%esp)
 835123f:	e8 98 39 02 00       	call   8374bdc <_ZN6CSkill11set_fitnessEii>
 8351244:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 8351248:	83 7d ac 05          	cmpl   $0x5,-0x54(%ebp)
 835124c:	0f 9e c0             	setle  %al
 835124f:	84 c0                	test   %al,%al
 8351251:	75 ce                	jne    8351221 <_ZN10CSkillList4initEv+0x5fb>
 8351253:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 835125a:	eb 27                	jmp    8351283 <_ZN10CSkillList4initEv+0x65d>
 835125c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 835125f:	83 c0 1c             	add    $0x1c,%eax
 8351262:	8b 84 85 a4 fc ff ff 	mov    -0x35c(%ebp,%eax,4),%eax
 8351269:	89 44 24 08          	mov    %eax,0x8(%esp)
 835126d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8351270:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351274:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351277:	89 04 24             	mov    %eax,(%esp)
 835127a:	e8 73 39 02 00       	call   8374bf2 <_ZN6CSkill18set_type_max_levelEii>
 835127f:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 8351283:	83 7d b0 05          	cmpl   $0x5,-0x50(%ebp)
 8351287:	0f 9e c0             	setle  %al
 835128a:	84 c0                	test   %al,%al
 835128c:	75 ce                	jne    835125c <_ZN10CSkillList4initEv+0x636>
 835128e:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8351295:	eb 70                	jmp    8351307 <_ZN10CSkillList4initEv+0x6e1>
 8351297:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835129d:	05 f4 00 00 00       	add    $0xf4,%eax
 83512a2:	89 04 24             	mov    %eax,(%esp)
 83512a5:	e8 b6 b6 dc ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 83512aa:	83 f0 01             	xor    $0x1,%eax
 83512ad:	84 c0                	test   %al,%al
 83512af:	74 52                	je     8351303 <_ZN10CSkillList4initEv+0x6dd>
 83512b1:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83512b7:	05 f4 00 00 00       	add    $0xf4,%eax
 83512bc:	89 04 24             	mov    %eax,(%esp)
 83512bf:	e8 fc ce d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83512c4:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 83512c7:	0f 97 c0             	seta   %al
 83512ca:	84 c0                	test   %al,%al
 83512cc:	74 35                	je     8351303 <_ZN10CSkillList4initEv+0x6dd>
 83512ce:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83512d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83512d5:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83512db:	05 f4 00 00 00       	add    $0xf4,%eax
 83512e0:	89 04 24             	mov    %eax,(%esp)
 83512e3:	e8 f4 ce d3 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 83512e8:	8b 10                	mov    (%eax),%edx
 83512ea:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83512ed:	83 c0 01             	add    $0x1,%eax
 83512f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 83512f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83512f8:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83512fb:	89 04 24             	mov    %eax,(%esp)
 83512fe:	e8 ab f3 ff ff       	call   83506ae <_ZN6CSkill27set_fitness_second_growtypeEii>
 8351303:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 8351307:	83 7d b4 01          	cmpl   $0x1,-0x4c(%ebp)
 835130b:	0f 96 c0             	setbe  %al
 835130e:	84 c0                	test   %al,%al
 8351310:	75 85                	jne    8351297 <_ZN10CSkillList4initEv+0x671>
 8351312:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8351319:	eb 52                	jmp    835136d <_ZN10CSkillList4initEv+0x747>
 835131b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8351322:	eb 3a                	jmp    835135e <_ZN10CSkillList4initEv+0x738>
 8351324:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8351327:	8b 45 bc             	mov    -0x44(%ebp),%eax
 835132a:	c1 e2 02             	shl    $0x2,%edx
 835132d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8351330:	83 c0 24             	add    $0x24,%eax
 8351333:	8b 84 85 9c fc ff ff 	mov    -0x364(%ebp,%eax,4),%eax
 835133a:	8b 55 bc             	mov    -0x44(%ebp),%edx
 835133d:	83 c2 01             	add    $0x1,%edx
 8351340:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8351344:	89 54 24 08          	mov    %edx,0x8(%esp)
 8351348:	8b 45 b8             	mov    -0x48(%ebp),%eax
 835134b:	89 44 24 04          	mov    %eax,0x4(%esp)
 835134f:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351352:	89 04 24             	mov    %eax,(%esp)
 8351355:	e8 20 f2 ff ff       	call   835057a <_ZN6CSkill27set_second_growtype_fitnessEiii>
 835135a:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 835135e:	83 7d bc 01          	cmpl   $0x1,-0x44(%ebp)
 8351362:	0f 9e c0             	setle  %al
 8351365:	84 c0                	test   %al,%al
 8351367:	75 bb                	jne    8351324 <_ZN10CSkillList4initEv+0x6fe>
 8351369:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 835136d:	83 7d b8 05          	cmpl   $0x5,-0x48(%ebp)
 8351371:	0f 9e c0             	setle  %al
 8351374:	84 c0                	test   %al,%al
 8351376:	75 a3                	jne    835131b <_ZN10CSkillList4initEv+0x6f5>
 8351378:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 835137f:	eb 52                	jmp    83513d3 <_ZN10CSkillList4initEv+0x7ad>
 8351381:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8351388:	eb 3a                	jmp    83513c4 <_ZN10CSkillList4initEv+0x79e>
 835138a:	8b 55 c0             	mov    -0x40(%ebp),%edx
 835138d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8351390:	c1 e2 02             	shl    $0x2,%edx
 8351393:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8351396:	83 c0 24             	add    $0x24,%eax
 8351399:	8b 84 85 a4 fc ff ff 	mov    -0x35c(%ebp,%eax,4),%eax
 83513a0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 83513a3:	83 c2 01             	add    $0x1,%edx
 83513a6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83513aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 83513ae:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83513b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83513b5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83513b8:	89 04 24             	mov    %eax,(%esp)
 83513bb:	e8 54 f2 ff ff       	call   8350614 <_ZN6CSkill29set_second_growtype_max_levelEiii>
 83513c0:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 83513c4:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 83513c8:	0f 9e c0             	setle  %al
 83513cb:	84 c0                	test   %al,%al
 83513cd:	75 bb                	jne    835138a <_ZN10CSkillList4initEv+0x764>
 83513cf:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 83513d3:	83 7d c0 05          	cmpl   $0x5,-0x40(%ebp)
 83513d7:	0f 9e c0             	setle  %al
 83513da:	84 c0                	test   %al,%al
 83513dc:	75 a3                	jne    8351381 <_ZN10CSkillList4initEv+0x75b>
 83513de:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83513e4:	83 c0 18             	add    $0x18,%eax
 83513e7:	89 04 24             	mov    %eax,(%esp)
 83513ea:	e8 d1 cd d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83513ef:	89 45 94             	mov    %eax,-0x6c(%ebp)
 83513f2:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83513f9:	eb 2d                	jmp    8351428 <_ZN10CSkillList4initEv+0x802>
 83513fb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83513fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351402:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351408:	83 c0 18             	add    $0x18,%eax
 835140b:	89 04 24             	mov    %eax,(%esp)
 835140e:	e8 5f 58 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8351413:	8b 00                	mov    (%eax),%eax
 8351415:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351419:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835141c:	89 04 24             	mov    %eax,(%esp)
 835141f:	e8 c4 eb ff ff       	call   834ffe8 <_ZN6CSkill11add_need_spEi>
 8351424:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8351428:	8b 45 c8             	mov    -0x38(%ebp),%eax
 835142b:	3b 45 94             	cmp    -0x6c(%ebp),%eax
 835142e:	0f 9c c0             	setl   %al
 8351431:	84 c0                	test   %al,%al
 8351433:	75 c6                	jne    83513fb <_ZN10CSkillList4initEv+0x7d5>
 8351435:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835143b:	83 c0 24             	add    $0x24,%eax
 835143e:	89 04 24             	mov    %eax,(%esp)
 8351441:	e8 7a cd d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8351446:	89 45 98             	mov    %eax,-0x68(%ebp)
 8351449:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8351450:	eb 2d                	jmp    835147f <_ZN10CSkillList4initEv+0x859>
 8351452:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8351455:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351459:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835145f:	83 c0 24             	add    $0x24,%eax
 8351462:	89 04 24             	mov    %eax,(%esp)
 8351465:	e8 08 58 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 835146a:	8b 00                	mov    (%eax),%eax
 835146c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351470:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351473:	89 04 24             	mov    %eax,(%esp)
 8351476:	e8 8b eb ff ff       	call   8350006 <_ZN6CSkill12add_need_sfpEi>
 835147b:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 835147f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8351482:	3b 45 98             	cmp    -0x68(%ebp),%eax
 8351485:	0f 9c c0             	setl   %al
 8351488:	84 c0                	test   %al,%al
 835148a:	75 c6                	jne    8351452 <_ZN10CSkillList4initEv+0x82c>
 835148c:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351492:	83 c0 44             	add    $0x44,%eax
 8351495:	89 04 24             	mov    %eax,(%esp)
 8351498:	e8 23 cd d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 835149d:	89 45 9c             	mov    %eax,-0x64(%ebp)
 83514a0:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 83514a7:	eb 6d                	jmp    8351516 <_ZN10CSkillList4initEv+0x8f0>
 83514a9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83514ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 83514b0:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83514b6:	83 c0 44             	add    $0x44,%eax
 83514b9:	89 04 24             	mov    %eax,(%esp)
 83514bc:	e8 b1 57 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 83514c1:	8b 00                	mov    (%eax),%eax
 83514c3:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 83514c9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83514cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 83514d0:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83514d6:	83 c0 50             	add    $0x50,%eax
 83514d9:	89 04 24             	mov    %eax,(%esp)
 83514dc:	e8 91 57 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 83514e1:	8b 00                	mov    (%eax),%eax
 83514e3:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 83514e9:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 83514ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 83514f3:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 83514f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 83514fd:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8351503:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8351507:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835150a:	89 04 24             	mov    %eax,(%esp)
 835150d:	e8 b8 ea ff ff       	call   834ffca <_ZN6CSkill17add_learned_skillE10_pre_skill>
 8351512:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8351516:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8351519:	3b 45 9c             	cmp    -0x64(%ebp),%eax
 835151c:	0f 9c c0             	setl   %al
 835151f:	84 c0                	test   %al,%al
 8351521:	75 86                	jne    83514a9 <_ZN10CSkillList4initEv+0x883>
 8351523:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351529:	05 04 02 00 00       	add    $0x204,%eax
 835152e:	89 04 24             	mov    %eax,(%esp)
 8351531:	e8 8a cc d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8351536:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8351539:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8351540:	eb 33                	jmp    8351575 <_ZN10CSkillList4initEv+0x94f>
 8351542:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8351545:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351549:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835154f:	05 04 02 00 00       	add    $0x204,%eax
 8351554:	89 04 24             	mov    %eax,(%esp)
 8351557:	e8 16 57 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 835155c:	8b 55 84             	mov    -0x7c(%ebp),%edx
 835155f:	81 c2 e4 00 00 00    	add    $0xe4,%edx
 8351565:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351569:	89 14 24             	mov    %edx,(%esp)
 835156c:	e8 b5 fb db ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8351571:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8351575:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8351578:	3b 45 a0             	cmp    -0x60(%ebp),%eax
 835157b:	0f 9c c0             	setl   %al
 835157e:	84 c0                	test   %al,%al
 8351580:	75 c0                	jne    8351542 <_ZN10CSkillList4initEv+0x91c>
 8351582:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351588:	05 10 02 00 00       	add    $0x210,%eax
 835158d:	89 04 24             	mov    %eax,(%esp)
 8351590:	e8 2b cc d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8351595:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8351598:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 835159f:	eb 33                	jmp    83515d4 <_ZN10CSkillList4initEv+0x9ae>
 83515a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83515a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83515a8:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83515ae:	05 10 02 00 00       	add    $0x210,%eax
 83515b3:	89 04 24             	mov    %eax,(%esp)
 83515b6:	e8 b7 56 d4 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 83515bb:	8b 55 84             	mov    -0x7c(%ebp),%edx
 83515be:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 83515c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83515c8:	89 14 24             	mov    %edx,(%esp)
 83515cb:	e8 56 fb db ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 83515d0:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 83515d4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83515d7:	3b 45 a4             	cmp    -0x5c(%ebp),%eax
 83515da:	0f 9c c0             	setl   %al
 83515dd:	84 c0                	test   %al,%al
 83515df:	75 c0                	jne    83515a1 <_ZN10CSkillList4initEv+0x97b>
 83515e1:	8b 95 d4 fc ff ff    	mov    -0x32c(%ebp),%edx
 83515e7:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83515ea:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 83515f0:	8b 95 d8 fc ff ff    	mov    -0x328(%ebp),%edx
 83515f6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83515f9:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 83515ff:	8b 95 ac fc ff ff    	mov    -0x354(%ebp),%edx
 8351605:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351608:	89 90 04 01 00 00    	mov    %edx,0x104(%eax)
 835160e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8351615:	e9 0c 01 00 00       	jmp    8351726 <_ZN10CSkillList4initEv+0xb00>
 835161a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8351620:	89 04 24             	mov    %eax,(%esp)
 8351623:	e8 84 cb d3 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8351628:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 835162f:	eb 7b                	jmp    83516ac <_ZN10CSkillList4initEv+0xa86>
 8351631:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8351634:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351638:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835163e:	05 a8 01 00 00       	add    $0x1a8,%eax
 8351643:	89 04 24             	mov    %eax,(%esp)
 8351646:	e8 dd e1 03 00       	call   838f828 <_ZNSt6vectorIS_IfSaIfEESaIS1_EEixEj>
 835164b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 835164e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351652:	89 04 24             	mov    %eax,(%esp)
 8351655:	e8 e8 e1 03 00       	call   838f842 <_ZNSt6vectorIfSaIfEE2atEj>
 835165a:	d9 00                	flds   (%eax)
 835165c:	d9 bd 76 f4 ff ff    	fnstcw -0xb8a(%ebp)
 8351662:	0f b7 85 76 f4 ff ff 	movzwl -0xb8a(%ebp),%eax
 8351669:	b4 0c                	mov    $0xc,%ah
 835166b:	66 89 85 74 f4 ff ff 	mov    %ax,-0xb8c(%ebp)
 8351672:	d9 ad 74 f4 ff ff    	fldcw  -0xb8c(%ebp)
 8351678:	db 9d 70 f4 ff ff    	fistpl -0xb90(%ebp)
 835167e:	d9 ad 76 f4 ff ff    	fldcw  -0xb8a(%ebp)
 8351684:	8b 85 70 f4 ff ff    	mov    -0xb90(%ebp),%eax
 835168a:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8351690:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8351696:	89 44 24 04          	mov    %eax,0x4(%esp)
 835169a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 83516a0:	89 04 24             	mov    %eax,(%esp)
 83516a3:	e8 46 cb d3 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 83516a8:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 83516ac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83516af:	89 44 24 04          	mov    %eax,0x4(%esp)
 83516b3:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 83516b9:	05 a8 01 00 00       	add    $0x1a8,%eax
 83516be:	89 04 24             	mov    %eax,(%esp)
 83516c1:	e8 62 e1 03 00       	call   838f828 <_ZNSt6vectorIS_IfSaIfEESaIS1_EEixEj>
 83516c6:	89 04 24             	mov    %eax,(%esp)
 83516c9:	e8 20 fa f9 ff       	call   82f10ee <_ZNKSt6vectorIfSaIfEE4sizeEv>
 83516ce:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 83516d1:	0f 97 c0             	seta   %al
 83516d4:	84 c0                	test   %al,%al
 83516d6:	0f 85 55 ff ff ff    	jne    8351631 <_ZN10CSkillList4initEv+0xa0b>
 83516dc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83516df:	8d 90 08 01 00 00    	lea    0x108(%eax),%edx
 83516e5:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 83516eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 83516ef:	89 14 24             	mov    %edx,(%esp)
 83516f2:	e8 77 e1 03 00       	call   838f86e <_ZNSt6vectorIS_IiSaIiEESaIS1_EE9push_backERKS1_>
 83516f7:	eb 1b                	jmp    8351714 <_ZN10CSkillList4initEv+0xaee>
 83516f9:	89 d3                	mov    %edx,%ebx
 83516fb:	89 c6                	mov    %eax,%esi
 83516fd:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8351703:	89 04 24             	mov    %eax,(%esp)
 8351706:	e8 cf 26 d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 835170b:	89 f0                	mov    %esi,%eax
 835170d:	89 da                	mov    %ebx,%edx
 835170f:	e9 58 02 00 00       	jmp    835196c <_ZN10CSkillList4initEv+0xd46>
 8351714:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 835171a:	89 04 24             	mov    %eax,(%esp)
 835171d:	e8 b8 26 d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8351722:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8351726:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835172c:	05 a8 01 00 00       	add    $0x1a8,%eax
 8351731:	89 04 24             	mov    %eax,(%esp)
 8351734:	e8 cd e0 03 00       	call   838f806 <_ZNKSt6vectorIS_IfSaIfEESaIS1_EE4sizeEv>
 8351739:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 835173c:	0f 97 c0             	seta   %al
 835173f:	84 c0                	test   %al,%al
 8351741:	0f 85 d3 fe ff ff    	jne    835161a <_ZN10CSkillList4initEv+0x9f4>
 8351747:	0f b6 85 f8 fe ff ff 	movzbl -0x108(%ebp),%eax
 835174e:	89 c2                	mov    %eax,%edx
 8351750:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351753:	88 90 20 01 00 00    	mov    %dl,0x120(%eax)
 8351759:	8b 45 84             	mov    -0x7c(%ebp),%eax
 835175c:	05 24 01 00 00       	add    $0x124,%eax
 8351761:	8d 95 98 fc ff ff    	lea    -0x368(%ebp),%edx
 8351767:	81 c2 70 01 00 00    	add    $0x170,%edx
 835176d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351771:	89 04 24             	mov    %eax,(%esp)
 8351774:	e8 69 e1 03 00       	call   838f8e2 <_ZNSt6vectorI16STKeyCommandUnitSaIS0_EEaSERKS2_>
 8351779:	0f b6 95 18 ff ff ff 	movzbl -0xe8(%ebp),%edx
 8351780:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8351783:	88 90 30 01 00 00    	mov    %dl,0x130(%eax)
 8351789:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 835178f:	83 c0 04             	add    $0x4,%eax
 8351792:	89 04 24             	mov    %eax,(%esp)
 8351795:	e8 56 4d 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 835179a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835179e:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83517a1:	89 04 24             	mov    %eax,(%esp)
 83517a4:	e8 87 34 02 00       	call   8374c30 <_ZN6CSkill12setSkillNameEPKc>
 83517a9:	8b 95 d0 fc ff ff    	mov    -0x330(%ebp),%edx
 83517af:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83517b2:	89 90 98 01 00 00    	mov    %edx,0x198(%eax)
 83517b8:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83517bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 83517bf:	8b 45 90             	mov    -0x70(%ebp),%eax
 83517c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 83517c6:	8b 45 08             	mov    0x8(%ebp),%eax
 83517c9:	89 04 24             	mov    %eax,(%esp)
 83517cc:	e8 d5 01 00 00       	call   83519a6 <_ZN10CSkillList12insert_skillEiP6CSkill>
 83517d1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83517d7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83517de:	00 
 83517df:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 83517e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83517e9:	89 04 24             	mov    %eax,(%esp)
 83517ec:	e8 f3 fe fe ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 83517f1:	83 ec 04             	sub    $0x4,%esp
 83517f4:	83 45 88 01          	addl   $0x1,-0x78(%ebp)
 83517f8:	8b 55 90             	mov    -0x70(%ebp),%edx
 83517fb:	89 d0                	mov    %edx,%eax
 83517fd:	01 c0                	add    %eax,%eax
 83517ff:	01 d0                	add    %edx,%eax
 8351801:	c1 e0 03             	shl    $0x3,%eax
 8351804:	8d 90 20 08 50 09    	lea    0x9500820(%eax),%edx
 835180a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8351810:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351814:	89 04 24             	mov    %eax,(%esp)
 8351817:	e8 fc 48 d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 835181c:	83 ec 04             	sub    $0x4,%esp
 835181f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8351825:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351829:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 835182f:	89 04 24             	mov    %eax,(%esp)
 8351832:	e8 07 49 d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8351837:	84 c0                	test   %al,%al
 8351839:	0f 85 82 f4 ff ff    	jne    8350cc1 <_ZN10CSkillList4initEv+0x9b>
 835183f:	eb 01                	jmp    8351842 <_ZN10CSkillList4initEv+0xc1c>
 8351841:	90                   	nop
 8351842:	83 45 90 01          	addl   $0x1,-0x70(%ebp)
 8351846:	83 7d 90 0a          	cmpl   $0xa,-0x70(%ebp)
 835184a:	0f 9e c0             	setle  %al
 835184d:	84 c0                	test   %al,%al
 835184f:	0f 85 34 f4 ff ff    	jne    8350c89 <_ZN10CSkillList4initEv+0x63>
 8351855:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 835185c:	e9 f5 00 00 00       	jmp    8351956 <_ZN10CSkillList4initEv+0xd30>
 8351861:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8351867:	89 04 24             	mov    %eax,(%esp)
 835186a:	e8 e9 e2 03 00       	call   838fb58 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 835186f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8351872:	89 d0                	mov    %edx,%eax
 8351874:	c1 e0 02             	shl    $0x2,%eax
 8351877:	01 d0                	add    %edx,%eax
 8351879:	c1 e0 02             	shl    $0x2,%eax
 835187c:	89 c2                	mov    %eax,%edx
 835187e:	03 55 08             	add    0x8(%ebp),%edx
 8351881:	8d 85 78 f4 ff ff    	lea    -0xb88(%ebp),%eax
 8351887:	89 54 24 04          	mov    %edx,0x4(%esp)
 835188b:	89 04 24             	mov    %eax,(%esp)
 835188e:	e8 45 de 03 00       	call   838f6d8 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8351893:	83 ec 04             	sub    $0x4,%esp
 8351896:	8b 85 78 f4 ff ff    	mov    -0xb88(%ebp),%eax
 835189c:	8b 95 7c f4 ff ff    	mov    -0xb84(%ebp),%edx
 83518a2:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 83518a8:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 83518ae:	eb 5b                	jmp    835190b <_ZN10CSkillList4initEv+0xce5>
 83518b0:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 83518b6:	89 04 24             	mov    %eax,(%esp)
 83518b9:	e8 a0 e2 03 00       	call   838fb5e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 83518be:	8b 40 04             	mov    0x4(%eax),%eax
 83518c1:	89 45 84             	mov    %eax,-0x7c(%ebp)
 83518c4:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83518c7:	89 04 24             	mov    %eax,(%esp)
 83518ca:	e8 55 e7 ff ff       	call   8350024 <_ZN6CSkill20set_prelearned_skillEv>
 83518cf:	8b 45 84             	mov    -0x7c(%ebp),%eax
 83518d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 83518d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83518d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83518dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83518e0:	89 04 24             	mov    %eax,(%esp)
 83518e3:	e8 30 05 00 00       	call   8351e18 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill>
 83518e8:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 83518ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83518f5:	00 
 83518f6:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 83518fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351900:	89 04 24             	mov    %eax,(%esp)
 8351903:	e8 6a e2 03 00       	call   838fb72 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 8351908:	83 ec 04             	sub    $0x4,%esp
 835190b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 835190e:	89 d0                	mov    %edx,%eax
 8351910:	c1 e0 02             	shl    $0x2,%eax
 8351913:	01 d0                	add    %edx,%eax
 8351915:	c1 e0 02             	shl    $0x2,%eax
 8351918:	89 c2                	mov    %eax,%edx
 835191a:	03 55 08             	add    0x8(%ebp),%edx
 835191d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8351923:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351927:	89 04 24             	mov    %eax,(%esp)
 835192a:	e8 cf dd 03 00       	call   838f6fe <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 835192f:	83 ec 04             	sub    $0x4,%esp
 8351932:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8351938:	89 44 24 04          	mov    %eax,0x4(%esp)
 835193c:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8351942:	89 04 24             	mov    %eax,(%esp)
 8351945:	e8 da dd 03 00       	call   838f724 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 835194a:	84 c0                	test   %al,%al
 835194c:	0f 85 5e ff ff ff    	jne    83518b0 <_ZN10CSkillList4initEv+0xc8a>
 8351952:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8351956:	83 7d e4 0a          	cmpl   $0xa,-0x1c(%ebp)
 835195a:	0f 9e c0             	setle  %al
 835195d:	84 c0                	test   %al,%al
 835195f:	0f 85 fc fe ff ff    	jne    8351861 <_ZN10CSkillList4initEv+0xc3b>
 8351965:	bb 01 00 00 00       	mov    $0x1,%ebx
 835196a:	eb 1e                	jmp    835198a <_ZN10CSkillList4initEv+0xd64>
 835196c:	89 d3                	mov    %edx,%ebx
 835196e:	89 c6                	mov    %eax,%esi
 8351970:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351976:	89 04 24             	mov    %eax,(%esp)
 8351979:	e8 7c 87 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 835197e:	89 f0                	mov    %esi,%eax
 8351980:	89 da                	mov    %ebx,%edx
 8351982:	89 04 24             	mov    %eax,(%esp)
 8351985:	e8 c6 1d 79 00       	call   8ae3750 <_Unwind_Resume>
 835198a:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 8351990:	89 04 24             	mov    %eax,(%esp)
 8351993:	e8 62 87 02 00       	call   837a0fa <_ZN13STSkillScriptD1Ev>
 8351998:	89 d8                	mov    %ebx,%eax
 835199a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 835199d:	83 c4 00             	add    $0x0,%esp
 83519a0:	5b                   	pop    %ebx
 83519a1:	5e                   	pop    %esi
 83519a2:	5f                   	pop    %edi
 83519a3:	5d                   	pop    %ebp
 83519a4:	c3                   	ret
 83519a5:	90                   	nop

```

```c
// CSkillList::init @ 0x8350c26

/* CSkillList::init() */

undefined4 __thiscall CSkillList::init(CSkillList *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  CSkill *this_00;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  vector<float,std::allocator<float>> *pvVar8;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_EBX;
  undefined4 local_b8c;
  undefined4 local_b88;
  undefined4 local_b80 [4];
  STSkillScript local_b70 [684];
  STSkillScript local_8c4 [684];
  STSkillScript local_618 [684];
  int local_36c;
  string asStack_368 [8];
  int aiStack_360 [3];
  vector<int,std::allocator<int>> avStack_354 [12];
  vector<int,std::allocator<int>> avStack_348 [12];
  int local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  vector<int,std::allocator<int>> avStack_328 [12];
  vector<int,std::allocator<int>> avStack_31c [16];
  int local_30c [37];
  vector<int,std::allocator<int>> avStack_278 [124];
  vector avStack_1fc [56];
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  avStack_1c4 [52];
  vector<int,std::allocator<int>> avStack_190 [12];
  bool local_184;
  int local_17c;
  int local_178;
  vector<int,std::allocator<int>> avStack_168 [12];
  vector<int,std::allocator<int>> avStack_15c [80];
  CSkill local_10c;
  CSkill local_ec;
  undefined4 local_c0;
  undefined4 local_bc;
  vector<int,std::allocator<int>> local_b8 [12];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_9c [4];
  int local_98;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_94 [4];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_90 [8]
  ;
  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
  local_88 [8];
  CSkill *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  
  STSkillScript::STSkillScript((STSkillScript *)&local_36c);
  local_80 = (CSkill *)0x0;
                    /* try { // try from 08350c47 to 08350de5 has its CatchHandler @ 0835196c */
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_skill_index(pCVar3);
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::trancate_skill_info(pCVar3);
  local_7c = 0;
  local_78 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac);
  local_74 = 0;
  do {
    if (10 < local_74) {
      for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
        __gnu_cxx::
        _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
        ::_Hashtable_iterator();
        __gnu_cxx::
        hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::begin
                  ((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
                    *)&local_b8c);
        local_c0 = local_b8c;
        local_bc = local_b88;
        while( true ) {
          __gnu_cxx::
          hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::end
                    (local_90);
          cVar2 = __gnu_cxx::
                  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                  ::operator!=((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                                *)&local_c0,(_Hashtable_iterator *)local_90);
          if (cVar2 == '\0') break;
          iVar10 = __gnu_cxx::
                   _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                   ::operator->((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                                 *)&local_c0);
          local_80 = *(CSkill **)(iVar10 + 4);
          CSkill::set_prelearned_skill(local_80);
          set_post_learning_skill(this,local_20,local_80);
          __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
          ::operator++(local_88,(int)&local_c0);
        }
      }
      unaff_EBX = 1;
LAB_0835198a:
      STSkillScript::~STSkillScript((STSkillScript *)&local_36c);
      return unaff_EBX;
    }
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_b80);
    local_ac = local_b80[0];
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_9c);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac,
                         (_Rb_tree_iterator *)local_9c);
      if (cVar2 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac);
      local_78 = std::string::c_str((string *)(iVar10 + 4));
      if (local_78 == 0) break;
      cVar2 = ImportSkillScript(&local_36c,local_78,local_74,0,0xffffffff);
      if (cVar2 != '\x01') {
        printf("Skill Script Error: %s\n",local_78);
        unaff_EBX = 0;
        goto LAB_0835198a;
      }
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::insert_skill_index
                        (pCVar3,(STSkillScript *)&local_36c,local_74);
      if (cVar2 != '\x01') {
        printf("insert_skill_index Error: %s\n",local_78);
        unaff_EBX = 0;
        goto LAB_0835198a;
      }
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::IsEnable(pCVar3);
      if (cVar2 != '\0') {
        pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar2 = sync_script::CSyncScript::insert_skill_info
                          (pCVar3,(STSkillScript *)&local_36c,local_74,0);
        if (cVar2 != '\x01') {
          printf("insert_skill_info Error: %s\n",local_78);
          unaff_EBX = 0;
          goto LAB_0835198a;
        }
        STSkillScript::STSkillScript(local_618);
                    /* try { // try from 08350e0d to 08350e97 has its CatchHandler @ 0835105f */
        cVar2 = ImportSkillScript(local_618,local_78,local_74,4,0xffffffff);
        if (cVar2 == '\x01') {
          pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
          cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_618,local_74,4);
          if (cVar2 == '\x01') {
            STSkillScript::STSkillScript(local_8c4);
                    /* try { // try from 08350ebf to 08350f49 has its CatchHandler @ 08351027 */
            cVar2 = ImportSkillScript(local_8c4,local_78,local_74,6,0xffffffff);
            if (cVar2 == '\x01') {
              pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
              cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_8c4,local_74,6);
              if (cVar2 == '\x01') {
                STSkillScript::STSkillScript(local_b70);
                    /* try { // try from 08350f71 to 08350fdb has its CatchHandler @ 08350fef */
                cVar2 = ImportSkillScript(local_b70,local_78,local_74,0xb,0xffffffff);
                if (cVar2 == '\x01') {
                  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
                  cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_b70,local_74,0xb)
                  ;
                  if (cVar2 == '\x01') {
                    bVar1 = true;
                  }
                  else {
                    printf("insert_skill_info Error: %s\n",local_78);
                    unaff_EBX = 0;
                    bVar1 = false;
                  }
                }
                else {
                  printf("Skill Script Error: %s\n",local_78);
                  unaff_EBX = 0;
                  bVar1 = false;
                }
                    /* try { // try from 08351010 to 08351014 has its CatchHandler @ 08351027 */
                STSkillScript::~STSkillScript(local_b70);
                if (bVar1) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
              }
              else {
                printf("insert_skill_info Error: %s\n",local_78);
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
            else {
              printf("Skill Script Error: %s\n",local_78);
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 08351048 to 0835104c has its CatchHandler @ 0835105f */
            STSkillScript::~STSkillScript(local_8c4);
            if (bVar1) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            printf("insert_skill_info Error: %s\n",local_78);
            unaff_EBX = 0;
            bVar1 = false;
          }
        }
        else {
          printf("Skill Script Error: %s\n",local_78);
          unaff_EBX = 0;
          bVar1 = false;
        }
                    /* try { // try from 08351083 to 0835109b has its CatchHandler @ 0835196c */
        STSkillScript::~STSkillScript(local_618);
        if (!bVar1) goto LAB_0835198a;
      }
      this_00 = operator_new(0x19c);
                    /* try { // try from 083510a3 to 083510a7 has its CatchHandler @ 083510aa */
      CSkill::CSkill(this_00);
      local_80 = this_00;
      CSkill::set_index(this_00,local_36c);
      iVar10 = std::vector<int,std::allocator<int>>::size(avStack_190);
      CSkill::reform_ui_group_no(local_80,local_30c,(bool)local_10c,iVar10);
      CSkill::set_group(local_80,local_30c[0]);
      CSkill::set_job_type(local_80,local_74);
      CSkill::set_skill_type(local_80,(char)avStack_31c._12_4_);
      CSkill::set_level_limit(local_80,local_33c);
      *(undefined4 *)(local_80 + 200) = local_338;
      CSkill::SetStealable(local_80,local_184);
      CSkill::SetStealLevelPenalty(local_80,local_178);
      CSkill::SetStealSPPenalty(local_80,local_17c);
      local_5c = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size(avStack_190), local_5c < uVar4) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](avStack_190,local_5c);
        CSkill::set_fitGrowType(local_80,local_5c,*piVar6);
        local_5c = local_5c + 1;
      }
      for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
        CSkill::set_fitness(local_80,local_58,*(int *)(asStack_368 + (local_58 + 0x18) * 4));
      }
      for (local_54 = 0; local_54 < 6; local_54 = local_54 + 1) {
        CSkill::set_type_max_level(local_80,local_54,aiStack_360[local_54 + 0x1c]);
      }
      for (local_50 = 0; local_50 < 2; local_50 = local_50 + 1) {
                    /* try { // try from 083512a5 to 08351627 has its CatchHandler @ 0835196c */
        cVar2 = std::vector<int,std::allocator<int>>::empty();
        if ((cVar2 != '\x01') &&
           (uVar4 = std::vector<int,std::allocator<int>>::size(avStack_278), local_50 < uVar4)) {
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](avStack_278,local_50);
          CSkill::set_fitness_second_growtype(local_80,local_50 + 1,*piVar6);
        }
      }
      for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
        for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
          CSkill::set_second_growtype_fitness
                    (local_80,local_4c,local_48 + 1,
                     *(int *)(asStack_368 + (local_4c * 4 + local_48 + 0x24) * 4));
        }
      }
      for (local_44 = 0; local_44 < 6; local_44 = local_44 + 1) {
        for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
          CSkill::set_second_growtype_max_level
                    (local_80,local_44,local_40 + 1,aiStack_360[local_44 * 4 + local_40 + 0x24]);
        }
      }
      local_70 = std::vector<int,std::allocator<int>>::size(avStack_354);
      for (local_3c = 0; (int)local_3c < local_70; local_3c = local_3c + 1) {
        std::vector<int,std::allocator<int>>::at(avStack_354,local_3c);
        CSkill::add_need_sp((int)local_80);
      }
      local_6c = std::vector<int,std::allocator<int>>::size(avStack_348);
      for (local_38 = 0; (int)local_38 < local_6c; local_38 = local_38 + 1) {
        std::vector<int,std::allocator<int>>::at(avStack_348,local_38);
        CSkill::add_need_sfp((int)local_80);
      }
      local_68 = std::vector<int,std::allocator<int>>::size(avStack_328);
      for (local_34 = 0; (int)local_34 < local_68; local_34 = local_34 + 1) {
        puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::at(avStack_328,local_34);
        local_a8 = *puVar5;
        puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::at(avStack_31c,local_34);
        local_a4 = *puVar5;
        CSkill::add_learned_skill(local_80,local_a8,local_a4,local_a0);
      }
      local_64 = std::vector<int,std::allocator<int>>::size(avStack_168);
      for (local_30 = 0; (int)local_30 < local_64; local_30 = local_30 + 1) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::at(avStack_168,local_30);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_80 + 0xe4),piVar6);
      }
      local_60 = std::vector<int,std::allocator<int>>::size(avStack_15c);
      for (local_2c = 0; (int)local_2c < local_60; local_2c = local_2c + 1) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::at(avStack_15c,local_2c);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_80 + 0xf0),piVar6);
      }
      *(undefined4 *)(local_80 + 0xfc) = local_330;
      *(undefined4 *)(local_80 + 0x100) = local_32c;
      *(int *)(local_80 + 0x104) = aiStack_360[2];
      local_28 = 0;
      while (uVar4 = std::
                     vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                     ::size(avStack_1c4), local_28 < uVar4) {
        std::vector<int,std::allocator<int>>::vector(local_b8);
        local_24 = 0;
        while( true ) {
          pvVar8 = (vector<float,std::allocator<float>> *)
                   std::
                   vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                   ::operator[](avStack_1c4,local_28);
          uVar4 = std::vector<float,std::allocator<float>>::size(pvVar8);
          if (uVar4 <= local_24) break;
          pvVar8 = (vector<float,std::allocator<float>> *)
                   std::
                   vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                   ::operator[](avStack_1c4,local_28);
                    /* try { // try from 08351655 to 083516f6 has its CatchHandler @ 083516f9 */
          pfVar7 = (float *)std::vector<float,std::allocator<float>>::at(pvVar8,local_24);
          local_98 = (int)ROUND(*pfVar7);
          std::vector<int,std::allocator<int>>::push_back(local_b8,&local_98);
          local_24 = local_24 + 1;
        }
        std::
        vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
        ::push_back((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                     *)(local_80 + 0x108),(vector *)local_b8);
                    /* try { // try from 0835171d to 0835192e has its CatchHandler @ 0835196c */
        std::vector<int,std::allocator<int>>::~vector(local_b8);
        local_28 = local_28 + 1;
      }
      local_80[0x120] = local_10c;
      std::vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>>::operator=
                ((vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>> *)(local_80 + 0x124),
                 avStack_1fc);
      local_80[0x130] = local_ec;
      pcVar9 = (char *)std::string::c_str(asStack_368);
      CSkill::setSkillName(local_80,pcVar9);
      *(undefined4 *)(local_80 + 0x198) = local_334;
      insert_skill(this,local_74,local_80);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_94,(int)&local_ac);
      local_7c = local_7c + 1;
    }
    local_74 = local_74 + 1;
  } while( true );
}

```

---

## insert_skill

```asm
// === 083519a6 CSkillList::insert_skill  [0x083519a6-0x8351b73] ===
 83519a6:	55                   	push   %ebp
 83519a7:	89 e5                	mov    %esp,%ebp
 83519a9:	81 ec 88 00 00 00    	sub    $0x88,%esp
 83519af:	8b 45 10             	mov    0x10(%ebp),%eax
 83519b2:	85 c0                	test   %eax,%eax
 83519b4:	75 4b                	jne    8351a01 <_ZN10CSkillList12insert_skillEiP6CSkill+0x5b>
 83519b6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83519bd:	00 
 83519be:	c7 44 24 08 91 0f 00 	movl   $0xf91,0x8(%esp)
 83519c5:	00 
 83519c6:	c7 44 24 04 c0 47 c3 	movl   $0x8c347c0,0x4(%esp)
 83519cd:	08 
 83519ce:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83519d1:	89 04 24             	mov    %eax,(%esp)
 83519d4:	e8 3f dd 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83519d9:	c7 44 24 0c 91 0f 00 	movl   $0xf91,0xc(%esp)
 83519e0:	00 
 83519e1:	c7 44 24 08 c0 47 c3 	movl   $0x8c347c0,0x8(%esp)
 83519e8:	08 
 83519e9:	c7 44 24 04 82 00 c3 	movl   $0x8c30082,0x4(%esp)
 83519f0:	08 
 83519f1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83519f4:	89 04 24             	mov    %eax,(%esp)
 83519f7:	e8 8c dd 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83519fc:	e9 71 01 00 00       	jmp    8351b72 <_ZN10CSkillList12insert_skillEiP6CSkill+0x1cc>
 8351a01:	8b 45 10             	mov    0x10(%ebp),%eax
 8351a04:	89 04 24             	mov    %eax,(%esp)
 8351a07:	e8 6e 31 02 00       	call   8374b7a <_ZNK6CSkill9get_indexEv>
 8351a0c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8351a0f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8351a12:	89 04 24             	mov    %eax,(%esp)
 8351a15:	e8 3e e1 03 00       	call   838fb58 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 8351a1a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351a1d:	89 d0                	mov    %edx,%eax
 8351a1f:	c1 e0 02             	shl    $0x2,%eax
 8351a22:	01 d0                	add    %edx,%eax
 8351a24:	c1 e0 02             	shl    $0x2,%eax
 8351a27:	89 c2                	mov    %eax,%edx
 8351a29:	03 55 08             	add    0x8(%ebp),%edx
 8351a2c:	8d 45 90             	lea    -0x70(%ebp),%eax
 8351a2f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 8351a32:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8351a36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351a3a:	89 04 24             	mov    %eax,(%esp)
 8351a3d:	e8 66 e1 03 00       	call   838fba8 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8351a42:	83 ec 04             	sub    $0x4,%esp
 8351a45:	8b 45 90             	mov    -0x70(%ebp),%eax
 8351a48:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8351a4b:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8351a4e:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8351a51:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351a54:	89 d0                	mov    %edx,%eax
 8351a56:	c1 e0 02             	shl    $0x2,%eax
 8351a59:	01 d0                	add    %edx,%eax
 8351a5b:	c1 e0 02             	shl    $0x2,%eax
 8351a5e:	89 c2                	mov    %eax,%edx
 8351a60:	03 55 08             	add    0x8(%ebp),%edx
 8351a63:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351a66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351a6a:	89 04 24             	mov    %eax,(%esp)
 8351a6d:	e8 8c dc 03 00       	call   838f6fe <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8351a72:	83 ec 04             	sub    $0x4,%esp
 8351a75:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351a78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351a7c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8351a7f:	89 04 24             	mov    %eax,(%esp)
 8351a82:	e8 4d e1 03 00       	call   838fbd4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CSkillEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8351a87:	84 c0                	test   %al,%al
 8351a89:	0f 84 9d 00 00 00    	je     8351b2c <_ZN10CSkillList12insert_skillEiP6CSkill+0x186>
 8351a8f:	8d 45 10             	lea    0x10(%ebp),%eax
 8351a92:	89 44 24 08          	mov    %eax,0x8(%esp)
 8351a96:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8351a99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351a9d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8351aa0:	89 04 24             	mov    %eax,(%esp)
 8351aa3:	e8 40 e1 03 00       	call   838fbe8 <_ZNSt4pairIKiP6CSkillEC1IRiRS2_EEOT_OT0_>
 8351aa8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351aab:	89 d0                	mov    %edx,%eax
 8351aad:	c1 e0 02             	shl    $0x2,%eax
 8351ab0:	01 d0                	add    %edx,%eax
 8351ab2:	c1 e0 02             	shl    $0x2,%eax
 8351ab5:	89 c2                	mov    %eax,%edx
 8351ab7:	03 55 08             	add    0x8(%ebp),%edx
 8351aba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8351abd:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 8351ac0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8351ac4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351ac8:	89 04 24             	mov    %eax,(%esp)
 8351acb:	e8 46 e1 03 00       	call   838fc16 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 8351ad0:	83 ec 04             	sub    $0x4,%esp
 8351ad3:	8b 45 10             	mov    0x10(%ebp),%eax
 8351ad6:	89 04 24             	mov    %eax,(%esp)
 8351ad9:	e8 b8 30 02 00       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8351ade:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8351ae1:	8d 45 10             	lea    0x10(%ebp),%eax
 8351ae4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8351ae8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8351aeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351aef:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8351af2:	89 04 24             	mov    %eax,(%esp)
 8351af5:	e8 48 e1 03 00       	call   838fc42 <_ZNSt4pairIKiP6CSkillEC1IiRS2_EEOT_OT0_>
 8351afa:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351afd:	89 d0                	mov    %edx,%eax
 8351aff:	01 c0                	add    %eax,%eax
 8351b01:	01 d0                	add    %edx,%eax
 8351b03:	c1 e0 03             	shl    $0x3,%eax
 8351b06:	05 d0 00 00 00       	add    $0xd0,%eax
 8351b0b:	03 45 08             	add    0x8(%ebp),%eax
 8351b0e:	8d 48 0c             	lea    0xc(%eax),%ecx
 8351b11:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8351b14:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8351b17:	89 54 24 08          	mov    %edx,0x8(%esp)
 8351b1b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8351b1f:	89 04 24             	mov    %eax,(%esp)
 8351b22:	e8 49 e1 03 00       	call   838fc70 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8351b27:	83 ec 04             	sub    $0x4,%esp
 8351b2a:	eb 46                	jmp    8351b72 <_ZN10CSkillList12insert_skillEiP6CSkill+0x1cc>
 8351b2c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8351b33:	00 
 8351b34:	c7 44 24 08 a4 0f 00 	movl   $0xfa4,0x8(%esp)
 8351b3b:	00 
 8351b3c:	c7 44 24 04 c0 47 c3 	movl   $0x8c347c0,0x4(%esp)
 8351b43:	08 
 8351b44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351b47:	89 04 24             	mov    %eax,(%esp)
 8351b4a:	e8 c9 db 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8351b4f:	c7 44 24 0c a4 0f 00 	movl   $0xfa4,0xc(%esp)
 8351b56:	00 
 8351b57:	c7 44 24 08 c0 47 c3 	movl   $0x8c347c0,0x8(%esp)
 8351b5e:	08 
 8351b5f:	c7 44 24 04 9c 00 c3 	movl   $0x8c3009c,0x4(%esp)
 8351b66:	08 
 8351b67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351b6a:	89 04 24             	mov    %eax,(%esp)
 8351b6d:	e8 16 dc 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8351b72:	c9                   	leave
 8351b73:	c3                   	ret

```

```c
// CSkillList::insert_skill @ 0x83519a6

/* CSkillList::insert_skill(int, CSkill*) */

void __thiscall CSkillList::insert_skill(CSkillList *this,int param_1,CSkill *param_2)

{
  char cVar1;
  int local_74;
  undefined4 local_70;
  int local_64;
  undefined4 local_60;
  int local_5c;
  cMyTrace local_58 [16];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_48 [8]
  ;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_40 [12];
  pair<int_const,CSkill*> local_34 [8];
  pair local_2c [4];
  pair<int_const,CSkill*> local_28 [8];
  int local_20;
  cMyTrace local_1c [24];
  
  if (param_2 == (CSkill *)0x0) {
    cMyTrace::cMyTrace(local_58,"void CSkillList::insert_skill(int, CSkill*)",0xf91,5);
    cMyTrace::operator()
              (local_58,"[%s][%d]_(0 == pSkill)","void CSkillList::insert_skill(int, CSkill*)",0xf91
              );
  }
  else {
    local_5c = CSkill::get_index(param_2);
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_iterator();
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::find(&local_74);
    local_64 = local_74;
    local_60 = local_70;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_48);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
            ::operator==((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                          *)&local_64,(_Hashtable_iterator *)local_48);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_1c,"void CSkillList::insert_skill(int, CSkill*)",0xfa4,5);
      cMyTrace::operator()
                (local_1c,"[%s][%d]_( itr != m_SkillList[job_type].end() )",
                 "void CSkillList::insert_skill(int, CSkill*)",0xfa4);
    }
    else {
      std::pair<int_const,CSkill*>::pair<int&,CSkill*&>(local_34,&local_5c,&param_2);
      __gnu_cxx::
      hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::insert
                (local_40,this + param_1 * 0x14);
      local_20 = CSkill::get_group(param_2);
      std::pair<int_const,CSkill*>::pair<int,CSkill*&>(local_28,&local_20,&param_2);
      std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::insert
                (local_2c);
    }
  }
  return;
}

```

---

## set_post_learning_skill

```asm
// === 08351e18 CSkillList::set_post_learning_skill  [0x08351e18-0x8352027] ===
 8351e18:	55                   	push   %ebp
 8351e19:	89 e5                	mov    %esp,%ebp
 8351e1b:	56                   	push   %esi
 8351e1c:	53                   	push   %ebx
 8351e1d:	83 ec 50             	sub    $0x50,%esp
 8351e20:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8351e24:	0f 84 f3 01 00 00    	je     835201d <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x205>
 8351e2a:	8b 45 10             	mov    0x10(%ebp),%eax
 8351e2d:	83 c0 18             	add    $0x18,%eax
 8351e30:	89 04 24             	mov    %eax,(%esp)
 8351e33:	e8 5c d6 03 00       	call   838f494 <_ZNKSt4listI10_pre_skillSaIS0_EE4sizeEv>
 8351e38:	85 c0                	test   %eax,%eax
 8351e3a:	0f 95 c0             	setne  %al
 8351e3d:	84 c0                	test   %al,%al
 8351e3f:	0f 84 d9 01 00 00    	je     835201e <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x206>
 8351e45:	8b 45 10             	mov    0x10(%ebp),%eax
 8351e48:	8d 50 18             	lea    0x18(%eax),%edx
 8351e4b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351e4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351e52:	89 04 24             	mov    %eax,(%esp)
 8351e55:	e8 7e d6 03 00       	call   838f4d8 <_ZNSt4listI10_pre_skillSaIS0_EE5beginEv>
 8351e5a:	83 ec 04             	sub    $0x4,%esp
 8351e5d:	e9 87 01 00 00       	jmp    8351fe9 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x1d1>
 8351e62:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351e65:	89 04 24             	mov    %eax,(%esp)
 8351e68:	e8 8d df 03 00       	call   838fdfa <_ZNKSt14_List_iteratorI10_pre_skillEptEv>
 8351e6d:	89 c1                	mov    %eax,%ecx
 8351e6f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351e72:	89 d0                	mov    %edx,%eax
 8351e74:	01 c0                	add    %eax,%eax
 8351e76:	01 d0                	add    %edx,%eax
 8351e78:	c1 e0 03             	shl    $0x3,%eax
 8351e7b:	05 e0 01 00 00       	add    $0x1e0,%eax
 8351e80:	03 45 08             	add    0x8(%ebp),%eax
 8351e83:	8d 50 04             	lea    0x4(%eax),%edx
 8351e86:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8351e89:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8351e8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351e91:	89 04 24             	mov    %eax,(%esp)
 8351e94:	e8 6f df 03 00       	call   838fe08 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE4findERS7_>
 8351e99:	83 ec 04             	sub    $0x4,%esp
 8351e9c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8351e9f:	89 04 24             	mov    %eax,(%esp)
 8351ea2:	e8 e7 3d e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8351ea7:	8b 45 10             	mov    0x10(%ebp),%eax
 8351eaa:	89 04 24             	mov    %eax,(%esp)
 8351ead:	e8 c8 2c 02 00       	call   8374b7a <_ZNK6CSkill9get_indexEv>
 8351eb2:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8351eb5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351eb8:	89 04 24             	mov    %eax,(%esp)
 8351ebb:	e8 3a df 03 00       	call   838fdfa <_ZNKSt14_List_iteratorI10_pre_skillEptEv>
 8351ec0:	8b 40 04             	mov    0x4(%eax),%eax
 8351ec3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8351ec6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351ec9:	89 d0                	mov    %edx,%eax
 8351ecb:	01 c0                	add    %eax,%eax
 8351ecd:	01 d0                	add    %edx,%eax
 8351ecf:	c1 e0 03             	shl    $0x3,%eax
 8351ed2:	05 e0 01 00 00       	add    $0x1e0,%eax
 8351ed7:	03 45 08             	add    0x8(%ebp),%eax
 8351eda:	8d 50 04             	lea    0x4(%eax),%edx
 8351edd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8351ee0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351ee4:	89 04 24             	mov    %eax,(%esp)
 8351ee7:	e8 48 df 03 00       	call   838fe34 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE3endEv>
 8351eec:	83 ec 04             	sub    $0x4,%esp
 8351eef:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8351ef2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351ef6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8351ef9:	89 04 24             	mov    %eax,(%esp)
 8351efc:	e8 59 df 03 00       	call   838fe5a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEeqERKS7_>
 8351f01:	84 c0                	test   %al,%al
 8351f03:	0f 84 b8 00 00 00    	je     8351fc1 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x1a9>
 8351f09:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351f0c:	89 04 24             	mov    %eax,(%esp)
 8351f0f:	e8 c2 2a de ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8351f14:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8351f17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351f1b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351f1e:	89 04 24             	mov    %eax,(%esp)
 8351f21:	e8 4a db fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8351f26:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351f29:	89 04 24             	mov    %eax,(%esp)
 8351f2c:	e8 c9 de 03 00       	call   838fdfa <_ZNKSt14_List_iteratorI10_pre_skillEptEv>
 8351f31:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8351f34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8351f38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351f3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351f3f:	89 04 24             	mov    %eax,(%esp)
 8351f42:	e8 27 df 03 00       	call   838fe6e <_ZNSt4pairIKiSt6vectorIS_IiiESaIS2_EEEC1IRiRS4_EEOT_OT0_>
 8351f47:	8b 55 0c             	mov    0xc(%ebp),%edx
 8351f4a:	89 d0                	mov    %edx,%eax
 8351f4c:	01 c0                	add    %eax,%eax
 8351f4e:	01 d0                	add    %edx,%eax
 8351f50:	c1 e0 03             	shl    $0x3,%eax
 8351f53:	05 e0 01 00 00       	add    $0x1e0,%eax
 8351f58:	03 45 08             	add    0x8(%ebp),%eax
 8351f5b:	8d 48 04             	lea    0x4(%eax),%ecx
 8351f5e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8351f61:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8351f64:	89 54 24 08          	mov    %edx,0x8(%esp)
 8351f68:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8351f6c:	89 04 24             	mov    %eax,(%esp)
 8351f6f:	e8 32 df 03 00       	call   838fea6 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE6insertERKS8_>
 8351f74:	83 ec 04             	sub    $0x4,%esp
 8351f77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351f7a:	89 04 24             	mov    %eax,(%esp)
 8351f7d:	e8 e6 86 02 00       	call   837a668 <_ZNSt4pairIKiSt6vectorIS_IiiESaIS2_EEED1Ev>
 8351f82:	eb 30                	jmp    8351fb4 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x19c>
 8351f84:	89 d3                	mov    %edx,%ebx
 8351f86:	89 c6                	mov    %eax,%esi
 8351f88:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8351f8b:	89 04 24             	mov    %eax,(%esp)
 8351f8e:	e8 d5 86 02 00       	call   837a668 <_ZNSt4pairIKiSt6vectorIS_IiiESaIS2_EEED1Ev>
 8351f93:	89 f0                	mov    %esi,%eax
 8351f95:	89 da                	mov    %ebx,%edx
 8351f97:	eb 00                	jmp    8351f99 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x181>
 8351f99:	89 d3                	mov    %edx,%ebx
 8351f9b:	89 c6                	mov    %eax,%esi
 8351f9d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351fa0:	89 04 24             	mov    %eax,(%esp)
 8351fa3:	e8 42 2a de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8351fa8:	89 f0                	mov    %esi,%eax
 8351faa:	89 da                	mov    %ebx,%edx
 8351fac:	89 04 24             	mov    %eax,(%esp)
 8351faf:	e8 9c 17 79 00       	call   8ae3750 <_Unwind_Resume>
 8351fb4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8351fb7:	89 04 24             	mov    %eax,(%esp)
 8351fba:	e8 2b 2a de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8351fbf:	eb 1d                	jmp    8351fde <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x1c6>
 8351fc1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8351fc4:	89 04 24             	mov    %eax,(%esp)
 8351fc7:	e8 06 df 03 00       	call   838fed2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEptEv>
 8351fcc:	8d 50 04             	lea    0x4(%eax),%edx
 8351fcf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8351fd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8351fd6:	89 14 24             	mov    %edx,(%esp)
 8351fd9:	e8 92 da fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8351fde:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8351fe1:	89 04 24             	mov    %eax,(%esp)
 8351fe4:	e8 f7 de 03 00       	call   838fee0 <_ZNSt14_List_iteratorI10_pre_skillEppEv>
 8351fe9:	8b 45 10             	mov    0x10(%ebp),%eax
 8351fec:	8d 50 18             	lea    0x18(%eax),%edx
 8351fef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8351ff2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8351ff6:	89 04 24             	mov    %eax,(%esp)
 8351ff9:	e8 c4 dd 03 00       	call   838fdc2 <_ZNSt4listI10_pre_skillSaIS0_EE3endEv>
 8351ffe:	83 ec 04             	sub    $0x4,%esp
 8352001:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8352004:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352008:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835200b:	89 04 24             	mov    %eax,(%esp)
 835200e:	e8 d3 dd 03 00       	call   838fde6 <_ZNKSt14_List_iteratorI10_pre_skillEneERKS1_>
 8352013:	84 c0                	test   %al,%al
 8352015:	0f 85 47 fe ff ff    	jne    8351e62 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x4a>
 835201b:	eb 01                	jmp    835201e <_ZN10CSkillList23set_post_learning_skillEiP6CSkill+0x206>
 835201d:	90                   	nop
 835201e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8352021:	83 c4 00             	add    $0x0,%esp
 8352024:	5b                   	pop    %ebx
 8352025:	5e                   	pop    %esi
 8352026:	5d                   	pop    %ebp
 8352027:	c3                   	ret

```

```c
// CSkillList::set_post_learning_skill @ 0x8351e18

/* CSkillList::set_post_learning_skill(int, CSkill*) */

void __thiscall CSkillList::set_post_learning_skill(CSkillList *this,int param_1,CSkill *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_34 [4];
  _List_iterator<_pre_skill> local_30 [4];
  _List_iterator local_2c [4];
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_28 [4];
  pair local_24 [8];
  pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>> local_1c [16];
  
  if ((param_2 != (CSkill *)0x0) &&
     (iVar2 = std::list<_pre_skill,std::allocator<_pre_skill>>::size(), iVar2 != 0)) {
    std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
    while( true ) {
      std::list<_pre_skill,std::allocator<_pre_skill>>::end();
      cVar1 = std::_List_iterator<_pre_skill>::operator!=(local_30,local_2c);
      if (cVar1 == '\0') break;
      std::_List_iterator<_pre_skill>::operator->(local_30);
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::find((int *)local_34);
      std::pair<int,int>::pair((pair<int,int> *)&local_3c);
      local_3c = CSkill::get_index(param_2);
      iVar2 = std::_List_iterator<_pre_skill>::operator->(local_30);
      local_38 = *(undefined4 *)(iVar2 + 4);
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        iVar2 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                ::operator->(local_34);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(iVar2 + 4),
                   (pair *)&local_3c);
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_48);
                    /* try { // try from 08351f21 to 08351f46 has its CatchHandler @ 08351f99 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_48,(pair *)&local_3c);
        piVar3 = (int *)std::_List_iterator<_pre_skill>::operator->(local_30);
        std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>::
        pair<int&,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>&>
                  (local_1c,piVar3,(vector *)local_48);
                    /* try { // try from 08351f6f to 08351f73 has its CatchHandler @ 08351f84 */
        std::
        map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
        ::insert(local_24);
                    /* try { // try from 08351f7d to 08351f81 has its CatchHandler @ 08351f99 */
        std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>::
        ~pair(local_1c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_48);
      }
      std::_List_iterator<_pre_skill>::operator++(local_30);
    }
  }
  return;
}

```

---

## ~CSkillList

```asm
// === 083509ec CSkillList::~CSkillList  [0x083509ec-0x8350b41] ===
 83509ec:	55                   	push   %ebp
 83509ed:	89 e5                	mov    %esp,%ebp
 83509ef:	57                   	push   %edi
 83509f0:	56                   	push   %esi
 83509f1:	53                   	push   %ebx
 83509f2:	83 ec 1c             	sub    $0x1c,%esp
 83509f5:	8b 45 08             	mov    0x8(%ebp),%eax
 83509f8:	89 04 24             	mov    %eax,(%esp)
 83509fb:	e8 42 01 00 00       	call   8350b42 <_ZN10CSkillList7destroyEv>
 8350a00:	eb 3d                	jmp    8350a3f <_ZN10CSkillListD1Ev+0x53>
 8350a02:	89 d6                	mov    %edx,%esi
 8350a04:	89 c7                	mov    %eax,%edi
 8350a06:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a09:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a0e:	85 c0                	test   %eax,%eax
 8350a10:	74 27                	je     8350a39 <_ZN10CSkillListD1Ev+0x4d>
 8350a12:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a15:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a1a:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 8350a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a23:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a28:	39 c3                	cmp    %eax,%ebx
 8350a2a:	74 0d                	je     8350a39 <_ZN10CSkillListD1Ev+0x4d>
 8350a2c:	83 eb 18             	sub    $0x18,%ebx
 8350a2f:	89 1c 24             	mov    %ebx,(%esp)
 8350a32:	e8 cd ef 01 00       	call   836fa04 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEED1Ev>
 8350a37:	eb e7                	jmp    8350a20 <_ZN10CSkillListD1Ev+0x34>
 8350a39:	89 f8                	mov    %edi,%eax
 8350a3b:	89 f2                	mov    %esi,%edx
 8350a3d:	eb 33                	jmp    8350a72 <_ZN10CSkillListD1Ev+0x86>
 8350a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a42:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a47:	85 c0                	test   %eax,%eax
 8350a49:	74 64                	je     8350aaf <_ZN10CSkillListD1Ev+0xc3>
 8350a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a4e:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a53:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 8350a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a5c:	05 e4 01 00 00       	add    $0x1e4,%eax
 8350a61:	39 c3                	cmp    %eax,%ebx
 8350a63:	74 4a                	je     8350aaf <_ZN10CSkillListD1Ev+0xc3>
 8350a65:	83 eb 18             	sub    $0x18,%ebx
 8350a68:	89 1c 24             	mov    %ebx,(%esp)
 8350a6b:	e8 94 ef 01 00       	call   836fa04 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEED1Ev>
 8350a70:	eb e7                	jmp    8350a59 <_ZN10CSkillListD1Ev+0x6d>
 8350a72:	89 d6                	mov    %edx,%esi
 8350a74:	89 c7                	mov    %eax,%edi
 8350a76:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a79:	05 dc 00 00 00       	add    $0xdc,%eax
 8350a7e:	85 c0                	test   %eax,%eax
 8350a80:	74 27                	je     8350aa9 <_ZN10CSkillListD1Ev+0xbd>
 8350a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a85:	05 dc 00 00 00       	add    $0xdc,%eax
 8350a8a:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 8350a90:	8b 45 08             	mov    0x8(%ebp),%eax
 8350a93:	05 dc 00 00 00       	add    $0xdc,%eax
 8350a98:	39 c3                	cmp    %eax,%ebx
 8350a9a:	74 0d                	je     8350aa9 <_ZN10CSkillListD1Ev+0xbd>
 8350a9c:	83 eb 18             	sub    $0x18,%ebx
 8350a9f:	89 1c 24             	mov    %ebx,(%esp)
 8350aa2:	e8 1d 95 02 00       	call   8379fc4 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8350aa7:	eb e7                	jmp    8350a90 <_ZN10CSkillListD1Ev+0xa4>
 8350aa9:	89 f8                	mov    %edi,%eax
 8350aab:	89 f2                	mov    %esi,%edx
 8350aad:	eb 33                	jmp    8350ae2 <_ZN10CSkillListD1Ev+0xf6>
 8350aaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8350ab2:	05 dc 00 00 00       	add    $0xdc,%eax
 8350ab7:	85 c0                	test   %eax,%eax
 8350ab9:	74 5b                	je     8350b16 <_ZN10CSkillListD1Ev+0x12a>
 8350abb:	8b 45 08             	mov    0x8(%ebp),%eax
 8350abe:	05 dc 00 00 00       	add    $0xdc,%eax
 8350ac3:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 8350ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 8350acc:	05 dc 00 00 00       	add    $0xdc,%eax
 8350ad1:	39 c3                	cmp    %eax,%ebx
 8350ad3:	74 41                	je     8350b16 <_ZN10CSkillListD1Ev+0x12a>
 8350ad5:	83 eb 18             	sub    $0x18,%ebx
 8350ad8:	89 1c 24             	mov    %ebx,(%esp)
 8350adb:	e8 e4 94 02 00       	call   8379fc4 <_ZNSt8multimapIiP6CSkillSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8350ae0:	eb e7                	jmp    8350ac9 <_ZN10CSkillListD1Ev+0xdd>
 8350ae2:	89 d6                	mov    %edx,%esi
 8350ae4:	89 c7                	mov    %eax,%edi
 8350ae6:	8b 45 08             	mov    0x8(%ebp),%eax
 8350ae9:	85 c0                	test   %eax,%eax
 8350aeb:	74 1d                	je     8350b0a <_ZN10CSkillListD1Ev+0x11e>
 8350aed:	8b 45 08             	mov    0x8(%ebp),%eax
 8350af0:	8d 98 dc 00 00 00    	lea    0xdc(%eax),%ebx
 8350af6:	8b 45 08             	mov    0x8(%ebp),%eax
 8350af9:	39 c3                	cmp    %eax,%ebx
 8350afb:	74 0d                	je     8350b0a <_ZN10CSkillListD1Ev+0x11e>
 8350afd:	83 eb 14             	sub    $0x14,%ebx
 8350b00:	89 1c 24             	mov    %ebx,(%esp)
 8350b03:	e8 a8 94 02 00       	call   8379fb0 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8350b08:	eb ec                	jmp    8350af6 <_ZN10CSkillListD1Ev+0x10a>
 8350b0a:	89 f8                	mov    %edi,%eax
 8350b0c:	89 f2                	mov    %esi,%edx
 8350b0e:	89 04 24             	mov    %eax,(%esp)
 8350b11:	e8 3a 2c 79 00       	call   8ae3750 <_Unwind_Resume>
 8350b16:	8b 45 08             	mov    0x8(%ebp),%eax
 8350b19:	85 c0                	test   %eax,%eax
 8350b1b:	74 1d                	je     8350b3a <_ZN10CSkillListD1Ev+0x14e>
 8350b1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8350b20:	8d 98 dc 00 00 00    	lea    0xdc(%eax),%ebx
 8350b26:	8b 45 08             	mov    0x8(%ebp),%eax
 8350b29:	39 c3                	cmp    %eax,%ebx
 8350b2b:	74 0d                	je     8350b3a <_ZN10CSkillListD1Ev+0x14e>
 8350b2d:	83 eb 14             	sub    $0x14,%ebx
 8350b30:	89 1c 24             	mov    %ebx,(%esp)
 8350b33:	e8 78 94 02 00       	call   8379fb0 <_ZN9__gnu_cxx8hash_mapIiP6CSkillNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8350b38:	eb ec                	jmp    8350b26 <_ZN10CSkillListD1Ev+0x13a>
 8350b3a:	83 c4 1c             	add    $0x1c,%esp
 8350b3d:	5b                   	pop    %ebx
 8350b3e:	5e                   	pop    %esi
 8350b3f:	5f                   	pop    %edi
 8350b40:	5d                   	pop    %ebp
 8350b41:	c3                   	ret

```

```c
// CSkillList::~CSkillList @ 0x83509ec

/* CSkillList::~CSkillList() */

void __thiscall CSkillList::~CSkillList(CSkillList *this)

{
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  *this_00;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *this_01;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *this_02;
  
                    /* try { // try from 083509fb to 083509ff has its CatchHandler @ 08350a02 */
  destroy(this);
  if (this != (CSkillList *)0xfffffe1c) {
    this_00 = (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
               *)(this + 0x2ec);
    while (this_00 !=
           (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
            *)(this + 0x1e4)) {
      this_00 = this_00 + -0x18;
                    /* try { // try from 08350a6b to 08350a6f has its CatchHandler @ 08350a72 */
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::~map(this_00);
    }
  }
  if (this != (CSkillList *)0xffffff24) {
    this_01 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
              (this + 0x1e4);
    while (this_01 !=
           (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
           (this + 0xdc)) {
      this_01 = this_01 + -0x18;
                    /* try { // try from 08350adb to 08350adf has its CatchHandler @ 08350ae2 */
      std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::
      ~multimap(this_01);
    }
  }
  if (this != (CSkillList *)0x0) {
    this_02 = (hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
               *)(this + 0xdc);
    while (this_02 !=
           (hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *)
           this) {
      this_02 = this_02 + -0x14;
      __gnu_cxx::
      hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::
      ~hash_map(this_02);
    }
  }
  return;
}

```

