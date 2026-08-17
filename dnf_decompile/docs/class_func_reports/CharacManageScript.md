# CharacManageScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CharacManageScript

```asm
// === 088e06cc CharacManageScript::CharacManageScript  [0x088e06cc-0x88e07f5] ===
 88e06cc:	55                   	push   %ebp
 88e06cd:	89 e5                	mov    %esp,%ebp
 88e06cf:	56                   	push   %esi
 88e06d0:	53                   	push   %ebx
 88e06d1:	83 ec 10             	sub    $0x10,%esp
 88e06d4:	8b 45 08             	mov    0x8(%ebp),%eax
 88e06d7:	89 04 24             	mov    %eax,(%esp)
 88e06da:	e8 85 0d 00 00       	call   88e1464 <_ZNSt6vectorI16ManagePointBonusSaIS0_EEC1Ev>
 88e06df:	8b 45 08             	mov    0x8(%ebp),%eax
 88e06e2:	83 c0 0c             	add    $0xc,%eax
 88e06e5:	89 04 24             	mov    %eax,(%esp)
 88e06e8:	e8 bf da 7a ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88e06ed:	8b 45 08             	mov    0x8(%ebp),%eax
 88e06f0:	83 c0 18             	add    $0x18,%eax
 88e06f3:	89 04 24             	mov    %eax,(%esp)
 88e06f6:	e8 69 65 7e ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88e06fb:	8b 45 08             	mov    0x8(%ebp),%eax
 88e06fe:	83 c0 30             	add    $0x30,%eax
 88e0701:	89 04 24             	mov    %eax,(%esp)
 88e0704:	e8 5b 65 7e ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88e0709:	8b 45 08             	mov    0x8(%ebp),%eax
 88e070c:	83 c0 4c             	add    $0x4c,%eax
 88e070f:	89 04 24             	mov    %eax,(%esp)
 88e0712:	e8 d3 64 7e ff       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 88e0717:	8b 45 08             	mov    0x8(%ebp),%eax
 88e071a:	83 c0 64             	add    $0x64,%eax
 88e071d:	89 04 24             	mov    %eax,(%esp)
 88e0720:	e8 3f 65 7e ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88e0725:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0728:	83 c0 7c             	add    $0x7c,%eax
 88e072b:	89 04 24             	mov    %eax,(%esp)
 88e072e:	e8 a3 0d 00 00       	call   88e14d6 <_ZNSt6vectorI22ContentsOptionRevisionSaIS0_EEC1Ev>
 88e0733:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0736:	89 04 24             	mov    %eax,(%esp)
 88e0739:	e8 c6 01 00 00       	call   88e0904 <_ZN18CharacManageScript5clearEv>
 88e073e:	e9 ab 00 00 00       	jmp    88e07ee <_ZN18CharacManageScriptC1Ev+0x122>
 88e0743:	89 d3                	mov    %edx,%ebx
 88e0745:	89 c6                	mov    %eax,%esi
 88e0747:	8b 45 08             	mov    0x8(%ebp),%eax
 88e074a:	83 c0 7c             	add    $0x7c,%eax
 88e074d:	89 04 24             	mov    %eax,(%esp)
 88e0750:	e8 95 0d 00 00       	call   88e14ea <_ZNSt6vectorI22ContentsOptionRevisionSaIS0_EED1Ev>
 88e0755:	89 f0                	mov    %esi,%eax
 88e0757:	89 da                	mov    %ebx,%edx
 88e0759:	eb 00                	jmp    88e075b <_ZN18CharacManageScriptC1Ev+0x8f>
 88e075b:	89 d3                	mov    %edx,%ebx
 88e075d:	89 c6                	mov    %eax,%esi
 88e075f:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0762:	83 c0 64             	add    $0x64,%eax
 88e0765:	89 04 24             	mov    %eax,(%esp)
 88e0768:	e8 59 63 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e076d:	89 f0                	mov    %esi,%eax
 88e076f:	89 da                	mov    %ebx,%edx
 88e0771:	eb 00                	jmp    88e0773 <_ZN18CharacManageScriptC1Ev+0xa7>
 88e0773:	89 d3                	mov    %edx,%ebx
 88e0775:	89 c6                	mov    %eax,%esi
 88e0777:	8b 45 08             	mov    0x8(%ebp),%eax
 88e077a:	83 c0 4c             	add    $0x4c,%eax
 88e077d:	89 04 24             	mov    %eax,(%esp)
 88e0780:	e8 2d 63 7e ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 88e0785:	89 f0                	mov    %esi,%eax
 88e0787:	89 da                	mov    %ebx,%edx
 88e0789:	eb 00                	jmp    88e078b <_ZN18CharacManageScriptC1Ev+0xbf>
 88e078b:	89 d3                	mov    %edx,%ebx
 88e078d:	89 c6                	mov    %eax,%esi
 88e078f:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0792:	83 c0 30             	add    $0x30,%eax
 88e0795:	89 04 24             	mov    %eax,(%esp)
 88e0798:	e8 29 63 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e079d:	89 f0                	mov    %esi,%eax
 88e079f:	89 da                	mov    %ebx,%edx
 88e07a1:	eb 00                	jmp    88e07a3 <_ZN18CharacManageScriptC1Ev+0xd7>
 88e07a3:	89 d3                	mov    %edx,%ebx
 88e07a5:	89 c6                	mov    %eax,%esi
 88e07a7:	8b 45 08             	mov    0x8(%ebp),%eax
 88e07aa:	83 c0 18             	add    $0x18,%eax
 88e07ad:	89 04 24             	mov    %eax,(%esp)
 88e07b0:	e8 11 63 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e07b5:	89 f0                	mov    %esi,%eax
 88e07b7:	89 da                	mov    %ebx,%edx
 88e07b9:	eb 00                	jmp    88e07bb <_ZN18CharacManageScriptC1Ev+0xef>
 88e07bb:	89 d3                	mov    %edx,%ebx
 88e07bd:	89 c6                	mov    %eax,%esi
 88e07bf:	8b 45 08             	mov    0x8(%ebp),%eax
 88e07c2:	83 c0 0c             	add    $0xc,%eax
 88e07c5:	89 04 24             	mov    %eax,(%esp)
 88e07c8:	e8 0d 36 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88e07cd:	89 f0                	mov    %esi,%eax
 88e07cf:	89 da                	mov    %ebx,%edx
 88e07d1:	eb 00                	jmp    88e07d3 <_ZN18CharacManageScriptC1Ev+0x107>
 88e07d3:	89 d3                	mov    %edx,%ebx
 88e07d5:	89 c6                	mov    %eax,%esi
 88e07d7:	8b 45 08             	mov    0x8(%ebp),%eax
 88e07da:	89 04 24             	mov    %eax,(%esp)
 88e07dd:	e8 96 0c 00 00       	call   88e1478 <_ZNSt6vectorI16ManagePointBonusSaIS0_EED1Ev>
 88e07e2:	89 f0                	mov    %esi,%eax
 88e07e4:	89 da                	mov    %ebx,%edx
 88e07e6:	89 04 24             	mov    %eax,(%esp)
 88e07e9:	e8 62 2f 20 00       	call   8ae3750 <_Unwind_Resume>
 88e07ee:	83 c4 10             	add    $0x10,%esp
 88e07f1:	5b                   	pop    %ebx
 88e07f2:	5e                   	pop    %esi
 88e07f3:	5d                   	pop    %ebp
 88e07f4:	c3                   	ret
 88e07f5:	90                   	nop

```

```c
// CharacManageScript::CharacManageScript @ 0x88e06cc

/* CharacManageScript::CharacManageScript() */

void __thiscall CharacManageScript::CharacManageScript(CharacManageScript *this)

{
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::vector
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
                    /* try { // try from 088e06e8 to 088e06ec has its CatchHandler @ 088e07d3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
                    /* try { // try from 088e06f6 to 088e06fa has its CatchHandler @ 088e07bb */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 088e0704 to 088e0708 has its CatchHandler @ 088e07a3 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 088e0712 to 088e0716 has its CatchHandler @ 088e078b */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
                    /* try { // try from 088e0720 to 088e0724 has its CatchHandler @ 088e0773 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
                    /* try { // try from 088e072e to 088e0732 has its CatchHandler @ 088e075b */
  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::vector
            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>> *)(this + 0x7c))
  ;
                    /* try { // try from 088e0739 to 088e073d has its CatchHandler @ 088e0743 */
  clear(this);
  return;
}

```

---

## GetExpBonus

