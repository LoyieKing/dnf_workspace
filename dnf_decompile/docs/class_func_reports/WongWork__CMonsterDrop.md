# WongWork__CMonsterDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## _generateMonseterSpecificItem

```asm
// === 08536fce WongWork::CMonsterDrop::_generateMonseterSpecificItem  [0x08536fce-0x853706f] ===
 8536fce:	55                   	push   %ebp
 8536fcf:	89 e5                	mov    %esp,%ebp
 8536fd1:	83 ec 78             	sub    $0x78,%esp
 8536fd4:	8b 45 10             	mov    0x10(%ebp),%eax
 8536fd7:	88 45 a4             	mov    %al,-0x5c(%ebp)
 8536fda:	c7 45 f4 fe ff ff ff 	movl   $0xfffffffe,-0xc(%ebp)
 8536fe1:	8b 45 08             	mov    0x8(%ebp),%eax
 8536fe4:	83 c0 08             	add    $0x8,%eax
 8536fe7:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8536fee:	00 
 8536fef:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8536ff6:	00 
 8536ff7:	89 04 24             	mov    %eax,(%esp)
 8536ffa:	e8 a5 c4 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8536fff:	0f be 55 a4          	movsbl -0x5c(%ebp),%edx
 8537003:	89 44 24 08          	mov    %eax,0x8(%esp)
 8537007:	89 54 24 04          	mov    %edx,0x4(%esp)
 853700b:	8b 45 0c             	mov    0xc(%ebp),%eax
 853700e:	89 04 24             	mov    %eax,(%esp)
 8537011:	e8 ce 87 e1 ff       	call   834f7e4 <_ZNK8CMonster15drop_item_indexEji>
 8537016:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8537019:	83 7d f4 fe          	cmpl   $0xfffffffe,-0xc(%ebp)
 853701d:	0f 95 c0             	setne  %al
 8537020:	84 c0                	test   %al,%al
 8537022:	74 4a                	je     853706e <_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE+0xa0>
 8537024:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8537027:	89 04 24             	mov    %eax,(%esp)
 853702a:	e8 25 48 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 853702f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8537032:	89 45 b9             	mov    %eax,-0x47(%ebp)
 8537035:	e8 61 51 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853703a:	8b 40 0c             	mov    0xc(%eax),%eax
 853703d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8537044:	00 
 8537045:	8d 55 b7             	lea    -0x49(%ebp),%edx
 8537048:	89 54 24 08          	mov    %edx,0x8(%esp)
 853704c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8537053:	00 
 8537054:	89 04 24             	mov    %eax,(%esp)
 8537057:	e8 5c af fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 853705c:	8b 45 14             	mov    0x14(%ebp),%eax
 853705f:	8d 55 b7             	lea    -0x49(%ebp),%edx
 8537062:	89 54 24 04          	mov    %edx,0x4(%esp)
 8537066:	89 04 24             	mov    %eax,(%esp)
 8537069:	e8 f4 01 d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 853706e:	c9                   	leave
 853706f:	c3                   	ret

```

```c
// WongWork::CMonsterDrop::_generateMonseterSpecificItem @ 0x8536fce

/* WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::_generateMonseterSpecificItem
          (CMonsterDrop *this,CMonster *param_1,char param_2,stGenerateResult_t *param_3)

{
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  int local_10;
  
  local_10 = 0xfffffffe;
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
  local_10 = CMonster::drop_item_index(param_1,(int)param_2,iVar1);
  if (local_10 != -2) {
    Inven_Item::Inven_Item(local_4d);
    local_4b = local_10;
    iVar1 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,local_4d,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_3,local_4d);
  }
  return;
}

```

---

## _generateRandomItem

