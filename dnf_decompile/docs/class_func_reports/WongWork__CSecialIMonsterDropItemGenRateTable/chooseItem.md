# chooseItem

`_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE`

`WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int, ENUM_DUNGEON_DIFFICULTY, ENUM_ITEM_DROP_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecialIMonsterDropItemGenRateTable` | `0x08534fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534fce  _ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE
#           WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int, ENUM_DUNGEON_DIFFICULTY, ENUM_ITEM_DROP_DUNGEON_TYPE)
# range [0x08534fce, 0x085352a5]
08534fce +0x000:  push   %ebp
08534fcf +0x001:  mov    %esp,%ebp
08534fd1 +0x003:  push   %edi
08534fd2 +0x004:  push   %esi
08534fd3 +0x005:  push   %ebx
08534fd4 +0x006:  sub    $0x6c,%esp
08534fd7 +0x009:  cmpl   $0x2,0xc(%ebp)
08534fdb +0x00d:  jne    08535019 <+0x4b>
08534fdd +0x00f:  movl   $0xffffffff,-0x1c(%ebp)
08534fe4 +0x016:  mov    0x8(%ebp),%eax
08534fe7 +0x019:  lea    0x211fb4(%eax),%edx
08534fed +0x01f:  mov    0x14(%ebp),%eax
08534ff0 +0x022:  mov    %eax,0x8(%esp)
08534ff4 +0x026:  lea    0x10(%ebp),%eax
08534ff7 +0x029:  mov    %eax,0x4(%esp)
08534ffb +0x02d:  mov    %edx,(%esp)
08534ffe +0x030:  call   085f1560 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi>  ; random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int)
08535003 +0x035:  mov    %eax,-0x1c(%ebp)
08535006 +0x038:  cmpl   $0xffffffff,-0x1c(%ebp)
0853500a +0x03c:  setne  %al
0853500d +0x03f:  test   %al,%al
0853500f +0x041:  je     08535019 <+0x4b>
08535011 +0x043:  mov    -0x1c(%ebp),%eax
08535014 +0x046:  jmp    0853529a <+0x2cc>
08535019 +0x04b:  mov    0x18(%ebp),%ecx
0853501c +0x04e:  mov    0x1c(%ebp),%esi
0853501f +0x051:  mov    0xc(%ebp),%ebx
08535022 +0x054:  mov    0x10(%ebp),%eax
08535025 +0x057:  mov    %eax,%edi
08535027 +0x059:  mov    0x14(%ebp),%edx
0853502a +0x05c:  mov    %edx,%eax
0853502c +0x05e:  add    %eax,%eax
0853502e +0x060:  add    %edx,%eax
08535030 +0x062:  shl    $0x3,%eax
08535033 +0x065:  imul   $0x12d8,%edi,%edx
08535039 +0x06b:  lea    (%eax,%edx,1),%edi
0853503c +0x06e:  imul   $&_ZL14gUnicodeBuffer+0x19024,%esi,%edx
08535042 +0x074:  imul   $0x7110,%ebx,%eax
08535048 +0x07a:  lea    (%edx,%eax,1),%eax
0853504b +0x07d:  lea    (%edi,%eax,1),%edx
0853504e +0x080:  imul   $0x69ff0,%ecx,%eax
08535054 +0x086:  lea    (%edx,%eax,1),%eax
08535057 +0x089:  add    0x8(%ebp),%eax
0853505a +0x08c:  mov    %eax,(%esp)
0853505d +0x08f:  call   0853af60 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x11ec>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x11ec
08535062 +0x094:  test   %eax,%eax
08535064 +0x096:  sete   %al
08535067 +0x099:  test   %al,%al
08535069 +0x09b:  je     08535075 <+0xa7>
0853506b +0x09d:  mov    $0xffffffff,%eax
08535070 +0x0a2:  jmp    0853529a <+0x2cc>
08535075 +0x0a7:  lea    -0x48(%ebp),%eax
08535078 +0x0aa:  mov    %eax,(%esp)
0853507b +0x0ad:  call   0853af74 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1200>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1200
08535080 +0x0b2:  mov    0x18(%ebp),%ecx
08535083 +0x0b5:  mov    0x1c(%ebp),%esi
08535086 +0x0b8:  mov    0xc(%ebp),%ebx
08535089 +0x0bb:  mov    0x10(%ebp),%eax
0853508c +0x0be:  mov    %eax,%edi
0853508e +0x0c0:  mov    0x14(%ebp),%edx
08535091 +0x0c3:  mov    %edx,%eax
08535093 +0x0c5:  add    %eax,%eax
08535095 +0x0c7:  add    %edx,%eax
08535097 +0x0c9:  shl    $0x3,%eax
0853509a +0x0cc:  imul   $0x12d8,%edi,%edx
085350a0 +0x0d2:  lea    (%eax,%edx,1),%edi
085350a3 +0x0d5:  imul   $&_ZL14gUnicodeBuffer+0x19024,%esi,%edx
085350a9 +0x0db:  imul   $0x7110,%ebx,%eax
085350af +0x0e1:  lea    (%edx,%eax,1),%eax
085350b2 +0x0e4:  lea    (%edi,%eax,1),%edx
085350b5 +0x0e7:  imul   $0x69ff0,%ecx,%eax
085350bb +0x0ed:  lea    (%edx,%eax,1),%eax
085350be +0x0f0:  mov    %eax,%edx
085350c0 +0x0f2:  add    0x8(%ebp),%edx
085350c3 +0x0f5:  lea    -0x5c(%ebp),%eax
085350c6 +0x0f8:  mov    %edx,0x4(%esp)
085350ca +0x0fc:  mov    %eax,(%esp)
085350cd +0x0ff:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
085350d2 +0x104:  sub    $0x4,%esp
085350d5 +0x107:  mov    -0x5c(%ebp),%eax
085350d8 +0x10a:  mov    %eax,-0x48(%ebp)
085350db +0x10d:  lea    -0x44(%ebp),%eax
085350de +0x110:  movl   $0x0,0x8(%esp)
085350e6 +0x118:  lea    -0x48(%ebp),%edx
085350e9 +0x11b:  mov    %edx,0x4(%esp)
085350ed +0x11f:  mov    %eax,(%esp)
085350f0 +0x122:  call   0853af82 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x120e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x120e
085350f5 +0x127:  sub    $0x4,%esp
085350f8 +0x12a:  lea    -0x48(%ebp),%eax
085350fb +0x12d:  mov    %eax,(%esp)
085350fe +0x130:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
08535103 +0x135:  mov    (%eax),%eax
08535105 +0x137:  mov    %eax,-0x24(%ebp)
08535108 +0x13a:  mov    -0x24(%ebp),%eax
0853510b +0x13d:  mov    %eax,-0x40(%ebp)
0853510e +0x140:  mov    0x8(%ebp),%eax
08535111 +0x143:  mov    0x211fb0(%eax),%eax
08535117 +0x149:  lea    -0x40(%ebp),%edx
0853511a +0x14c:  mov    %edx,0x4(%esp)
0853511e +0x150:  mov    %eax,(%esp)
08535121 +0x153:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08535126 +0x158:  mov    %eax,-0x4c(%ebp)
08535129 +0x15b:  movl   $0xffffffff,-0x20(%ebp)
08535130 +0x162:  mov    0x18(%ebp),%ecx
08535133 +0x165:  mov    0x1c(%ebp),%esi
08535136 +0x168:  mov    0xc(%ebp),%ebx
08535139 +0x16b:  mov    0x10(%ebp),%eax
0853513c +0x16e:  mov    %eax,%edi
0853513e +0x170:  mov    0x14(%ebp),%edx
08535141 +0x173:  mov    %edx,%eax
08535143 +0x175:  add    %eax,%eax
08535145 +0x177:  add    %edx,%eax
08535147 +0x179:  shl    $0x3,%eax
0853514a +0x17c:  imul   $0x12d8,%edi,%edx
08535150 +0x182:  lea    (%eax,%edx,1),%edi
08535153 +0x185:  imul   $&_ZL14gUnicodeBuffer+0x19024,%esi,%edx
08535159 +0x18b:  imul   $0x7110,%ebx,%eax
0853515f +0x191:  lea    (%edx,%eax,1),%eax
08535162 +0x194:  lea    (%edi,%eax,1),%edx
08535165 +0x197:  imul   $0x69ff0,%ecx,%eax
0853516b +0x19d:  lea    (%edx,%eax,1),%eax
0853516e +0x1a0:  mov    %eax,%edx
08535170 +0x1a2:  add    0x8(%ebp),%edx
08535173 +0x1a5:  lea    -0x5c(%ebp),%eax
08535176 +0x1a8:  lea    -0x4c(%ebp),%ecx
08535179 +0x1ab:  mov    %ecx,0x8(%esp)
0853517d +0x1af:  mov    %edx,0x4(%esp)
08535181 +0x1b3:  mov    %eax,(%esp)
08535184 +0x1b6:  call   0853afc0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x124c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x124c
08535189 +0x1bb:  sub    $0x4,%esp
0853518c +0x1be:  mov    -0x5c(%ebp),%eax
0853518f +0x1c1:  mov    %eax,-0x48(%ebp)
08535192 +0x1c4:  mov    0x18(%ebp),%ecx
08535195 +0x1c7:  mov    0x1c(%ebp),%esi
08535198 +0x1ca:  mov    0xc(%ebp),%ebx
0853519b +0x1cd:  mov    0x10(%ebp),%eax
0853519e +0x1d0:  mov    %eax,%edi
085351a0 +0x1d2:  mov    0x14(%ebp),%edx
085351a3 +0x1d5:  mov    %edx,%eax
085351a5 +0x1d7:  add    %eax,%eax
085351a7 +0x1d9:  add    %edx,%eax
085351a9 +0x1db:  shl    $0x3,%eax
085351ac +0x1de:  imul   $0x12d8,%edi,%edx
085351b2 +0x1e4:  lea    (%eax,%edx,1),%edi
085351b5 +0x1e7:  imul   $&_ZL14gUnicodeBuffer+0x19024,%esi,%edx
085351bb +0x1ed:  imul   $0x7110,%ebx,%eax
085351c1 +0x1f3:  lea    (%edx,%eax,1),%eax
085351c4 +0x1f6:  lea    (%edi,%eax,1),%edx
085351c7 +0x1f9:  imul   $0x69ff0,%ecx,%eax
085351cd +0x1ff:  lea    (%edx,%eax,1),%eax
085351d0 +0x202:  mov    %eax,%edx
085351d2 +0x204:  add    0x8(%ebp),%edx
085351d5 +0x207:  lea    -0x3c(%ebp),%eax
085351d8 +0x20a:  mov    %edx,0x4(%esp)
085351dc +0x20e:  mov    %eax,(%esp)
085351df +0x211:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
085351e4 +0x216:  sub    $0x4,%esp
085351e7 +0x219:  lea    -0x3c(%ebp),%eax
085351ea +0x21c:  mov    %eax,0x4(%esp)
085351ee +0x220:  lea    -0x48(%ebp),%eax
085351f1 +0x223:  mov    %eax,(%esp)
085351f4 +0x226:  call   082c068c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12587>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12587
085351f9 +0x22b:  test   %al,%al
085351fb +0x22d:  je     0853521a <+0x24c>
085351fd +0x22f:  lea    -0x38(%ebp),%eax
08535200 +0x232:  movl   $0x0,0x8(%esp)
08535208 +0x23a:  lea    -0x48(%ebp),%edx
0853520b +0x23d:  mov    %edx,0x4(%esp)
0853520f +0x241:  mov    %eax,(%esp)
08535212 +0x244:  call   0853af82 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x120e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x120e
08535217 +0x249:  sub    $0x4,%esp
0853521a +0x24c:  lea    -0x48(%ebp),%eax
0853521d +0x24f:  mov    %eax,(%esp)
08535220 +0x252:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
08535225 +0x257:  mov    0x4(%eax),%eax
08535228 +0x25a:  mov    %eax,-0x20(%ebp)
0853522b +0x25d:  jmp    08535297 <+0x2c9>
0853522d +0x25f:  mov    %eax,(%esp)
08535230 +0x262:  call   08725ce0 <__cxa_begin_catch>
08535235 +0x267:  movl   $0x5,0xc(%esp)
0853523d +0x26f:  movl   $0x2e5,0x8(%esp)
08535245 +0x277:  movl   $&_ZZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
0853524d +0x27f:  lea    -0x34(%ebp),%eax
08535250 +0x282:  mov    %eax,(%esp)
08535253 +0x285:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08535258 +0x28a:  movl   $0x2e5,0xc(%esp)
08535260 +0x292:  movl   $&_ZZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
08535268 +0x29a:  movl   $"[%s][%d]",0x4(%esp)
08535270 +0x2a2:  lea    -0x34(%ebp),%eax
08535273 +0x2a5:  mov    %eax,(%esp)
08535276 +0x2a8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0853527b +0x2ad:  jmp    08535292 <+0x2c4>
0853527d +0x2af:  mov    %edx,%ebx
0853527f +0x2b1:  mov    %eax,%esi
08535281 +0x2b3:  call   08725c30 <__cxa_end_catch>
08535286 +0x2b8:  mov    %esi,%eax
08535288 +0x2ba:  mov    %ebx,%edx
0853528a +0x2bc:  mov    %eax,(%esp)
0853528d +0x2bf:  call   08ae3750 <_Unwind_Resume>
08535292 +0x2c4:  call   08725c30 <__cxa_end_catch>
08535297 +0x2c9:  mov    -0x20(%ebp),%eax
0853529a +0x2cc:  lea    -0xc(%ebp),%esp
0853529d +0x2cf:  add    $0x0,%esp
085352a0 +0x2d2:  pop    %ebx
085352a1 +0x2d3:  pop    %esi
085352a2 +0x2d4:  pop    %edi
085352a3 +0x2d5:  pop    %ebp
085352a4 +0x2d6:  ret
085352a5 +0x2d7:  nop
```