```asm
// === 088e0f58 CharacManageScript::GetExpBonus  [0x088e0f58-0x88e0fcd] ===
 88e0f58:	55                   	push   %ebp
 88e0f59:	89 e5                	mov    %esp,%ebp
 88e0f5b:	83 ec 38             	sub    $0x38,%esp
 88e0f5e:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0f61:	8d 48 18             	lea    0x18(%eax),%ecx
 88e0f64:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e0f67:	8d 55 0c             	lea    0xc(%ebp),%edx
 88e0f6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e0f6e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e0f72:	89 04 24             	mov    %eax,(%esp)
 88e0f75:	e8 74 c3 7e ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88e0f7a:	83 ec 04             	sub    $0x4,%esp
 88e0f7d:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0f80:	8d 50 18             	lea    0x18(%eax),%edx
 88e0f83:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e0f86:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0f8a:	89 04 24             	mov    %eax,(%esp)
 88e0f8d:	e8 88 c3 7e ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88e0f92:	83 ec 04             	sub    $0x4,%esp
 88e0f95:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e0f98:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0f9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e0f9f:	89 04 24             	mov    %eax,(%esp)
 88e0fa2:	e8 21 94 7f ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88e0fa7:	84 c0                	test   %al,%al
 88e0fa9:	74 1e                	je     88e0fc9 <_ZN18CharacManageScript11GetExpBonusEi+0x71>
 88e0fab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e0fae:	89 04 24             	mov    %eax,(%esp)
 88e0fb1:	e8 8a c3 7e ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88e0fb6:	8b 40 04             	mov    0x4(%eax),%eax
 88e0fb9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88e0fbc:	db 45 e4             	fildl  -0x1c(%ebp)
 88e0fbf:	d9 05 54 c5 e0 08    	flds   0x8e0c554
 88e0fc5:	de f9                	fdivrp %st,%st(1)
 88e0fc7:	eb 02                	jmp    88e0fcb <_ZN18CharacManageScript11GetExpBonusEi+0x73>
 88e0fc9:	d9 ee                	fldz
 88e0fcb:	c9                   	leave
 88e0fcc:	c3                   	ret
 88e0fcd:	90                   	nop

```

```c
// CharacManageScript::GetExpBonus @ 0x88e0f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CharacManageScript::GetExpBonus(int) */

longdouble CharacManageScript::GetExpBonus(int param_1)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    lVar3 = (longdouble)0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    lVar3 = (longdouble)*(int *)(iVar2 + 4) / (longdouble)_DAT_08e0c554;
  }
  return lVar3;
}

```

---

## GetExpBonus_088e1044

```asm
// === 088e1044 CharacManageScript::GetExpBonus  [0x088e1044-0x88e10ab] ===
 88e1044:	55                   	push   %ebp
 88e1045:	89 e5                	mov    %esp,%ebp
 88e1047:	83 ec 28             	sub    $0x28,%esp
 88e104a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e104d:	8d 48 18             	lea    0x18(%eax),%ecx
 88e1050:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1053:	8d 55 0c             	lea    0xc(%ebp),%edx
 88e1056:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e105a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e105e:	89 04 24             	mov    %eax,(%esp)
 88e1061:	e8 88 c2 7e ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88e1066:	83 ec 04             	sub    $0x4,%esp
 88e1069:	8b 45 08             	mov    0x8(%ebp),%eax
 88e106c:	8d 50 18             	lea    0x18(%eax),%edx
 88e106f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e1072:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e1076:	89 04 24             	mov    %eax,(%esp)
 88e1079:	e8 9c c2 7e ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88e107e:	83 ec 04             	sub    $0x4,%esp
 88e1081:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e1084:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e1088:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e108b:	89 04 24             	mov    %eax,(%esp)
 88e108e:	e8 35 93 7f ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88e1093:	84 c0                	test   %al,%al
 88e1095:	74 13                	je     88e10aa <_ZN18CharacManageScript11GetExpBonusEiPi+0x66>
 88e1097:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e109a:	89 04 24             	mov    %eax,(%esp)
 88e109d:	e8 9e c2 7e ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88e10a2:	8b 50 04             	mov    0x4(%eax),%edx
 88e10a5:	8b 45 10             	mov    0x10(%ebp),%eax
 88e10a8:	89 10                	mov    %edx,(%eax)
 88e10aa:	c9                   	leave
 88e10ab:	c3                   	ret

```

```c
// CharacManageScript::GetExpBonus @ 0x88e1044

/* CharacManageScript::GetExpBonus(int, int*) */

void __thiscall CharacManageScript::GetExpBonus(CharacManageScript *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    *param_2 = *(int *)(iVar2 + 4);
  }
  return;
}

```

---

## GetGoldBonus

```asm
// === 088e0fce CharacManageScript::GetGoldBonus  [0x088e0fce-0x88e1043] ===
 88e0fce:	55                   	push   %ebp
 88e0fcf:	89 e5                	mov    %esp,%ebp
 88e0fd1:	83 ec 38             	sub    $0x38,%esp
 88e0fd4:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0fd7:	8d 48 30             	lea    0x30(%eax),%ecx
 88e0fda:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e0fdd:	8d 55 0c             	lea    0xc(%ebp),%edx
 88e0fe0:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e0fe4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e0fe8:	89 04 24             	mov    %eax,(%esp)
 88e0feb:	e8 fe c2 7e ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88e0ff0:	83 ec 04             	sub    $0x4,%esp
 88e0ff3:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0ff6:	8d 50 30             	lea    0x30(%eax),%edx
 88e0ff9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e0ffc:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e1000:	89 04 24             	mov    %eax,(%esp)
 88e1003:	e8 12 c3 7e ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88e1008:	83 ec 04             	sub    $0x4,%esp
 88e100b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e100e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e1012:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1015:	89 04 24             	mov    %eax,(%esp)
 88e1018:	e8 ab 93 7f ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88e101d:	84 c0                	test   %al,%al
 88e101f:	74 1e                	je     88e103f <_ZN18CharacManageScript12GetGoldBonusEi+0x71>
 88e1021:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1024:	89 04 24             	mov    %eax,(%esp)
 88e1027:	e8 14 c3 7e ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88e102c:	8b 40 04             	mov    0x4(%eax),%eax
 88e102f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88e1032:	db 45 e4             	fildl  -0x1c(%ebp)
 88e1035:	d9 05 54 c5 e0 08    	flds   0x8e0c554
 88e103b:	de f9                	fdivrp %st,%st(1)
 88e103d:	eb 02                	jmp    88e1041 <_ZN18CharacManageScript12GetGoldBonusEi+0x73>
 88e103f:	d9 ee                	fldz
 88e1041:	c9                   	leave
 88e1042:	c3                   	ret
 88e1043:	90                   	nop

```

```c
// CharacManageScript::GetGoldBonus @ 0x88e0fce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CharacManageScript::GetGoldBonus(int) */

longdouble CharacManageScript::GetGoldBonus(int param_1)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    lVar3 = (longdouble)0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    lVar3 = (longdouble)*(int *)(iVar2 + 4) / (longdouble)_DAT_08e0c554;
  }
  return lVar3;
}

```

---

## GetGoldBonus_088e10ac

```asm
// === 088e10ac CharacManageScript::GetGoldBonus  [0x088e10ac-0x88e1113] ===
 88e10ac:	55                   	push   %ebp
 88e10ad:	89 e5                	mov    %esp,%ebp
 88e10af:	83 ec 28             	sub    $0x28,%esp
 88e10b2:	8b 45 08             	mov    0x8(%ebp),%eax
 88e10b5:	8d 48 30             	lea    0x30(%eax),%ecx
 88e10b8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e10bb:	8d 55 0c             	lea    0xc(%ebp),%edx
 88e10be:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e10c2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e10c6:	89 04 24             	mov    %eax,(%esp)
 88e10c9:	e8 20 c2 7e ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88e10ce:	83 ec 04             	sub    $0x4,%esp
 88e10d1:	8b 45 08             	mov    0x8(%ebp),%eax
 88e10d4:	8d 50 30             	lea    0x30(%eax),%edx
 88e10d7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e10da:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e10de:	89 04 24             	mov    %eax,(%esp)
 88e10e1:	e8 34 c2 7e ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88e10e6:	83 ec 04             	sub    $0x4,%esp
 88e10e9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e10ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e10f0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e10f3:	89 04 24             	mov    %eax,(%esp)
 88e10f6:	e8 cd 92 7f ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88e10fb:	84 c0                	test   %al,%al
 88e10fd:	74 13                	je     88e1112 <_ZN18CharacManageScript12GetGoldBonusEiPi+0x66>
 88e10ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1102:	89 04 24             	mov    %eax,(%esp)
 88e1105:	e8 36 c2 7e ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88e110a:	8b 50 04             	mov    0x4(%eax),%edx
 88e110d:	8b 45 10             	mov    0x10(%ebp),%eax
 88e1110:	89 10                	mov    %edx,(%eax)
 88e1112:	c9                   	leave
 88e1113:	c3                   	ret

```

```c
// CharacManageScript::GetGoldBonus @ 0x88e10ac

/* CharacManageScript::GetGoldBonus(int, int*) */

void __thiscall CharacManageScript::GetGoldBonus(CharacManageScript *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    *param_2 = *(int *)(iVar2 + 4);
  }
  return;
}

```

---

## GetLevel