```asm
// === 08535ed2 WongWork::CMonsterDrop::_generateRandomItem  [0x08535ed2-0x8536881] ===
 8535ed2:	55                   	push   %ebp
 8535ed3:	89 e5                	mov    %esp,%ebp
 8535ed5:	57                   	push   %edi
 8535ed6:	56                   	push   %esi
 8535ed7:	53                   	push   %ebx
 8535ed8:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 8535ede:	8b 75 0c             	mov    0xc(%ebp),%esi
 8535ee1:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8535ee4:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8535ee7:	8b 55 18             	mov    0x18(%ebp),%edx
 8535eea:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8535eed:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
 8535ef3:	89 f0                	mov    %esi,%eax
 8535ef5:	88 85 04 fe ff ff    	mov    %al,-0x1fc(%ebp)
 8535efb:	88 9d 00 fe ff ff    	mov    %bl,-0x200(%ebp)
 8535f01:	88 8d fc fd ff ff    	mov    %cl,-0x204(%ebp)
 8535f07:	88 95 f8 fd ff ff    	mov    %dl,-0x208(%ebp)
 8535f0d:	0f b6 8d e4 fd ff ff 	movzbl -0x21c(%ebp),%ecx
 8535f14:	88 8d f4 fd ff ff    	mov    %cl,-0x20c(%ebp)
 8535f1a:	0f b6 85 fc fd ff ff 	movzbl -0x204(%ebp),%eax
 8535f21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8535f28:	89 04 24             	mov    %eax,(%esp)
 8535f2b:	e8 be 13 00 00       	call   85372ee <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi>
 8535f30:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8535f33:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 8535f37:	0f 88 36 09 00 00    	js     8536873 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x9a1>
 8535f3d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8535f40:	8b 55 08             	mov    0x8(%ebp),%edx
 8535f43:	83 c2 24             	add    $0x24,%edx
 8535f46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535f4a:	89 14 24             	mov    %edx,(%esp)
 8535f4d:	e8 b2 59 00 00       	call   853b904 <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8535f52:	8b 10                	mov    (%eax),%edx
 8535f54:	89 95 70 ff ff ff    	mov    %edx,-0x90(%ebp)
 8535f5a:	8b 50 04             	mov    0x4(%eax),%edx
 8535f5d:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 8535f63:	8b 50 08             	mov    0x8(%eax),%edx
 8535f66:	89 95 78 ff ff ff    	mov    %edx,-0x88(%ebp)
 8535f6c:	8b 50 0c             	mov    0xc(%eax),%edx
 8535f6f:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8535f75:	8b 50 10             	mov    0x10(%eax),%edx
 8535f78:	89 55 80             	mov    %edx,-0x80(%ebp)
 8535f7b:	8b 50 14             	mov    0x14(%eax),%edx
 8535f7e:	89 55 84             	mov    %edx,-0x7c(%ebp)
 8535f81:	8b 40 18             	mov    0x18(%eax),%eax
 8535f84:	89 45 88             	mov    %eax,-0x78(%ebp)
 8535f87:	80 ad f4 fd ff ff 01 	subb   $0x1,-0x20c(%ebp)
 8535f8e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8535f94:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 8535f9a:	db 85 ec fd ff ff    	fildl  -0x214(%ebp)
 8535fa0:	0f b6 95 f8 fd ff ff 	movzbl -0x208(%ebp),%edx
 8535fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8535faa:	83 c2 3c             	add    $0x3c,%edx
 8535fad:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8535fb1:	de c9                	fmulp  %st,%st(1)
 8535fb3:	0f be 95 00 fe ff ff 	movsbl -0x200(%ebp),%edx
 8535fba:	8b 45 08             	mov    0x8(%ebp),%eax
 8535fbd:	83 c2 54             	add    $0x54,%edx
 8535fc0:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8535fc4:	de c9                	fmulp  %st,%st(1)
 8535fc6:	0f b6 95 f4 fd ff ff 	movzbl -0x20c(%ebp),%edx
 8535fcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8535fd0:	83 c2 28             	add    $0x28,%edx
 8535fd3:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8535fd7:	de c9                	fmulp  %st,%st(1)
 8535fd9:	d9 bd f2 fd ff ff    	fnstcw -0x20e(%ebp)
 8535fdf:	0f b7 85 f2 fd ff ff 	movzwl -0x20e(%ebp),%eax
 8535fe6:	b4 0c                	mov    $0xc,%ah
 8535fe8:	66 89 85 f0 fd ff ff 	mov    %ax,-0x210(%ebp)
 8535fef:	d9 ad f0 fd ff ff    	fldcw  -0x210(%ebp)
 8535ff5:	db 5d a0             	fistpl -0x60(%ebp)
 8535ff8:	d9 ad f2 fd ff ff    	fldcw  -0x20e(%ebp)
 8535ffe:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8536005:	8d 45 20             	lea    0x20(%ebp),%eax
 8536008:	89 44 24 04          	mov    %eax,0x4(%esp)
 853600c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 853600f:	89 04 24             	mov    %eax,(%esp)
 8536012:	e8 01 82 b5 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8536017:	c7 45 90 64 00 00 00 	movl   $0x64,-0x70(%ebp)
 853601e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536022:	8d 45 90             	lea    -0x70(%ebp),%eax
 8536025:	89 04 24             	mov    %eax,(%esp)
 8536028:	e8 e1 98 ba ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 853602d:	8b 00                	mov    (%eax),%eax
 853602f:	89 45 20             	mov    %eax,0x20(%ebp)
 8536032:	8b 45 20             	mov    0x20(%ebp),%eax
 8536035:	83 f8 32             	cmp    $0x32,%eax
 8536038:	7e 54                	jle    853608e <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x1bc>
 853603a:	8b 45 20             	mov    0x20(%ebp),%eax
 853603d:	83 e8 32             	sub    $0x32,%eax
 8536040:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 8536046:	db 85 ec fd ff ff    	fildl  -0x214(%ebp)
 853604c:	d9 05 d0 a6 c9 08    	flds   0x8c9a6d0
 8536052:	de c9                	fmulp  %st,%st(1)
 8536054:	d9 05 d4 a6 c9 08    	flds   0x8c9a6d4
 853605a:	de c1                	faddp  %st,%st(1)
 853605c:	d9 5d a4             	fstps  -0x5c(%ebp)
 853605f:	db 45 a0             	fildl  -0x60(%ebp)
 8536062:	d9 e8                	fld1
 8536064:	d8 65 a4             	fsubs  -0x5c(%ebp)
 8536067:	de c9                	fmulp  %st,%st(1)
 8536069:	d9 bd f2 fd ff ff    	fnstcw -0x20e(%ebp)
 853606f:	0f b7 85 f2 fd ff ff 	movzwl -0x20e(%ebp),%eax
 8536076:	b4 0c                	mov    $0xc,%ah
 8536078:	66 89 85 f0 fd ff ff 	mov    %ax,-0x210(%ebp)
 853607f:	d9 ad f0 fd ff ff    	fldcw  -0x210(%ebp)
 8536085:	db 5d a0             	fistpl -0x60(%ebp)
 8536088:	d9 ad f2 fd ff ff    	fldcw  -0x20e(%ebp)
 853608e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8536091:	89 c1                	mov    %eax,%ecx
 8536093:	0f af 4d 24          	imul   0x24(%ebp),%ecx
 8536097:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 853609c:	89 c8                	mov    %ecx,%eax
 853609e:	f7 ea                	imul   %edx
 85360a0:	c1 fa 05             	sar    $0x5,%edx
 85360a3:	89 c8                	mov    %ecx,%eax
 85360a5:	c1 f8 1f             	sar    $0x1f,%eax
 85360a8:	89 d1                	mov    %edx,%ecx
 85360aa:	29 c1                	sub    %eax,%ecx
 85360ac:	89 c8                	mov    %ecx,%eax
 85360ae:	89 45 a0             	mov    %eax,-0x60(%ebp)
 85360b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85360b4:	83 c0 08             	add    $0x8,%eax
 85360b7:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 85360be:	00 
 85360bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85360c6:	00 
 85360c7:	89 04 24             	mov    %eax,(%esp)
 85360ca:	e8 d5 d3 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85360cf:	3b 45 a0             	cmp    -0x60(%ebp),%eax
 85360d2:	0f 9c c0             	setl   %al
 85360d5:	84 c0                	test   %al,%al
 85360d7:	0f 84 cb 01 00 00    	je     85362a8 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3d6>
 85360dd:	0f b6 95 04 fe ff ff 	movzbl -0x1fc(%ebp),%edx
 85360e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85360e7:	8b 40 04             	mov    0x4(%eax),%eax
 85360ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 85360ee:	89 04 24             	mov    %eax,(%esp)
 85360f1:	e8 2e d3 ff ff       	call   8533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>
 85360f6:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85360f9:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85360fc:	8b 18                	mov    (%eax),%ebx
 85360fe:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8536101:	8b 30                	mov    (%eax),%esi
 8536103:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8536106:	8b 40 04             	mov    0x4(%eax),%eax
 8536109:	8b 55 a8             	mov    -0x58(%ebp),%edx
 853610c:	8b 52 04             	mov    0x4(%edx),%edx
 853610f:	f7 da                	neg    %edx
 8536111:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536115:	89 14 24             	mov    %edx,(%esp)
 8536118:	e8 73 3c 00 00       	call   8539d90 <_Z14GetRandomRangeii>
 853611d:	89 f1                	mov    %esi,%ecx
 853611f:	0f af c8             	imul   %eax,%ecx
 8536122:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8536127:	89 c8                	mov    %ecx,%eax
 8536129:	f7 ea                	imul   %edx
 853612b:	c1 fa 05             	sar    $0x5,%edx
 853612e:	89 c8                	mov    %ecx,%eax
 8536130:	c1 f8 1f             	sar    $0x1f,%eax
 8536133:	89 d1                	mov    %edx,%ecx
 8536135:	29 c1                	sub    %eax,%ecx
 8536137:	89 c8                	mov    %ecx,%eax
 8536139:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 853613c:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8536142:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 8536148:	89 04 24             	mov    %eax,(%esp)
 853614b:	e8 04 57 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8536150:	c6 85 14 fe ff ff 02 	movb   $0x2,-0x1ec(%ebp)
 8536157:	c7 85 15 fe ff ff 00 	movl   $0x0,-0x1eb(%ebp)
 853615e:	00 00 00 
 8536161:	c7 45 94 01 00 00 00 	movl   $0x1,-0x6c(%ebp)
 8536168:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 853616e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536172:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8536175:	89 04 24             	mov    %eax,(%esp)
 8536178:	e8 9b 80 b5 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 853617d:	8b 00                	mov    (%eax),%eax
 853617f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536183:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 8536189:	89 04 24             	mov    %eax,(%esp)
 853618c:	e8 f3 56 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8536191:	80 bd 00 fe ff ff 03 	cmpb   $0x3,-0x200(%ebp)
 8536198:	0f 85 f5 00 00 00    	jne    8536293 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3c1>
 853619e:	66 c7 85 6a ff ff ff 	movw   $0x0,-0x96(%ebp)
 85361a5:	00 00 
 85361a7:	66 c7 85 68 ff ff ff 	movw   $0x0,-0x98(%ebp)
 85361ae:	00 00 
 85361b0:	0f b6 85 f4 fd ff ff 	movzbl -0x20c(%ebp),%eax
 85361b7:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 85361bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85361c1:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 85361c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85361cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85361cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85361d2:	89 04 24             	mov    %eax,(%esp)
 85361d5:	e8 ee fb ff ff       	call   8535dc8 <_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_>
 85361da:	84 c0                	test   %al,%al
 85361dc:	0f 84 9a 00 00 00    	je     853627c <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3aa>
 85361e2:	0f b7 85 68 ff ff ff 	movzwl -0x98(%ebp),%eax
 85361e9:	0f b7 d0             	movzwl %ax,%edx
 85361ec:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 85361f2:	89 d1                	mov    %edx,%ecx
 85361f4:	0f af c8             	imul   %eax,%ecx
 85361f7:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 85361fc:	89 c8                	mov    %ecx,%eax
 85361fe:	f7 ea                	imul   %edx
 8536200:	c1 fa 05             	sar    $0x5,%edx
 8536203:	89 c8                	mov    %ecx,%eax
 8536205:	c1 f8 1f             	sar    $0x1f,%eax
 8536208:	89 d1                	mov    %edx,%ecx
 853620a:	29 c1                	sub    %eax,%ecx
 853620c:	89 c8                	mov    %ecx,%eax
 853620e:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8536214:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
 853621b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8536221:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536225:	8d 45 98             	lea    -0x68(%ebp),%eax
 8536228:	89 04 24             	mov    %eax,(%esp)
 853622b:	e8 e8 7f b5 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8536230:	8b 00                	mov    (%eax),%eax
 8536232:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536236:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 853623c:	89 04 24             	mov    %eax,(%esp)
 853623f:	e8 40 56 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8536244:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 853624b:	eb 19                	jmp    8536266 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x394>
 853624d:	8b 45 28             	mov    0x28(%ebp),%eax
 8536250:	8d 95 13 fe ff ff    	lea    -0x1ed(%ebp),%edx
 8536256:	89 54 24 04          	mov    %edx,0x4(%esp)
 853625a:	89 04 24             	mov    %eax,(%esp)
 853625d:	e8 00 10 d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8536262:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 8536266:	0f b7 85 6a ff ff ff 	movzwl -0x96(%ebp),%eax
 853626d:	0f b7 c0             	movzwl %ax,%eax
 8536270:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 8536273:	0f 9f c0             	setg   %al
 8536276:	84 c0                	test   %al,%al
 8536278:	75 d3                	jne    853624d <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x37b>
 853627a:	eb 2c                	jmp    85362a8 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3d6>
 853627c:	8b 45 28             	mov    0x28(%ebp),%eax
 853627f:	8d 95 13 fe ff ff    	lea    -0x1ed(%ebp),%edx
 8536285:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536289:	89 04 24             	mov    %eax,(%esp)
 853628c:	e8 d1 0f d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8536291:	eb 15                	jmp    85362a8 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3d6>
 8536293:	8b 45 28             	mov    0x28(%ebp),%eax
 8536296:	8d 95 13 fe ff ff    	lea    -0x1ed(%ebp),%edx
 853629c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85362a0:	89 04 24             	mov    %eax,(%esp)
 85362a3:	e8 ba 0f d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 85362a8:	8b 45 2c             	mov    0x2c(%ebp),%eax
 85362ab:	0f b6 00             	movzbl (%eax),%eax
 85362ae:	84 c0                	test   %al,%al
 85362b0:	0f 85 c0 05 00 00    	jne    8536876 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x9a4>
 85362b6:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 85362bd:	e9 a0 05 00 00       	jmp    8536862 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x990>
 85362c2:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 85362c7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85362ca:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 85362d0:	b9 00 00 00 00       	mov    $0x0,%ecx
 85362d5:	b8 18 00 00 00       	mov    $0x18,%eax
 85362da:	89 c3                	mov    %eax,%ebx
 85362dc:	83 e3 fc             	and    $0xfffffffc,%ebx
 85362df:	b8 00 00 00 00       	mov    $0x0,%eax
 85362e4:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 85362e7:	83 c0 04             	add    $0x4,%eax
 85362ea:	39 d8                	cmp    %ebx,%eax
 85362ec:	72 f6                	jb     85362e4 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x412>
 85362ee:	01 c2                	add    %eax,%edx
 85362f0:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85362f3:	89 d0                	mov    %edx,%eax
 85362f5:	01 c0                	add    %eax,%eax
 85362f7:	01 d0                	add    %edx,%eax
 85362f9:	c1 e0 03             	shl    $0x3,%eax
 85362fc:	83 c0 30             	add    $0x30,%eax
 85362ff:	03 45 08             	add    0x8(%ebp),%eax
 8536302:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8536305:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 8536309:	0f 85 93 00 00 00    	jne    85363a2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x4d0>
 853630f:	e8 87 5e b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536314:	89 04 24             	mov    %eax,(%esp)
 8536317:	e8 e0 2f fb ff       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 853631c:	8b 55 9c             	mov    -0x64(%ebp),%edx
 853631f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536323:	89 04 24             	mov    %eax,(%esp)
 8536326:	e8 bd 27 dc ff       	call   82f8ae8 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi>
 853632b:	d9 5d b4             	fstps  -0x4c(%ebp)
 853632e:	d9 ee                	fldz
 8536330:	dd 5d d8             	fstpl  -0x28(%ebp)
 8536333:	d9 45 b4             	flds   -0x4c(%ebp)
 8536336:	d9 ee                	fldz
 8536338:	d9 c9                	fxch   %st(1)
 853633a:	da e9                	fucompp
 853633c:	df e0                	fnstsw %ax
 853633e:	9e                   	sahf
 853633f:	7a 02                	jp     8536343 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x471>
 8536341:	74 0c                	je     853634f <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x47d>
 8536343:	d9 e8                	fld1
 8536345:	d8 75 b4             	fdivs  -0x4c(%ebp)
 8536348:	d9 e8                	fld1
 853634a:	de e9                	fsubrp %st,%st(1)
 853634c:	dd 5d d8             	fstpl  -0x28(%ebp)
 853634f:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8536352:	89 d0                	mov    %edx,%eax
 8536354:	01 c0                	add    %eax,%eax
 8536356:	01 d0                	add    %edx,%eax
 8536358:	c1 e0 03             	shl    $0x3,%eax
 853635b:	83 c0 30             	add    $0x30,%eax
 853635e:	03 45 08             	add    0x8(%ebp),%eax
 8536361:	89 c3                	mov    %eax,%ebx
 8536363:	e8 33 5e b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536368:	89 04 24             	mov    %eax,(%esp)
 853636b:	e8 8c 2f fb ff       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 8536370:	dd 45 d8             	fldl   -0x28(%ebp)
 8536373:	dd 5c 24 10          	fstpl  0x10(%esp)
 8536377:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 853637e:	00 
 853637f:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 8536385:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536389:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 853638d:	89 04 24             	mov    %eax,(%esp)
 8536390:	e8 f7 28 dc ff       	call   82f8c8c <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id>
 8536395:	84 c0                	test   %al,%al
 8536397:	74 09                	je     85363a2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x4d0>
 8536399:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 853639f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85363a2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85363a5:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 85363ac:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 85363b2:	db 85 ec fd ff ff    	fildl  -0x214(%ebp)
 85363b8:	d9 5d bc             	fstps  -0x44(%ebp)
 85363bb:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 85363bf:	75 1d                	jne    85363de <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x50c>
 85363c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85363c4:	8b 80 80 93 25 00    	mov    0x259380(%eax),%eax
 85363ca:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 85363d0:	db 85 ec fd ff ff    	fildl  -0x214(%ebp)
 85363d6:	d9 45 bc             	flds   -0x44(%ebp)
 85363d9:	de c9                	fmulp  %st,%st(1)
 85363db:	d9 5d bc             	fstps  -0x44(%ebp)
 85363de:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 85363e2:	75 11                	jne    85363f5 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x523>
 85363e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85363e7:	d9 80 84 93 25 00    	flds   0x259384(%eax)
 85363ed:	d9 45 bc             	flds   -0x44(%ebp)
 85363f0:	de c9                	fmulp  %st,%st(1)
 85363f2:	d9 5d bc             	fstps  -0x44(%ebp)
 85363f5:	d9 45 bc             	flds   -0x44(%ebp)
 85363f8:	d8 4d b4             	fmuls  -0x4c(%ebp)
 85363fb:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85363fe:	0f b6 9d f8 fd ff ff 	movzbl -0x208(%ebp),%ebx
 8536405:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8536408:	89 d0                	mov    %edx,%eax
 853640a:	c1 e0 02             	shl    $0x2,%eax
 853640d:	01 d0                	add    %edx,%eax
 853640f:	01 d8                	add    %ebx,%eax
 8536411:	83 c0 3c             	add    $0x3c,%eax
 8536414:	d9 44 81 08          	flds   0x8(%ecx,%eax,4)
 8536418:	de c9                	fmulp  %st,%st(1)
 853641a:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 853641d:	0f be 95 00 fe ff ff 	movsbl -0x200(%ebp),%edx
 8536424:	8b 45 08             	mov    0x8(%ebp),%eax
 8536427:	c1 e1 02             	shl    $0x2,%ecx
 853642a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 853642d:	83 c2 54             	add    $0x54,%edx
 8536430:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8536434:	de c9                	fmulp  %st,%st(1)
 8536436:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8536439:	0f b6 95 f4 fd ff ff 	movzbl -0x20c(%ebp),%edx
 8536440:	8b 45 08             	mov    0x8(%ebp),%eax
 8536443:	c1 e1 02             	shl    $0x2,%ecx
 8536446:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8536449:	83 c2 28             	add    $0x28,%edx
 853644c:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8536450:	de c9                	fmulp  %st,%st(1)
 8536452:	d9 bd f2 fd ff ff    	fnstcw -0x20e(%ebp)
 8536458:	0f b7 85 f2 fd ff ff 	movzwl -0x20e(%ebp),%eax
 853645f:	b4 0c                	mov    $0xc,%ah
 8536461:	66 89 85 f0 fd ff ff 	mov    %ax,-0x210(%ebp)
 8536468:	d9 ad f0 fd ff ff    	fldcw  -0x210(%ebp)
 853646e:	db 5d c0             	fistpl -0x40(%ebp)
 8536471:	d9 ad f2 fd ff ff    	fldcw  -0x20e(%ebp)
 8536477:	8b 45 c0             	mov    -0x40(%ebp),%eax
 853647a:	89 c1                	mov    %eax,%ecx
 853647c:	0f af 4d 24          	imul   0x24(%ebp),%ecx
 8536480:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8536485:	89 c8                	mov    %ecx,%eax
 8536487:	f7 ea                	imul   %edx
 8536489:	c1 fa 05             	sar    $0x5,%edx
 853648c:	89 c8                	mov    %ecx,%eax
 853648e:	c1 f8 1f             	sar    $0x1f,%eax
 8536491:	89 d1                	mov    %edx,%ecx
 8536493:	29 c1                	sub    %eax,%ecx
 8536495:	89 c8                	mov    %ecx,%eax
 8536497:	89 45 c0             	mov    %eax,-0x40(%ebp)
 853649a:	8b 45 08             	mov    0x8(%ebp),%eax
 853649d:	83 c0 08             	add    $0x8,%eax
 85364a0:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 85364a7:	00 
 85364a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85364af:	00 
 85364b0:	89 04 24             	mov    %eax,(%esp)
 85364b3:	e8 ec cf ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85364b8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85364bb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85364be:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 85364c1:	0f 8c 90 03 00 00    	jl     8536857 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x985>
 85364c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85364ca:	83 c0 08             	add    $0x8,%eax
 85364cd:	c7 44 24 08 40 42 0f 	movl   $0xf4240,0x8(%esp)
 85364d4:	00 
 85364d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85364dc:	00 
 85364dd:	89 04 24             	mov    %eax,(%esp)
 85364e0:	e8 bf cf ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85364e5:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85364e8:	8b 45 28             	mov    0x28(%ebp),%eax
 85364eb:	8d 50 0c             	lea    0xc(%eax),%edx
 85364ee:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85364f1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85364f5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85364f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85364fc:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85364ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536503:	89 14 24             	mov    %edx,(%esp)
 8536506:	e8 d9 a6 01 00       	call   8550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>
 853650b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 853650e:	8b 75 b0             	mov    -0x50(%ebp),%esi
 8536511:	8b 45 08             	mov    0x8(%ebp),%eax
 8536514:	89 04 24             	mov    %eax,(%esp)
 8536517:	e8 fe 3e 00 00       	call   853a41a <_ZN8WongWork14CItemGenerator16getGeneratorTypeEv>
 853651c:	89 c3                	mov    %eax,%ebx
 853651e:	e8 78 5c b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536523:	89 04 24             	mov    %eax,(%esp)
 8536526:	e8 bf 41 c1 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 853652b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853652e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8536532:	89 74 24 08          	mov    %esi,0x8(%esp)
 8536536:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 853653a:	89 04 24             	mov    %eax,(%esp)
 853653d:	e8 84 dd ff ff       	call   85342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>
 8536542:	0f b6 95 04 fe ff ff 	movzbl -0x1fc(%ebp),%edx
 8536549:	8b 45 b0             	mov    -0x50(%ebp),%eax
 853654c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853654f:	81 c1 40 03 00 00    	add    $0x340,%ecx
 8536555:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8536559:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853655c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536560:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536564:	89 0c 24             	mov    %ecx,(%esp)
 8536567:	e8 38 e4 ff ff       	call   85349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>
 853656c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 853656f:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 8536573:	0f 84 e1 02 00 00    	je     853685a <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x988>
 8536579:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 853657d:	0f 85 ef 00 00 00    	jne    8536672 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x7a0>
 8536583:	8d 95 13 fe ff ff    	lea    -0x1ed(%ebp),%edx
 8536589:	bb 00 01 00 00       	mov    $0x100,%ebx
 853658e:	b8 00 00 00 00       	mov    $0x0,%eax
 8536593:	89 d1                	mov    %edx,%ecx
 8536595:	83 e1 01             	and    $0x1,%ecx
 8536598:	85 c9                	test   %ecx,%ecx
 853659a:	74 08                	je     85365a4 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x6d2>
 853659c:	88 02                	mov    %al,(%edx)
 853659e:	83 c2 01             	add    $0x1,%edx
 85365a1:	83 eb 01             	sub    $0x1,%ebx
 85365a4:	89 d1                	mov    %edx,%ecx
 85365a6:	83 e1 02             	and    $0x2,%ecx
 85365a9:	85 c9                	test   %ecx,%ecx
 85365ab:	74 09                	je     85365b6 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x6e4>
 85365ad:	66 89 02             	mov    %ax,(%edx)
 85365b0:	83 c2 02             	add    $0x2,%edx
 85365b3:	83 eb 02             	sub    $0x2,%ebx
 85365b6:	89 d9                	mov    %ebx,%ecx
 85365b8:	c1 e9 02             	shr    $0x2,%ecx
 85365bb:	89 d7                	mov    %edx,%edi
 85365bd:	f3 ab                	rep stos %eax,%es:(%edi)
 85365bf:	89 fa                	mov    %edi,%edx
 85365c1:	89 d9                	mov    %ebx,%ecx
 85365c3:	83 e1 02             	and    $0x2,%ecx
 85365c6:	85 c9                	test   %ecx,%ecx
 85365c8:	74 06                	je     85365d0 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x6fe>
 85365ca:	66 89 02             	mov    %ax,(%edx)
 85365cd:	83 c2 02             	add    $0x2,%edx
 85365d0:	89 d9                	mov    %ebx,%ecx
 85365d2:	83 e1 01             	and    $0x1,%ecx
 85365d5:	85 c9                	test   %ecx,%ecx
 85365d7:	74 05                	je     85365de <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x70c>
 85365d9:	88 02                	mov    %al,(%edx)
 85365db:	83 c2 01             	add    $0x1,%edx
 85365de:	8b 45 20             	mov    0x20(%ebp),%eax
 85365e1:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
 85365e7:	0f b6 bd f4 fd ff ff 	movzbl -0x20c(%ebp),%edi
 85365ee:	0f b6 b5 f8 fd ff ff 	movzbl -0x208(%ebp),%esi
 85365f5:	0f b6 9d fc fd ff ff 	movzbl -0x204(%ebp),%ebx
 85365fc:	0f be 8d 00 fe ff ff 	movsbl -0x200(%ebp),%ecx
 8536603:	0f b6 95 04 fe ff ff 	movzbl -0x1fc(%ebp),%edx
 853660a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 853660d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8536611:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8536614:	89 44 24 28          	mov    %eax,0x28(%esp)
 8536618:	8b 45 24             	mov    0x24(%ebp),%eax
 853661b:	89 44 24 24          	mov    %eax,0x24(%esp)
 853661f:	8b 85 e8 fd ff ff    	mov    -0x218(%ebp),%eax
 8536625:	89 44 24 20          	mov    %eax,0x20(%esp)
 8536629:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 853662d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8536631:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8536635:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8536639:	89 54 24 0c          	mov    %edx,0xc(%esp)
 853663d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8536640:	89 44 24 08          	mov    %eax,0x8(%esp)
 8536644:	c7 44 24 04 10 96 c9 	movl   $0x8c99610,0x4(%esp)
 853664b:	08 
 853664c:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 8536652:	89 04 24             	mov    %eax,(%esp)
 8536655:	e8 e6 7d b4 ff       	call   807e440 <sprintf@plt>
 853665a:	8b 45 28             	mov    0x28(%ebp),%eax
 853665d:	8d 50 0c             	lea    0xc(%eax),%edx
 8536660:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 8536666:	89 44 24 04          	mov    %eax,0x4(%esp)
 853666a:	89 14 24             	mov    %edx,(%esp)
 853666d:	e8 7e a8 01 00       	call   8550ef0 <_ZN10CLuckPoint16sendItemDropRateEPKc>
 8536672:	e8 24 5b b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536677:	8b 40 0c             	mov    0xc(%eax),%eax
 853667a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 853667d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536681:	89 04 24             	mov    %eax,(%esp)
 8536684:	e8 01 b8 fd ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8536689:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 853668c:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8536690:	0f 84 c7 01 00 00    	je     853685d <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x98b>
 8536696:	8d 85 13 ff ff ff    	lea    -0xed(%ebp),%eax
 853669c:	89 04 24             	mov    %eax,(%esp)
 853669f:	e8 b0 51 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85366a4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85366a7:	89 85 15 ff ff ff    	mov    %eax,-0xeb(%ebp)
 85366ad:	e8 e9 5a b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85366b2:	8b 40 0c             	mov    0xc(%eax),%eax
 85366b5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85366bc:	00 
 85366bd:	8d 95 13 ff ff ff    	lea    -0xed(%ebp),%edx
 85366c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85366c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85366ce:	00 
 85366cf:	89 04 24             	mov    %eax,(%esp)
 85366d2:	e8 e1 b8 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 85366d7:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 85366db:	0f 85 10 01 00 00    	jne    85367f1 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x91f>
 85366e1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85366e4:	8b 00                	mov    (%eax),%eax
 85366e6:	83 c0 14             	add    $0x14,%eax
 85366e9:	8b 10                	mov    (%eax),%edx
 85366eb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85366ee:	89 04 24             	mov    %eax,(%esp)
 85366f1:	ff d2                	call   *%edx
 85366f3:	83 f0 01             	xor    $0x1,%eax
 85366f6:	84 c0                	test   %al,%al
 85366f8:	74 20                	je     853671a <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x848>
 85366fa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85366fd:	8b 00                	mov    (%eax),%eax
 85366ff:	83 c0 10             	add    $0x10,%eax
 8536702:	8b 10                	mov    (%eax),%edx
 8536704:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8536707:	89 04 24             	mov    %eax,(%esp)
 853670a:	ff d2                	call   *%edx
 853670c:	83 f0 01             	xor    $0x1,%eax
 853670f:	84 c0                	test   %al,%al
 8536711:	74 07                	je     853671a <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x848>
 8536713:	b8 01 00 00 00       	mov    $0x1,%eax
 8536718:	eb 05                	jmp    853671f <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x84d>
 853671a:	b8 00 00 00 00       	mov    $0x0,%eax
 853671f:	84 c0                	test   %al,%al
 8536721:	74 3a                	je     853675d <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x88b>
 8536723:	0f b6 9d 04 fe ff ff 	movzbl -0x1fc(%ebp),%ebx
 853672a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853672d:	89 04 24             	mov    %eax,(%esp)
 8536730:	e8 1f a5 bd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8536735:	89 da                	mov    %ebx,%edx
 8536737:	29 c2                	sub    %eax,%edx
 8536739:	8b 45 08             	mov    0x8(%ebp),%eax
 853673c:	83 c0 10             	add    $0x10,%eax
 853673f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536743:	89 04 24             	mov    %eax,(%esp)
 8536746:	e8 e7 d1 ff ff       	call   8533932 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi>
 853674b:	89 44 24 04          	mov    %eax,0x4(%esp)
 853674f:	8d 85 13 ff ff ff    	lea    -0xed(%ebp),%eax
 8536755:	89 04 24             	mov    %eax,(%esp)
 8536758:	e8 27 51 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 853675d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8536760:	8b 00                	mov    (%eax),%eax
 8536762:	83 c0 5c             	add    $0x5c,%eax
 8536765:	8b 10                	mov    (%eax),%edx
 8536767:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853676a:	89 04 24             	mov    %eax,(%esp)
 853676d:	ff d2                	call   *%edx
 853676f:	84 c0                	test   %al,%al
 8536771:	74 1f                	je     8536792 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x8c0>
 8536773:	8d 85 13 ff ff ff    	lea    -0xed(%ebp),%eax
 8536779:	83 c0 11             	add    $0x11,%eax
 853677c:	89 04 24             	mov    %eax,(%esp)
 853677f:	e8 48 a0 c1 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8536784:	83 f0 01             	xor    $0x1,%eax
 8536787:	84 c0                	test   %al,%al
 8536789:	74 07                	je     8536792 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x8c0>
 853678b:	b8 01 00 00 00       	mov    $0x1,%eax
 8536790:	eb 05                	jmp    8536797 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x8c5>
 8536792:	b8 00 00 00 00       	mov    $0x0,%eax
 8536797:	84 c0                	test   %al,%al
 8536799:	74 56                	je     85367f1 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x91f>
 853679b:	0f b6 9d 04 fe ff ff 	movzbl -0x1fc(%ebp),%ebx
 85367a2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85367a5:	89 04 24             	mov    %eax,(%esp)
 85367a8:	e8 a7 a4 bd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 85367ad:	29 c3                	sub    %eax,%ebx
 85367af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85367b2:	89 04 24             	mov    %eax,(%esp)
 85367b5:	e8 1c ab bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85367ba:	8b 55 08             	mov    0x8(%ebp),%edx
 85367bd:	83 c2 10             	add    $0x10,%edx
 85367c0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85367c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85367c8:	89 14 24             	mov    %edx,(%esp)
 85367cb:	e8 a6 ce ff ff       	call   8533676 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi>
 85367d0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85367d3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85367d7:	7e 18                	jle    85367f1 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x91f>
 85367d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85367dc:	0f b6 c0             	movzbl %al,%eax
 85367df:	89 44 24 04          	mov    %eax,0x4(%esp)
 85367e3:	8d 85 13 ff ff ff    	lea    -0xed(%ebp),%eax
 85367e9:	89 04 24             	mov    %eax,(%esp)
 85367ec:	e8 0b a8 bb ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 85367f1:	8b 45 28             	mov    0x28(%ebp),%eax
 85367f4:	89 04 24             	mov    %eax,(%esp)
 85367f7:	e8 62 3e c4 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 85367fc:	89 c6                	mov    %eax,%esi
 85367fe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8536801:	89 04 24             	mov    %eax,(%esp)
 8536804:	e8 4b a4 bd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8536809:	89 c3                	mov    %eax,%ebx
 853680b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853680e:	89 04 24             	mov    %eax,(%esp)
 8536811:	e8 c0 aa bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8536816:	89 c2                	mov    %eax,%edx
 8536818:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 853681f:	0f b6 c0             	movzbl %al,%eax
 8536822:	8b 4d 28             	mov    0x28(%ebp),%ecx
 8536825:	83 c1 0c             	add    $0xc,%ecx
 8536828:	89 74 24 10          	mov    %esi,0x10(%esp)
 853682c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8536830:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536834:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536838:	89 0c 24             	mov    %ecx,(%esp)
 853683b:	e8 d4 a2 01 00       	call   8550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>
 8536840:	8b 45 28             	mov    0x28(%ebp),%eax
 8536843:	8d 95 13 ff ff ff    	lea    -0xed(%ebp),%edx
 8536849:	89 54 24 04          	mov    %edx,0x4(%esp)
 853684d:	89 04 24             	mov    %eax,(%esp)
 8536850:	e8 0d 0a d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8536855:	eb 07                	jmp    853685e <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x98c>
 8536857:	90                   	nop
 8536858:	eb 04                	jmp    853685e <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x98c>
 853685a:	90                   	nop
 853685b:	eb 01                	jmp    853685e <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x98c>
 853685d:	90                   	nop
 853685e:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 8536862:	83 7d b0 04          	cmpl   $0x4,-0x50(%ebp)
 8536866:	0f 9e c0             	setle  %al
 8536869:	84 c0                	test   %al,%al
 853686b:	0f 85 51 fa ff ff    	jne    85362c2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x3f0>
 8536871:	eb 04                	jmp    8536877 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x9a5>
 8536873:	90                   	nop
 8536874:	eb 01                	jmp    8536877 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb+0x9a5>
 8536876:	90                   	nop
 8536877:	81 c4 4c 02 00 00    	add    $0x24c,%esp
 853687d:	5b                   	pop    %ebx
 853687e:	5e                   	pop    %esi
 853687f:	5f                   	pop    %edi
 8536880:	5d                   	pop    %ebp
 8536881:	c3                   	ret

```

