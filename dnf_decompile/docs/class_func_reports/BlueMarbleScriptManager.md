# BlueMarbleScriptManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## BlueMarbleScriptManager

```asm
// === 088d614a BlueMarbleScriptManager::BlueMarbleScriptManager  [0x088d614a-0x88d622b] ===
 88d614a:	55                   	push   %ebp
 88d614b:	89 e5                	mov    %esp,%ebp
 88d614d:	56                   	push   %esi
 88d614e:	53                   	push   %ebx
 88d614f:	83 ec 10             	sub    $0x10,%esp
 88d6152:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6155:	89 04 24             	mov    %eax,(%esp)
 88d6158:	e8 9b 4b fe ff       	call   88bacf8 <_ZN16STScriptFileListC1Ev>
 88d615d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6160:	83 c0 18             	add    $0x18,%eax
 88d6163:	89 04 24             	mov    %eax,(%esp)
 88d6166:	e8 8d 4b fe ff       	call   88bacf8 <_ZN16STScriptFileListC1Ev>
 88d616b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d616e:	83 c0 30             	add    $0x30,%eax
 88d6171:	89 04 24             	mov    %eax,(%esp)
 88d6174:	e8 17 f5 ff ff       	call   88d5690 <_ZN20BlueMarbleInfoScriptC1Ev>
 88d6179:	8b 45 08             	mov    0x8(%ebp),%eax
 88d617c:	05 bc 00 00 00       	add    $0xbc,%eax
 88d6181:	89 04 24             	mov    %eax,(%esp)
 88d6184:	e8 c3 0a 00 00       	call   88d6c4c <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 88d6189:	8b 45 08             	mov    0x8(%ebp),%eax
 88d618c:	05 d4 00 00 00       	add    $0xd4,%eax
 88d6191:	89 04 24             	mov    %eax,(%esp)
 88d6194:	e8 c7 0a 00 00       	call   88d6c60 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 88d6199:	8b 45 08             	mov    0x8(%ebp),%eax
 88d619c:	89 04 24             	mov    %eax,(%esp)
 88d619f:	e8 88 00 00 00       	call   88d622c <_ZN23BlueMarbleScriptManager5clearEv>
 88d61a4:	eb 7f                	jmp    88d6225 <_ZN23BlueMarbleScriptManagerC1Ev+0xdb>
 88d61a6:	89 d3                	mov    %edx,%ebx
 88d61a8:	89 c6                	mov    %eax,%esi
 88d61aa:	8b 45 08             	mov    0x8(%ebp),%eax
 88d61ad:	05 d4 00 00 00       	add    $0xd4,%eax
 88d61b2:	89 04 24             	mov    %eax,(%esp)
 88d61b5:	e8 86 81 aa ff       	call   837e340 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 88d61ba:	89 f0                	mov    %esi,%eax
 88d61bc:	89 da                	mov    %ebx,%edx
 88d61be:	eb 00                	jmp    88d61c0 <_ZN23BlueMarbleScriptManagerC1Ev+0x76>
 88d61c0:	89 d3                	mov    %edx,%ebx
 88d61c2:	89 c6                	mov    %eax,%esi
 88d61c4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d61c7:	05 bc 00 00 00       	add    $0xbc,%eax
 88d61cc:	89 04 24             	mov    %eax,(%esp)
 88d61cf:	e8 58 81 aa ff       	call   837e32c <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 88d61d4:	89 f0                	mov    %esi,%eax
 88d61d6:	89 da                	mov    %ebx,%edx
 88d61d8:	eb 00                	jmp    88d61da <_ZN23BlueMarbleScriptManagerC1Ev+0x90>
 88d61da:	89 d3                	mov    %edx,%ebx
 88d61dc:	89 c6                	mov    %eax,%esi
 88d61de:	8b 45 08             	mov    0x8(%ebp),%eax
 88d61e1:	83 c0 30             	add    $0x30,%eax
 88d61e4:	89 04 24             	mov    %eax,(%esp)
 88d61e7:	e8 2c 80 aa ff       	call   837e218 <_ZN20BlueMarbleInfoScriptD1Ev>
 88d61ec:	89 f0                	mov    %esi,%eax
 88d61ee:	89 da                	mov    %ebx,%edx
 88d61f0:	eb 00                	jmp    88d61f2 <_ZN23BlueMarbleScriptManagerC1Ev+0xa8>
 88d61f2:	89 d3                	mov    %edx,%ebx
 88d61f4:	89 c6                	mov    %eax,%esi
 88d61f6:	8b 45 08             	mov    0x8(%ebp),%eax
 88d61f9:	83 c0 18             	add    $0x18,%eax
 88d61fc:	89 04 24             	mov    %eax,(%esp)
 88d61ff:	e8 4e b1 81 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 88d6204:	89 f0                	mov    %esi,%eax
 88d6206:	89 da                	mov    %ebx,%edx
 88d6208:	eb 00                	jmp    88d620a <_ZN23BlueMarbleScriptManagerC1Ev+0xc0>
 88d620a:	89 d3                	mov    %edx,%ebx
 88d620c:	89 c6                	mov    %eax,%esi
 88d620e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6211:	89 04 24             	mov    %eax,(%esp)
 88d6214:	e8 39 b1 81 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 88d6219:	89 f0                	mov    %esi,%eax
 88d621b:	89 da                	mov    %ebx,%edx
 88d621d:	89 04 24             	mov    %eax,(%esp)
 88d6220:	e8 2b d5 20 00       	call   8ae3750 <_Unwind_Resume>
 88d6225:	83 c4 10             	add    $0x10,%esp
 88d6228:	5b                   	pop    %ebx
 88d6229:	5e                   	pop    %esi
 88d622a:	5d                   	pop    %ebp
 88d622b:	c3                   	ret

```

