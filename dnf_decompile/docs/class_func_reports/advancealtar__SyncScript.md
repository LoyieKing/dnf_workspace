# advancealtar__SyncScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## getItemValueStirng

```asm
// === 08134132 advancealtar::SyncScript::getItemValueStirng  [0x08134132-0x813438f] ===
 8134132:	55                   	push   %ebp
 8134133:	89 e5                	mov    %esp,%ebp
 8134135:	57                   	push   %edi
 8134136:	56                   	push   %esi
 8134137:	53                   	push   %ebx
 8134138:	81 ec 5c 08 00 00    	sub    $0x85c,%esp
 813413e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8134145:	8b 45 10             	mov    0x10(%ebp),%eax
 8134148:	83 f8 01             	cmp    $0x1,%eax
 813414b:	74 14                	je     8134161 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x2f>
 813414d:	83 f8 02             	cmp    $0x2,%eax
 8134150:	74 1a                	je     813416c <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x3a>
 8134152:	85 c0                	test   %eax,%eax
 8134154:	75 21                	jne    8134177 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x45>
 8134156:	8b 45 0c             	mov    0xc(%ebp),%eax
 8134159:	83 c0 04             	add    $0x4,%eax
 813415c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 813415f:	eb 20                	jmp    8134181 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x4f>
 8134161:	8b 45 0c             	mov    0xc(%ebp),%eax
 8134164:	83 c0 10             	add    $0x10,%eax
 8134167:	89 45 dc             	mov    %eax,-0x24(%ebp)
 813416a:	eb 15                	jmp    8134181 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x4f>
 813416c:	8b 45 0c             	mov    0xc(%ebp),%eax
 813416f:	83 c0 1c             	add    $0x1c,%eax
 8134172:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8134175:	eb 0a                	jmp    8134181 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x4f>
 8134177:	bb 00 00 00 00       	mov    $0x0,%ebx
 813417c:	e9 02 02 00 00       	jmp    8134383 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x251>
 8134181:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8134184:	89 04 24             	mov    %eax,(%esp)
 8134187:	e8 f0 26 00 00       	call   813687c <_ZNKSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE4sizeEv>
 813418c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 813418f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8134192:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8134195:	89 54 24 04          	mov    %edx,0x4(%esp)
 8134199:	89 04 24             	mov    %eax,(%esp)
 813419c:	e8 fd 26 00 00       	call   813689e <_ZNKSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 81341a1:	83 ec 04             	sub    $0x4,%esp
 81341a4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81341ab:	e9 9f 01 00 00       	jmp    813434f <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x21d>
 81341b0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81341b3:	89 04 24             	mov    %eax,(%esp)
 81341b6:	e8 15 24 5d 00       	call   87065d0 <_ZNSsC1Ev>
 81341bb:	8d b5 bc fb ff ff    	lea    -0x444(%ebp),%esi
 81341c1:	b8 00 00 00 00       	mov    $0x0,%eax
 81341c6:	ba 00 01 00 00       	mov    $0x100,%edx
 81341cb:	89 f7                	mov    %esi,%edi
 81341cd:	89 d1                	mov    %edx,%ecx
 81341cf:	f3 ab                	rep stos %eax,%es:(%edi)
 81341d1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81341d4:	89 04 24             	mov    %eax,(%esp)
 81341d7:	e8 7a 27 00 00       	call   8136956 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 81341dc:	83 c0 0c             	add    $0xc,%eax
 81341df:	89 04 24             	mov    %eax,(%esp)
 81341e2:	e8 09 23 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 81341e7:	8d 95 bc fb ff ff    	lea    -0x444(%ebp),%edx
 81341ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 81341f1:	89 04 24             	mov    %eax,(%esp)
 81341f4:	e8 0f 4c fd ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 81341f9:	83 f0 01             	xor    $0x1,%eax
 81341fc:	84 c0                	test   %al,%al
 81341fe:	0f 84 87 00 00 00    	je     813428b <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x159>
 8134204:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8134207:	89 04 24             	mov    %eax,(%esp)
 813420a:	e8 47 27 00 00       	call   8136956 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 813420f:	83 c0 0c             	add    $0xc,%eax
 8134212:	89 04 24             	mov    %eax,(%esp)
 8134215:	e8 d6 22 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 813421a:	89 c7                	mov    %eax,%edi
 813421c:	e8 bf 4b fd ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8134221:	89 c6                	mov    %eax,%esi
 8134223:	e8 a4 4b fd ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8134228:	89 c3                	mov    %eax,%ebx
 813422a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8134231:	00 
 8134232:	c7 44 24 08 36 0d 00 	movl   $0xd36,0x8(%esp)
 8134239:	00 
 813423a:	c7 44 24 04 80 d4 b6 	movl   $0x8b6d480,0x4(%esp)
 8134241:	08 
 8134242:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8134245:	89 04 24             	mov    %eax,(%esp)
 8134248:	e8 cb b4 41 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 813424d:	c7 44 24 18 36 0d 00 	movl   $0xd36,0x18(%esp)
 8134254:	00 
 8134255:	c7 44 24 14 80 d4 b6 	movl   $0x8b6d480,0x14(%esp)
 813425c:	08 
 813425d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8134261:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8134265:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8134269:	c7 44 24 04 33 c8 b6 	movl   $0x8b6c833,0x4(%esp)
 8134270:	08 
 8134271:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8134274:	89 04 24             	mov    %eax,(%esp)
 8134277:	e8 0c b5 41 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 813427c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8134281:	be 00 00 00 00       	mov    $0x0,%esi
 8134286:	e9 94 00 00 00       	jmp    813431f <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x1ed>
 813428b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813428e:	89 04 24             	mov    %eax,(%esp)
 8134291:	e8 c0 26 00 00       	call   8136956 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8134296:	8b 10                	mov    (%eax),%edx
 8134298:	8b 45 10             	mov    0x10(%ebp),%eax
 813429b:	8d 8d bc fb ff ff    	lea    -0x444(%ebp),%ecx
 81342a1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81342a5:	89 54 24 10          	mov    %edx,0x10(%esp)
 81342a9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81342ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81342b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81342b4:	c7 44 24 04 50 c8 b6 	movl   $0x8b6c850,0x4(%esp)
 81342bb:	08 
 81342bc:	8d 85 bc f7 ff ff    	lea    -0x844(%ebp),%eax
 81342c2:	89 04 24             	mov    %eax,(%esp)
 81342c5:	e8 76 a1 f4 ff       	call   807e440 <sprintf@plt>
 81342ca:	8d 85 bc f7 ff ff    	lea    -0x844(%ebp),%eax
 81342d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81342d4:	8b 45 14             	mov    0x14(%ebp),%eax
 81342d7:	89 04 24             	mov    %eax,(%esp)
 81342da:	e8 51 3d 5d 00       	call   8708030 <_ZNSspLEPKc>
 81342df:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81342e2:	83 e8 01             	sub    $0x1,%eax
 81342e5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81342e8:	7e 13                	jle    81342fd <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x1cb>
 81342ea:	c7 44 24 04 60 c8 b6 	movl   $0x8b6c860,0x4(%esp)
 81342f1:	08 
 81342f2:	8b 45 14             	mov    0x14(%ebp),%eax
 81342f5:	89 04 24             	mov    %eax,(%esp)
 81342f8:	e8 33 3d 5d 00       	call   8708030 <_ZNSspLEPKc>
 81342fd:	be 01 00 00 00       	mov    $0x1,%esi
 8134302:	eb 1b                	jmp    813431f <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x1ed>
 8134304:	89 d3                	mov    %edx,%ebx
 8134306:	89 c6                	mov    %eax,%esi
 8134308:	8d 45 bc             	lea    -0x44(%ebp),%eax
 813430b:	89 04 24             	mov    %eax,(%esp)
 813430e:	e8 cd 38 5d 00       	call   8707be0 <_ZNSsD1Ev>
 8134313:	89 f0                	mov    %esi,%eax
 8134315:	89 da                	mov    %ebx,%edx
 8134317:	89 04 24             	mov    %eax,(%esp)
 813431a:	e8 31 f4 9a 00       	call   8ae3750 <_Unwind_Resume>
 813431f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8134322:	89 04 24             	mov    %eax,(%esp)
 8134325:	e8 b6 38 5d 00       	call   8707be0 <_ZNSsD1Ev>
 813432a:	85 f6                	test   %esi,%esi
 813432c:	74 55                	je     8134383 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x251>
 813432e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8134331:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8134338:	00 
 8134339:	8d 55 c0             	lea    -0x40(%ebp),%edx
 813433c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8134340:	89 04 24             	mov    %eax,(%esp)
 8134343:	e8 da 25 00 00       	call   8136922 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 8134348:	83 ec 04             	sub    $0x4,%esp
 813434b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 813434f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8134352:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8134355:	89 54 24 04          	mov    %edx,0x4(%esp)
 8134359:	89 04 24             	mov    %eax,(%esp)
 813435c:	e8 69 25 00 00       	call   81368ca <_ZNKSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 8134361:	83 ec 04             	sub    $0x4,%esp
 8134364:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8134367:	89 44 24 04          	mov    %eax,0x4(%esp)
 813436b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813436e:	89 04 24             	mov    %eax,(%esp)
 8134371:	e8 80 25 00 00       	call   81368f6 <_ZN9__gnu_cxxneIPKN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8134376:	84 c0                	test   %al,%al
 8134378:	0f 85 32 fe ff ff    	jne    81341b0 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs+0x7e>
 813437e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8134383:	89 d8                	mov    %ebx,%eax
 8134385:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8134388:	83 c4 00             	add    $0x0,%esp
 813438b:	5b                   	pop    %ebx
 813438c:	5e                   	pop    %esi
 813438d:	5f                   	pop    %edi
 813438e:	5d                   	pop    %ebp
 813438f:	c3                   	ret

```

