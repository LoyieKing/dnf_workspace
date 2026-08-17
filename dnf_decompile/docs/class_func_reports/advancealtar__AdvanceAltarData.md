# advancealtar__AdvanceAltarData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AdvanceAltarData

```asm
// === 0889911e advancealtar::AdvanceAltarData::AdvanceAltarData  [0x0889911e-0x8899243] ===
 889911e:	55                   	push   %ebp
 889911f:	89 e5                	mov    %esp,%ebp
 8899121:	56                   	push   %esi
 8899122:	53                   	push   %ebx
 8899123:	83 ec 10             	sub    $0x10,%esp
 8899126:	8b 45 08             	mov    0x8(%ebp),%eax
 8899129:	89 04 24             	mov    %eax,(%esp)
 889912c:	e8 33 63 bf ff       	call   848f464 <_ZN12advancealtar12_RidableBaseC1Ev>
 8899131:	8b 45 08             	mov    0x8(%ebp),%eax
 8899134:	83 c0 24             	add    $0x24,%eax
 8899137:	89 04 24             	mov    %eax,(%esp)
 889913a:	e8 39 29 00 00       	call   889ba78 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 889913f:	8b 45 08             	mov    0x8(%ebp),%eax
 8899142:	83 c0 3c             	add    $0x3c,%eax
 8899145:	89 04 24             	mov    %eax,(%esp)
 8899148:	e8 3f 29 00 00       	call   889ba8c <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 889914d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899150:	83 c0 54             	add    $0x54,%eax
 8899153:	89 04 24             	mov    %eax,(%esp)
 8899156:	e8 31 29 00 00       	call   889ba8c <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 889915b:	8b 45 08             	mov    0x8(%ebp),%eax
 889915e:	83 c0 6c             	add    $0x6c,%eax
 8899161:	89 04 24             	mov    %eax,(%esp)
 8899164:	e8 23 29 00 00       	call   889ba8c <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8899169:	8b 45 08             	mov    0x8(%ebp),%eax
 889916c:	05 84 00 00 00       	add    $0x84,%eax
 8899171:	89 04 24             	mov    %eax,(%esp)
 8899174:	e8 27 29 00 00       	call   889baa0 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEEC1Ev>
 8899179:	8b 45 08             	mov    0x8(%ebp),%eax
 889917c:	05 9c 00 00 00       	add    $0x9c,%eax
 8899181:	89 04 24             	mov    %eax,(%esp)
 8899184:	e8 17 29 00 00       	call   889baa0 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEEC1Ev>
 8899189:	8b 45 08             	mov    0x8(%ebp),%eax
 889918c:	05 b4 00 00 00       	add    $0xb4,%eax
 8899191:	89 04 24             	mov    %eax,(%esp)
 8899194:	e8 13 c5 89 ff       	call   81356ac <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8899199:	8b 45 08             	mov    0x8(%ebp),%eax
 889919c:	c6 80 cc 00 00 00 00 	movb   $0x0,0xcc(%eax)
 88991a3:	83 c4 10             	add    $0x10,%esp
 88991a6:	5b                   	pop    %ebx
 88991a7:	5e                   	pop    %esi
 88991a8:	5d                   	pop    %ebp
 88991a9:	c3                   	ret
 88991aa:	89 d3                	mov    %edx,%ebx
 88991ac:	89 c6                	mov    %eax,%esi
 88991ae:	8b 45 08             	mov    0x8(%ebp),%eax
 88991b1:	05 9c 00 00 00       	add    $0x9c,%eax
 88991b6:	89 04 24             	mov    %eax,(%esp)
 88991b9:	e8 4c b3 89 ff       	call   813450a <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEED1Ev>
 88991be:	89 f0                	mov    %esi,%eax
 88991c0:	89 da                	mov    %ebx,%edx
 88991c2:	eb 00                	jmp    88991c4 <_ZN12advancealtar16AdvanceAltarDataC1Ev+0xa6>
 88991c4:	89 d3                	mov    %edx,%ebx
 88991c6:	89 c6                	mov    %eax,%esi
 88991c8:	8b 45 08             	mov    0x8(%ebp),%eax
 88991cb:	05 84 00 00 00       	add    $0x84,%eax
 88991d0:	89 04 24             	mov    %eax,(%esp)
 88991d3:	e8 32 b3 89 ff       	call   813450a <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEED1Ev>
 88991d8:	89 f0                	mov    %esi,%eax
 88991da:	89 da                	mov    %ebx,%edx
 88991dc:	eb 00                	jmp    88991de <_ZN12advancealtar16AdvanceAltarDataC1Ev+0xc0>
 88991de:	89 d3                	mov    %edx,%ebx
 88991e0:	89 c6                	mov    %eax,%esi
 88991e2:	8b 45 08             	mov    0x8(%ebp),%eax
 88991e5:	83 c0 6c             	add    $0x6c,%eax
 88991e8:	89 04 24             	mov    %eax,(%esp)
 88991eb:	e8 06 b3 89 ff       	call   81344f6 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 88991f0:	89 f0                	mov    %esi,%eax
 88991f2:	89 da                	mov    %ebx,%edx
 88991f4:	eb 00                	jmp    88991f6 <_ZN12advancealtar16AdvanceAltarDataC1Ev+0xd8>
 88991f6:	89 d3                	mov    %edx,%ebx
 88991f8:	89 c6                	mov    %eax,%esi
 88991fa:	8b 45 08             	mov    0x8(%ebp),%eax
 88991fd:	83 c0 54             	add    $0x54,%eax
 8899200:	89 04 24             	mov    %eax,(%esp)
 8899203:	e8 ee b2 89 ff       	call   81344f6 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899208:	89 f0                	mov    %esi,%eax
 889920a:	89 da                	mov    %ebx,%edx
 889920c:	eb 00                	jmp    889920e <_ZN12advancealtar16AdvanceAltarDataC1Ev+0xf0>
 889920e:	89 d3                	mov    %edx,%ebx
 8899210:	89 c6                	mov    %eax,%esi
 8899212:	8b 45 08             	mov    0x8(%ebp),%eax
 8899215:	83 c0 3c             	add    $0x3c,%eax
 8899218:	89 04 24             	mov    %eax,(%esp)
 889921b:	e8 d6 b2 89 ff       	call   81344f6 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899220:	89 f0                	mov    %esi,%eax
 8899222:	89 da                	mov    %ebx,%edx
 8899224:	eb 00                	jmp    8899226 <_ZN12advancealtar16AdvanceAltarDataC1Ev+0x108>
 8899226:	89 d3                	mov    %edx,%ebx
 8899228:	89 c6                	mov    %eax,%esi
 889922a:	8b 45 08             	mov    0x8(%ebp),%eax
 889922d:	83 c0 24             	add    $0x24,%eax
 8899230:	89 04 24             	mov    %eax,(%esp)
 8899233:	e8 aa b2 89 ff       	call   81344e2 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899238:	89 f0                	mov    %esi,%eax
 889923a:	89 da                	mov    %ebx,%edx
 889923c:	89 04 24             	mov    %eax,(%esp)
 889923f:	e8 0c a5 24 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// advancealtar::AdvanceAltarData::AdvanceAltarData @ 0x889911e

/* advancealtar::AdvanceAltarData::AdvanceAltarData() */

void __thiscall advancealtar::AdvanceAltarData::AdvanceAltarData(AdvanceAltarData *this)

{
  _RidableBase::_RidableBase((_RidableBase *)this);
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::map((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
         *)(this + 0x24));
                    /* try { // try from 08899148 to 0889914c has its CatchHandler @ 08899226 */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x3c));
                    /* try { // try from 08899156 to 0889915a has its CatchHandler @ 0889920e */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x54));
                    /* try { // try from 08899164 to 08899168 has its CatchHandler @ 088991f6 */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x6c));
                    /* try { // try from 08899174 to 08899178 has its CatchHandler @ 088991de */
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::map((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
         *)(this + 0x84));
                    /* try { // try from 08899184 to 08899188 has its CatchHandler @ 088991c4 */
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::map((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
         *)(this + 0x9c));
                    /* try { // try from 08899194 to 08899198 has its CatchHandler @ 088991aa */
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::map((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
         *)(this + 0xb4));
  this[0xcc] = (AdvanceAltarData)0x0;
  return;
}

```