```asm
// === 088e0ed4 CharacManageScript::GetLevel  [0x088e0ed4-0x88e0f57] ===
 88e0ed4:	55                   	push   %ebp
 88e0ed5:	89 e5                	mov    %esp,%ebp
 88e0ed7:	83 ec 28             	sub    $0x28,%esp
 88e0eda:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 88e0ede:	75 07                	jne    88e0ee7 <_ZN18CharacManageScript8GetLevelEi+0x13>
 88e0ee0:	b8 00 00 00 00       	mov    $0x0,%eax
 88e0ee5:	eb 6f                	jmp    88e0f56 <_ZN18CharacManageScript8GetLevelEi+0x82>
 88e0ee7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 88e0eee:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0ef1:	83 c0 0c             	add    $0xc,%eax
 88e0ef4:	89 04 24             	mov    %eax,(%esp)
 88e0ef7:	e8 c4 d2 7a ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 88e0efc:	83 e8 01             	sub    $0x1,%eax
 88e0eff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88e0f02:	eb 30                	jmp    88e0f34 <_ZN18CharacManageScript8GetLevelEi+0x60>
 88e0f04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88e0f07:	8b 55 08             	mov    0x8(%ebp),%edx
 88e0f0a:	83 c2 0c             	add    $0xc,%edx
 88e0f0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0f11:	89 14 24             	mov    %edx,(%esp)
 88e0f14:	e8 c3 d2 7a ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 88e0f19:	8b 00                	mov    (%eax),%eax
 88e0f1b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88e0f1e:	0f 9e c0             	setle  %al
 88e0f21:	84 c0                	test   %al,%al
 88e0f23:	74 0b                	je     88e0f30 <_ZN18CharacManageScript8GetLevelEi+0x5c>
 88e0f25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88e0f28:	83 c0 01             	add    $0x1,%eax
 88e0f2b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88e0f2e:	eb 10                	jmp    88e0f40 <_ZN18CharacManageScript8GetLevelEi+0x6c>
 88e0f30:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 88e0f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88e0f37:	f7 d0                	not    %eax
 88e0f39:	c1 e8 1f             	shr    $0x1f,%eax
 88e0f3c:	84 c0                	test   %al,%al
 88e0f3e:	75 c4                	jne    88e0f04 <_ZN18CharacManageScript8GetLevelEi+0x30>
 88e0f40:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0f43:	8b 40 48             	mov    0x48(%eax),%eax
 88e0f46:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 88e0f49:	7d 08                	jge    88e0f53 <_ZN18CharacManageScript8GetLevelEi+0x7f>
 88e0f4b:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0f4e:	8b 40 48             	mov    0x48(%eax),%eax
 88e0f51:	eb 03                	jmp    88e0f56 <_ZN18CharacManageScript8GetLevelEi+0x82>
 88e0f53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88e0f56:	c9                   	leave
 88e0f57:	c3                   	ret

```

```c
// CharacManageScript::GetLevel @ 0x88e0ed4

/* CharacManageScript::GetLevel(int) */

uint __thiscall CharacManageScript::GetLevel(CharacManageScript *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint local_14;
  uint local_10;
  
  if (param_1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0xc));
    do {
      local_10 = uVar2 - 1;
      uVar1 = local_14;
      if ((int)local_10 < 0) break;
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0xc),local_10);
      uVar1 = uVar2;
      uVar2 = local_10;
    } while (param_1 < *piVar3);
    local_14 = uVar1;
    if (*(int *)(this + 0x48) < (int)local_14) {
      local_14 = *(uint *)(this + 0x48);
    }
  }
  return local_14;
}

```

---

## GetLevelUpRequirePoint

```asm
// === 088e1114 CharacManageScript::GetLevelUpRequirePoint  [0x088e1114-0x88e1165] ===
 88e1114:	55                   	push   %ebp
 88e1115:	89 e5                	mov    %esp,%ebp
 88e1117:	83 ec 18             	sub    $0x18,%esp
 88e111a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 88e111e:	74 13                	je     88e1133 <_ZN18CharacManageScript22GetLevelUpRequirePointEj+0x1f>
 88e1120:	8b 45 08             	mov    0x8(%ebp),%eax
 88e1123:	83 c0 0c             	add    $0xc,%eax
 88e1126:	89 04 24             	mov    %eax,(%esp)
 88e1129:	e8 92 d0 7a ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 88e112e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88e1131:	73 07                	jae    88e113a <_ZN18CharacManageScript22GetLevelUpRequirePointEj+0x26>
 88e1133:	b8 01 00 00 00       	mov    $0x1,%eax
 88e1138:	eb 05                	jmp    88e113f <_ZN18CharacManageScript22GetLevelUpRequirePointEj+0x2b>
 88e113a:	b8 00 00 00 00       	mov    $0x0,%eax
 88e113f:	84 c0                	test   %al,%al
 88e1141:	74 07                	je     88e114a <_ZN18CharacManageScript22GetLevelUpRequirePointEj+0x36>
 88e1143:	b8 00 00 00 00       	mov    $0x0,%eax
 88e1148:	eb 1a                	jmp    88e1164 <_ZN18CharacManageScript22GetLevelUpRequirePointEj+0x50>
 88e114a:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e114d:	8d 50 ff             	lea    -0x1(%eax),%edx
 88e1150:	8b 45 08             	mov    0x8(%ebp),%eax
 88e1153:	83 c0 0c             	add    $0xc,%eax
 88e1156:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e115a:	89 04 24             	mov    %eax,(%esp)
 88e115d:	e8 7a d0 7a ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 88e1162:	8b 00                	mov    (%eax),%eax
 88e1164:	c9                   	leave
 88e1165:	c3                   	ret

```

```c
// CharacManageScript::GetLevelUpRequirePoint @ 0x88e1114

/* CharacManageScript::GetLevelUpRequirePoint(unsigned int) */

undefined4 __thiscall
CharacManageScript::GetLevelUpRequirePoint(CharacManageScript *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0xc));
    if (param_1 <= uVar2) {
      bVar1 = false;
      goto LAB_088e113f;
    }
  }
  bVar1 = true;
LAB_088e113f:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 0xc),param_1 - 1);
    uVar3 = *puVar4;
  }
  return uVar3;
}

```

---

## GetMinimumPointCharacterLevel

```asm
// === 088e1266 CharacManageScript::GetMinimumPointCharacterLevel  [0x088e1266-0x88e1298] ===
 88e1266:	55                   	push   %ebp
 88e1267:	89 e5                	mov    %esp,%ebp
 88e1269:	83 ec 18             	sub    $0x18,%esp
 88e126c:	8b 45 08             	mov    0x8(%ebp),%eax
 88e126f:	89 04 24             	mov    %eax,(%esp)
 88e1272:	e8 af 04 00 00       	call   88e1726 <_ZNKSt6vectorI16ManagePointBonusSaIS0_EE5emptyEv>
 88e1277:	84 c0                	test   %al,%al
 88e1279:	74 07                	je     88e1282 <_ZN18CharacManageScript29GetMinimumPointCharacterLevelEv+0x1c>
 88e127b:	b8 28 00 00 00       	mov    $0x28,%eax
 88e1280:	eb 15                	jmp    88e1297 <_ZN18CharacManageScript29GetMinimumPointCharacterLevelEv+0x31>
 88e1282:	8b 45 08             	mov    0x8(%ebp),%eax
 88e1285:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 88e128c:	00 
 88e128d:	89 04 24             	mov    %eax,(%esp)
 88e1290:	e8 d5 04 00 00       	call   88e176a <_ZNSt6vectorI16ManagePointBonusSaIS0_EEixEj>
 88e1295:	8b 00                	mov    (%eax),%eax
 88e1297:	c9                   	leave
 88e1298:	c3                   	ret

```

```c
// CharacManageScript::GetMinimumPointCharacterLevel @ 0x88e1266

/* CharacManageScript::GetMinimumPointCharacterLevel() */

undefined4 __thiscall CharacManageScript::GetMinimumPointCharacterLevel(CharacManageScript *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  cVar1 = std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::empty();
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)
             std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::operator[]
                       ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this,0);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0x28;
  }
  return uVar2;
}

```

---

## GetName

```asm
// === 088e1166 CharacManageScript::GetName  [0x088e1166-0x88e11fb] ===
 88e1166:	55                   	push   %ebp
 88e1167:	89 e5                	mov    %esp,%ebp
 88e1169:	56                   	push   %esi
 88e116a:	53                   	push   %ebx
 88e116b:	83 ec 20             	sub    $0x20,%esp
 88e116e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88e1171:	8b 45 10             	mov    0x10(%ebp),%eax
 88e1174:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88e1177:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e117a:	8d 48 4c             	lea    0x4c(%eax),%ecx
 88e117d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88e1180:	8d 55 f0             	lea    -0x10(%ebp),%edx
 88e1183:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e1187:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e118b:	89 04 24             	mov    %eax,(%esp)
 88e118e:	e8 27 f1 c9 ff       	call   85802ba <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 88e1193:	83 ec 04             	sub    $0x4,%esp
 88e1196:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e1199:	8d 50 4c             	lea    0x4c(%eax),%edx
 88e119c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e119f:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e11a3:	89 04 24             	mov    %eax,(%esp)
 88e11a6:	e8 6d 4f 80 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88e11ab:	83 ec 04             	sub    $0x4,%esp
 88e11ae:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e11b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e11b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88e11b8:	89 04 24             	mov    %eax,(%esp)
 88e11bb:	e8 7e 4f 80 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 88e11c0:	84 c0                	test   %al,%al
 88e11c2:	74 1e                	je     88e11e2 <_ZN18CharacManageScript7GetNameEj+0x7c>
 88e11c4:	89 de                	mov    %ebx,%esi
 88e11c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88e11c9:	89 04 24             	mov    %eax,(%esp)
 88e11cc:	e8 e7 4f 80 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 88e11d1:	83 c0 04             	add    $0x4,%eax
 88e11d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e11d8:	89 34 24             	mov    %esi,(%esp)
 88e11db:	e8 d0 67 e2 ff       	call   87079b0 <_ZNSsC1ERKSs>
 88e11e0:	eb 0a                	jmp    88e11ec <_ZN18CharacManageScript7GetNameEj+0x86>
 88e11e2:	89 d8                	mov    %ebx,%eax
 88e11e4:	89 04 24             	mov    %eax,(%esp)
 88e11e7:	e8 e4 53 e2 ff       	call   87065d0 <_ZNSsC1Ev>
 88e11ec:	89 d8                	mov    %ebx,%eax
 88e11ee:	89 d8                	mov    %ebx,%eax
 88e11f0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88e11f3:	83 c4 00             	add    $0x0,%esp
 88e11f6:	5b                   	pop    %ebx
 88e11f7:	5e                   	pop    %esi
 88e11f8:	5d                   	pop    %ebp
 88e11f9:	c2 04 00             	ret    $0x4

```

