# BlueMarbleInfoScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## BlueMarbleInfoScript

```asm
// === 088d5690 BlueMarbleInfoScript::BlueMarbleInfoScript  [0x088d5690-0x88d57bf] ===
 88d5690:	55                   	push   %ebp
 88d5691:	89 e5                	mov    %esp,%ebp
 88d5693:	56                   	push   %esi
 88d5694:	53                   	push   %ebx
 88d5695:	83 ec 10             	sub    $0x10,%esp
 88d5698:	8b 45 08             	mov    0x8(%ebp),%eax
 88d569b:	83 c0 24             	add    $0x24,%eax
 88d569e:	89 04 24             	mov    %eax,(%esp)
 88d56a1:	e8 08 12 00 00       	call   88d68ae <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EEC1Ev>
 88d56a6:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56a9:	83 c0 44             	add    $0x44,%eax
 88d56ac:	89 04 24             	mov    %eax,(%esp)
 88d56af:	e8 0e 12 00 00       	call   88d68c2 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEC1Ev>
 88d56b4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56b7:	83 c0 50             	add    $0x50,%eax
 88d56ba:	89 04 24             	mov    %eax,(%esp)
 88d56bd:	e8 00 12 00 00       	call   88d68c2 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEC1Ev>
 88d56c2:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56c5:	83 c0 5c             	add    $0x5c,%eax
 88d56c8:	89 04 24             	mov    %eax,(%esp)
 88d56cb:	e8 f2 11 00 00       	call   88d68c2 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEC1Ev>
 88d56d0:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56d3:	83 c0 68             	add    $0x68,%eax
 88d56d6:	89 04 24             	mov    %eax,(%esp)
 88d56d9:	e8 f8 11 00 00       	call   88d68d6 <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EEC1Ev>
 88d56de:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56e1:	83 c0 74             	add    $0x74,%eax
 88d56e4:	89 04 24             	mov    %eax,(%esp)
 88d56e7:	e8 fe 11 00 00       	call   88d68ea <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEC1Ev>
 88d56ec:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56ef:	83 e8 80             	sub    $0xffffff80,%eax
 88d56f2:	89 04 24             	mov    %eax,(%esp)
 88d56f5:	e8 04 12 00 00       	call   88d68fe <_ZNSt6vectorI17BlueMarbleTilePosSaIS0_EEC1Ev>
 88d56fa:	8b 45 08             	mov    0x8(%ebp),%eax
 88d56fd:	89 04 24             	mov    %eax,(%esp)
 88d5700:	e8 bb 00 00 00       	call   88d57c0 <_ZN20BlueMarbleInfoScript5clearEv>
 88d5705:	e9 ae 00 00 00       	jmp    88d57b8 <_ZN20BlueMarbleInfoScriptC1Ev+0x128>
 88d570a:	89 d3                	mov    %edx,%ebx
 88d570c:	89 c6                	mov    %eax,%esi
 88d570e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5711:	83 e8 80             	sub    $0xffffff80,%eax
 88d5714:	89 04 24             	mov    %eax,(%esp)
 88d5717:	e8 54 d3 ab ff       	call   8392a70 <_ZNSt6vectorI17BlueMarbleTilePosSaIS0_EED1Ev>
 88d571c:	89 f0                	mov    %esi,%eax
 88d571e:	89 da                	mov    %ebx,%edx
 88d5720:	eb 00                	jmp    88d5722 <_ZN20BlueMarbleInfoScriptC1Ev+0x92>
 88d5722:	89 d3                	mov    %edx,%ebx
 88d5724:	89 c6                	mov    %eax,%esi
 88d5726:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5729:	83 c0 74             	add    $0x74,%eax
 88d572c:	89 04 24             	mov    %eax,(%esp)
 88d572f:	e8 de d2 ab ff       	call   8392a12 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EED1Ev>
 88d5734:	89 f0                	mov    %esi,%eax
 88d5736:	89 da                	mov    %ebx,%edx
 88d5738:	eb 00                	jmp    88d573a <_ZN20BlueMarbleInfoScriptC1Ev+0xaa>
 88d573a:	89 d3                	mov    %edx,%ebx
 88d573c:	89 c6                	mov    %eax,%esi
 88d573e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5741:	83 c0 68             	add    $0x68,%eax
 88d5744:	89 04 24             	mov    %eax,(%esp)
 88d5747:	e8 68 d2 ab ff       	call   83929b4 <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EED1Ev>
 88d574c:	89 f0                	mov    %esi,%eax
 88d574e:	89 da                	mov    %ebx,%edx
 88d5750:	eb 00                	jmp    88d5752 <_ZN20BlueMarbleInfoScriptC1Ev+0xc2>
 88d5752:	89 d3                	mov    %edx,%ebx
 88d5754:	89 c6                	mov    %eax,%esi
 88d5756:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5759:	83 c0 5c             	add    $0x5c,%eax
 88d575c:	89 04 24             	mov    %eax,(%esp)
 88d575f:	e8 f2 d1 ab ff       	call   8392956 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EED1Ev>
 88d5764:	89 f0                	mov    %esi,%eax
 88d5766:	89 da                	mov    %ebx,%edx
 88d5768:	eb 00                	jmp    88d576a <_ZN20BlueMarbleInfoScriptC1Ev+0xda>
 88d576a:	89 d3                	mov    %edx,%ebx
 88d576c:	89 c6                	mov    %eax,%esi
 88d576e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5771:	83 c0 50             	add    $0x50,%eax
 88d5774:	89 04 24             	mov    %eax,(%esp)
 88d5777:	e8 da d1 ab ff       	call   8392956 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EED1Ev>
 88d577c:	89 f0                	mov    %esi,%eax
 88d577e:	89 da                	mov    %ebx,%edx
 88d5780:	eb 00                	jmp    88d5782 <_ZN20BlueMarbleInfoScriptC1Ev+0xf2>
 88d5782:	89 d3                	mov    %edx,%ebx
 88d5784:	89 c6                	mov    %eax,%esi
 88d5786:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5789:	83 c0 44             	add    $0x44,%eax
 88d578c:	89 04 24             	mov    %eax,(%esp)
 88d578f:	e8 c2 d1 ab ff       	call   8392956 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EED1Ev>
 88d5794:	89 f0                	mov    %esi,%eax
 88d5796:	89 da                	mov    %ebx,%edx
 88d5798:	eb 00                	jmp    88d579a <_ZN20BlueMarbleInfoScriptC1Ev+0x10a>
 88d579a:	89 d3                	mov    %edx,%ebx
 88d579c:	89 c6                	mov    %eax,%esi
 88d579e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57a1:	83 c0 24             	add    $0x24,%eax
 88d57a4:	89 04 24             	mov    %eax,(%esp)
 88d57a7:	e8 4c d1 ab ff       	call   83928f8 <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EED1Ev>
 88d57ac:	89 f0                	mov    %esi,%eax
 88d57ae:	89 da                	mov    %ebx,%edx
 88d57b0:	89 04 24             	mov    %eax,(%esp)
 88d57b3:	e8 98 df 20 00       	call   8ae3750 <_Unwind_Resume>
 88d57b8:	83 c4 10             	add    $0x10,%esp
 88d57bb:	5b                   	pop    %ebx
 88d57bc:	5e                   	pop    %esi
 88d57bd:	5d                   	pop    %ebp
 88d57be:	c3                   	ret
 88d57bf:	90                   	nop

```

