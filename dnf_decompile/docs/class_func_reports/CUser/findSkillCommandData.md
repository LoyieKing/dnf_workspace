# findSkillCommandData

`_ZN5CUser20findSkillCommandDataEiR18STSkillCommandData`

`CUser::findSkillCommandData(int, STSkillCommandData&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08654b94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08654b94  _ZN5CUser20findSkillCommandDataEiR18STSkillCommandData
#           CUser::findSkillCommandData(int, STSkillCommandData&)
# range [0x08654b94, 0x08654e69]
08654b94 +0x000:  push   %ebp
08654b95 +0x001:  mov    %esp,%ebp
08654b97 +0x003:  push   %ebx
08654b98 +0x004:  sub    $0x74,%esp
08654b9b +0x007:  mov    0x8(%ebp),%eax
08654b9e +0x00a:  mov    %eax,(%esp)
08654ba1 +0x00d:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
08654ba6 +0x012:  mov    %eax,-0x24(%ebp)
08654ba9 +0x015:  cmpl   $0x0,-0x24(%ebp)
08654bad +0x019:  jne    08654bb9 <+0x25>
08654baf +0x01b:  mov    $0x0,%eax
08654bb4 +0x020:  jmp    08654e65 <+0x2d1>
08654bb9 +0x025:  lea    -0x54(%ebp),%eax
08654bbc +0x028:  lea    0xc(%ebp),%edx
08654bbf +0x02b:  mov    %edx,0x8(%esp)
08654bc3 +0x02f:  mov    -0x24(%ebp),%edx
08654bc6 +0x032:  mov    %edx,0x4(%esp)
08654bca +0x036:  mov    %eax,(%esp)
08654bcd +0x039:  call   0869ab5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73af
08654bd2 +0x03e:  sub    $0x4,%esp
08654bd5 +0x041:  lea    -0x50(%ebp),%eax
08654bd8 +0x044:  mov    -0x24(%ebp),%edx
08654bdb +0x047:  mov    %edx,0x4(%esp)
08654bdf +0x04b:  mov    %eax,(%esp)
08654be2 +0x04e:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
08654be7 +0x053:  sub    $0x4,%esp
08654bea +0x056:  lea    -0x50(%ebp),%eax
08654bed +0x059:  mov    %eax,0x4(%esp)
08654bf1 +0x05d:  lea    -0x54(%ebp),%eax
08654bf4 +0x060:  mov    %eax,(%esp)
08654bf7 +0x063:  call   0869ab1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x736f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x736f
08654bfc +0x068:  test   %al,%al
08654bfe +0x06a:  je     08654c90 <+0xfc>
08654c04 +0x070:  lea    -0x54(%ebp),%eax
08654c07 +0x073:  mov    %eax,(%esp)
08654c0a +0x076:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654c0f +0x07b:  movzwl 0x4(%eax),%edx
08654c13 +0x07f:  mov    0x10(%ebp),%eax
08654c16 +0x082:  mov    %dx,(%eax)
08654c19 +0x085:  lea    -0x54(%ebp),%eax
08654c1c +0x088:  mov    %eax,(%esp)
08654c1f +0x08b:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654c24 +0x090:  movzbl 0x6(%eax),%edx
08654c28 +0x094:  mov    0x10(%ebp),%eax
08654c2b +0x097:  mov    %dl,0x2(%eax)
08654c2e +0x09a:  movl   $0x0,-0x20(%ebp)
08654c35 +0x0a1:  jmp    08654c72 <+0xde>
08654c37 +0x0a3:  mov    -0x20(%ebp),%ebx
08654c3a +0x0a6:  lea    -0x54(%ebp),%eax
08654c3d +0x0a9:  mov    %eax,(%esp)
08654c40 +0x0ac:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654c45 +0x0b1:  mov    -0x20(%ebp),%edx
08654c48 +0x0b4:  movzbl 0x7(%eax,%edx,1),%edx
08654c4d +0x0b9:  mov    0x10(%ebp),%eax
08654c50 +0x0bc:  mov    %dl,0x3(%eax,%ebx,1)
08654c54 +0x0c0:  mov    -0x20(%ebp),%eax
08654c57 +0x0c3:  mov    0x10(%ebp),%edx
08654c5a +0x0c6:  movzbl 0x3(%edx,%eax,1),%eax
08654c5f +0x0cb:  cmp    $0x7,%al
08654c61 +0x0cd:  jne    08654c6e <+0xda>
08654c63 +0x0cf:  mov    -0x20(%ebp),%eax
08654c66 +0x0d2:  mov    0x10(%ebp),%edx
08654c69 +0x0d5:  movb   $0x8,0x3(%edx,%eax,1)
08654c6e +0x0da:  addl   $0x1,-0x20(%ebp)
08654c72 +0x0de:  mov    0x10(%ebp),%eax
08654c75 +0x0e1:  movzbl 0x2(%eax),%eax
08654c79 +0x0e5:  movsbl %al,%eax
08654c7c +0x0e8:  cmp    -0x20(%ebp),%eax
08654c7f +0x0eb:  setg   %al
08654c82 +0x0ee:  test   %al,%al
08654c84 +0x0f0:  jne    08654c37 <+0xa3>
08654c86 +0x0f2:  mov    $0x1,%eax
08654c8b +0x0f7:  jmp    08654e65 <+0x2d1>
08654c90 +0x0fc:  mov    0x8(%ebp),%eax
08654c93 +0x0ff:  mov    %eax,(%esp)
08654c96 +0x102:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08654c9b +0x107:  mov    %eax,%ebx
08654c9d +0x109:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08654ca2 +0x10e:  mov    0x10(%eax),%eax
08654ca5 +0x111:  mov    %ebx,0x4(%esp)
08654ca9 +0x115:  mov    %eax,(%esp)
08654cac +0x118:  call   08374c58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec24
08654cb1 +0x11d:  mov    %eax,-0x1c(%ebp)
08654cb4 +0x120:  cmpl   $0x0,-0x1c(%ebp)
08654cb8 +0x124:  jne    08654cc4 <+0x130>
08654cba +0x126:  mov    $0x0,%eax
08654cbf +0x12b:  jmp    08654e65 <+0x2d1>
08654cc4 +0x130:  lea    -0x5c(%ebp),%eax
08654cc7 +0x133:  lea    0xc(%ebp),%edx
08654cca +0x136:  mov    %edx,0x8(%esp)
08654cce +0x13a:  mov    -0x1c(%ebp),%edx
08654cd1 +0x13d:  mov    %edx,0x4(%esp)
08654cd5 +0x141:  mov    %eax,(%esp)
08654cd8 +0x144:  call   0838fba8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f648>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f648
08654cdd +0x149:  sub    $0x4,%esp
08654ce0 +0x14c:  lea    -0x4c(%ebp),%eax
08654ce3 +0x14f:  mov    -0x1c(%ebp),%edx
08654ce6 +0x152:  mov    %edx,0x4(%esp)
08654cea +0x156:  mov    %eax,(%esp)
08654ced +0x159:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
08654cf2 +0x15e:  sub    $0x4,%esp
08654cf5 +0x161:  lea    -0x4c(%ebp),%eax
08654cf8 +0x164:  mov    %eax,0x4(%esp)
08654cfc +0x168:  lea    -0x5c(%ebp),%eax
08654cff +0x16b:  mov    %eax,(%esp)
08654d02 +0x16e:  call   0838f724 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f1c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f1c4
08654d07 +0x173:  test   %al,%al
08654d09 +0x175:  je     08654e2a <+0x296>
08654d0f +0x17b:  lea    -0x5c(%ebp),%eax
08654d12 +0x17e:  mov    %eax,(%esp)
08654d15 +0x181:  call   0838fb5e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5fe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5fe
08654d1a +0x186:  mov    0x4(%eax),%eax
08654d1d +0x189:  mov    %eax,-0x18(%ebp)
08654d20 +0x18c:  lea    -0x5c(%ebp),%eax
08654d23 +0x18f:  mov    %eax,(%esp)
08654d26 +0x192:  call   0838fb5e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5fe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5fe
08654d2b +0x197:  mov    (%eax),%eax
08654d2d +0x199:  mov    %eax,-0x14(%ebp)
08654d30 +0x19c:  mov    -0x18(%ebp),%eax
08654d33 +0x19f:  add    $0x124,%eax
08654d38 +0x1a4:  mov    %eax,(%esp)
08654d3b +0x1a7:  call   083abeb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45e7e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45e7e
08654d40 +0x1ac:  mov    %eax,-0x10(%ebp)
08654d43 +0x1af:  cmpl   $0x5,-0x10(%ebp)
08654d47 +0x1b3:  jg     08654d4f <+0x1bb>
08654d49 +0x1b5:  cmpl   $0x0,-0x10(%ebp)
08654d4d +0x1b9:  jg     08654da3 <+0x20f>
08654d4f +0x1bb:  cmpl   $0x0,-0x10(%ebp)
08654d53 +0x1bf:  je     08654d99 <+0x205>
08654d55 +0x1c1:  movl   $0x5,0xc(%esp)
08654d5d +0x1c9:  movl   $0x2102,0x8(%esp)
08654d65 +0x1d1:  movl   $&_ZZN5CUser20findSkillCommandDataEiR18STSkillCommandDataE19__PRETTY_FUNCTION__,0x4(%esp)
08654d6d +0x1d9:  lea    -0x44(%ebp),%eax
08654d70 +0x1dc:  mov    %eax,(%esp)
08654d73 +0x1df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08654d78 +0x1e4:  mov    -0x10(%ebp),%eax
08654d7b +0x1e7:  mov    %eax,0xc(%esp)
08654d7f +0x1eb:  mov    -0x14(%ebp),%eax
08654d82 +0x1ee:  mov    %eax,0x8(%esp)
08654d86 +0x1f2:  movl   $"SKILL_COMMAND_LOG : ABNOMAL COMMAND CNT!! (%d) (%d)",0x4(%esp)
08654d8e +0x1fa:  lea    -0x44(%ebp),%eax
08654d91 +0x1fd:  mov    %eax,(%esp)
08654d94 +0x200:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08654d99 +0x205:  mov    $0x0,%eax
08654d9e +0x20a:  jmp    08654e65 <+0x2d1>
08654da3 +0x20f:  mov    -0x14(%ebp),%eax
08654da6 +0x212:  mov    %eax,%edx
08654da8 +0x214:  mov    0x10(%ebp),%eax
08654dab +0x217:  mov    %dx,(%eax)
08654dae +0x21a:  mov    -0x10(%ebp),%eax
08654db1 +0x21d:  mov    %eax,%edx
08654db3 +0x21f:  mov    0x10(%ebp),%eax
08654db6 +0x222:  mov    %dl,0x2(%eax)
08654db9 +0x225:  movl   $0x0,-0xc(%ebp)
08654dc0 +0x22c:  jmp    08654e16 <+0x282>
08654dc2 +0x22e:  mov    -0xc(%ebp),%ebx
08654dc5 +0x231:  mov    -0xc(%ebp),%eax
08654dc8 +0x234:  mov    -0x18(%ebp),%edx
08654dcb +0x237:  add    $0x124,%edx
08654dd1 +0x23d:  mov    %eax,0x4(%esp)
08654dd5 +0x241:  mov    %edx,(%esp)
08654dd8 +0x244:  call   0869ac44 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7499>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7499
08654ddd +0x249:  movl   $0x0,0x4(%esp)
08654de5 +0x251:  mov    %eax,(%esp)
08654de8 +0x254:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08654ded +0x259:  mov    (%eax),%eax
08654def +0x25b:  mov    %eax,%edx
08654df1 +0x25d:  mov    0x10(%ebp),%eax
08654df4 +0x260:  mov    %dl,0x3(%eax,%ebx,1)
08654df8 +0x264:  mov    -0xc(%ebp),%eax
08654dfb +0x267:  mov    0x10(%ebp),%edx
08654dfe +0x26a:  movzbl 0x3(%edx,%eax,1),%eax
08654e03 +0x26f:  cmp    $0x7,%al
08654e05 +0x271:  jne    08654e12 <+0x27e>
08654e07 +0x273:  mov    -0xc(%ebp),%eax
08654e0a +0x276:  mov    0x10(%ebp),%edx
08654e0d +0x279:  movb   $0x8,0x3(%edx,%eax,1)
08654e12 +0x27e:  addl   $0x1,-0xc(%ebp)
08654e16 +0x282:  mov    -0xc(%ebp),%eax
08654e19 +0x285:  cmp    -0x10(%ebp),%eax
08654e1c +0x288:  setl   %al
08654e1f +0x28b:  test   %al,%al
08654e21 +0x28d:  jne    08654dc2 <+0x22e>
08654e23 +0x28f:  mov    $0x1,%eax
08654e28 +0x294:  jmp    08654e65 <+0x2d1>
08654e2a +0x296:  movl   $0x5,0xc(%esp)
08654e32 +0x29e:  movl   $0x2113,0x8(%esp)
08654e3a +0x2a6:  movl   $&_ZZN5CUser20findSkillCommandDataEiR18STSkillCommandDataE19__PRETTY_FUNCTION__,0x4(%esp)
08654e42 +0x2ae:  lea    -0x34(%ebp),%eax
08654e45 +0x2b1:  mov    %eax,(%esp)
08654e48 +0x2b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08654e4d +0x2b9:  movl   $"SKILL_COMMAND_LOG : KEY INDEX DUPLICATE!!",0x4(%esp)
08654e55 +0x2c1:  lea    -0x34(%ebp),%eax
08654e58 +0x2c4:  mov    %eax,(%esp)
08654e5b +0x2c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08654e60 +0x2cc:  mov    $0x0,%eax
08654e65 +0x2d1:  mov    -0x4(%ebp),%ebx
08654e68 +0x2d4:  leave
08654e69 +0x2d5:  ret
```

