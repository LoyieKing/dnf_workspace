# LevelupSupport2ndEventManger

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Destroy

```asm
// === 08147864 LevelupSupport2ndEventManger::Destroy  [0x08147864-0x814787f] ===
 8147864:	55                   	push   %ebp
 8147865:	89 e5                	mov    %esp,%ebp
 8147867:	83 ec 18             	sub    $0x18,%esp
 814786a:	8b 45 08             	mov    0x8(%ebp),%eax
 814786d:	83 c0 04             	add    $0x4,%eax
 8147870:	89 04 24             	mov    %eax,(%esp)
 8147873:	e8 ec e0 96 00       	call   8ab5964 <_ZN23LevelupSupport2ndScript11clearScriptEv>
 8147878:	b8 01 00 00 00       	mov    $0x1,%eax
 814787d:	c9                   	leave
 814787e:	c3                   	ret
 814787f:	90                   	nop

```

```c
// LevelupSupport2ndEventManger::Destroy @ 0x8147864

/* LevelupSupport2ndEventManger::Destroy() */

undefined4 __thiscall LevelupSupport2ndEventManger::Destroy(LevelupSupport2ndEventManger *this)

{
  LevelupSupport2ndScript::clearScript((LevelupSupport2ndScript *)(this + 4));
  return 1;
}

```

---

## LevelupSupport2ndEventManger

```asm
// === 0814778e LevelupSupport2ndEventManger::LevelupSupport2ndEventManger  [0x0814778e-0x81477c3] ===
 814778e:	55                   	push   %ebp
 814778f:	89 e5                	mov    %esp,%ebp
 8147791:	83 ec 18             	sub    $0x18,%esp
 8147794:	8b 45 08             	mov    0x8(%ebp),%eax
 8147797:	89 04 24             	mov    %eax,(%esp)
 814779a:	e8 a5 06 00 00       	call   8147e44 <_ZN4ARAD9SingletonI28LevelupSupport2ndEventMangerEC1Ev>
 814779f:	8b 45 08             	mov    0x8(%ebp),%eax
 81477a2:	89 04 24             	mov    %eax,(%esp)
 81477a5:	e8 aa ac f9 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 81477aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81477ad:	c7 00 78 3c b7 08    	movl   $0x8b73c78,(%eax)
 81477b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81477b6:	83 c0 04             	add    $0x4,%eax
 81477b9:	89 04 24             	mov    %eax,(%esp)
 81477bc:	e8 fd dc 96 00       	call   8ab54be <_ZN23LevelupSupport2ndScriptC1Ev>
 81477c1:	c9                   	leave
 81477c2:	c3                   	ret
 81477c3:	90                   	nop

```

```c
// LevelupSupport2ndEventManger::LevelupSupport2ndEventManger @ 0x814778e

/* LevelupSupport2ndEventManger::LevelupSupport2ndEventManger() */

void __thiscall
LevelupSupport2ndEventManger::LevelupSupport2ndEventManger(LevelupSupport2ndEventManger *this)

{
  ARAD::Singleton<LevelupSupport2ndEventManger>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b73c78;
  LevelupSupport2ndScript::LevelupSupport2ndScript((LevelupSupport2ndScript *)(this + 4));
  return;
}

```

---

## Load