---

## get

```asm
// === 088996d8 advancealtar::AdvanceAltarData::get  [0x088996d8-0x88999d7] ===
 88996d8:	55                   	push   %ebp
 88996d9:	89 e5                	mov    %esp,%ebp
 88996db:	83 ec 48             	sub    $0x48,%esp
 88996de:	8b 45 08             	mov    0x8(%ebp),%eax
 88996e1:	0f b6 90 cc 00 00 00 	movzbl 0xcc(%eax),%edx
 88996e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 88996eb:	88 90 17 05 00 00    	mov    %dl,0x517(%eax)
 88996f1:	8b 55 08             	mov    0x8(%ebp),%edx
 88996f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 88996f7:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 88996fe:	00 
 88996ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899703:	89 04 24             	mov    %eax,(%esp)
 8899706:	e8 95 41 7e ff       	call   807d8a0 <memcpy@plt>
 889970b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8899712:	8b 45 08             	mov    0x8(%ebp),%eax
 8899715:	8d 50 24             	lea    0x24(%eax),%edx
 8899718:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889971b:	89 54 24 04          	mov    %edx,0x4(%esp)
 889971f:	89 04 24             	mov    %eax,(%esp)
 8899722:	e8 b1 c7 89 ff       	call   8135ed8 <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8899727:	83 ec 04             	sub    $0x4,%esp
 889972a:	e9 88 00 00 00       	jmp    88997b7 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0xdf>
 889972f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8899732:	89 04 24             	mov    %eax,(%esp)
 8899735:	e8 3c c8 89 ff       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 889973a:	8b 40 04             	mov    0x4(%eax),%eax
 889973d:	85 c0                	test   %eax,%eax
 889973f:	0f 9e c0             	setle  %al
 8899742:	84 c0                	test   %al,%al
 8899744:	74 1f                	je     8899765 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x8d>
 8899746:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8899749:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899750:	00 
 8899751:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8899754:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899758:	89 04 24             	mov    %eax,(%esp)
 889975b:	e8 d8 c7 89 ff       	call   8135f38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEppEi>
 8899760:	83 ec 04             	sub    $0x4,%esp
 8899763:	eb 52                	jmp    88997b7 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0xdf>
 8899765:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8899768:	89 04 24             	mov    %eax,(%esp)
 889976b:	e8 06 c8 89 ff       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 8899770:	8d 50 04             	lea    0x4(%eax),%edx
 8899773:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8899776:	83 c0 04             	add    $0x4,%eax
 8899779:	c1 e0 03             	shl    $0x3,%eax
 889977c:	03 45 0c             	add    0xc(%ebp),%eax
 889977f:	83 c0 01             	add    $0x1,%eax
 8899782:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8899789:	00 
 889978a:	89 54 24 04          	mov    %edx,0x4(%esp)
 889978e:	89 04 24             	mov    %eax,(%esp)
 8899791:	e8 0a 41 7e ff       	call   807d8a0 <memcpy@plt>
 8899796:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899799:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88997a0:	00 
 88997a1:	8d 55 d8             	lea    -0x28(%ebp),%edx
 88997a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 88997a8:	89 04 24             	mov    %eax,(%esp)
 88997ab:	e8 88 c7 89 ff       	call   8135f38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEppEi>
 88997b0:	83 ec 04             	sub    $0x4,%esp
 88997b3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88997b7:	8b 45 08             	mov    0x8(%ebp),%eax
 88997ba:	8d 50 24             	lea    0x24(%eax),%edx
 88997bd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88997c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 88997c4:	89 04 24             	mov    %eax,(%esp)
 88997c7:	e8 32 c7 89 ff       	call   8135efe <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 88997cc:	83 ec 04             	sub    $0x4,%esp
 88997cf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88997d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 88997d6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88997d9:	89 04 24             	mov    %eax,(%esp)
 88997dc:	e8 43 c7 89 ff       	call   8135f24 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEneERKS5_>
 88997e1:	84 c0                	test   %al,%al
 88997e3:	74 0d                	je     88997f2 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x11a>
 88997e5:	83 7d f4 31          	cmpl   $0x31,-0xc(%ebp)
 88997e9:	7f 07                	jg     88997f2 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x11a>
 88997eb:	b8 01 00 00 00       	mov    $0x1,%eax
 88997f0:	eb 05                	jmp    88997f7 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x11f>
 88997f2:	b8 00 00 00 00       	mov    $0x0,%eax
 88997f7:	84 c0                	test   %al,%al
 88997f9:	0f 85 30 ff ff ff    	jne    889972f <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x57>
 88997ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899802:	8d 90 b1 01 00 00    	lea    0x1b1(%eax),%edx
 8899808:	8b 45 08             	mov    0x8(%ebp),%eax
 889980b:	05 84 00 00 00       	add    $0x84,%eax
 8899810:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 8899817:	00 
 8899818:	89 54 24 08          	mov    %edx,0x8(%esp)
 889981c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899820:	8b 45 08             	mov    0x8(%ebp),%eax
 8899823:	89 04 24             	mov    %eax,(%esp)
 8899826:	e8 23 03 00 00       	call   8899b4e <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i>
 889982b:	8b 45 0c             	mov    0xc(%ebp),%eax
 889982e:	8d 90 b1 01 00 00    	lea    0x1b1(%eax),%edx
 8899834:	8b 45 08             	mov    0x8(%ebp),%eax
 8899837:	05 9c 00 00 00       	add    $0x9c,%eax
 889983c:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 8899843:	00 
 8899844:	89 54 24 08          	mov    %edx,0x8(%esp)
 8899848:	89 44 24 04          	mov    %eax,0x4(%esp)
 889984c:	8b 45 08             	mov    0x8(%ebp),%eax
 889984f:	89 04 24             	mov    %eax,(%esp)
 8899852:	e8 f7 02 00 00       	call   8899b4e <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i>
 8899857:	8b 45 0c             	mov    0xc(%ebp),%eax
 889985a:	8d 90 29 02 00 00    	lea    0x229(%eax),%edx
 8899860:	8b 45 08             	mov    0x8(%ebp),%eax
 8899863:	83 c0 3c             	add    $0x3c,%eax
 8899866:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 889986d:	00 
 889986e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8899872:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899876:	8b 45 08             	mov    0x8(%ebp),%eax
 8899879:	89 04 24             	mov    %eax,(%esp)
 889987c:	e8 b9 01 00 00       	call   8899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>
 8899881:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899884:	8d 90 29 02 00 00    	lea    0x229(%eax),%edx
 889988a:	8b 45 08             	mov    0x8(%ebp),%eax
 889988d:	83 c0 54             	add    $0x54,%eax
 8899890:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 8899897:	00 
 8899898:	89 54 24 08          	mov    %edx,0x8(%esp)
 889989c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88998a0:	8b 45 08             	mov    0x8(%ebp),%eax
 88998a3:	89 04 24             	mov    %eax,(%esp)
 88998a6:	e8 8f 01 00 00       	call   8899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>
 88998ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 88998ae:	8d 90 29 02 00 00    	lea    0x229(%eax),%edx
 88998b4:	8b 45 08             	mov    0x8(%ebp),%eax
 88998b7:	83 c0 6c             	add    $0x6c,%eax
 88998ba:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 88998c1:	00 
 88998c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 88998c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 88998ca:	8b 45 08             	mov    0x8(%ebp),%eax
 88998cd:	89 04 24             	mov    %eax,(%esp)
 88998d0:	e8 65 01 00 00       	call   8899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>
 88998d5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88998dc:	8b 45 08             	mov    0x8(%ebp),%eax
 88998df:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 88998e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88998e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 88998ec:	89 04 24             	mov    %eax,(%esp)
 88998ef:	e8 1a c0 89 ff       	call   813590e <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 88998f4:	83 ec 04             	sub    $0x4,%esp
 88998f7:	e9 8e 00 00 00       	jmp    889998a <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x2b2>
 88998fc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88998ff:	89 04 24             	mov    %eax,(%esp)
 8899902:	e8 a5 c0 89 ff       	call   81359ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 8899907:	8b 40 04             	mov    0x4(%eax),%eax
 889990a:	85 c0                	test   %eax,%eax
 889990c:	0f 9e c0             	setle  %al
 889990f:	84 c0                	test   %al,%al
 8899911:	74 1f                	je     8899932 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x25a>
 8899913:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8899916:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 889991d:	00 
 889991e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8899921:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899925:	89 04 24             	mov    %eax,(%esp)
 8899928:	e8 41 c0 89 ff       	call   813596e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEppEi>
 889992d:	83 ec 04             	sub    $0x4,%esp
 8899930:	eb 58                	jmp    889998a <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x2b2>
 8899932:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8899935:	89 04 24             	mov    %eax,(%esp)
 8899938:	e8 6f c0 89 ff       	call   81359ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 889993d:	8d 48 04             	lea    0x4(%eax),%ecx
 8899940:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899943:	89 d0                	mov    %edx,%eax
 8899945:	c1 e0 02             	shl    $0x2,%eax
 8899948:	01 d0                	add    %edx,%eax
 889994a:	05 80 04 00 00       	add    $0x480,%eax
 889994f:	03 45 0c             	add    0xc(%ebp),%eax
 8899952:	83 c0 01             	add    $0x1,%eax
 8899955:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 889995c:	00 
 889995d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8899961:	89 04 24             	mov    %eax,(%esp)
 8899964:	e8 37 3f 7e ff       	call   807d8a0 <memcpy@plt>
 8899969:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889996c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899973:	00 
 8899974:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8899977:	89 54 24 04          	mov    %edx,0x4(%esp)
 889997b:	89 04 24             	mov    %eax,(%esp)
 889997e:	e8 eb bf 89 ff       	call   813596e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEppEi>
 8899983:	83 ec 04             	sub    $0x4,%esp
 8899986:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 889998a:	8b 45 08             	mov    0x8(%ebp),%eax
 889998d:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 8899993:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8899996:	89 54 24 04          	mov    %edx,0x4(%esp)
 889999a:	89 04 24             	mov    %eax,(%esp)
 889999d:	e8 92 bf 89 ff       	call   8135934 <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 88999a2:	83 ec 04             	sub    $0x4,%esp
 88999a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88999a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88999ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88999af:	89 04 24             	mov    %eax,(%esp)
 88999b2:	e8 a3 bf 89 ff       	call   813595a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEneERKS5_>
 88999b7:	84 c0                	test   %al,%al
 88999b9:	74 0d                	je     88999c8 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x2f0>
 88999bb:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 88999bf:	7f 07                	jg     88999c8 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x2f0>
 88999c1:	b8 01 00 00 00       	mov    $0x1,%eax
 88999c6:	eb 05                	jmp    88999cd <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x2f5>
 88999c8:	b8 00 00 00 00       	mov    $0x0,%eax
 88999cd:	84 c0                	test   %al,%al
 88999cf:	0f 85 27 ff ff ff    	jne    88998fc <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE+0x224>
 88999d5:	c9                   	leave
 88999d6:	c3                   	ret
 88999d7:	90                   	nop

```

