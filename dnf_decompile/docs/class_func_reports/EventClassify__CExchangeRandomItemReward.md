# EventClassify__CExchangeRandomItemReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## deleteUsedMaterialItem

```asm
// === 0810eede EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem  [0x0810eede-0x810f26d] ===
 810eede:	55                   	push   %ebp
 810eedf:	89 e5                	mov    %esp,%ebp
 810eee1:	56                   	push   %esi
 810eee2:	53                   	push   %ebx
 810eee3:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 810eee9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810eef0:	e9 51 03 00 00       	jmp    810f246 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x368>
 810eef5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810eef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810eefc:	8b 45 10             	mov    0x10(%ebp),%eax
 810eeff:	89 04 24             	mov    %eax,(%esp)
 810ef02:	e8 9d b9 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ef07:	8b 18                	mov    (%eax),%ebx
 810ef09:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ef0c:	89 04 24             	mov    %eax,(%esp)
 810ef0f:	e8 6a b3 fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810ef14:	8d 55 9b             	lea    -0x65(%ebp),%edx
 810ef17:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 810ef1b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810ef22:	00 
 810ef23:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ef27:	89 14 24             	mov    %edx,(%esp)
 810ef2a:	e8 e9 c9 3e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 810ef2f:	83 ec 04             	sub    $0x4,%esp
 810ef32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ef35:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ef39:	8b 45 10             	mov    0x10(%ebp),%eax
 810ef3c:	89 04 24             	mov    %eax,(%esp)
 810ef3f:	e8 60 b9 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ef44:	8b 70 04             	mov    0x4(%eax),%esi
 810ef47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ef4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ef4e:	8b 45 10             	mov    0x10(%ebp),%eax
 810ef51:	89 04 24             	mov    %eax,(%esp)
 810ef54:	e8 4b b9 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ef59:	8b 18                	mov    (%eax),%ebx
 810ef5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ef5e:	89 04 24             	mov    %eax,(%esp)
 810ef61:	e8 28 b3 fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810ef66:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 810ef6d:	00 
 810ef6e:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 810ef75:	00 
 810ef76:	89 74 24 0c          	mov    %esi,0xc(%esp)
 810ef7a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810ef7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810ef85:	00 
 810ef86:	89 04 24             	mov    %eax,(%esp)
 810ef89:	e8 7e 50 3f 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 810ef8e:	84 c0                	test   %al,%al
 810ef90:	74 5e                	je     810eff0 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x112>
 810ef92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ef95:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ef99:	8b 45 10             	mov    0x10(%ebp),%eax
 810ef9c:	89 04 24             	mov    %eax,(%esp)
 810ef9f:	e8 00 b9 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810efa4:	8d 50 04             	lea    0x4(%eax),%edx
 810efa7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810efaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 810efae:	8d 55 9b             	lea    -0x65(%ebp),%edx
 810efb1:	83 c2 02             	add    $0x2,%edx
 810efb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 810efb8:	89 04 24             	mov    %eax,(%esp)
 810efbb:	e8 77 2a 00 00       	call   8111a37 <_ZSt9make_pairIRmRiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 810efc0:	83 ec 04             	sub    $0x4,%esp
 810efc3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810efc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 810efca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810efcd:	89 04 24             	mov    %eax,(%esp)
 810efd0:	e8 a1 2a 00 00       	call   8111a76 <_ZNSt4pairIiiEC1ImiEEOS_IT_T0_E>
 810efd5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810efd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810efdc:	8b 45 14             	mov    0x14(%ebp),%eax
 810efdf:	89 04 24             	mov    %eax,(%esp)
 810efe2:	e8 1f e6 fc ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 810efe7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 810efeb:	e9 56 02 00 00       	jmp    810f246 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x368>
 810eff0:	8b 45 14             	mov    0x14(%ebp),%eax
 810eff3:	89 04 24             	mov    %eax,(%esp)
 810eff6:	e8 19 e8 fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810effb:	85 c0                	test   %eax,%eax
 810effd:	0f 95 c0             	setne  %al
 810f000:	84 c0                	test   %al,%al
 810f002:	0f 84 cb 01 00 00    	je     810f1d3 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x2f5>
 810f008:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810f00f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810f012:	8b 55 14             	mov    0x14(%ebp),%edx
 810f015:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f019:	89 04 24             	mov    %eax,(%esp)
 810f01c:	e8 91 e5 fc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 810f021:	83 ec 04             	sub    $0x4,%esp
 810f024:	e9 7b 01 00 00       	jmp    810f1a4 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x2c6>
 810f029:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 810f02f:	89 04 24             	mov    %eax,(%esp)
 810f032:	e8 1d c8 fb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 810f037:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810f03a:	89 04 24             	mov    %eax,(%esp)
 810f03d:	e8 ac 2c 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f042:	8b 00                	mov    (%eax),%eax
 810f044:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 810f04a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810f04d:	89 04 24             	mov    %eax,(%esp)
 810f050:	e8 99 2c 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f055:	8b 40 04             	mov    0x4(%eax),%eax
 810f058:	89 85 65 ff ff ff    	mov    %eax,-0x9b(%ebp)
 810f05e:	8b 9d 65 ff ff ff    	mov    -0x9b(%ebp),%ebx
 810f064:	e8 32 d1 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810f069:	8b 40 0c             	mov    0xc(%eax),%eax
 810f06c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 810f070:	8d 95 5e ff ff ff    	lea    -0xa2(%ebp),%edx
 810f076:	89 54 24 08          	mov    %edx,0x8(%esp)
 810f07a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810f081:	00 
 810f082:	89 04 24             	mov    %eax,(%esp)
 810f085:	e8 2e 2f 40 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 810f08a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f08d:	89 04 24             	mov    %eax,(%esp)
 810f090:	e8 f9 b1 fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810f095:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 810f09c:	00 
 810f09d:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 810f0a4:	00 
 810f0a5:	c7 44 24 44 0d 00 00 	movl   $0xd,0x44(%esp)
 810f0ac:	00 
 810f0ad:	8b 95 5e ff ff ff    	mov    -0xa2(%ebp),%edx
 810f0b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f0b7:	8b 95 62 ff ff ff    	mov    -0x9e(%ebp),%edx
 810f0bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 810f0c1:	8b 95 66 ff ff ff    	mov    -0x9a(%ebp),%edx
 810f0c7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810f0cb:	8b 95 6a ff ff ff    	mov    -0x96(%ebp),%edx
 810f0d1:	89 54 24 10          	mov    %edx,0x10(%esp)
 810f0d5:	8b 95 6e ff ff ff    	mov    -0x92(%ebp),%edx
 810f0db:	89 54 24 14          	mov    %edx,0x14(%esp)
 810f0df:	8b 95 72 ff ff ff    	mov    -0x8e(%ebp),%edx
 810f0e5:	89 54 24 18          	mov    %edx,0x18(%esp)
 810f0e9:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 810f0ef:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 810f0f3:	8b 95 7a ff ff ff    	mov    -0x86(%ebp),%edx
 810f0f9:	89 54 24 20          	mov    %edx,0x20(%esp)
 810f0fd:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 810f103:	89 54 24 24          	mov    %edx,0x24(%esp)
 810f107:	8b 55 82             	mov    -0x7e(%ebp),%edx
 810f10a:	89 54 24 28          	mov    %edx,0x28(%esp)
 810f10e:	8b 55 86             	mov    -0x7a(%ebp),%edx
 810f111:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 810f115:	8b 55 8a             	mov    -0x76(%ebp),%edx
 810f118:	89 54 24 30          	mov    %edx,0x30(%esp)
 810f11c:	8b 55 8e             	mov    -0x72(%ebp),%edx
 810f11f:	89 54 24 34          	mov    %edx,0x34(%esp)
 810f123:	8b 55 92             	mov    -0x6e(%ebp),%edx
 810f126:	89 54 24 38          	mov    %edx,0x38(%esp)
 810f12a:	8b 55 96             	mov    -0x6a(%ebp),%edx
 810f12d:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 810f131:	0f b6 55 9a          	movzbl -0x66(%ebp),%edx
 810f135:	88 54 24 40          	mov    %dl,0x40(%esp)
 810f139:	89 04 24             	mov    %eax,(%esp)
 810f13c:	e8 45 3c 3f 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 810f141:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f144:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f148:	79 4f                	jns    810f199 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x2bb>
 810f14a:	8b b5 65 ff ff ff    	mov    -0x9b(%ebp),%esi
 810f150:	8b 9d 60 ff ff ff    	mov    -0xa0(%ebp),%ebx
 810f156:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f159:	89 04 24             	mov    %eax,(%esp)
 810f15c:	e8 ed ca fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810f161:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 810f165:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 810f169:	89 44 24 14          	mov    %eax,0x14(%esp)
 810f16d:	c7 44 24 10 64 c2 b4 	movl   $0x8b4c264,0x10(%esp)
 810f174:	08 
 810f175:	c7 44 24 0c 3d 06 00 	movl   $0x63d,0xc(%esp)
 810f17c:	00 
 810f17d:	c7 44 24 08 00 d4 b4 	movl   $0x8b4d400,0x8(%esp)
 810f184:	08 
 810f185:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 810f18c:	08 
 810f18d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810f194:	e8 71 4a 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810f199:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810f19c:	89 04 24             	mov    %eax,(%esp)
 810f19f:	e8 66 20 00 00       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 810f1a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810f1a7:	8b 55 14             	mov    0x14(%ebp),%edx
 810f1aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f1ae:	89 04 24             	mov    %eax,(%esp)
 810f1b1:	e8 20 e4 fc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 810f1b6:	83 ec 04             	sub    $0x4,%esp
 810f1b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810f1bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f1c0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810f1c3:	89 04 24             	mov    %eax,(%esp)
 810f1c6:	e8 13 20 00 00       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 810f1cb:	84 c0                	test   %al,%al
 810f1cd:	0f 85 56 fe ff ff    	jne    810f029 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x14b>
 810f1d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810f1d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f1da:	8b 45 10             	mov    0x10(%ebp),%eax
 810f1dd:	89 04 24             	mov    %eax,(%esp)
 810f1e0:	e8 bf b6 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810f1e5:	8b 70 04             	mov    0x4(%eax),%esi
 810f1e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810f1eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f1ef:	8b 45 10             	mov    0x10(%ebp),%eax
 810f1f2:	89 04 24             	mov    %eax,(%esp)
 810f1f5:	e8 aa b6 fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810f1fa:	8b 18                	mov    (%eax),%ebx
 810f1fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f1ff:	89 04 24             	mov    %eax,(%esp)
 810f202:	e8 47 ca fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810f207:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 810f20b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 810f20f:	89 44 24 14          	mov    %eax,0x14(%esp)
 810f213:	c7 44 24 10 d4 c2 b4 	movl   $0x8b4c2d4,0x10(%esp)
 810f21a:	08 
 810f21b:	c7 44 24 0c 40 06 00 	movl   $0x640,0xc(%esp)
 810f222:	00 
 810f223:	c7 44 24 08 00 d4 b4 	movl   $0x8b4d400,0x8(%esp)
 810f22a:	08 
 810f22b:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 810f232:	08 
 810f233:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810f23a:	e8 cb 49 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810f23f:	b8 08 00 00 00       	mov    $0x8,%eax
 810f244:	eb 1e                	jmp    810f264 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x386>
 810f246:	8b 45 10             	mov    0x10(%ebp),%eax
 810f249:	89 04 24             	mov    %eax,(%esp)
 810f24c:	e8 c3 e5 fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810f251:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810f254:	0f 97 c0             	seta   %al
 810f257:	84 c0                	test   %al,%al
 810f259:	0f 85 96 fc ff ff    	jne    810eef5 <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_+0x17>
 810f25f:	b8 00 00 00 00       	mov    $0x0,%eax
 810f264:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810f267:	83 c4 00             	add    $0x0,%esp
 810f26a:	5b                   	pop    %ebx
 810f26b:	5e                   	pop    %esi
 810f26c:	5d                   	pop    %ebp
 810f26d:	c3                   	ret

```

