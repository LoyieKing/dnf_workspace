# CMap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CMap

```asm
// === 0834dcda CMap::CMap  [0x0834dcda-0x834def5] ===
 834dcda:	55                   	push   %ebp
 834dcdb:	89 e5                	mov    %esp,%ebp
 834dcdd:	56                   	push   %esi
 834dcde:	53                   	push   %ebx
 834dcdf:	83 ec 10             	sub    $0x10,%esp
 834dce2:	8b 45 08             	mov    0x8(%ebp),%eax
 834dce5:	83 c0 0c             	add    $0xc,%eax
 834dce8:	89 04 24             	mov    %eax,(%esp)
 834dceb:	e8 16 2d fc ff       	call   8310a06 <_ZNSt4listI11_mapMonsterSaIS0_EEC1Ev>
 834dcf0:	8b 45 08             	mov    0x8(%ebp),%eax
 834dcf3:	83 c0 14             	add    $0x14,%eax
 834dcf6:	89 04 24             	mov    %eax,(%esp)
 834dcf9:	e8 08 2d fc ff       	call   8310a06 <_ZNSt4listI11_mapMonsterSaIS0_EEC1Ev>
 834dcfe:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd01:	83 c0 1c             	add    $0x1c,%eax
 834dd04:	89 04 24             	mov    %eax,(%esp)
 834dd07:	e8 86 cc 03 00       	call   838a992 <_ZNSt4listI8_mapItemSaIS0_EEC1Ev>
 834dd0c:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd0f:	83 c0 24             	add    $0x24,%eax
 834dd12:	89 04 24             	mov    %eax,(%esp)
 834dd15:	e8 bc 7a ee ff       	call   82357d6 <_ZNSt4listIiSaIiEEC1Ev>
 834dd1a:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd1d:	83 c0 6c             	add    $0x6c,%eax
 834dd20:	89 04 24             	mov    %eax,(%esp)
 834dd23:	e8 26 54 03 00       	call   838314e <_ZNSt6vectorI27STAICharacterMapArrangeDataSaIS0_EEC1Ev>
 834dd28:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd2b:	05 84 00 00 00       	add    $0x84,%eax
 834dd30:	89 04 24             	mov    %eax,(%esp)
 834dd33:	e8 9e 6c de ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 834dd38:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd3b:	05 90 00 00 00       	add    $0x90,%eax
 834dd40:	89 04 24             	mov    %eax,(%esp)
 834dd43:	e8 94 53 03 00       	call   83830dc <_ZNSt6vectorI14STRivalMapDataSaIS0_EEC1Ev>
 834dd48:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd4b:	05 9c 00 00 00       	add    $0x9c,%eax
 834dd50:	89 04 24             	mov    %eax,(%esp)
 834dd53:	e8 84 53 03 00       	call   83830dc <_ZNSt6vectorI14STRivalMapDataSaIS0_EEC1Ev>
 834dd58:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd5b:	05 a8 00 00 00       	add    $0xa8,%eax
 834dd60:	89 04 24             	mov    %eax,(%esp)
 834dd63:	e8 44 04 d4 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 834dd68:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd6b:	05 b8 00 00 00       	add    $0xb8,%eax
 834dd70:	89 04 24             	mov    %eax,(%esp)
 834dd73:	e8 fa cc f5 ff       	call   82aaa72 <_ZNSt6vectorI19STAssignBloodSystemSaIS0_EEC1Ev>
 834dd78:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd7b:	05 c4 00 00 00       	add    $0xc4,%eax
 834dd80:	89 04 24             	mov    %eax,(%esp)
 834dd83:	e8 5c cd f5 ff       	call   82aaae4 <_ZNSt6vectorI22STAssignBloodPhaseTimeSaIS0_EEC1Ev>
 834dd88:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd8b:	05 f4 00 00 00       	add    $0xf4,%eax
 834dd90:	89 04 24             	mov    %eax,(%esp)
 834dd93:	e8 d6 bf 54 00       	call   8899d6e <_ZN12advancealtar8TimeLineC1Ev>
 834dd98:	8b 45 08             	mov    0x8(%ebp),%eax
 834dd9b:	05 14 01 00 00       	add    $0x114,%eax
 834dda0:	89 04 24             	mov    %eax,(%esp)
 834dda3:	e8 fc 54 03 00       	call   83832a4 <_ZNSt3mapIcSt6vectorI17TournamentMonsterSaIS1_EESt4lessIcESaISt4pairIKcS3_EEEC1Ev>
 834dda8:	8b 45 08             	mov    0x8(%ebp),%eax
 834ddab:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 834ddb1:	8b 45 08             	mov    0x8(%ebp),%eax
 834ddb4:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 834ddbb:	83 c4 10             	add    $0x10,%esp
 834ddbe:	5b                   	pop    %ebx
 834ddbf:	5e                   	pop    %esi
 834ddc0:	5d                   	pop    %ebp
 834ddc1:	c3                   	ret
 834ddc2:	89 d3                	mov    %edx,%ebx
 834ddc4:	89 c6                	mov    %eax,%esi
 834ddc6:	8b 45 08             	mov    0x8(%ebp),%eax
 834ddc9:	05 f4 00 00 00       	add    $0xf4,%eax
 834ddce:	89 04 24             	mov    %eax,(%esp)
 834ddd1:	e8 de bf 54 00       	call   8899db4 <_ZN12advancealtar8TimeLineD1Ev>
 834ddd6:	89 f0                	mov    %esi,%eax
 834ddd8:	89 da                	mov    %ebx,%edx
 834ddda:	eb 00                	jmp    834dddc <_ZN4CMapC1Ev+0x102>
 834dddc:	89 d3                	mov    %edx,%ebx
 834ddde:	89 c6                	mov    %eax,%esi
 834dde0:	8b 45 08             	mov    0x8(%ebp),%eax
 834dde3:	05 c4 00 00 00       	add    $0xc4,%eax
 834dde8:	89 04 24             	mov    %eax,(%esp)
 834ddeb:	e8 08 cd f5 ff       	call   82aaaf8 <_ZNSt6vectorI22STAssignBloodPhaseTimeSaIS0_EED1Ev>
 834ddf0:	89 f0                	mov    %esi,%eax
 834ddf2:	89 da                	mov    %ebx,%edx
 834ddf4:	eb 00                	jmp    834ddf6 <_ZN4CMapC1Ev+0x11c>
 834ddf6:	89 d3                	mov    %edx,%ebx
 834ddf8:	89 c6                	mov    %eax,%esi
 834ddfa:	8b 45 08             	mov    0x8(%ebp),%eax
 834ddfd:	05 b8 00 00 00       	add    $0xb8,%eax
 834de02:	89 04 24             	mov    %eax,(%esp)
 834de05:	e8 7c cc f5 ff       	call   82aaa86 <_ZNSt6vectorI19STAssignBloodSystemSaIS0_EED1Ev>
 834de0a:	89 f0                	mov    %esi,%eax
 834de0c:	89 da                	mov    %ebx,%edx
 834de0e:	eb 00                	jmp    834de10 <_ZN4CMapC1Ev+0x136>
 834de10:	89 d3                	mov    %edx,%ebx
 834de12:	89 c6                	mov    %eax,%esi
 834de14:	8b 45 08             	mov    0x8(%ebp),%eax
 834de17:	05 a8 00 00 00       	add    $0xa8,%eax
 834de1c:	89 04 24             	mov    %eax,(%esp)
 834de1f:	e8 b6 5f d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 834de24:	89 f0                	mov    %esi,%eax
 834de26:	89 da                	mov    %ebx,%edx
 834de28:	eb 00                	jmp    834de2a <_ZN4CMapC1Ev+0x150>
 834de2a:	89 d3                	mov    %edx,%ebx
 834de2c:	89 c6                	mov    %eax,%esi
 834de2e:	8b 45 08             	mov    0x8(%ebp),%eax
 834de31:	05 9c 00 00 00       	add    $0x9c,%eax
 834de36:	89 04 24             	mov    %eax,(%esp)
 834de39:	e8 b2 52 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834de3e:	89 f0                	mov    %esi,%eax
 834de40:	89 da                	mov    %ebx,%edx
 834de42:	eb 00                	jmp    834de44 <_ZN4CMapC1Ev+0x16a>
 834de44:	89 d3                	mov    %edx,%ebx
 834de46:	89 c6                	mov    %eax,%esi
 834de48:	8b 45 08             	mov    0x8(%ebp),%eax
 834de4b:	05 90 00 00 00       	add    $0x90,%eax
 834de50:	89 04 24             	mov    %eax,(%esp)
 834de53:	e8 98 52 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834de58:	89 f0                	mov    %esi,%eax
 834de5a:	89 da                	mov    %ebx,%edx
 834de5c:	eb 00                	jmp    834de5e <_ZN4CMapC1Ev+0x184>
 834de5e:	89 d3                	mov    %edx,%ebx
 834de60:	89 c6                	mov    %eax,%esi
 834de62:	8b 45 08             	mov    0x8(%ebp),%eax
 834de65:	05 84 00 00 00       	add    $0x84,%eax
 834de6a:	89 04 24             	mov    %eax,(%esp)
 834de6d:	e8 78 6b de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 834de72:	89 f0                	mov    %esi,%eax
 834de74:	89 da                	mov    %ebx,%edx
 834de76:	eb 00                	jmp    834de78 <_ZN4CMapC1Ev+0x19e>
 834de78:	89 d3                	mov    %edx,%ebx
 834de7a:	89 c6                	mov    %eax,%esi
 834de7c:	8b 45 08             	mov    0x8(%ebp),%eax
 834de7f:	83 c0 6c             	add    $0x6c,%eax
 834de82:	89 04 24             	mov    %eax,(%esp)
 834de85:	e8 d8 52 03 00       	call   8383162 <_ZNSt6vectorI27STAICharacterMapArrangeDataSaIS0_EED1Ev>
 834de8a:	89 f0                	mov    %esi,%eax
 834de8c:	89 da                	mov    %ebx,%edx
 834de8e:	eb 00                	jmp    834de90 <_ZN4CMapC1Ev+0x1b6>
 834de90:	89 d3                	mov    %edx,%ebx
 834de92:	89 c6                	mov    %eax,%esi
 834de94:	8b 45 08             	mov    0x8(%ebp),%eax
 834de97:	83 c0 24             	add    $0x24,%eax
 834de9a:	89 04 24             	mov    %eax,(%esp)
 834de9d:	e8 46 cf ed ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 834dea2:	89 f0                	mov    %esi,%eax
 834dea4:	89 da                	mov    %ebx,%edx
 834dea6:	eb 00                	jmp    834dea8 <_ZN4CMapC1Ev+0x1ce>
 834dea8:	89 d3                	mov    %edx,%ebx
 834deaa:	89 c6                	mov    %eax,%esi
 834deac:	8b 45 08             	mov    0x8(%ebp),%eax
 834deaf:	83 c0 1c             	add    $0x1c,%eax
 834deb2:	89 04 24             	mov    %eax,(%esp)
 834deb5:	e8 f8 29 e0 ff       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 834deba:	89 f0                	mov    %esi,%eax
 834debc:	89 da                	mov    %ebx,%edx
 834debe:	eb 00                	jmp    834dec0 <_ZN4CMapC1Ev+0x1e6>
 834dec0:	89 d3                	mov    %edx,%ebx
 834dec2:	89 c6                	mov    %eax,%esi
 834dec4:	8b 45 08             	mov    0x8(%ebp),%eax
 834dec7:	83 c0 14             	add    $0x14,%eax
 834deca:	89 04 24             	mov    %eax,(%esp)
 834decd:	e8 b0 68 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834ded2:	89 f0                	mov    %esi,%eax
 834ded4:	89 da                	mov    %ebx,%edx
 834ded6:	eb 00                	jmp    834ded8 <_ZN4CMapC1Ev+0x1fe>
 834ded8:	89 d3                	mov    %edx,%ebx
 834deda:	89 c6                	mov    %eax,%esi
 834dedc:	8b 45 08             	mov    0x8(%ebp),%eax
 834dedf:	83 c0 0c             	add    $0xc,%eax
 834dee2:	89 04 24             	mov    %eax,(%esp)
 834dee5:	e8 98 68 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834deea:	89 f0                	mov    %esi,%eax
 834deec:	89 da                	mov    %ebx,%edx
 834deee:	89 04 24             	mov    %eax,(%esp)
 834def1:	e8 5a 58 79 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CMap::CMap @ 0x834dcda

/* CMap::CMap() */

void __thiscall CMap::CMap(CMap *this)

{
  std::list<_mapMonster,std::allocator<_mapMonster>>::list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
                    /* try { // try from 0834dcf9 to 0834dcfd has its CatchHandler @ 0834ded8 */
  std::list<_mapMonster,std::allocator<_mapMonster>>::list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14));
                    /* try { // try from 0834dd07 to 0834dd0b has its CatchHandler @ 0834dec0 */
  std::list<_mapItem,std::allocator<_mapItem>>::list
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
                    /* try { // try from 0834dd15 to 0834dd19 has its CatchHandler @ 0834dea8 */
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 0834dd23 to 0834dd27 has its CatchHandler @ 0834de90 */
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::vector
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c));
                    /* try { // try from 0834dd33 to 0834dd37 has its CatchHandler @ 0834de78 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84));
                    /* try { // try from 0834dd43 to 0834dd47 has its CatchHandler @ 0834de5e */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90));
                    /* try { // try from 0834dd53 to 0834dd57 has its CatchHandler @ 0834de44 */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
                    /* try { // try from 0834dd63 to 0834dd67 has its CatchHandler @ 0834de2a */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xa8));
                    /* try { // try from 0834dd73 to 0834dd77 has its CatchHandler @ 0834de10 */
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::vector
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8));
                    /* try { // try from 0834dd83 to 0834dd87 has its CatchHandler @ 0834ddf6 */
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::vector
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4))
  ;
                    /* try { // try from 0834dd93 to 0834dd97 has its CatchHandler @ 0834dddc */
  advancealtar::TimeLine::TimeLine((TimeLine *)(this + 0xf4));
                    /* try { // try from 0834dda3 to 0834dda7 has its CatchHandler @ 0834ddc2 */
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::map((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
         *)(this + 0x114));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}

```

