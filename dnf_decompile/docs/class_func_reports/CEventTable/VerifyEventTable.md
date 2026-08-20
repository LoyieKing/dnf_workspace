# VerifyEventTable

`_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE`

`CEventTable::VerifyEventTable(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a1e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a1e0  _ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE
#           CEventTable::VerifyEventTable(std::vector<int, std::allocator<int> >&)
# range [0x0811a1e0, 0x0811a4d3]
0811a1e0 +0x000:  push   %ebp
0811a1e1 +0x001:  mov    %esp,%ebp
0811a1e3 +0x003:  push   %edi
0811a1e4 +0x004:  push   %esi
0811a1e5 +0x005:  push   %ebx
0811a1e6 +0x006:  sub    $0x17c,%esp
0811a1ec +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0811a1f1 +0x011:  movl   $0x0,0x8(%esp)
0811a1f9 +0x019:  movl   $0x1,0x4(%esp)
0811a201 +0x021:  mov    %eax,(%esp)
0811a204 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0811a209 +0x029:  mov    %eax,-0x24(%ebp)
0811a20c +0x02c:  movb   $0x0,-0x1d(%ebp)
0811a210 +0x030:  movl   $0x0,-0x48(%ebp)
0811a217 +0x037:  lea    -0x16f(%ebp),%edx
0811a21d +0x03d:  mov    $0xff,%ebx
0811a222 +0x042:  mov    $0x0,%eax
0811a227 +0x047:  mov    %edx,%ecx
0811a229 +0x049:  and    $0x1,%ecx
0811a22c +0x04c:  test   %ecx,%ecx
0811a22e +0x04e:  je     0811a238 <+0x58>
0811a230 +0x050:  mov    %al,(%edx)
0811a232 +0x052:  add    $0x1,%edx
0811a235 +0x055:  sub    $0x1,%ebx
0811a238 +0x058:  mov    %edx,%ecx
0811a23a +0x05a:  and    $0x2,%ecx
0811a23d +0x05d:  test   %ecx,%ecx
0811a23f +0x05f:  je     0811a24a <+0x6a>
0811a241 +0x061:  mov    %ax,(%edx)
0811a244 +0x064:  add    $0x2,%edx
0811a247 +0x067:  sub    $0x2,%ebx
0811a24a +0x06a:  mov    %ebx,%ecx
0811a24c +0x06c:  shr    $0x2,%ecx
0811a24f +0x06f:  mov    %edx,%edi
0811a251 +0x071:  rep stos %eax,%es:(%edi)
0811a253 +0x073:  mov    %edi,%edx
0811a255 +0x075:  mov    %ebx,%ecx
0811a257 +0x077:  and    $0x2,%ecx
0811a25a +0x07a:  test   %ecx,%ecx
0811a25c +0x07c:  je     0811a264 <+0x84>
0811a25e +0x07e:  mov    %ax,(%edx)
0811a261 +0x081:  add    $0x2,%edx
0811a264 +0x084:  mov    %ebx,%ecx
0811a266 +0x086:  and    $0x1,%ecx
0811a269 +0x089:  test   %ecx,%ecx
0811a26b +0x08b:  je     0811a272 <+0x92>
0811a26d +0x08d:  mov    %al,(%edx)
0811a26f +0x08f:  add    $0x1,%edx
0811a272 +0x092:  movb   $0x0,-0x49(%ebp)
0811a276 +0x096:  movl   $0xffffffff,-0x50(%ebp)
0811a27d +0x09d:  lea    -0x68(%ebp),%eax
0811a280 +0x0a0:  mov    %eax,(%esp)
0811a283 +0x0a3:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0811a288 +0x0a8:  movl   $"seLect event_id, event_name from dnf_event_info",0x4(%esp)
0811a290 +0x0b0:  mov    -0x24(%ebp),%eax
0811a293 +0x0b3:  mov    %eax,(%esp)
0811a296 +0x0b6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0811a29b +0x0bb:  movl   $0x1,0x4(%esp)
0811a2a3 +0x0c3:  mov    -0x24(%ebp),%eax
0811a2a6 +0x0c6:  mov    %eax,(%esp)
0811a2a9 +0x0c9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0811a2ae +0x0ce:  mov    %al,-0x1d(%ebp)
0811a2b1 +0x0d1:  movzbl -0x1d(%ebp),%eax
0811a2b5 +0x0d5:  xor    $0x1,%eax
0811a2b8 +0x0d8:  test   %al,%al
0811a2ba +0x0da:  je     0811a2c6 <+0xe6>
0811a2bc +0x0dc:  mov    $0x0,%ebx
0811a2c1 +0x0e1:  jmp    0811a4bc <+0x2dc>
0811a2c6 +0x0e6:  mov    -0x24(%ebp),%eax
0811a2c9 +0x0e9:  mov    %eax,(%esp)
0811a2cc +0x0ec:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0811a2d1 +0x0f1:  mov    %eax,-0x1c(%ebp)
0811a2d4 +0x0f4:  movl   $0x0,-0x6c(%ebp)
0811a2db +0x0fb:  movl   $0x0,-0x6c(%ebp)
0811a2e2 +0x102:  jmp    0811a40a <+0x22a>
0811a2e7 +0x107:  mov    -0x24(%ebp),%eax
0811a2ea +0x10a:  mov    %eax,(%esp)
0811a2ed +0x10d:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0811a2f2 +0x112:  mov    %al,-0x1d(%ebp)
0811a2f5 +0x115:  movzbl -0x1d(%ebp),%eax
0811a2f9 +0x119:  xor    $0x1,%eax
0811a2fc +0x11c:  test   %al,%al
0811a2fe +0x11e:  jne    0811a41d <+0x23d>
0811a304 +0x124:  lea    -0x48(%ebp),%eax
0811a307 +0x127:  mov    %eax,0x8(%esp)
0811a30b +0x12b:  movl   $0x0,0x4(%esp)
0811a313 +0x133:  mov    -0x24(%ebp),%eax
0811a316 +0x136:  mov    %eax,(%esp)
0811a319 +0x139:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0811a31e +0x13e:  mov    %al,-0x1d(%ebp)
0811a321 +0x141:  movzbl -0x1d(%ebp),%eax
0811a325 +0x145:  xor    $0x1,%eax
0811a328 +0x148:  test   %al,%al
0811a32a +0x14a:  je     0811a336 <+0x156>
0811a32c +0x14c:  mov    $0x0,%ebx
0811a331 +0x151:  jmp    0811a4bc <+0x2dc>
0811a336 +0x156:  movl   $0xff,0xc(%esp)
0811a33e +0x15e:  lea    -0x16f(%ebp),%eax
0811a344 +0x164:  mov    %eax,0x8(%esp)
0811a348 +0x168:  movl   $0x1,0x4(%esp)
0811a350 +0x170:  mov    -0x24(%ebp),%eax
0811a353 +0x173:  mov    %eax,(%esp)
0811a356 +0x176:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0811a35b +0x17b:  mov    %al,-0x1d(%ebp)
0811a35e +0x17e:  movzbl -0x1d(%ebp),%eax
0811a362 +0x182:  xor    $0x1,%eax
0811a365 +0x185:  test   %al,%al
0811a367 +0x187:  je     0811a373 <+0x193>
0811a369 +0x189:  mov    $0x0,%ebx
0811a36e +0x18e:  jmp    0811a4bc <+0x2dc>
0811a373 +0x193:  mov    -0x48(%ebp),%eax
0811a376 +0x196:  lea    -0x49(%ebp),%edx
0811a379 +0x199:  mov    %edx,0x8(%esp)
0811a37d +0x19d:  lea    -0x16f(%ebp),%edx
0811a383 +0x1a3:  mov    %edx,0x4(%esp)
0811a387 +0x1a7:  mov    %eax,(%esp)
0811a38a +0x1aa:  call   0811a15d <_Z15_FindEventTableiPKcRb>  ; _FindEventTable(int, char const*, bool&)
0811a38f +0x1af:  mov    %eax,-0x50(%ebp)
0811a392 +0x1b2:  mov    -0x50(%ebp),%eax
0811a395 +0x1b5:  not    %eax
0811a397 +0x1b7:  shr    $0x1f,%eax
0811a39a +0x1ba:  test   %al,%al
0811a39c +0x1bc:  je     0811a401 <+0x221>
0811a39e +0x1be:  movzbl -0x49(%ebp),%eax
0811a3a2 +0x1c2:  test   %al,%al
0811a3a4 +0x1c4:  je     0811a3b0 <+0x1d0>
0811a3a6 +0x1c6:  mov    $0x0,%ebx
0811a3ab +0x1cb:  jmp    0811a4bc <+0x2dc>
0811a3b0 +0x1d0:  movl   $0x1,-0x2c(%ebp)
0811a3b7 +0x1d7:  lea    -0x34(%ebp),%eax
0811a3ba +0x1da:  lea    -0x2c(%ebp),%edx
0811a3bd +0x1dd:  mov    %edx,0x8(%esp)
0811a3c1 +0x1e1:  lea    -0x50(%ebp),%edx
0811a3c4 +0x1e4:  mov    %edx,0x4(%esp)
0811a3c8 +0x1e8:  mov    %eax,(%esp)
0811a3cb +0x1eb:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
0811a3d0 +0x1f0:  sub    $0x4,%esp
0811a3d3 +0x1f3:  lea    -0x34(%ebp),%eax
0811a3d6 +0x1f6:  mov    %eax,0x4(%esp)
0811a3da +0x1fa:  lea    -0x3c(%ebp),%eax
0811a3dd +0x1fd:  mov    %eax,(%esp)
0811a3e0 +0x200:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0811a3e5 +0x205:  lea    -0x44(%ebp),%eax
0811a3e8 +0x208:  lea    -0x3c(%ebp),%edx
0811a3eb +0x20b:  mov    %edx,0x8(%esp)
0811a3ef +0x20f:  lea    -0x68(%ebp),%edx
0811a3f2 +0x212:  mov    %edx,0x4(%esp)
0811a3f6 +0x216:  mov    %eax,(%esp)
0811a3f9 +0x219:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0811a3fe +0x21e:  sub    $0x4,%esp
0811a401 +0x221:  mov    -0x6c(%ebp),%eax
0811a404 +0x224:  add    $0x1,%eax
0811a407 +0x227:  mov    %eax,-0x6c(%ebp)
0811a40a +0x22a:  mov    -0x6c(%ebp),%eax
0811a40d +0x22d:  cmp    -0x1c(%ebp),%eax
0811a410 +0x230:  setl   %al
0811a413 +0x233:  test   %al,%al
0811a415 +0x235:  jne    0811a2e7 <+0x107>
0811a41b +0x23b:  jmp    0811a41e <+0x23e>
0811a41d +0x23d:  nop
0811a41e +0x23e:  movl   $0x0,-0x6c(%ebp)
0811a425 +0x245:  jmp    0811a489 <+0x2a9>
0811a427 +0x247:  lea    -0x70(%ebp),%eax
0811a42a +0x24a:  lea    -0x6c(%ebp),%edx
0811a42d +0x24d:  mov    %edx,0x8(%esp)
0811a431 +0x251:  lea    -0x68(%ebp),%edx
0811a434 +0x254:  mov    %edx,0x4(%esp)
0811a438 +0x258:  mov    %eax,(%esp)
0811a43b +0x25b:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0811a440 +0x260:  sub    $0x4,%esp
0811a443 +0x263:  lea    -0x28(%ebp),%eax
0811a446 +0x266:  lea    -0x68(%ebp),%edx
0811a449 +0x269:  mov    %edx,0x4(%esp)
0811a44d +0x26d:  mov    %eax,(%esp)
0811a450 +0x270:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0811a455 +0x275:  sub    $0x4,%esp
0811a458 +0x278:  lea    -0x28(%ebp),%eax
0811a45b +0x27b:  mov    %eax,0x4(%esp)
0811a45f +0x27f:  lea    -0x70(%ebp),%eax
0811a462 +0x282:  mov    %eax,(%esp)
0811a465 +0x285:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0811a46a +0x28a:  test   %al,%al
0811a46c +0x28c:  je     0811a480 <+0x2a0>
0811a46e +0x28e:  lea    -0x6c(%ebp),%eax
0811a471 +0x291:  mov    %eax,0x4(%esp)
0811a475 +0x295:  mov    0x8(%ebp),%eax
0811a478 +0x298:  mov    %eax,(%esp)
0811a47b +0x29b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0811a480 +0x2a0:  mov    -0x6c(%ebp),%eax
0811a483 +0x2a3:  add    $0x1,%eax
0811a486 +0x2a6:  mov    %eax,-0x6c(%ebp)
0811a489 +0x2a9:  call   0811a0d4 <_ZN11CEventTable18GetEventTableCountEv>  ; CEventTable::GetEventTableCount()
0811a48e +0x2ae:  mov    -0x6c(%ebp),%edx
0811a491 +0x2b1:  cmp    %edx,%eax
0811a493 +0x2b3:  setg   %al
0811a496 +0x2b6:  test   %al,%al
0811a498 +0x2b8:  jne    0811a427 <+0x247>
0811a49a +0x2ba:  mov    $0x1,%ebx
0811a49f +0x2bf:  jmp    0811a4bc <+0x2dc>
0811a4a1 +0x2c1:  mov    %edx,%ebx
0811a4a3 +0x2c3:  mov    %eax,%esi
0811a4a5 +0x2c5:  lea    -0x68(%ebp),%eax
0811a4a8 +0x2c8:  mov    %eax,(%esp)
0811a4ab +0x2cb:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0811a4b0 +0x2d0:  mov    %esi,%eax
0811a4b2 +0x2d2:  mov    %ebx,%edx
0811a4b4 +0x2d4:  mov    %eax,(%esp)
0811a4b7 +0x2d7:  call   08ae3750 <_Unwind_Resume>
0811a4bc +0x2dc:  lea    -0x68(%ebp),%eax
0811a4bf +0x2df:  mov    %eax,(%esp)
0811a4c2 +0x2e2:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0811a4c7 +0x2e7:  mov    %ebx,%eax
0811a4c9 +0x2e9:  lea    -0xc(%ebp),%esp
0811a4cc +0x2ec:  add    $0x0,%esp
0811a4cf +0x2ef:  pop    %ebx
0811a4d0 +0x2f0:  pop    %esi
0811a4d1 +0x2f1:  pop    %edi
0811a4d2 +0x2f2:  pop    %ebp
0811a4d3 +0x2f3:  ret
```