```c
// WongWork::CMonsterDrop::_generateRandomItem @ 0x8535ed2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char,
   unsigned char, int, int, WongWork::stGenerateResult_t&, bool&) */

void __thiscall
WongWork::CMonsterDrop::_generateRandomItem
          (CMonsterDrop *this,uchar param_1,char param_2,uchar param_3,uchar param_4,uchar param_5,
          int param_6,int param_7,stGenerateResult_t *param_8,bool *param_9)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CDataManager *pCVar8;
  CAutoMarketConditionsControl *this_00;
  undefined4 uVar9;
  CItemGeneratorMgr *pCVar10;
  int iVar11;
  uint uVar12;
  Inven_Item *pIVar13;
  bool bVar14;
  byte bVar15;
  longdouble lVar16;
  Inven_Item local_1f1;
  Inven_Item local_1f0;
  undefined4 uStack_1ef;
  Inven_Item local_f1;
  byte local_f0;
  int local_ef;
  stAmplifyOption_t asStack_e0 [44];
  CMonsterDrop local_b4 [24];
  ushort local_9c;
  ushort local_9a;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c [4];
  undefined4 local_7c;
  int local_78 [5];
  int local_64;
  float local_60;
  int *local_5c;
  int local_58;
  int local_54;
  float local_50;
  CMonsterDrop *local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  CItem *local_30;
  double local_2c;
  int local_20;
  
  bVar15 = 0;
  local_78[4] = _getGenItemProbIdx(this,(uint)param_3);
  if (-1 < local_78[4]) {
    puVar3 = (undefined4 *)
             std::
             vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                           *)(this + 0x24),local_78[4]);
    local_94 = *puVar3;
    local_90 = puVar3[1];
    local_8c[0] = puVar3[2];
    local_8c[1] = puVar3[3];
    local_8c[2] = puVar3[4];
    local_8c[3] = puVar3[5];
    local_7c = puVar3[6];
    bVar1 = param_5 - 1;
    local_64 = (int)ROUND(*(float *)(this + (bVar1 + 0x28) * 4 + 8) *
                          *(float *)(this + (param_2 + 0x54) * 4 + 0xc) *
                          *(float *)(this + (param_4 + 0x3c) * 4 + 8) * (float)local_8c[0]);
    local_78[0] = 0;
    piVar4 = std::max<int>(local_78,&param_6);
    local_78[1] = 100;
    piVar4 = std::min<int>(local_78 + 1,piVar4);
    param_6 = *piVar4;
    if (0x32 < param_6) {
      local_60 = _DAT_08c9a6d4 + _DAT_08c9a6d0 * (float)(param_6 + -0x32);
      local_64 = (int)ROUND((1.0 - local_60) * (float)local_64);
    }
    local_64 = (local_64 * param_7) / 100;
    iVar5 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
    if (iVar5 < local_64) {
      local_5c = (int *)CGeneratorCommonData::getGoldGenTable
                                  (*(CGeneratorCommonData **)(this + 4),param_1);
      iVar5 = *local_5c;
      iVar11 = *local_5c;
      iVar6 = GetRandomRange(-local_5c[1],local_5c[1]);
      local_98 = iVar5 + (iVar11 * iVar6) / 100;
      Inven_Item::Inven_Item(&local_1f1);
      local_1f0 = (Inven_Item)0x2;
      uStack_1ef = 0;
      local_78[2] = 1;
      piVar4 = std::max<int>(local_78 + 2,&local_98);
      Inven_Item::set_add_info(&local_1f1,*piVar4);
      if (param_2 == '\x03') {
        local_9a = 0;
        local_9c = 0;
        cVar2 = _getBossGoldDrop(this,bVar1,&local_9a,&local_9c);
        if (cVar2 == '\0') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
        }
        else {
          local_98 = (int)((uint)local_9c * local_98) / 100;
          local_78[3] = 1;
          piVar4 = std::max<int>(local_78 + 3,&local_98);
          Inven_Item::set_add_info(&local_1f1,*piVar4);
          for (local_58 = 0; local_58 < (int)(uint)local_9a; local_58 = local_58 + 1) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
          }
        }
      }
      else {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
      }
    }
    if (*param_9 == false) {
      for (local_54 = 1; local_54 < 5; local_54 = local_54 + 1) {
        local_50 = 1.0;
        uVar7 = 0;
        do {
          *(undefined4 *)(local_b4 + uVar7) = 0;
          uVar7 = uVar7 + 4;
        } while (uVar7 < 0x18);
        local_4c = this + local_54 * 0x18 + 0x30;
        if (local_54 == 2) {
          pCVar8 = (CDataManager *)G_CDataManager();
          this_00 = (CAutoMarketConditionsControl *)
                    CDataManager::GetAutoMarketContitionsControl(pCVar8);
          lVar16 = (longdouble)CAutoMarketConditionsControl::GetItemDropRate(this_00,local_78[4]);
          local_50 = (float)lVar16;
          local_2c = 0.0;
          if (local_50 != 0.0) {
            local_2c = (double)(1.0 / local_50 - 1.0);
          }
          iVar5 = local_54 * 0x18;
          pCVar8 = (CDataManager *)G_CDataManager();
          piVar4 = (int *)CDataManager::GetAutoMarketContitionsControl(pCVar8);
          cVar2 = CAutoMarketConditionsControl::ChangeItemRarity
                            (piVar4,(int *)(this + iVar5 + 0x30),(int)local_b4,
                             (double)CONCAT44(SUB84(local_2c,0),6));
          if (cVar2 != '\0') {
            local_4c = local_b4;
          }
        }
        local_48 = (float)local_8c[local_54];
        if (local_54 == 2) {
          local_48 = local_48 * (float)*(int *)(this + 0x259380) * *(float *)(this + 0x259384);
        }
        local_44 = ((int)ROUND(*(float *)(this + (local_54 * 4 + (uint)bVar1 + 0x28) * 4 + 8) *
                               *(float *)(this + (local_54 * 4 + (int)param_2 + 0x54) * 4 + 0xc) *
                               *(float *)(this + (local_54 * 5 + (uint)param_4 + 0x3c) * 4 + 8) *
                               local_48 * local_50) * param_7) / 100;
        local_40 = CGenerateRandomNumber::generateNumber
                             ((CGenerateRandomNumber *)(this + 8),0,10000);
        if (local_40 <= local_44) {
          local_3c = CGenerateRandomNumber::generateNumber
                               ((CGenerateRandomNumber *)(this + 8),1,1000000);
          local_38 = CLuckPoint::GetItemRarity
                               ((CLuckPoint *)(param_8 + 0xc),(int *)local_4c,local_3c,local_54);
          iVar5 = local_54;
          uVar9 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
          pCVar8 = (CDataManager *)G_CDataManager();
          pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar8);
          CItemGeneratorMgr::onTryGenerateRandomItem(pCVar10,uVar9,iVar5,local_38);
          local_34 = CItemGenRateTable::chooseItem
                               ((CItemGenRateTable *)(this + 0x340),local_54,local_38,param_1);
          if (local_34 != -1) {
            if (local_54 == 2) {
              pIVar13 = &local_1f1;
              uVar7 = 0x100;
              bVar14 = ((uint)pIVar13 & 1) != 0;
              if (bVar14) {
                local_1f1 = (Inven_Item)0x0;
                pIVar13 = &local_1f0;
                uVar7 = 0xff;
              }
              if (((uint)pIVar13 & 2) != 0) {
                *(undefined2 *)pIVar13 = 0;
                pIVar13 = pIVar13 + 2;
                uVar7 = uVar7 - 2;
              }
              for (uVar12 = uVar7 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pIVar13 = 0;
                pIVar13 = pIVar13 + ((uint)bVar15 * -2 + 1) * 4;
              }
              if ((uVar7 & 2) != 0) {
                *(undefined2 *)pIVar13 = 0;
                pIVar13 = pIVar13 + 2;
              }
              if (bVar14) {
                *pIVar13 = (Inven_Item)0x0;
              }
              sprintf((char *)&local_1f1,
                      "monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)"
                      ,local_34,(uint)param_1,(int)param_2,(uint)param_3,(uint)param_4,(uint)bVar1,
                      param_6,param_7,local_40,local_44);
              CLuckPoint::sendItemDropRate((CLuckPoint *)(param_8 + 0xc),(char *)&local_1f1);
            }
            iVar5 = G_CDataManager();
            local_30 = (CItem *)CItemList::find_item(*(CItemList **)(iVar5 + 0xc),local_34);
            if (local_30 != (CItem *)0x0) {
              Inven_Item::Inven_Item(&local_f1);
              local_ef = local_34;
              iVar5 = G_CDataManager();
              CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,&local_f1,1);
              if (local_54 == 2) {
                cVar2 = (**(code **)(*(int *)local_30 + 0x14))(local_30);
                if ((cVar2 == '\x01') ||
                   (cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30), cVar2 == '\x01')) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (bVar14) {
                  iVar5 = CItem::get_grade(local_30);
                  iVar5 = GenerateRandomUpgrade::generateEquipGrade
                                    ((GenerateRandomUpgrade *)(this + 0x10),(uint)param_1 - iVar5);
                  Inven_Item::set_add_info(&local_f1,iVar5);
                }
                cVar2 = (**(code **)(*(int *)local_30 + 0x5c))(local_30);
                if ((cVar2 == '\0') ||
                   (cVar2 = stAmplifyOption_t::hasAbility(asStack_e0), cVar2 == '\x01')) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (bVar14) {
                  iVar5 = CItem::get_grade(local_30);
                  uVar9 = CItem::get_rarity(local_30);
                  local_20 = GenerateRandomUpgrade::generateUpgrade
                                       ((GenerateRandomUpgrade *)(this + 0x10),uVar9,
                                        (uint)param_1 - iVar5);
                  if (0 < local_20) {
                    Inven_Item::SetUpgrade(&local_f1,(uchar)local_20);
                  }
                }
              }
              std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                        ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
              iVar5 = CItem::get_grade(local_30);
              iVar11 = CItem::get_rarity(local_30);
              CLuckPoint::UseLuckPoint((int)(param_8 + 0xc),(uint)local_f0,iVar11,iVar5);
              std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                        ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_f1);
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## _getBossGoldDrop

```asm
// === 08535dc8 WongWork::CMonsterDrop::_getBossGoldDrop  [0x08535dc8-0x8535ed1] ===
 8535dc8:	55                   	push   %ebp
 8535dc9:	89 e5                	mov    %esp,%ebp
 8535dcb:	53                   	push   %ebx
 8535dcc:	83 ec 34             	sub    $0x34,%esp
 8535dcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535dd2:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8535dd5:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
 8535dd9:	0f 87 e8 00 00 00    	ja     8535ec7 <_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_+0xff>
 8535ddf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8535de6:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8535dea:	8b 45 08             	mov    0x8(%ebp),%eax
 8535ded:	0f b7 84 90 8a 93 25 	movzwl 0x25938a(%eax,%edx,4),%eax
 8535df4:	00 
 8535df5:	0f b7 d8             	movzwl %ax,%ebx
 8535df8:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8535dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8535dff:	0f b7 84 90 8a 93 25 	movzwl 0x25938a(%eax,%edx,4),%eax
 8535e06:	00 
 8535e07:	0f b7 d0             	movzwl %ax,%edx
 8535e0a:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 8535e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e11:	81 c1 e0 64 09 00    	add    $0x964e0,%ecx
 8535e17:	0f b7 44 88 08       	movzwl 0x8(%eax,%ecx,4),%eax
 8535e1c:	0f b7 c0             	movzwl %ax,%eax
 8535e1f:	01 c2                	add    %eax,%edx
 8535e21:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e24:	83 c0 08             	add    $0x8,%eax
 8535e27:	89 54 24 08          	mov    %edx,0x8(%esp)
 8535e2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8535e32:	00 
 8535e33:	89 04 24             	mov    %eax,(%esp)
 8535e36:	e8 69 d6 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8535e3b:	39 c3                	cmp    %eax,%ebx
 8535e3d:	0f 9f c0             	setg   %al
 8535e40:	84 c0                	test   %al,%al
 8535e42:	74 07                	je     8535e4b <_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_+0x83>
 8535e44:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8535e4b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8535e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e51:	81 c2 e4 64 09 00    	add    $0x964e4,%edx
 8535e57:	0f b7 44 90 0a       	movzwl 0xa(%eax,%edx,4),%eax
 8535e5c:	0f b7 d0             	movzwl %ax,%edx
 8535e5f:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8535e62:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e65:	81 c1 e4 64 09 00    	add    $0x964e4,%ecx
 8535e6b:	0f b7 44 88 08       	movzwl 0x8(%eax,%ecx,4),%eax
 8535e70:	0f b7 c0             	movzwl %ax,%eax
 8535e73:	29 c2                	sub    %eax,%edx
 8535e75:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e78:	83 c0 08             	add    $0x8,%eax
 8535e7b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8535e7f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8535e86:	00 
 8535e87:	89 04 24             	mov    %eax,(%esp)
 8535e8a:	e8 15 d6 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8535e8f:	89 c2                	mov    %eax,%edx
 8535e91:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8535e94:	8b 45 08             	mov    0x8(%ebp),%eax
 8535e97:	81 c1 e4 64 09 00    	add    $0x964e4,%ecx
 8535e9d:	0f b7 44 88 08       	movzwl 0x8(%eax,%ecx,4),%eax
 8535ea2:	01 c2                	add    %eax,%edx
 8535ea4:	8b 45 10             	mov    0x10(%ebp),%eax
 8535ea7:	66 89 10             	mov    %dx,(%eax)
 8535eaa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8535ead:	8b 45 08             	mov    0x8(%ebp),%eax
 8535eb0:	81 c2 d0 c9 12 00    	add    $0x12c9d0,%edx
 8535eb6:	0f b7 14 50          	movzwl (%eax,%edx,2),%edx
 8535eba:	8b 45 14             	mov    0x14(%ebp),%eax
 8535ebd:	66 89 10             	mov    %dx,(%eax)
 8535ec0:	b8 01 00 00 00       	mov    $0x1,%eax
 8535ec5:	eb 05                	jmp    8535ecc <_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_+0x104>
 8535ec7:	b8 00 00 00 00       	mov    $0x0,%eax
 8535ecc:	83 c4 34             	add    $0x34,%esp
 8535ecf:	5b                   	pop    %ebx
 8535ed0:	5d                   	pop    %ebp
 8535ed1:	c3                   	ret