---

## CheckEntrance

```asm
// === 0834ecaa CMap::CheckEntrance  [0x0834ecaa-0x834ed1d] ===
 834ecaa:	55                   	push   %ebp
 834ecab:	89 e5                	mov    %esp,%ebp
 834ecad:	83 ec 28             	sub    $0x28,%esp
 834ecb0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834ecb3:	89 04 24             	mov    %eax,(%esp)
 834ecb6:	e8 d3 6f e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 834ecbb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834ecc2:	eb 38                	jmp    834ecfc <_ZNK4CMap13CheckEntranceEi+0x52>
 834ecc4:	8b 45 08             	mov    0x8(%ebp),%eax
 834ecc7:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 834eccd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834ecd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ecd4:	89 14 24             	mov    %edx,(%esp)
 834ecd7:	e8 36 5e e6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 834ecdc:	8b 50 04             	mov    0x4(%eax),%edx
 834ecdf:	8b 00                	mov    (%eax),%eax
 834ece1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834ece4:	89 55 f0             	mov    %edx,-0x10(%ebp)
 834ece7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834ecea:	23 45 0c             	and    0xc(%ebp),%eax
 834eced:	85 c0                	test   %eax,%eax
 834ecef:	74 07                	je     834ecf8 <_ZNK4CMap13CheckEntranceEi+0x4e>
 834ecf1:	b8 01 00 00 00       	mov    $0x1,%eax
 834ecf6:	eb 23                	jmp    834ed1b <_ZNK4CMap13CheckEntranceEi+0x71>
 834ecf8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834ecfc:	8b 45 08             	mov    0x8(%ebp),%eax
 834ecff:	05 84 00 00 00       	add    $0x84,%eax
 834ed04:	89 04 24             	mov    %eax,(%esp)
 834ed07:	e8 08 eb d8 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834ed0c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834ed0f:	0f 97 c0             	seta   %al
 834ed12:	84 c0                	test   %al,%al
 834ed14:	75 ae                	jne    834ecc4 <_ZNK4CMap13CheckEntranceEi+0x1a>
 834ed16:	b8 00 00 00 00       	mov    $0x0,%eax
 834ed1b:	c9                   	leave
 834ed1c:	c3                   	ret
 834ed1d:	90                   	nop

```

```c
// CMap::CheckEntrance @ 0x834ecaa

/* CMap::CheckEntrance(int) const */

undefined4 __thiscall CMap::CheckEntrance(CMap *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_18);
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x84));
    if (uVar2 <= local_10) {
      return 0;
    }
    puVar1 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (this + 0x84),local_10);
    local_14 = puVar1[1];
    local_18 = *puVar1;
    if ((local_14 & param_1) != 0) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## box_item_index

```asm
// === 0834ebda CMap::box_item_index  [0x0834ebda-0x834eca9] ===
 834ebda:	55                   	push   %ebp
 834ebdb:	89 e5                	mov    %esp,%ebp
 834ebdd:	83 ec 48             	sub    $0x48,%esp
 834ebe0:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 834ebe7:	e8 9b 2f 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834ebec:	83 c0 01             	add    $0x1,%eax
 834ebef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834ebf2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834ebf9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834ebfc:	8b 55 0c             	mov    0xc(%ebp),%edx
 834ebff:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ec03:	89 04 24             	mov    %eax,(%esp)
 834ec06:	e8 4b ce 03 00       	call   838ba56 <_ZNSt4listISt4pairIiiESaIS1_EE5beginEv>
 834ec0b:	83 ec 04             	sub    $0x4,%esp
 834ec0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ec11:	89 04 24             	mov    %eax,(%esp)
 834ec14:	e8 75 70 e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 834ec19:	eb 58                	jmp    834ec73 <_ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE+0x99>
 834ec1b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834ec1e:	89 04 24             	mov    %eax,(%esp)
 834ec21:	e8 8e ce 03 00       	call   838bab4 <_ZNKSt14_List_iteratorISt4pairIiiEEdeEv>
 834ec26:	8b 50 04             	mov    0x4(%eax),%edx
 834ec29:	8b 00                	mov    (%eax),%eax
 834ec2b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834ec2e:	89 55 e8             	mov    %edx,-0x18(%ebp)
 834ec31:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834ec34:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ec38:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ec3b:	89 04 24             	mov    %eax,(%esp)
 834ec3e:	e8 d9 f2 d8 ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 834ec43:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834ec46:	01 45 f4             	add    %eax,-0xc(%ebp)
 834ec49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834ec4c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834ec4f:	7d 05                	jge    834ec56 <_ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE+0x7c>
 834ec51:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834ec54:	eb 51                	jmp    834eca7 <_ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE+0xcd>
 834ec56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834ec59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834ec60:	00 
 834ec61:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834ec64:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ec68:	89 04 24             	mov    %eax,(%esp)
 834ec6b:	e8 52 ce 03 00       	call   838bac2 <_ZNSt14_List_iteratorISt4pairIiiEEppEi>
 834ec70:	83 ec 04             	sub    $0x4,%esp
 834ec73:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834ec76:	8b 55 0c             	mov    0xc(%ebp),%edx
 834ec79:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ec7d:	89 04 24             	mov    %eax,(%esp)
 834ec80:	e8 f7 cd 03 00       	call   838ba7c <_ZNSt4listISt4pairIiiESaIS1_EE3endEv>
 834ec85:	83 ec 04             	sub    $0x4,%esp
 834ec88:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834ec8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ec8f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834ec92:	89 04 24             	mov    %eax,(%esp)
 834ec95:	e8 06 ce 03 00       	call   838baa0 <_ZNKSt14_List_iteratorISt4pairIiiEEneERKS2_>
 834ec9a:	84 c0                	test   %al,%al
 834ec9c:	0f 85 79 ff ff ff    	jne    834ec1b <_ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE+0x41>
 834eca2:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 834eca7:	c9                   	leave
 834eca8:	c3                   	ret
 834eca9:	90                   	nop

```

```c
// CMap::box_item_index @ 0x834ebda

/* CMap::box_item_index(std::list<std::pair<int, int>, std::allocator<std::pair<int, int> > >) const
    */

undefined4 CMap::box_item_index(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  int local_2c;
  _List_iterator<std::pair<int,int>> local_28 [4];
  _List_iterator local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  _List_iterator<std::pair<int,int>> local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = get_rand_int(100);
  local_14 = local_14 + 1;
  local_10 = 0;
  std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_30);
  while( true ) {
    std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    cVar1 = std::_List_iterator<std::pair<int,int>>::operator!=(local_28,local_24);
    if (cVar1 == '\0') {
      return 0xfffffffe;
    }
    puVar2 = (undefined4 *)std::_List_iterator<std::pair<int,int>>::operator*(local_28);
    local_1c = puVar2[1];
    local_20 = *puVar2;
    std::pair<int,int>::operator=((pair<int,int> *)&local_30,(pair *)&local_20);
    local_10 = local_10 + local_2c;
    if (local_14 < local_10) break;
    std::_List_iterator<std::pair<int,int>>::operator++(local_18,(int)local_28);
  }
  return local_30;
}

```

---

## checkFitInPathObject

```asm
// === 0834e9a6 CMap::checkFitInPathObject  [0x0834e9a6-0x834e9d3] ===
 834e9a6:	55                   	push   %ebp
 834e9a7:	89 e5                	mov    %esp,%ebp
 834e9a9:	83 ec 18             	sub    $0x18,%esp
 834e9ac:	8b 45 08             	mov    0x8(%ebp),%eax
 834e9af:	8d 50 4c             	lea    0x4c(%eax),%edx
 834e9b2:	8b 45 08             	mov    0x8(%ebp),%eax
 834e9b5:	83 c0 2c             	add    $0x2c,%eax
 834e9b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 834e9bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 834e9c0:	8b 45 10             	mov    0x10(%ebp),%eax
 834e9c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e9c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e9ca:	89 04 24             	mov    %eax,(%esp)
 834e9cd:	e8 4e 35 54 00       	call   8891f20 <_Z12isInPathAreaiiPA2_KiS1_>
 834e9d2:	c9                   	leave
 834e9d3:	c3                   	ret

```

```c
// CMap::checkFitInPathObject @ 0x834e9a6

/* CMap::checkFitInPathObject(int, int) const */

void __thiscall CMap::checkFitInPathObject(CMap *this,int param_1,int param_2)

{
  isInPathArea(param_1,param_2,(int *)(this + 0x2c),(int *)(this + 0x4c));
  return;
}

```

---

## destory

```asm
// === 0834ed1e CMap::destory  [0x0834ed1e-0x834ed23] ===
 834ed1e:	55                   	push   %ebp
 834ed1f:	89 e5                	mov    %esp,%ebp
 834ed21:	5d                   	pop    %ebp
 834ed22:	c3                   	ret
 834ed23:	90                   	nop

```

```c
// CMap::destory @ 0x834ed1e

/* CMap::destory() */

void CMap::destory(void)

{
  return;
}

```

---

## destroy

```asm
// === 0834e13e CMap::destroy  [0x0834e13e-0x834e189] ===
 834e13e:	55                   	push   %ebp
 834e13f:	89 e5                	mov    %esp,%ebp
 834e141:	83 ec 18             	sub    $0x18,%esp
 834e144:	8b 45 08             	mov    0x8(%ebp),%eax
 834e147:	83 c0 0c             	add    $0xc,%eax
 834e14a:	89 04 24             	mov    %eax,(%esp)
 834e14d:	e8 48 56 fc ff       	call   831379a <_ZNSt4listI11_mapMonsterSaIS0_EE5clearEv>
 834e152:	8b 45 08             	mov    0x8(%ebp),%eax
 834e155:	83 c0 1c             	add    $0x1c,%eax
 834e158:	89 04 24             	mov    %eax,(%esp)
 834e15b:	e8 46 c8 03 00       	call   838a9a6 <_ZNSt4listI8_mapItemSaIS0_EE5clearEv>
 834e160:	8b 45 08             	mov    0x8(%ebp),%eax
 834e163:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 834e169:	8b 45 08             	mov    0x8(%ebp),%eax
 834e16c:	83 c0 24             	add    $0x24,%eax
 834e16f:	89 04 24             	mov    %eax,(%esp)
 834e172:	e8 41 76 ee ff       	call   82357b8 <_ZNSt4listIiSaIiEE5clearEv>
 834e177:	8b 45 08             	mov    0x8(%ebp),%eax
 834e17a:	05 9c 00 00 00       	add    $0x9c,%eax
 834e17f:	89 04 24             	mov    %eax,(%esp)
 834e182:	e8 1b 49 03 00       	call   8382aa2 <_ZNSt6vectorI14STRivalMapDataSaIS0_EE5clearEv>
 834e187:	c9                   	leave
 834e188:	c3                   	ret
 834e189:	90                   	nop