## 反编译 C

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem @ 0x8534fce

/* WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY,
   int, ENUM_DUNGEON_DIFFICULTY, ENUM_ITEM_DROP_DUNGEON_TYPE) */

int __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem
          (CSecialIMonsterDropItemGenRateTable *this,int param_2,int param_3,int param_4,int param_5
          ,int param_6)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_48 [4];
  ulong local_44;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_40 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_3c [20];
  ulong local_28;
  undefined4 local_24;
  int local_20;
  
  if (param_2 == 2) {
    local_20 = 0xffffffff;
    local_20 = random_option::CRandomOptionItemHandle::choose_item
                         ((CRandomOptionItemHandle *)(this + 0x211fb4),(ENUM_RARITY *)&param_3,
                          param_4);
    if (local_20 != -1) {
      return local_20;
    }
  }
  iVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::size((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_6 * 0x23550 + param_2 * 0x7110
                            + param_5 * 0x69ff0));
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *)local_60);
    local_4c = local_60[0];
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_48,(int)&local_4c);
    puVar3 = (ulong *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    local_44 = *puVar3;
    local_28 = local_44;
    local_50 = CMTRand::randInt(*(CMTRand **)(this + 0x211fb0),&local_44);
    local_24 = 0xffffffff;
                    /* try { // try from 08535184 to 08535216 has its CatchHandler @ 0853522d */
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::lower_bound((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)local_60,
                  (uint *)(this + param_4 * 0x18 + param_3 * 0x12d8 +
                                  param_6 * 0x23550 + param_2 * 0x7110 + param_5 * 0x69ff0));
    local_4c = local_60[0];
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_40);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c,
                       (_Rb_tree_iterator *)local_40);
    if (cVar1 != '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_3c,(int)&local_4c)
      ;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}
```