```c
// EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem @ 0x810eede

/* EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 local_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined1 uStack_9b;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined1 local_6a;
  undefined1 local_69 [2];
  int aiStack_67 [14];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  pair<int,int> local_28 [8];
  ulong local_20 [2];
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  local_14 = 0;
  while( true ) {
    uVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    if (uVar9 <= local_14) {
      return 0;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_14);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_69,iVar4);
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                       local_14);
    uVar7 = *(undefined4 *)(iVar4 + 4);
    puVar5 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                        local_14);
    uVar1 = *puVar5;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar6,1,uVar1,uVar7,3,1);
    if (cVar2 == '\0') break;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_14);
    std::make_pair<unsigned_long&,int&>(local_20,aiStack_67);
    std::pair<int,int>::pair<unsigned_long,int>(local_28,(pair *)local_20);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_28);
    local_14 = local_14 + 1;
  }
  iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3);
  if (iVar4 != 0) {
    local_10 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar3 = __gnu_cxx::operator!=(local_2c,local_18);
      if (!bVar3) break;
      Inven_Item::Inven_Item((Inven_Item *)&local_a6);
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_2c);
      uStack_a4 = (undefined2)*puVar5;
      uStack_a2 = (undefined2)((uint)*puVar5 >> 0x10);
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_2c);
      uVar7 = *(undefined4 *)(iVar4 + 4);
      uStack_9f = uVar7;
      iVar4 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_a6,uVar7);
      uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar7,CONCAT22(uStack_a4,local_a6),
                            CONCAT13((undefined1)uStack_9f,CONCAT12(uStack_a0,uStack_a2)),
                            CONCAT13(uStack_9b,uStack_9f._1_3_),local_9a,local_96,local_92,local_8e,
                            local_8a,local_86,local_82,local_7e,local_7a,local_76,local_72,local_6e,
                            local_6a,0xd,1,1);
      uVar7 = uStack_9f;
      if (local_10 < 0) {
        uVar1 = CONCAT22(uStack_a2,uStack_a4);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"EventClassify.cpp",
                   "int EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, IntPairVector&, IntPairVector&)"
                   ,0x63d,
                   "CExchangeRandomItemReward::deleteUsedMaterialItem, return_item failed , User ch =%d , %d %d"
                   ,uVar8,uVar1,uVar7);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_2c);
    }
  }
  iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                     local_14);
  uVar7 = *(undefined4 *)(iVar4 + 4);
  puVar5 = (undefined4 *)
           std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                      local_14);
  uVar1 = *puVar5;
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  LogManager::logFormat
            (1,"EventClassify.cpp",
             "int EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, IntPairVector&, IntPairVector&)"
             ,0x640,"CExchangeRandomItemReward::deleteUsedMaterialItem failed , User ch =%d , %d %d"
             ,uVar8,uVar1,uVar7);
  return 8;
}

```