## 反编译 C

```c
// CUser::findSkillCommandData @ 0x8654b94

/* CUser::findSkillCommandData(int, STSkillCommandData&) */

undefined4 __thiscall
CUser::findSkillCommandData(CUser *this,int param_1,STSkillCommandData *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  vector<int,std::allocator<int>> *this_00;
  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
  local_60 [8];
  _Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> local_58 [4];
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_54 [4];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_50 [8]
  ;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  local_28 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::find((int *)local_58);
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::end(local_54);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator!=
                      (local_58,(_Rb_tree_iterator *)local_54);
    if (cVar2 == '\0') {
      iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar5 = G_CDataManager();
      local_20 = CSkillList::getSkillList(*(CSkillList **)(iVar5 + 0x10),iVar4);
      if (local_20 == 0) {
        uVar3 = 0;
      }
      else {
        __gnu_cxx::
        hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::find
                  ((int *)local_60);
        __gnu_cxx::
        hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::end
                  (local_50);
        cVar2 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                ::operator!=(local_60,(_Hashtable_iterator *)local_50);
        if (cVar2 == '\0') {
          cMyTrace::cMyTrace(local_38,"bool CUser::findSkillCommandData(int, STSkillCommandData&)",
                             0x2113,5);
          cMyTrace::operator()(local_38,"SKILL_COMMAND_LOG : KEY INDEX DUPLICATE!!");
          uVar3 = 0;
        }
        else {
          iVar4 = __gnu_cxx::
                  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                  ::operator->(local_60);
          local_1c = *(int *)(iVar4 + 4);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                   ::operator->(local_60);
          local_18 = *puVar6;
          local_14 = std::vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>>::size
                               ((vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>> *)
                                (local_1c + 0x124));
          if ((local_14 < 6) && (0 < local_14)) {
            *(short *)param_2 = (short)local_18;
            param_2[2] = SUB41(local_14,0);
            for (local_10 = 0; uVar1 = local_10, (int)local_10 < local_14; local_10 = local_10 + 1)
            {
              this_00 = (vector<int,std::allocator<int>> *)
                        std::vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>>::operator[]
                                  ((vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>> *)
                                   (local_1c + 0x124),local_10);
              puVar6 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](this_00,0);
              param_2[uVar1 + 3] = SUB41(*puVar6,0);
              if (param_2[local_10 + 3] == (STSkillCommandData)0x7) {
                param_2[local_10 + 3] = (STSkillCommandData)0x8;
              }
            }
            uVar3 = 1;
          }
          else {
            if (local_14 != 0) {
              cMyTrace::cMyTrace(local_48,
                                 "bool CUser::findSkillCommandData(int, STSkillCommandData&)",0x2102
                                 ,5);
              cMyTrace::operator()
                        (local_48,"SKILL_COMMAND_LOG : ABNOMAL COMMAND CNT!! (%d) (%d)",local_18,
                         local_14);
            }
            uVar3 = 0;
          }
        }
      }
    }
    else {
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_58);
      *(undefined2 *)param_2 = *(undefined2 *)(iVar4 + 4);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_58);
      param_2[2] = *(STSkillCommandData *)(iVar4 + 6);
      for (local_24 = 0; iVar4 = local_24, local_24 < (char)param_2[2]; local_24 = local_24 + 1) {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                          (local_58);
        param_2[iVar4 + 3] = *(STSkillCommandData *)(iVar5 + 7 + local_24);
        if (param_2[local_24 + 3] == (STSkillCommandData)0x7) {
          param_2[local_24 + 3] = (STSkillCommandData)0x8;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