```

```c
// WongWork::CMonsterDrop::_getBossGoldDrop @ 0x8535dc8

/* WongWork::CMonsterDrop::_getBossGoldDrop(unsigned char, unsigned short&, unsigned short&) */

bool __thiscall
WongWork::CMonsterDrop::_getBossGoldDrop
          (CMonsterDrop *this,uchar param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint local_10;
  
  if (param_1 < 4) {
    uVar1 = *(ushort *)(this + (uint)param_1 * 4 + 0x25938a);
    iVar3 = CGenerateRandomNumber::generateNumber
                      ((CGenerateRandomNumber *)(this + 8),0,
                       (uint)*(ushort *)(this + (uint)param_1 * 4 + 0x25938a) +
                       (uint)*(ushort *)(this + (param_1 + 0x964e0) * 4 + 8));
    local_10 = (uint)(iVar3 < (int)(uint)uVar1);
    sVar2 = CGenerateRandomNumber::generateNumber
                      ((CGenerateRandomNumber *)(this + 8),0,
                       (uint)*(ushort *)(this + (local_10 + 0x964e4) * 4 + 10) -
                       (uint)*(ushort *)(this + (local_10 + 0x964e4) * 4 + 8));
    *param_2 = sVar2 + *(short *)(this + (local_10 + 0x964e4) * 4 + 8);
    *param_3 = *(ushort *)(this + (local_10 + 0x12c9d0) * 2);
  }
  return param_1 < 4;
}

```

---

## _getGenItemProbIdx

```asm
// === 085372ee WongWork::CMonsterDrop::_getGenItemProbIdx  [0x085372ee-0x853736d] ===
 85372ee:	55                   	push   %ebp
 85372ef:	89 e5                	mov    %esp,%ebp
 85372f1:	83 ec 28             	sub    $0x28,%esp
 85372f4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85372fb:	eb 31                	jmp    853732e <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x40>
 85372fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8537300:	8d 50 24             	lea    0x24(%eax),%edx
 8537303:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8537306:	89 44 24 04          	mov    %eax,0x4(%esp)
 853730a:	89 14 24             	mov    %edx,(%esp)
 853730d:	e8 f2 45 00 00       	call   853b904 <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8537312:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8537315:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8537318:	8b 00                	mov    (%eax),%eax
 853731a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 853731d:	7f 0b                	jg     853732a <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x3c>
 853731f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8537322:	8b 40 04             	mov    0x4(%eax),%eax
 8537325:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8537328:	7d 1e                	jge    8537348 <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x5a>
 853732a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 853732e:	8b 45 08             	mov    0x8(%ebp),%eax
 8537331:	83 c0 24             	add    $0x24,%eax
 8537334:	89 04 24             	mov    %eax,(%esp)
 8537337:	e8 a6 45 00 00       	call   853b8e2 <_ZNKSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 853733c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 853733f:	0f 97 c0             	seta   %al
 8537342:	84 c0                	test   %al,%al
 8537344:	75 b7                	jne    85372fd <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0xf>
 8537346:	eb 01                	jmp    8537349 <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x5b>
 8537348:	90                   	nop
 8537349:	8b 45 08             	mov    0x8(%ebp),%eax
 853734c:	83 c0 24             	add    $0x24,%eax
 853734f:	89 04 24             	mov    %eax,(%esp)
 8537352:	e8 8b 45 00 00       	call   853b8e2 <_ZNKSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 8537357:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 853735a:	0f 96 c0             	setbe  %al
 853735d:	84 c0                	test   %al,%al
 853735f:	74 07                	je     8537368 <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x7a>
 8537361:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8537366:	eb 03                	jmp    853736b <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi+0x7d>
 8537368:	8b 45 f0             	mov    -0x10(%ebp),%eax
 853736b:	c9                   	leave
 853736c:	c3                   	ret
 853736d:	90                   	nop

```

```c
// WongWork::CMonsterDrop::_getGenItemProbIdx @ 0x85372ee

/* WongWork::CMonsterDrop::_getGenItemProbIdx(int) */

uint __thiscall WongWork::CMonsterDrop::_getGenItemProbIdx(CMonsterDrop *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                  ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
          ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}

