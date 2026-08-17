# ExceptionItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## find_index

```asm
// === 081a210c ExceptionItem::find_index  [0x081a210c-0x81a216d] ===
 81a210c:	55                   	push   %ebp
 81a210d:	89 e5                	mov    %esp,%ebp
 81a210f:	83 ec 28             	sub    $0x28,%esp
 81a2112:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2115:	8d 48 04             	lea    0x4(%eax),%ecx
 81a2118:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a211b:	8d 55 0c             	lea    0xc(%ebp),%edx
 81a211e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2122:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2126:	89 04 24             	mov    %eax,(%esp)
 81a2129:	e8 c0 b1 f2 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 81a212e:	83 ec 04             	sub    $0x4,%esp
 81a2131:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2134:	8d 50 04             	lea    0x4(%eax),%edx
 81a2137:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a213a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a213e:	89 04 24             	mov    %eax,(%esp)
 81a2141:	e8 d4 b1 f2 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 81a2146:	83 ec 04             	sub    $0x4,%esp
 81a2149:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a214c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2150:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2153:	89 04 24             	mov    %eax,(%esp)
 81a2156:	e8 6d 82 f3 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 81a215b:	84 c0                	test   %al,%al
 81a215d:	74 07                	je     81a2166 <_ZN13ExceptionItem10find_indexEi+0x5a>
 81a215f:	b8 01 00 00 00       	mov    $0x1,%eax
 81a2164:	eb 05                	jmp    81a216b <_ZN13ExceptionItem10find_indexEi+0x5f>
 81a2166:	b8 00 00 00 00       	mov    $0x0,%eax
 81a216b:	c9                   	leave
 81a216c:	c3                   	ret
 81a216d:	90                   	nop

```

```c
// ExceptionItem::find_index @ 0x81a210c

/* ExceptionItem::find_index(int) */

bool ExceptionItem::find_index(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}

```

---

## parsing