```c
// BlueMarbleInfoScript::BlueMarbleInfoScript @ 0x88d5690

/* BlueMarbleInfoScript::BlueMarbleInfoScript() */

void __thiscall BlueMarbleInfoScript::BlueMarbleInfoScript(BlueMarbleInfoScript *this)

{
  std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::vector
            ((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
             (this + 0x24));
                    /* try { // try from 088d56af to 088d56b3 has its CatchHandler @ 088d579a */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x44));
                    /* try { // try from 088d56bd to 088d56c1 has its CatchHandler @ 088d5782 */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x50));
                    /* try { // try from 088d56cb to 088d56cf has its CatchHandler @ 088d576a */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x5c));
                    /* try { // try from 088d56d9 to 088d56dd has its CatchHandler @ 088d5752 */
  std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::vector
            ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
             (this + 0x68));
                    /* try { // try from 088d56e7 to 088d56eb has its CatchHandler @ 088d573a */
  std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::vector
            ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)(this + 0x74));
                    /* try { // try from 088d56f5 to 088d56f9 has its CatchHandler @ 088d5722 */
  std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::vector
            ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>> *)(this + 0x80));
                    /* try { // try from 088d5700 to 088d5704 has its CatchHandler @ 088d570a */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 088d57c0 BlueMarbleInfoScript::clear  [0x088d57c0-0x88d589b] ===
 88d57c0:	55                   	push   %ebp
 88d57c1:	89 e5                	mov    %esp,%ebp
 88d57c3:	83 ec 18             	sub    $0x18,%esp
 88d57c6:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57c9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88d57cf:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57d2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 88d57d9:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57dc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 88d57e3:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57e6:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 88d57ed:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57f0:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 88d57f7:	8b 45 08             	mov    0x8(%ebp),%eax
 88d57fa:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 88d5801:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5804:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 88d580b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d580e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 88d5815:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5818:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 88d581f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5822:	83 c0 24             	add    $0x24,%eax
 88d5825:	89 04 24             	mov    %eax,(%esp)
 88d5828:	e8 e5 10 00 00       	call   88d6912 <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EE5clearEv>
 88d582d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5830:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 88d5837:	8b 45 08             	mov    0x8(%ebp),%eax
 88d583a:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 88d5841:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5844:	ba 00 00 00 00       	mov    $0x0,%edx
 88d5849:	89 50 38             	mov    %edx,0x38(%eax)
 88d584c:	8b 45 08             	mov    0x8(%ebp),%eax
 88d584f:	ba 00 00 00 00       	mov    $0x0,%edx
 88d5854:	89 50 3c             	mov    %edx,0x3c(%eax)
 88d5857:	8b 45 08             	mov    0x8(%ebp),%eax
 88d585a:	83 c0 44             	add    $0x44,%eax
 88d585d:	89 04 24             	mov    %eax,(%esp)
 88d5860:	e8 c9 10 00 00       	call   88d692e <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE5clearEv>
 88d5865:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5868:	83 c0 50             	add    $0x50,%eax
 88d586b:	89 04 24             	mov    %eax,(%esp)
 88d586e:	e8 bb 10 00 00       	call   88d692e <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE5clearEv>
 88d5873:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5876:	83 c0 68             	add    $0x68,%eax
 88d5879:	89 04 24             	mov    %eax,(%esp)
 88d587c:	e8 c9 10 00 00       	call   88d694a <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EE5clearEv>
 88d5881:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5884:	83 e8 80             	sub    $0xffffff80,%eax
 88d5887:	89 04 24             	mov    %eax,(%esp)
 88d588a:	e8 d7 10 00 00       	call   88d6966 <_ZNSt6vectorI17BlueMarbleTilePosSaIS0_EE5clearEv>
 88d588f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5892:	c7 40 40 e8 03 00 00 	movl   $0x3e8,0x40(%eax)
 88d5899:	c9                   	leave
 88d589a:	c3                   	ret
 88d589b:	90                   	nop

```

```c
// BlueMarbleInfoScript::clear @ 0x88d57c0

/* BlueMarbleInfoScript::clear() */

void __thiscall BlueMarbleInfoScript::clear(BlueMarbleInfoScript *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::clear
            ((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
             (this + 0x24));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x44));
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x50));
  std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::clear
            ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
             (this + 0x68));
  std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::clear
            ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>> *)(this + 0x80));
  *(undefined4 *)(this + 0x40) = 1000;
  return;
}

```

---

## getBossDungeonIndex

```asm
// === 088d5f38 BlueMarbleInfoScript::getBossDungeonIndex  [0x088d5f38-0x88d5fdd] ===
 88d5f38:	55                   	push   %ebp
 88d5f39:	89 e5                	mov    %esp,%ebp
 88d5f3b:	57                   	push   %edi
 88d5f3c:	56                   	push   %esi
 88d5f3d:	53                   	push   %ebx
 88d5f3e:	83 ec 2c             	sub    $0x2c,%esp
 88d5f41:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88d5f44:	89 d8                	mov    %ebx,%eax
 88d5f46:	89 04 24             	mov    %eax,(%esp)
 88d5f49:	e8 5e 82 7b ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88d5f4e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 88d5f55:	eb 45                	jmp    88d5f9c <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi+0x64>
 88d5f57:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5f5a:	8d 50 50             	lea    0x50(%eax),%edx
 88d5f5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88d5f60:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5f64:	89 14 24             	mov    %edx,(%esp)
 88d5f67:	e8 98 0c 00 00       	call   88d6c04 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEixEj>
 88d5f6c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88d5f6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5f72:	8b 00                	mov    (%eax),%eax
 88d5f74:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d5f77:	7f 1f                	jg     88d5f98 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi+0x60>
 88d5f79:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5f7c:	8b 40 04             	mov    0x4(%eax),%eax
 88d5f7f:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d5f82:	7c 14                	jl     88d5f98 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi+0x60>
 88d5f84:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5f87:	8d 50 08             	lea    0x8(%eax),%edx
 88d5f8a:	89 d8                	mov    %ebx,%eax
 88d5f8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d5f90:	89 04 24             	mov    %eax,(%esp)
 88d5f93:	e8 8e b1 83 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 88d5f98:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 88d5f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5f9f:	83 c0 50             	add    $0x50,%eax
 88d5fa2:	89 04 24             	mov    %eax,(%esp)
 88d5fa5:	e8 38 0c 00 00       	call   88d6be2 <_ZNKSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE4sizeEv>
 88d5faa:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 88d5fad:	0f 97 c0             	seta   %al
 88d5fb0:	84 c0                	test   %al,%al
 88d5fb2:	75 a3                	jne    88d5f57 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi+0x1f>
 88d5fb4:	eb 1a                	jmp    88d5fd0 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi+0x98>
 88d5fb6:	89 d6                	mov    %edx,%esi
 88d5fb8:	89 c7                	mov    %eax,%edi
 88d5fba:	89 d8                	mov    %ebx,%eax
 88d5fbc:	89 04 24             	mov    %eax,(%esp)
 88d5fbf:	e8 16 de 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88d5fc4:	89 f8                	mov    %edi,%eax
 88d5fc6:	89 f2                	mov    %esi,%edx
 88d5fc8:	89 04 24             	mov    %eax,(%esp)
 88d5fcb:	e8 80 d7 20 00       	call   8ae3750 <_Unwind_Resume>
 88d5fd0:	89 d8                	mov    %ebx,%eax
 88d5fd2:	89 d8                	mov    %ebx,%eax
 88d5fd4:	83 c4 2c             	add    $0x2c,%esp
 88d5fd7:	5b                   	pop    %ebx
 88d5fd8:	5e                   	pop    %esi
 88d5fd9:	5f                   	pop    %edi
 88d5fda:	5d                   	pop    %ebp
 88d5fdb:	c2 04 00             	ret    $0x4

```