```c
// advancealtar::AdvanceAltarData::get @ 0x88996d8

/* advancealtar::AdvanceAltarData::get(advancealtar::_AdvanceAltarDbData&) const */

void __thiscall
advancealtar::AdvanceAltarData::get(AdvanceAltarData *this,_AdvanceAltarDbData *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_30 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_2c [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_20 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_14 [4];
  int local_10;
  
  *(AdvanceAltarData *)(param_1 + 0x517) = this[0xcc];
  memcpy(param_1,this,0x21);
  local_10 = 0;
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::begin(local_2c);
  while( true ) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_2c,(_Rb_tree_const_iterator *)local_28);
    if ((cVar2 == '\0') || (0x31 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_2c);
    if (*(int *)(iVar3 + 4) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_24,(int)local_2c);
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_2c);
      memcpy(param_1 + (local_10 + 4) * 8 + 1,(void *)(iVar3 + 4),8);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_20,(int)local_2c);
      local_10 = local_10 + 1;
    }
  }
  getSlot(this,(map *)(this + 0x84),(_Slot *)(param_1 + 0x1b1),0xc);
  getSlot(this,(map *)(this + 0x9c),(_Slot *)(param_1 + 0x1b1),0xc);
  getBuyItem(this,(map *)(this + 0x3c),(_BuyItem *)(param_1 + 0x229),0x32);
  getBuyItem(this,(map *)(this + 0x54),(_BuyItem *)(param_1 + 0x229),0x32);
  getBuyItem(this,(map *)(this + 0x6c),(_BuyItem *)(param_1 + 0x229),0x32);
  local_10 = 0;
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_30,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (0x1d < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_30);
    if (*(int *)(iVar3 + 4) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_18,(int)local_30);
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_30);
      memcpy(param_1 + local_10 * 5 + 0x481,(void *)(iVar3 + 4),5);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_14,(int)local_30);
      local_10 = local_10 + 1;
    }
  }
  return;
}

```

---

## getBuyItem