## 反编译 C

```c
// CEventTable::VerifyEventTable @ 0x811a1e0

/* CEventTable::VerifyEventTable(std::vector<int, std::allocator<int> >&) */

undefined4 CEventTable::VerifyEventTable(vector *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  char local_173;
  char local_172 [254];
  _Rb_tree_iterator<std::pair<int_const,int>> local_74 [4];
  int local_70;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_6c [24];
  int local_54;
  bool local_4d;
  int local_4c;
  pair local_48 [8];
  pair<int_const,int> local_40 [8];
  int local_38 [2];
  undefined4 local_30;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  bVar8 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_21 = 0;
  local_4c = 0;
  pcVar4 = &local_173;
  uVar5 = 0xff;
  bVar7 = ((uint)pcVar4 & 1) != 0;
  if (bVar7) {
    local_173 = '\0';
    pcVar4 = local_172;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar7) {
    *pcVar4 = '\0';
  }
  local_4d = false;
  local_54 = -1;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_6c);
                    /* try { // try from 0811a296 to 0811a47f has its CatchHandler @ 0811a4a1 */
  MySQL::set_query(local_28,"seLect event_id, event_name from dnf_event_info");
  local_21 = MySQL::exec(local_28,true);
  if (local_21 == '\x01') {
    local_20 = MySQL::get_n_rows(local_28);
    local_70 = 0;
    while ((local_70 < local_20 && (local_21 = MySQL::fetch(local_28), local_21 == '\x01'))) {
      local_21 = MySQL::get_int(local_28,0,&local_4c);
      if (local_21 != '\x01') {
        uVar6 = 0;
        goto LAB_0811a4bc;
      }
      local_21 = MySQL::get_str(local_28,1,&local_173,0xff);
      if (local_21 != '\x01') {
        uVar6 = 0;
        goto LAB_0811a4bc;
      }
      local_54 = _FindEventTable(local_4c,&local_173,&local_4d);
      if (-1 < local_54) {
        if (local_4d != false) {
          uVar6 = 0;
          goto LAB_0811a4bc;
        }
        local_30 = 1;
        std::make_pair<int&,int>(local_38,&local_54);
        std::pair<int_const,int>::pair<int,int>(local_40,(pair *)local_38);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_48);
      }
      local_70 = local_70 + 1;
    }
    local_70 = 0;
    while (iVar2 = GetEventTableCount(), local_70 < iVar2) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_74);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_74,(_Rb_tree_iterator *)local_2c);
      if (cVar1 != '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,&local_70);
      }
      local_70 = local_70 + 1;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_0811a4bc:
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_6c);
  return uVar6;
}
```