```c
// BlueMarbleInfoScript::getBossDungeonIndex @ 0x88d5f38

/* BlueMarbleInfoScript::getBossDungeonIndex(int) */

int BlueMarbleInfoScript::getBossDungeonIndex(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_24;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)param_1);
  local_24 = 0;
  while( true ) {
    uVar2 = std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            size((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                 (in_stack_00000008 + 0x50));
    if (uVar2 <= local_24) break;
    piVar1 = (int *)std::
                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    ::operator[]((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                  *)(in_stack_00000008 + 0x50),local_24);
    if ((*piVar1 <= in_stack_0000000c) && (in_stack_0000000c <= piVar1[1])) {
                    /* try { // try from 088d5f93 to 088d5f97 has its CatchHandler @ 088d5fb6 */
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,piVar1 + 2);
    }
    local_24 = local_24 + 1;
  }
  return param_1;
}

```

---

## getDungeonDifficulty

```asm
// === 088d6084 BlueMarbleInfoScript::getDungeonDifficulty  [0x088d6084-0x88d60f1] ===
 88d6084:	55                   	push   %ebp
 88d6085:	89 e5                	mov    %esp,%ebp
 88d6087:	83 ec 28             	sub    $0x28,%esp
 88d608a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88d6091:	eb 3f                	jmp    88d60d2 <_ZN20BlueMarbleInfoScript20getDungeonDifficultyEi+0x4e>
 88d6093:	8b 45 08             	mov    0x8(%ebp),%eax
 88d6096:	8d 50 24             	lea    0x24(%eax),%edx
 88d6099:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88d609c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d60a0:	89 14 24             	mov    %edx,(%esp)
 88d60a3:	e8 92 0b 00 00       	call   88d6c3a <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EEixEj>
 88d60a8:	8b 00                	mov    (%eax),%eax
 88d60aa:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88d60ad:	0f 94 c0             	sete   %al
 88d60b0:	84 c0                	test   %al,%al
 88d60b2:	74 1a                	je     88d60ce <_ZN20BlueMarbleInfoScript20getDungeonDifficultyEi+0x4a>
 88d60b4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d60b7:	8d 50 24             	lea    0x24(%eax),%edx
 88d60ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88d60bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d60c1:	89 14 24             	mov    %edx,(%esp)
 88d60c4:	e8 71 0b 00 00       	call   88d6c3a <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EEixEj>
 88d60c9:	8b 40 04             	mov    0x4(%eax),%eax
 88d60cc:	eb 22                	jmp    88d60f0 <_ZN20BlueMarbleInfoScript20getDungeonDifficultyEi+0x6c>
 88d60ce:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88d60d2:	8b 45 08             	mov    0x8(%ebp),%eax
 88d60d5:	83 c0 24             	add    $0x24,%eax
 88d60d8:	89 04 24             	mov    %eax,(%esp)
 88d60db:	e8 3e 0b 00 00       	call   88d6c1e <_ZNKSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EE4sizeEv>
 88d60e0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88d60e3:	0f 97 c0             	seta   %al
 88d60e6:	84 c0                	test   %al,%al
 88d60e8:	75 a9                	jne    88d6093 <_ZN20BlueMarbleInfoScript20getDungeonDifficultyEi+0xf>
 88d60ea:	8b 45 08             	mov    0x8(%ebp),%eax
 88d60ed:	8b 40 20             	mov    0x20(%eax),%eax
 88d60f0:	c9                   	leave
 88d60f1:	c3                   	ret

```

```c
// BlueMarbleInfoScript::getDungeonDifficulty @ 0x88d6084

/* BlueMarbleInfoScript::getDungeonDifficulty(int) */

undefined4 __thiscall
BlueMarbleInfoScript::getDungeonDifficulty(BlueMarbleInfoScript *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::
            size((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
                 (this + 0x24));
    if (uVar3 <= local_10) {
      return *(undefined4 *)(this + 0x20);
    }
    piVar1 = (int *)std::
                    vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                    ::operator[]((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                  *)(this + 0x24),local_10);
    if (*piVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::
          operator[]((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                      *)(this + 0x24),local_10);
  return *(undefined4 *)(iVar2 + 4);
}

```

---

## getRandomDungeonIndex

```asm
// === 088d5e92 BlueMarbleInfoScript::getRandomDungeonIndex  [0x088d5e92-0x88d5f37] ===
 88d5e92:	55                   	push   %ebp
 88d5e93:	89 e5                	mov    %esp,%ebp
 88d5e95:	57                   	push   %edi
 88d5e96:	56                   	push   %esi
 88d5e97:	53                   	push   %ebx
 88d5e98:	83 ec 2c             	sub    $0x2c,%esp
 88d5e9b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88d5e9e:	89 d8                	mov    %ebx,%eax
 88d5ea0:	89 04 24             	mov    %eax,(%esp)
 88d5ea3:	e8 04 83 7b ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88d5ea8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 88d5eaf:	eb 45                	jmp    88d5ef6 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi+0x64>
 88d5eb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5eb4:	8d 50 44             	lea    0x44(%eax),%edx
 88d5eb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88d5eba:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5ebe:	89 14 24             	mov    %edx,(%esp)
 88d5ec1:	e8 3e 0d 00 00       	call   88d6c04 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEixEj>
 88d5ec6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88d5ec9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5ecc:	8b 00                	mov    (%eax),%eax
 88d5ece:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d5ed1:	7f 1f                	jg     88d5ef2 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi+0x60>
 88d5ed3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5ed6:	8b 40 04             	mov    0x4(%eax),%eax
 88d5ed9:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d5edc:	7c 14                	jl     88d5ef2 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi+0x60>
 88d5ede:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d5ee1:	8d 50 08             	lea    0x8(%eax),%edx
 88d5ee4:	89 d8                	mov    %ebx,%eax
 88d5ee6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d5eea:	89 04 24             	mov    %eax,(%esp)
 88d5eed:	e8 34 b2 83 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 88d5ef2:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 88d5ef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5ef9:	83 c0 44             	add    $0x44,%eax
 88d5efc:	89 04 24             	mov    %eax,(%esp)
 88d5eff:	e8 de 0c 00 00       	call   88d6be2 <_ZNKSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE4sizeEv>
 88d5f04:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 88d5f07:	0f 97 c0             	seta   %al
 88d5f0a:	84 c0                	test   %al,%al
 88d5f0c:	75 a3                	jne    88d5eb1 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi+0x1f>
 88d5f0e:	eb 1a                	jmp    88d5f2a <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi+0x98>
 88d5f10:	89 d6                	mov    %edx,%esi
 88d5f12:	89 c7                	mov    %eax,%edi
 88d5f14:	89 d8                	mov    %ebx,%eax
 88d5f16:	89 04 24             	mov    %eax,(%esp)
 88d5f19:	e8 bc de 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88d5f1e:	89 f8                	mov    %edi,%eax
 88d5f20:	89 f2                	mov    %esi,%edx
 88d5f22:	89 04 24             	mov    %eax,(%esp)
 88d5f25:	e8 26 d8 20 00       	call   8ae3750 <_Unwind_Resume>
 88d5f2a:	89 d8                	mov    %ebx,%eax
 88d5f2c:	89 d8                	mov    %ebx,%eax
 88d5f2e:	83 c4 2c             	add    $0x2c,%esp
 88d5f31:	5b                   	pop    %ebx
 88d5f32:	5e                   	pop    %esi
 88d5f33:	5f                   	pop    %edi
 88d5f34:	5d                   	pop    %ebp
 88d5f35:	c2 04 00             	ret    $0x4

```