```c
// BlueMarbleScriptManager::BlueMarbleScriptManager @ 0x88d614a

/* BlueMarbleScriptManager::BlueMarbleScriptManager() */

void __thiscall BlueMarbleScriptManager::BlueMarbleScriptManager(BlueMarbleScriptManager *this)

{
  STScriptFileList::STScriptFileList((STScriptFileList *)this);
                    /* try { // try from 088d6166 to 088d616a has its CatchHandler @ 088d620a */
  STScriptFileList::STScriptFileList((STScriptFileList *)(this + 0x18));
                    /* try { // try from 088d6174 to 088d6178 has its CatchHandler @ 088d61f2 */
  BlueMarbleInfoScript::BlueMarbleInfoScript((BlueMarbleInfoScript *)(this + 0x30));
                    /* try { // try from 088d6184 to 088d6188 has its CatchHandler @ 088d61da */
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::map((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
         *)(this + 0xbc));
                    /* try { // try from 088d6194 to 088d6198 has its CatchHandler @ 088d61c0 */
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::map((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
         *)(this + 0xd4));
                    /* try { // try from 088d619f to 088d61a3 has its CatchHandler @ 088d61a6 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 088d622c BlueMarbleScriptManager::clear  [0x088d622c-0x88d626d] ===
 88d622c:	55                   	push   %ebp
 88d622d:	89 e5                	mov    %esp,%ebp
 88d622f:	83 ec 18             	sub    $0x18,%esp
 88d6232:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6235:	89 04 24             	mov    %eax,(%esp)
 88d6238:	e8 fd 4a fe ff       	call   88bad3a <_ZN16STScriptFileList5ClearEv>
 88d623d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6240:	83 c0 18             	add    $0x18,%eax
 88d6243:	89 04 24             	mov    %eax,(%esp)
 88d6246:	e8 ef 4a fe ff       	call   88bad3a <_ZN16STScriptFileList5ClearEv>
 88d624b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d624e:	05 bc 00 00 00       	add    $0xbc,%eax
 88d6253:	89 04 24             	mov    %eax,(%esp)
 88d6256:	e8 19 0a 00 00       	call   88d6c74 <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88d625b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d625e:	05 d4 00 00 00       	add    $0xd4,%eax
 88d6263:	89 04 24             	mov    %eax,(%esp)
 88d6266:	e8 1d 0a 00 00       	call   88d6c88 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88d626b:	c9                   	leave
 88d626c:	c3                   	ret
 88d626d:	90                   	nop

```

```c
// BlueMarbleScriptManager::clear @ 0x88d622c

/* BlueMarbleScriptManager::clear() */

void __thiscall BlueMarbleScriptManager::clear(BlueMarbleScriptManager *this)

{
  STScriptFileList::Clear((STScriptFileList *)this);
  STScriptFileList::Clear((STScriptFileList *)(this + 0x18));
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::clear((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
           *)(this + 0xbc));
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::clear((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
           *)(this + 0xd4));
  return;
}

```

---

## getInsance