```

```c
// CMap::destroy @ 0x834e13e

/* CMap::destroy() */

void __thiscall CMap::destroy(CMap *this)

{
  std::list<_mapMonster,std::allocator<_mapMonster>>::clear
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
  std::list<_mapItem,std::allocator<_mapItem>>::clear
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
  *(undefined4 *)this = 0;
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0x24));
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::clear
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
  return;
}

```

---

## insert_condition_monster

```asm
// === 0834ead4 CMap::insert_condition_monster  [0x0834ead4-0x834eb93] ===
 834ead4:	55                   	push   %ebp
 834ead5:	89 e5                	mov    %esp,%ebp
 834ead7:	56                   	push   %esi
 834ead8:	53                   	push   %ebx
 834ead9:	83 ec 50             	sub    $0x50,%esp
 834eadc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eadf:	89 04 24             	mov    %eax,(%esp)
 834eae2:	e8 15 fa fb ff       	call   830e4fc <_ZN11_mapMonsterC1Ev>
 834eae7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eaea:	8b 00                	mov    (%eax),%eax
 834eaec:	89 45 b8             	mov    %eax,-0x48(%ebp)
 834eaef:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eaf2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 834eaf6:	88 45 bc             	mov    %al,-0x44(%ebp)
 834eaf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eafc:	8b 40 08             	mov    0x8(%eax),%eax
 834eaff:	89 45 c0             	mov    %eax,-0x40(%ebp)
 834eb02:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb05:	8b 40 20             	mov    0x20(%eax),%eax
 834eb08:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 834eb0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb0e:	8b 40 1c             	mov    0x1c(%eax),%eax
 834eb11:	89 45 c8             	mov    %eax,-0x38(%ebp)
 834eb14:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb17:	8b 40 18             	mov    0x18(%eax),%eax
 834eb1a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 834eb1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb20:	8b 40 24             	mov    0x24(%eax),%eax
 834eb23:	89 45 d0             	mov    %eax,-0x30(%ebp)
 834eb26:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb29:	8b 48 14             	mov    0x14(%eax),%ecx
 834eb2c:	ba 67 66 66 66       	mov    $0x66666667,%edx
 834eb31:	89 c8                	mov    %ecx,%eax
 834eb33:	f7 ea                	imul   %edx
 834eb35:	c1 fa 02             	sar    $0x2,%edx
 834eb38:	89 c8                	mov    %ecx,%eax
 834eb3a:	c1 f8 1f             	sar    $0x1f,%eax
 834eb3d:	89 d1                	mov    %edx,%ecx
 834eb3f:	29 c1                	sub    %eax,%ecx
 834eb41:	89 c8                	mov    %ecx,%eax
 834eb43:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834eb46:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eb49:	8b 40 50             	mov    0x50(%eax),%eax
 834eb4c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834eb4f:	8b 45 08             	mov    0x8(%ebp),%eax
 834eb52:	8d 50 14             	lea    0x14(%eax),%edx
 834eb55:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eb58:	89 44 24 04          	mov    %eax,0x4(%esp)
 834eb5c:	89 14 24             	mov    %edx,(%esp)
 834eb5f:	e8 1e ad de ff       	call   8139882 <_ZNSt4listI11_mapMonsterSaIS0_EE9push_backERKS0_>
 834eb64:	eb 1b                	jmp    834eb81 <_ZN4CMap24insert_condition_monsterE15STAssignMonster+0xad>
 834eb66:	89 d3                	mov    %edx,%ebx
 834eb68:	89 c6                	mov    %eax,%esi
 834eb6a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eb6d:	89 04 24             	mov    %eax,(%esp)
 834eb70:	e8 51 ad de ff       	call   81398c6 <_ZN11_mapMonsterD1Ev>
 834eb75:	89 f0                	mov    %esi,%eax
 834eb77:	89 da                	mov    %ebx,%edx
 834eb79:	89 04 24             	mov    %eax,(%esp)
 834eb7c:	e8 cf 4b 79 00       	call   8ae3750 <_Unwind_Resume>
 834eb81:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eb84:	89 04 24             	mov    %eax,(%esp)
 834eb87:	e8 3a ad de ff       	call   81398c6 <_ZN11_mapMonsterD1Ev>
 834eb8c:	83 c4 50             	add    $0x50,%esp
 834eb8f:	5b                   	pop    %ebx
 834eb90:	5e                   	pop    %esi
 834eb91:	5d                   	pop    %ebp
 834eb92:	c3                   	ret
 834eb93:	90                   	nop

```

```c
// CMap::insert_condition_monster @ 0x834ead4

/* CMap::insert_condition_monster(STAssignMonster) */

void __thiscall CMap::insert_condition_monster(CMap *this,undefined4 *param_2)

{
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  undefined4 local_20;
  
  _mapMonster::_mapMonster((_mapMonster *)&local_4c);
  local_4c = *param_2;
  local_48 = *(undefined1 *)(param_2 + 1);
  local_44 = param_2[2];
  local_40 = param_2[8];
  local_3c = param_2[7];
  local_38 = param_2[6];
  local_34 = param_2[9];
  local_28 = (int)param_2[5] / 10;
  local_20 = param_2[0x14];
                    /* try { // try from 0834eb5f to 0834eb63 has its CatchHandler @ 0834eb66 */
  std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14),(_mapMonster *)&local_4c
            );
  _mapMonster::~_mapMonster((_mapMonster *)&local_4c);
  return;
}

```

---

## insert_item

```asm
// === 0834eb94 CMap::insert_item  [0x0834eb94-0x834ebd9] ===
 834eb94:	55                   	push   %ebp
 834eb95:	89 e5                	mov    %esp,%ebp
 834eb97:	83 ec 28             	sub    $0x28,%esp
 834eb9a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834eb9d:	89 04 24             	mov    %eax,(%esp)
 834eba0:	e8 e9 1c e0 ff       	call   815088e <_ZN8_mapItemC1Ev>
 834eba5:	8b 45 0c             	mov    0xc(%ebp),%eax
 834eba8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834ebab:	8b 45 10             	mov    0x10(%ebp),%eax
 834ebae:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834ebb1:	8b 45 14             	mov    0x14(%ebp),%eax
 834ebb4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834ebb7:	8b 45 18             	mov    0x18(%ebp),%eax
 834ebba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834ebbd:	8b 45 08             	mov    0x8(%ebp),%eax
 834ebc0:	8d 50 1c             	lea    0x1c(%eax),%edx
 834ebc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834ebc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ebca:	89 14 24             	mov    %edx,(%esp)
 834ebcd:	e8 90 58 e0 ff       	call   8154462 <_ZNSt4listI8_mapItemSaIS0_EE9push_backERKS0_>
 834ebd2:	b8 01 00 00 00       	mov    $0x1,%eax
 834ebd7:	c9                   	leave
 834ebd8:	c3                   	ret
 834ebd9:	90                   	nop

```

```c
// CMap::insert_item @ 0x834eb94

/* CMap::insert_item(int, int, int, int) */

undefined4 __thiscall CMap::insert_item(CMap *this,int param_1,int param_2,int param_3,int param_4)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  _mapItem::_mapItem((_mapItem *)&local_1c);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  std::list<_mapItem,std::allocator<_mapItem>>::push_back
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c),(_mapItem *)&local_1c);
  return 1;
}

```

---

## insert_monster

```asm
// === 0834e9d4 CMap::insert_monster  [0x0834e9d4-0x834ead3] ===
 834e9d4:	55                   	push   %ebp
 834e9d5:	89 e5                	mov    %esp,%ebp
 834e9d7:	56                   	push   %esi
 834e9d8:	53                   	push   %ebx
 834e9d9:	83 ec 50             	sub    $0x50,%esp
 834e9dc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834e9df:	89 04 24             	mov    %eax,(%esp)
 834e9e2:	e8 15 fb fb ff       	call   830e4fc <_ZN11_mapMonsterC1Ev>
 834e9e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e9ea:	8b 00                	mov    (%eax),%eax
 834e9ec:	89 45 b8             	mov    %eax,-0x48(%ebp)
 834e9ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e9f2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 834e9f6:	88 45 bc             	mov    %al,-0x44(%ebp)
 834e9f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e9fc:	8b 40 08             	mov    0x8(%eax),%eax
 834e9ff:	89 45 c0             	mov    %eax,-0x40(%ebp)
 834ea02:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea05:	8b 40 20             	mov    0x20(%eax),%eax
 834ea08:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 834ea0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea0e:	8b 40 1c             	mov    0x1c(%eax),%eax
 834ea11:	89 45 c8             	mov    %eax,-0x38(%ebp)
 834ea14:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea17:	8b 40 18             	mov    0x18(%eax),%eax
 834ea1a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 834ea1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea20:	8b 40 24             	mov    0x24(%eax),%eax
 834ea23:	89 45 d0             	mov    %eax,-0x30(%ebp)
 834ea26:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea29:	8b 48 14             	mov    0x14(%eax),%ecx
 834ea2c:	ba 67 66 66 66       	mov    $0x66666667,%edx
 834ea31:	89 c8                	mov    %ecx,%eax
 834ea33:	f7 ea                	imul   %edx
 834ea35:	c1 fa 02             	sar    $0x2,%edx
 834ea38:	89 c8                	mov    %ecx,%eax
 834ea3a:	c1 f8 1f             	sar    $0x1f,%eax
 834ea3d:	89 d1                	mov    %edx,%ecx
 834ea3f:	29 c1                	sub    %eax,%ecx
 834ea41:	89 c8                	mov    %ecx,%eax
 834ea43:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834ea46:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea49:	8b 40 50             	mov    0x50(%eax),%eax
 834ea4c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834ea4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea52:	8b 40 4c             	mov    0x4c(%eax),%eax
 834ea55:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834ea58:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea5b:	0f b6 40 54          	movzbl 0x54(%eax),%eax
 834ea5f:	88 45 e8             	mov    %al,-0x18(%ebp)
 834ea62:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ea65:	83 c0 28             	add    $0x28,%eax
 834ea68:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ea6c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834ea6f:	83 c0 34             	add    $0x34,%eax
 834ea72:	89 04 24             	mov    %eax,(%esp)
 834ea75:	e8 58 e5 d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 834ea7a:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 834ea7e:	74 0a                	je     834ea8a <_ZN4CMap14insert_monsterE15STAssignMonsteri+0xb6>
 834ea80:	c6 45 d4 01          	movb   $0x1,-0x2c(%ebp)
 834ea84:	8b 45 10             	mov    0x10(%ebp),%eax
 834ea87:	89 45 d8             	mov    %eax,-0x28(%ebp)
 834ea8a:	8b 45 08             	mov    0x8(%ebp),%eax
 834ea8d:	8d 50 0c             	lea    0xc(%eax),%edx
 834ea90:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834ea93:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ea97:	89 14 24             	mov    %edx,(%esp)
 834ea9a:	e8 e3 ad de ff       	call   8139882 <_ZNSt4listI11_mapMonsterSaIS0_EE9push_backERKS0_>
 834ea9f:	bb 01 00 00 00       	mov    $0x1,%ebx
 834eaa4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eaa7:	89 04 24             	mov    %eax,(%esp)
 834eaaa:	e8 17 ae de ff       	call   81398c6 <_ZN11_mapMonsterD1Ev>
 834eaaf:	89 d8                	mov    %ebx,%eax
 834eab1:	83 c4 50             	add    $0x50,%esp
 834eab4:	5b                   	pop    %ebx
 834eab5:	5e                   	pop    %esi
 834eab6:	5d                   	pop    %ebp
 834eab7:	c3                   	ret
 834eab8:	89 d3                	mov    %edx,%ebx
 834eaba:	89 c6                	mov    %eax,%esi
 834eabc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834eabf:	89 04 24             	mov    %eax,(%esp)
 834eac2:	e8 ff ad de ff       	call   81398c6 <_ZN11_mapMonsterD1Ev>
 834eac7:	89 f0                	mov    %esi,%eax
 834eac9:	89 da                	mov    %ebx,%edx
 834eacb:	89 04 24             	mov    %eax,(%esp)
 834eace:	e8 7d 4c 79 00       	call   8ae3750 <_Unwind_Resume>
 834ead3:	90                   	nop