```c
// BlueMarbleInfoScript::getRandomDungeonIndex @ 0x88d5e92

/* BlueMarbleInfoScript::getRandomDungeonIndex(int) */

int BlueMarbleInfoScript::getRandomDungeonIndex(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_24;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)param_1);
  local_24 = 0;
  while( true ) {
    uVar2 = std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            size((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                 (in_stack_00000008 + 0x44));
    if (uVar2 <= local_24) break;
    piVar1 = (int *)std::
                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    ::operator[]((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                  *)(in_stack_00000008 + 0x44),local_24);
    if ((*piVar1 <= in_stack_0000000c) && (in_stack_0000000c <= piVar1[1])) {
                    /* try { // try from 088d5eed to 088d5ef1 has its CatchHandler @ 088d5f10 */
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,piVar1 + 2);
    }
    local_24 = local_24 + 1;
  }
  return param_1;
}

```

---

## getUniqueDungeonIndex

```asm
// === 088d5fde BlueMarbleInfoScript::getUniqueDungeonIndex  [0x088d5fde-0x88d6083] ===
 88d5fde:	55                   	push   %ebp
 88d5fdf:	89 e5                	mov    %esp,%ebp
 88d5fe1:	57                   	push   %edi
 88d5fe2:	56                   	push   %esi
 88d5fe3:	53                   	push   %ebx
 88d5fe4:	83 ec 2c             	sub    $0x2c,%esp
 88d5fe7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88d5fea:	89 d8                	mov    %ebx,%eax
 88d5fec:	89 04 24             	mov    %eax,(%esp)
 88d5fef:	e8 b8 81 7b ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88d5ff4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 88d5ffb:	eb 45                	jmp    88d6042 <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi+0x64>
 88d5ffd:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d6000:	8d 50 5c             	lea    0x5c(%eax),%edx
 88d6003:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88d6006:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d600a:	89 14 24             	mov    %edx,(%esp)
 88d600d:	e8 f2 0b 00 00       	call   88d6c04 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EEixEj>
 88d6012:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88d6015:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d6018:	8b 00                	mov    (%eax),%eax
 88d601a:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d601d:	7f 1f                	jg     88d603e <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi+0x60>
 88d601f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d6022:	8b 40 04             	mov    0x4(%eax),%eax
 88d6025:	3b 45 10             	cmp    0x10(%ebp),%eax
 88d6028:	7c 14                	jl     88d603e <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi+0x60>
 88d602a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88d602d:	8d 50 08             	lea    0x8(%eax),%edx
 88d6030:	89 d8                	mov    %ebx,%eax
 88d6032:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d6036:	89 04 24             	mov    %eax,(%esp)
 88d6039:	e8 e8 b0 83 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 88d603e:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 88d6042:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d6045:	83 c0 5c             	add    $0x5c,%eax
 88d6048:	89 04 24             	mov    %eax,(%esp)
 88d604b:	e8 92 0b 00 00       	call   88d6be2 <_ZNKSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE4sizeEv>
 88d6050:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 88d6053:	0f 97 c0             	seta   %al
 88d6056:	84 c0                	test   %al,%al
 88d6058:	75 a3                	jne    88d5ffd <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi+0x1f>
 88d605a:	eb 1a                	jmp    88d6076 <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi+0x98>
 88d605c:	89 d6                	mov    %edx,%esi
 88d605e:	89 c7                	mov    %eax,%edi
 88d6060:	89 d8                	mov    %ebx,%eax
 88d6062:	89 04 24             	mov    %eax,(%esp)
 88d6065:	e8 70 dd 7a ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88d606a:	89 f8                	mov    %edi,%eax
 88d606c:	89 f2                	mov    %esi,%edx
 88d606e:	89 04 24             	mov    %eax,(%esp)
 88d6071:	e8 da d6 20 00       	call   8ae3750 <_Unwind_Resume>
 88d6076:	89 d8                	mov    %ebx,%eax
 88d6078:	89 d8                	mov    %ebx,%eax
 88d607a:	83 c4 2c             	add    $0x2c,%esp
 88d607d:	5b                   	pop    %ebx
 88d607e:	5e                   	pop    %esi
 88d607f:	5f                   	pop    %edi
 88d6080:	5d                   	pop    %ebp
 88d6081:	c2 04 00             	ret    $0x4

```

```c
// BlueMarbleInfoScript::getUniqueDungeonIndex @ 0x88d5fde

/* BlueMarbleInfoScript::getUniqueDungeonIndex(int) */

int BlueMarbleInfoScript::getUniqueDungeonIndex(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_24;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)param_1);
  local_24 = 0;
  while( true ) {
    uVar2 = std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            size((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                 (in_stack_00000008 + 0x5c));
    if (uVar2 <= local_24) break;
    piVar1 = (int *)std::
                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    ::operator[]((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                  *)(in_stack_00000008 + 0x5c),local_24);
    if ((*piVar1 <= in_stack_0000000c) && (in_stack_0000000c <= piVar1[1])) {
                    /* try { // try from 088d6039 to 088d603d has its CatchHandler @ 088d605c */
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,piVar1 + 2);
    }
    local_24 = local_24 + 1;
  }
  return param_1;
}

```

---

## importScript