---

## getRewardItem

```asm
// === 0810ee40 EventClassify::CExchangeRandomItemReward::getRewardItem  [0x0810ee40-0x810eedd] ===
 810ee40:	55                   	push   %ebp
 810ee41:	89 e5                	mov    %esp,%ebp
 810ee43:	83 ec 28             	sub    $0x28,%esp
 810ee46:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810ee4d:	8b 45 08             	mov    0x8(%ebp),%eax
 810ee50:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ee53:	8d 50 18             	lea    0x18(%eax),%edx
 810ee56:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ee59:	89 54 24 04          	mov    %edx,0x4(%esp)
 810ee5d:	89 04 24             	mov    %eax,(%esp)
 810ee60:	e8 e3 f3 f7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 810ee65:	83 ec 04             	sub    $0x4,%esp
 810ee68:	eb 3c                	jmp    810eea6 <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE+0x66>
 810ee6a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ee6d:	89 04 24             	mov    %eax,(%esp)
 810ee70:	e8 57 f9 f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 810ee75:	8b 00                	mov    (%eax),%eax
 810ee77:	8b 55 0c             	mov    0xc(%ebp),%edx
 810ee7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 810ee7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ee82:	8d 45 ef             	lea    -0x11(%ebp),%eax
 810ee85:	89 04 24             	mov    %eax,(%esp)
 810ee88:	e8 cd ed ff ff       	call   810dc5a <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE>
 810ee8d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810ee90:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810ee94:	74 05                	je     810ee9b <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE+0x5b>
 810ee96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810ee99:	eb 41                	jmp    810eedc <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE+0x9c>
 810ee9b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ee9e:	89 04 24             	mov    %eax,(%esp)
 810eea1:	e8 e6 ba fd ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 810eea6:	8b 45 08             	mov    0x8(%ebp),%eax
 810eea9:	8b 40 1c             	mov    0x1c(%eax),%eax
 810eeac:	8d 50 18             	lea    0x18(%eax),%edx
 810eeaf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810eeb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 810eeb6:	89 04 24             	mov    %eax,(%esp)
 810eeb9:	e8 ae f3 f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 810eebe:	83 ec 04             	sub    $0x4,%esp
 810eec1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810eec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 810eec8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810eecb:	89 04 24             	mov    %eax,(%esp)
 810eece:	e8 8f b5 fd ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 810eed3:	84 c0                	test   %al,%al
 810eed5:	75 93                	jne    810ee6a <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE+0x2a>
 810eed7:	b8 00 00 00 00       	mov    $0x0,%eax
 810eedc:	c9                   	leave
 810eedd:	c3                   	ret

```