```

```c
// CMap::insert_monster @ 0x834e9d4

/* CMap::insert_monster(STAssignMonster, int) */

undefined4 __thiscall CMap::insert_monster(CMap *this,undefined4 *param_2,int param_3)

{
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  vector<int,std::allocator<int>> avStack_18 [12];
  
  _mapMonster::_mapMonster((_mapMonster *)&local_4c);
  local_4c = *param_2;
  local_48 = *(undefined1 *)(param_2 + 1);
  local_44 = param_2[2];
  local_40 = param_2[8];
  local_3c = param_2[7];
  local_38 = param_2[6];
  local_34 = param_2[9];
  local_28 = (int)param_2[5] / 10;
  local_20 = param_2[0x14];
  local_24 = param_2[0x13];
  local_1c = *(undefined1 *)(param_2 + 0x15);
                    /* try { // try from 0834ea75 to 0834ea9e has its CatchHandler @ 0834eab8 */
  std::vector<int,std::allocator<int>>::operator=(avStack_18,(vector *)(param_2 + 10));
  if (param_3 != -1) {
    local_30 = 1;
    local_2c = param_3;
  }
  std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc),(_mapMonster *)&local_4c)
  ;
  _mapMonster::~_mapMonster((_mapMonster *)&local_4c);
  return 1;
}