```asm
// === 088d60f2 BlueMarbleScriptManager::getInsance  [0x088d60f2-0x88d6149] ===
 88d60f2:	55                   	push   %ebp
 88d60f3:	89 e5                	mov    %esp,%ebp
 88d60f5:	57                   	push   %edi
 88d60f6:	56                   	push   %esi
 88d60f7:	53                   	push   %ebx
 88d60f8:	83 ec 1c             	sub    $0x1c,%esp
 88d60fb:	a1 50 6b 4f 09       	mov    0x94f6b50,%eax
 88d6100:	85 c0                	test   %eax,%eax
 88d6102:	75 39                	jne    88d613d <_ZN23BlueMarbleScriptManager10getInsanceEv+0x4b>
 88d6104:	c7 04 24 ec 00 00 00 	movl   $0xec,(%esp)
 88d610b:	e8 40 e3 e4 ff       	call   8724450 <_Znwj>
 88d6110:	89 c3                	mov    %eax,%ebx
 88d6112:	89 d8                	mov    %ebx,%eax
 88d6114:	89 04 24             	mov    %eax,(%esp)
 88d6117:	e8 2e 00 00 00       	call   88d614a <_ZN23BlueMarbleScriptManagerC1Ev>
 88d611c:	eb 18                	jmp    88d6136 <_ZN23BlueMarbleScriptManager10getInsanceEv+0x44>
 88d611e:	89 d6                	mov    %edx,%esi
 88d6120:	89 c7                	mov    %eax,%edi
 88d6122:	89 1c 24             	mov    %ebx,(%esp)
 88d6125:	e8 c6 e3 e4 ff       	call   87244f0 <_ZdlPv>
 88d612a:	89 f8                	mov    %edi,%eax
 88d612c:	89 f2                	mov    %esi,%edx
 88d612e:	89 04 24             	mov    %eax,(%esp)
 88d6131:	e8 1a d6 20 00       	call   8ae3750 <_Unwind_Resume>
 88d6136:	89 d8                	mov    %ebx,%eax
 88d6138:	a3 50 6b 4f 09       	mov    %eax,0x94f6b50
 88d613d:	a1 50 6b 4f 09       	mov    0x94f6b50,%eax
 88d6142:	83 c4 1c             	add    $0x1c,%esp
 88d6145:	5b                   	pop    %ebx
 88d6146:	5e                   	pop    %esi
 88d6147:	5f                   	pop    %edi
 88d6148:	5d                   	pop    %ebp
 88d6149:	c3                   	ret

```

```c
// BlueMarbleScriptManager::getInsance @ 0x88d60f2

/* BlueMarbleScriptManager::getInsance() */

BlueMarbleScriptManager * BlueMarbleScriptManager::getInsance(void)

{
  BlueMarbleScriptManager *this;
  
  if (getInsance()::instance == (BlueMarbleScriptManager *)0x0) {
    this = operator_new(0xec);
                    /* try { // try from 088d6117 to 088d611b has its CatchHandler @ 088d611e */
    BlueMarbleScriptManager(this);
    getInsance()::instance = this;
  }
  return getInsance()::instance;
}

```

---

## getMap

```asm
// === 088d66b6 BlueMarbleScriptManager::getMap  [0x088d66b6-0x88d6725] ===
 88d66b6:	55                   	push   %ebp
 88d66b7:	89 e5                	mov    %esp,%ebp
 88d66b9:	83 ec 28             	sub    $0x28,%esp
 88d66bc:	8b 45 08             	mov    0x8(%ebp),%eax
 88d66bf:	8d 88 d4 00 00 00    	lea    0xd4(%eax),%ecx
 88d66c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d66c8:	8d 55 0c             	lea    0xc(%ebp),%edx
 88d66cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d66cf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88d66d3:	89 04 24             	mov    %eax,(%esp)
 88d66d6:	e8 21 08 00 00       	call   88d6efc <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 88d66db:	83 ec 04             	sub    $0x4,%esp
 88d66de:	8b 45 08             	mov    0x8(%ebp),%eax
 88d66e1:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 88d66e7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d66ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d66ee:	89 04 24             	mov    %eax,(%esp)
 88d66f1:	e8 32 08 00 00       	call   88d6f28 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 88d66f6:	83 ec 04             	sub    $0x4,%esp
 88d66f9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d66fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6700:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d6703:	89 04 24             	mov    %eax,(%esp)
 88d6706:	e8 43 08 00 00       	call   88d6f4e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP19BlueMarbleMapScriptEEneERKS5_>
 88d670b:	84 c0                	test   %al,%al
 88d670d:	74 10                	je     88d671f <_ZN23BlueMarbleScriptManager6getMapEi+0x69>
 88d670f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d6712:	89 04 24             	mov    %eax,(%esp)
 88d6715:	e8 48 08 00 00       	call   88d6f62 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP19BlueMarbleMapScriptEEptEv>
 88d671a:	8b 40 04             	mov    0x4(%eax),%eax
 88d671d:	eb 05                	jmp    88d6724 <_ZN23BlueMarbleScriptManager6getMapEi+0x6e>
 88d671f:	b8 00 00 00 00       	mov    $0x0,%eax
 88d6724:	c9                   	leave
 88d6725:	c3                   	ret

```

```c
// BlueMarbleScriptManager::getMap @ 0x88d66b6

/* BlueMarbleScriptManager::getMap(int) */

undefined4 BlueMarbleScriptManager::getMap(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>> local_14 [4];
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  local_10 [12];
  
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::find((int *)local_14);
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getMapTotalCount

```asm
// === 088d6726 BlueMarbleScriptManager::getMapTotalCount  [0x088d6726-0x88d673d] ===
 88d6726:	55                   	push   %ebp
 88d6727:	89 e5                	mov    %esp,%ebp
 88d6729:	83 ec 18             	sub    $0x18,%esp
 88d672c:	8b 45 08             	mov    0x8(%ebp),%eax
 88d672f:	05 d4 00 00 00       	add    $0xd4,%eax
 88d6734:	89 04 24             	mov    %eax,(%esp)
 88d6737:	e8 34 08 00 00       	call   88d6f70 <_ZNKSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 88d673c:	c9                   	leave
 88d673d:	c3                   	ret