```asm
// === 088d589c BlueMarbleInfoScript::importScript  [0x088d589c-0x88d5e91] ===
 88d589c:	55                   	push   %ebp
 88d589d:	89 e5                	mov    %esp,%ebp
 88d589f:	56                   	push   %esi
 88d58a0:	53                   	push   %ebx
 88d58a1:	83 ec 60             	sub    $0x60,%esp
 88d58a4:	8b 45 10             	mov    0x10(%ebp),%eax
 88d58a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d58ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d58ae:	89 04 24             	mov    %eax,(%esp)
 88d58b1:	e8 73 64 fe ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88d58b6:	83 f0 01             	xor    $0x1,%eax
 88d58b9:	84 c0                	test   %al,%al
 88d58bb:	74 0a                	je     88d58c7 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x2b>
 88d58bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d58c2:	e9 c1 05 00 00       	jmp    88d5e88 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x5ec>
 88d58c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d58ca:	89 04 24             	mov    %eax,(%esp)
 88d58cd:	e8 fe 0c e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d58d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88d58d9:	eb 01                	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d58db:	90                   	nop
 88d58dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88d58e3:	00 
 88d58e4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d58e7:	89 04 24             	mov    %eax,(%esp)
 88d58ea:	e8 70 6f fe ff       	call   88bc85f <_Z8ScanTypeRSsb>
 88d58ef:	83 f0 01             	xor    $0x1,%eax
 88d58f2:	84 c0                	test   %al,%al
 88d58f4:	0f 85 60 05 00 00    	jne    88d5e5a <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x5be>
 88d58fa:	c7 44 24 04 ba af e0 	movl   $0x8e0afba,0x4(%esp)
 88d5901:	08 
 88d5902:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5905:	89 04 24             	mov    %eax,(%esp)
 88d5908:	e8 94 b0 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d590d:	84 c0                	test   %al,%al
 88d590f:	74 6c                	je     88d597d <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xe1>
 88d5911:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5914:	83 c0 44             	add    $0x44,%eax
 88d5917:	89 04 24             	mov    %eax,(%esp)
 88d591a:	e8 0f 10 00 00       	call   88d692e <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE5clearEv>
 88d591f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d5922:	89 04 24             	mov    %eax,(%esp)
 88d5925:	e8 fa 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d592a:	83 f0 01             	xor    $0x1,%eax
 88d592d:	84 c0                	test   %al,%al
 88d592f:	74 02                	je     88d5933 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x97>
 88d5931:	eb 45                	jmp    88d5978 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xdc>
 88d5933:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d5936:	83 c0 04             	add    $0x4,%eax
 88d5939:	89 04 24             	mov    %eax,(%esp)
 88d593c:	e8 e3 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5941:	83 f0 01             	xor    $0x1,%eax
 88d5944:	84 c0                	test   %al,%al
 88d5946:	74 02                	je     88d594a <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xae>
 88d5948:	eb 2e                	jmp    88d5978 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xdc>
 88d594a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d594d:	83 c0 08             	add    $0x8,%eax
 88d5950:	89 04 24             	mov    %eax,(%esp)
 88d5953:	e8 cc 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5958:	83 f0 01             	xor    $0x1,%eax
 88d595b:	84 c0                	test   %al,%al
 88d595d:	74 02                	je     88d5961 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xc5>
 88d595f:	eb 17                	jmp    88d5978 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0xdc>
 88d5961:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5964:	8d 50 44             	lea    0x44(%eax),%edx
 88d5967:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d596a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d596e:	89 14 24             	mov    %edx,(%esp)
 88d5971:	e8 0c 10 00 00       	call   88d6982 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE9push_backERKS0_>
 88d5976:	eb a7                	jmp    88d591f <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x83>
 88d5978:	e9 5f ff ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d597d:	c7 44 24 04 c9 af e0 	movl   $0x8e0afc9,0x4(%esp)
 88d5984:	08 
 88d5985:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5988:	89 04 24             	mov    %eax,(%esp)
 88d598b:	e8 11 b0 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5990:	84 c0                	test   %al,%al
 88d5992:	74 6c                	je     88d5a00 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x164>
 88d5994:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5997:	83 c0 50             	add    $0x50,%eax
 88d599a:	89 04 24             	mov    %eax,(%esp)
 88d599d:	e8 8c 0f 00 00       	call   88d692e <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE5clearEv>
 88d59a2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d59a5:	89 04 24             	mov    %eax,(%esp)
 88d59a8:	e8 77 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d59ad:	83 f0 01             	xor    $0x1,%eax
 88d59b0:	84 c0                	test   %al,%al
 88d59b2:	74 02                	je     88d59b6 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x11a>
 88d59b4:	eb 45                	jmp    88d59fb <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x15f>
 88d59b6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d59b9:	83 c0 04             	add    $0x4,%eax
 88d59bc:	89 04 24             	mov    %eax,(%esp)
 88d59bf:	e8 60 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d59c4:	83 f0 01             	xor    $0x1,%eax
 88d59c7:	84 c0                	test   %al,%al
 88d59c9:	74 02                	je     88d59cd <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x131>
 88d59cb:	eb 2e                	jmp    88d59fb <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x15f>
 88d59cd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d59d0:	83 c0 08             	add    $0x8,%eax
 88d59d3:	89 04 24             	mov    %eax,(%esp)
 88d59d6:	e8 49 6a fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d59db:	83 f0 01             	xor    $0x1,%eax
 88d59de:	84 c0                	test   %al,%al
 88d59e0:	74 02                	je     88d59e4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x148>
 88d59e2:	eb 17                	jmp    88d59fb <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x15f>
 88d59e4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d59e7:	8d 50 50             	lea    0x50(%eax),%edx
 88d59ea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88d59ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d59f1:	89 14 24             	mov    %edx,(%esp)
 88d59f4:	e8 89 0f 00 00       	call   88d6982 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE9push_backERKS0_>
 88d59f9:	eb a7                	jmp    88d59a2 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x106>
 88d59fb:	e9 dc fe ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5a00:	c7 44 24 04 dd af e0 	movl   $0x8e0afdd,0x4(%esp)
 88d5a07:	08 
 88d5a08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5a0b:	89 04 24             	mov    %eax,(%esp)
 88d5a0e:	e8 8e af 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5a13:	84 c0                	test   %al,%al
 88d5a15:	74 66                	je     88d5a7d <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x1e1>
 88d5a17:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5a1a:	83 c0 68             	add    $0x68,%eax
 88d5a1d:	89 04 24             	mov    %eax,(%esp)
 88d5a20:	e8 25 0f 00 00       	call   88d694a <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EE5clearEv>
 88d5a25:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d5a28:	89 04 24             	mov    %eax,(%esp)
 88d5a2b:	e8 f4 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5a30:	83 f0 01             	xor    $0x1,%eax
 88d5a33:	84 c0                	test   %al,%al
 88d5a35:	74 02                	je     88d5a39 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x19d>
 88d5a37:	eb 3f                	jmp    88d5a78 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x1dc>
 88d5a39:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d5a3c:	83 c0 04             	add    $0x4,%eax
 88d5a3f:	89 04 24             	mov    %eax,(%esp)
 88d5a42:	e8 dd 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5a47:	83 f0 01             	xor    $0x1,%eax
 88d5a4a:	84 c0                	test   %al,%al
 88d5a4c:	74 02                	je     88d5a50 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x1b4>
 88d5a4e:	eb 28                	jmp    88d5a78 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x1dc>
 88d5a50:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5a53:	8b 50 1c             	mov    0x1c(%eax),%edx
 88d5a56:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 88d5a59:	01 c2                	add    %eax,%edx
 88d5a5b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5a5e:	89 50 1c             	mov    %edx,0x1c(%eax)
 88d5a61:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5a64:	8d 50 68             	lea    0x68(%eax),%edx
 88d5a67:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88d5a6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5a6e:	89 14 24             	mov    %edx,(%esp)
 88d5a71:	e8 80 0f 00 00       	call   88d69f6 <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EE9push_backERKS0_>
 88d5a76:	eb ad                	jmp    88d5a25 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x189>
 88d5a78:	e9 5f fe ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5a7d:	c7 44 24 04 e9 af e0 	movl   $0x8e0afe9,0x4(%esp)
 88d5a84:	08 
 88d5a85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5a88:	89 04 24             	mov    %eax,(%esp)
 88d5a8b:	e8 11 af 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5a90:	84 c0                	test   %al,%al
 88d5a92:	74 10                	je     88d5aa4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x208>
 88d5a94:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5a97:	89 04 24             	mov    %eax,(%esp)
 88d5a9a:	e8 85 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5a9f:	e9 38 fe ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5aa4:	c7 44 24 04 f6 af e0 	movl   $0x8e0aff6,0x4(%esp)
 88d5aab:	08 
 88d5aac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5aaf:	89 04 24             	mov    %eax,(%esp)
 88d5ab2:	e8 ea ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5ab7:	84 c0                	test   %al,%al
 88d5ab9:	74 13                	je     88d5ace <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x232>
 88d5abb:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5abe:	83 c0 04             	add    $0x4,%eax
 88d5ac1:	89 04 24             	mov    %eax,(%esp)
 88d5ac4:	e8 5b 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5ac9:	e9 0e fe ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5ace:	c7 44 24 04 04 b0 e0 	movl   $0x8e0b004,0x4(%esp)
 88d5ad5:	08 
 88d5ad6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5ad9:	89 04 24             	mov    %eax,(%esp)
 88d5adc:	e8 c0 ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5ae1:	84 c0                	test   %al,%al
 88d5ae3:	74 13                	je     88d5af8 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x25c>
 88d5ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5ae8:	83 c0 08             	add    $0x8,%eax
 88d5aeb:	89 04 24             	mov    %eax,(%esp)
 88d5aee:	e8 31 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5af3:	e9 e4 fd ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5af8:	c7 44 24 04 16 b0 e0 	movl   $0x8e0b016,0x4(%esp)
 88d5aff:	08 
 88d5b00:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5b03:	89 04 24             	mov    %eax,(%esp)
 88d5b06:	e8 96 ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5b0b:	84 c0                	test   %al,%al
 88d5b0d:	74 13                	je     88d5b22 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x286>
 88d5b0f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5b12:	83 c0 0c             	add    $0xc,%eax
 88d5b15:	89 04 24             	mov    %eax,(%esp)
 88d5b18:	e8 07 69 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5b1d:	e9 ba fd ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5b22:	c7 44 24 04 24 b0 e0 	movl   $0x8e0b024,0x4(%esp)
 88d5b29:	08 
 88d5b2a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5b2d:	89 04 24             	mov    %eax,(%esp)
 88d5b30:	e8 6c ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5b35:	84 c0                	test   %al,%al
 88d5b37:	74 13                	je     88d5b4c <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x2b0>
 88d5b39:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5b3c:	83 c0 10             	add    $0x10,%eax
 88d5b3f:	89 04 24             	mov    %eax,(%esp)
 88d5b42:	e8 dd 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5b47:	e9 90 fd ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5b4c:	c7 44 24 04 30 b0 e0 	movl   $0x8e0b030,0x4(%esp)
 88d5b53:	08 
 88d5b54:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5b57:	89 04 24             	mov    %eax,(%esp)
 88d5b5a:	e8 42 ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5b5f:	84 c0                	test   %al,%al
 88d5b61:	74 21                	je     88d5b84 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x2e8>
 88d5b63:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5b66:	83 c0 14             	add    $0x14,%eax
 88d5b69:	89 04 24             	mov    %eax,(%esp)
 88d5b6c:	e8 b3 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5b71:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5b74:	83 c0 18             	add    $0x18,%eax
 88d5b77:	89 04 24             	mov    %eax,(%esp)
 88d5b7a:	e8 a5 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5b7f:	e9 58 fd ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5b84:	c7 44 24 04 3d b0 e0 	movl   $0x8e0b03d,0x4(%esp)
 88d5b8b:	08 
 88d5b8c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5b8f:	89 04 24             	mov    %eax,(%esp)
 88d5b92:	e8 0a ae 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5b97:	84 c0                	test   %al,%al
 88d5b99:	74 55                	je     88d5bf0 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x354>
 88d5b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5b9e:	83 c0 74             	add    $0x74,%eax
 88d5ba1:	89 04 24             	mov    %eax,(%esp)
 88d5ba4:	e8 c1 0e 00 00       	call   88d6a6a <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EE5clearEv>
 88d5ba9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88d5bac:	89 04 24             	mov    %eax,(%esp)
 88d5baf:	e8 70 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5bb4:	83 f0 01             	xor    $0x1,%eax
 88d5bb7:	84 c0                	test   %al,%al
 88d5bb9:	74 02                	je     88d5bbd <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x321>
 88d5bbb:	eb 2e                	jmp    88d5beb <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x34f>
 88d5bbd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88d5bc0:	83 c0 04             	add    $0x4,%eax
 88d5bc3:	89 04 24             	mov    %eax,(%esp)
 88d5bc6:	e8 59 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5bcb:	83 f0 01             	xor    $0x1,%eax
 88d5bce:	84 c0                	test   %al,%al
 88d5bd0:	74 02                	je     88d5bd4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x338>
 88d5bd2:	eb 17                	jmp    88d5beb <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x34f>
 88d5bd4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5bd7:	8d 50 74             	lea    0x74(%eax),%edx
 88d5bda:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88d5bdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5be1:	89 14 24             	mov    %edx,(%esp)
 88d5be4:	e8 9d 0e 00 00       	call   88d6a86 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EE9push_backERKS0_>
 88d5be9:	eb be                	jmp    88d5ba9 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x30d>
 88d5beb:	e9 ec fc ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5bf0:	c7 44 24 04 4b b0 e0 	movl   $0x8e0b04b,0x4(%esp)
 88d5bf7:	08 
 88d5bf8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5bfb:	89 04 24             	mov    %eax,(%esp)
 88d5bfe:	e8 9e ad 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5c03:	84 c0                	test   %al,%al
 88d5c05:	74 58                	je     88d5c5f <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3c3>
 88d5c07:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5c0a:	83 e8 80             	sub    $0xffffff80,%eax
 88d5c0d:	89 04 24             	mov    %eax,(%esp)
 88d5c10:	e8 51 0d 00 00       	call   88d6966 <_ZNSt6vectorI17BlueMarbleTilePosSaIS0_EE5clearEv>
 88d5c15:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d5c18:	89 04 24             	mov    %eax,(%esp)
 88d5c1b:	e8 04 68 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5c20:	83 f0 01             	xor    $0x1,%eax
 88d5c23:	84 c0                	test   %al,%al
 88d5c25:	74 02                	je     88d5c29 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x38d>
 88d5c27:	eb 31                	jmp    88d5c5a <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3be>
 88d5c29:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d5c2c:	83 c0 04             	add    $0x4,%eax
 88d5c2f:	89 04 24             	mov    %eax,(%esp)
 88d5c32:	e8 ed 67 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5c37:	83 f0 01             	xor    $0x1,%eax
 88d5c3a:	84 c0                	test   %al,%al
 88d5c3c:	74 02                	je     88d5c40 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3a4>
 88d5c3e:	eb 1a                	jmp    88d5c5a <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3be>
 88d5c40:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5c43:	8d 90 80 00 00 00    	lea    0x80(%eax),%edx
 88d5c49:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d5c4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5c50:	89 14 24             	mov    %edx,(%esp)
 88d5c53:	e8 a2 0e 00 00       	call   88d6afa <_ZNSt6vectorI17BlueMarbleTilePosSaIS0_EE9push_backERKS0_>
 88d5c58:	eb bb                	jmp    88d5c15 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x379>
 88d5c5a:	e9 7d fc ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5c5f:	c7 44 24 04 56 b0 e0 	movl   $0x8e0b056,0x4(%esp)
 88d5c66:	08 
 88d5c67:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5c6a:	89 04 24             	mov    %eax,(%esp)
 88d5c6d:	e8 2f ad 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5c72:	84 c0                	test   %al,%al
 88d5c74:	74 17                	je     88d5c8d <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3f1>
 88d5c76:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88d5c7d:	e8 f9 66 fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d5c82:	8b 55 08             	mov    0x8(%ebp),%edx
 88d5c85:	89 42 20             	mov    %eax,0x20(%edx)
 88d5c88:	e9 4f fc ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5c8d:	c7 44 24 04 6b b0 e0 	movl   $0x8e0b06b,0x4(%esp)
 88d5c94:	08 
 88d5c95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5c98:	89 04 24             	mov    %eax,(%esp)
 88d5c9b:	e8 01 ad 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5ca0:	84 c0                	test   %al,%al
 88d5ca2:	74 55                	je     88d5cf9 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x45d>
 88d5ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5ca7:	83 c0 24             	add    $0x24,%eax
 88d5caa:	89 04 24             	mov    %eax,(%esp)
 88d5cad:	e8 60 0c 00 00       	call   88d6912 <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EE5clearEv>
 88d5cb2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88d5cb5:	89 04 24             	mov    %eax,(%esp)
 88d5cb8:	e8 67 67 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5cbd:	83 f0 01             	xor    $0x1,%eax
 88d5cc0:	84 c0                	test   %al,%al
 88d5cc2:	74 02                	je     88d5cc6 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x42a>
 88d5cc4:	eb 2e                	jmp    88d5cf4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x458>
 88d5cc6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88d5cc9:	83 c0 04             	add    $0x4,%eax
 88d5ccc:	89 04 24             	mov    %eax,(%esp)
 88d5ccf:	e8 50 67 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5cd4:	83 f0 01             	xor    $0x1,%eax
 88d5cd7:	84 c0                	test   %al,%al
 88d5cd9:	74 02                	je     88d5cdd <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x441>
 88d5cdb:	eb 17                	jmp    88d5cf4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x458>
 88d5cdd:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5ce0:	8d 50 24             	lea    0x24(%eax),%edx
 88d5ce3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88d5ce6:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5cea:	89 14 24             	mov    %edx,(%esp)
 88d5ced:	e8 7c 0e 00 00       	call   88d6b6e <_ZNSt6vectorI27BlueMarbleDungeonDifficultySaIS0_EE9push_backERKS0_>
 88d5cf2:	eb be                	jmp    88d5cb2 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x416>
 88d5cf4:	e9 e3 fb ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5cf9:	c7 44 24 04 85 b0 e0 	movl   $0x8e0b085,0x4(%esp)
 88d5d00:	08 
 88d5d01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5d04:	89 04 24             	mov    %eax,(%esp)
 88d5d07:	e8 95 ac 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5d0c:	84 c0                	test   %al,%al
 88d5d0e:	74 17                	je     88d5d27 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x48b>
 88d5d10:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88d5d17:	e8 5f 66 fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d5d1c:	8b 55 08             	mov    0x8(%ebp),%edx
 88d5d1f:	89 42 30             	mov    %eax,0x30(%edx)
 88d5d22:	e9 b5 fb ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5d27:	c7 44 24 04 98 b0 e0 	movl   $0x8e0b098,0x4(%esp)
 88d5d2e:	08 
 88d5d2f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5d32:	89 04 24             	mov    %eax,(%esp)
 88d5d35:	e8 67 ac 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5d3a:	84 c0                	test   %al,%al
 88d5d3c:	74 6c                	je     88d5daa <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x50e>
 88d5d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5d41:	83 c0 5c             	add    $0x5c,%eax
 88d5d44:	89 04 24             	mov    %eax,(%esp)
 88d5d47:	e8 e2 0b 00 00       	call   88d692e <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE5clearEv>
 88d5d4c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88d5d4f:	89 04 24             	mov    %eax,(%esp)
 88d5d52:	e8 cd 66 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5d57:	83 f0 01             	xor    $0x1,%eax
 88d5d5a:	84 c0                	test   %al,%al
 88d5d5c:	74 02                	je     88d5d60 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x4c4>
 88d5d5e:	eb 45                	jmp    88d5da5 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x509>
 88d5d60:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88d5d63:	83 c0 04             	add    $0x4,%eax
 88d5d66:	89 04 24             	mov    %eax,(%esp)
 88d5d69:	e8 b6 66 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5d6e:	83 f0 01             	xor    $0x1,%eax
 88d5d71:	84 c0                	test   %al,%al
 88d5d73:	74 02                	je     88d5d77 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x4db>
 88d5d75:	eb 2e                	jmp    88d5da5 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x509>
 88d5d77:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88d5d7a:	83 c0 08             	add    $0x8,%eax
 88d5d7d:	89 04 24             	mov    %eax,(%esp)
 88d5d80:	e8 9f 66 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5d85:	83 f0 01             	xor    $0x1,%eax
 88d5d88:	84 c0                	test   %al,%al
 88d5d8a:	74 02                	je     88d5d8e <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x4f2>
 88d5d8c:	eb 17                	jmp    88d5da5 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x509>
 88d5d8e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5d91:	8d 50 5c             	lea    0x5c(%eax),%edx
 88d5d94:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88d5d97:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5d9b:	89 14 24             	mov    %edx,(%esp)
 88d5d9e:	e8 df 0b 00 00       	call   88d6982 <_ZNSt6vectorI27BlueMarbleRandomDungeonInfoSaIS0_EE9push_backERKS0_>
 88d5da3:	eb a7                	jmp    88d5d4c <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x4b0>
 88d5da5:	e9 32 fb ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5daa:	c7 44 24 04 ae b0 e0 	movl   $0x8e0b0ae,0x4(%esp)
 88d5db1:	08 
 88d5db2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5db5:	89 04 24             	mov    %eax,(%esp)
 88d5db8:	e8 e4 ab 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5dbd:	84 c0                	test   %al,%al
 88d5dbf:	74 13                	je     88d5dd4 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x538>
 88d5dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5dc4:	83 c0 34             	add    $0x34,%eax
 88d5dc7:	89 04 24             	mov    %eax,(%esp)
 88d5dca:	e8 55 66 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d5dcf:	e9 08 fb ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5dd4:	c7 44 24 04 bf b0 e0 	movl   $0x8e0b0bf,0x4(%esp)
 88d5ddb:	08 
 88d5ddc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5ddf:	89 04 24             	mov    %eax,(%esp)
 88d5de2:	e8 ba ab 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5de7:	84 c0                	test   %al,%al
 88d5de9:	74 13                	je     88d5dfe <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x562>
 88d5deb:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5dee:	83 c0 38             	add    $0x38,%eax
 88d5df1:	89 04 24             	mov    %eax,(%esp)
 88d5df4:	e8 95 67 fe ff       	call   88bc58e <_Z9ScanFloatPf>
 88d5df9:	e9 de fa ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5dfe:	c7 44 24 04 cb b0 e0 	movl   $0x8e0b0cb,0x4(%esp)
 88d5e05:	08 
 88d5e06:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5e09:	89 04 24             	mov    %eax,(%esp)
 88d5e0c:	e8 90 ab 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5e11:	84 c0                	test   %al,%al
 88d5e13:	74 13                	je     88d5e28 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x58c>
 88d5e15:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5e18:	83 c0 3c             	add    $0x3c,%eax
 88d5e1b:	89 04 24             	mov    %eax,(%esp)
 88d5e1e:	e8 6b 67 fe ff       	call   88bc58e <_Z9ScanFloatPf>
 88d5e23:	e9 b4 fa ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5e28:	c7 44 24 04 d8 b0 e0 	movl   $0x8e0b0d8,0x4(%esp)
 88d5e2f:	08 
 88d5e30:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5e33:	89 04 24             	mov    %eax,(%esp)
 88d5e36:	e8 66 ab 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5e3b:	84 c0                	test   %al,%al
 88d5e3d:	0f 84 98 fa ff ff    	je     88d58db <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x3f>
 88d5e43:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88d5e4a:	e8 2c 65 fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d5e4f:	8b 55 08             	mov    0x8(%ebp),%edx
 88d5e52:	89 42 40             	mov    %eax,0x40(%edx)
 88d5e55:	e9 82 fa ff ff       	jmp    88d58dc <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x40>
 88d5e5a:	90                   	nop
 88d5e5b:	bb 01 00 00 00       	mov    $0x1,%ebx
 88d5e60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5e63:	89 04 24             	mov    %eax,(%esp)
 88d5e66:	e8 75 1d e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d5e6b:	eb 1b                	jmp    88d5e88 <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_+0x5ec>
 88d5e6d:	89 d3                	mov    %edx,%ebx
 88d5e6f:	89 c6                	mov    %eax,%esi
 88d5e71:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5e74:	89 04 24             	mov    %eax,(%esp)
 88d5e77:	e8 64 1d e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d5e7c:	89 f0                	mov    %esi,%eax
 88d5e7e:	89 da                	mov    %ebx,%edx
 88d5e80:	89 04 24             	mov    %eax,(%esp)
 88d5e83:	e8 c8 d8 20 00       	call   8ae3750 <_Unwind_Resume>
 88d5e88:	89 d8                	mov    %ebx,%eax
 88d5e8a:	83 c4 60             	add    $0x60,%esp
 88d5e8d:	5b                   	pop    %ebx
 88d5e8e:	5e                   	pop    %esi
 88d5e8f:	5d                   	pop    %ebp
 88d5e90:	c3                   	ret
 88d5e91:	90                   	nop

```