```

---

## set_map

```asm
// === 0834e18a CMap::set_map  [0x0834e18a-0x834e9a5] ===
 834e18a:	55                   	push   %ebp
 834e18b:	89 e5                	mov    %esp,%ebp
 834e18d:	56                   	push   %esi
 834e18e:	53                   	push   %ebx
 834e18f:	81 ec f0 02 00 00    	sub    $0x2f0,%esp
 834e195:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e198:	8b 10                	mov    (%eax),%edx
 834e19a:	8b 45 08             	mov    0x8(%ebp),%eax
 834e19d:	89 50 04             	mov    %edx,0x4(%eax)
 834e1a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e1a3:	8b 40 0c             	mov    0xc(%eax),%eax
 834e1a6:	89 c2                	mov    %eax,%edx
 834e1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 834e1ab:	89 50 08             	mov    %edx,0x8(%eax)
 834e1ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e1b1:	8b 50 4c             	mov    0x4c(%eax),%edx
 834e1b4:	8b 45 08             	mov    0x8(%ebp),%eax
 834e1b7:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 834e1bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e1c0:	8d 50 10             	lea    0x10(%eax),%edx
 834e1c3:	8b 45 08             	mov    0x8(%ebp),%eax
 834e1c6:	05 84 00 00 00       	add    $0x84,%eax
 834e1cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e1cf:	89 04 24             	mov    %eax,(%esp)
 834e1d2:	e8 b5 0e fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834e1d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e1da:	8d 50 04             	lea    0x4(%eax),%edx
 834e1dd:	8b 45 08             	mov    0x8(%ebp),%eax
 834e1e0:	83 c0 24             	add    $0x24,%eax
 834e1e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e1e7:	89 04 24             	mov    %eax,(%esp)
 834e1ea:	e8 d5 c7 03 00       	call   838a9c4 <_ZNSt4listIiSaIiEEaSERKS1_>
 834e1ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e1f2:	8d 90 88 02 00 00    	lea    0x288(%eax),%edx
 834e1f8:	8b 45 08             	mov    0x8(%ebp),%eax
 834e1fb:	05 b8 00 00 00       	add    $0xb8,%eax
 834e200:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e204:	89 04 24             	mov    %eax,(%esp)
 834e207:	e8 04 1e fc ff       	call   8310010 <_ZNSt6vectorI19STAssignBloodSystemSaIS0_EEaSERKS2_>
 834e20c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e20f:	8d 90 94 02 00 00    	lea    0x294(%eax),%edx
 834e215:	8b 45 08             	mov    0x8(%ebp),%eax
 834e218:	05 c4 00 00 00       	add    $0xc4,%eax
 834e21d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e221:	89 04 24             	mov    %eax,(%esp)
 834e224:	e8 5d 20 fc ff       	call   8310286 <_ZNSt6vectorI22STAssignBloodPhaseTimeSaIS0_EEaSERKS2_>
 834e229:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e22c:	8b 90 84 02 00 00    	mov    0x284(%eax),%edx
 834e232:	8b 45 08             	mov    0x8(%ebp),%eax
 834e235:	89 90 b4 00 00 00    	mov    %edx,0xb4(%eax)
 834e23b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e23e:	8d 90 00 01 00 00    	lea    0x100(%eax),%edx
 834e244:	8b 45 08             	mov    0x8(%ebp),%eax
 834e247:	83 c0 2c             	add    $0x2c,%eax
 834e24a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 834e251:	00 
 834e252:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e256:	89 04 24             	mov    %eax,(%esp)
 834e259:	e8 42 f6 d2 ff       	call   807d8a0 <memcpy@plt>
 834e25e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e261:	8d 90 20 01 00 00    	lea    0x120(%eax),%edx
 834e267:	8b 45 08             	mov    0x8(%ebp),%eax
 834e26a:	83 c0 4c             	add    $0x4c,%eax
 834e26d:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 834e274:	00 
 834e275:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e279:	89 04 24             	mov    %eax,(%esp)
 834e27c:	e8 1f f6 d2 ff       	call   807d8a0 <memcpy@plt>
 834e281:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e287:	89 04 24             	mov    %eax,(%esp)
 834e28a:	e8 51 e3 01 00       	call   836c5e0 <_ZN15STAssignMonsterC1Ev>
 834e28f:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 834e295:	89 04 24             	mov    %eax,(%esp)
 834e298:	e8 61 c8 03 00       	call   838aafe <_ZN9__gnu_cxx17__normal_iteratorIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEC1Ev>
 834e29d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e2a0:	8d 50 34             	lea    0x34(%eax),%edx
 834e2a3:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 834e2a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e2ad:	89 04 24             	mov    %eax,(%esp)
 834e2b0:	e8 57 c8 03 00       	call   838ab0c <_ZNSt6vectorI15STAssignMonsterSaIS0_EE5beginEv>
 834e2b5:	83 ec 04             	sub    $0x4,%esp
 834e2b8:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 834e2be:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
 834e2c4:	e9 25 01 00 00       	jmp    834e3ee <_ZN4CMap7set_mapE11STMapScript+0x264>
 834e2c9:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 834e2cf:	89 04 24             	mov    %eax,(%esp)
 834e2d2:	e8 ab c8 03 00       	call   838ab82 <_ZNK9__gnu_cxx17__normal_iteratorIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEdeEv>
 834e2d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e2db:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 834e2e1:	89 04 24             	mov    %eax,(%esp)
 834e2e4:	e8 ad 93 02 00       	call   8377696 <_ZN15STAssignMonsterC1ERKS_>
 834e2e9:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 834e2ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e2f3:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e2f9:	89 04 24             	mov    %eax,(%esp)
 834e2fc:	e8 f1 94 02 00       	call   83777f2 <_ZN15STAssignMonsteraSERKS_>
 834e301:	eb 1b                	jmp    834e31e <_ZN4CMap7set_mapE11STMapScript+0x194>
 834e303:	89 d3                	mov    %edx,%ebx
 834e305:	89 c6                	mov    %eax,%esi
 834e307:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 834e30d:	89 04 24             	mov    %eax,(%esp)
 834e310:	e8 0d 93 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e315:	89 f0                	mov    %esi,%eax
 834e317:	89 da                	mov    %ebx,%edx
 834e319:	e9 6a 06 00 00       	jmp    834e988 <_ZN4CMap7set_mapE11STMapScript+0x7fe>
 834e31e:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 834e324:	89 04 24             	mov    %eax,(%esp)
 834e327:	e8 f6 92 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e32c:	8b 45 08             	mov    0x8(%ebp),%eax
 834e32f:	8b 40 08             	mov    0x8(%eax),%eax
 834e332:	83 f8 02             	cmp    $0x2,%eax
 834e335:	75 1c                	jne    834e353 <_ZN4CMap7set_mapE11STMapScript+0x1c9>
 834e337:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 834e33d:	83 f8 03             	cmp    $0x3,%eax
 834e340:	75 11                	jne    834e353 <_ZN4CMap7set_mapE11STMapScript+0x1c9>
 834e342:	c7 85 70 fd ff ff 01 	movl   $0x1,-0x290(%ebp)
 834e349:	00 00 00 
 834e34c:	c6 85 a0 fd ff ff 01 	movb   $0x1,-0x260(%ebp)
 834e353:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 834e359:	83 f8 03             	cmp    $0x3,%eax
 834e35c:	75 0d                	jne    834e36b <_ZN4CMap7set_mapE11STMapScript+0x1e1>
 834e35e:	8b 45 08             	mov    0x8(%ebp),%eax
 834e361:	8b 00                	mov    (%eax),%eax
 834e363:	8d 50 01             	lea    0x1(%eax),%edx
 834e366:	8b 45 08             	mov    0x8(%ebp),%eax
 834e369:	89 10                	mov    %edx,(%eax)
 834e36b:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e371:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e375:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 834e37b:	89 04 24             	mov    %eax,(%esp)
 834e37e:	e8 13 93 02 00       	call   8377696 <_ZN15STAssignMonsterC1ERKS_>
 834e383:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 834e38a:	ff 
 834e38b:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 834e391:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e395:	8b 45 08             	mov    0x8(%ebp),%eax
 834e398:	89 04 24             	mov    %eax,(%esp)
 834e39b:	e8 34 06 00 00       	call   834e9d4 <_ZN4CMap14insert_monsterE15STAssignMonsteri>
 834e3a0:	eb 1b                	jmp    834e3bd <_ZN4CMap7set_mapE11STMapScript+0x233>
 834e3a2:	89 d3                	mov    %edx,%ebx
 834e3a4:	89 c6                	mov    %eax,%esi
 834e3a6:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 834e3ac:	89 04 24             	mov    %eax,(%esp)
 834e3af:	e8 6e 92 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e3b4:	89 f0                	mov    %esi,%eax
 834e3b6:	89 da                	mov    %ebx,%edx
 834e3b8:	e9 cb 05 00 00       	jmp    834e988 <_ZN4CMap7set_mapE11STMapScript+0x7fe>
 834e3bd:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 834e3c3:	89 04 24             	mov    %eax,(%esp)
 834e3c6:	e8 57 92 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e3cb:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 834e3d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834e3d8:	00 
 834e3d9:	8d 95 c0 fd ff ff    	lea    -0x240(%ebp),%edx
 834e3df:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e3e3:	89 04 24             	mov    %eax,(%esp)
 834e3e6:	e8 91 ca 03 00       	call   838ae7c <_ZN9__gnu_cxx17__normal_iteratorIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEppEi>
 834e3eb:	83 ec 04             	sub    $0x4,%esp
 834e3ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e3f1:	8d 50 34             	lea    0x34(%eax),%edx
 834e3f4:	8d 85 c4 fd ff ff    	lea    -0x23c(%ebp),%eax
 834e3fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e3fe:	89 04 24             	mov    %eax,(%esp)
 834e401:	e8 2a c7 03 00       	call   838ab30 <_ZNSt6vectorI15STAssignMonsterSaIS0_EE3endEv>
 834e406:	83 ec 04             	sub    $0x4,%esp
 834e409:	8d 85 c4 fd ff ff    	lea    -0x23c(%ebp),%eax
 834e40f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e413:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 834e419:	89 04 24             	mov    %eax,(%esp)
 834e41c:	e8 35 c7 03 00       	call   838ab56 <_ZN9__gnu_cxxneIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 834e421:	84 c0                	test   %al,%al
 834e423:	0f 85 a0 fe ff ff    	jne    834e2c9 <_ZN4CMap7set_mapE11STMapScript+0x13f>
 834e429:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e42c:	8d 50 40             	lea    0x40(%eax),%edx
 834e42f:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 834e435:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e439:	89 04 24             	mov    %eax,(%esp)
 834e43c:	e8 cb c6 03 00       	call   838ab0c <_ZNSt6vectorI15STAssignMonsterSaIS0_EE5beginEv>
 834e441:	83 ec 04             	sub    $0x4,%esp
 834e444:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 834e44a:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
 834e450:	e9 de 00 00 00       	jmp    834e533 <_ZN4CMap7set_mapE11STMapScript+0x3a9>
 834e455:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 834e45b:	89 04 24             	mov    %eax,(%esp)
 834e45e:	e8 1f c7 03 00       	call   838ab82 <_ZNK9__gnu_cxx17__normal_iteratorIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEdeEv>
 834e463:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e467:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 834e46d:	89 04 24             	mov    %eax,(%esp)
 834e470:	e8 21 92 02 00       	call   8377696 <_ZN15STAssignMonsterC1ERKS_>
 834e475:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 834e47b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e47f:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e485:	89 04 24             	mov    %eax,(%esp)
 834e488:	e8 65 93 02 00       	call   83777f2 <_ZN15STAssignMonsteraSERKS_>
 834e48d:	eb 1b                	jmp    834e4aa <_ZN4CMap7set_mapE11STMapScript+0x320>
 834e48f:	89 d3                	mov    %edx,%ebx
 834e491:	89 c6                	mov    %eax,%esi
 834e493:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 834e499:	89 04 24             	mov    %eax,(%esp)
 834e49c:	e8 81 91 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e4a1:	89 f0                	mov    %esi,%eax
 834e4a3:	89 da                	mov    %ebx,%edx
 834e4a5:	e9 de 04 00 00       	jmp    834e988 <_ZN4CMap7set_mapE11STMapScript+0x7fe>
 834e4aa:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 834e4b0:	89 04 24             	mov    %eax,(%esp)
 834e4b3:	e8 6a 91 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e4b8:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e4be:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e4c2:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 834e4c8:	89 04 24             	mov    %eax,(%esp)
 834e4cb:	e8 c6 91 02 00       	call   8377696 <_ZN15STAssignMonsterC1ERKS_>
 834e4d0:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 834e4d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e4da:	8b 45 08             	mov    0x8(%ebp),%eax
 834e4dd:	89 04 24             	mov    %eax,(%esp)
 834e4e0:	e8 ef 05 00 00       	call   834ead4 <_ZN4CMap24insert_condition_monsterE15STAssignMonster>
 834e4e5:	eb 1b                	jmp    834e502 <_ZN4CMap7set_mapE11STMapScript+0x378>
 834e4e7:	89 d3                	mov    %edx,%ebx
 834e4e9:	89 c6                	mov    %eax,%esi
 834e4eb:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 834e4f1:	89 04 24             	mov    %eax,(%esp)
 834e4f4:	e8 29 91 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e4f9:	89 f0                	mov    %esi,%eax
 834e4fb:	89 da                	mov    %ebx,%edx
 834e4fd:	e9 86 04 00 00       	jmp    834e988 <_ZN4CMap7set_mapE11STMapScript+0x7fe>
 834e502:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 834e508:	89 04 24             	mov    %eax,(%esp)
 834e50b:	e8 12 91 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e510:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834e516:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834e51d:	00 
 834e51e:	8d 95 c0 fd ff ff    	lea    -0x240(%ebp),%edx
 834e524:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e528:	89 04 24             	mov    %eax,(%esp)
 834e52b:	e8 4c c9 03 00       	call   838ae7c <_ZN9__gnu_cxx17__normal_iteratorIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEppEi>
 834e530:	83 ec 04             	sub    $0x4,%esp
 834e533:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e536:	8d 50 40             	lea    0x40(%eax),%edx
 834e539:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 834e53f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e543:	89 04 24             	mov    %eax,(%esp)
 834e546:	e8 e5 c5 03 00       	call   838ab30 <_ZNSt6vectorI15STAssignMonsterSaIS0_EE3endEv>
 834e54b:	83 ec 04             	sub    $0x4,%esp
 834e54e:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 834e554:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e558:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 834e55e:	89 04 24             	mov    %eax,(%esp)
 834e561:	e8 f0 c5 03 00       	call   838ab56 <_ZN9__gnu_cxxneIP15STAssignMonsterSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 834e566:	84 c0                	test   %al,%al
 834e568:	0f 85 e7 fe ff ff    	jne    834e455 <_ZN4CMap7set_mapE11STMapScript+0x2cb>
 834e56e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834e575:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e578:	83 c0 58             	add    $0x58,%eax
 834e57b:	89 04 24             	mov    %eax,(%esp)
 834e57e:	e8 2d c9 03 00       	call   838aeb0 <_ZNKSt4listI25STAssignSpecialPassiveObjSaIS0_EE5emptyEv>
 834e583:	83 f0 01             	xor    $0x1,%eax
 834e586:	84 c0                	test   %al,%al
 834e588:	0f 84 20 02 00 00    	je     834e7ae <_ZN4CMap7set_mapE11STMapScript+0x624>
 834e58e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e591:	8d 50 58             	lea    0x58(%eax),%edx
 834e594:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 834e59a:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e59e:	89 04 24             	mov    %eax,(%esp)
 834e5a1:	e8 1c c9 03 00       	call   838aec2 <_ZNSt4listI25STAssignSpecialPassiveObjSaIS0_EE5beginEv>
 834e5a6:	83 ec 04             	sub    $0x4,%esp
 834e5a9:	e9 c5 01 00 00       	jmp    834e773 <_ZN4CMap7set_mapE11STMapScript+0x5e9>
 834e5ae:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 834e5b4:	89 04 24             	mov    %eax,(%esp)
 834e5b7:	e8 9c c9 03 00       	call   838af58 <_ZNKSt14_List_iteratorI25STAssignSpecialPassiveObjEdeEv>
 834e5bc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834e5bf:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 834e5c6:	e9 68 01 00 00       	jmp    834e733 <_ZN4CMap7set_mapE11STMapScript+0x5a9>
 834e5cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834e5ce:	8d 50 10             	lea    0x10(%eax),%edx
 834e5d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834e5d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e5d8:	89 14 24             	mov    %edx,(%esp)
 834e5db:	e8 a8 c9 03 00       	call   838af88 <_ZNSt6vectorI18SPOBJ_ACTION_DATASSaIS0_EEixEj>
 834e5e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834e5e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e5e6:	8b 00                	mov    (%eax),%eax
 834e5e8:	85 c0                	test   %eax,%eax
 834e5ea:	0f 85 f6 00 00 00    	jne    834e6e6 <_ZN4CMap7set_mapE11STMapScript+0x55c>
 834e5f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e5f3:	8b 40 10             	mov    0x10(%eax),%eax
 834e5f6:	85 c0                	test   %eax,%eax
 834e5f8:	0f 84 27 01 00 00    	je     834e725 <_ZN4CMap7set_mapE11STMapScript+0x59b>
 834e5fe:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 834e605:	e8 7d 35 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834e60a:	89 c1                	mov    %eax,%ecx
 834e60c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e60f:	8b 40 0c             	mov    0xc(%eax),%eax
 834e612:	6b c0 64             	imul   $0x64,%eax,%eax
 834e615:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834e618:	8b 52 10             	mov    0x10(%edx),%edx
 834e61b:	89 95 34 fd ff ff    	mov    %edx,-0x2cc(%ebp)
 834e621:	89 c2                	mov    %eax,%edx
 834e623:	c1 fa 1f             	sar    $0x1f,%edx
 834e626:	f7 bd 34 fd ff ff    	idivl  -0x2cc(%ebp)
 834e62c:	39 c1                	cmp    %eax,%ecx
 834e62e:	0f 9f c0             	setg   %al
 834e631:	84 c0                	test   %al,%al
 834e633:	0f 85 ef 00 00 00    	jne    834e728 <_ZN4CMap7set_mapE11STMapScript+0x59e>
 834e639:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e63c:	8b 40 08             	mov    0x8(%eax),%eax
 834e63f:	3d c8 00 00 00       	cmp    $0xc8,%eax
 834e644:	0f 8f e1 00 00 00    	jg     834e72b <_ZN4CMap7set_mapE11STMapScript+0x5a1>
 834e64a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e64d:	8b 40 08             	mov    0x8(%eax),%eax
 834e650:	85 c0                	test   %eax,%eax
 834e652:	0f 8e d6 00 00 00    	jle    834e72e <_ZN4CMap7set_mapE11STMapScript+0x5a4>
 834e658:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e65e:	89 04 24             	mov    %eax,(%esp)
 834e661:	e8 94 de 01 00       	call   836c4fa <_ZN15STAssignMonster5ClearEv>
 834e666:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e669:	8b 40 04             	mov    0x4(%eax),%eax
 834e66c:	89 85 4c fd ff ff    	mov    %eax,-0x2b4(%ebp)
 834e672:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e675:	8b 40 08             	mov    0x8(%eax),%eax
 834e678:	89 85 54 fd ff ff    	mov    %eax,-0x2ac(%ebp)
 834e67e:	c6 85 50 fd ff ff 00 	movb   $0x0,-0x2b0(%ebp)
 834e685:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e68b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e68f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834e695:	89 04 24             	mov    %eax,(%esp)
 834e698:	e8 f9 8f 02 00       	call   8377696 <_ZN15STAssignMonsterC1ERKS_>
 834e69d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834e6a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 834e6a4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834e6aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e6ae:	8b 45 08             	mov    0x8(%ebp),%eax
 834e6b1:	89 04 24             	mov    %eax,(%esp)
 834e6b4:	e8 1b 03 00 00       	call   834e9d4 <_ZN4CMap14insert_monsterE15STAssignMonsteri>
 834e6b9:	eb 1b                	jmp    834e6d6 <_ZN4CMap7set_mapE11STMapScript+0x54c>
 834e6bb:	89 d3                	mov    %edx,%ebx
 834e6bd:	89 c6                	mov    %eax,%esi
 834e6bf:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834e6c5:	89 04 24             	mov    %eax,(%esp)
 834e6c8:	e8 55 8f 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e6cd:	89 f0                	mov    %esi,%eax
 834e6cf:	89 da                	mov    %ebx,%edx
 834e6d1:	e9 b2 02 00 00       	jmp    834e988 <_ZN4CMap7set_mapE11STMapScript+0x7fe>
 834e6d6:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834e6dc:	89 04 24             	mov    %eax,(%esp)
 834e6df:	e8 3e 8f 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e6e4:	eb 49                	jmp    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e6e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e6e9:	8b 00                	mov    (%eax),%eax
 834e6eb:	83 f8 02             	cmp    $0x2,%eax
 834e6ee:	75 3f                	jne    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e6f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834e6f3:	8b 58 1c             	mov    0x1c(%eax),%ebx
 834e6f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e6f9:	8b 48 0c             	mov    0xc(%eax),%ecx
 834e6fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e6ff:	8b 50 08             	mov    0x8(%eax),%edx
 834e702:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834e705:	8b 40 04             	mov    0x4(%eax),%eax
 834e708:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 834e70c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 834e710:	89 54 24 08          	mov    %edx,0x8(%esp)
 834e714:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e718:	8b 45 08             	mov    0x8(%ebp),%eax
 834e71b:	89 04 24             	mov    %eax,(%esp)
 834e71e:	e8 71 04 00 00       	call   834eb94 <_ZN4CMap11insert_itemEiiii>
 834e723:	eb 0a                	jmp    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e725:	90                   	nop
 834e726:	eb 07                	jmp    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e728:	90                   	nop
 834e729:	eb 04                	jmp    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e72b:	90                   	nop
 834e72c:	eb 01                	jmp    834e72f <_ZN4CMap7set_mapE11STMapScript+0x5a5>
 834e72e:	90                   	nop
 834e72f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 834e733:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834e736:	83 c0 10             	add    $0x10,%eax
 834e739:	89 04 24             	mov    %eax,(%esp)
 834e73c:	e8 25 c8 03 00       	call   838af66 <_ZNKSt6vectorI18SPOBJ_ACTION_DATASSaIS0_EE4sizeEv>
 834e741:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 834e744:	0f 97 c0             	seta   %al
 834e747:	84 c0                	test   %al,%al
 834e749:	0f 85 7c fe ff ff    	jne    834e5cb <_ZN4CMap7set_mapE11STMapScript+0x441>
 834e74f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 834e753:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834e756:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834e75d:	00 
 834e75e:	8d 95 bc fd ff ff    	lea    -0x244(%ebp),%edx
 834e764:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e768:	89 04 24             	mov    %eax,(%esp)
 834e76b:	e8 b0 c7 03 00       	call   838af20 <_ZNSt14_List_iteratorI25STAssignSpecialPassiveObjEppEi>
 834e770:	83 ec 04             	sub    $0x4,%esp
 834e773:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e776:	8d 50 58             	lea    0x58(%eax),%edx
 834e779:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834e77f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e783:	89 04 24             	mov    %eax,(%esp)
 834e786:	e8 5d c7 03 00       	call   838aee8 <_ZNSt4listI25STAssignSpecialPassiveObjSaIS0_EE3endEv>
 834e78b:	83 ec 04             	sub    $0x4,%esp
 834e78e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834e794:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e798:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 834e79e:	89 04 24             	mov    %eax,(%esp)
 834e7a1:	e8 66 c7 03 00       	call   838af0c <_ZNKSt14_List_iteratorI25STAssignSpecialPassiveObjEneERKS1_>
 834e7a6:	84 c0                	test   %al,%al
 834e7a8:	0f 85 00 fe ff ff    	jne    834e5ae <_ZN4CMap7set_mapE11STMapScript+0x424>
 834e7ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e7b1:	8d 90 50 02 00 00    	lea    0x250(%eax),%edx
 834e7b7:	8b 45 08             	mov    0x8(%ebp),%eax
 834e7ba:	05 90 00 00 00       	add    $0x90,%eax
 834e7bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e7c3:	89 04 24             	mov    %eax,(%esp)
 834e7c6:	e8 d7 c7 03 00       	call   838afa2 <_ZNSt6vectorI14STRivalMapDataSaIS0_EEaSERKS2_>
 834e7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e7ce:	8d 90 78 02 00 00    	lea    0x278(%eax),%edx
 834e7d4:	8b 45 08             	mov    0x8(%ebp),%eax
 834e7d7:	05 9c 00 00 00       	add    $0x9c,%eax
 834e7dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e7e0:	89 04 24             	mov    %eax,(%esp)
 834e7e3:	e8 ba c7 03 00       	call   838afa2 <_ZNSt6vectorI14STRivalMapDataSaIS0_EEaSERKS2_>
 834e7e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e7eb:	8b 90 68 02 00 00    	mov    0x268(%eax),%edx
 834e7f1:	8b 45 08             	mov    0x8(%ebp),%eax
 834e7f4:	89 50 78             	mov    %edx,0x78(%eax)
 834e7f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e7fa:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 834e800:	8b 45 08             	mov    0x8(%ebp),%eax
 834e803:	83 c0 6c             	add    $0x6c,%eax
 834e806:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e80a:	89 04 24             	mov    %eax,(%esp)
 834e80d:	e8 02 ca 03 00       	call   838b214 <_ZNSt6vectorI27STAICharacterMapArrangeDataSaIS0_EEaSERKS2_>
 834e812:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e815:	83 c0 60             	add    $0x60,%eax
 834e818:	89 04 24             	mov    %eax,(%esp)
 834e81b:	e8 7c cc 03 00       	call   838b49c <_ZNKSt6vectorI9AssignNpcSaIS0_EE4sizeEv>
 834e820:	8b 55 08             	mov    0x8(%ebp),%edx
 834e823:	89 42 7c             	mov    %eax,0x7c(%edx)
 834e826:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e829:	83 c0 2c             	add    $0x2c,%eax
 834e82c:	89 04 24             	mov    %eax,(%esp)
 834e82f:	e8 8a cc 03 00       	call   838b4be <_ZNKSt4listI21STAssignPassiveObjectSaIS0_EE5emptyEv>
 834e834:	83 f0 01             	xor    $0x1,%eax
 834e837:	84 c0                	test   %al,%al
 834e839:	0f 84 85 00 00 00    	je     834e8c4 <_ZN4CMap7set_mapE11STMapScript+0x73a>
 834e83f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e842:	8d 50 2c             	lea    0x2c(%eax),%edx
 834e845:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 834e84b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e84f:	89 04 24             	mov    %eax,(%esp)
 834e852:	e8 79 cc 03 00       	call   838b4d0 <_ZNSt4listI21STAssignPassiveObjectSaIS0_EE5beginEv>
 834e857:	83 ec 04             	sub    $0x4,%esp
 834e85a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e85d:	8d 50 2c             	lea    0x2c(%eax),%edx
 834e860:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 834e866:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e86a:	89 04 24             	mov    %eax,(%esp)
 834e86d:	e8 84 cc 03 00       	call   838b4f6 <_ZNSt4listI21STAssignPassiveObjectSaIS0_EE3endEv>
 834e872:	83 ec 04             	sub    $0x4,%esp
 834e875:	eb 31                	jmp    834e8a8 <_ZN4CMap7set_mapE11STMapScript+0x71e>
 834e877:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 834e87d:	89 04 24             	mov    %eax,(%esp)
 834e880:	e8 bd cc 03 00       	call   838b542 <_ZNKSt14_List_iteratorI21STAssignPassiveObjectEdeEv>
 834e885:	8b 55 08             	mov    0x8(%ebp),%edx
 834e888:	81 c2 a8 00 00 00    	add    $0xa8,%edx
 834e88e:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e892:	89 14 24             	mov    %edx,(%esp)
 834e895:	e8 8c 28 dc ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 834e89a:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 834e8a0:	89 04 24             	mov    %eax,(%esp)
 834e8a3:	e8 86 cc 03 00       	call   838b52e <_ZNSt14_List_iteratorI21STAssignPassiveObjectEppEv>
 834e8a8:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 834e8ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 834e8b2:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 834e8b8:	89 04 24             	mov    %eax,(%esp)
 834e8bb:	e8 5a cc 03 00       	call   838b51a <_ZNKSt14_List_iteratorI21STAssignPassiveObjectEneERKS1_>
 834e8c0:	84 c0                	test   %al,%al
 834e8c2:	75 b3                	jne    834e877 <_ZN4CMap7set_mapE11STMapScript+0x6ed>
 834e8c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e8c7:	8b 90 24 03 00 00    	mov    0x324(%eax),%edx
 834e8cd:	8b 45 08             	mov    0x8(%ebp),%eax
 834e8d0:	89 90 ec 00 00 00    	mov    %edx,0xec(%eax)
 834e8d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e8d9:	8b 90 28 03 00 00    	mov    0x328(%eax),%edx
 834e8df:	8b 45 08             	mov    0x8(%ebp),%eax
 834e8e2:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 834e8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e8eb:	8d 90 30 03 00 00    	lea    0x330(%eax),%edx
 834e8f1:	8b 45 08             	mov    0x8(%ebp),%eax
 834e8f4:	05 f4 00 00 00       	add    $0xf4,%eax
 834e8f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e8fd:	89 04 24             	mov    %eax,(%esp)
 834e900:	e8 3b 90 02 00       	call   8377940 <_ZN12advancealtar8TimeLineaSERKS0_>
 834e905:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e908:	8b 90 78 01 00 00    	mov    0x178(%eax),%edx
 834e90e:	8b 45 08             	mov    0x8(%ebp),%eax
 834e911:	89 90 10 01 00 00    	mov    %edx,0x110(%eax)
 834e917:	e8 7f d8 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834e91c:	8d 90 e8 62 00 00    	lea    0x62e8(%eax),%edx
 834e922:	8b 45 08             	mov    0x8(%ebp),%eax
 834e925:	05 f4 00 00 00       	add    $0xf4,%eax
 834e92a:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e92e:	89 04 24             	mov    %eax,(%esp)
 834e931:	e8 fc b6 54 00       	call   889a032 <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE>
 834e936:	88 45 eb             	mov    %al,-0x15(%ebp)
 834e939:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e93c:	8d 90 b8 02 00 00    	lea    0x2b8(%eax),%edx
 834e942:	8b 45 08             	mov    0x8(%ebp),%eax
 834e945:	05 14 01 00 00       	add    $0x114,%eax
 834e94a:	89 54 24 04          	mov    %edx,0x4(%esp)
 834e94e:	89 04 24             	mov    %eax,(%esp)
 834e951:	e8 e2 d0 03 00       	call   838ba38 <_ZNSt3mapIcSt6vectorI17TournamentMonsterSaIS1_EESt4lessIcESaISt4pairIKcS3_EEEaSERKSA_>
 834e956:	8b 45 0c             	mov    0xc(%ebp),%eax
 834e959:	0f b6 90 6e 03 00 00 	movzbl 0x36e(%eax),%edx
 834e960:	8b 45 08             	mov    0x8(%ebp),%eax
 834e963:	88 90 2c 01 00 00    	mov    %dl,0x12c(%eax)
 834e969:	bb 01 00 00 00       	mov    $0x1,%ebx
 834e96e:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e974:	89 04 24             	mov    %eax,(%esp)
 834e977:	e8 a6 8c 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e97c:	89 d8                	mov    %ebx,%eax
 834e97e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 834e981:	83 c4 00             	add    $0x0,%esp
 834e984:	5b                   	pop    %ebx
 834e985:	5e                   	pop    %esi
 834e986:	5d                   	pop    %ebp
 834e987:	c3                   	ret
 834e988:	89 d3                	mov    %edx,%ebx
 834e98a:	89 c6                	mov    %eax,%esi
 834e98c:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 834e992:	89 04 24             	mov    %eax,(%esp)
 834e995:	e8 88 8c 02 00       	call   8377622 <_ZN15STAssignMonsterD1Ev>
 834e99a:	89 f0                	mov    %esi,%eax
 834e99c:	89 da                	mov    %ebx,%edx
 834e99e:	89 04 24             	mov    %eax,(%esp)
 834e9a1:	e8 aa 4d 79 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CMap::set_map @ 0x834e18a

