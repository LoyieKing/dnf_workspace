# PurchaseLimitItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## find

```asm
// === 081a2310 PurchaseLimitItem::find  [0x081a2310-0x81a2389] ===
 81a2310:	55                   	push   %ebp
 81a2311:	89 e5                	mov    %esp,%ebp
 81a2313:	83 ec 28             	sub    $0x28,%esp
 81a2316:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2319:	8d 48 04             	lea    0x4(%eax),%ecx
 81a231c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a231f:	8d 55 0c             	lea    0xc(%ebp),%edx
 81a2322:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2326:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a232a:	89 04 24             	mov    %eax,(%esp)
 81a232d:	e8 6c 20 00 00       	call   81a439e <_ZNSt3mapIjN17PurchaseLimitItem4InfoESt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 81a2332:	83 ec 04             	sub    $0x4,%esp
 81a2335:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2338:	8d 50 04             	lea    0x4(%eax),%edx
 81a233b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a233e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a2342:	89 04 24             	mov    %eax,(%esp)
 81a2345:	e8 80 20 00 00       	call   81a43ca <_ZNSt3mapIjN17PurchaseLimitItem4InfoESt4lessIjESaISt4pairIKjS1_EEE3endEv>
 81a234a:	83 ec 04             	sub    $0x4,%esp
 81a234d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a2350:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2354:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2357:	89 04 24             	mov    %eax,(%esp)
 81a235a:	e8 91 20 00 00       	call   81a43f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN17PurchaseLimitItem4InfoEEEneERKS5_>
 81a235f:	84 c0                	test   %al,%al
 81a2361:	74 20                	je     81a2383 <_ZN17PurchaseLimitItem4findEjRNS_4InfoE+0x73>
 81a2363:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2366:	89 04 24             	mov    %eax,(%esp)
 81a2369:	e8 96 20 00 00       	call   81a4404 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN17PurchaseLimitItem4InfoEEEptEv>
 81a236e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 81a2371:	8b 50 08             	mov    0x8(%eax),%edx
 81a2374:	8b 40 04             	mov    0x4(%eax),%eax
 81a2377:	89 01                	mov    %eax,(%ecx)
 81a2379:	89 51 04             	mov    %edx,0x4(%ecx)
 81a237c:	b8 01 00 00 00       	mov    $0x1,%eax
 81a2381:	eb 05                	jmp    81a2388 <_ZN17PurchaseLimitItem4findEjRNS_4InfoE+0x78>
 81a2383:	b8 00 00 00 00       	mov    $0x0,%eax
 81a2388:	c9                   	leave
 81a2389:	c3                   	ret

```

```c
// PurchaseLimitItem::find @ 0x81a2310

/* PurchaseLimitItem::find(unsigned int, PurchaseLimitItem::Info&) */

bool __thiscall PurchaseLimitItem::find(PurchaseLimitItem *this,uint param_1,Info *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>> local_14 [4];
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  local_10 [12];
  
  std::
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>::
            operator->(local_14);
    uVar1 = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return cVar2 != '\0';
}

```

---

## parsing