```c
// CharacManageScript::GetName @ 0x88e1166

/* CharacManageScript::GetName(unsigned int) */

uint CharacManageScript::GetName(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_18 [8];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    std::string::string((string *)param_1);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->(local_18);
    std::string::string((string *)param_1,(string *)(iVar2 + 4));
  }
  return param_1;
}

```

---

## GetOptionValue

```asm
// === 088e11fc CharacManageScript::GetOptionValue  [0x088e11fc-0x88e1265] ===
 88e11fc:	55                   	push   %ebp
 88e11fd:	89 e5                	mov    %esp,%ebp
 88e11ff:	83 ec 28             	sub    $0x28,%esp
 88e1202:	8b 45 08             	mov    0x8(%ebp),%eax
 88e1205:	8d 48 64             	lea    0x64(%eax),%ecx
 88e1208:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e120b:	8d 55 0c             	lea    0xc(%ebp),%edx
 88e120e:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e1212:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88e1216:	89 04 24             	mov    %eax,(%esp)
 88e1219:	e8 d0 c0 7e ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88e121e:	83 ec 04             	sub    $0x4,%esp
 88e1221:	8b 45 08             	mov    0x8(%ebp),%eax
 88e1224:	8d 50 64             	lea    0x64(%eax),%edx
 88e1227:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e122a:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e122e:	89 04 24             	mov    %eax,(%esp)
 88e1231:	e8 e4 c0 7e ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88e1236:	83 ec 04             	sub    $0x4,%esp
 88e1239:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e123c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e1240:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1243:	89 04 24             	mov    %eax,(%esp)
 88e1246:	e8 7d 91 7f ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88e124b:	84 c0                	test   %al,%al
 88e124d:	74 10                	je     88e125f <_ZN18CharacManageScript14GetOptionValueEi+0x63>
 88e124f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e1252:	89 04 24             	mov    %eax,(%esp)
 88e1255:	e8 e6 c0 7e ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88e125a:	8b 40 04             	mov    0x4(%eax),%eax
 88e125d:	eb 05                	jmp    88e1264 <_ZN18CharacManageScript14GetOptionValueEi+0x68>
 88e125f:	b8 00 00 00 00       	mov    $0x0,%eax
 88e1264:	c9                   	leave
 88e1265:	c3                   	ret

```

```c
// CharacManageScript::GetOptionValue @ 0x88e11fc

/* CharacManageScript::GetOptionValue(int) */

undefined4 CharacManageScript::GetOptionValue(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetPoint

```asm
// === 088e0e0a CharacManageScript::GetPoint  [0x088e0e0a-0x88e0ed3] ===
 88e0e0a:	55                   	push   %ebp
 88e0e0b:	89 e5                	mov    %esp,%ebp
 88e0e0d:	83 ec 38             	sub    $0x38,%esp
 88e0e10:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 88e0e17:	8b 55 08             	mov    0x8(%ebp),%edx
 88e0e1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0e1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0e21:	89 04 24             	mov    %eax,(%esp)
 88e0e24:	e8 3f 08 00 00       	call   88e1668 <_ZNSt6vectorI16ManagePointBonusSaIS0_EE5beginEv>
 88e0e29:	83 ec 04             	sub    $0x4,%esp
 88e0e2c:	eb 72                	jmp    88e0ea0 <_ZN18CharacManageScript8GetPointEi+0x96>
 88e0e2e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0e31:	89 04 24             	mov    %eax,(%esp)
 88e0e34:	e8 d9 08 00 00       	call   88e1712 <_ZNK9__gnu_cxx17__normal_iteratorIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEdeEv>
 88e0e39:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88e0e3c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0e3f:	89 04 24             	mov    %eax,(%esp)
 88e0e42:	e8 d5 08 00 00       	call   88e171c <_ZNK9__gnu_cxx17__normal_iteratorIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEptEv>
 88e0e47:	8b 00                	mov    (%eax),%eax
 88e0e49:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88e0e4c:	eb 1d                	jmp    88e0e6b <_ZN18CharacManageScript8GetPointEi+0x61>
 88e0e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e0e51:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88e0e54:	7c 11                	jl     88e0e67 <_ZN18CharacManageScript8GetPointEi+0x5d>
 88e0e56:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0e59:	89 04 24             	mov    %eax,(%esp)
 88e0e5c:	e8 bb 08 00 00       	call   88e171c <_ZNK9__gnu_cxx17__normal_iteratorIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEptEv>
 88e0e61:	8b 40 08             	mov    0x8(%eax),%eax
 88e0e64:	01 45 ec             	add    %eax,-0x14(%ebp)
 88e0e67:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88e0e6b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0e6e:	89 04 24             	mov    %eax,(%esp)
 88e0e71:	e8 a6 08 00 00       	call   88e171c <_ZNK9__gnu_cxx17__normal_iteratorIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEptEv>
 88e0e76:	8b 40 04             	mov    0x4(%eax),%eax
 88e0e79:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88e0e7c:	0f 9d c0             	setge  %al
 88e0e7f:	84 c0                	test   %al,%al
 88e0e81:	75 cb                	jne    88e0e4e <_ZN18CharacManageScript8GetPointEi+0x44>
 88e0e83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88e0e86:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88e0e8d:	00 
 88e0e8e:	8d 55 e0             	lea    -0x20(%ebp),%edx
 88e0e91:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0e95:	89 04 24             	mov    %eax,(%esp)
 88e0e98:	e8 41 08 00 00       	call   88e16de <_ZN9__gnu_cxx17__normal_iteratorIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEppEi>
 88e0e9d:	83 ec 04             	sub    $0x4,%esp
 88e0ea0:	8b 55 08             	mov    0x8(%ebp),%edx
 88e0ea3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88e0ea6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0eaa:	89 04 24             	mov    %eax,(%esp)
 88e0ead:	e8 da 07 00 00       	call   88e168c <_ZNSt6vectorI16ManagePointBonusSaIS0_EE3endEv>
 88e0eb2:	83 ec 04             	sub    $0x4,%esp
 88e0eb5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88e0eb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0ebc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88e0ebf:	89 04 24             	mov    %eax,(%esp)
 88e0ec2:	e8 eb 07 00 00       	call   88e16b2 <_ZN9__gnu_cxxneIP16ManagePointBonusSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 88e0ec7:	84 c0                	test   %al,%al
 88e0ec9:	0f 85 5f ff ff ff    	jne    88e0e2e <_ZN18CharacManageScript8GetPointEi+0x24>
 88e0ecf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 88e0ed2:	c9                   	leave
 88e0ed3:	c3                   	ret

```

```c
// CharacManageScript::GetPoint @ 0x88e0e0a

/* CharacManageScript::GetPoint(int) */

int __thiscall CharacManageScript::GetPoint(CharacManageScript *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = 0;
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::begin();
  while( true ) {
    std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::end();
    bVar1 = __gnu_cxx::operator!=(local_24,local_20);
    if (!bVar1) break;
    local_14 = __gnu_cxx::
               __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
               ::operator*(local_24);
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
                    ::operator->(local_24);
    local_10 = *piVar2;
    while( true ) {
      iVar3 = __gnu_cxx::
              __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
              ::operator->(local_24);
      if (*(int *)(iVar3 + 4) < local_10) break;
      if (local_10 <= param_1) {
        iVar3 = __gnu_cxx::
                __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
                ::operator->(local_24);
        local_18 = local_18 + *(int *)(iVar3 + 8);
      }
      local_10 = local_10 + 1;
    }
    __gnu_cxx::
    __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
    ::operator++(local_1c,(int)local_24);
  }
  return local_18;
}