/* CMap::set_map(STMapScript) */

undefined4 __thiscall CMap::set_map(CMap *this,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  STAssignMonster *pSVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_2b8;
  undefined1 local_2b4;
  int local_2b0;
  int local_294;
  undefined1 local_264;
  _List_iterator local_250 [4];
  _List_iterator<STAssignPassiveObject> local_24c [4];
  _List_iterator<STAssignSpecialPassiveObj> local_248 [4];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_244 [4];
  __normal_iterator local_240 [4];
  STAssignMonster local_23c [104];
  STAssignMonster local_1d4 [104];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_16c [4];
  __normal_iterator local_168 [4];
  STAssignMonster local_164 [104];
  STAssignMonster local_fc [104];
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
  local_94 [4];
  _List_iterator local_90 [4];
  STAssignMonster local_8c [104];
  _List_iterator<STAssignSpecialPassiveObj> local_24 [4];
  int local_20;
  undefined1 local_19;
  int local_18;
  uint local_14;
  int *local_10;
  
  *(undefined4 *)(this + 4) = *param_2;
  *(undefined4 *)(this + 8) = param_2[3];
  *(undefined4 *)(this + 0x80) = param_2[0x13];
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84),
             (vector *)(param_2 + 4));
  std::list<int,std::allocator<int>>::operator=
            ((list<int,std::allocator<int>> *)(this + 0x24),(list *)(param_2 + 1));
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator=
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8),
             (vector *)(param_2 + 0xa2));
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator=
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4),
             (vector *)(param_2 + 0xa5));
  *(undefined4 *)(this + 0xb4) = param_2[0xa1];
  memcpy(this + 0x2c,param_2 + 0x40,0x20);
  memcpy(this + 0x4c,param_2 + 0x48,0x20);
  STAssignMonster::STAssignMonster((STAssignMonster *)&local_2b8);
  __gnu_cxx::
  __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>::
  __normal_iterator(local_244);
                    /* try { // try from 0834e2b0 to 0834e2e8 has its CatchHandler @ 0834e988 */
  std::vector<STAssignMonster,std::allocator<STAssignMonster>>::begin();
  while( true ) {
    std::vector<STAssignMonster,std::allocator<STAssignMonster>>::end();
    bVar1 = __gnu_cxx::operator!=(local_244,local_240);
    if (!bVar1) break;
    pSVar3 = (STAssignMonster *)
             __gnu_cxx::
             __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
             ::operator*(local_244);
    STAssignMonster::STAssignMonster(local_23c,pSVar3);
                    /* try { // try from 0834e2fc to 0834e300 has its CatchHandler @ 0834e303 */
    STAssignMonster::operator=((STAssignMonster *)&local_2b8,local_23c);
                    /* try { // try from 0834e327 to 0834e382 has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_23c);
    if ((*(int *)(this + 8) == 2) && (local_294 == 3)) {
      local_294 = 1;
      local_264 = 1;
    }
    if (local_294 == 3) {
      *(int *)this = *(int *)this + 1;
    }
    STAssignMonster::STAssignMonster(local_1d4,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e39b to 0834e39f has its CatchHandler @ 0834e3a2 */
    insert_monster(this,local_1d4,0xffffffff);
                    /* try { // try from 0834e3c6 to 0834e474 has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_1d4);
    __gnu_cxx::
    __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
    ::operator++(local_16c,(int)local_244);
  }
  std::vector<STAssignMonster,std::allocator<STAssignMonster>>::begin();
  while( true ) {
    std::vector<STAssignMonster,std::allocator<STAssignMonster>>::end();
    bVar1 = __gnu_cxx::operator!=(local_244,local_168);
    if (!bVar1) break;
    pSVar3 = (STAssignMonster *)
             __gnu_cxx::
             __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
             ::operator*(local_244);
    STAssignMonster::STAssignMonster(local_164,pSVar3);
                    /* try { // try from 0834e488 to 0834e48c has its CatchHandler @ 0834e48f */
    STAssignMonster::operator=((STAssignMonster *)&local_2b8,local_164);
                    /* try { // try from 0834e4b3 to 0834e4cf has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_164);
    STAssignMonster::STAssignMonster(local_fc,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e4e0 to 0834e4e4 has its CatchHandler @ 0834e4e7 */
    insert_condition_monster(this,local_fc);
                    /* try { // try from 0834e50b to 0834e69c has its CatchHandler @ 0834e988 */
    STAssignMonster::~STAssignMonster(local_fc);
    __gnu_cxx::
    __normal_iterator<STAssignMonster*,std::vector<STAssignMonster,std::allocator<STAssignMonster>>>
    ::operator++(local_94,(int)local_244);
  }
  local_20 = 0;
  cVar2 = std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::empty
                    ((list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>> *)
                     (param_2 + 0x16));
  if (cVar2 != '\x01') {
    std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::begin();
    while( true ) {
      std::list<STAssignSpecialPassiveObj,std::allocator<STAssignSpecialPassiveObj>>::end();
      cVar2 = std::_List_iterator<STAssignSpecialPassiveObj>::operator!=(local_248,local_90);
      if (cVar2 == '\0') break;
      local_18 = std::_List_iterator<STAssignSpecialPassiveObj>::operator*(local_248);
      local_14 = 0;
      while (uVar4 = std::vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>::size
                               ((vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>> *)
                                (local_18 + 0x10)), local_14 < uVar4) {
        local_10 = (int *)std::vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>::
                          operator[]((vector<SPOBJ_ACTION_DATAS,std::allocator<SPOBJ_ACTION_DATAS>>
                                      *)(local_18 + 0x10),local_14);
        if (*local_10 == 0) {
          if ((((local_10[4] != 0) &&
               (iVar7 = get_rand_int(100), iVar7 <= (local_10[3] * 100) / local_10[4])) &&
              (local_10[2] < 0xc9)) && (0 < local_10[2])) {
            STAssignMonster::Clear((STAssignMonster *)&local_2b8);
            local_2b8 = local_10[1];
            local_2b0 = local_10[2];
            local_2b4 = 0;
            STAssignMonster::STAssignMonster(local_8c,(STAssignMonster *)&local_2b8);
                    /* try { // try from 0834e6b4 to 0834e6b8 has its CatchHandler @ 0834e6bb */
            insert_monster(this,local_8c,local_20);
                    /* try { // try from 0834e6df to 0834e955 has its CatchHandler @ 0834e988 */
            STAssignMonster::~STAssignMonster(local_8c);
          }
        }
        else if (*local_10 == 2) {
          insert_item(this,local_10[1],local_10[2],local_10[3],*(int *)(local_18 + 0x1c));
        }
        local_14 = local_14 + 1;
      }
      local_20 = local_20 + 1;
      std::_List_iterator<STAssignSpecialPassiveObj>::operator++(local_24,(int)local_248);
    }
  }
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator=
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90),
             (vector *)(param_2 + 0x94));
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator=
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c),
             (vector *)(param_2 + 0x9e));
  *(undefined4 *)(this + 0x78) = param_2[0x9a];
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::operator=
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c),(vector *)(param_2 + 0x97));
  uVar5 = std::vector<AssignNpc,std::allocator<AssignNpc>>::size
                    ((vector<AssignNpc,std::allocator<AssignNpc>> *)(param_2 + 0x18));
  *(undefined4 *)(this + 0x7c) = uVar5;
  cVar2 = std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::empty
                    ((list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>> *)
                     (param_2 + 0xb));
  if (cVar2 != '\x01') {
    std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::begin();
    std::list<STAssignPassiveObject,std::allocator<STAssignPassiveObject>>::end();
    while (cVar2 = std::_List_iterator<STAssignPassiveObject>::operator!=(local_24c,local_250),
          cVar2 != '\0') {
      piVar6 = (int *)std::_List_iterator<STAssignPassiveObject>::operator*(local_24c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0xa8),piVar6);
      std::_List_iterator<STAssignPassiveObject>::operator++(local_24c);
    }
  }
  *(undefined4 *)(this + 0xec) = param_2[0xc9];
  *(undefined4 *)(this + 0xf0) = param_2[0xca];
  advancealtar::TimeLine::operator=((TimeLine *)(this + 0xf4),(TimeLine *)(param_2 + 0xcc));
  *(undefined4 *)(this + 0x110) = param_2[0x5e];
  iVar7 = G_CDataManager();
  local_19 = advancealtar::StageTimeLineParameter::checkAndSetActionDefine
                       ((TimeLine *)(this + 0xf4),(map *)(iVar7 + 0x62e8));
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::operator=((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
               *)(this + 0x114),(map *)(param_2 + 0xae));
  this[300] = *(CMap *)((int)param_2 + 0x36e);
  STAssignMonster::~STAssignMonster((STAssignMonster *)&local_2b8);
  return 1;
}