```c
// advancealtar::SyncScript::getItemValueStirng @ 0x8134132

/* advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&,
   advancealtar::AdvanceAltarShopType::T, std::string&) */

undefined4
advancealtar::SyncScript::getItemValueStirng
          (undefined4 param_1,int param_2,int param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_EBX;
  byte bVar9;
  char local_848 [1024];
  char local_448 [1024];
  string local_48 [4];
  __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  cMyTrace local_3c [16];
  __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_2c [4];
  vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *local_28;
  int local_24;
  int local_20;
  
  bVar9 = 0;
  if (param_3 == 1) {
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 0x10);
  }
  else if (param_3 == 2) {
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 0x1c);
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 4);
  }
  local_24 = std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>
             ::size(local_28);
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin();
  local_20 = 0;
  while( true ) {
    std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end();
    bVar2 = __gnu_cxx::operator!=(local_44,local_40);
    if (!bVar2) {
      return 1;
    }
    std::string::string(local_48);
    pcVar3 = local_448;
    for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    }
    iVar8 = __gnu_cxx::
            __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
            ::operator->(local_44);
                    /* try { // try from 081341e2 to 081342fc has its CatchHandler @ 08134304 */
    pcVar3 = (char *)std::string::c_str((string *)(iVar8 + 0xc));
    cVar1 = CodePage::script2Database(pcVar3,local_448);
    if (cVar1 == '\x01') {
      puVar7 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
               ::operator->(local_44);
      sprintf(local_848,"(%d,%d,%d,\'%s\')",param_1,param_3,*puVar7,local_448);
      std::string::operator+=(param_4,local_848);
      if (local_20 < local_24 + -1) {
        std::string::operator+=(param_4,", ");
      }
      bVar2 = true;
    }
    else {
      iVar8 = __gnu_cxx::
              __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
              ::operator->(local_44);
      uVar4 = std::string::c_str((string *)(iVar8 + 0xc));
      uVar5 = CodePage::database();
      uVar6 = CodePage::script();
      cMyTrace::cMyTrace(local_3c,
                         "static bool advancealtar::SyncScript::getItemValueStirng(int, const advancealtar::BuyShopData&, advancealtar::AdvanceAltarShopType::T, std::tstring&)"
                         ,0xd36,5);
      cMyTrace::operator()
                (local_3c,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
                 "static bool advancealtar::SyncScript::getItemValueStirng(int, const advancealtar::BuyShopData&, advancealtar::AdvanceAltarShopType::T, std::tstring&)"
                 ,0xd36);
      unaff_EBX = 0;
      bVar2 = false;
    }
    std::string::~string(local_48);
    if (!bVar2) break;
    __gnu_cxx::
    __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
    ::operator++(local_2c,(int)local_44);
    local_20 = local_20 + 1;
  }
  return unaff_EBX;
}

```