```

---

## clear

```asm
// === 088e0904 CharacManageScript::clear  [0x088e0904-0x88e0967] ===
 88e0904:	55                   	push   %ebp
 88e0905:	89 e5                	mov    %esp,%ebp
 88e0907:	83 ec 18             	sub    $0x18,%esp
 88e090a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e090d:	89 04 24             	mov    %eax,(%esp)
 88e0910:	e8 33 0c 00 00       	call   88e1548 <_ZNSt6vectorI16ManagePointBonusSaIS0_EE5clearEv>
 88e0915:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0918:	83 c0 0c             	add    $0xc,%eax
 88e091b:	89 04 24             	mov    %eax,(%esp)
 88e091e:	e8 4b 62 7b ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 88e0923:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0926:	83 c0 18             	add    $0x18,%eax
 88e0929:	89 04 24             	mov    %eax,(%esp)
 88e092c:	e8 ad 63 7e ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88e0931:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0934:	83 c0 30             	add    $0x30,%eax
 88e0937:	89 04 24             	mov    %eax,(%esp)
 88e093a:	e8 9f 63 7e ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88e093f:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0942:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 88e0949:	8b 45 08             	mov    0x8(%ebp),%eax
 88e094c:	83 c0 4c             	add    $0x4c,%eax
 88e094f:	89 04 24             	mov    %eax,(%esp)
 88e0952:	e8 7f 62 7e ff       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 88e0957:	8b 45 08             	mov    0x8(%ebp),%eax
 88e095a:	83 c0 64             	add    $0x64,%eax
 88e095d:	89 04 24             	mov    %eax,(%esp)
 88e0960:	e8 79 63 7e ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88e0965:	c9                   	leave
 88e0966:	c3                   	ret
 88e0967:	90                   	nop

```

```c
// CharacManageScript::clear @ 0x88e0904

/* CharacManageScript::clear() */

void __thiscall CharacManageScript::clear(CharacManageScript *this)

{
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::clear
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
  return;
}

```

---

## getInsance

```asm
// === 088e0674 CharacManageScript::getInsance  [0x088e0674-0x88e06cb] ===
 88e0674:	55                   	push   %ebp
 88e0675:	89 e5                	mov    %esp,%ebp
 88e0677:	57                   	push   %edi
 88e0678:	56                   	push   %esi
 88e0679:	53                   	push   %ebx
 88e067a:	83 ec 1c             	sub    $0x1c,%esp
 88e067d:	a1 98 6b 4f 09       	mov    0x94f6b98,%eax
 88e0682:	85 c0                	test   %eax,%eax
 88e0684:	75 39                	jne    88e06bf <_ZN18CharacManageScript10getInsanceEv+0x4b>
 88e0686:	c7 04 24 88 00 00 00 	movl   $0x88,(%esp)
 88e068d:	e8 be 3d e4 ff       	call   8724450 <_Znwj>
 88e0692:	89 c3                	mov    %eax,%ebx
 88e0694:	89 d8                	mov    %ebx,%eax
 88e0696:	89 04 24             	mov    %eax,(%esp)
 88e0699:	e8 2e 00 00 00       	call   88e06cc <_ZN18CharacManageScriptC1Ev>
 88e069e:	eb 18                	jmp    88e06b8 <_ZN18CharacManageScript10getInsanceEv+0x44>
 88e06a0:	89 d6                	mov    %edx,%esi
 88e06a2:	89 c7                	mov    %eax,%edi
 88e06a4:	89 1c 24             	mov    %ebx,(%esp)
 88e06a7:	e8 44 3e e4 ff       	call   87244f0 <_ZdlPv>
 88e06ac:	89 f8                	mov    %edi,%eax
 88e06ae:	89 f2                	mov    %esi,%edx
 88e06b0:	89 04 24             	mov    %eax,(%esp)
 88e06b3:	e8 98 30 20 00       	call   8ae3750 <_Unwind_Resume>
 88e06b8:	89 d8                	mov    %ebx,%eax
 88e06ba:	a3 98 6b 4f 09       	mov    %eax,0x94f6b98
 88e06bf:	a1 98 6b 4f 09       	mov    0x94f6b98,%eax
 88e06c4:	83 c4 1c             	add    $0x1c,%esp
 88e06c7:	5b                   	pop    %ebx
 88e06c8:	5e                   	pop    %esi
 88e06c9:	5f                   	pop    %edi
 88e06ca:	5d                   	pop    %ebp
 88e06cb:	c3                   	ret

```

```c
// CharacManageScript::getInsance @ 0x88e0674

/* CharacManageScript::getInsance() */

CharacManageScript * CharacManageScript::getInsance(void)

{
  CharacManageScript *this;
  
  if (instance_ == (CharacManageScript *)0x0) {
    this = operator_new(0x88);
                    /* try { // try from 088e0699 to 088e069d has its CatchHandler @ 088e06a0 */
    CharacManageScript(this);
    instance_ = this;
  }
  return instance_;
}