```c
// EventClassify::CExchangeRandomItemReward::getRewardItem @ 0x810ee40

/* EventClassify::CExchangeRandomItemReward::getRewardItem(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

int __thiscall
EventClassify::CExchangeRandomItemReward::getRewardItem
          (CExchangeRandomItemReward *this,vector *param_1)

{
  bool bVar1;
  uint *puVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [7];
  CEventActionMng local_15;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                     operator*(local_1c);
    local_10 = CEventActionMng::getResultItemFromLottery(&local_15,*puVar2,param_1);
    if (local_10 != 0) break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_1c);
  }
  return local_10;
}

```

---

## sendRandomItemReward

```asm
// === 0810f26e EventClassify::CExchangeRandomItemReward::sendRandomItemReward  [0x0810f26e-0x810f379] ===
 810f26e:	55                   	push   %ebp
 810f26f:	89 e5                	mov    %esp,%ebp
 810f271:	53                   	push   %ebx
 810f272:	83 ec 24             	sub    $0x24,%esp
 810f275:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810f27c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f27f:	8b 55 10             	mov    0x10(%ebp),%edx
 810f282:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f286:	89 04 24             	mov    %eax,(%esp)
 810f289:	e8 24 e3 fc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 810f28e:	83 ec 04             	sub    $0x4,%esp
 810f291:	e9 82 00 00 00       	jmp    810f318 <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh+0xaa>
 810f296:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f299:	89 04 24             	mov    %eax,(%esp)
 810f29c:	e8 4d 2a 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f2a1:	8b 58 04             	mov    0x4(%eax),%ebx
 810f2a4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f2a7:	89 04 24             	mov    %eax,(%esp)
 810f2aa:	e8 3f 2a 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f2af:	8b 00                	mov    (%eax),%eax
 810f2b1:	8b 55 08             	mov    0x8(%ebp),%edx
 810f2b4:	8b 52 1c             	mov    0x1c(%edx),%edx
 810f2b7:	83 c2 24             	add    $0x24,%edx
 810f2ba:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810f2be:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f2c2:	89 14 24             	mov    %edx,(%esp)
 810f2c5:	e8 c2 cd fd ff       	call   80ec08c <_ZN15Action_SendMail8set_itemEii>
 810f2ca:	8b 45 08             	mov    0x8(%ebp),%eax
 810f2cd:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f2d0:	83 c0 24             	add    $0x24,%eax
 810f2d3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810f2da:	00 
 810f2db:	89 44 24 08          	mov    %eax,0x8(%esp)
 810f2df:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f2e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f2e6:	8d 45 ef             	lea    -0x11(%ebp),%eax
 810f2e9:	89 04 24             	mov    %eax,(%esp)
 810f2ec:	e8 41 dc ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810f2f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f2f4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f2f8:	74 05                	je     810f2ff <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh+0x91>
 810f2fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f2fd:	eb 76                	jmp    810f375 <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh+0x107>
 810f2ff:	8b 45 18             	mov    0x18(%ebp),%eax
 810f302:	0f b6 00             	movzbl (%eax),%eax
 810f305:	8d 50 01             	lea    0x1(%eax),%edx
 810f308:	8b 45 18             	mov    0x18(%ebp),%eax
 810f30b:	88 10                	mov    %dl,(%eax)
 810f30d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f310:	89 04 24             	mov    %eax,(%esp)
 810f313:	e8 f2 1e 00 00       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 810f318:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f31b:	8b 55 10             	mov    0x10(%ebp),%edx
 810f31e:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f322:	89 04 24             	mov    %eax,(%esp)
 810f325:	e8 ac e2 fc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 810f32a:	83 ec 04             	sub    $0x4,%esp
 810f32d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f330:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f334:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f337:	89 04 24             	mov    %eax,(%esp)
 810f33a:	e8 9f 1e 00 00       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 810f33f:	84 c0                	test   %al,%al
 810f341:	0f 85 4f ff ff ff    	jne    810f296 <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh+0x28>
 810f347:	8b 45 08             	mov    0x8(%ebp),%eax
 810f34a:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f34d:	83 c0 5c             	add    $0x5c,%eax
 810f350:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f354:	8b 45 14             	mov    0x14(%ebp),%eax
 810f357:	89 04 24             	mov    %eax,(%esp)
 810f35a:	e8 73 dc fb ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 810f35f:	8b 45 08             	mov    0x8(%ebp),%eax
 810f362:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f365:	83 c0 5c             	add    $0x5c,%eax
 810f368:	89 04 24             	mov    %eax,(%esp)
 810f36b:	e8 fe 77 f8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 810f370:	b8 00 00 00 00       	mov    $0x0,%eax
 810f375:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810f378:	c9                   	leave
 810f379:	c3                   	ret

```