```

---

## generateRandomItem

```asm
// === 08536da8 WongWork::CMonsterDrop::generateRandomItem  [0x08536da8-0x8536fcd] ===
 8536da8:	55                   	push   %ebp
 8536da9:	89 e5                	mov    %esp,%ebp
 8536dab:	57                   	push   %edi
 8536dac:	56                   	push   %esi
 8536dad:	53                   	push   %ebx
 8536dae:	83 ec 6c             	sub    $0x6c,%esp
 8536db1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536db4:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 8536db8:	3c 03                	cmp    $0x3,%al
 8536dba:	0f 8f 05 02 00 00    	jg     8536fc5 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x21d>
 8536dc0:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 8536dc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536dc7:	0f b6 40 40          	movzbl 0x40(%eax),%eax
 8536dcb:	84 c0                	test   %al,%al
 8536dcd:	0f 85 c6 00 00 00    	jne    8536e99 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xf1>
 8536dd3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8536dda:	e9 a2 00 00 00       	jmp    8536e81 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xd9>
 8536ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536de2:	8b 30                	mov    (%eax),%esi
 8536de4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536de7:	0f b6 40 41          	movzbl 0x41(%eax),%eax
 8536deb:	0f b6 f8             	movzbl %al,%edi
 8536dee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536df1:	8b 40 3c             	mov    0x3c(%eax),%eax
 8536df4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8536df7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536dfa:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 8536dfe:	0f b6 c0             	movzbl %al,%eax
 8536e01:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8536e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536e07:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 8536e0b:	0f b6 c0             	movzbl %al,%eax
 8536e0e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8536e11:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536e14:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8536e18:	0f b6 c0             	movzbl %al,%eax
 8536e1b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8536e1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536e21:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 8536e25:	0f be d8             	movsbl %al,%ebx
 8536e28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536e2b:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 8536e2f:	0f b6 c8             	movzbl %al,%ecx
 8536e32:	8b 45 08             	mov    0x8(%ebp),%eax
 8536e35:	8d 90 6c 70 04 00    	lea    0x4706c(%eax),%edx
 8536e3b:	8d 45 df             	lea    -0x21(%ebp),%eax
 8536e3e:	89 44 24 28          	mov    %eax,0x28(%esp)
 8536e42:	8b 45 10             	mov    0x10(%ebp),%eax
 8536e45:	89 44 24 24          	mov    %eax,0x24(%esp)
 8536e49:	89 74 24 20          	mov    %esi,0x20(%esp)
 8536e4d:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8536e51:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8536e54:	89 44 24 18          	mov    %eax,0x18(%esp)
 8536e58:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8536e5b:	89 44 24 14          	mov    %eax,0x14(%esp)
 8536e5f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8536e62:	89 44 24 10          	mov    %eax,0x10(%esp)
 8536e66:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8536e69:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8536e6d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8536e71:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8536e75:	89 14 24             	mov    %edx,(%esp)
 8536e78:	e8 05 fa ff ff       	call   8536882 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb>
 8536e7d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8536e81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536e84:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 8536e88:	0f be c0             	movsbl %al,%eax
 8536e8b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8536e8e:	0f 9f c0             	setg   %al
 8536e91:	84 c0                	test   %al,%al
 8536e93:	0f 85 46 ff ff ff    	jne    8536ddf <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x37>
 8536e99:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8536ea0:	e9 06 01 00 00       	jmp    8536fab <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x203>
 8536ea5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536ea8:	83 c0 08             	add    $0x8,%eax
 8536eab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8536eb2:	00 
 8536eb3:	89 04 24             	mov    %eax,(%esp)
 8536eb6:	e8 6b 4a 00 00       	call   853b926 <_ZNKSt6vectorIbSaIbEEixEj>
 8536ebb:	84 c0                	test   %al,%al
 8536ebd:	74 14                	je     8536ed3 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x12b>
 8536ebf:	8b 45 08             	mov    0x8(%ebp),%eax
 8536ec2:	8b 90 78 93 25 00    	mov    0x259378(%eax),%edx
 8536ec8:	8b 45 08             	mov    0x8(%ebp),%eax
 8536ecb:	89 90 80 93 25 00    	mov    %edx,0x259380(%eax)
 8536ed1:	eb 2c                	jmp    8536eff <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x157>
 8536ed3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536ed6:	83 c0 08             	add    $0x8,%eax
 8536ed9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8536ee0:	00 
 8536ee1:	89 04 24             	mov    %eax,(%esp)
 8536ee4:	e8 3d 4a 00 00       	call   853b926 <_ZNKSt6vectorIbSaIbEEixEj>
 8536ee9:	84 c0                	test   %al,%al
 8536eeb:	74 12                	je     8536eff <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x157>
 8536eed:	8b 45 08             	mov    0x8(%ebp),%eax
 8536ef0:	8b 90 7c 93 25 00    	mov    0x25937c(%eax),%edx
 8536ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 8536ef9:	89 90 80 93 25 00    	mov    %edx,0x259380(%eax)
 8536eff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f02:	8b 50 1c             	mov    0x1c(%eax),%edx
 8536f05:	8b 45 08             	mov    0x8(%ebp),%eax
 8536f08:	89 90 84 93 25 00    	mov    %edx,0x259384(%eax)
 8536f0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f11:	8b 00                	mov    (%eax),%eax
 8536f13:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8536f16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f19:	8b 40 3c             	mov    0x3c(%eax),%eax
 8536f1c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8536f1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f22:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 8536f26:	0f b6 f8             	movzbl %al,%edi
 8536f29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f2c:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 8536f30:	0f b6 f0             	movzbl %al,%esi
 8536f33:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f36:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8536f3a:	0f b6 d8             	movzbl %al,%ebx
 8536f3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f40:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 8536f44:	0f be c8             	movsbl %al,%ecx
 8536f47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536f4a:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 8536f4e:	0f b6 d0             	movzbl %al,%edx
 8536f51:	8d 45 df             	lea    -0x21(%ebp),%eax
 8536f54:	89 44 24 24          	mov    %eax,0x24(%esp)
 8536f58:	8b 45 10             	mov    0x10(%ebp),%eax
 8536f5b:	89 44 24 20          	mov    %eax,0x20(%esp)
 8536f5f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8536f62:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8536f66:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8536f69:	89 44 24 18          	mov    %eax,0x18(%esp)
 8536f6d:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8536f71:	89 74 24 10          	mov    %esi,0x10(%esp)
 8536f75:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8536f79:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8536f7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536f81:	8b 45 08             	mov    0x8(%ebp),%eax
 8536f84:	89 04 24             	mov    %eax,(%esp)
 8536f87:	e8 46 ef ff ff       	call   8535ed2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb>
 8536f8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8536f8f:	c7 80 80 93 25 00 01 	movl   $0x1,0x259380(%eax)
 8536f96:	00 00 00 
 8536f99:	8b 45 08             	mov    0x8(%ebp),%eax
 8536f9c:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 8536fa1:	89 90 84 93 25 00    	mov    %edx,0x259384(%eax)
 8536fa7:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8536fab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8536fae:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 8536fb2:	0f be c0             	movsbl %al,%eax
 8536fb5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8536fb8:	0f 9f c0             	setg   %al
 8536fbb:	84 c0                	test   %al,%al
 8536fbd:	0f 85 e2 fe ff ff    	jne    8536ea5 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xfd>
 8536fc3:	eb 01                	jmp    8536fc6 <_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x21e>
 8536fc5:	90                   	nop
 8536fc6:	83 c4 6c             	add    $0x6c,%esp
 8536fc9:	5b                   	pop    %ebx
 8536fca:	5e                   	pop    %esi
 8536fcb:	5f                   	pop    %edi
 8536fcc:	5d                   	pop    %ebp
 8536fcd:	c3                   	ret

```

```c
// WongWork::CMonsterDrop::generateRandomItem @ 0x8536da8