```

```c
// BlueMarbleScriptManager::getMapTotalCount @ 0x88d6726

/* BlueMarbleScriptManager::getMapTotalCount() */

void __thiscall BlueMarbleScriptManager::getMapTotalCount(BlueMarbleScriptManager *this)

{
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::size((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
          *)(this + 0xd4));
  return;
}

```

---

## getTile

```asm
// === 088d6646 BlueMarbleScriptManager::getTile  [0x088d6646-0x88d66b5] ===
 88d6646:	55                   	push   %ebp
 88d6647:	89 e5                	mov    %esp,%ebp
 88d6649:	83 ec 28             	sub    $0x28,%esp
 88d664c:	8b 45 08             	mov    0x8(%ebp),%eax
 88d664f:	8d 88 bc 00 00 00    	lea    0xbc(%eax),%ecx
 88d6655:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d6658:	8d 55 0c             	lea    0xc(%ebp),%edx
 88d665b:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d665f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88d6663:	89 04 24             	mov    %eax,(%esp)
 88d6666:	e8 1d 08 00 00       	call   88d6e88 <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 88d666b:	83 ec 04             	sub    $0x4,%esp
 88d666e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6671:	8d 90 bc 00 00 00    	lea    0xbc(%eax),%edx
 88d6677:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d667a:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d667e:	89 04 24             	mov    %eax,(%esp)
 88d6681:	e8 2e 08 00 00       	call   88d6eb4 <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 88d6686:	83 ec 04             	sub    $0x4,%esp
 88d6689:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d668c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6690:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d6693:	89 04 24             	mov    %eax,(%esp)
 88d6696:	e8 3f 08 00 00       	call   88d6eda <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20BlueMarbleTileScriptEEneERKS5_>
 88d669b:	84 c0                	test   %al,%al
 88d669d:	74 10                	je     88d66af <_ZN23BlueMarbleScriptManager7getTileEi+0x69>
 88d669f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d66a2:	89 04 24             	mov    %eax,(%esp)
 88d66a5:	e8 44 08 00 00       	call   88d6eee <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20BlueMarbleTileScriptEEptEv>
 88d66aa:	8b 40 04             	mov    0x4(%eax),%eax
 88d66ad:	eb 05                	jmp    88d66b4 <_ZN23BlueMarbleScriptManager7getTileEi+0x6e>
 88d66af:	b8 00 00 00 00       	mov    $0x0,%eax
 88d66b4:	c9                   	leave
 88d66b5:	c3                   	ret

```

```c
// BlueMarbleScriptManager::getTile @ 0x88d6646

/* BlueMarbleScriptManager::getTile(int) */