```

---

## ~CMap

```asm
// === 0834def6 CMap::~CMap  [0x0834def6-0x834e13d] ===
 834def6:	55                   	push   %ebp
 834def7:	89 e5                	mov    %esp,%ebp
 834def9:	56                   	push   %esi
 834defa:	53                   	push   %ebx
 834defb:	83 ec 10             	sub    $0x10,%esp
 834defe:	8b 45 08             	mov    0x8(%ebp),%eax
 834df01:	89 04 24             	mov    %eax,(%esp)
 834df04:	e8 35 02 00 00       	call   834e13e <_ZN4CMap7destroyEv>
 834df09:	eb 1a                	jmp    834df25 <_ZN4CMapD1Ev+0x2f>
 834df0b:	89 d3                	mov    %edx,%ebx
 834df0d:	89 c6                	mov    %eax,%esi
 834df0f:	8b 45 08             	mov    0x8(%ebp),%eax
 834df12:	05 14 01 00 00       	add    $0x114,%eax
 834df17:	89 04 24             	mov    %eax,(%esp)
 834df1a:	e8 4d ed 01 00       	call   836cc6c <_ZNSt3mapIcSt6vectorI17TournamentMonsterSaIS1_EESt4lessIcESaISt4pairIKcS3_EEED1Ev>
 834df1f:	89 f0                	mov    %esi,%eax
 834df21:	89 da                	mov    %ebx,%edx
 834df23:	eb 12                	jmp    834df37 <_ZN4CMapD1Ev+0x41>
 834df25:	8b 45 08             	mov    0x8(%ebp),%eax
 834df28:	05 14 01 00 00       	add    $0x114,%eax
 834df2d:	89 04 24             	mov    %eax,(%esp)
 834df30:	e8 37 ed 01 00       	call   836cc6c <_ZNSt3mapIcSt6vectorI17TournamentMonsterSaIS1_EESt4lessIcESaISt4pairIKcS3_EEED1Ev>
 834df35:	eb 1a                	jmp    834df51 <_ZN4CMapD1Ev+0x5b>
 834df37:	89 d3                	mov    %edx,%ebx
 834df39:	89 c6                	mov    %eax,%esi
 834df3b:	8b 45 08             	mov    0x8(%ebp),%eax
 834df3e:	05 f4 00 00 00       	add    $0xf4,%eax
 834df43:	89 04 24             	mov    %eax,(%esp)
 834df46:	e8 69 be 54 00       	call   8899db4 <_ZN12advancealtar8TimeLineD1Ev>
 834df4b:	89 f0                	mov    %esi,%eax
 834df4d:	89 da                	mov    %ebx,%edx
 834df4f:	eb 12                	jmp    834df63 <_ZN4CMapD1Ev+0x6d>
 834df51:	8b 45 08             	mov    0x8(%ebp),%eax
 834df54:	05 f4 00 00 00       	add    $0xf4,%eax
 834df59:	89 04 24             	mov    %eax,(%esp)
 834df5c:	e8 53 be 54 00       	call   8899db4 <_ZN12advancealtar8TimeLineD1Ev>
 834df61:	eb 1a                	jmp    834df7d <_ZN4CMapD1Ev+0x87>
 834df63:	89 d3                	mov    %edx,%ebx
 834df65:	89 c6                	mov    %eax,%esi
 834df67:	8b 45 08             	mov    0x8(%ebp),%eax
 834df6a:	05 c4 00 00 00       	add    $0xc4,%eax
 834df6f:	89 04 24             	mov    %eax,(%esp)
 834df72:	e8 81 cb f5 ff       	call   82aaaf8 <_ZNSt6vectorI22STAssignBloodPhaseTimeSaIS0_EED1Ev>
 834df77:	89 f0                	mov    %esi,%eax
 834df79:	89 da                	mov    %ebx,%edx
 834df7b:	eb 12                	jmp    834df8f <_ZN4CMapD1Ev+0x99>
 834df7d:	8b 45 08             	mov    0x8(%ebp),%eax
 834df80:	05 c4 00 00 00       	add    $0xc4,%eax
 834df85:	89 04 24             	mov    %eax,(%esp)
 834df88:	e8 6b cb f5 ff       	call   82aaaf8 <_ZNSt6vectorI22STAssignBloodPhaseTimeSaIS0_EED1Ev>
 834df8d:	eb 1a                	jmp    834dfa9 <_ZN4CMapD1Ev+0xb3>
 834df8f:	89 d3                	mov    %edx,%ebx
 834df91:	89 c6                	mov    %eax,%esi
 834df93:	8b 45 08             	mov    0x8(%ebp),%eax
 834df96:	05 b8 00 00 00       	add    $0xb8,%eax
 834df9b:	89 04 24             	mov    %eax,(%esp)
 834df9e:	e8 e3 ca f5 ff       	call   82aaa86 <_ZNSt6vectorI19STAssignBloodSystemSaIS0_EED1Ev>
 834dfa3:	89 f0                	mov    %esi,%eax
 834dfa5:	89 da                	mov    %ebx,%edx
 834dfa7:	eb 12                	jmp    834dfbb <_ZN4CMapD1Ev+0xc5>
 834dfa9:	8b 45 08             	mov    0x8(%ebp),%eax
 834dfac:	05 b8 00 00 00       	add    $0xb8,%eax
 834dfb1:	89 04 24             	mov    %eax,(%esp)
 834dfb4:	e8 cd ca f5 ff       	call   82aaa86 <_ZNSt6vectorI19STAssignBloodSystemSaIS0_EED1Ev>
 834dfb9:	eb 1a                	jmp    834dfd5 <_ZN4CMapD1Ev+0xdf>
 834dfbb:	89 d3                	mov    %edx,%ebx
 834dfbd:	89 c6                	mov    %eax,%esi
 834dfbf:	8b 45 08             	mov    0x8(%ebp),%eax
 834dfc2:	05 a8 00 00 00       	add    $0xa8,%eax
 834dfc7:	89 04 24             	mov    %eax,(%esp)
 834dfca:	e8 0b 5e d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 834dfcf:	89 f0                	mov    %esi,%eax
 834dfd1:	89 da                	mov    %ebx,%edx
 834dfd3:	eb 12                	jmp    834dfe7 <_ZN4CMapD1Ev+0xf1>
 834dfd5:	8b 45 08             	mov    0x8(%ebp),%eax
 834dfd8:	05 a8 00 00 00       	add    $0xa8,%eax
 834dfdd:	89 04 24             	mov    %eax,(%esp)
 834dfe0:	e8 f5 5d d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 834dfe5:	eb 1a                	jmp    834e001 <_ZN4CMapD1Ev+0x10b>
 834dfe7:	89 d3                	mov    %edx,%ebx
 834dfe9:	89 c6                	mov    %eax,%esi
 834dfeb:	8b 45 08             	mov    0x8(%ebp),%eax
 834dfee:	05 9c 00 00 00       	add    $0x9c,%eax
 834dff3:	89 04 24             	mov    %eax,(%esp)
 834dff6:	e8 f5 50 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834dffb:	89 f0                	mov    %esi,%eax
 834dffd:	89 da                	mov    %ebx,%edx
 834dfff:	eb 12                	jmp    834e013 <_ZN4CMapD1Ev+0x11d>
 834e001:	8b 45 08             	mov    0x8(%ebp),%eax
 834e004:	05 9c 00 00 00       	add    $0x9c,%eax
 834e009:	89 04 24             	mov    %eax,(%esp)
 834e00c:	e8 df 50 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834e011:	eb 1a                	jmp    834e02d <_ZN4CMapD1Ev+0x137>
 834e013:	89 d3                	mov    %edx,%ebx
 834e015:	89 c6                	mov    %eax,%esi
 834e017:	8b 45 08             	mov    0x8(%ebp),%eax
 834e01a:	05 90 00 00 00       	add    $0x90,%eax
 834e01f:	89 04 24             	mov    %eax,(%esp)
 834e022:	e8 c9 50 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834e027:	89 f0                	mov    %esi,%eax
 834e029:	89 da                	mov    %ebx,%edx
 834e02b:	eb 12                	jmp    834e03f <_ZN4CMapD1Ev+0x149>
 834e02d:	8b 45 08             	mov    0x8(%ebp),%eax
 834e030:	05 90 00 00 00       	add    $0x90,%eax
 834e035:	89 04 24             	mov    %eax,(%esp)
 834e038:	e8 b3 50 03 00       	call   83830f0 <_ZNSt6vectorI14STRivalMapDataSaIS0_EED1Ev>
 834e03d:	eb 1a                	jmp    834e059 <_ZN4CMapD1Ev+0x163>
 834e03f:	89 d3                	mov    %edx,%ebx
 834e041:	89 c6                	mov    %eax,%esi
 834e043:	8b 45 08             	mov    0x8(%ebp),%eax
 834e046:	05 84 00 00 00       	add    $0x84,%eax
 834e04b:	89 04 24             	mov    %eax,(%esp)
 834e04e:	e8 97 69 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 834e053:	89 f0                	mov    %esi,%eax
 834e055:	89 da                	mov    %ebx,%edx
 834e057:	eb 12                	jmp    834e06b <_ZN4CMapD1Ev+0x175>
 834e059:	8b 45 08             	mov    0x8(%ebp),%eax
 834e05c:	05 84 00 00 00       	add    $0x84,%eax
 834e061:	89 04 24             	mov    %eax,(%esp)
 834e064:	e8 81 69 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 834e069:	eb 18                	jmp    834e083 <_ZN4CMapD1Ev+0x18d>
 834e06b:	89 d3                	mov    %edx,%ebx
 834e06d:	89 c6                	mov    %eax,%esi
 834e06f:	8b 45 08             	mov    0x8(%ebp),%eax
 834e072:	83 c0 6c             	add    $0x6c,%eax
 834e075:	89 04 24             	mov    %eax,(%esp)
 834e078:	e8 e5 50 03 00       	call   8383162 <_ZNSt6vectorI27STAICharacterMapArrangeDataSaIS0_EED1Ev>
 834e07d:	89 f0                	mov    %esi,%eax
 834e07f:	89 da                	mov    %ebx,%edx
 834e081:	eb 10                	jmp    834e093 <_ZN4CMapD1Ev+0x19d>
 834e083:	8b 45 08             	mov    0x8(%ebp),%eax
 834e086:	83 c0 6c             	add    $0x6c,%eax
 834e089:	89 04 24             	mov    %eax,(%esp)
 834e08c:	e8 d1 50 03 00       	call   8383162 <_ZNSt6vectorI27STAICharacterMapArrangeDataSaIS0_EED1Ev>
 834e091:	eb 18                	jmp    834e0ab <_ZN4CMapD1Ev+0x1b5>
 834e093:	89 d3                	mov    %edx,%ebx
 834e095:	89 c6                	mov    %eax,%esi
 834e097:	8b 45 08             	mov    0x8(%ebp),%eax
 834e09a:	83 c0 24             	add    $0x24,%eax
 834e09d:	89 04 24             	mov    %eax,(%esp)
 834e0a0:	e8 43 cd ed ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 834e0a5:	89 f0                	mov    %esi,%eax
 834e0a7:	89 da                	mov    %ebx,%edx
 834e0a9:	eb 10                	jmp    834e0bb <_ZN4CMapD1Ev+0x1c5>
 834e0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 834e0ae:	83 c0 24             	add    $0x24,%eax
 834e0b1:	89 04 24             	mov    %eax,(%esp)
 834e0b4:	e8 2f cd ed ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 834e0b9:	eb 18                	jmp    834e0d3 <_ZN4CMapD1Ev+0x1dd>
 834e0bb:	89 d3                	mov    %edx,%ebx
 834e0bd:	89 c6                	mov    %eax,%esi
 834e0bf:	8b 45 08             	mov    0x8(%ebp),%eax
 834e0c2:	83 c0 1c             	add    $0x1c,%eax
 834e0c5:	89 04 24             	mov    %eax,(%esp)
 834e0c8:	e8 e5 27 e0 ff       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 834e0cd:	89 f0                	mov    %esi,%eax
 834e0cf:	89 da                	mov    %ebx,%edx
 834e0d1:	eb 10                	jmp    834e0e3 <_ZN4CMapD1Ev+0x1ed>
 834e0d3:	8b 45 08             	mov    0x8(%ebp),%eax
 834e0d6:	83 c0 1c             	add    $0x1c,%eax
 834e0d9:	89 04 24             	mov    %eax,(%esp)
 834e0dc:	e8 d1 27 e0 ff       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 834e0e1:	eb 18                	jmp    834e0fb <_ZN4CMapD1Ev+0x205>
 834e0e3:	89 d3                	mov    %edx,%ebx
 834e0e5:	89 c6                	mov    %eax,%esi
 834e0e7:	8b 45 08             	mov    0x8(%ebp),%eax
 834e0ea:	83 c0 14             	add    $0x14,%eax
 834e0ed:	89 04 24             	mov    %eax,(%esp)
 834e0f0:	e8 8d 66 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834e0f5:	89 f0                	mov    %esi,%eax
 834e0f7:	89 da                	mov    %ebx,%edx
 834e0f9:	eb 10                	jmp    834e10b <_ZN4CMapD1Ev+0x215>
 834e0fb:	8b 45 08             	mov    0x8(%ebp),%eax
 834e0fe:	83 c0 14             	add    $0x14,%eax
 834e101:	89 04 24             	mov    %eax,(%esp)
 834e104:	e8 79 66 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834e109:	eb 1e                	jmp    834e129 <_ZN4CMapD1Ev+0x233>
 834e10b:	89 d3                	mov    %edx,%ebx
 834e10d:	89 c6                	mov    %eax,%esi
 834e10f:	8b 45 08             	mov    0x8(%ebp),%eax
 834e112:	83 c0 0c             	add    $0xc,%eax
 834e115:	89 04 24             	mov    %eax,(%esp)
 834e118:	e8 65 66 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834e11d:	89 f0                	mov    %esi,%eax
 834e11f:	89 da                	mov    %ebx,%edx
 834e121:	89 04 24             	mov    %eax,(%esp)
 834e124:	e8 27 56 79 00       	call   8ae3750 <_Unwind_Resume>
 834e129:	8b 45 08             	mov    0x8(%ebp),%eax
 834e12c:	83 c0 0c             	add    $0xc,%eax
 834e12f:	89 04 24             	mov    %eax,(%esp)
 834e132:	e8 4b 66 de ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 834e137:	83 c4 10             	add    $0x10,%esp
 834e13a:	5b                   	pop    %ebx
 834e13b:	5e                   	pop    %esi
 834e13c:	5d                   	pop    %ebp
 834e13d:	c3                   	ret