/* WongWork::CMonsterDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::generateRandomItem
          (CMonsterDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  char cVar1;
  bool local_25;
  int local_24;
  int local_20;
  
  if ((char)param_1[0x35] < '\x04') {
    local_25 = false;
    if (param_1[0x40] == (stGenerateRefData_t)0x0) {
      for (local_24 = 0; local_24 < (char)param_1[0x39]; local_24 = local_24 + 1) {
        CSpecialMonsterDrop::_generateRandomItem
                  ((CSpecialMonsterDrop *)(this + 0x4706c),(uchar)param_1[0x34],(char)param_1[0x35],
                   (uchar)param_1[0x36],(uchar)param_1[0x37],(uchar)param_1[0x38],
                   *(int *)(param_1 + 0x3c),(uchar)param_1[0x41],*(int *)param_1,param_2,&local_25);
      }
    }
    for (local_20 = 0; local_20 < (char)param_1[0x39]; local_20 = local_20 + 1) {
      cVar1 = std::vector<bool,std::allocator<bool>>::operator[]
                        ((vector<bool,std::allocator<bool>> *)(param_1 + 8),0);
      if (cVar1 == '\0') {
        cVar1 = std::vector<bool,std::allocator<bool>>::operator[]
                          ((vector<bool,std::allocator<bool>> *)(param_1 + 8),1);
        if (cVar1 != '\0') {
          *(undefined4 *)(this + 0x259380) = *(undefined4 *)(this + 0x25937c);
        }
      }
      else {
        *(undefined4 *)(this + 0x259380) = *(undefined4 *)(this + 0x259378);
      }
      *(undefined4 *)(this + 0x259384) = *(undefined4 *)(param_1 + 0x1c);
      _generateRandomItem(this,(uchar)param_1[0x34],(char)param_1[0x35],(uchar)param_1[0x36],
                          (uchar)param_1[0x37],(uchar)param_1[0x38],*(int *)(param_1 + 0x3c),
                          *(int *)param_1,param_2,&local_25);
      *(undefined4 *)(this + 0x259380) = 1;
      *(undefined4 *)(this + 0x259384) = 0x3f800000;
    }
  }
  return;
}

```

---

## generateSpecificItem

```asm
// === 08537070 WongWork::CMonsterDrop::generateSpecificItem  [0x08537070-0x85372ed] ===
 8537070:	55                   	push   %ebp
 8537071:	89 e5                	mov    %esp,%ebp
 8537073:	53                   	push   %ebx
 8537074:	83 ec 34             	sub    $0x34,%esp
 8537077:	8b 45 0c             	mov    0xc(%ebp),%eax
 853707a:	0f b6 40 41          	movzbl 0x41(%eax),%eax
 853707e:	84 c0                	test   %al,%al
 8537080:	74 24                	je     85370a6 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x36>
 8537082:	8b 45 08             	mov    0x8(%ebp),%eax
 8537085:	8d 90 ac 38 02 00    	lea    0x238ac(%eax),%edx
 853708b:	8b 45 10             	mov    0x10(%ebp),%eax
 853708e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8537092:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537095:	89 44 24 04          	mov    %eax,0x4(%esp)
 8537099:	89 14 24             	mov    %edx,(%esp)
 853709c:	e8 67 ea ff ff       	call   8535b08 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE>
 85370a1:	e9 41 02 00 00       	jmp    85372e7 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x277>
 85370a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85370a9:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85370ad:	3c 04                	cmp    $0x4,%al
 85370af:	0f 8e b8 00 00 00    	jle    853716d <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xfd>
 85370b5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85370bc:	eb 23                	jmp    85370e1 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x71>
 85370be:	8b 45 08             	mov    0x8(%ebp),%eax
 85370c1:	8d 90 ac 38 02 00    	lea    0x238ac(%eax),%edx
 85370c7:	8b 45 10             	mov    0x10(%ebp),%eax
 85370ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 85370ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85370d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85370d5:	89 14 24             	mov    %edx,(%esp)
 85370d8:	e8 49 e6 ff ff       	call   8535726 <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE>
 85370dd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85370e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85370e4:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85370e8:	0f be c0             	movsbl %al,%eax
 85370eb:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85370ee:	0f 9f c0             	setg   %al
 85370f1:	84 c0                	test   %al,%al
 85370f3:	75 c9                	jne    85370be <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x4e>
 85370f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85370f8:	8b 40 38             	mov    0x38(%eax),%eax
 85370fb:	89 c3                	mov    %eax,%ebx
 85370fd:	e8 99 50 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8537102:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 8537108:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 853710c:	89 04 24             	mov    %eax,(%esp)
 853710f:	e8 be 38 e1 ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 8537114:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8537117:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 853711b:	0f 84 c2 01 00 00    	je     85372e3 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x273>
 8537121:	8b 45 10             	mov    0x10(%ebp),%eax
 8537124:	89 44 24 08          	mov    %eax,0x8(%esp)
 8537128:	8b 45 0c             	mov    0xc(%ebp),%eax
 853712b:	89 44 24 04          	mov    %eax,0x4(%esp)
 853712f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8537132:	89 04 24             	mov    %eax,(%esp)
 8537135:	e8 00 30 e1 ff       	call   834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 853713a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 853713d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537140:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 8537144:	0f b6 d0             	movzbl %al,%edx
 8537147:	8b 45 0c             	mov    0xc(%ebp),%eax
 853714a:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 853714e:	0f b6 c0             	movzbl %al,%eax
 8537151:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8537155:	89 54 24 08          	mov    %edx,0x8(%esp)
 8537159:	89 44 24 04          	mov    %eax,0x4(%esp)
 853715d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8537160:	89 04 24             	mov    %eax,(%esp)
 8537163:	e8 f6 2f e1 ff       	call   834a15e <_ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>
 8537168:	e9 7a 01 00 00       	jmp    85372e7 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x277>
 853716d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537170:	83 c0 34             	add    $0x34,%eax
 8537173:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8537176:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8537179:	8b 58 04             	mov    0x4(%eax),%ebx
 853717c:	e8 1a 50 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8537181:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8537185:	89 04 24             	mov    %eax,(%esp)
 8537188:	e8 f7 8b e2 ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 853718d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8537190:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8537194:	0f 84 4c 01 00 00    	je     85372e6 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x276>
 853719a:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 85371a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85371a4:	89 04 24             	mov    %eax,(%esp)
 85371a7:	e8 1a 75 dd ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 85371ac:	05 ac 03 00 00       	add    $0x3ac,%eax
 85371b1:	89 04 24             	mov    %eax,(%esp)
 85371b4:	e8 e3 d9 f7 ff       	call   84b4b9c <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5emptyEv>
 85371b9:	83 f0 01             	xor    $0x1,%eax
 85371bc:	84 c0                	test   %al,%al
 85371be:	74 19                	je     85371d9 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x169>
 85371c0:	8b 45 10             	mov    0x10(%ebp),%eax
 85371c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85371c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85371ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85371ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85371d1:	89 04 24             	mov    %eax,(%esp)
 85371d4:	e8 9d 86 e1 ff       	call   834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 85371d9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85371dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85371df:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85371e3:	0f b6 d0             	movzbl %al,%edx
 85371e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85371e9:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 85371ed:	0f b6 c0             	movzbl %al,%eax
 85371f0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85371f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85371f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85371fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85371ff:	89 04 24             	mov    %eax,(%esp)
 8537202:	e8 9f 86 e1 ff       	call   834f8a6 <_ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>
 8537207:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 853720a:	89 04 24             	mov    %eax,(%esp)
 853720d:	e8 b4 74 dd ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 8537212:	83 c0 70             	add    $0x70,%eax
 8537215:	89 04 24             	mov    %eax,(%esp)
 8537218:	e8 f9 43 00 00       	call   853b616 <_ZNKSt6vectorI13CatchItemInfoSaIS0_EE5emptyEv>
 853721d:	83 f0 01             	xor    $0x1,%eax
 8537220:	84 c0                	test   %al,%al
 8537222:	74 12                	je     8537236 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1c6>
 8537224:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537227:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 853722b:	84 c0                	test   %al,%al
 853722d:	74 07                	je     8537236 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1c6>
 853722f:	b8 01 00 00 00       	mov    $0x1,%eax
 8537234:	eb 05                	jmp    853723b <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1cb>
 8537236:	b8 00 00 00 00       	mov    $0x0,%eax
 853723b:	84 c0                	test   %al,%al
 853723d:	74 12                	je     8537251 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1e1>
 853723f:	8b 45 10             	mov    0x10(%ebp),%eax
 8537242:	89 44 24 04          	mov    %eax,0x4(%esp)
 8537246:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8537249:	89 04 24             	mov    %eax,(%esp)
 853724c:	e8 97 86 e1 ff       	call   834f8e8 <_ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE>
 8537251:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537254:	0f b6 40 43          	movzbl 0x43(%eax),%eax
 8537258:	83 f0 01             	xor    $0x1,%eax
 853725b:	84 c0                	test   %al,%al
 853725d:	74 50                	je     85372af <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x23f>
 853725f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537262:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 8537266:	83 f0 01             	xor    $0x1,%eax
 8537269:	84 c0                	test   %al,%al
 853726b:	74 42                	je     85372af <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x23f>
 853726d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8537274:	eb 25                	jmp    853729b <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x22b>
 8537276:	8b 45 10             	mov    0x10(%ebp),%eax
 8537279:	89 44 24 0c          	mov    %eax,0xc(%esp)
 853727d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8537284:	00 
 8537285:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8537288:	89 44 24 04          	mov    %eax,0x4(%esp)
 853728c:	8b 45 08             	mov    0x8(%ebp),%eax
 853728f:	89 04 24             	mov    %eax,(%esp)
 8537292:	e8 37 fd ff ff       	call   8536fce <_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE>
 8537297:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 853729b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 853729e:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 85372a2:	0f be c0             	movsbl %al,%eax
 85372a5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85372a8:	0f 9f c0             	setg   %al
 85372ab:	84 c0                	test   %al,%al
 85372ad:	75 c7                	jne    8537276 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x206>
 85372af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85372b2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 85372b6:	84 c0                	test   %al,%al
 85372b8:	74 2d                	je     85372e7 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x277>
 85372ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85372bd:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 85372c1:	0f be c0             	movsbl %al,%eax
 85372c4:	8b 55 10             	mov    0x10(%ebp),%edx
 85372c7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85372cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 85372cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85372d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85372d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85372d9:	89 04 24             	mov    %eax,(%esp)
 85372dc:	e8 ed fc ff ff       	call   8536fce <_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE>
 85372e1:	eb 04                	jmp    85372e7 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x277>
 85372e3:	90                   	nop
 85372e4:	eb 01                	jmp    85372e7 <_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x277>
 85372e6:	90                   	nop
 85372e7:	83 c4 34             	add    $0x34,%esp
 85372ea:	5b                   	pop    %ebx
 85372eb:	5d                   	pop    %ebp
 85372ec:	c3                   	ret
 85372ed:	90                   	nop

```

```c
// WongWork::CMonsterDrop::generateSpecificItem @ 0x8537070

/* WongWork::CMonsterDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::generateSpecificItem
          (CMonsterDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CAICharacter *this_00;
  CMonster *this_01;
  int local_14;
  int local_10;
  
  if (param_1[0x41] == (stGenerateRefData_t)0x0) {
    if ((char)param_1[0x3c] < '\x05') {
      iVar4 = G_CDataManager();
      this_01 = (CMonster *)CDataManager::find_monster(iVar4);
      if (this_01 != (CMonster *)0x0) {
        CMonster::getMonsterScript(this_01);
        cVar3 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
                empty();
        if (cVar3 != '\x01') {
          CMonster::generateIndependentItem(this_01,param_1,(vector *)param_2);
        }
        CMonster::generateDropAvatarItem
                  (this_01,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
        CMonster::getMonsterScript(this_01);
        cVar3 = std::vector<CatchItemInfo,std::allocator<CatchItemInfo>>::empty();
        if ((cVar3 == '\x01') || (param_1[0x45] == (stGenerateRefData_t)0x0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          CMonster::generateCatchMonsterItem(this_01,(vector *)param_2);
        }
        if ((param_1[0x43] != (stGenerateRefData_t)0x1) &&
           (param_1[0x44] != (stGenerateRefData_t)0x1)) {
          for (local_10 = 0; local_10 < (char)param_1[0x3d]; local_10 = local_10 + 1) {
            _generateMonseterSpecificItem(this,this_01,'\0',param_2);
          }
        }
        if (param_1[0x3c] != (stGenerateRefData_t)0x0) {
          _generateMonseterSpecificItem(this,this_01,(char)param_1[0x3c],param_2);
        }
      }
    }
    else {
      for (local_14 = 0; local_14 < (char)param_1[0x3d]; local_14 = local_14 + 1) {
        CMonsterDrop_Hell::generateSpecificItem
                  ((CMonsterDrop_Hell *)(this + 0x238ac),param_1,param_2);
      }
      uVar1 = *(uint *)(param_1 + 0x38);
      iVar4 = G_CDataManager();
      this_00 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar1);
      if (this_00 != (CAICharacter *)0x0) {
        CAICharacter::generateIndependentItem(this_00,param_1,(vector *)param_2);
        CAICharacter::generateDropAvatarItem
                  (this_00,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
      }
    }
  }
  else {
    CMonsterDrop_Hell::hellPartySpecificItem((CMonsterDrop_Hell *)(this + 0x238ac),param_1,param_2);
  }
  return;
}

```

---

## loadScript

```asm
// === 08537938 WongWork::CMonsterDrop::loadScript  [0x08537938-0x85380f9] ===
 8537938:	55                   	push   %ebp
 8537939:	89 e5                	mov    %esp,%ebp
 853793b:	56                   	push   %esi
 853793c:	53                   	push   %ebx
 853793d:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8537943:	8b 45 0c             	mov    0xc(%ebp),%eax
 8537946:	89 44 24 04          	mov    %eax,0x4(%esp)
 853794a:	c7 04 24 00 95 c9 08 	movl   $0x8c99500,(%esp)
 8537951:	e8 d3 43 38 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8537956:	83 f0 01             	xor    $0x1,%eax
 8537959:	84 c0                	test   %al,%al
 853795b:	74 0a                	je     8537967 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x2f>
 853795d:	bb 6b 06 00 00       	mov    $0x66b,%ebx
 8537962:	e9 86 07 00 00       	jmp    85380ed <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7b5>
 8537967:	8d 45 a0             	lea    -0x60(%ebp),%eax
 853796a:	89 04 24             	mov    %eax,(%esp)
 853796d:	e8 5e ec 1c 00       	call   87065d0 <_ZNSsC1Ev>
 8537972:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8537979:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 853797d:	eb 0a                	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 853797f:	90                   	nop
 8537980:	eb 07                	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537982:	90                   	nop
 8537983:	eb 04                	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537985:	90                   	nop
 8537986:	eb 01                	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537988:	90                   	nop
 8537989:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8537990:	00 
 8537991:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537994:	89 04 24             	mov    %eax,(%esp)
 8537997:	e8 c3 4e 38 00       	call   88bc85f <_Z8ScanTypeRSsb>
 853799c:	83 f0 01             	xor    $0x1,%eax
 853799f:	84 c0                	test   %al,%al
 85379a1:	0f 85 f3 06 00 00    	jne    853809a <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x762>
 85379a7:	c7 44 24 04 c5 95 c9 	movl   $0x8c995c5,0x4(%esp)
 85379ae:	08 
 85379af:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85379b2:	89 04 24             	mov    %eax,(%esp)
 85379b5:	e8 e7 8f b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85379ba:	84 c0                	test   %al,%al
 85379bc:	0f 84 8a 00 00 00    	je     8537a4c <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x114>
 85379c2:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 85379c5:	b9 00 00 00 00       	mov    $0x0,%ecx
 85379ca:	b8 1c 00 00 00       	mov    $0x1c,%eax
 85379cf:	89 c3                	mov    %eax,%ebx
 85379d1:	83 e3 fc             	and    $0xfffffffc,%ebx
 85379d4:	b8 00 00 00 00       	mov    $0x0,%eax
 85379d9:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 85379dc:	83 c0 04             	add    $0x4,%eax
 85379df:	39 d8                	cmp    %ebx,%eax
 85379e1:	72 f6                	jb     85379d9 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0xa1>
 85379e3:	01 c2                	add    %eax,%edx
 85379e5:	8d 45 9f             	lea    -0x61(%ebp),%eax
 85379e8:	89 04 24             	mov    %eax,(%esp)
 85379eb:	e8 8b 49 38 00       	call   88bc37b <_Z7ScanIntPb>
 85379f0:	8b 55 08             	mov    0x8(%ebp),%edx
 85379f3:	8d 4a 18             	lea    0x18(%edx),%ecx
 85379f6:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 85379f9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85379fd:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8537a00:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8537a04:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8537a07:	89 54 24 10          	mov    %edx,0x10(%esp)
 8537a0b:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8537a0e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8537a12:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8537a15:	89 54 24 18          	mov    %edx,0x18(%esp)
 8537a19:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8537a1c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8537a20:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8537a23:	89 54 24 20          	mov    %edx,0x20(%esp)
 8537a27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8537a2b:	89 0c 24             	mov    %ecx,(%esp)
 8537a2e:	e8 c3 3f 00 00       	call   853b9f6 <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EE6resizeEjS2_>
 8537a33:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537a37:	83 f0 01             	xor    $0x1,%eax
 8537a3a:	84 c0                	test   %al,%al
 8537a3c:	0f 84 3d ff ff ff    	je     853797f <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x47>
 8537a42:	bb 79 06 00 00       	mov    $0x679,%ebx
 8537a47:	e9 96 06 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537a4c:	c7 44 24 04 6f 97 c9 	movl   $0x8c9976f,0x4(%esp)
 8537a53:	08 
 8537a54:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537a57:	89 04 24             	mov    %eax,(%esp)
 8537a5a:	e8 42 8f b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537a5f:	84 c0                	test   %al,%al
 8537a61:	0f 84 d6 00 00 00    	je     8537b3d <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x205>
 8537a67:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8537a6e:	e9 a9 00 00 00       	jmp    8537b1c <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x1e4>
 8537a73:	8b 45 08             	mov    0x8(%ebp),%eax
 8537a76:	8d 50 18             	lea    0x18(%eax),%edx
 8537a79:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8537a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8537a80:	89 14 24             	mov    %edx,(%esp)
 8537a83:	e8 7c 3e 00 00       	call   853b904 <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8537a88:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8537a8b:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537a8e:	89 04 24             	mov    %eax,(%esp)
 8537a91:	e8 e5 48 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537a96:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8537a99:	89 02                	mov    %eax,(%edx)
 8537a9b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537a9f:	83 f0 01             	xor    $0x1,%eax
 8537aa2:	84 c0                	test   %al,%al
 8537aa4:	74 0a                	je     8537ab0 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x178>
 8537aa6:	bb 81 06 00 00       	mov    $0x681,%ebx
 8537aab:	e9 32 06 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537ab0:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537ab3:	89 04 24             	mov    %eax,(%esp)
 8537ab6:	e8 c0 48 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537abb:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8537abe:	89 42 04             	mov    %eax,0x4(%edx)
 8537ac1:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537ac5:	83 f0 01             	xor    $0x1,%eax
 8537ac8:	84 c0                	test   %al,%al
 8537aca:	74 0a                	je     8537ad6 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x19e>
 8537acc:	bb 83 06 00 00       	mov    $0x683,%ebx
 8537ad1:	e9 0c 06 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537ad6:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8537add:	eb 2e                	jmp    8537b0d <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x1d5>
 8537adf:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8537ae2:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537ae5:	89 04 24             	mov    %eax,(%esp)
 8537ae8:	e8 8e 48 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537aed:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8537af0:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 8537af4:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537af8:	83 f0 01             	xor    $0x1,%eax
 8537afb:	84 c0                	test   %al,%al
 8537afd:	74 0a                	je     8537b09 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x1d1>
 8537aff:	bb 87 06 00 00       	mov    $0x687,%ebx
 8537b04:	e9 d9 05 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537b09:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8537b0d:	83 7d cc 04          	cmpl   $0x4,-0x34(%ebp)
 8537b11:	0f 9e c0             	setle  %al
 8537b14:	84 c0                	test   %al,%al
 8537b16:	75 c7                	jne    8537adf <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x1a7>
 8537b18:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8537b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8537b1f:	83 c0 18             	add    $0x18,%eax
 8537b22:	89 04 24             	mov    %eax,(%esp)
 8537b25:	e8 b8 3d 00 00       	call   853b8e2 <_ZNKSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 8537b2a:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 8537b2d:	0f 97 c0             	seta   %al
 8537b30:	84 c0                	test   %al,%al
 8537b32:	0f 85 3b ff ff ff    	jne    8537a73 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x13b>
 8537b38:	e9 4c fe ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537b3d:	c7 44 24 04 aa 95 c9 	movl   $0x8c995aa,0x4(%esp)
 8537b44:	08 
 8537b45:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537b48:	89 04 24             	mov    %eax,(%esp)
 8537b4b:	e8 51 8e b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537b50:	84 c0                	test   %al,%al
 8537b52:	74 70                	je     8537bc4 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x28c>
 8537b54:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 8537b5b:	eb 57                	jmp    8537bb4 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x27c>
 8537b5d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8537b64:	eb 3f                	jmp    8537ba5 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x26d>
 8537b66:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8537b69:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8537b6c:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537b6f:	89 04 24             	mov    %eax,(%esp)
 8537b72:	e8 04 48 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537b77:	89 c2                	mov    %eax,%edx
 8537b79:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8537b7c:	89 d8                	mov    %ebx,%eax
 8537b7e:	01 c0                	add    %eax,%eax
 8537b80:	01 d8                	add    %ebx,%eax
 8537b82:	01 c0                	add    %eax,%eax
 8537b84:	01 f0                	add    %esi,%eax
 8537b86:	83 c0 0c             	add    $0xc,%eax
 8537b89:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 8537b8c:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537b90:	83 f0 01             	xor    $0x1,%eax
 8537b93:	84 c0                	test   %al,%al
 8537b95:	74 0a                	je     8537ba1 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x269>
 8537b97:	bb 93 06 00 00       	mov    $0x693,%ebx
 8537b9c:	e9 41 05 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537ba1:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8537ba5:	83 7d d4 05          	cmpl   $0x5,-0x2c(%ebp)
 8537ba9:	0f 9e c0             	setle  %al
 8537bac:	84 c0                	test   %al,%al
 8537bae:	75 b6                	jne    8537b66 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x22e>
 8537bb0:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8537bb4:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 8537bb8:	0f 9e c0             	setle  %al
 8537bbb:	84 c0                	test   %al,%al
 8537bbd:	75 9e                	jne    8537b5d <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x225>
 8537bbf:	e9 c5 fd ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537bc4:	c7 44 24 04 7b 97 c9 	movl   $0x8c9977b,0x4(%esp)
 8537bcb:	08 
 8537bcc:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537bcf:	89 04 24             	mov    %eax,(%esp)
 8537bd2:	e8 ca 8d b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537bd7:	84 c0                	test   %al,%al
 8537bd9:	74 6e                	je     8537c49 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x311>
 8537bdb:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8537be2:	eb 55                	jmp    8537c39 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x301>
 8537be4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8537beb:	eb 3d                	jmp    8537c2a <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x2f2>
 8537bed:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8537bf0:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8537bf3:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537bf6:	89 04 24             	mov    %eax,(%esp)
 8537bf9:	e8 e7 48 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 8537bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8537c01:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 8537c08:	01 da                	add    %ebx,%edx
 8537c0a:	83 c2 28             	add    $0x28,%edx
 8537c0d:	d9 5c 90 08          	fstps  0x8(%eax,%edx,4)
 8537c11:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537c15:	83 f0 01             	xor    $0x1,%eax
 8537c18:	84 c0                	test   %al,%al
 8537c1a:	74 0a                	je     8537c26 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x2ee>
 8537c1c:	bb 9e 06 00 00       	mov    $0x69e,%ebx
 8537c21:	e9 bc 04 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537c26:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8537c2a:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 8537c2e:	0f 9e c0             	setle  %al
 8537c31:	84 c0                	test   %al,%al
 8537c33:	75 b8                	jne    8537bed <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x2b5>
 8537c35:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8537c39:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 8537c3d:	0f 9e c0             	setle  %al
 8537c40:	84 c0                	test   %al,%al
 8537c42:	75 a0                	jne    8537be4 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x2ac>
 8537c44:	e9 40 fd ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537c49:	c7 44 24 04 9c 97 c9 	movl   $0x8c9979c,0x4(%esp)
 8537c50:	08 
 8537c51:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537c54:	89 04 24             	mov    %eax,(%esp)
 8537c57:	e8 45 8d b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537c5c:	84 c0                	test   %al,%al
 8537c5e:	74 6e                	je     8537cce <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x396>
 8537c60:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8537c67:	eb 55                	jmp    8537cbe <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x386>
 8537c69:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8537c70:	eb 3d                	jmp    8537caf <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x377>
 8537c72:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8537c75:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8537c78:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537c7b:	89 04 24             	mov    %eax,(%esp)
 8537c7e:	e8 62 48 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 8537c83:	8b 55 08             	mov    0x8(%ebp),%edx
 8537c86:	89 d8                	mov    %ebx,%eax
 8537c88:	c1 e0 02             	shl    $0x2,%eax
 8537c8b:	01 d8                	add    %ebx,%eax
 8537c8d:	01 f0                	add    %esi,%eax
 8537c8f:	83 c0 3c             	add    $0x3c,%eax
 8537c92:	d9 5c 82 08          	fstps  0x8(%edx,%eax,4)
 8537c96:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537c9a:	83 f0 01             	xor    $0x1,%eax
 8537c9d:	84 c0                	test   %al,%al
 8537c9f:	74 0a                	je     8537cab <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x373>
 8537ca1:	bb ad 06 00 00       	mov    $0x6ad,%ebx
 8537ca6:	e9 37 04 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537cab:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8537caf:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 8537cb3:	0f 9e c0             	setle  %al
 8537cb6:	84 c0                	test   %al,%al
 8537cb8:	75 b8                	jne    8537c72 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x33a>
 8537cba:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8537cbe:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
 8537cc2:	0f 9e c0             	setle  %al
 8537cc5:	84 c0                	test   %al,%al
 8537cc7:	75 a0                	jne    8537c69 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x331>
 8537cc9:	e9 bb fc ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537cce:	c7 44 24 04 c0 97 c9 	movl   $0x8c997c0,0x4(%esp)
 8537cd5:	08 
 8537cd6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537cd9:	89 04 24             	mov    %eax,(%esp)
 8537cdc:	e8 c0 8c b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537ce1:	84 c0                	test   %al,%al
 8537ce3:	74 6e                	je     8537d53 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x41b>
 8537ce5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8537cec:	eb 55                	jmp    8537d43 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x40b>
 8537cee:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8537cf5:	eb 3d                	jmp    8537d34 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x3fc>
 8537cf7:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8537cfa:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8537cfd:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537d00:	89 04 24             	mov    %eax,(%esp)
 8537d03:	e8 dd 47 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 8537d08:	8b 45 08             	mov    0x8(%ebp),%eax
 8537d0b:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 8537d12:	01 da                	add    %ebx,%edx
 8537d14:	83 c2 54             	add    $0x54,%edx
 8537d17:	d9 5c 90 0c          	fstps  0xc(%eax,%edx,4)
 8537d1b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537d1f:	83 f0 01             	xor    $0x1,%eax
 8537d22:	84 c0                	test   %al,%al
 8537d24:	74 0a                	je     8537d30 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x3f8>
 8537d26:	bb b8 06 00 00       	mov    $0x6b8,%ebx
 8537d2b:	e9 b2 03 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537d30:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8537d34:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8537d38:	0f 9e c0             	setle  %al
 8537d3b:	84 c0                	test   %al,%al
 8537d3d:	75 b8                	jne    8537cf7 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x3bf>
 8537d3f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8537d43:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 8537d47:	0f 9e c0             	setle  %al
 8537d4a:	84 c0                	test   %al,%al
 8537d4c:	75 a0                	jne    8537cee <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x3b6>
 8537d4e:	e9 36 fc ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537d53:	c7 44 24 04 f7 95 c9 	movl   $0x8c995f7,0x4(%esp)
 8537d5a:	08 
 8537d5b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537d5e:	89 04 24             	mov    %eax,(%esp)
 8537d61:	e8 3b 8c b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537d66:	84 c0                	test   %al,%al
 8537d68:	0f 84 c2 00 00 00    	je     8537e30 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4f8>
 8537d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8537d71:	c6 80 ac 01 00 00 00 	movb   $0x0,0x1ac(%eax)
 8537d78:	8b 45 08             	mov    0x8(%ebp),%eax
 8537d7b:	c6 80 ad 01 00 00 00 	movb   $0x0,0x1ad(%eax)
 8537d82:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8537d89:	e9 8b 00 00 00       	jmp    8537e19 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4e1>
 8537d8e:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537d91:	89 04 24             	mov    %eax,(%esp)
 8537d94:	e8 e2 45 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537d99:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8537d9c:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537da0:	83 f0 01             	xor    $0x1,%eax
 8537da3:	84 c0                	test   %al,%al
 8537da5:	74 0a                	je     8537db1 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x479>
 8537da7:	bb c5 06 00 00       	mov    $0x6c5,%ebx
 8537dac:	e9 31 03 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537db1:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 8537db4:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537db7:	89 04 24             	mov    %eax,(%esp)
 8537dba:	e8 bc 45 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537dbf:	89 c2                	mov    %eax,%edx
 8537dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8537dc4:	8d 8b d0 00 00 00    	lea    0xd0(%ebx),%ecx
 8537dca:	88 54 48 0c          	mov    %dl,0xc(%eax,%ecx,2)
 8537dce:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537dd2:	83 f0 01             	xor    $0x1,%eax
 8537dd5:	84 c0                	test   %al,%al
 8537dd7:	74 0a                	je     8537de3 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4ab>
 8537dd9:	bb c9 06 00 00       	mov    $0x6c9,%ebx
 8537dde:	e9 ff 02 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537de3:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 8537de6:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537de9:	89 04 24             	mov    %eax,(%esp)
 8537dec:	e8 8a 45 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537df1:	89 c2                	mov    %eax,%edx
 8537df3:	8b 45 08             	mov    0x8(%ebp),%eax
 8537df6:	8d 8b d0 00 00 00    	lea    0xd0(%ebx),%ecx
 8537dfc:	88 54 48 0d          	mov    %dl,0xd(%eax,%ecx,2)
 8537e00:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537e04:	83 f0 01             	xor    $0x1,%eax
 8537e07:	84 c0                	test   %al,%al
 8537e09:	74 0a                	je     8537e15 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4dd>
 8537e0b:	bb cd 06 00 00       	mov    $0x6cd,%ebx
 8537e10:	e9 cd 02 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537e15:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8537e19:	81 7d f0 c8 00 00 00 	cmpl   $0xc8,-0x10(%ebp)
 8537e20:	0f 9e c0             	setle  %al
 8537e23:	84 c0                	test   %al,%al
 8537e25:	0f 85 63 ff ff ff    	jne    8537d8e <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x456>
 8537e2b:	e9 59 fb ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537e30:	c7 44 24 04 e0 97 c9 	movl   $0x8c997e0,0x4(%esp)
 8537e37:	08 
 8537e38:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537e3b:	89 04 24             	mov    %eax,(%esp)
 8537e3e:	e8 5e 8b b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537e43:	84 c0                	test   %al,%al
 8537e45:	74 75                	je     8537ebc <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x584>
 8537e47:	8b 45 08             	mov    0x8(%ebp),%eax
 8537e4a:	c7 80 7c 93 25 00 01 	movl   $0x1,0x25937c(%eax)
 8537e51:	00 00 00 
 8537e54:	8b 45 08             	mov    0x8(%ebp),%eax
 8537e57:	8b 90 7c 93 25 00    	mov    0x25937c(%eax),%edx
 8537e5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8537e60:	89 90 78 93 25 00    	mov    %edx,0x259378(%eax)
 8537e66:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537e69:	89 04 24             	mov    %eax,(%esp)
 8537e6c:	e8 0a 45 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537e71:	8b 55 08             	mov    0x8(%ebp),%edx
 8537e74:	89 82 78 93 25 00    	mov    %eax,0x259378(%edx)
 8537e7a:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537e7e:	83 f0 01             	xor    $0x1,%eax
 8537e81:	84 c0                	test   %al,%al
 8537e83:	74 0a                	je     8537e8f <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x557>
 8537e85:	bb d7 06 00 00       	mov    $0x6d7,%ebx
 8537e8a:	e9 53 02 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537e8f:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537e92:	89 04 24             	mov    %eax,(%esp)
 8537e95:	e8 e1 44 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537e9a:	8b 55 08             	mov    0x8(%ebp),%edx
 8537e9d:	89 82 7c 93 25 00    	mov    %eax,0x25937c(%edx)
 8537ea3:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537ea7:	83 f0 01             	xor    $0x1,%eax
 8537eaa:	84 c0                	test   %al,%al
 8537eac:	0f 84 d0 fa ff ff    	je     8537982 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4a>
 8537eb2:	bb db 06 00 00       	mov    $0x6db,%ebx
 8537eb7:	e9 26 02 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537ebc:	c7 44 24 04 ff 97 c9 	movl   $0x8c997ff,0x4(%esp)
 8537ec3:	08 
 8537ec4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537ec7:	89 04 24             	mov    %eax,(%esp)
 8537eca:	e8 d2 8a b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537ecf:	84 c0                	test   %al,%al
 8537ed1:	0f 84 80 00 00 00    	je     8537f57 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x61f>
 8537ed7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8537ede:	eb 67                	jmp    8537f47 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x60f>
 8537ee0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8537ee3:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537ee6:	89 04 24             	mov    %eax,(%esp)
 8537ee9:	e8 8d 44 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537eee:	89 c2                	mov    %eax,%edx
 8537ef0:	8b 45 08             	mov    0x8(%ebp),%eax
 8537ef3:	8d 8b e0 64 09 00    	lea    0x964e0(%ebx),%ecx
 8537ef9:	66 89 54 88 08       	mov    %dx,0x8(%eax,%ecx,4)
 8537efe:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537f02:	83 f0 01             	xor    $0x1,%eax
 8537f05:	84 c0                	test   %al,%al
 8537f07:	74 0a                	je     8537f13 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x5db>
 8537f09:	bb e5 06 00 00       	mov    $0x6e5,%ebx
 8537f0e:	e9 cf 01 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537f13:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8537f16:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537f19:	89 04 24             	mov    %eax,(%esp)
 8537f1c:	e8 5a 44 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537f21:	89 c2                	mov    %eax,%edx
 8537f23:	8b 45 08             	mov    0x8(%ebp),%eax
 8537f26:	66 89 94 98 8a 93 25 	mov    %dx,0x25938a(%eax,%ebx,4)
 8537f2d:	00 
 8537f2e:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537f32:	83 f0 01             	xor    $0x1,%eax
 8537f35:	84 c0                	test   %al,%al
 8537f37:	74 0a                	je     8537f43 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x60b>
 8537f39:	bb e9 06 00 00       	mov    $0x6e9,%ebx
 8537f3e:	e9 9f 01 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537f43:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8537f47:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8537f4b:	0f 9e c0             	setle  %al
 8537f4e:	84 c0                	test   %al,%al
 8537f50:	75 8e                	jne    8537ee0 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x5a8>
 8537f52:	e9 32 fa ff ff       	jmp    8537989 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x51>
 8537f57:	c7 44 24 04 10 98 c9 	movl   $0x8c99810,0x4(%esp)
 8537f5e:	08 
 8537f5f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8537f62:	89 04 24             	mov    %eax,(%esp)
 8537f65:	e8 37 8a b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537f6a:	84 c0                	test   %al,%al
 8537f6c:	0f 84 b4 00 00 00    	je     8538026 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x6ee>
 8537f72:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537f75:	89 04 24             	mov    %eax,(%esp)
 8537f78:	e8 fe 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537f7d:	89 c2                	mov    %eax,%edx
 8537f7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8537f82:	66 89 90 98 93 25 00 	mov    %dx,0x259398(%eax)
 8537f89:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537f8d:	83 f0 01             	xor    $0x1,%eax
 8537f90:	84 c0                	test   %al,%al
 8537f92:	74 0a                	je     8537f9e <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x666>
 8537f94:	bb f0 06 00 00       	mov    $0x6f0,%ebx
 8537f99:	e9 44 01 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537f9e:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537fa1:	89 04 24             	mov    %eax,(%esp)
 8537fa4:	e8 d2 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537fa9:	89 c2                	mov    %eax,%edx
 8537fab:	8b 45 08             	mov    0x8(%ebp),%eax
 8537fae:	66 89 90 9a 93 25 00 	mov    %dx,0x25939a(%eax)
 8537fb5:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537fb9:	83 f0 01             	xor    $0x1,%eax
 8537fbc:	84 c0                	test   %al,%al
 8537fbe:	74 0a                	je     8537fca <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x692>
 8537fc0:	bb f4 06 00 00       	mov    $0x6f4,%ebx
 8537fc5:	e9 18 01 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537fca:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537fcd:	89 04 24             	mov    %eax,(%esp)
 8537fd0:	e8 a6 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537fd5:	89 c2                	mov    %eax,%edx
 8537fd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8537fda:	66 89 90 9c 93 25 00 	mov    %dx,0x25939c(%eax)
 8537fe1:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8537fe5:	83 f0 01             	xor    $0x1,%eax
 8537fe8:	84 c0                	test   %al,%al
 8537fea:	74 0a                	je     8537ff6 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x6be>
 8537fec:	bb f8 06 00 00       	mov    $0x6f8,%ebx
 8537ff1:	e9 ec 00 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8537ff6:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8537ff9:	89 04 24             	mov    %eax,(%esp)
 8537ffc:	e8 7a 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8538001:	89 c2                	mov    %eax,%edx
 8538003:	8b 45 08             	mov    0x8(%ebp),%eax
 8538006:	66 89 90 9e 93 25 00 	mov    %dx,0x25939e(%eax)
 853800d:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8538011:	83 f0 01             	xor    $0x1,%eax
 8538014:	84 c0                	test   %al,%al
 8538016:	0f 84 69 f9 ff ff    	je     8537985 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x4d>
 853801c:	bb fc 06 00 00       	mov    $0x6fc,%ebx
 8538021:	e9 bc 00 00 00       	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8538026:	c7 44 24 04 20 98 c9 	movl   $0x8c99820,0x4(%esp)
 853802d:	08 
 853802e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8538031:	89 04 24             	mov    %eax,(%esp)
 8538034:	e8 68 89 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8538039:	84 c0                	test   %al,%al
 853803b:	74 56                	je     8538093 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x75b>
 853803d:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8538040:	89 04 24             	mov    %eax,(%esp)
 8538043:	e8 33 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8538048:	89 c2                	mov    %eax,%edx
 853804a:	8b 45 08             	mov    0x8(%ebp),%eax
 853804d:	66 89 90 a0 93 25 00 	mov    %dx,0x2593a0(%eax)
 8538054:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8538058:	83 f0 01             	xor    $0x1,%eax
 853805b:	84 c0                	test   %al,%al
 853805d:	74 07                	je     8538066 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x72e>
 853805f:	bb 02 07 00 00       	mov    $0x702,%ebx
 8538064:	eb 7c                	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8538066:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8538069:	89 04 24             	mov    %eax,(%esp)
 853806c:	e8 0a 43 38 00       	call   88bc37b <_Z7ScanIntPb>
 8538071:	89 c2                	mov    %eax,%edx
 8538073:	8b 45 08             	mov    0x8(%ebp),%eax
 8538076:	66 89 90 a2 93 25 00 	mov    %dx,0x2593a2(%eax)
 853807d:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 8538081:	83 f0 01             	xor    $0x1,%eax
 8538084:	84 c0                	test   %al,%al
 8538086:	0f 84 fc f8 ff ff    	je     8537988 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x50>
 853808c:	bb 06 07 00 00       	mov    $0x706,%ebx
 8538091:	eb 4f                	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 8538093:	bb 0a 07 00 00       	mov    $0x70a,%ebx
 8538098:	eb 48                	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 853809a:	90                   	nop
 853809b:	8b 45 08             	mov    0x8(%ebp),%eax
 853809e:	8d 90 ac 01 00 00    	lea    0x1ac(%eax),%edx
 85380a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85380a7:	05 40 03 00 00       	add    $0x340,%eax
 85380ac:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85380b3:	00 
 85380b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85380b8:	89 04 24             	mov    %eax,(%esp)
 85380bb:	e8 ac c5 ff ff       	call   853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>
 85380c0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85380c5:	eb 1b                	jmp    85380e2 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc+0x7aa>
 85380c7:	89 d3                	mov    %edx,%ebx
 85380c9:	89 c6                	mov    %eax,%esi
 85380cb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85380ce:	89 04 24             	mov    %eax,(%esp)
 85380d1:	e8 0a fb 1c 00       	call   8707be0 <_ZNSsD1Ev>
 85380d6:	89 f0                	mov    %esi,%eax
 85380d8:	89 da                	mov    %ebx,%edx
 85380da:	89 04 24             	mov    %eax,(%esp)
 85380dd:	e8 6e b6 5a 00       	call   8ae3750 <_Unwind_Resume>
 85380e2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85380e5:	89 04 24             	mov    %eax,(%esp)
 85380e8:	e8 f3 fa 1c 00       	call   8707be0 <_ZNSsD1Ev>
 85380ed:	89 d8                	mov    %ebx,%eax
 85380ef:	81 c4 90 00 00 00    	add    $0x90,%esp
 85380f5:	5b                   	pop    %ebx
 85380f6:	5e                   	pop    %esi
 85380f7:	5d                   	pop    %ebp
 85380f8:	c3                   	ret
 85380f9:	90                   	nop

```

```c
// WongWork::CMonsterDrop::loadScript @ 0x8537938

/* WongWork::CMonsterDrop::loadScript(char const*) */