```c
// EventClassify::CExchangeRandomItemReward::sendRandomItemReward @ 0x810f26e

/* EventClassify::CExchangeRandomItemReward::sendRandomItemReward(CUser*, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, unsigned
   char&) */

int __thiscall
EventClassify::CExchangeRandomItemReward::sendRandomItemReward
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3,
          uchar *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [7];
  CEventActionMng local_15;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)param_3,(vector *)(*(int *)(this + 0x1c) + 0x5c)
                );
      std::vector<int,std::allocator<int>>::clear
                ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x5c));
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    iVar2 = *(int *)(iVar2 + 4);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_1c);
    Action_SendMail::set_item((Action_SendMail *)(*(int *)(this + 0x1c) + 0x24),*piVar3,iVar2);
    local_10 = CEventActionMng::process_action_send_mail
                         (&local_15,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x24),true);
    if (local_10 != 0) break;
    *param_4 = *param_4 + '\x01';
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return local_10;
}

```

---

## set_event_data

```asm
// === 0810eb06 EventClassify::CExchangeRandomItemReward::set_event_data  [0x0810eb06-0x810eb2f] ===
 810eb06:	55                   	push   %ebp
 810eb07:	89 e5                	mov    %esp,%ebp
 810eb09:	83 ec 18             	sub    $0x18,%esp
 810eb0c:	8b 45 08             	mov    0x8(%ebp),%eax
 810eb0f:	8b 00                	mov    (%eax),%eax
 810eb11:	83 c0 18             	add    $0x18,%eax
 810eb14:	8b 08                	mov    (%eax),%ecx
 810eb16:	8b 45 08             	mov    0x8(%ebp),%eax
 810eb19:	8b 55 0c             	mov    0xc(%ebp),%edx
 810eb1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 810eb20:	89 04 24             	mov    %eax,(%esp)
 810eb23:	ff d1                	call   *%ecx
 810eb25:	8b 55 10             	mov    0x10(%ebp),%edx
 810eb28:	8b 45 08             	mov    0x8(%ebp),%eax
 810eb2b:	89 50 1c             	mov    %edx,0x1c(%eax)
 810eb2e:	c9                   	leave
 810eb2f:	c3                   	ret

```

