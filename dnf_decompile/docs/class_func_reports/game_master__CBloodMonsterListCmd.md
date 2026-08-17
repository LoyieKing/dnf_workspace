# game_master__CBloodMonsterListCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a9e34 game_master::CBloodMonsterListCmd::execute  [0x084a9e34-0x84aa10b] ===
 84a9e34:	55                   	push   %ebp
 84a9e35:	89 e5                	mov    %esp,%ebp
 84a9e37:	57                   	push   %edi
 84a9e38:	56                   	push   %esi
 84a9e39:	53                   	push   %ebx
 84a9e3a:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 84a9e40:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9e43:	89 04 24             	mov    %eax,(%esp)
 84a9e46:	e8 6f a1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9e4b:	89 04 24             	mov    %eax,(%esp)
 84a9e4e:	e8 39 05 c3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84a9e53:	83 f8 05             	cmp    $0x5,%eax
 84a9e56:	0f 95 c0             	setne  %al
 84a9e59:	84 c0                	test   %al,%al
 84a9e5b:	0f 85 9b 02 00 00    	jne    84aa0fc <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2c8>
 84a9e61:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9e64:	89 04 24             	mov    %eax,(%esp)
 84a9e67:	e8 4e a1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9e6c:	89 04 24             	mov    %eax,(%esp)
 84a9e6f:	e8 da 5f d8 ff       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 84a9e74:	0f bf d8             	movswl %ax,%ebx
 84a9e77:	e8 12 23 c2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84a9e7c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9e80:	89 04 24             	mov    %eax,(%esp)
 84a9e83:	e8 aa b0 de ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 84a9e88:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a9e8b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84a9e8f:	0f 84 6a 02 00 00    	je     84aa0ff <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2cb>
 84a9e95:	8d 45 db             	lea    -0x25(%ebp),%eax
 84a9e98:	89 04 24             	mov    %eax,(%esp)
 84a9e9b:	e8 30 62 23 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84a9ea0:	8d 45 db             	lea    -0x25(%ebp),%eax
 84a9ea3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a9ea7:	c7 44 24 04 03 fb c7 	movl   $0x8c7fb03,0x4(%esp)
 84a9eae:	08 
 84a9eaf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9eb2:	89 04 24             	mov    %eax,(%esp)
 84a9eb5:	e8 76 d7 25 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84a9eba:	eb 1b                	jmp    84a9ed7 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0xa3>
 84a9ebc:	89 d3                	mov    %edx,%ebx
 84a9ebe:	89 c6                	mov    %eax,%esi
 84a9ec0:	8d 45 db             	lea    -0x25(%ebp),%eax
 84a9ec3:	89 04 24             	mov    %eax,(%esp)
 84a9ec6:	e8 25 62 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a9ecb:	89 f0                	mov    %esi,%eax
 84a9ecd:	89 da                	mov    %ebx,%edx
 84a9ecf:	89 04 24             	mov    %eax,(%esp)
 84a9ed2:	e8 79 98 63 00       	call   8ae3750 <_Unwind_Resume>
 84a9ed7:	8d 45 db             	lea    -0x25(%ebp),%eax
 84a9eda:	89 04 24             	mov    %eax,(%esp)
 84a9edd:	e8 0e 62 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a9ee2:	8d 95 c5 fe ff ff    	lea    -0x13b(%ebp),%edx
 84a9ee8:	bb ff 00 00 00       	mov    $0xff,%ebx
 84a9eed:	b8 00 00 00 00       	mov    $0x0,%eax
 84a9ef2:	89 d1                	mov    %edx,%ecx
 84a9ef4:	83 e1 01             	and    $0x1,%ecx
 84a9ef7:	85 c9                	test   %ecx,%ecx
 84a9ef9:	74 08                	je     84a9f03 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0xcf>
 84a9efb:	88 02                	mov    %al,(%edx)
 84a9efd:	83 c2 01             	add    $0x1,%edx
 84a9f00:	83 eb 01             	sub    $0x1,%ebx
 84a9f03:	89 d1                	mov    %edx,%ecx
 84a9f05:	83 e1 02             	and    $0x2,%ecx
 84a9f08:	85 c9                	test   %ecx,%ecx
 84a9f0a:	74 09                	je     84a9f15 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0xe1>
 84a9f0c:	66 89 02             	mov    %ax,(%edx)
 84a9f0f:	83 c2 02             	add    $0x2,%edx
 84a9f12:	83 eb 02             	sub    $0x2,%ebx
 84a9f15:	89 d9                	mov    %ebx,%ecx
 84a9f17:	c1 e9 02             	shr    $0x2,%ecx
 84a9f1a:	89 d7                	mov    %edx,%edi
 84a9f1c:	f3 ab                	rep stos %eax,%es:(%edi)
 84a9f1e:	89 fa                	mov    %edi,%edx
 84a9f20:	89 d9                	mov    %ebx,%ecx
 84a9f22:	83 e1 02             	and    $0x2,%ecx
 84a9f25:	85 c9                	test   %ecx,%ecx
 84a9f27:	74 06                	je     84a9f2f <_ZN11game_master20CBloodMonsterListCmd7executeEv+0xfb>
 84a9f29:	66 89 02             	mov    %ax,(%edx)
 84a9f2c:	83 c2 02             	add    $0x2,%edx
 84a9f2f:	89 d9                	mov    %ebx,%ecx
 84a9f31:	83 e1 01             	and    $0x1,%ecx
 84a9f34:	85 c9                	test   %ecx,%ecx
 84a9f36:	74 05                	je     84a9f3d <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x109>
 84a9f38:	88 02                	mov    %al,(%edx)
 84a9f3a:	83 c2 01             	add    $0x1,%edx
 84a9f3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a9f40:	05 24 0b 00 00       	add    $0xb24,%eax
 84a9f45:	89 04 24             	mov    %eax,(%esp)
 84a9f48:	e8 f1 30 d8 ff       	call   822d03e <_ZN13CBattle_Field10GetMapInfoEv>
 84a9f4d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a9f50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9f53:	8d 50 0c             	lea    0xc(%eax),%edx
 84a9f56:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a9f59:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a9f5d:	89 04 24             	mov    %eax,(%esp)
 84a9f60:	e8 a3 86 ca ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 84a9f65:	83 ec 04             	sub    $0x4,%esp
 84a9f68:	eb 47                	jmp    84a9fb1 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x17d>
 84a9f6a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a9f6d:	89 04 24             	mov    %eax,(%esp)
 84a9f70:	e8 d7 86 ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84a9f75:	8b 00                	mov    (%eax),%eax
 84a9f77:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a9f7b:	c7 44 24 04 d5 fa c7 	movl   $0x8c7fad5,0x4(%esp)
 84a9f82:	08 
 84a9f83:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 84a9f89:	89 04 24             	mov    %eax,(%esp)
 84a9f8c:	e8 af 44 bd ff       	call   807e440 <sprintf@plt>
 84a9f91:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 84a9f97:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9f9b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9f9e:	89 04 24             	mov    %eax,(%esp)
 84a9fa1:	e8 8a e0 25 00       	call   8708030 <_ZNSspLEPKc>
 84a9fa6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a9fa9:	89 04 24             	mov    %eax,(%esp)
 84a9fac:	e8 7d 86 ca ff       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 84a9fb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9fb4:	8d 50 0c             	lea    0xc(%eax),%edx
 84a9fb7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9fba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a9fbe:	89 04 24             	mov    %eax,(%esp)
 84a9fc1:	e8 c0 84 ca ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84a9fc6:	83 ec 04             	sub    $0x4,%esp
 84a9fc9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9fcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9fd0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a9fd3:	89 04 24             	mov    %eax,(%esp)
 84a9fd6:	e8 d1 84 ca ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 84a9fdb:	84 c0                	test   %al,%al
 84a9fdd:	75 8b                	jne    84a9f6a <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x136>
 84a9fdf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84a9fe2:	89 04 24             	mov    %eax,(%esp)
 84a9fe5:	e8 62 3d 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a9fea:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84a9ff1:	00 
 84a9ff2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9ff9:	00 
 84a9ffa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84a9ffd:	89 04 24             	mov    %eax,(%esp)
 84aa000:	e8 f7 18 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84aa005:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa00c:	00 
 84aa00d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa010:	89 04 24             	mov    %eax,(%esp)
 84aa013:	e8 08 19 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa018:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa01f:	00 
 84aa020:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa023:	89 04 24             	mov    %eax,(%esp)
 84aa026:	e8 79 fe c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84aa02b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa032:	00 
 84aa033:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa036:	89 04 24             	mov    %eax,(%esp)
 84aa039:	e8 e2 18 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa03e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aa041:	89 04 24             	mov    %eax,(%esp)
 84aa044:	e8 17 c6 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84aa049:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa04d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa050:	89 04 24             	mov    %eax,(%esp)
 84aa053:	e8 e4 18 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84aa058:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aa05b:	89 04 24             	mov    %eax,(%esp)
 84aa05e:	e8 fd c5 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84aa063:	89 c3                	mov    %eax,%ebx
 84aa065:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aa068:	89 04 24             	mov    %eax,(%esp)
 84aa06b:	e8 80 c4 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa070:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aa074:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa078:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa07b:	89 04 24             	mov    %eax,(%esp)
 84aa07e:	e8 ed 16 d8 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84aa083:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa08a:	00 
 84aa08b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa08e:	89 04 24             	mov    %eax,(%esp)
 84aa091:	e8 c2 18 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84aa096:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa099:	89 04 24             	mov    %eax,(%esp)
 84aa09c:	e8 19 9f 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa0a1:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84aa0a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aa0a8:	89 04 24             	mov    %eax,(%esp)
 84aa0ab:	e8 0a e5 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aa0b0:	eb 15                	jmp    84aa0c7 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x293>
 84aa0b2:	89 d3                	mov    %edx,%ebx
 84aa0b4:	89 c6                	mov    %eax,%esi
 84aa0b6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa0b9:	89 04 24             	mov    %eax,(%esp)
 84aa0bc:	e8 bf 3d 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa0c1:	89 f0                	mov    %esi,%eax
 84aa0c3:	89 da                	mov    %ebx,%edx
 84aa0c5:	eb 0d                	jmp    84aa0d4 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2a0>
 84aa0c7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84aa0ca:	89 04 24             	mov    %eax,(%esp)
 84aa0cd:	e8 ae 3d 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa0d2:	eb 1b                	jmp    84aa0ef <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2bb>
 84aa0d4:	89 d3                	mov    %edx,%ebx
 84aa0d6:	89 c6                	mov    %eax,%esi
 84aa0d8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aa0db:	89 04 24             	mov    %eax,(%esp)
 84aa0de:	e8 fd da 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa0e3:	89 f0                	mov    %esi,%eax
 84aa0e5:	89 da                	mov    %ebx,%edx
 84aa0e7:	89 04 24             	mov    %eax,(%esp)
 84aa0ea:	e8 61 96 63 00       	call   8ae3750 <_Unwind_Resume>
 84aa0ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aa0f2:	89 04 24             	mov    %eax,(%esp)
 84aa0f5:	e8 e6 da 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa0fa:	eb 04                	jmp    84aa100 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2cc>
 84aa0fc:	90                   	nop
 84aa0fd:	eb 01                	jmp    84aa100 <_ZN11game_master20CBloodMonsterListCmd7executeEv+0x2cc>
 84aa0ff:	90                   	nop
 84aa100:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84aa103:	83 c4 00             	add    $0x0,%esp
 84aa106:	5b                   	pop    %ebx
 84aa107:	5e                   	pop    %esi
 84aa108:	5f                   	pop    %edi
 84aa109:	5d                   	pop    %ebp
 84aa10a:	c3                   	ret
 84aa10b:	90                   	nop