```c
// BlueMarbleInfoScript::importScript @ 0x88d589c

/* BlueMarbleInfoScript::importScript(char const*, char const*) */

undefined4 __thiscall
BlueMarbleInfoScript::importScript(BlueMarbleInfoScript *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  BlueMarbleRandomDungeonInfo local_58 [4];
  int iStack_54;
  int iStack_50;
  BlueMarbleDungeonDifficulty local_4c [4];
  int iStack_48;
  BlueMarbleTilePos local_44 [4];
  int iStack_40;
  BlueMarbleRewardInfo local_3c [4];
  int iStack_38;
  BlueMarbleRandomItemInfo local_34 [4];
  int local_30;
  BlueMarbleRandomDungeonInfo local_2c [4];
  int iStack_28;
  int iStack_24;
  BlueMarbleRandomDungeonInfo local_20 [4];
  int iStack_1c;
  int iStack_18;
  string local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_10 = 0;
                    /* try { // try from 088d58ea to 088d5e4e has its CatchHandler @ 088d5e6d */
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[dungeon list]");
      if (bVar2) {
        std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
                  ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    *)(this + 0x44));
        while (((cVar1 = ScanInt((int *)local_20), cVar1 == '\x01' &&
                (cVar1 = ScanInt(&iStack_1c), cVar1 == '\x01')) &&
               (cVar1 = ScanInt(&iStack_18), cVar1 == '\x01'))) {
          std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
          push_back((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                     *)(this + 0x44),local_20);
        }
      }
      else {
        bVar2 = std::operator==(&local_14,"[boss dungeon list]");
        if (bVar2) {
          std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
          clear((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                (this + 0x50));
          while (((cVar1 = ScanInt((int *)local_2c), cVar1 == '\x01' &&
                  (cVar1 = ScanInt(&iStack_28), cVar1 == '\x01')) &&
                 (cVar1 = ScanInt(&iStack_24), cVar1 == '\x01'))) {
            std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            push_back((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                       *)(this + 0x50),local_2c);
          }
        }
        else {
          bVar2 = std::operator==(&local_14,"[item list]");
          if (bVar2) {
            std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::clear
                      ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                       (this + 0x68));
            while ((cVar1 = ScanInt((int *)local_34), cVar1 == '\x01' &&
                   (cVar1 = ScanInt(&local_30), cVar1 == '\x01'))) {
              *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + local_30;
              std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
              push_back((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *
                        )(this + 0x68),local_34);
            }
          }
          else {
            bVar2 = std::operator==(&local_14,"[player max]");
            if (bVar2) {
              ScanInt((int *)this);
            }
            else {
              bVar2 = std::operator==(&local_14,"[enter level]");
              if (bVar2) {
                ScanInt((int *)(this + 4));
              }
              else {
                bVar2 = std::operator==(&local_14,"[enter max level]");
                if (bVar2) {
                  ScanInt((int *)(this + 8));
                }
                else {
                  bVar2 = std::operator==(&local_14,"[enter count]");
                  if (bVar2) {
                    ScanInt((int *)(this + 0xc));
                  }
                  else {
                    bVar2 = std::operator==(&local_14,"[die count]");
                    if (bVar2) {
                      ScanInt((int *)(this + 0x10));
                    }
                    else {
                      bVar2 = std::operator==(&local_14,"[dice value]");
                      if (bVar2) {
                        ScanInt((int *)(this + 0x14));
                        ScanInt((int *)(this + 0x18));
                      }
                      else {
                        bVar2 = std::operator==(&local_14,"[reward item]");
                        if (bVar2) {
                          std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::
                          clear((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *
                                )(this + 0x74));
                          while ((cVar1 = ScanInt((int *)local_3c), cVar1 == '\x01' &&
                                 (cVar1 = ScanInt(&iStack_38), cVar1 == '\x01'))) {
                            std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::
                            push_back((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>
                                       *)(this + 0x74),local_3c);
                          }
                        }
                        else {
                          bVar2 = std::operator==(&local_14,"[tile pos]");
                          if (bVar2) {
                            std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::clear
                                      ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>
                                        *)(this + 0x80));
                            while ((cVar1 = ScanInt((int *)local_44), cVar1 == '\x01' &&
                                   (cVar1 = ScanInt(&iStack_40), cVar1 == '\x01'))) {
                              std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::
                              push_back((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>
                                         *)(this + 0x80),local_44);
                            }
                          }
                          else {
                            bVar2 = std::operator==(&local_14,"[dungeon difficulty]");
                            if (bVar2) {
                              uVar3 = ScanInt((bool *)0x0);
                              *(undefined4 *)(this + 0x20) = uVar3;
                            }
                            else {
                              bVar2 = std::operator==(&local_14,"[dungeon difficulty list]");
                              if (bVar2) {
                                std::
                                vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                ::clear((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                         *)(this + 0x24));
                                while ((cVar1 = ScanInt((int *)local_4c), cVar1 == '\x01' &&
                                       (cVar1 = ScanInt(&iStack_48), cVar1 == '\x01'))) {
                                  std::
                                  vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                  ::push_back((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                               *)(this + 0x24),local_4c);
                                }
                              }
                              else {
                                bVar2 = std::operator==(&local_14,"[super armor time]");
                                if (bVar2) {
                                  uVar3 = ScanInt((bool *)0x0);
                                  *(undefined4 *)(this + 0x30) = uVar3;
                                }
                                else {
                                  bVar2 = std::operator==(&local_14,"[unique dungeon list]");
                                  if (bVar2) {
                                    std::
                                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                    ::clear((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                             *)(this + 0x5c));
                                    while (((cVar1 = ScanInt((int *)local_58), cVar1 == '\x01' &&
                                            (cVar1 = ScanInt(&iStack_54), cVar1 == '\x01')) &&
                                           (cVar1 = ScanInt(&iStack_50), cVar1 == '\x01'))) {
                                      std::
                                      vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                      ::push_back((
                                                  vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                                  *)(this + 0x5c),local_58);
                                    }
                                  }
                                  else {
                                    bVar2 = std::operator==(&local_14,"[buff max value]");
                                    if (bVar2) {
                                      ScanInt((int *)(this + 0x34));
                                    }
                                    else {
                                      bVar2 = std::operator==(&local_14,"[gold base]");
                                      if (bVar2) {
                                        ScanFloat((float *)(this + 0x38));
                                      }
                                      else {
                                        bVar2 = std::operator==(&local_14,"[gold multi]");
                                        if (bVar2) {
                                          ScanFloat((float *)(this + 0x3c));
                                        }
                                        else {
                                          bVar2 = std::operator==(&local_14,
                                                                  "[equipment upgrade max]");
                                          if (bVar2) {
                                            uVar3 = ScanInt((bool *)0x0);
                                            *(undefined4 *)(this + 0x40) = uVar3;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 1;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