```asm
// === 08899a3a advancealtar::AdvanceAltarData::getBuyItem  [0x08899a3a-0x8899b4d] ===
 8899a3a:	55                   	push   %ebp
 8899a3b:	89 e5                	mov    %esp,%ebp
 8899a3d:	83 ec 38             	sub    $0x38,%esp
 8899a40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8899a47:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899a4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8899a4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899a51:	89 04 24             	mov    %eax,(%esp)
 8899a54:	e8 43 8e 8a ff       	call   814289c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8899a59:	83 ec 04             	sub    $0x4,%esp
 8899a5c:	e9 a4 00 00 00       	jmp    8899b05 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0xcb>
 8899a61:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899a64:	89 04 24             	mov    %eax,(%esp)
 8899a67:	e8 4a c9 89 ff       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8899a6c:	8b 40 08             	mov    0x8(%eax),%eax
 8899a6f:	85 c0                	test   %eax,%eax
 8899a71:	0f 9e c0             	setle  %al
 8899a74:	84 c0                	test   %al,%al
 8899a76:	74 1f                	je     8899a97 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x5d>
 8899a78:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8899a7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899a82:	00 
 8899a83:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8899a86:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899a8a:	89 04 24             	mov    %eax,(%esp)
 8899a8d:	e8 30 8e 8a ff       	call   81428c2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEppEi>
 8899a92:	83 ec 04             	sub    $0x4,%esp
 8899a95:	eb 6e                	jmp    8899b05 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0xcb>
 8899a97:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899a9a:	89 d0                	mov    %edx,%eax
 8899a9c:	01 c0                	add    %eax,%eax
 8899a9e:	01 d0                	add    %edx,%eax
 8899aa0:	c1 e0 02             	shl    $0x2,%eax
 8899aa3:	03 45 10             	add    0x10(%ebp),%eax
 8899aa6:	8b 40 04             	mov    0x4(%eax),%eax
 8899aa9:	85 c0                	test   %eax,%eax
 8899aab:	7e 06                	jle    8899ab3 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x79>
 8899aad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8899ab1:	eb 52                	jmp    8899b05 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0xcb>
 8899ab3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899ab6:	89 04 24             	mov    %eax,(%esp)
 8899ab9:	e8 f8 c8 89 ff       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8899abe:	8d 48 04             	lea    0x4(%eax),%ecx
 8899ac1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899ac4:	89 d0                	mov    %edx,%eax
 8899ac6:	01 c0                	add    %eax,%eax
 8899ac8:	01 d0                	add    %edx,%eax
 8899aca:	c1 e0 02             	shl    $0x2,%eax
 8899acd:	03 45 10             	add    0x10(%ebp),%eax
 8899ad0:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8899ad7:	00 
 8899ad8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8899adc:	89 04 24             	mov    %eax,(%esp)
 8899adf:	e8 bc 3d 7e ff       	call   807d8a0 <memcpy@plt>
 8899ae4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8899ae7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899aee:	00 
 8899aef:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8899af2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899af6:	89 04 24             	mov    %eax,(%esp)
 8899af9:	e8 c4 8d 8a ff       	call   81428c2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEppEi>
 8899afe:	83 ec 04             	sub    $0x4,%esp
 8899b01:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8899b05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8899b08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8899b0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899b0f:	89 04 24             	mov    %eax,(%esp)
 8899b12:	e8 71 c6 89 ff       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8899b17:	83 ec 04             	sub    $0x4,%esp
 8899b1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8899b1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899b21:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899b24:	89 04 24             	mov    %eax,(%esp)
 8899b27:	e8 76 c8 89 ff       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 8899b2c:	84 c0                	test   %al,%al
 8899b2e:	74 0f                	je     8899b3f <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x105>
 8899b30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8899b33:	3b 45 14             	cmp    0x14(%ebp),%eax
 8899b36:	7d 07                	jge    8899b3f <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x105>
 8899b38:	b8 01 00 00 00       	mov    $0x1,%eax
 8899b3d:	eb 05                	jmp    8899b44 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x10a>
 8899b3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8899b44:	84 c0                	test   %al,%al
 8899b46:	0f 85 15 ff ff ff    	jne    8899a61 <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i+0x27>
 8899b4c:	c9                   	leave
 8899b4d:	c3                   	ret

```

```c
// advancealtar::AdvanceAltarData::getBuyItem @ 0x8899a3a

/* advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>,
   std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*,
   int) const */

void __thiscall
advancealtar::AdvanceAltarData::getBuyItem
          (AdvanceAltarData *this,map *param_1,_BuyItem *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_20 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_20,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (param_3 <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_20);
    if (*(int *)(iVar3 + 8) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
                (local_18,(int)local_20);
    }
    else if (*(int *)(param_2 + local_10 * 0xc + 4) < 1) {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                         local_20);
      memcpy(param_2 + local_10 * 0xc,(void *)(iVar3 + 4),0xc);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
                (local_14,(int)local_20);
      local_10 = local_10 + 1;
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  return;
}

```

---

## getBuyItemMap

```asm
// === 088999d8 advancealtar::AdvanceAltarData::getBuyItemMap  [0x088999d8-0x8899a0b] ===
 88999d8:	55                   	push   %ebp
 88999d9:	89 e5                	mov    %esp,%ebp
 88999db:	8b 45 0c             	mov    0xc(%ebp),%eax
 88999de:	83 f8 01             	cmp    $0x1,%eax
 88999e1:	74 11                	je     88999f4 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x1c>
 88999e3:	83 f8 02             	cmp    $0x2,%eax
 88999e6:	74 14                	je     88999fc <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x24>
 88999e8:	85 c0                	test   %eax,%eax
 88999ea:	75 18                	jne    8899a04 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x2c>
 88999ec:	8b 45 08             	mov    0x8(%ebp),%eax
 88999ef:	83 c0 3c             	add    $0x3c,%eax
 88999f2:	eb 15                	jmp    8899a09 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x31>
 88999f4:	8b 45 08             	mov    0x8(%ebp),%eax
 88999f7:	83 c0 54             	add    $0x54,%eax
 88999fa:	eb 0d                	jmp    8899a09 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x31>
 88999fc:	8b 45 08             	mov    0x8(%ebp),%eax
 88999ff:	83 c0 6c             	add    $0x6c,%eax
 8899a02:	eb 05                	jmp    8899a09 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE+0x31>
 8899a04:	b8 00 00 00 00       	mov    $0x0,%eax
 8899a09:	5d                   	pop    %ebp
 8899a0a:	c3                   	ret
 8899a0b:	90                   	nop

```

```c
// advancealtar::AdvanceAltarData::getBuyItemMap @ 0x88999d8

/* advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T) */

AdvanceAltarData * __thiscall
advancealtar::AdvanceAltarData::getBuyItemMap(AdvanceAltarData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x54;
  }
  else if (param_2 == 2) {
    this = this + 0x6c;
  }
  else if (param_2 == 0) {
    this = this + 0x3c;
  }
  else {
    this = (AdvanceAltarData *)0x0;
  }
  return this;
}

```

---

## getSlot