```

---

## importScript

```asm
// === 088e0968 CharacManageScript::importScript  [0x088e0968-0x88e0e09] ===
 88e0968:	55                   	push   %ebp
 88e0969:	89 e5                	mov    %esp,%ebp
 88e096b:	56                   	push   %esi
 88e096c:	53                   	push   %ebx
 88e096d:	83 ec 70             	sub    $0x70,%esp
 88e0970:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e0973:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0977:	c7 04 24 40 c0 e0 08 	movl   $0x8e0c040,(%esp)
 88e097e:	e8 a6 b3 fd ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88e0983:	83 f0 01             	xor    $0x1,%eax
 88e0986:	84 c0                	test   %al,%al
 88e0988:	74 0a                	je     88e0994 <_ZN18CharacManageScript12importScriptEPKc+0x2c>
 88e098a:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e098f:	e9 6a 04 00 00       	jmp    88e0dfe <_ZN18CharacManageScript12importScriptEPKc+0x496>
 88e0994:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0997:	89 04 24             	mov    %eax,(%esp)
 88e099a:	e8 31 5c e2 ff       	call   87065d0 <_ZNSsC1Ev>
 88e099f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e09a2:	89 04 24             	mov    %eax,(%esp)
 88e09a5:	e8 26 5c e2 ff       	call   87065d0 <_ZNSsC1Ev>
 88e09aa:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
 88e09ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88e09b5:	00 
 88e09b6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e09b9:	89 04 24             	mov    %eax,(%esp)
 88e09bc:	e8 9e be fd ff       	call   88bc85f <_Z8ScanTypeRSsb>
 88e09c1:	83 f0 01             	xor    $0x1,%eax
 88e09c4:	84 c0                	test   %al,%al
 88e09c6:	0f 85 e2 03 00 00    	jne    88e0dae <_ZN18CharacManageScript12importScriptEPKc+0x446>
 88e09cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e09cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e09d3:	c7 04 24 41 c0 e0 08 	movl   $0x8e0c041,(%esp)
 88e09da:	e8 01 71 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e09df:	84 c0                	test   %al,%al
 88e09e1:	0f 84 84 00 00 00    	je     88e0a6b <_ZN18CharacManageScript12importScriptEPKc+0x103>
 88e09e7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88e09ea:	89 04 24             	mov    %eax,(%esp)
 88e09ed:	e8 04 09 00 00       	call   88e12f6 <_ZN16ManagePointBonusC1Ev>
 88e09f2:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e09f5:	89 04 24             	mov    %eax,(%esp)
 88e09f8:	e8 7e b9 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e09fd:	89 45 bc             	mov    %eax,-0x44(%ebp)
 88e0a00:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0a04:	83 f0 01             	xor    $0x1,%eax
 88e0a07:	84 c0                	test   %al,%al
 88e0a09:	74 03                	je     88e0a0e <_ZN18CharacManageScript12importScriptEPKc+0xa6>
 88e0a0b:	90                   	nop
 88e0a0c:	eb a0                	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0a0e:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0a11:	89 04 24             	mov    %eax,(%esp)
 88e0a14:	e8 62 b9 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0a19:	89 45 c0             	mov    %eax,-0x40(%ebp)
 88e0a1c:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0a20:	83 f0 01             	xor    $0x1,%eax
 88e0a23:	84 c0                	test   %al,%al
 88e0a25:	74 0a                	je     88e0a31 <_ZN18CharacManageScript12importScriptEPKc+0xc9>
 88e0a27:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e0a2c:	e9 9a 03 00 00       	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0a31:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0a34:	89 04 24             	mov    %eax,(%esp)
 88e0a37:	e8 3f b9 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0a3c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 88e0a3f:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0a43:	83 f0 01             	xor    $0x1,%eax
 88e0a46:	84 c0                	test   %al,%al
 88e0a48:	74 0a                	je     88e0a54 <_ZN18CharacManageScript12importScriptEPKc+0xec>
 88e0a4a:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e0a4f:	e9 77 03 00 00       	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0a54:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0a57:	8d 55 bc             	lea    -0x44(%ebp),%edx
 88e0a5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0a5e:	89 04 24             	mov    %eax,(%esp)
 88e0a61:	e8 fe 0a 00 00       	call   88e1564 <_ZNSt6vectorI16ManagePointBonusSaIS0_EE9push_backERKS0_>
 88e0a66:	e9 7c ff ff ff       	jmp    88e09e7 <_ZN18CharacManageScript12importScriptEPKc+0x7f>
 88e0a6b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0a72:	c7 04 24 4f c0 e0 08 	movl   $0x8e0c04f,(%esp)
 88e0a79:	e8 62 70 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0a7e:	84 c0                	test   %al,%al
 88e0a80:	74 36                	je     88e0ab8 <_ZN18CharacManageScript12importScriptEPKc+0x150>
 88e0a82:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0a85:	89 04 24             	mov    %eax,(%esp)
 88e0a88:	e8 ee b8 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0a8d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 88e0a90:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0a94:	83 f0 01             	xor    $0x1,%eax
 88e0a97:	84 c0                	test   %al,%al
 88e0a99:	74 06                	je     88e0aa1 <_ZN18CharacManageScript12importScriptEPKc+0x139>
 88e0a9b:	90                   	nop
 88e0a9c:	e9 0d ff ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0aa1:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0aa4:	8d 50 0c             	lea    0xc(%eax),%edx
 88e0aa7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88e0aaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0aae:	89 14 24             	mov    %edx,(%esp)
 88e0ab1:	e8 70 06 83 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 88e0ab6:	eb ca                	jmp    88e0a82 <_ZN18CharacManageScript12importScriptEPKc+0x11a>
 88e0ab8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0abf:	c7 04 24 64 c0 e0 08 	movl   $0x8e0c064,(%esp)
 88e0ac6:	e8 15 70 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0acb:	84 c0                	test   %al,%al
 88e0acd:	74 31                	je     88e0b00 <_ZN18CharacManageScript12importScriptEPKc+0x198>
 88e0acf:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0ad2:	89 04 24             	mov    %eax,(%esp)
 88e0ad5:	e8 a1 b8 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0ada:	89 45 ec             	mov    %eax,-0x14(%ebp)
 88e0add:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0ae1:	83 f0 01             	xor    $0x1,%eax
 88e0ae4:	84 c0                	test   %al,%al
 88e0ae6:	74 0a                	je     88e0af2 <_ZN18CharacManageScript12importScriptEPKc+0x18a>
 88e0ae8:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e0aed:	e9 d9 02 00 00       	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0af2:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0af5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 88e0af8:	89 50 48             	mov    %edx,0x48(%eax)
 88e0afb:	e9 ae fe ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0b00:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0b03:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0b07:	c7 04 24 77 c0 e0 08 	movl   $0x8e0c077,(%esp)
 88e0b0e:	e8 cd 6f 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0b13:	84 c0                	test   %al,%al
 88e0b15:	75 17                	jne    88e0b2e <_ZN18CharacManageScript12importScriptEPKc+0x1c6>
 88e0b17:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0b1e:	c7 04 24 83 c0 e0 08 	movl   $0x8e0c083,(%esp)
 88e0b25:	e8 b6 6f 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0b2a:	84 c0                	test   %al,%al
 88e0b2c:	74 07                	je     88e0b35 <_ZN18CharacManageScript12importScriptEPKc+0x1cd>
 88e0b2e:	b8 01 00 00 00       	mov    $0x1,%eax
 88e0b33:	eb 05                	jmp    88e0b3a <_ZN18CharacManageScript12importScriptEPKc+0x1d2>
 88e0b35:	b8 00 00 00 00       	mov    $0x0,%eax
 88e0b3a:	84 c0                	test   %al,%al
 88e0b3c:	0f 84 21 01 00 00    	je     88e0c63 <_ZN18CharacManageScript12importScriptEPKc+0x2fb>
 88e0b42:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 88e0b49:	eb 01                	jmp    88e0b4c <_ZN18CharacManageScript12importScriptEPKc+0x1e4>
 88e0b4b:	90                   	nop
 88e0b4c:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0b4f:	89 04 24             	mov    %eax,(%esp)
 88e0b52:	e8 24 b8 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0b57:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 88e0b5a:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0b5e:	83 f0 01             	xor    $0x1,%eax
 88e0b61:	84 c0                	test   %al,%al
 88e0b63:	74 06                	je     88e0b6b <_ZN18CharacManageScript12importScriptEPKc+0x203>
 88e0b65:	90                   	nop
 88e0b66:	e9 43 fe ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0b6b:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0b6e:	89 04 24             	mov    %eax,(%esp)
 88e0b71:	e8 05 b8 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0b76:	89 45 b0             	mov    %eax,-0x50(%ebp)
 88e0b79:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0b7d:	83 f0 01             	xor    $0x1,%eax
 88e0b80:	84 c0                	test   %al,%al
 88e0b82:	74 0a                	je     88e0b8e <_ZN18CharacManageScript12importScriptEPKc+0x226>
 88e0b84:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e0b89:	e9 3d 02 00 00       	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0b8e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 88e0b95:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0b98:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0b9c:	c7 04 24 77 c0 e0 08 	movl   $0x8e0c077,(%esp)
 88e0ba3:	e8 38 6f 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0ba8:	84 c0                	test   %al,%al
 88e0baa:	74 0b                	je     88e0bb7 <_ZN18CharacManageScript12importScriptEPKc+0x24f>
 88e0bac:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0baf:	83 c0 18             	add    $0x18,%eax
 88e0bb2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88e0bb5:	eb 2c                	jmp    88e0be3 <_ZN18CharacManageScript12importScriptEPKc+0x27b>
 88e0bb7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0bba:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0bbe:	c7 04 24 83 c0 e0 08 	movl   $0x8e0c083,(%esp)
 88e0bc5:	e8 16 6f 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0bca:	84 c0                	test   %al,%al
 88e0bcc:	74 0b                	je     88e0bd9 <_ZN18CharacManageScript12importScriptEPKc+0x271>
 88e0bce:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0bd1:	83 c0 30             	add    $0x30,%eax
 88e0bd4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88e0bd7:	eb 0a                	jmp    88e0be3 <_ZN18CharacManageScript12importScriptEPKc+0x27b>
 88e0bd9:	bb 00 00 00 00       	mov    $0x0,%ebx
 88e0bde:	e9 e8 01 00 00       	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0be3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88e0be6:	8d 55 b0             	lea    -0x50(%ebp),%edx
 88e0be9:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e0bed:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 88e0bf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0bf4:	89 04 24             	mov    %eax,(%esp)
 88e0bf7:	e8 b6 06 83 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 88e0bfc:	83 ec 04             	sub    $0x4,%esp
 88e0bff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88e0c02:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0c06:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88e0c09:	89 04 24             	mov    %eax,(%esp)
 88e0c0c:	e8 0f 61 7e ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 88e0c11:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88e0c14:	8d 55 dc             	lea    -0x24(%ebp),%edx
 88e0c17:	89 54 24 08          	mov    %edx,0x8(%esp)
 88e0c1b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88e0c1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0c22:	89 04 24             	mov    %eax,(%esp)
 88e0c25:	e8 26 61 7e ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 88e0c2a:	83 ec 04             	sub    $0x4,%esp
 88e0c2d:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 88e0c31:	83 f0 01             	xor    $0x1,%eax
 88e0c34:	84 c0                	test   %al,%al
 88e0c36:	0f 84 0f ff ff ff    	je     88e0b4b <_ZN18CharacManageScript12importScriptEPKc+0x1e3>
 88e0c3c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0c3f:	89 04 24             	mov    %eax,(%esp)
 88e0c42:	e8 a9 58 e2 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88e0c47:	89 44 24 08          	mov    %eax,0x8(%esp)
 88e0c4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e0c4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0c52:	c7 04 24 90 c0 e0 08 	movl   $0x8e0c090,(%esp)
 88e0c59:	e8 02 cf 79 ff       	call   807db60 <printf@plt>
 88e0c5e:	e9 e9 fe ff ff       	jmp    88e0b4c <_ZN18CharacManageScript12importScriptEPKc+0x1e4>
 88e0c63:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0c66:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0c6a:	c7 04 24 af c0 e0 08 	movl   $0x8e0c0af,(%esp)
 88e0c71:	e8 6a 6e 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0c76:	84 c0                	test   %al,%al
 88e0c78:	74 63                	je     88e0cdd <_ZN18CharacManageScript12importScriptEPKc+0x375>
 88e0c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0c7d:	83 c0 4c             	add    $0x4c,%eax
 88e0c80:	89 04 24             	mov    %eax,(%esp)
 88e0c83:	e8 4e 5f 7e ff       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 88e0c88:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 88e0c8f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e0c92:	89 04 24             	mov    %eax,(%esp)
 88e0c95:	e8 08 bb fd ff       	call   88bc7a2 <_Z7ScanStrPSs>
 88e0c9a:	88 45 cb             	mov    %al,-0x35(%ebp)
 88e0c9d:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0ca1:	83 f0 01             	xor    $0x1,%eax
 88e0ca4:	84 c0                	test   %al,%al
 88e0ca6:	74 06                	je     88e0cae <_ZN18CharacManageScript12importScriptEPKc+0x346>
 88e0ca8:	90                   	nop
 88e0ca9:	e9 00 fd ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0cae:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0cb1:	8d 50 4c             	lea    0x4c(%eax),%edx
 88e0cb4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88e0cb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0cbb:	89 14 24             	mov    %edx,(%esp)
 88e0cbe:	e8 55 06 00 00       	call   88e1318 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEixERS3_>
 88e0cc3:	8d 55 cc             	lea    -0x34(%ebp),%edx
 88e0cc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e0cca:	89 04 24             	mov    %eax,(%esp)
 88e0ccd:	e8 2e 70 e2 ff       	call   8707d00 <_ZNSsaSERKSs>
 88e0cd2:	8b 45 ac             	mov    -0x54(%ebp),%eax
 88e0cd5:	83 c0 01             	add    $0x1,%eax
 88e0cd8:	89 45 ac             	mov    %eax,-0x54(%ebp)
 88e0cdb:	eb b2                	jmp    88e0c8f <_ZN18CharacManageScript12importScriptEPKc+0x327>
 88e0cdd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0ce0:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0ce4:	c7 04 24 c6 c0 e0 08 	movl   $0x8e0c0c6,(%esp)
 88e0ceb:	e8 f0 6d 95 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 88e0cf0:	84 c0                	test   %al,%al
 88e0cf2:	74 58                	je     88e0d4c <_ZN18CharacManageScript12importScriptEPKc+0x3e4>
 88e0cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0cf7:	83 c0 64             	add    $0x64,%eax
 88e0cfa:	89 04 24             	mov    %eax,(%esp)
 88e0cfd:	e8 dc 5f 7e ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88e0d02:	8d 45 cb             	lea    -0x35(%ebp),%eax
 88e0d05:	89 04 24             	mov    %eax,(%esp)
 88e0d08:	e8 6e b6 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0d0d:	89 45 a8             	mov    %eax,-0x58(%ebp)
 88e0d10:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 88e0d14:	83 f0 01             	xor    $0x1,%eax
 88e0d17:	84 c0                	test   %al,%al
 88e0d19:	74 06                	je     88e0d21 <_ZN18CharacManageScript12importScriptEPKc+0x3b9>
 88e0d1b:	90                   	nop
 88e0d1c:	e9 8d fc ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0d21:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88e0d28:	e8 4e b6 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0d2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88e0d30:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0d33:	8d 50 64             	lea    0x64(%eax),%edx
 88e0d36:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88e0d39:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0d3d:	89 14 24             	mov    %edx,(%esp)
 88e0d40:	e8 67 27 8b ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 88e0d45:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88e0d48:	89 10                	mov    %edx,(%eax)
 88e0d4a:	eb b6                	jmp    88e0d02 <_ZN18CharacManageScript12importScriptEPKc+0x39a>
 88e0d4c:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0d4f:	83 c0 7c             	add    $0x7c,%eax
 88e0d52:	89 04 24             	mov    %eax,(%esp)
 88e0d55:	e8 7e 08 00 00       	call   88e15d8 <_ZNSt6vectorI22ContentsOptionRevisionSaIS0_EE5clearEv>
 88e0d5a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e0d5d:	89 04 24             	mov    %eax,(%esp)
 88e0d60:	e8 3d ba fd ff       	call   88bc7a2 <_Z7ScanStrPSs>
 88e0d65:	83 f0 01             	xor    $0x1,%eax
 88e0d68:	84 c0                	test   %al,%al
 88e0d6a:	74 06                	je     88e0d72 <_ZN18CharacManageScript12importScriptEPKc+0x40a>
 88e0d6c:	90                   	nop
 88e0d6d:	e9 3c fc ff ff       	jmp    88e09ae <_ZN18CharacManageScript12importScriptEPKc+0x46>
 88e0d72:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e0d75:	89 04 24             	mov    %eax,(%esp)
 88e0d78:	e8 73 57 e2 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88e0d7d:	89 04 24             	mov    %eax,(%esp)
 88e0d80:	e8 1f 27 1e 00       	call   8ac34a4 <_ZN12ContentsType7getTypeEPKc>
 88e0d85:	89 45 a0             	mov    %eax,-0x60(%ebp)
 88e0d88:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88e0d8f:	e8 e7 b5 fd ff       	call   88bc37b <_Z7ScanIntPb>
 88e0d94:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 88e0d97:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0d9a:	8d 50 7c             	lea    0x7c(%eax),%edx
 88e0d9d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 88e0da0:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e0da4:	89 14 24             	mov    %edx,(%esp)
 88e0da7:	e8 48 08 00 00       	call   88e15f4 <_ZNSt6vectorI22ContentsOptionRevisionSaIS0_EE9push_backERKS0_>
 88e0dac:	eb ac                	jmp    88e0d5a <_ZN18CharacManageScript12importScriptEPKc+0x3f2>
 88e0dae:	90                   	nop
 88e0daf:	bb 01 00 00 00       	mov    $0x1,%ebx
 88e0db4:	eb 15                	jmp    88e0dcb <_ZN18CharacManageScript12importScriptEPKc+0x463>
 88e0db6:	89 d3                	mov    %edx,%ebx
 88e0db8:	89 c6                	mov    %eax,%esi
 88e0dba:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e0dbd:	89 04 24             	mov    %eax,(%esp)
 88e0dc0:	e8 1b 6e e2 ff       	call   8707be0 <_ZNSsD1Ev>
 88e0dc5:	89 f0                	mov    %esi,%eax
 88e0dc7:	89 da                	mov    %ebx,%edx
 88e0dc9:	eb 0d                	jmp    88e0dd8 <_ZN18CharacManageScript12importScriptEPKc+0x470>
 88e0dcb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88e0dce:	89 04 24             	mov    %eax,(%esp)
 88e0dd1:	e8 0a 6e e2 ff       	call   8707be0 <_ZNSsD1Ev>
 88e0dd6:	eb 1b                	jmp    88e0df3 <_ZN18CharacManageScript12importScriptEPKc+0x48b>
 88e0dd8:	89 d3                	mov    %edx,%ebx
 88e0dda:	89 c6                	mov    %eax,%esi
 88e0ddc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0ddf:	89 04 24             	mov    %eax,(%esp)
 88e0de2:	e8 f9 6d e2 ff       	call   8707be0 <_ZNSsD1Ev>
 88e0de7:	89 f0                	mov    %esi,%eax
 88e0de9:	89 da                	mov    %ebx,%edx
 88e0deb:	89 04 24             	mov    %eax,(%esp)
 88e0dee:	e8 5d 29 20 00       	call   8ae3750 <_Unwind_Resume>
 88e0df3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88e0df6:	89 04 24             	mov    %eax,(%esp)
 88e0df9:	e8 e2 6d e2 ff       	call   8707be0 <_ZNSsD1Ev>
 88e0dfe:	89 d8                	mov    %ebx,%eax
 88e0e00:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88e0e03:	83 c4 00             	add    $0x0,%esp
 88e0e06:	5b                   	pop    %ebx
 88e0e07:	5e                   	pop    %esi
 88e0e08:	5d                   	pop    %ebp
 88e0e09:	c3                   	ret