undefined4 __thiscall WongWork::CMonsterDrop::loadScript(CMonsterDrop *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CMonsterDrop CVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longdouble lVar9;
  bool local_65;
  string local_64;
  undefined4 local_60 [7];
  int local_44;
  uint local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_64);
    local_44 = 0;
    local_65 = false;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                    /* try { // try from 08537997 to 085380bf has its CatchHandler @ 085380c7 */
                          cVar2 = ScanType((string *)&local_64,true);
                          if (cVar2 != '\x01') {
                            CItemGenRateTable::generateTable
                                      ((CItemGenRateTable *)(this + 0x340),
                                       (stGenItemRange_t *)(this + 0x1ac),true);
                            uVar8 = 0;
                            goto LAB_085380e2;
                          }
                          bVar3 = std::operator==(&local_64,"[drop prob count]");
                          if (!bVar3) break;
                          uVar6 = 0;
                          do {
                            *(undefined4 *)((int)local_60 + uVar6) = 0;
                            uVar6 = uVar6 + 4;
                          } while (uVar6 < 0x1c);
                          uVar8 = ScanInt(&local_65);
                          std::
                          vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          ::resize(this + 0x18,uVar8,local_60[0],local_60[1],local_60[2],local_60[3]
                                   ,local_60[4],local_60[5],local_60[6]);
                          if (local_65 != true) {
                            uVar8 = 0x679;
                            goto LAB_085380e2;
                          }
                        }
                        bVar3 = std::operator==(&local_64,"[drop prob]");
                        if (!bVar3) break;
                        local_40 = 0;
                        while (uVar6 = std::
                                       vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                       ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                               *)(this + 0x18)), local_40 < uVar6) {
                          local_3c = (undefined4 *)
                                     std::
                                     vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                     ::operator[]((
                                                  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                                  *)(this + 0x18),local_40);
                          uVar8 = ScanInt(&local_65);
                          *local_3c = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x681;
                            goto LAB_085380e2;
                          }
                          uVar8 = ScanInt(&local_65);
                          local_3c[1] = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x683;
                            goto LAB_085380e2;
                          }
                          for (local_38 = 0; iVar7 = local_38, local_38 < 5; local_38 = local_38 + 1
                              ) {
                            uVar8 = ScanInt(&local_65);
                            local_3c[iVar7 + 2] = uVar8;
                            if (local_65 != true) {
                              uVar8 = 0x687;
                              goto LAB_085380e2;
                            }
                          }
                          local_40 = local_40 + 1;
                        }
                      }
                      bVar3 = std::operator==(&local_64,"[basis of rarity dicision]");
                      if (!bVar3) break;
                      for (local_34 = 1; local_34 < 5; local_34 = local_34 + 1) {
                        for (local_30 = 0; iVar1 = local_30, iVar7 = local_34, local_30 < 6;
                            local_30 = local_30 + 1) {
                          uVar8 = ScanInt(&local_65);
                          *(undefined4 *)(this + (iVar7 * 6 + iVar1) * 4 + 0x30) = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x693;
                            goto LAB_085380e2;
                          }
                        }
                      }
                    }
                    bVar3 = std::operator==(&local_64,"[party member drop bonusrate]");
                    if (!bVar3) break;
                    for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
                      for (local_28 = 0; iVar1 = local_28, iVar7 = local_2c, local_28 < 4;
                          local_28 = local_28 + 1) {
                        lVar9 = (longdouble)ScanFloat(&local_65);
                        *(float *)(this + (iVar7 * 4 + iVar1 + 0x28) * 4 + 8) = (float)lVar9;
                        if (local_65 != true) {
                          uVar8 = 0x69e;
                          goto LAB_085380e2;
                        }
                      }
                    }
                  }
                  bVar3 = std::operator==(&local_64,"[dungeon difficulty drop bonusrate]");
                  if (!bVar3) break;
                  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
                    for (local_20 = 0; iVar1 = local_20, iVar7 = local_24, local_20 < 5;
                        local_20 = local_20 + 1) {
                      lVar9 = (longdouble)ScanFloat(&local_65);
                      *(float *)(this + (iVar7 * 5 + iVar1 + 0x3c) * 4 + 8) = (float)lVar9;
                      if (local_65 != true) {
                        uVar8 = 0x6ad;
                        goto LAB_085380e2;
                      }
                    }
                  }
                }
                bVar3 = std::operator==(&local_64,"[monster type drop bonusrate]");
                if (!bVar3) break;
                for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
                  for (local_18 = 0; iVar1 = local_18, iVar7 = local_1c, local_18 < 4;
                      local_18 = local_18 + 1) {
                    lVar9 = (longdouble)ScanFloat(&local_65);
                    *(float *)(this + (iVar7 * 4 + iVar1 + 0x54) * 4 + 0xc) = (float)lVar9;
                    if (local_65 != true) {
                      uVar8 = 0x6b8;
                      goto LAB_085380e2;
                    }
                  }
                }
              }
              bVar3 = std::operator==(&local_64,"[item drop ref table]");
              if (!bVar3) break;
              this[0x1ac] = (CMonsterDrop)0x0;
              this[0x1ad] = (CMonsterDrop)0x0;
              for (local_14 = 1; local_14 < 0xc9; local_14 = local_14 + 1) {
                iVar7 = ScanInt(&local_65);
                local_44 = iVar7;
                if (local_65 != true) {
                  uVar8 = 0x6c5;
                  goto LAB_085380e2;
                }
                CVar4 = (CMonsterDrop)ScanInt(&local_65);
                iVar1 = local_44;
                this[(iVar7 + 0xd0) * 2 + 0xc] = CVar4;
                if (local_65 != true) {
                  uVar8 = 0x6c9;
                  goto LAB_085380e2;
                }
                CVar4 = (CMonsterDrop)ScanInt(&local_65);
                this[(iVar1 + 0xd0) * 2 + 0xd] = CVar4;
                if (local_65 != true) {
                  uVar8 = 0x6cd;
                  goto LAB_085380e2;
                }
              }
            }
            bVar3 = std::operator==(&local_64,"[first boss/named mob hunting]");
            if (!bVar3) break;
            *(undefined4 *)(this + 0x25937c) = 1;
            *(undefined4 *)(this + 0x259378) = *(undefined4 *)(this + 0x25937c);
            uVar8 = ScanInt(&local_65);
            *(undefined4 *)(this + 0x259378) = uVar8;
            if (local_65 != true) {
              uVar8 = 0x6d7;
              goto LAB_085380e2;
            }
            uVar8 = ScanInt(&local_65);
            *(undefined4 *)(this + 0x25937c) = uVar8;
            if (local_65 != true) {
              uVar8 = 0x6db;
              goto LAB_085380e2;
            }
          }
          bVar3 = std::operator==(&local_64,"[condition rate]");
          if (!bVar3) break;
          for (local_10 = 0; iVar7 = local_10, local_10 < 4; local_10 = local_10 + 1) {
            uVar5 = ScanInt(&local_65);
            iVar1 = local_10;
            *(undefined2 *)(this + (iVar7 + 0x964e0) * 4 + 8) = uVar5;
            if (local_65 != true) {
              uVar8 = 0x6e5;
              goto LAB_085380e2;
            }
            uVar5 = ScanInt(&local_65);
            *(undefined2 *)(this + iVar1 * 4 + 0x25938a) = uVar5;
            if (local_65 != true) {
              uVar8 = 0x6e9;
              goto LAB_085380e2;
            }
          }
        }
        bVar3 = std::operator==(&local_64,"[gold quantity]");
        if (!bVar3) break;
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x259398) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f0;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939a) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f4;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939c) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f8;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939e) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6fc;
          goto LAB_085380e2;
        }
      }
      bVar3 = std::operator==(&local_64,"[gold volume]");
      if (!bVar3) {
        uVar8 = 0x70a;
        goto LAB_085380e2;
      }
      uVar5 = ScanInt(&local_65);
      *(undefined2 *)(this + 0x2593a0) = uVar5;
      if (local_65 != true) {
        uVar8 = 0x702;
        goto LAB_085380e2;
      }
      uVar5 = ScanInt(&local_65);
      *(undefined2 *)(this + 0x2593a2) = uVar5;
    } while (local_65 == true);
    uVar8 = 0x706;