```asm
// === 08899b4e advancealtar::AdvanceAltarData::getSlot  [0x08899b4e-0x8899c61] ===
 8899b4e:	55                   	push   %ebp
 8899b4f:	89 e5                	mov    %esp,%ebp
 8899b51:	83 ec 38             	sub    $0x38,%esp
 8899b54:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8899b5b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899b5e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8899b61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899b65:	89 04 24             	mov    %eax,(%esp)
 8899b68:	e8 89 c7 89 ff       	call   81362f6 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8899b6d:	83 ec 04             	sub    $0x4,%esp
 8899b70:	e9 a4 00 00 00       	jmp    8899c19 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0xcb>
 8899b75:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899b78:	89 04 24             	mov    %eax,(%esp)
 8899b7b:	e8 14 c8 89 ff       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8899b80:	8b 40 02             	mov    0x2(%eax),%eax
 8899b83:	85 c0                	test   %eax,%eax
 8899b85:	0f 94 c0             	sete   %al
 8899b88:	84 c0                	test   %al,%al
 8899b8a:	74 1f                	je     8899bab <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x5d>
 8899b8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8899b8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899b96:	00 
 8899b97:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8899b9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899b9e:	89 04 24             	mov    %eax,(%esp)
 8899ba1:	e8 b0 c7 89 ff       	call   8136356 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8899ba6:	83 ec 04             	sub    $0x4,%esp
 8899ba9:	eb 6e                	jmp    8899c19 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0xcb>
 8899bab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899bae:	89 d0                	mov    %edx,%eax
 8899bb0:	c1 e0 02             	shl    $0x2,%eax
 8899bb3:	01 d0                	add    %edx,%eax
 8899bb5:	01 c0                	add    %eax,%eax
 8899bb7:	03 45 10             	add    0x10(%ebp),%eax
 8899bba:	8b 40 01             	mov    0x1(%eax),%eax
 8899bbd:	85 c0                	test   %eax,%eax
 8899bbf:	74 06                	je     8899bc7 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x79>
 8899bc1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8899bc5:	eb 52                	jmp    8899c19 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0xcb>
 8899bc7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899bca:	89 04 24             	mov    %eax,(%esp)
 8899bcd:	e8 c2 c7 89 ff       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8899bd2:	8d 48 01             	lea    0x1(%eax),%ecx
 8899bd5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899bd8:	89 d0                	mov    %edx,%eax
 8899bda:	c1 e0 02             	shl    $0x2,%eax
 8899bdd:	01 d0                	add    %edx,%eax
 8899bdf:	01 c0                	add    %eax,%eax
 8899be1:	03 45 10             	add    0x10(%ebp),%eax
 8899be4:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8899beb:	00 
 8899bec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8899bf0:	89 04 24             	mov    %eax,(%esp)
 8899bf3:	e8 a8 3c 7e ff       	call   807d8a0 <memcpy@plt>
 8899bf8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8899bfb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8899c02:	00 
 8899c03:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8899c06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899c0a:	89 04 24             	mov    %eax,(%esp)
 8899c0d:	e8 44 c7 89 ff       	call   8136356 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8899c12:	83 ec 04             	sub    $0x4,%esp
 8899c15:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8899c19:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8899c1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8899c1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899c23:	89 04 24             	mov    %eax,(%esp)
 8899c26:	e8 f1 c6 89 ff       	call   813631c <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8899c2b:	83 ec 04             	sub    $0x4,%esp
 8899c2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8899c31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899c35:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899c38:	89 04 24             	mov    %eax,(%esp)
 8899c3b:	e8 02 c7 89 ff       	call   8136342 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 8899c40:	84 c0                	test   %al,%al
 8899c42:	74 0f                	je     8899c53 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x105>
 8899c44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8899c47:	3b 45 14             	cmp    0x14(%ebp),%eax
 8899c4a:	7d 07                	jge    8899c53 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x105>
 8899c4c:	b8 01 00 00 00       	mov    $0x1,%eax
 8899c51:	eb 05                	jmp    8899c58 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x10a>
 8899c53:	b8 00 00 00 00       	mov    $0x0,%eax
 8899c58:	84 c0                	test   %al,%al
 8899c5a:	0f 85 15 ff ff ff    	jne    8899b75 <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i+0x27>
 8899c60:	c9                   	leave
 8899c61:	c3                   	ret

```

```c
// advancealtar::AdvanceAltarData::getSlot @ 0x8899b4e

/* advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot,
   std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > >
   const&, advancealtar::_Slot*, int) const */

void __thiscall
advancealtar::AdvanceAltarData::getSlot
          (AdvanceAltarData *this,map *param_1,_Slot *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_20,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (param_3 <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_20);
    if (*(int *)(iVar3 + 2) == 0) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_18,(int)local_20);
    }
    else if (*(int *)(param_2 + local_10 * 10 + 1) == 0) {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
              operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          *)local_20);
      memcpy(param_2 + local_10 * 10,(void *)(iVar3 + 1),10);
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_14,(int)local_20);
      local_10 = local_10 + 1;
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  return;
}

```

---

## getSlotMap

```asm
// === 08899a0c advancealtar::AdvanceAltarData::getSlotMap  [0x08899a0c-0x8899a39] ===
 8899a0c:	55                   	push   %ebp
 8899a0d:	89 e5                	mov    %esp,%ebp
 8899a0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899a12:	83 f8 01             	cmp    $0x1,%eax
 8899a15:	74 07                	je     8899a1e <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE+0x12>
 8899a17:	83 f8 02             	cmp    $0x2,%eax
 8899a1a:	74 0c                	je     8899a28 <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE+0x1c>
 8899a1c:	eb 14                	jmp    8899a32 <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE+0x26>
 8899a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8899a21:	05 84 00 00 00       	add    $0x84,%eax
 8899a26:	eb 0f                	jmp    8899a37 <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE+0x2b>
 8899a28:	8b 45 08             	mov    0x8(%ebp),%eax
 8899a2b:	05 9c 00 00 00       	add    $0x9c,%eax
 8899a30:	eb 05                	jmp    8899a37 <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE+0x2b>
 8899a32:	b8 00 00 00 00       	mov    $0x0,%eax
 8899a37:	5d                   	pop    %ebp
 8899a38:	c3                   	ret
 8899a39:	90                   	nop

```

```c
// advancealtar::AdvanceAltarData::getSlotMap @ 0x8899a0c

/* advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T) */

AdvanceAltarData * __thiscall
advancealtar::AdvanceAltarData::getSlotMap(AdvanceAltarData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x84;
  }
  else if (param_2 == 2) {
    this = this + 0x9c;
  }
  else {
    this = (AdvanceAltarData *)0x0;
  }
  return this;
}

```

---

## reset

```asm
// === 08899244 advancealtar::AdvanceAltarData::reset  [0x08899244-0x88992d9] ===
 8899244:	55                   	push   %ebp
 8899245:	89 e5                	mov    %esp,%ebp
 8899247:	83 ec 18             	sub    $0x18,%esp
 889924a:	8b 45 08             	mov    0x8(%ebp),%eax
 889924d:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 8899254:	00 
 8899255:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 889925c:	00 
 889925d:	89 04 24             	mov    %eax,(%esp)
 8899260:	e8 5b 4a 7e ff       	call   807dcc0 <memset@plt>
 8899265:	8b 45 08             	mov    0x8(%ebp),%eax
 8899268:	c6 80 cc 00 00 00 00 	movb   $0x0,0xcc(%eax)
 889926f:	8b 45 08             	mov    0x8(%ebp),%eax
 8899272:	83 c0 24             	add    $0x24,%eax
 8899275:	89 04 24             	mov    %eax,(%esp)
 8899278:	e8 37 28 00 00       	call   889bab4 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 889927d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899280:	83 c0 3c             	add    $0x3c,%eax
 8899283:	89 04 24             	mov    %eax,(%esp)
 8899286:	e8 af d2 89 ff       	call   813653a <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 889928b:	8b 45 08             	mov    0x8(%ebp),%eax
 889928e:	83 c0 54             	add    $0x54,%eax
 8899291:	89 04 24             	mov    %eax,(%esp)
 8899294:	e8 a1 d2 89 ff       	call   813653a <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8899299:	8b 45 08             	mov    0x8(%ebp),%eax
 889929c:	83 c0 6c             	add    $0x6c,%eax
 889929f:	89 04 24             	mov    %eax,(%esp)
 88992a2:	e8 93 d2 89 ff       	call   813653a <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88992a7:	8b 45 08             	mov    0x8(%ebp),%eax
 88992aa:	05 84 00 00 00       	add    $0x84,%eax
 88992af:	89 04 24             	mov    %eax,(%esp)
 88992b2:	e8 11 28 00 00       	call   889bac8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5clearEv>
 88992b7:	8b 45 08             	mov    0x8(%ebp),%eax
 88992ba:	05 9c 00 00 00       	add    $0x9c,%eax
 88992bf:	89 04 24             	mov    %eax,(%esp)
 88992c2:	e8 01 28 00 00       	call   889bac8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5clearEv>
 88992c7:	8b 45 08             	mov    0x8(%ebp),%eax
 88992ca:	05 b4 00 00 00       	add    $0xb4,%eax
 88992cf:	89 04 24             	mov    %eax,(%esp)
 88992d2:	e8 05 28 00 00       	call   889badc <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88992d7:	c9                   	leave
 88992d8:	c3                   	ret
 88992d9:	90                   	nop

```