undefined4 BlueMarbleScriptManager::getTile(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>> local_14 [4];
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  local_10 [12];
  
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::find((int *)local_14);
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>>::operator->(local_14)
    ;
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## initBlueMarbleInfo

```asm
// === 088d6622 BlueMarbleScriptManager::initBlueMarbleInfo  [0x088d6622-0x88d6645] ===
 88d6622:	55                   	push   %ebp
 88d6623:	89 e5                	mov    %esp,%ebp
 88d6625:	83 ec 18             	sub    $0x18,%esp
 88d6628:	8b 45 08             	mov    0x8(%ebp),%eax
 88d662b:	8d 50 30             	lea    0x30(%eax),%edx
 88d662e:	8b 45 10             	mov    0x10(%ebp),%eax
 88d6631:	89 44 24 08          	mov    %eax,0x8(%esp)
 88d6635:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d6638:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d663c:	89 14 24             	mov    %edx,(%esp)
 88d663f:	e8 58 f2 ff ff       	call   88d589c <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_>
 88d6644:	c9                   	leave
 88d6645:	c3                   	ret

```

```c
// BlueMarbleScriptManager::initBlueMarbleInfo @ 0x88d6622

/* BlueMarbleScriptManager::initBlueMarbleInfo(char const*, char const*) */

void __thiscall
BlueMarbleScriptManager::initBlueMarbleInfo
          (BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  BlueMarbleInfoScript::importScript((BlueMarbleInfoScript *)(this + 0x30),param_1,param_2);
  return;
}

```

---

## initMapList

```asm
// === 088d6438 BlueMarbleScriptManager::initMapList  [0x088d6438-0x88d6621] ===
 88d6438:	55                   	push   %ebp
 88d6439:	89 e5                	mov    %esp,%ebp
 88d643b:	57                   	push   %edi
 88d643c:	56                   	push   %esi
 88d643d:	53                   	push   %ebx
 88d643e:	83 ec 3c             	sub    $0x3c,%esp
 88d6441:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6444:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 88d644b:	00 
 88d644c:	8b 55 10             	mov    0x10(%ebp),%edx
 88d644f:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d6453:	8b 55 0c             	mov    0xc(%ebp),%edx
 88d6456:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d645a:	89 04 24             	mov    %eax,(%esp)
 88d645d:	e8 15 59 fe ff       	call   88bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 88d6462:	83 f0 01             	xor    $0x1,%eax
 88d6465:	84 c0                	test   %al,%al
 88d6467:	74 0a                	je     88d6473 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x3b>
 88d6469:	b8 00 00 00 00       	mov    $0x0,%eax
 88d646e:	e9 a3 01 00 00       	jmp    88d6616 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x1de>
 88d6473:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6476:	05 d4 00 00 00       	add    $0xd4,%eax
 88d647b:	89 04 24             	mov    %eax,(%esp)
 88d647e:	e8 05 08 00 00       	call   88d6c88 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88d6483:	8b 55 08             	mov    0x8(%ebp),%edx
 88d6486:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d6489:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d648d:	89 04 24             	mov    %eax,(%esp)
 88d6490:	e8 5d fc 80 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 88d6495:	83 ec 04             	sub    $0x4,%esp
 88d6498:	e9 45 01 00 00       	jmp    88d65e2 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x1aa>
 88d649d:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 88d64a4:	e8 a7 df e4 ff       	call   8724450 <_Znwj>
 88d64a9:	89 c3                	mov    %eax,%ebx
 88d64ab:	89 d8                	mov    %ebx,%eax
 88d64ad:	89 04 24             	mov    %eax,(%esp)
 88d64b0:	e8 21 ef ff ff       	call   88d53d6 <_ZN19BlueMarbleMapScriptC1Ev>
 88d64b5:	eb 18                	jmp    88d64cf <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x97>
 88d64b7:	89 d6                	mov    %edx,%esi
 88d64b9:	89 c7                	mov    %eax,%edi
 88d64bb:	89 1c 24             	mov    %ebx,(%esp)
 88d64be:	e8 2d e0 e4 ff       	call   87244f0 <_ZdlPv>
 88d64c3:	89 f8                	mov    %edi,%eax
 88d64c5:	89 f2                	mov    %esi,%edx
 88d64c7:	89 04 24             	mov    %eax,(%esp)
 88d64ca:	e8 81 d2 20 00       	call   8ae3750 <_Unwind_Resume>
 88d64cf:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 88d64d2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d64d5:	89 04 24             	mov    %eax,(%esp)
 88d64d8:	e8 db fc 80 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 88d64dd:	8b 00                	mov    (%eax),%eax
 88d64df:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 88d64e2:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 88d64e5:	89 04 24             	mov    %eax,(%esp)
 88d64e8:	e8 e3 9b e0 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 88d64ed:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 88d64f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 88d64f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d64f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d64fb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d64fe:	89 04 24             	mov    %eax,(%esp)
 88d6501:	e8 2a 11 e3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 88d6506:	eb 1b                	jmp    88d6523 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0xeb>
 88d6508:	89 d3                	mov    %edx,%ebx
 88d650a:	89 c6                	mov    %eax,%esi
 88d650c:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 88d650f:	89 04 24             	mov    %eax,(%esp)
 88d6512:	e8 d9 9b e0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 88d6517:	89 f0                	mov    %esi,%eax
 88d6519:	89 da                	mov    %ebx,%edx
 88d651b:	89 04 24             	mov    %eax,(%esp)
 88d651e:	e8 2d d2 20 00       	call   8ae3750 <_Unwind_Resume>
 88d6523:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 88d6526:	89 04 24             	mov    %eax,(%esp)
 88d6529:	e8 c2 9b e0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 88d652e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d6531:	89 04 24             	mov    %eax,(%esp)
 88d6534:	e8 7f fc 80 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 88d6539:	83 c0 04             	add    $0x4,%eax
 88d653c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6540:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d6543:	89 04 24             	mov    %eax,(%esp)
 88d6546:	e8 a5 1c e3 ff       	call   87081f0 <_ZNSspLERKSs>
 88d654b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d654e:	89 04 24             	mov    %eax,(%esp)
 88d6551:	e8 9a ff e2 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88d6556:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d655a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d655d:	89 04 24             	mov    %eax,(%esp)
 88d6560:	e8 7d ef ff ff       	call   88d54e2 <_ZN19BlueMarbleMapScript12importScriptEPKc>
 88d6565:	83 f0 01             	xor    $0x1,%eax
 88d6568:	84 c0                	test   %al,%al
 88d656a:	74 26                	je     88d6592 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x15a>
 88d656c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 88d6570:	74 17                	je     88d6589 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x151>
 88d6572:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 88d6575:	85 db                	test   %ebx,%ebx
 88d6577:	74 10                	je     88d6589 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x151>
 88d6579:	89 1c 24             	mov    %ebx,(%esp)
 88d657c:	e8 97 ee ff ff       	call   88d5418 <_ZN19BlueMarbleMapScriptD1Ev>
 88d6581:	89 1c 24             	mov    %ebx,(%esp)
 88d6584:	e8 67 df e4 ff       	call   87244f0 <_ZdlPv>
 88d6589:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 88d6590:	eb 3a                	jmp    88d65cc <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x194>
 88d6592:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6595:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 88d659b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88d659e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d65a2:	89 14 24             	mov    %edx,(%esp)
 88d65a5:	e8 e8 07 00 00       	call   88d6d92 <_ZNSt3mapIiP19BlueMarbleMapScriptSt4lessIiESaISt4pairIKiS1_EEEixERS5_>
 88d65aa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 88d65ad:	89 10                	mov    %edx,(%eax)
 88d65af:	eb 1b                	jmp    88d65cc <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x194>
 88d65b1:	89 d3                	mov    %edx,%ebx
 88d65b3:	89 c6                	mov    %eax,%esi
 88d65b5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d65b8:	89 04 24             	mov    %eax,(%esp)
 88d65bb:	e8 20 16 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d65c0:	89 f0                	mov    %esi,%eax
 88d65c2:	89 da                	mov    %ebx,%edx
 88d65c4:	89 04 24             	mov    %eax,(%esp)
 88d65c7:	e8 84 d1 20 00       	call   8ae3750 <_Unwind_Resume>
 88d65cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d65cf:	89 04 24             	mov    %eax,(%esp)
 88d65d2:	e8 09 16 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d65d7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d65da:	89 04 24             	mov    %eax,(%esp)
 88d65dd:	e8 2e 00 81 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 88d65e2:	8b 55 08             	mov    0x8(%ebp),%edx
 88d65e5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88d65e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d65ec:	89 04 24             	mov    %eax,(%esp)
 88d65ef:	e8 24 fb 80 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88d65f4:	83 ec 04             	sub    $0x4,%esp
 88d65f7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88d65fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d65fe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d6601:	89 04 24             	mov    %eax,(%esp)
 88d6604:	e8 35 fb 80 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 88d6609:	84 c0                	test   %al,%al
 88d660b:	0f 85 8c fe ff ff    	jne    88d649d <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_+0x65>
 88d6611:	b8 01 00 00 00       	mov    $0x1,%eax
 88d6616:	8d 65 f4             	lea    -0xc(%ebp),%esp
 88d6619:	83 c4 00             	add    $0x0,%esp
 88d661c:	5b                   	pop    %ebx
 88d661d:	5e                   	pop    %esi
 88d661e:	5f                   	pop    %edi
 88d661f:	5d                   	pop    %ebp
 88d6620:	c3                   	ret
 88d6621:	90                   	nop

```

```c
// BlueMarbleScriptManager::initMapList @ 0x88d6438

/* BlueMarbleScriptManager::initMapList(char const*, char const*) */

undefined4 __thiscall
BlueMarbleScriptManager::initMapList(BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  BlueMarbleMapScript *pBVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  string local_34 [4];
  int local_30;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_28 [7];
  allocator<char> local_21;
  BlueMarbleMapScript *local_20;
  
  cVar1 = loadRDARScriptListFile((STScriptFileList *)this,param_1,param_2,(map *)0x0);
  if (cVar1 == '\x01') {
    std::
    map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
    ::clear((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
             *)(this + 0xd4));
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_2c);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_28);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c,
                         (_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') break;
      pBVar3 = operator_new(0xc);
                    /* try { // try from 088d64b0 to 088d64b4 has its CatchHandler @ 088d64b7 */
      BlueMarbleMapScript::BlueMarbleMapScript(pBVar3);
      local_20 = pBVar3;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
      local_30 = *piVar4;
      std::allocator<char>::allocator();
                    /* try { // try from 088d6501 to 088d6505 has its CatchHandler @ 088d6508 */
      std::string::string(local_34,param_1,(allocator *)&local_21);
      std::allocator<char>::~allocator(&local_21);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
                    /* try { // try from 088d6546 to 088d65a9 has its CatchHandler @ 088d65b1 */
      std::string::operator+=(local_34,(string *)(iVar5 + 4));
      pcVar6 = (char *)std::string::c_str(local_34);
      cVar1 = BlueMarbleMapScript::importScript(local_20,pcVar6);
      pBVar3 = local_20;
      if (cVar1 == '\x01') {
        puVar7 = (undefined4 *)
                 std::
                 map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
                 ::operator[]((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
                               *)(this + 0xd4),&local_30);
        *puVar7 = local_20;
      }
      else {
        if ((local_20 != (BlueMarbleMapScript *)0x0) && (local_20 != (BlueMarbleMapScript *)0x0)) {
          BlueMarbleMapScript::~BlueMarbleMapScript(local_20);
          operator_delete(pBVar3);
        }
        local_20 = (BlueMarbleMapScript *)0x0;
      }
      std::string::~string(local_34);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## initTileList

```asm
// === 088d626e BlueMarbleScriptManager::initTileList  [0x088d626e-0x88d6437] ===
 88d626e:	55                   	push   %ebp
 88d626f:	89 e5                	mov    %esp,%ebp
 88d6271:	56                   	push   %esi
 88d6272:	53                   	push   %ebx
 88d6273:	83 ec 30             	sub    $0x30,%esp
 88d6276:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6279:	8d 50 18             	lea    0x18(%eax),%edx
 88d627c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 88d6283:	00 
 88d6284:	8b 45 10             	mov    0x10(%ebp),%eax
 88d6287:	89 44 24 08          	mov    %eax,0x8(%esp)
 88d628b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d628e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6292:	89 14 24             	mov    %edx,(%esp)
 88d6295:	e8 dd 5a fe ff       	call   88bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 88d629a:	83 f0 01             	xor    $0x1,%eax
 88d629d:	84 c0                	test   %al,%al
 88d629f:	74 0a                	je     88d62ab <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x3d>
 88d62a1:	b8 00 00 00 00       	mov    $0x0,%eax
 88d62a6:	e9 83 01 00 00       	jmp    88d642e <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x1c0>
 88d62ab:	8b 45 08             	mov    0x8(%ebp),%eax
 88d62ae:	05 bc 00 00 00       	add    $0xbc,%eax
 88d62b3:	89 04 24             	mov    %eax,(%esp)
 88d62b6:	e8 b9 09 00 00       	call   88d6c74 <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88d62bb:	8b 45 08             	mov    0x8(%ebp),%eax
 88d62be:	8d 50 18             	lea    0x18(%eax),%edx
 88d62c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d62c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d62c8:	89 04 24             	mov    %eax,(%esp)
 88d62cb:	e8 22 fe 80 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 88d62d0:	83 ec 04             	sub    $0x4,%esp
 88d62d3:	e9 1f 01 00 00       	jmp    88d63f7 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x189>
 88d62d8:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 88d62df:	e8 6c e1 e4 ff       	call   8724450 <_Znwj>
 88d62e4:	89 c3                	mov    %eax,%ebx
 88d62e6:	89 d8                	mov    %ebx,%eax
 88d62e8:	89 04 24             	mov    %eax,(%esp)
 88d62eb:	e8 78 ed ff ff       	call   88d5068 <_ZN20BlueMarbleTileScriptC1Ev>
 88d62f0:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 88d62f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d62f6:	89 04 24             	mov    %eax,(%esp)
 88d62f9:	e8 ba fe 80 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 88d62fe:	8b 00                	mov    (%eax),%eax
 88d6300:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88d6303:	8d 45 f3             	lea    -0xd(%ebp),%eax
 88d6306:	89 04 24             	mov    %eax,(%esp)
 88d6309:	e8 c2 9d e0 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 88d630e:	8d 45 f3             	lea    -0xd(%ebp),%eax
 88d6311:	89 44 24 08          	mov    %eax,0x8(%esp)
 88d6315:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d6318:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d631c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88d631f:	89 04 24             	mov    %eax,(%esp)
 88d6322:	e8 09 13 e3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 88d6327:	eb 1b                	jmp    88d6344 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0xd6>
 88d6329:	89 d3                	mov    %edx,%ebx
 88d632b:	89 c6                	mov    %eax,%esi
 88d632d:	8d 45 f3             	lea    -0xd(%ebp),%eax
 88d6330:	89 04 24             	mov    %eax,(%esp)
 88d6333:	e8 b8 9d e0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 88d6338:	89 f0                	mov    %esi,%eax
 88d633a:	89 da                	mov    %ebx,%edx
 88d633c:	89 04 24             	mov    %eax,(%esp)
 88d633f:	e8 0c d4 20 00       	call   8ae3750 <_Unwind_Resume>
 88d6344:	8d 45 f3             	lea    -0xd(%ebp),%eax
 88d6347:	89 04 24             	mov    %eax,(%esp)
 88d634a:	e8 a1 9d e0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 88d634f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d6352:	89 04 24             	mov    %eax,(%esp)
 88d6355:	e8 5e fe 80 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 88d635a:	83 c0 04             	add    $0x4,%eax
 88d635d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6361:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88d6364:	89 04 24             	mov    %eax,(%esp)
 88d6367:	e8 84 1e e3 ff       	call   87081f0 <_ZNSspLERKSs>
 88d636c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88d636f:	89 04 24             	mov    %eax,(%esp)
 88d6372:	e8 79 01 e3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88d6377:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d637b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88d637e:	89 04 24             	mov    %eax,(%esp)
 88d6381:	e8 16 ed ff ff       	call   88d509c <_ZN20BlueMarbleTileScript12importScriptEPKc>
 88d6386:	83 f0 01             	xor    $0x1,%eax
 88d6389:	84 c0                	test   %al,%al
 88d638b:	74 1a                	je     88d63a7 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x139>
 88d638d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88d6391:	74 0b                	je     88d639e <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x130>
 88d6393:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88d6396:	89 04 24             	mov    %eax,(%esp)
 88d6399:	e8 52 e1 e4 ff       	call   87244f0 <_ZdlPv>
 88d639e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88d63a5:	eb 3a                	jmp    88d63e1 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x173>
 88d63a7:	8b 45 08             	mov    0x8(%ebp),%eax
 88d63aa:	8d 90 bc 00 00 00    	lea    0xbc(%eax),%edx
 88d63b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d63b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d63b7:	89 14 24             	mov    %edx,(%esp)
 88d63ba:	e8 dd 08 00 00       	call   88d6c9c <_ZNSt3mapIiP20BlueMarbleTileScriptSt4lessIiESaISt4pairIKiS1_EEEixERS5_>
 88d63bf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d63c2:	89 10                	mov    %edx,(%eax)
 88d63c4:	eb 1b                	jmp    88d63e1 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x173>
 88d63c6:	89 d3                	mov    %edx,%ebx
 88d63c8:	89 c6                	mov    %eax,%esi
 88d63ca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88d63cd:	89 04 24             	mov    %eax,(%esp)
 88d63d0:	e8 0b 18 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d63d5:	89 f0                	mov    %esi,%eax
 88d63d7:	89 da                	mov    %ebx,%edx
 88d63d9:	89 04 24             	mov    %eax,(%esp)
 88d63dc:	e8 6f d3 20 00       	call   8ae3750 <_Unwind_Resume>
 88d63e1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88d63e4:	89 04 24             	mov    %eax,(%esp)
 88d63e7:	e8 f4 17 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d63ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d63ef:	89 04 24             	mov    %eax,(%esp)
 88d63f2:	e8 19 02 81 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 88d63f7:	8b 45 08             	mov    0x8(%ebp),%eax
 88d63fa:	8d 50 18             	lea    0x18(%eax),%edx
 88d63fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d6400:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d6404:	89 04 24             	mov    %eax,(%esp)
 88d6407:	e8 0c fd 80 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88d640c:	83 ec 04             	sub    $0x4,%esp
 88d640f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d6412:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d6416:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d6419:	89 04 24             	mov    %eax,(%esp)
 88d641c:	e8 1d fd 80 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 88d6421:	84 c0                	test   %al,%al
 88d6423:	0f 85 af fe ff ff    	jne    88d62d8 <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_+0x6a>
 88d6429:	b8 01 00 00 00       	mov    $0x1,%eax
 88d642e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88d6431:	83 c4 00             	add    $0x0,%esp
 88d6434:	5b                   	pop    %ebx
 88d6435:	5e                   	pop    %esi
 88d6436:	5d                   	pop    %ebp
 88d6437:	c3                   	ret

```

```c
// BlueMarbleScriptManager::initTileList @ 0x88d626e

/* BlueMarbleScriptManager::initTileList(char const*, char const*) */

undefined4 __thiscall
BlueMarbleScriptManager::initTileList(BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  BlueMarbleTileScript *this_00;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  string local_24 [4];
  int local_20;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_1c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [7];
  allocator<char> local_11;
  BlueMarbleTileScript *local_10;
  
  cVar1 = loadRDARScriptListFile((STScriptFileList *)(this + 0x18),param_1,param_2,(map *)0x0);
  if (cVar1 == '\x01') {
    std::
    map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
    ::clear((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
             *)(this + 0xbc));
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_1c);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      this_00 = operator_new(0xc);
      BlueMarbleTileScript::BlueMarbleTileScript(this_00);
      local_10 = this_00;
      piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
      local_20 = *piVar3;
      std::allocator<char>::allocator();
                    /* try { // try from 088d6322 to 088d6326 has its CatchHandler @ 088d6329 */
      std::string::string(local_24,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
                    /* try { // try from 088d6367 to 088d63be has its CatchHandler @ 088d63c6 */
      std::string::operator+=(local_24,(string *)(iVar4 + 4));
      pcVar5 = (char *)std::string::c_str(local_24);
      cVar1 = BlueMarbleTileScript::importScript(local_10,pcVar5);
      if (cVar1 == '\x01') {
        puVar6 = (undefined4 *)
                 std::
                 map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
                 ::operator[]((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
                               *)(this + 0xbc),&local_20);
        *puVar6 = local_10;
      }
      else {
        if (local_10 != (BlueMarbleTileScript *)0x0) {
          operator_delete(local_10);
        }
        local_10 = (BlueMarbleTileScript *)0x0;
      }
      std::string::~string(local_24);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