---

## insertItemDescTable

```asm
// === 08133ea6 advancealtar::SyncScript::insertItemDescTable  [0x08133ea6-0x8134131] ===
 8133ea6:	55                   	push   %ebp
 8133ea7:	89 e5                	mov    %esp,%ebp
 8133ea9:	56                   	push   %esi
 8133eaa:	53                   	push   %ebx
 8133eab:	83 ec 40             	sub    $0x40,%esp
 8133eae:	e8 e8 82 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8133eb3:	05 1c 63 00 00       	add    $0x631c,%eax
 8133eb8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8133ebb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8133ebe:	89 04 24             	mov    %eax,(%esp)
 8133ec1:	e8 0a 27 5d 00       	call   87065d0 <_ZNSsC1Ev>
 8133ec6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8133ec9:	89 04 24             	mov    %eax,(%esp)
 8133ecc:	e8 ff 26 5d 00       	call   87065d0 <_ZNSsC1Ev>
 8133ed1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8133ed4:	89 04 24             	mov    %eax,(%esp)
 8133ed7:	e8 e0 28 00 00       	call   81367bc <_ZNKSt3mapIiN12advancealtar11BuyShopDataESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8133edc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8133edf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133ee2:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8133ee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133ee9:	89 04 24             	mov    %eax,(%esp)
 8133eec:	e8 df 28 00 00       	call   81367d0 <_ZNKSt3mapIiN12advancealtar11BuyShopDataESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8133ef1:	83 ec 04             	sub    $0x4,%esp
 8133ef4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8133efb:	e9 a7 01 00 00       	jmp    81340a7 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x201>
 8133f00:	c7 44 24 04 cc c7 b6 	movl   $0x8b6c7cc,0x4(%esp)
 8133f07:	08 
 8133f08:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8133f0b:	89 04 24             	mov    %eax,(%esp)
 8133f0e:	e8 0d 48 5d 00       	call   8708720 <_ZNSsaSEPKc>
 8133f13:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133f16:	89 04 24             	mov    %eax,(%esp)
 8133f19:	e8 b2 26 5d 00       	call   87065d0 <_ZNSsC1Ev>
 8133f1e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133f21:	89 04 24             	mov    %eax,(%esp)
 8133f24:	e8 45 29 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133f29:	8d 58 04             	lea    0x4(%eax),%ebx
 8133f2c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133f2f:	89 04 24             	mov    %eax,(%esp)
 8133f32:	e8 37 29 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133f37:	8b 40 04             	mov    0x4(%eax),%eax
 8133f3a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8133f3d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133f41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8133f48:	00 
 8133f49:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8133f4d:	89 04 24             	mov    %eax,(%esp)
 8133f50:	e8 dd 01 00 00       	call   8134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>
 8133f55:	c7 44 24 04 31 c8 b6 	movl   $0x8b6c831,0x4(%esp)
 8133f5c:	08 
 8133f5d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133f60:	89 04 24             	mov    %eax,(%esp)
 8133f63:	e8 c8 40 5d 00       	call   8708030 <_ZNSspLEPKc>
 8133f68:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133f6b:	89 04 24             	mov    %eax,(%esp)
 8133f6e:	e8 fb 28 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133f73:	8d 58 04             	lea    0x4(%eax),%ebx
 8133f76:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133f79:	89 04 24             	mov    %eax,(%esp)
 8133f7c:	e8 ed 28 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133f81:	8b 40 04             	mov    0x4(%eax),%eax
 8133f84:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8133f87:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133f8b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8133f92:	00 
 8133f93:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8133f97:	89 04 24             	mov    %eax,(%esp)
 8133f9a:	e8 93 01 00 00       	call   8134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>
 8133f9f:	c7 44 24 04 31 c8 b6 	movl   $0x8b6c831,0x4(%esp)
 8133fa6:	08 
 8133fa7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133faa:	89 04 24             	mov    %eax,(%esp)
 8133fad:	e8 7e 40 5d 00       	call   8708030 <_ZNSspLEPKc>
 8133fb2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133fb5:	89 04 24             	mov    %eax,(%esp)
 8133fb8:	e8 b1 28 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133fbd:	8d 58 04             	lea    0x4(%eax),%ebx
 8133fc0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133fc3:	89 04 24             	mov    %eax,(%esp)
 8133fc6:	e8 a3 28 00 00       	call   813686e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEptEv>
 8133fcb:	8b 40 04             	mov    0x4(%eax),%eax
 8133fce:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8133fd1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8133fd5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8133fdc:	00 
 8133fdd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8133fe1:	89 04 24             	mov    %eax,(%esp)
 8133fe4:	e8 49 01 00 00       	call   8134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>
 8133fe9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133fec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133ff0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8133ff3:	89 04 24             	mov    %eax,(%esp)
 8133ff6:	e8 f5 41 5d 00       	call   87081f0 <_ZNSspLERKSs>
 8133ffb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8134000:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8134007:	00 
 8134008:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 813400f:	00 
 8134010:	89 04 24             	mov    %eax,(%esp)
 8134013:	e8 26 12 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8134018:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813401b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813401e:	89 04 24             	mov    %eax,(%esp)
 8134021:	e8 ca 24 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 8134026:	89 44 24 04          	mov    %eax,0x4(%esp)
 813402a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813402d:	89 04 24             	mov    %eax,(%esp)
 8134030:	e8 8b 01 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8134035:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813403c:	00 
 813403d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8134040:	89 04 24             	mov    %eax,(%esp)
 8134043:	e8 de 02 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8134048:	83 f0 01             	xor    $0x1,%eax
 813404b:	84 c0                	test   %al,%al
 813404d:	74 0c                	je     813405b <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x1b5>
 813404f:	be 00 00 00 00       	mov    $0x0,%esi
 8134054:	bb 00 00 00 00       	mov    $0x0,%ebx
 8134059:	eb 1c                	jmp    8134077 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x1d1>
 813405b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8134060:	eb 15                	jmp    8134077 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x1d1>
 8134062:	89 d3                	mov    %edx,%ebx
 8134064:	89 c6                	mov    %eax,%esi
 8134066:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8134069:	89 04 24             	mov    %eax,(%esp)
 813406c:	e8 6f 3b 5d 00       	call   8707be0 <_ZNSsD1Ev>
 8134071:	89 f0                	mov    %esi,%eax
 8134073:	89 da                	mov    %ebx,%edx
 8134075:	eb 66                	jmp    81340dd <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x237>
 8134077:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813407a:	89 04 24             	mov    %eax,(%esp)
 813407d:	e8 5e 3b 5d 00       	call   8707be0 <_ZNSsD1Ev>
 8134082:	85 db                	test   %ebx,%ebx
 8134084:	74 6c                	je     81340f2 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x24c>
 8134086:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8134089:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8134090:	00 
 8134091:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8134094:	89 54 24 04          	mov    %edx,0x4(%esp)
 8134098:	89 04 24             	mov    %eax,(%esp)
 813409b:	e8 90 27 00 00       	call   8136830 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEppEi>
 81340a0:	83 ec 04             	sub    $0x4,%esp
 81340a3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81340a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81340aa:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81340ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81340b1:	89 04 24             	mov    %eax,(%esp)
 81340b4:	e8 3d 27 00 00       	call   81367f6 <_ZNKSt3mapIiN12advancealtar11BuyShopDataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81340b9:	83 ec 04             	sub    $0x4,%esp
 81340bc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81340bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81340c3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81340c6:	89 04 24             	mov    %eax,(%esp)
 81340c9:	e8 4e 27 00 00       	call   813681c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar11BuyShopDataEEEneERKS5_>
 81340ce:	84 c0                	test   %al,%al
 81340d0:	0f 85 2a fe ff ff    	jne    8133f00 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x5a>
 81340d6:	be 01 00 00 00       	mov    $0x1,%esi
 81340db:	eb 15                	jmp    81340f2 <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x24c>
 81340dd:	89 d3                	mov    %edx,%ebx
 81340df:	89 c6                	mov    %eax,%esi
 81340e1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81340e4:	89 04 24             	mov    %eax,(%esp)
 81340e7:	e8 f4 3a 5d 00       	call   8707be0 <_ZNSsD1Ev>
 81340ec:	89 f0                	mov    %esi,%eax
 81340ee:	89 da                	mov    %ebx,%edx
 81340f0:	eb 0d                	jmp    81340ff <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x259>
 81340f2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81340f5:	89 04 24             	mov    %eax,(%esp)
 81340f8:	e8 e3 3a 5d 00       	call   8707be0 <_ZNSsD1Ev>
 81340fd:	eb 1b                	jmp    813411a <_ZN12advancealtar10SyncScript19insertItemDescTableEv+0x274>
 81340ff:	89 d3                	mov    %edx,%ebx
 8134101:	89 c6                	mov    %eax,%esi
 8134103:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8134106:	89 04 24             	mov    %eax,(%esp)
 8134109:	e8 d2 3a 5d 00       	call   8707be0 <_ZNSsD1Ev>
 813410e:	89 f0                	mov    %esi,%eax
 8134110:	89 da                	mov    %ebx,%edx
 8134112:	89 04 24             	mov    %eax,(%esp)
 8134115:	e8 36 f6 9a 00       	call   8ae3750 <_Unwind_Resume>
 813411a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813411d:	89 04 24             	mov    %eax,(%esp)
 8134120:	e8 bb 3a 5d 00       	call   8707be0 <_ZNSsD1Ev>
 8134125:	89 f0                	mov    %esi,%eax
 8134127:	8d 65 f8             	lea    -0x8(%ebp),%esp
 813412a:	83 c4 00             	add    $0x0,%esp
 813412d:	5b                   	pop    %ebx
 813412e:	5e                   	pop    %esi
 813412f:	5d                   	pop    %ebp
 8134130:	c3                   	ret
 8134131:	90                   	nop

```