```c
// advancealtar::AdvanceAltarData::reset @ 0x8899244

/* advancealtar::AdvanceAltarData::reset() */

void __thiscall advancealtar::AdvanceAltarData::reset(AdvanceAltarData *this)

{
  memset(this,0,0x21);
  this[0xcc] = (AdvanceAltarData)0x0;
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::clear((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
           *)(this + 0x24));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x3c));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x54));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x6c));
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::clear((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
           *)(this + 0x84));
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::clear((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
           *)(this + 0x9c));
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::clear((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
           *)(this + 0xb4));
  return;
}

```

---

## set

```asm
// === 088992da advancealtar::AdvanceAltarData::set  [0x088992da-0x88996d7] ===
 88992da:	55                   	push   %ebp
 88992db:	89 e5                	mov    %esp,%ebp
 88992dd:	81 ec d8 00 00 00    	sub    $0xd8,%esp
 88992e3:	8b 45 08             	mov    0x8(%ebp),%eax
 88992e6:	c6 80 cc 00 00 00 00 	movb   $0x0,0xcc(%eax)
 88992ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 88992f0:	8b 45 08             	mov    0x8(%ebp),%eax
 88992f3:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 88992fa:	00 
 88992fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 88992ff:	89 04 24             	mov    %eax,(%esp)
 8899302:	e8 99 45 7e ff       	call   807d8a0 <memcpy@plt>
 8899307:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 889930e:	e9 8c 00 00 00       	jmp    889939f <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0xc5>
 8899313:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8899316:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899319:	83 c2 04             	add    $0x4,%edx
 889931c:	8b 44 d0 01          	mov    0x1(%eax,%edx,8),%eax
 8899320:	85 c0                	test   %eax,%eax
 8899322:	7e 76                	jle    889939a <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0xc0>
 8899324:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8899327:	83 c0 04             	add    $0x4,%eax
 889932a:	c1 e0 03             	shl    $0x3,%eax
 889932d:	03 45 0c             	add    0xc(%ebp),%eax
 8899330:	8d 48 01             	lea    0x1(%eax),%ecx
 8899333:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8899336:	83 c0 04             	add    $0x4,%eax
 8899339:	c1 e0 03             	shl    $0x3,%eax
 889933c:	03 45 0c             	add    0xc(%ebp),%eax
 889933f:	8d 50 01             	lea    0x1(%eax),%edx
 8899342:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8899348:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889934c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899350:	89 04 24             	mov    %eax,(%esp)
 8899353:	e8 97 27 00 00       	call   889baef <_ZSt9make_pairIRKiRKN12advancealtar6_StageEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 8899358:	83 ec 04             	sub    $0x4,%esp
 889935b:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8899361:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899365:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 889936b:	89 04 24             	mov    %eax,(%esp)
 889936e:	e8 37 d3 89 ff       	call   81366aa <_ZNSt4pairIKiN12advancealtar6_StageEEC1IiS2_EEOS_IT_T0_E>
 8899373:	8b 45 08             	mov    0x8(%ebp),%eax
 8899376:	8d 48 24             	lea    0x24(%eax),%ecx
 8899379:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 889937f:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 8899385:	89 54 24 08          	mov    %edx,0x8(%esp)
 8899389:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 889938d:	89 04 24             	mov    %eax,(%esp)
 8899390:	e8 4b d3 89 ff       	call   81366e0 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8899395:	83 ec 04             	sub    $0x4,%esp
 8899398:	eb 01                	jmp    889939b <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0xc1>
 889939a:	90                   	nop
 889939b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 889939f:	83 7d e4 31          	cmpl   $0x31,-0x1c(%ebp)
 88993a3:	0f 9e c0             	setle  %al
 88993a6:	84 c0                	test   %al,%al
 88993a8:	0f 85 65 ff ff ff    	jne    8899313 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x39>
 88993ae:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 88993b5:	e9 72 01 00 00       	jmp    889952c <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x252>
 88993ba:	8b 55 e8             	mov    -0x18(%ebp),%edx
 88993bd:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 88993c0:	89 d0                	mov    %edx,%eax
 88993c2:	c1 e0 02             	shl    $0x2,%eax
 88993c5:	01 d0                	add    %edx,%eax
 88993c7:	01 c0                	add    %eax,%eax
 88993c9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 88993cc:	05 b0 01 00 00       	add    $0x1b0,%eax
 88993d1:	8b 40 02             	mov    0x2(%eax),%eax
 88993d4:	85 c0                	test   %eax,%eax
 88993d6:	0f 84 4b 01 00 00    	je     8899527 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x24d>
 88993dc:	8b 55 e8             	mov    -0x18(%ebp),%edx
 88993df:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 88993e2:	89 d0                	mov    %edx,%eax
 88993e4:	c1 e0 02             	shl    $0x2,%eax
 88993e7:	01 d0                	add    %edx,%eax
 88993e9:	01 c0                	add    %eax,%eax
 88993eb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 88993ee:	05 b0 01 00 00       	add    $0x1b0,%eax
 88993f3:	8b 40 02             	mov    0x2(%eax),%eax
 88993f6:	83 f8 01             	cmp    $0x1,%eax
 88993f9:	0f 85 8c 00 00 00    	jne    889948b <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x1b1>
 88993ff:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8899402:	89 d0                	mov    %edx,%eax
 8899404:	c1 e0 02             	shl    $0x2,%eax
 8899407:	01 d0                	add    %edx,%eax
 8899409:	01 c0                	add    %eax,%eax
 889940b:	05 b0 01 00 00       	add    $0x1b0,%eax
 8899410:	03 45 0c             	add    0xc(%ebp),%eax
 8899413:	8d 48 01             	lea    0x1(%eax),%ecx
 8899416:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8899419:	89 d0                	mov    %edx,%eax
 889941b:	c1 e0 02             	shl    $0x2,%eax
 889941e:	01 d0                	add    %edx,%eax
 8899420:	01 c0                	add    %eax,%eax
 8899422:	05 b0 01 00 00       	add    $0x1b0,%eax
 8899427:	03 45 0c             	add    0xc(%ebp),%eax
 889942a:	8d 50 06             	lea    0x6(%eax),%edx
 889942d:	8d 85 71 ff ff ff    	lea    -0x8f(%ebp),%eax
 8899433:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8899437:	89 54 24 04          	mov    %edx,0x4(%esp)
 889943b:	89 04 24             	mov    %eax,(%esp)
 889943e:	e8 ea 26 00 00       	call   889bb2d <_ZSt9make_pairIRKhRKN12advancealtar5_SlotEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 8899443:	83 ec 04             	sub    $0x4,%esp
 8899446:	8d 85 71 ff ff ff    	lea    -0x8f(%ebp),%eax
 889944c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899450:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 8899456:	89 04 24             	mov    %eax,(%esp)
 8899459:	e8 a2 d1 89 ff       	call   8136600 <_ZNSt4pairIKhN12advancealtar5_SlotEEC1IhS2_EEOS_IT_T0_E>
 889945e:	8b 45 08             	mov    0x8(%ebp),%eax
 8899461:	8d 88 84 00 00 00    	lea    0x84(%eax),%ecx
 8899467:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 889946d:	8d 95 66 ff ff ff    	lea    -0x9a(%ebp),%edx
 8899473:	89 54 24 08          	mov    %edx,0x8(%esp)
 8899477:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 889947b:	89 04 24             	mov    %eax,(%esp)
 889947e:	e8 bd d1 89 ff       	call   8136640 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE6insertERKS6_>
 8899483:	83 ec 04             	sub    $0x4,%esp
 8899486:	e9 9d 00 00 00       	jmp    8899528 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x24e>
 889948b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 889948e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8899491:	89 d0                	mov    %edx,%eax
 8899493:	c1 e0 02             	shl    $0x2,%eax
 8899496:	01 d0                	add    %edx,%eax
 8899498:	01 c0                	add    %eax,%eax
 889949a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 889949d:	05 b0 01 00 00       	add    $0x1b0,%eax
 88994a2:	8b 40 02             	mov    0x2(%eax),%eax
 88994a5:	83 f8 02             	cmp    $0x2,%eax
 88994a8:	75 7e                	jne    8899528 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x24e>
 88994aa:	8b 55 e8             	mov    -0x18(%ebp),%edx
 88994ad:	89 d0                	mov    %edx,%eax
 88994af:	c1 e0 02             	shl    $0x2,%eax
 88994b2:	01 d0                	add    %edx,%eax
 88994b4:	01 c0                	add    %eax,%eax
 88994b6:	05 b0 01 00 00       	add    $0x1b0,%eax
 88994bb:	03 45 0c             	add    0xc(%ebp),%eax
 88994be:	8d 48 01             	lea    0x1(%eax),%ecx
 88994c1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 88994c4:	89 d0                	mov    %edx,%eax
 88994c6:	c1 e0 02             	shl    $0x2,%eax
 88994c9:	01 d0                	add    %edx,%eax
 88994cb:	01 c0                	add    %eax,%eax
 88994cd:	05 b0 01 00 00       	add    $0x1b0,%eax
 88994d2:	03 45 0c             	add    0xc(%ebp),%eax
 88994d5:	8d 50 06             	lea    0x6(%eax),%edx
 88994d8:	8d 45 91             	lea    -0x6f(%ebp),%eax
 88994db:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88994df:	89 54 24 04          	mov    %edx,0x4(%esp)
 88994e3:	89 04 24             	mov    %eax,(%esp)
 88994e6:	e8 42 26 00 00       	call   889bb2d <_ZSt9make_pairIRKhRKN12advancealtar5_SlotEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 88994eb:	83 ec 04             	sub    $0x4,%esp
 88994ee:	8d 45 91             	lea    -0x6f(%ebp),%eax
 88994f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 88994f5:	8d 45 86             	lea    -0x7a(%ebp),%eax
 88994f8:	89 04 24             	mov    %eax,(%esp)
 88994fb:	e8 00 d1 89 ff       	call   8136600 <_ZNSt4pairIKhN12advancealtar5_SlotEEC1IhS2_EEOS_IT_T0_E>
 8899500:	8b 45 08             	mov    0x8(%ebp),%eax
 8899503:	8d 88 9c 00 00 00    	lea    0x9c(%eax),%ecx
 8899509:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 889950f:	8d 55 86             	lea    -0x7a(%ebp),%edx
 8899512:	89 54 24 08          	mov    %edx,0x8(%esp)
 8899516:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 889951a:	89 04 24             	mov    %eax,(%esp)
 889951d:	e8 1e d1 89 ff       	call   8136640 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE6insertERKS6_>
 8899522:	83 ec 04             	sub    $0x4,%esp
 8899525:	eb 01                	jmp    8899528 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x24e>
 8899527:	90                   	nop
 8899528:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 889952c:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
 8899530:	0f 9e c0             	setle  %al
 8899533:	84 c0                	test   %al,%al
 8899535:	0f 85 7f fe ff ff    	jne    88993ba <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0xe0>
 889953b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8899542:	e9 cd 00 00 00       	jmp    8899614 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x33a>
 8899547:	8b 55 ec             	mov    -0x14(%ebp),%edx
 889954a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 889954d:	89 d0                	mov    %edx,%eax
 889954f:	01 c0                	add    %eax,%eax
 8899551:	01 d0                	add    %edx,%eax
 8899553:	c1 e0 02             	shl    $0x2,%eax
 8899556:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8899559:	05 20 02 00 00       	add    $0x220,%eax
 889955e:	8b 40 0d             	mov    0xd(%eax),%eax
 8899561:	85 c0                	test   %eax,%eax
 8899563:	0f 8e a6 00 00 00    	jle    889960f <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x335>
 8899569:	8b 55 ec             	mov    -0x14(%ebp),%edx
 889956c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 889956f:	89 d0                	mov    %edx,%eax
 8899571:	01 c0                	add    %eax,%eax
 8899573:	01 d0                	add    %edx,%eax
 8899575:	c1 e0 02             	shl    $0x2,%eax
 8899578:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 889957b:	05 20 02 00 00       	add    $0x220,%eax
 8899580:	8b 40 09             	mov    0x9(%eax),%eax
 8899583:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899587:	8b 45 08             	mov    0x8(%ebp),%eax
 889958a:	89 04 24             	mov    %eax,(%esp)
 889958d:	e8 46 04 00 00       	call   88999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>
 8899592:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8899595:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8899599:	74 75                	je     8899610 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x336>
 889959b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 889959e:	89 d0                	mov    %edx,%eax
 88995a0:	01 c0                	add    %eax,%eax
 88995a2:	01 d0                	add    %edx,%eax
 88995a4:	c1 e0 02             	shl    $0x2,%eax
 88995a7:	05 20 02 00 00       	add    $0x220,%eax
 88995ac:	03 45 0c             	add    0xc(%ebp),%eax
 88995af:	8d 48 09             	lea    0x9(%eax),%ecx
 88995b2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 88995b5:	89 d0                	mov    %edx,%eax
 88995b7:	01 c0                	add    %eax,%eax
 88995b9:	01 d0                	add    %edx,%eax
 88995bb:	c1 e0 02             	shl    $0x2,%eax
 88995be:	05 20 02 00 00       	add    $0x220,%eax
 88995c3:	03 45 0c             	add    0xc(%ebp),%eax
 88995c6:	8d 50 0d             	lea    0xd(%eax),%edx
 88995c9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88995cc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88995d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 88995d4:	89 04 24             	mov    %eax,(%esp)
 88995d7:	e8 8f 25 00 00       	call   889bb6b <_ZSt9make_pairIRKiRKN12advancealtar8_BuyItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 88995dc:	83 ec 04             	sub    $0x4,%esp
 88995df:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88995e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 88995e6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 88995e9:	89 04 24             	mov    %eax,(%esp)
 88995ec:	e8 37 ca 89 ff       	call   8136028 <_ZNSt4pairIKiN12advancealtar8_BuyItemEEC1IiS2_EEOS_IT_T0_E>
 88995f1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88995f4:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 88995f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 88995fb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88995fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899602:	89 04 24             	mov    %eax,(%esp)
 8899605:	e8 5a ca 89 ff       	call   8136064 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 889960a:	83 ec 04             	sub    $0x4,%esp
 889960d:	eb 01                	jmp    8899610 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x336>
 889960f:	90                   	nop
 8899610:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8899614:	83 7d ec 31          	cmpl   $0x31,-0x14(%ebp)
 8899618:	0f 9e c0             	setle  %al
 889961b:	84 c0                	test   %al,%al
 889961d:	0f 85 24 ff ff ff    	jne    8899547 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x26d>
 8899623:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 889962a:	e9 97 00 00 00       	jmp    88996c6 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x3ec>
 889962f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899632:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8899635:	89 d0                	mov    %edx,%eax
 8899637:	c1 e0 02             	shl    $0x2,%eax
 889963a:	01 d0                	add    %edx,%eax
 889963c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 889963f:	05 80 04 00 00       	add    $0x480,%eax
 8899644:	8b 40 01             	mov    0x1(%eax),%eax
 8899647:	85 c0                	test   %eax,%eax
 8899649:	7e 76                	jle    88996c1 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x3e7>
 889964b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 889964e:	89 d0                	mov    %edx,%eax
 8899650:	c1 e0 02             	shl    $0x2,%eax
 8899653:	01 d0                	add    %edx,%eax
 8899655:	05 80 04 00 00       	add    $0x480,%eax
 889965a:	03 45 0c             	add    0xc(%ebp),%eax
 889965d:	8d 48 01             	lea    0x1(%eax),%ecx
 8899660:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8899663:	89 d0                	mov    %edx,%eax
 8899665:	c1 e0 02             	shl    $0x2,%eax
 8899668:	01 d0                	add    %edx,%eax
 889966a:	05 80 04 00 00       	add    $0x480,%eax
 889966f:	03 45 0c             	add    0xc(%ebp),%eax
 8899672:	8d 50 01             	lea    0x1(%eax),%edx
 8899675:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8899678:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889967c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8899680:	89 04 24             	mov    %eax,(%esp)
 8899683:	e8 21 25 00 00       	call   889bba9 <_ZSt9make_pairIRKiRKN12advancealtar7_RewardEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 8899688:	83 ec 04             	sub    $0x4,%esp
 889968b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889968e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899692:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8899695:	89 04 24             	mov    %eax,(%esp)
 8899698:	e8 0d ce 89 ff       	call   81364aa <_ZNSt4pairIKiN12advancealtar7_RewardEEC1IiS2_EEOS_IT_T0_E>
 889969d:	8b 45 08             	mov    0x8(%ebp),%eax
 88996a0:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 88996a6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 88996a9:	8d 55 cc             	lea    -0x34(%ebp),%edx
 88996ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 88996b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88996b4:	89 04 24             	mov    %eax,(%esp)
 88996b7:	e8 26 ce 89 ff       	call   81364e2 <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 88996bc:	83 ec 04             	sub    $0x4,%esp
 88996bf:	eb 01                	jmp    88996c2 <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x3e8>
 88996c1:	90                   	nop
 88996c2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88996c6:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 88996ca:	0f 9e c0             	setle  %al
 88996cd:	84 c0                	test   %al,%al
 88996cf:	0f 85 5a ff ff ff    	jne    889962f <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE+0x355>
 88996d5:	c9                   	leave
 88996d6:	c3                   	ret
 88996d7:	90                   	nop

```