```

```c
// CMap::~CMap @ 0x834def6

/* CMap::~CMap() */

void __thiscall CMap::~CMap(CMap *this)

{
                    /* try { // try from 0834df04 to 0834df08 has its CatchHandler @ 0834df0b */
  destroy(this);
                    /* try { // try from 0834df30 to 0834df34 has its CatchHandler @ 0834df37 */
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::~map((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
          *)(this + 0x114));
                    /* try { // try from 0834df5c to 0834df60 has its CatchHandler @ 0834df63 */
  advancealtar::TimeLine::~TimeLine((TimeLine *)(this + 0xf4));
                    /* try { // try from 0834df88 to 0834df8c has its CatchHandler @ 0834df8f */
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::~vector
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4))
  ;
                    /* try { // try from 0834dfb4 to 0834dfb8 has its CatchHandler @ 0834dfbb */
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::~vector
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8));
                    /* try { // try from 0834dfe0 to 0834dfe4 has its CatchHandler @ 0834dfe7 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
                    /* try { // try from 0834e00c to 0834e010 has its CatchHandler @ 0834e013 */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::~vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
                    /* try { // try from 0834e038 to 0834e03c has its CatchHandler @ 0834e03f */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::~vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90));
                    /* try { // try from 0834e064 to 0834e068 has its CatchHandler @ 0834e06b */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84));
                    /* try { // try from 0834e08c to 0834e090 has its CatchHandler @ 0834e093 */
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::~vector
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c));
                    /* try { // try from 0834e0b4 to 0834e0b8 has its CatchHandler @ 0834e0bb */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 0834e0dc to 0834e0e0 has its CatchHandler @ 0834e0e3 */
  std::list<_mapItem,std::allocator<_mapItem>>::~list
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
                    /* try { // try from 0834e104 to 0834e108 has its CatchHandler @ 0834e10b */
  std::list<_mapMonster,std::allocator<_mapMonster>>::~list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14));
  std::list<_mapMonster,std::allocator<_mapMonster>>::~list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
  return;
}

```