```

```c
// game_master::CBloodMonsterListCmd::execute @ 0x84a9e34

/* game_master::CBloodMonsterListCmd::execute() */

void __thiscall game_master::CBloodMonsterListCmd::execute(CBloodMonsterListCmd *this)

{
  char cVar1;
  CUser *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_13f;
  char local_13e [254];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_40 [4];
  PacketGuard local_3c [12];
  string local_30 [7];
  allocator<char> local_29;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  int local_24;
  undefined4 local_20;
  
  bVar9 = 0;
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar3 = CUser::get_state(pCVar2);
  if (iVar3 == 5) {
    pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::GetPartyIndex(pCVar2);
    iVar3 = G_CGameManager();
    local_24 = CGameManager::GetParty(iVar3);
    if (local_24 != 0) {
      std::allocator<char>::allocator();
                    /* try { // try from 084a9eb5 to 084a9eb9 has its CatchHandler @ 084a9ebc */
      std::string::string(local_30,"monster list : ",(allocator *)&local_29);
      std::allocator<char>::~allocator(&local_29);
      pcVar6 = &local_13f;
      uVar7 = 0xff;
      bVar8 = ((uint)pcVar6 & 1) != 0;
      if (bVar8) {
        local_13f = '\0';
        pcVar6 = local_13e;
        uVar7 = 0xfe;
      }
      if (((uint)pcVar6 & 2) != 0) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6 = pcVar6 + 2;
        uVar7 = uVar7 - 2;
      }
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if ((uVar7 & 2) != 0) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6 = pcVar6 + 2;
      }
      if (!bVar8) {
        *pcVar6 = '\0';
      }
                    /* try { // try from 084a9f48 to 084a9fe9 has its CatchHandler @ 084aa0d4 */
      local_20 = CBattle_Field::GetMapInfo((CBattle_Field *)(local_24 + 0xb24));
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_40);
      while( true ) {
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_28);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40,
                           (_Rb_tree_iterator *)local_28);
        if (cVar1 == '\0') break;
        puVar4 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                           ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
        sprintf(&local_13f,"(%d) ",*puVar4);
        std::string::operator+=(local_30,&local_13f);
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
      }
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084aa000 to 084aa0af has its CatchHandler @ 084aa0b2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xc);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      iVar3 = std::string::size(local_30);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
      iVar3 = std::string::size(local_30);
      pcVar6 = (char *)std::string::c_str(local_30);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,pcVar6,iVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
      CUser::Send(pCVar2,local_3c);
                    /* try { // try from 084aa0cd to 084aa0d1 has its CatchHandler @ 084aa0d4 */
      PacketGuard::~PacketGuard(local_3c);
      std::string::~string(local_30);
    }
  }
  return;
}

```