```c
// advancealtar::SyncScript::insertItemDescTable @ 0x8133ea6

/* advancealtar::SyncScript::insertItemDescTable() */

undefined4 advancealtar::SyncScript::insertItemDescTable(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_ESI;
  string local_34 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  local_30 [4];
  string local_2c [4];
  string local_28 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> local_20 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  *local_1c;
  undefined4 local_18;
  int local_14;
  MySQL *local_10;
  
  iVar2 = G_CDataManager();
  local_1c = (map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
              *)(iVar2 + 0x631c);
  std::string::string(local_28);
                    /* try { // try from 08133ecc to 08133ed0 has its CatchHandler @ 081340ff */
  std::string::string(local_2c);
                    /* try { // try from 08133ed7 to 08133f1d has its CatchHandler @ 081340dd */
  local_18 = std::
             map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
             ::size(local_1c);
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::begin(local_30);
  local_14 = 0;
  while( true ) {
    std::
    map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    std::string::operator=
              (local_28,
               "inSert into charac_advance_altar_item_desc \t\t\t\t  (ridable_id, item_type, item_id, item_desc) values "
              );
    std::string::string(local_34);
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
                    /* try { // try from 08133f50 to 08134047 has its CatchHandler @ 08134062 */
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,0,local_34);
    std::string::operator+=(local_34,",");
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,1,local_34);
    std::string::operator+=(local_34,",");
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,2,local_34);
    std::string::operator+=(local_28,local_34);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    pcVar4 = (char *)std::string::c_str(local_28);
    MySQL::set_query(local_10,pcVar4);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      unaff_ESI = 0;
    }
                    /* try { // try from 0813407d to 081340b8 has its CatchHandler @ 081340dd */
    std::string::~string(local_34);
    if (cVar1 != '\x01') goto LAB_081340f2;
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator++
              (local_20,(int)local_30);
    local_14 = local_14 + 1;
  }
  unaff_ESI = 1;
LAB_081340f2:
                    /* try { // try from 081340f8 to 081340fc has its CatchHandler @ 081340ff */
  std::string::~string(local_2c);
  std::string::~string(local_28);
  return unaff_ESI;
}

```