```c
// advancealtar::AdvanceAltarData::set @ 0x88992da

/* advancealtar::AdvanceAltarData::set(advancealtar::_AdvanceAltarDbData const&) */

void __thiscall
advancealtar::AdvanceAltarData::set(AdvanceAltarData *this,_AdvanceAltarDbData *param_1)

{
  pair<int_const,advancealtar::_Stage> *ppVar1;
  pair local_c8 [8];
  pair<int_const,advancealtar::_Stage> local_c0 [12];
  int local_b4 [3];
  pair local_a8 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_9e [11];
  uchar local_93 [11];
  pair local_88 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_7e [11];
  uchar local_73 [11];
  pair local_68 [8];
  pair<int_const,advancealtar::_BuyItem> local_60 [16];
  int local_50 [4];
  pair local_40 [8];
  pair<int_const,advancealtar::_Reward> local_38 [12];
  int local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  this[0xcc] = (AdvanceAltarData)0x0;
  ppVar1 = (pair<int_const,advancealtar::_Stage> *)0x21;
  memcpy(this,param_1,0x21);
  for (local_20 = 0; local_20 < 0x32; local_20 = local_20 + 1) {
    if (0 < *(int *)(param_1 + (local_20 + 4) * 8 + 1)) {
      std::make_pair<int_const&,advancealtar::_Stage_const&>
                (local_b4,(_Stage *)(param_1 + (local_20 + 4) * 8 + 1));
      std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                (local_c0,(pair *)local_b4);
      ppVar1 = local_c0;
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::insert(local_c8);
    }
  }
  for (local_1c = 0; local_1c < 0xc; local_1c = local_1c + 1) {
    if (*(int *)(param_1 + local_1c * 10 + 0x1b2) != 0) {
      if (*(int *)(param_1 + local_1c * 10 + 0x1b2) == 1) {
        std::make_pair<unsigned_char_const&,advancealtar::_Slot_const&>
                  (local_93,(_Slot *)(param_1 + local_1c * 10 + 0x1b6));
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_9e,local_93);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_9e;
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_a8);
      }
      else if (*(int *)(param_1 + local_1c * 10 + 0x1b2) == 2) {
        std::make_pair<unsigned_char_const&,advancealtar::_Slot_const&>
                  (local_73,(_Slot *)(param_1 + local_1c * 10 + 0x1b6));
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_7e,local_73);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_7e;
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_88);
      }
    }
  }
  for (local_18 = 0; local_18 < 0x32; local_18 = local_18 + 1) {
    if (0 < *(int *)(param_1 + local_18 * 0xc + 0x22d)) {
      local_14 = getBuyItemMap(this,*(undefined4 *)(param_1 + local_18 * 0xc + 0x229),ppVar1);
      if (local_14 != 0) {
        std::make_pair<int_const&,advancealtar::_BuyItem_const&>
                  (local_50,(_BuyItem *)(param_1 + local_18 * 0xc + 0x22d));
        std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                  (local_60,(pair *)local_50);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_60;
        std::
        map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
        ::insert(local_68);
      }
    }
  }
  for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
    if (0 < *(int *)(param_1 + local_10 * 5 + 0x481)) {
      std::make_pair<int_const&,advancealtar::_Reward_const&>
                (local_2c,(_Reward *)(param_1 + local_10 * 5 + 0x481));
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_38,(pair *)local_2c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_40);
    }
  }
  return;
}

```