```asm
// === 081a1fce ExceptionItem::parsing  [0x081a1fce-0x81a210b] ===
 81a1fce:	55                   	push   %ebp
 81a1fcf:	89 e5                	mov    %esp,%ebp
 81a1fd1:	56                   	push   %esi
 81a1fd2:	53                   	push   %ebx
 81a1fd3:	81 ec 90 00 00 00    	sub    $0x90,%esp
 81a1fd9:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a1fdc:	89 04 24             	mov    %eax,(%esp)
 81a1fdf:	e8 90 94 fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a1fe4:	c7 44 24 08 61 c6 ba 	movl   $0x8bac661,0x8(%esp)
 81a1feb:	08 
 81a1fec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a1fef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1ff3:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a1ff6:	89 04 24             	mov    %eax,(%esp)
 81a1ff9:	e8 52 99 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a1ffe:	83 f0 01             	xor    $0x1,%eax
 81a2001:	84 c0                	test   %al,%al
 81a2003:	74 0a                	je     81a200f <_ZN13ExceptionItem7parsingEPc+0x41>
 81a2005:	bb 27 00 00 00       	mov    $0x27,%ebx
 81a200a:	e9 e5 00 00 00       	jmp    81a20f4 <_ZN13ExceptionItem7parsingEPc+0x126>
 81a200f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a2012:	89 04 24             	mov    %eax,(%esp)
 81a2015:	e8 62 22 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a201a:	85 c0                	test   %eax,%eax
 81a201c:	0f 94 c0             	sete   %al
 81a201f:	84 c0                	test   %al,%al
 81a2021:	74 0a                	je     81a202d <_ZN13ExceptionItem7parsingEPc+0x5f>
 81a2023:	bb 2a 00 00 00       	mov    $0x2a,%ebx
 81a2028:	e9 c7 00 00 00       	jmp    81a20f4 <_ZN13ExceptionItem7parsingEPc+0x126>
 81a202d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a2034:	e9 80 00 00 00       	jmp    81a20b9 <_ZN13ExceptionItem7parsingEPc+0xeb>
 81a2039:	c7 44 24 08 79 c6 ba 	movl   $0x8bac679,0x8(%esp)
 81a2040:	08 
 81a2041:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2044:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2048:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a204b:	89 04 24             	mov    %eax,(%esp)
 81a204e:	e8 2d a7 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a2053:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81a2056:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2059:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81a205c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2060:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81a2063:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a2067:	89 04 24             	mov    %eax,(%esp)
 81a206a:	e8 43 f2 f6 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 81a206f:	83 ec 04             	sub    $0x4,%esp
 81a2072:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2075:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2079:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a207c:	89 04 24             	mov    %eax,(%esp)
 81a207f:	e8 9c 4c f2 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 81a2084:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2087:	8d 48 04             	lea    0x4(%eax),%ecx
 81a208a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a208d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81a2090:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2094:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2098:	89 04 24             	mov    %eax,(%esp)
 81a209b:	e8 b0 4c f2 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 81a20a0:	83 ec 04             	sub    $0x4,%esp
 81a20a3:	0f b6 45 dc          	movzbl -0x24(%ebp),%eax
 81a20a7:	83 f0 01             	xor    $0x1,%eax
 81a20aa:	84 c0                	test   %al,%al
 81a20ac:	74 07                	je     81a20b5 <_ZN13ExceptionItem7parsingEPc+0xe7>
 81a20ae:	bb 33 00 00 00       	mov    $0x33,%ebx
 81a20b3:	eb 3f                	jmp    81a20f4 <_ZN13ExceptionItem7parsingEPc+0x126>
 81a20b5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a20b9:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a20bc:	89 04 24             	mov    %eax,(%esp)
 81a20bf:	e8 b8 21 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a20c4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a20c7:	0f 9f c0             	setg   %al
 81a20ca:	84 c0                	test   %al,%al
 81a20cc:	0f 85 67 ff ff ff    	jne    81a2039 <_ZN13ExceptionItem7parsingEPc+0x6b>
 81a20d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a20d7:	eb 1b                	jmp    81a20f4 <_ZN13ExceptionItem7parsingEPc+0x126>
 81a20d9:	89 d3                	mov    %edx,%ebx
 81a20db:	89 c6                	mov    %eax,%esi
 81a20dd:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a20e0:	89 04 24             	mov    %eax,(%esp)
 81a20e3:	e8 3c 95 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a20e8:	89 f0                	mov    %esi,%eax
 81a20ea:	89 da                	mov    %ebx,%edx
 81a20ec:	89 04 24             	mov    %eax,(%esp)
 81a20ef:	e8 5c 16 94 00       	call   8ae3750 <_Unwind_Resume>
 81a20f4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81a20f7:	89 04 24             	mov    %eax,(%esp)
 81a20fa:	e8 25 95 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a20ff:	89 d8                	mov    %ebx,%eax
 81a2101:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a2104:	83 c4 00             	add    $0x0,%esp
 81a2107:	5b                   	pop    %ebx
 81a2108:	5e                   	pop    %esi
 81a2109:	5d                   	pop    %ebp
 81a210a:	c3                   	ret
 81a210b:	90                   	nop

```

```c
// ExceptionItem::parsing @ 0x81a1fce

/* ExceptionItem::parsing(char*) */

undefined4 __thiscall ExceptionItem::parsing(ExceptionItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_80 [84];
  pair local_2c [4];
  char local_28;
  int local_24;
  pair<int_const,int> local_20 [8];
  int local_18 [2];
  int local_10;
  
  Arad_Script::Arad_Script(local_80);
                    /* try { // try from 081a1ff9 to 081a209f has its CatchHandler @ 081a20d9 */
  cVar1 = Arad_Script::Load(local_80,param_1,"material_exception_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_80);
    if (iVar2 == 0) {
      uVar3 = 0x2a;
    }
    else {
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_80);
        if (iVar2 <= local_10) break;
        local_24 = Arad_Script::GetInt(local_80,local_10,"material_exception_item_index");
        std::make_pair<int&,int&>(local_18,&local_24);
        std::pair<int_const,int>::pair<int,int>(local_20,(pair *)local_18);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
        if (local_28 != '\x01') {
          uVar3 = 0x33;
          goto LAB_081a20f4;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x27;
  }
LAB_081a20f4:
  Arad_Script::~Arad_Script(local_80);
  return uVar3;
}

```