```asm
// === 081477e4 LevelupSupport2ndEventManger::Load  [0x081477e4-0x8147863] ===
 81477e4:	55                   	push   %ebp
 81477e5:	89 e5                	mov    %esp,%ebp
 81477e7:	83 ec 38             	sub    $0x38,%esp
 81477ea:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81477f1:	00 
 81477f2:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81477f9:	00 
 81477fa:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8147801:	00 
 8147802:	c7 44 24 08 b7 00 00 	movl   $0xb7,0x8(%esp)
 8147809:	00 
 814780a:	c7 44 24 04 00 3c b7 	movl   $0x8b73c00,0x4(%esp)
 8147811:	08 
 8147812:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8147815:	89 04 24             	mov    %eax,(%esp)
 8147818:	e8 29 7f 40 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 814781d:	c7 44 24 04 9c 2f b7 	movl   $0x8b72f9c,0x4(%esp)
 8147824:	08 
 8147825:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8147828:	89 04 24             	mov    %eax,(%esp)
 814782b:	e8 58 7f 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8147830:	8b 45 08             	mov    0x8(%ebp),%eax
 8147833:	83 c0 08             	add    $0x8,%eax
 8147836:	89 04 24             	mov    %eax,(%esp)
 8147839:	e8 0c 06 00 00       	call   8147e4a <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5clearEv>
 814783e:	8b 45 08             	mov    0x8(%ebp),%eax
 8147841:	83 c0 04             	add    $0x4,%eax
 8147844:	89 04 24             	mov    %eax,(%esp)
 8147847:	e8 58 dd 96 00       	call   8ab55a4 <_ZN23LevelupSupport2ndScript10loadScriptEv>
 814784c:	85 c0                	test   %eax,%eax
 814784e:	0f 95 c0             	setne  %al
 8147851:	84 c0                	test   %al,%al
 8147853:	74 07                	je     814785c <_ZN28LevelupSupport2ndEventManger4LoadEv+0x78>
 8147855:	b8 00 00 00 00       	mov    $0x0,%eax
 814785a:	eb 05                	jmp    8147861 <_ZN28LevelupSupport2ndEventManger4LoadEv+0x7d>
 814785c:	b8 01 00 00 00       	mov    $0x1,%eax
 8147861:	c9                   	leave
 8147862:	c3                   	ret
 8147863:	90                   	nop

```

```c
// LevelupSupport2ndEventManger::Load @ 0x81477e4

/* LevelupSupport2ndEventManger::Load() */

bool __thiscall LevelupSupport2ndEventManger::Load(LevelupSupport2ndEventManger *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool LevelupSupport2ndEventManger::Load()",0xb7,9,true,false)
  ;
  cMyTrace::operator()(local_1c,"\t- Loading Level Up Support 2nd Event script - ");
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
           *)(this + 8));
  iVar1 = LevelupSupport2ndScript::loadScript((LevelupSupport2ndScript *)(this + 4));
  return iVar1 == 0;
}

```

---

## Process