---

## truncateItemDescTable

```asm
// === 08133e44 advancealtar::SyncScript::truncateItemDescTable  [0x08133e44-0x8133ea5] ===
 8133e44:	55                   	push   %ebp
 8133e45:	89 e5                	mov    %esp,%ebp
 8133e47:	83 ec 28             	sub    $0x28,%esp
 8133e4a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8133e4f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8133e56:	00 
 8133e57:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8133e5e:	00 
 8133e5f:	89 04 24             	mov    %eax,(%esp)
 8133e62:	e8 d7 13 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8133e67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8133e6a:	c7 44 24 04 9c c7 b6 	movl   $0x8b6c79c,0x4(%esp)
 8133e71:	08 
 8133e72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8133e75:	89 04 24             	mov    %eax,(%esp)
 8133e78:	e8 43 03 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8133e7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8133e84:	00 
 8133e85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8133e88:	89 04 24             	mov    %eax,(%esp)
 8133e8b:	e8 96 04 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8133e90:	83 f0 01             	xor    $0x1,%eax
 8133e93:	84 c0                	test   %al,%al
 8133e95:	74 07                	je     8133e9e <_ZN12advancealtar10SyncScript21truncateItemDescTableEv+0x5a>
 8133e97:	b8 00 00 00 00       	mov    $0x0,%eax
 8133e9c:	eb 05                	jmp    8133ea3 <_ZN12advancealtar10SyncScript21truncateItemDescTableEv+0x5f>
 8133e9e:	b8 01 00 00 00       	mov    $0x1,%eax
 8133ea3:	c9                   	leave
 8133ea4:	c3                   	ret
 8133ea5:	90                   	nop

```

```c
// advancealtar::SyncScript::truncateItemDescTable @ 0x8133e44

/* advancealtar::SyncScript::truncateItemDescTable() */

bool advancealtar::SyncScript::truncateItemDescTable(void)

{
  char cVar1;
  MySQL *this;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this,"trUncate table charac_advance_altar_item_desc");
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