```asm
// === 081a216e PurchaseLimitItem::parsing  [0x081a216e-0x81a230f] ===
 81a216e:	55                   	push   %ebp
 81a216f:	89 e5                	mov    %esp,%ebp
 81a2171:	56                   	push   %esi
 81a2172:	53                   	push   %ebx
 81a2173:	81 ec 90 00 00 00    	sub    $0x90,%esp
 81a2179:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a217f:	89 04 24             	mov    %eax,(%esp)
 81a2182:	e8 ed 92 fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a2187:	c7 44 24 08 97 c6 ba 	movl   $0x8bac697,0x8(%esp)
 81a218e:	08 
 81a218f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2192:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2196:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a219c:	89 04 24             	mov    %eax,(%esp)
 81a219f:	e8 ac 97 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a21a4:	83 f0 01             	xor    $0x1,%eax
 81a21a7:	84 c0                	test   %al,%al
 81a21a9:	74 0a                	je     81a21b5 <_ZN17PurchaseLimitItem7parsingEPc+0x47>
 81a21ab:	bb 4c 00 00 00       	mov    $0x4c,%ebx
 81a21b0:	e9 41 01 00 00       	jmp    81a22f6 <_ZN17PurchaseLimitItem7parsingEPc+0x188>
 81a21b5:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a21bb:	89 04 24             	mov    %eax,(%esp)
 81a21be:	e8 b9 20 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a21c3:	85 c0                	test   %eax,%eax
 81a21c5:	0f 94 c0             	sete   %al
 81a21c8:	84 c0                	test   %al,%al
 81a21ca:	74 0a                	je     81a21d6 <_ZN17PurchaseLimitItem7parsingEPc+0x68>
 81a21cc:	bb 4f 00 00 00       	mov    $0x4f,%ebx
 81a21d1:	e9 20 01 00 00       	jmp    81a22f6 <_ZN17PurchaseLimitItem7parsingEPc+0x188>
 81a21d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a21d9:	89 04 24             	mov    %eax,(%esp)
 81a21dc:	e8 7d 1e 00 00       	call   81a405e <_ZN17PurchaseLimitItem4InfoC1Ev>
 81a21e1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a21e8:	e9 c8 00 00 00       	jmp    81a22b5 <_ZN17PurchaseLimitItem7parsingEPc+0x147>
 81a21ed:	c7 44 24 08 ab c6 ba 	movl   $0x8bac6ab,0x8(%esp)
 81a21f4:	08 
 81a21f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a21f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a21fc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a2202:	89 04 24             	mov    %eax,(%esp)
 81a2205:	e8 76 a5 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a220a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81a220d:	c7 44 24 08 b6 c6 ba 	movl   $0x8bac6b6,0x8(%esp)
 81a2214:	08 
 81a2215:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2218:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a221c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a2222:	89 04 24             	mov    %eax,(%esp)
 81a2225:	e8 56 a5 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a222a:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81a222e:	c7 44 24 08 c4 c6 ba 	movl   $0x8bac6c4,0x8(%esp)
 81a2235:	08 
 81a2236:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2239:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a223d:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a2243:	89 04 24             	mov    %eax,(%esp)
 81a2246:	e8 35 a5 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a224b:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 81a224f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2252:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81a2255:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2259:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81a225c:	83 c2 04             	add    $0x4,%edx
 81a225f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a2263:	89 04 24             	mov    %eax,(%esp)
 81a2266:	e8 93 20 00 00       	call   81a42fe <_ZSt9make_pairIRjRN17PurchaseLimitItem4InfoEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 81a226b:	83 ec 04             	sub    $0x4,%esp
 81a226e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2271:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2275:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a2278:	89 04 24             	mov    %eax,(%esp)
 81a227b:	e8 bc 20 00 00       	call   81a433c <_ZNSt4pairIKjN17PurchaseLimitItem4InfoEEC1IjS2_EEOS_IT_T0_E>
 81a2280:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2283:	8d 48 04             	lea    0x4(%eax),%ecx
 81a2286:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81a2289:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81a228c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2290:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2294:	89 04 24             	mov    %eax,(%esp)
 81a2297:	e8 d6 20 00 00       	call   81a4372 <_ZNSt3mapIjN17PurchaseLimitItem4InfoESt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 81a229c:	83 ec 04             	sub    $0x4,%esp
 81a229f:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 81a22a3:	83 f0 01             	xor    $0x1,%eax
 81a22a6:	84 c0                	test   %al,%al
 81a22a8:	74 07                	je     81a22b1 <_ZN17PurchaseLimitItem7parsingEPc+0x143>
 81a22aa:	bb 5c 00 00 00       	mov    $0x5c,%ebx
 81a22af:	eb 45                	jmp    81a22f6 <_ZN17PurchaseLimitItem7parsingEPc+0x188>
 81a22b1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a22b5:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a22bb:	89 04 24             	mov    %eax,(%esp)
 81a22be:	e8 b9 1f 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a22c3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a22c6:	0f 9f c0             	setg   %al
 81a22c9:	84 c0                	test   %al,%al
 81a22cb:	0f 85 1c ff ff ff    	jne    81a21ed <_ZN17PurchaseLimitItem7parsingEPc+0x7f>
 81a22d1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a22d6:	eb 1e                	jmp    81a22f6 <_ZN17PurchaseLimitItem7parsingEPc+0x188>
 81a22d8:	89 d3                	mov    %edx,%ebx
 81a22da:	89 c6                	mov    %eax,%esi
 81a22dc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a22e2:	89 04 24             	mov    %eax,(%esp)
 81a22e5:	e8 3a 93 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a22ea:	89 f0                	mov    %esi,%eax
 81a22ec:	89 da                	mov    %ebx,%edx
 81a22ee:	89 04 24             	mov    %eax,(%esp)
 81a22f1:	e8 5a 14 94 00       	call   8ae3750 <_Unwind_Resume>
 81a22f6:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81a22fc:	89 04 24             	mov    %eax,(%esp)
 81a22ff:	e8 20 93 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a2304:	89 d8                	mov    %ebx,%eax
 81a2306:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a2309:	83 c4 00             	add    $0x0,%esp
 81a230c:	5b                   	pop    %ebx
 81a230d:	5e                   	pop    %esi
 81a230e:	5d                   	pop    %ebp
 81a230f:	c3                   	ret

```

```c
// PurchaseLimitItem::parsing @ 0x81a216e

/* PurchaseLimitItem::parsing(char*) */

undefined4 __thiscall PurchaseLimitItem::parsing(PurchaseLimitItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_8c [84];
  pair local_38 [4];
  char local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  pair<unsigned_int_const,PurchaseLimitItem::Info> local_28 [12];
  uint local_1c [3];
  int local_10;
  
  Arad_Script::Arad_Script(local_8c);
                    /* try { // try from 081a219f to 081a229b has its CatchHandler @ 081a22d8 */
  cVar1 = Arad_Script::Load(local_8c,param_1,"purchase_limit_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_8c);
    if (iVar2 == 0) {
      uVar3 = 0x4f;
    }
    else {
      Info::Info((Info *)&local_30);
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_8c);
        if (iVar2 <= local_10) break;
        local_2c = Arad_Script::GetInt(local_8c,local_10,"Item_Index");
        local_30 = Arad_Script::GetInt(local_8c,local_10,"purchase_Type");
        local_2e = Arad_Script::GetInt(local_8c,local_10,"puchase_limit_count");
        std::make_pair<unsigned_int&,PurchaseLimitItem::Info&>(local_1c,(Info *)&local_2c);
        std::pair<unsigned_int_const,PurchaseLimitItem::Info>::
        pair<unsigned_int,PurchaseLimitItem::Info>(local_28,(pair *)local_1c);
        std::
        map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
        ::insert(local_38);
        if (local_34 != '\x01') {
          uVar3 = 0x5c;
          goto LAB_081a22f6;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x4c;
  }
LAB_081a22f6:
  Arad_Script::~Arad_Script(local_8c);
  return uVar3;
}

```