```asm
// === 08147880 LevelupSupport2ndEventManger::Process  [0x08147880-0x8147acc] ===
 8147880:	55                   	push   %ebp
 8147881:	89 e5                	mov    %esp,%ebp
 8147883:	56                   	push   %esi
 8147884:	53                   	push   %ebx
 8147885:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 814788b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 814788f:	0f 84 24 02 00 00    	je     8147ab9 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x239>
 8147895:	8b 45 08             	mov    0x8(%ebp),%eax
 8147898:	8b 58 04             	mov    0x4(%eax),%ebx
 814789b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814789e:	89 04 24             	mov    %eax,(%esp)
 81478a1:	e8 7a 66 fb ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81478a6:	39 c3                	cmp    %eax,%ebx
 81478a8:	0f 95 c0             	setne  %al
 81478ab:	84 c0                	test   %al,%al
 81478ad:	0f 85 09 02 00 00    	jne    8147abc <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x23c>
 81478b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81478b6:	89 04 24             	mov    %eax,(%esp)
 81478b9:	e8 fa 29 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81478be:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81478c1:	8b 45 08             	mov    0x8(%ebp),%eax
 81478c4:	8d 48 08             	lea    0x8(%eax),%ecx
 81478c7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81478ca:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81478cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 81478d1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81478d5:	89 04 24             	mov    %eax,(%esp)
 81478d8:	e8 81 05 00 00       	call   8147e5e <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 81478dd:	83 ec 04             	sub    $0x4,%esp
 81478e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81478e3:	8d 50 08             	lea    0x8(%eax),%edx
 81478e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81478e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81478ed:	89 04 24             	mov    %eax,(%esp)
 81478f0:	e8 95 05 00 00       	call   8147e8a <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 81478f5:	83 ec 04             	sub    $0x4,%esp
 81478f8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81478fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81478ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8147902:	89 04 24             	mov    %eax,(%esp)
 8147905:	e8 a6 05 00 00       	call   8147eb0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS4_EEEEeqERKS9_>
 814790a:	84 c0                	test   %al,%al
 814790c:	0f 85 ad 01 00 00    	jne    8147abf <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x23f>
 8147912:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8147915:	89 04 24             	mov    %eax,(%esp)
 8147918:	e8 a7 05 00 00       	call   8147ec4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS4_EEEEptEv>
 814791d:	8b 40 04             	mov    0x4(%eax),%eax
 8147920:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8147923:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8147927:	0f 84 95 01 00 00    	je     8147ac2 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x242>
 814792d:	8b 45 08             	mov    0x8(%ebp),%eax
 8147930:	83 c0 20             	add    $0x20,%eax
 8147933:	89 04 24             	mov    %eax,(%esp)
 8147936:	e8 b5 eb 5b 00       	call   87064f0 <_ZNKSs5c_strEv>
 814793b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8147942:	00 
 8147943:	89 44 24 08          	mov    %eax,0x8(%esp)
 8147947:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814794e:	00 
 814794f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8147956:	e8 a3 de 95 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 814795b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814795e:	8b 45 08             	mov    0x8(%ebp),%eax
 8147961:	83 c0 24             	add    $0x24,%eax
 8147964:	89 04 24             	mov    %eax,(%esp)
 8147967:	e8 84 eb 5b 00       	call   87064f0 <_ZNKSs5c_strEv>
 814796c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8147973:	00 
 8147974:	89 44 24 08          	mov    %eax,0x8(%esp)
 8147978:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814797f:	00 
 8147980:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8147987:	e8 72 de 95 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 814798c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814798f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8147996:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8147999:	89 04 24             	mov    %eax,(%esp)
 814799c:	e8 31 05 00 00       	call   8147ed2 <_ZNKSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EE4sizeEv>
 81479a1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81479a4:	e9 fd 00 00 00       	jmp    8147aa6 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x226>
 81479a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81479ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81479b0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81479b3:	89 04 24             	mov    %eax,(%esp)
 81479b6:	e8 33 05 00 00       	call   8147eee <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EE2atEj>
 81479bb:	8b 00                	mov    (%eax),%eax
 81479bd:	89 c3                	mov    %eax,%ebx
 81479bf:	e8 d7 47 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81479c4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81479c8:	89 04 24             	mov    %eax,(%esp)
 81479cb:	e8 62 80 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81479d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81479d3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81479d7:	0f 84 c4 00 00 00    	je     8147aa1 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x221>
 81479dd:	8d 45 97             	lea    -0x69(%ebp),%eax
 81479e0:	89 04 24             	mov    %eax,(%esp)
 81479e3:	e8 6c 3e f8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81479e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81479eb:	89 04 24             	mov    %eax,(%esp)
 81479ee:	e8 55 92 fc ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81479f3:	89 45 99             	mov    %eax,-0x67(%ebp)
 81479f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81479f9:	8b 00                	mov    (%eax),%eax
 81479fb:	83 c0 08             	add    $0x8,%eax
 81479fe:	8b 10                	mov    (%eax),%edx
 8147a00:	8d 45 97             	lea    -0x69(%ebp),%eax
 8147a03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147a07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8147a0a:	89 04 24             	mov    %eax,(%esp)
 8147a0d:	ff d2                	call   *%edx
 8147a0f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8147a12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147a16:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8147a19:	89 04 24             	mov    %eax,(%esp)
 8147a1c:	e8 cd 04 00 00       	call   8147eee <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EE2atEj>
 8147a21:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8147a25:	98                   	cwtl
 8147a26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147a2a:	8d 45 97             	lea    -0x69(%ebp),%eax
 8147a2d:	89 04 24             	mov    %eax,(%esp)
 8147a30:	e8 4f 3e f8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8147a35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147a38:	89 04 24             	mov    %eax,(%esp)
 8147a3b:	e8 50 42 f8 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8147a40:	89 c3                	mov    %eax,%ebx
 8147a42:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8147a45:	89 04 24             	mov    %eax,(%esp)
 8147a48:	e8 63 69 f3 ff       	call   807e3b0 <strlen@plt>
 8147a4d:	89 c6                	mov    %eax,%esi
 8147a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147a52:	89 04 24             	mov    %eax,(%esp)
 8147a55:	e8 f4 41 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8147a5a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8147a61:	00 
 8147a62:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8147a69:	00 
 8147a6a:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8147a6e:	c7 44 24 18 0f 00 00 	movl   $0xf,0x18(%esp)
 8147a75:	00 
 8147a76:	89 74 24 14          	mov    %esi,0x14(%esp)
 8147a7a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8147a7d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8147a81:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8147a85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8147a8c:	00 
 8147a8d:	8d 45 97             	lea    -0x69(%ebp),%eax
 8147a90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147a94:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8147a97:	89 04 24             	mov    %eax,(%esp)
 8147a9a:	e8 49 db 40 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8147a9f:	eb 01                	jmp    8147aa2 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x222>
 8147aa1:	90                   	nop
 8147aa2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8147aa6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8147aa9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8147aac:	0f 92 c0             	setb   %al
 8147aaf:	84 c0                	test   %al,%al
 8147ab1:	0f 85 f2 fe ff ff    	jne    81479a9 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x129>
 8147ab7:	eb 0a                	jmp    8147ac3 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x243>
 8147ab9:	90                   	nop
 8147aba:	eb 07                	jmp    8147ac3 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x243>
 8147abc:	90                   	nop
 8147abd:	eb 04                	jmp    8147ac3 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x243>
 8147abf:	90                   	nop
 8147ac0:	eb 01                	jmp    8147ac3 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser+0x243>
 8147ac2:	90                   	nop
 8147ac3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8147ac6:	83 c4 00             	add    $0x0,%esp
 8147ac9:	5b                   	pop    %ebx
 8147aca:	5e                   	pop    %esi
 8147acb:	5d                   	pop    %ebp
 8147acc:	c3                   	ret

```