LAB_085380e2:
    std::string::~string((string *)&local_64);
  }
  else {
    uVar8 = 0x66b;
  }
  return uVar8;
}

```

---

## loadScript_085380fa

```asm
// === 085380fa WongWork::CMonsterDrop::loadScript  [0x085380fa-0x8538189] ===
 85380fa:	55                   	push   %ebp
 85380fb:	89 e5                	mov    %esp,%ebp
 85380fd:	83 ec 28             	sub    $0x28,%esp
 8538100:	8b 45 08             	mov    0x8(%ebp),%eax
 8538103:	8b 00                	mov    (%eax),%eax
 8538105:	83 c0 04             	add    $0x4,%eax
 8538108:	8b 10                	mov    (%eax),%edx
 853810a:	8b 45 0c             	mov    0xc(%ebp),%eax
 853810d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538111:	8b 45 08             	mov    0x8(%ebp),%eax
 8538114:	89 04 24             	mov    %eax,(%esp)
 8538117:	ff d2                	call   *%edx
 8538119:	85 c0                	test   %eax,%eax
 853811b:	0f 95 c0             	setne  %al
 853811e:	84 c0                	test   %al,%al
 8538120:	74 07                	je     8538129 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x2f>
 8538122:	b8 15 07 00 00       	mov    $0x715,%eax
 8538127:	eb 5e                	jmp    8538187 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x8d>
 8538129:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8538130:	8b 45 08             	mov    0x8(%ebp),%eax
 8538133:	8d 90 ac 38 02 00    	lea    0x238ac(%eax),%edx
 8538139:	8b 45 10             	mov    0x10(%ebp),%eax
 853813c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538140:	89 14 24             	mov    %edx,(%esp)
 8538143:	e8 fc d1 ff ff       	call   8535344 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc>
 8538148:	89 45 f4             	mov    %eax,-0xc(%ebp)
 853814b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 853814f:	74 05                	je     8538156 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x5c>
 8538151:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538154:	eb 31                	jmp    8538187 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x8d>
 8538156:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 853815a:	74 26                	je     8538182 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x88>
 853815c:	8b 45 08             	mov    0x8(%ebp),%eax
 853815f:	8d 90 6c 70 04 00    	lea    0x4706c(%eax),%edx
 8538165:	8b 45 14             	mov    0x14(%ebp),%eax
 8538168:	89 44 24 04          	mov    %eax,0x4(%esp)
 853816c:	89 14 24             	mov    %edx,(%esp)
 853816f:	e8 7a f2 ff ff       	call   85373ee <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc>
 8538174:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8538177:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 853817b:	74 05                	je     8538182 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x88>
 853817d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538180:	eb 05                	jmp    8538187 <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_+0x8d>
 8538182:	b8 00 00 00 00       	mov    $0x0,%eax
 8538187:	c9                   	leave
 8538188:	c3                   	ret
 8538189:	90                   	nop

```

```c
// WongWork::CMonsterDrop::loadScript @ 0x85380fa

/* WongWork::CMonsterDrop::loadScript(char const*, char const*, char const*) */

int __thiscall
WongWork::CMonsterDrop::loadScript(CMonsterDrop *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 4))(this,param_1);
  if (iVar1 == 0) {
    iVar1 = CMonsterDrop_Hell::loadScript((CMonsterDrop_Hell *)(this + 0x238ac),param_2);
    if ((iVar1 == 0) &&
       ((param_3 == (char *)0x0 ||
        (iVar1 = CSpecialMonsterDrop::loadScript((CSpecialMonsterDrop *)(this + 0x4706c),param_3),
        iVar1 == 0)))) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x715;
  }
  return iVar1;
}

```

---

## setDropRatio

```asm
// === 08535cf8 WongWork::CMonsterDrop::setDropRatio  [0x08535cf8-0x8535dc7] ===
 8535cf8:	55                   	push   %ebp
 8535cf9:	89 e5                	mov    %esp,%ebp
 8535cfb:	53                   	push   %ebx
 8535cfc:	83 ec 34             	sub    $0x34,%esp
 8535cff:	8b 45 08             	mov    0x8(%ebp),%eax
 8535d02:	8d 50 18             	lea    0x18(%eax),%edx
 8535d05:	8b 45 08             	mov    0x8(%ebp),%eax
 8535d08:	83 c0 24             	add    $0x24,%eax
 8535d0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8535d0f:	89 04 24             	mov    %eax,(%esp)
 8535d12:	e8 43 59 00 00       	call   853b65a <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EEaSERKS4_>
 8535d17:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8535d1e:	eb 59                	jmp    8535d79 <_ZN8WongWork12CMonsterDrop12setDropRatioEf+0x81>
 8535d20:	8b 45 08             	mov    0x8(%ebp),%eax
 8535d23:	8d 50 24             	lea    0x24(%eax),%edx
 8535d26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8535d29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535d2d:	89 14 24             	mov    %edx,(%esp)
 8535d30:	e8 cf 5b 00 00       	call   853b904 <_ZNSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8535d35:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8535d38:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8535d3f:	eb 29                	jmp    8535d6a <_ZN8WongWork12CMonsterDrop12setDropRatioEf+0x72>
 8535d41:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8535d44:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8535d47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535d4a:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8535d4e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8535d51:	db 45 e4             	fildl  -0x1c(%ebp)
 8535d54:	d8 4d 0c             	fmuls  0xc(%ebp)
 8535d57:	d9 1c 24             	fstps  (%esp)
 8535d5a:	e8 86 4e 00 00       	call   853abe5 <_Z10roundFloatf>
 8535d5f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8535d62:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 8535d66:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8535d6a:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8535d6e:	0f 9e c0             	setle  %al
 8535d71:	84 c0                	test   %al,%al
 8535d73:	75 cc                	jne    8535d41 <_ZN8WongWork12CMonsterDrop12setDropRatioEf+0x49>
 8535d75:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8535d79:	8b 45 08             	mov    0x8(%ebp),%eax
 8535d7c:	83 c0 24             	add    $0x24,%eax
 8535d7f:	89 04 24             	mov    %eax,(%esp)
 8535d82:	e8 5b 5b 00 00       	call   853b8e2 <_ZNKSt6vectorIN8WongWork12CMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 8535d87:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8535d8a:	0f 97 c0             	seta   %al
 8535d8d:	84 c0                	test   %al,%al
 8535d8f:	75 8f                	jne    8535d20 <_ZN8WongWork12CMonsterDrop12setDropRatioEf+0x28>
 8535d91:	8b 45 08             	mov    0x8(%ebp),%eax
 8535d94:	8d 90 6c 70 04 00    	lea    0x4706c(%eax),%edx
 8535d9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535d9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535da1:	89 14 24             	mov    %edx,(%esp)
 8535da4:	e8 3f fc ff ff       	call   85359e8 <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf>
 8535da9:	8b 45 08             	mov    0x8(%ebp),%eax
 8535dac:	8d 90 ac 38 02 00    	lea    0x238ac(%eax),%edx
 8535db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535db5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535db9:	89 14 24             	mov    %edx,(%esp)
 8535dbc:	e8 87 fb ff ff       	call   8535948 <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf>
 8535dc1:	83 c4 34             	add    $0x34,%esp
 8535dc4:	5b                   	pop    %ebx
 8535dc5:	5d                   	pop    %ebp
 8535dc6:	c3                   	ret
 8535dc7:	90                   	nop

```

```c
// WongWork::CMonsterDrop::setDropRatio @ 0x8535cf8

/* WongWork::CMonsterDrop::setDropRatio(float) */

void __thiscall WongWork::CMonsterDrop::setDropRatio(CMonsterDrop *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
  ::operator=((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
            ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24),local_18);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8 + local_10 * 4) * param_1);
      *(undefined4 *)(iVar1 + 8 + local_10 * 4) = uVar2;
    }
    local_18 = local_18 + 1;
  }
  CSpecialMonsterDrop::setDropRatio((CSpecialMonsterDrop *)(this + 0x4706c),param_1);
  CMonsterDrop_Hell::setDropRatio((CMonsterDrop_Hell *)(this + 0x238ac),param_1);
  return;
}

```