```c
// EventClassify::CExchangeRandomItemReward::set_event_data @ 0x810eb06

/* EventClassify::CExchangeRandomItemReward::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CExchangeRandomItemReward::set_event_data
          (CExchangeRandomItemReward *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

---

## verifyMaterialItemByRule

```asm
// === 0810eb30 EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule  [0x0810eb30-0x810ee3f] ===
 810eb30:	55                   	push   %ebp
 810eb31:	89 e5                	mov    %esp,%ebp
 810eb33:	53                   	push   %ebx
 810eb34:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 810eb3a:	8b 45 08             	mov    0x8(%ebp),%eax
 810eb3d:	8b 40 1c             	mov    0x1c(%eax),%eax
 810eb40:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 810eb44:	84 c0                	test   %al,%al
 810eb46:	0f 84 74 01 00 00    	je     810ecc0 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x190>
 810eb4c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 810eb53:	e9 14 01 00 00       	jmp    810ec6c <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x13c>
 810eb58:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 810eb5f:	e9 eb 00 00 00       	jmp    810ec4f <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x11f>
 810eb64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810eb67:	89 44 24 04          	mov    %eax,0x4(%esp)
 810eb6b:	8b 45 10             	mov    0x10(%ebp),%eax
 810eb6e:	89 04 24             	mov    %eax,(%esp)
 810eb71:	e8 66 f6 f7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810eb76:	8b 18                	mov    (%eax),%ebx
 810eb78:	8b 45 0c             	mov    0xc(%ebp),%eax
 810eb7b:	89 04 24             	mov    %eax,(%esp)
 810eb7e:	e8 fb b6 fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810eb83:	8d 55 9b             	lea    -0x65(%ebp),%edx
 810eb86:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 810eb8a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810eb91:	00 
 810eb92:	89 44 24 04          	mov    %eax,0x4(%esp)
 810eb96:	89 14 24             	mov    %edx,(%esp)
 810eb99:	e8 7a cd 3e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 810eb9e:	83 ec 04             	sub    $0x4,%esp
 810eba1:	8b 45 08             	mov    0x8(%ebp),%eax
 810eba4:	8b 40 1c             	mov    0x1c(%eax),%eax
 810eba7:	8d 50 0c             	lea    0xc(%eax),%edx
 810ebaa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810ebad:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ebb1:	89 14 24             	mov    %edx,(%esp)
 810ebb4:	e8 eb bc fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ebb9:	8b 00                	mov    (%eax),%eax
 810ebbb:	89 c2                	mov    %eax,%edx
 810ebbd:	8b 45 9d             	mov    -0x63(%ebp),%eax
 810ebc0:	39 c2                	cmp    %eax,%edx
 810ebc2:	75 29                	jne    810ebed <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0xbd>
 810ebc4:	8b 45 08             	mov    0x8(%ebp),%eax
 810ebc7:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ebca:	8d 50 0c             	lea    0xc(%eax),%edx
 810ebcd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810ebd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ebd4:	89 14 24             	mov    %edx,(%esp)
 810ebd7:	e8 c8 bc fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ebdc:	8b 50 04             	mov    0x4(%eax),%edx
 810ebdf:	8b 45 a2             	mov    -0x5e(%ebp),%eax
 810ebe2:	39 c2                	cmp    %eax,%edx
 810ebe4:	7f 07                	jg     810ebed <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0xbd>
 810ebe6:	b8 01 00 00 00       	mov    $0x1,%eax
 810ebeb:	eb 05                	jmp    810ebf2 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0xc2>
 810ebed:	b8 00 00 00 00       	mov    $0x0,%eax
 810ebf2:	84 c0                	test   %al,%al
 810ebf4:	74 55                	je     810ec4b <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x11b>
 810ebf6:	8b 45 08             	mov    0x8(%ebp),%eax
 810ebf9:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ebfc:	8d 50 0c             	lea    0xc(%eax),%edx
 810ebff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810ec02:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ec06:	89 14 24             	mov    %edx,(%esp)
 810ec09:	e8 96 bc fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ec0e:	8d 58 04             	lea    0x4(%eax),%ebx
 810ec11:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810ec14:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ec18:	8b 45 10             	mov    0x10(%ebp),%eax
 810ec1b:	89 04 24             	mov    %eax,(%esp)
 810ec1e:	e8 b9 f5 f7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810ec23:	8d 55 d8             	lea    -0x28(%ebp),%edx
 810ec26:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810ec2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ec2e:	89 14 24             	mov    %edx,(%esp)
 810ec31:	e8 7c 26 00 00       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 810ec36:	83 ec 04             	sub    $0x4,%esp
 810ec39:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810ec3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ec40:	8b 45 14             	mov    0x14(%ebp),%eax
 810ec43:	89 04 24             	mov    %eax,(%esp)
 810ec46:	e8 bb e9 fc ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 810ec4b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 810ec4f:	8b 45 10             	mov    0x10(%ebp),%eax
 810ec52:	89 04 24             	mov    %eax,(%esp)
 810ec55:	e8 66 f5 f7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810ec5a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 810ec5d:	0f 97 c0             	seta   %al
 810ec60:	84 c0                	test   %al,%al
 810ec62:	0f 85 fc fe ff ff    	jne    810eb64 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x34>
 810ec68:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 810ec6c:	8b 45 08             	mov    0x8(%ebp),%eax
 810ec6f:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ec72:	83 c0 0c             	add    $0xc,%eax
 810ec75:	89 04 24             	mov    %eax,(%esp)
 810ec78:	e8 97 eb fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810ec7d:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 810ec80:	0f 97 c0             	seta   %al
 810ec83:	84 c0                	test   %al,%al
 810ec85:	0f 85 cd fe ff ff    	jne    810eb58 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x28>
 810ec8b:	8b 45 14             	mov    0x14(%ebp),%eax
 810ec8e:	89 04 24             	mov    %eax,(%esp)
 810ec91:	e8 7e eb fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810ec96:	89 c3                	mov    %eax,%ebx
 810ec98:	8b 45 08             	mov    0x8(%ebp),%eax
 810ec9b:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ec9e:	83 c0 0c             	add    $0xc,%eax
 810eca1:	89 04 24             	mov    %eax,(%esp)
 810eca4:	e8 6b eb fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810eca9:	39 c3                	cmp    %eax,%ebx
 810ecab:	0f 95 c0             	setne  %al
 810ecae:	84 c0                	test   %al,%al
 810ecb0:	0f 84 69 01 00 00    	je     810ee1f <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x2ef>
 810ecb6:	b8 16 00 00 00       	mov    $0x16,%eax
 810ecbb:	e9 7a 01 00 00       	jmp    810ee3a <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x30a>
 810ecc0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810ecc7:	e9 31 01 00 00       	jmp    810edfd <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x2cd>
 810eccc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810ecd3:	e9 f6 00 00 00       	jmp    810edce <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x29e>
 810ecd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810ecdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ecdf:	8b 45 10             	mov    0x10(%ebp),%eax
 810ece2:	89 04 24             	mov    %eax,(%esp)
 810ece5:	e8 f2 f4 f7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810ecea:	8b 18                	mov    (%eax),%ebx
 810ecec:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ecef:	89 04 24             	mov    %eax,(%esp)
 810ecf2:	e8 87 b5 fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810ecf7:	8d 95 5e ff ff ff    	lea    -0xa2(%ebp),%edx
 810ecfd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 810ed01:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810ed08:	00 
 810ed09:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ed0d:	89 14 24             	mov    %edx,(%esp)
 810ed10:	e8 03 cc 3e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 810ed15:	83 ec 04             	sub    $0x4,%esp
 810ed18:	8b 45 08             	mov    0x8(%ebp),%eax
 810ed1b:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ed1e:	8d 50 0c             	lea    0xc(%eax),%edx
 810ed21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ed24:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ed28:	89 14 24             	mov    %edx,(%esp)
 810ed2b:	e8 74 bb fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ed30:	8b 00                	mov    (%eax),%eax
 810ed32:	89 c2                	mov    %eax,%edx
 810ed34:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 810ed3a:	39 c2                	cmp    %eax,%edx
 810ed3c:	75 2c                	jne    810ed6a <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x23a>
 810ed3e:	8b 45 08             	mov    0x8(%ebp),%eax
 810ed41:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ed44:	8d 50 0c             	lea    0xc(%eax),%edx
 810ed47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ed4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ed4e:	89 14 24             	mov    %edx,(%esp)
 810ed51:	e8 4e bb fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ed56:	8b 50 04             	mov    0x4(%eax),%edx
 810ed59:	8b 85 65 ff ff ff    	mov    -0x9b(%ebp),%eax
 810ed5f:	39 c2                	cmp    %eax,%edx
 810ed61:	7f 07                	jg     810ed6a <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x23a>
 810ed63:	b8 01 00 00 00       	mov    $0x1,%eax
 810ed68:	eb 05                	jmp    810ed6f <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x23f>
 810ed6a:	b8 00 00 00 00       	mov    $0x0,%eax
 810ed6f:	84 c0                	test   %al,%al
 810ed71:	74 57                	je     810edca <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x29a>
 810ed73:	8b 45 08             	mov    0x8(%ebp),%eax
 810ed76:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ed79:	8d 50 0c             	lea    0xc(%eax),%edx
 810ed7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810ed7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ed83:	89 14 24             	mov    %edx,(%esp)
 810ed86:	e8 19 bb fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810ed8b:	8d 58 04             	lea    0x4(%eax),%ebx
 810ed8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810ed91:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ed95:	8b 45 10             	mov    0x10(%ebp),%eax
 810ed98:	89 04 24             	mov    %eax,(%esp)
 810ed9b:	e8 3c f4 f7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810eda0:	8d 55 e0             	lea    -0x20(%ebp),%edx
 810eda3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810eda7:	89 44 24 04          	mov    %eax,0x4(%esp)
 810edab:	89 14 24             	mov    %edx,(%esp)
 810edae:	e8 ff 24 00 00       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 810edb3:	83 ec 04             	sub    $0x4,%esp
 810edb6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810edb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810edbd:	8b 45 14             	mov    0x14(%ebp),%eax
 810edc0:	89 04 24             	mov    %eax,(%esp)
 810edc3:	e8 3e e8 fc ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 810edc8:	eb 1d                	jmp    810ede7 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x2b7>
 810edca:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810edce:	8b 45 10             	mov    0x10(%ebp),%eax
 810edd1:	89 04 24             	mov    %eax,(%esp)
 810edd4:	e8 e7 f3 f7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810edd9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 810eddc:	0f 97 c0             	seta   %al
 810eddf:	84 c0                	test   %al,%al
 810ede1:	0f 85 f1 fe ff ff    	jne    810ecd8 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x1a8>
 810ede7:	8b 45 14             	mov    0x14(%ebp),%eax
 810edea:	89 04 24             	mov    %eax,(%esp)
 810eded:	e8 a8 23 00 00       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 810edf2:	83 f0 01             	xor    $0x1,%eax
 810edf5:	84 c0                	test   %al,%al
 810edf7:	75 25                	jne    810ee1e <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x2ee>
 810edf9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 810edfd:	8b 45 08             	mov    0x8(%ebp),%eax
 810ee00:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ee03:	83 c0 0c             	add    $0xc,%eax
 810ee06:	89 04 24             	mov    %eax,(%esp)
 810ee09:	e8 06 ea fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810ee0e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810ee11:	0f 97 c0             	seta   %al
 810ee14:	84 c0                	test   %al,%al
 810ee16:	0f 85 b0 fe ff ff    	jne    810eccc <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x19c>
 810ee1c:	eb 01                	jmp    810ee1f <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x2ef>
 810ee1e:	90                   	nop
 810ee1f:	8b 45 14             	mov    0x14(%ebp),%eax
 810ee22:	89 04 24             	mov    %eax,(%esp)
 810ee25:	e8 70 23 00 00       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 810ee2a:	84 c0                	test   %al,%al
 810ee2c:	74 07                	je     810ee35 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x305>
 810ee2e:	b8 16 00 00 00       	mov    $0x16,%eax
 810ee33:	eb 05                	jmp    810ee3a <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE+0x30a>
 810ee35:	b8 00 00 00 00       	mov    $0x0,%eax
 810ee3a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810ee3d:	c9                   	leave
 810ee3e:	c3                   	ret
 810ee3f:	90                   	nop