```c
// LevelupSupport2ndEventManger::Process @ 0x8147880

/* LevelupSupport2ndEventManger::Process(CUser*) */

void __thiscall
LevelupSupport2ndEventManger::Process(LevelupSupport2ndEventManger *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  CDataManager *this_00;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  Inven_Item local_6d [2];
  undefined4 local_6b;
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
  local_30 [4];
  undefined4 local_2c;
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_28 [4];
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *local_24;
  undefined4 local_20;
  char *local_1c;
  uint local_18;
  uint local_14;
  CItem *local_10;
  
  if ((param_1 != (CUser *)0x0) &&
     (iVar3 = *(int *)(this + 4),
     iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar3 == iVar2)) {
    local_2c = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    std::
    map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
    ::find((int *)local_30);
    std::
    map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
    ::end(local_28);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator==(local_30,(_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
              ::operator->(local_30);
      local_24 = *(vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                   **)(iVar3 + 4);
      if (local_24 !=
          (vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
           *)0x0) {
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x20));
        local_20 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,(bool *)0x0
                             );
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x24));
        local_1c = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,
                                      (bool *)0x0);
        local_18 = 0;
        local_14 = std::
                   vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                   ::size(local_24);
        for (; local_18 < local_14; local_18 = local_18 + 1) {
          piVar5 = (int *)std::
                          vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                          ::at(local_24,local_18);
          iVar3 = *piVar5;
          this_00 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
          if (local_10 != (CItem *)0x0) {
            Inven_Item::Inven_Item(local_6d);
            local_6b = CItem::get_index(local_10);
            (**(code **)(*(int *)local_10 + 8))(local_10,local_6d);
            iVar3 = std::
                    vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                    ::at(local_24,local_18);
            Inven_Item::set_add_info(local_6d,(int)*(short *)(iVar3 + 4));
            uVar6 = CUser::GetServerGroup(param_1);
            sVar7 = strlen(local_1c);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_20,local_6d,0,uVar8,local_1c,sVar7,0xf,uVar6,0,0);
          }
        }
      }
    }
  }
  return;
}

```

---

## ~LevelupSupport2ndEventManger

```asm
// === 081477c4 LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger  [0x081477c4-0x81477e3] ===
 81477c4:	55                   	push   %ebp
 81477c5:	89 e5                	mov    %esp,%ebp
 81477c7:	83 ec 18             	sub    $0x18,%esp
 81477ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81477cd:	c7 00 78 3c b7 08    	movl   $0x8b73c78,(%eax)
 81477d3:	8b 45 08             	mov    0x8(%ebp),%eax
 81477d6:	83 c0 04             	add    $0x4,%eax
 81477d9:	89 04 24             	mov    %eax,(%esp)
 81477dc:	e8 4f dd 96 00       	call   8ab5530 <_ZN23LevelupSupport2ndScriptD1Ev>
 81477e1:	c9                   	leave
 81477e2:	c3                   	ret
 81477e3:	90                   	nop

```

```c
// LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger @ 0x81477c4

/* LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger() */

void __thiscall
LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger(LevelupSupport2ndEventManger *this)

{
  *(undefined ***)this = &PTR_Load_08b73c78;
  LevelupSupport2ndScript::~LevelupSupport2ndScript((LevelupSupport2ndScript *)(this + 4));
  return;
}

```