```

```c
// CharacManageScript::importScript @ 0x88e0968

/* CharacManageScript::importScript(char const*) */

undefined4 __thiscall CharacManageScript::importScript(CharacManageScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  string *this_00;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  bool local_39;
  string local_38 [4];
  string local_34;
  pair local_30 [4];
  char local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  CharacManageScript *local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_34);
                    /* try { // try from 088e09a5 to 088e09a9 has its CatchHandler @ 088e0dd8 */
    std::string::string(local_38);
    local_39 = false;
                    /* try { // try from 088e09bc to 088e0dab has its CatchHandler @ 088e0db6 */
    while (cVar1 = ScanType((string *)&local_34,true), cVar1 == '\x01') {
      bVar2 = std::operator==("[point bonus]",&local_34);
      if (bVar2) {
        while( true ) {
          ManagePointBonus::ManagePointBonus((ManagePointBonus *)&local_48);
          local_48 = ScanInt(&local_39);
          if (local_39 != true) break;
          local_44 = ScanInt(&local_39);
          if (local_39 != true) {
            uVar5 = 0;
            goto LAB_088e0dcb;
          }
          local_40 = ScanInt(&local_39);
          if (local_39 != true) {
            uVar5 = 0;
            goto LAB_088e0dcb;
          }
          std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::push_back
                    ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this,
                     (ManagePointBonus *)&local_48);
        }
      }
      else {
        bVar2 = std::operator==("[manage level point]",&local_34);
        if (bVar2) {
          while (local_4c = ScanInt(&local_39), local_39 == true) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0xc),&local_4c);
          }
        }
        else {
          bVar2 = std::operator==("[manage level max]",&local_34);
          if (bVar2) {
            local_18 = ScanInt(&local_39);
            if (local_39 != true) {
              uVar5 = 0;
              goto LAB_088e0dcb;
            }
            *(undefined4 *)(this + 0x48) = local_18;
          }
          else {
            bVar2 = std::operator==("[exp bonus]",&local_34);
            if ((bVar2) || (bVar2 = std::operator==("[gold bonus]",&local_34), bVar2)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              local_54 = 0;
              while (local_50 = ScanInt(&local_39), local_39 == true) {
                local_54 = ScanInt(&local_39);
                if (local_39 != true) {
                  uVar5 = 0;
                  goto LAB_088e0dcb;
                }
                local_14 = (CharacManageScript *)0x0;
                bVar2 = std::operator==("[exp bonus]",&local_34);
                if (bVar2) {
                  local_14 = this + 0x18;
                }
                else {
                  bVar2 = std::operator==("[gold bonus]",&local_34);
                  if (!bVar2) {
                    uVar5 = 0;
                    goto LAB_088e0dcb;
                  }
                  local_14 = this + 0x30;
                }
                std::make_pair<int&,int&>(local_20,&local_50);
                std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                          (local_30);
                if (local_2c != '\x01') {
                  uVar5 = std::string::c_str((string *)&local_34);
                  printf("ERROR [%s][%s] key duplicated\n",param_1,uVar5);
                }
              }
            }
            else {
              bVar2 = std::operator==("[manage basic explain]",&local_34);
              if (bVar2) {
                std::
                map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                ::clear((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                         *)(this + 0x4c));
                local_58 = 0;
                while (local_39 = (bool)ScanStr(local_38), local_39 == true) {
                  this_00 = (string *)
                            std::
                            map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                            ::operator[]((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                                          *)(this + 0x4c),&local_58);
                  std::string::operator=(this_00,local_38);
                  local_58 = local_58 + 1;
                }
              }
              else {
                bVar2 = std::operator==("[manage option]",&local_34);
                if (bVar2) {
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
                            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(this + 100));
                  while (local_5c = ScanInt(&local_39), local_39 == true) {
                    local_10 = ScanInt((bool *)0x0);
                    puVar3 = (undefined4 *)
                             std::
                             map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                             operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 100),&local_5c);
                    *puVar3 = local_10;
                  }
                }
                else {
                  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::clear
                            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>
                              *)(this + 0x7c));
                  while (cVar1 = ScanStr(local_38), cVar1 == '\x01') {
                    pcVar4 = (char *)std::string::c_str(local_38);
                    local_64 = ContentsType::getType(pcVar4);
                    local_60 = ScanInt((bool *)0x0);
                    std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::
                    push_back((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>
                               *)(this + 0x7c),(ContentsOptionRevision *)&local_64);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 1;
LAB_088e0dcb:
                    /* try { // try from 088e0dd1 to 088e0dd5 has its CatchHandler @ 088e0dd8 */
    std::string::~string(local_38);
    std::string::~string((string *)&local_34);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## ~CharacManageScript

```asm
// === 088e07f6 CharacManageScript::~CharacManageScript  [0x088e07f6-0x88e0903] ===
 88e07f6:	55                   	push   %ebp
 88e07f7:	89 e5                	mov    %esp,%ebp
 88e07f9:	56                   	push   %esi
 88e07fa:	53                   	push   %ebx
 88e07fb:	83 ec 10             	sub    $0x10,%esp
 88e07fe:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0801:	83 c0 7c             	add    $0x7c,%eax
 88e0804:	89 04 24             	mov    %eax,(%esp)
 88e0807:	e8 de 0c 00 00       	call   88e14ea <_ZNSt6vectorI22ContentsOptionRevisionSaIS0_EED1Ev>
 88e080c:	eb 18                	jmp    88e0826 <_ZN18CharacManageScriptD1Ev+0x30>
 88e080e:	89 d3                	mov    %edx,%ebx
 88e0810:	89 c6                	mov    %eax,%esi
 88e0812:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0815:	83 c0 64             	add    $0x64,%eax
 88e0818:	89 04 24             	mov    %eax,(%esp)
 88e081b:	e8 a6 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e0820:	89 f0                	mov    %esi,%eax
 88e0822:	89 da                	mov    %ebx,%edx
 88e0824:	eb 10                	jmp    88e0836 <_ZN18CharacManageScriptD1Ev+0x40>
 88e0826:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0829:	83 c0 64             	add    $0x64,%eax
 88e082c:	89 04 24             	mov    %eax,(%esp)
 88e082f:	e8 92 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e0834:	eb 18                	jmp    88e084e <_ZN18CharacManageScriptD1Ev+0x58>
 88e0836:	89 d3                	mov    %edx,%ebx
 88e0838:	89 c6                	mov    %eax,%esi
 88e083a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e083d:	83 c0 4c             	add    $0x4c,%eax
 88e0840:	89 04 24             	mov    %eax,(%esp)
 88e0843:	e8 6a 62 7e ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 88e0848:	89 f0                	mov    %esi,%eax
 88e084a:	89 da                	mov    %ebx,%edx
 88e084c:	eb 10                	jmp    88e085e <_ZN18CharacManageScriptD1Ev+0x68>
 88e084e:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0851:	83 c0 4c             	add    $0x4c,%eax
 88e0854:	89 04 24             	mov    %eax,(%esp)
 88e0857:	e8 56 62 7e ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 88e085c:	eb 18                	jmp    88e0876 <_ZN18CharacManageScriptD1Ev+0x80>
 88e085e:	89 d3                	mov    %edx,%ebx
 88e0860:	89 c6                	mov    %eax,%esi
 88e0862:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0865:	83 c0 30             	add    $0x30,%eax
 88e0868:	89 04 24             	mov    %eax,(%esp)
 88e086b:	e8 56 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e0870:	89 f0                	mov    %esi,%eax
 88e0872:	89 da                	mov    %ebx,%edx
 88e0874:	eb 10                	jmp    88e0886 <_ZN18CharacManageScriptD1Ev+0x90>
 88e0876:	8b 45 08             	mov    0x8(%ebp),%eax
 88e0879:	83 c0 30             	add    $0x30,%eax
 88e087c:	89 04 24             	mov    %eax,(%esp)
 88e087f:	e8 42 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e0884:	eb 18                	jmp    88e089e <_ZN18CharacManageScriptD1Ev+0xa8>
 88e0886:	89 d3                	mov    %edx,%ebx
 88e0888:	89 c6                	mov    %eax,%esi
 88e088a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e088d:	83 c0 18             	add    $0x18,%eax
 88e0890:	89 04 24             	mov    %eax,(%esp)
 88e0893:	e8 2e 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e0898:	89 f0                	mov    %esi,%eax
 88e089a:	89 da                	mov    %ebx,%edx
 88e089c:	eb 10                	jmp    88e08ae <_ZN18CharacManageScriptD1Ev+0xb8>
 88e089e:	8b 45 08             	mov    0x8(%ebp),%eax
 88e08a1:	83 c0 18             	add    $0x18,%eax
 88e08a4:	89 04 24             	mov    %eax,(%esp)
 88e08a7:	e8 1a 62 7e ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88e08ac:	eb 18                	jmp    88e08c6 <_ZN18CharacManageScriptD1Ev+0xd0>
 88e08ae:	89 d3                	mov    %edx,%ebx
 88e08b0:	89 c6                	mov    %eax,%esi
 88e08b2:	8b 45 08             	mov    0x8(%ebp),%eax
 88e08b5:	83 c0 0c             	add    $0xc,%eax
 88e08b8:	89 04 24             	mov    %eax,(%esp)
 88e08bb:	e8 1a 35 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88e08c0:	89 f0                	mov    %esi,%eax
 88e08c2:	89 da                	mov    %ebx,%edx
 88e08c4:	eb 10                	jmp    88e08d6 <_ZN18CharacManageScriptD1Ev+0xe0>
 88e08c6:	8b 45 08             	mov    0x8(%ebp),%eax
 88e08c9:	83 c0 0c             	add    $0xc,%eax
 88e08cc:	89 04 24             	mov    %eax,(%esp)
 88e08cf:	e8 06 35 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88e08d4:	eb 1b                	jmp    88e08f1 <_ZN18CharacManageScriptD1Ev+0xfb>
 88e08d6:	89 d3                	mov    %edx,%ebx
 88e08d8:	89 c6                	mov    %eax,%esi
 88e08da:	8b 45 08             	mov    0x8(%ebp),%eax
 88e08dd:	89 04 24             	mov    %eax,(%esp)
 88e08e0:	e8 93 0b 00 00       	call   88e1478 <_ZNSt6vectorI16ManagePointBonusSaIS0_EED1Ev>
 88e08e5:	89 f0                	mov    %esi,%eax
 88e08e7:	89 da                	mov    %ebx,%edx
 88e08e9:	89 04 24             	mov    %eax,(%esp)
 88e08ec:	e8 5f 2e 20 00       	call   8ae3750 <_Unwind_Resume>
 88e08f1:	8b 45 08             	mov    0x8(%ebp),%eax
 88e08f4:	89 04 24             	mov    %eax,(%esp)
 88e08f7:	e8 7c 0b 00 00       	call   88e1478 <_ZNSt6vectorI16ManagePointBonusSaIS0_EED1Ev>
 88e08fc:	83 c4 10             	add    $0x10,%esp
 88e08ff:	5b                   	pop    %ebx
 88e0900:	5e                   	pop    %esi
 88e0901:	5d                   	pop    %ebp
 88e0902:	c3                   	ret
 88e0903:	90                   	nop

```

```c
// CharacManageScript::~CharacManageScript @ 0x88e07f6

/* CharacManageScript::~CharacManageScript() */

void __thiscall CharacManageScript::~CharacManageScript(CharacManageScript *this)

{
                    /* try { // try from 088e0807 to 088e080b has its CatchHandler @ 088e080e */
  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::~vector
            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>> *)(this + 0x7c))
  ;
                    /* try { // try from 088e082f to 088e0833 has its CatchHandler @ 088e0836 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
                    /* try { // try from 088e0857 to 088e085b has its CatchHandler @ 088e085e */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
                    /* try { // try from 088e087f to 088e0883 has its CatchHandler @ 088e0886 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 088e08a7 to 088e08ab has its CatchHandler @ 088e08ae */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 088e08cf to 088e08d3 has its CatchHandler @ 088e08d6 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc));
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::~vector
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
  return;
}

```