```

```c
// EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule @ 0x810eb30

/* EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule(CUser*, std::vector<int,
   std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
    */

undefined4 __thiscall
EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_a6 [2];
  int local_a4;
  int local_9f;
  undefined1 local_69 [2];
  int local_67;
  int local_62;
  int local_2c [2];
  int local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*(char *)(*(int *)(this + 0x1c) + 8) == '\0') {
    local_14 = 0;
    while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (*(int *)(this + 0x1c) + 0xc)), local_14 < uVar4) {
      local_10 = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_10 < uVar4) {
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)param_2,local_10);
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_a6,iVar5);
        piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (*(int *)(this + 0x1c) + 0xc),local_14);
        if ((*piVar3 == local_a4) &&
           (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (*(int *)(this + 0x1c) + 0xc),local_14),
           *(int *)(iVar5 + 4) <= local_9f)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0xc),local_14);
          piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)param_2,local_10);
          std::make_pair<int&,int&>(local_24,piVar3);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_24);
          break;
        }
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 != '\x01') break;
      local_14 = local_14 + 1;
    }
  }
  else {
    local_1c = 0;
    while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (*(int *)(this + 0x1c) + 0xc)), local_1c < uVar4) {
      local_18 = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_18 < uVar4) {
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)param_2,local_18);
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_69,iVar5);
        piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (*(int *)(this + 0x1c) + 0xc),local_1c);
        if ((*piVar3 == local_67) &&
           (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (*(int *)(this + 0x1c) + 0xc),local_1c),
           *(int *)(iVar5 + 4) <= local_62)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0xc),local_1c);
          piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)param_2,local_18);
          std::make_pair<int&,int&>(local_2c,piVar3);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_2c);
        }
        local_18 = local_18 + 1;
      }
      local_1c = local_1c + 1;
    }
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3);
    iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (*(int *)(this + 0x1c) + 0xc));
    if (iVar5 != iVar6) {
      return 0x16;
    }
  }
  cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x16;
  }
  return uVar7;
}

```

