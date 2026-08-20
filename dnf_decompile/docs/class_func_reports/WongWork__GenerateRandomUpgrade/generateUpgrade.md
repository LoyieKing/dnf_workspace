# generateUpgrade

`_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi`

`WongWork::GenerateRandomUpgrade::generateUpgrade(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `WongWork::GenerateRandomUpgrade` | `0x08533676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533676  _ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi
#           WongWork::GenerateRandomUpgrade::generateUpgrade(ENUM_RARITY, int)
# range [0x08533676, 0x08533931]
08533676 +0x000:  push   %ebp
08533677 +0x001:  mov    %esp,%ebp
08533679 +0x003:  push   %ebx
0853367a +0x004:  sub    $0x74,%esp
0853367d +0x007:  mov    0xc(%ebp),%eax
08533680 +0x00a:  mov    %eax,-0x38(%ebp)
08533683 +0x00d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08533688 +0x012:  lea    0x528(%eax),%ecx
0853368e +0x018:  lea    -0x3c(%ebp),%eax
08533691 +0x01b:  lea    -0x38(%ebp),%edx
08533694 +0x01e:  mov    %edx,0x8(%esp)
08533698 +0x022:  mov    %ecx,0x4(%esp)
0853369c +0x026:  mov    %eax,(%esp)
0853369f +0x029:  call   0853ae72 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x10fe>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x10fe
085336a4 +0x02e:  sub    $0x4,%esp
085336a7 +0x031:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085336ac +0x036:  lea    0x528(%eax),%edx
085336b2 +0x03c:  lea    -0x34(%ebp),%eax
085336b5 +0x03f:  mov    %edx,0x4(%esp)
085336b9 +0x043:  mov    %eax,(%esp)
085336bc +0x046:  call   0853ae9e <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x112a>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x112a
085336c1 +0x04b:  sub    $0x4,%esp
085336c4 +0x04e:  lea    -0x34(%ebp),%eax
085336c7 +0x051:  mov    %eax,0x4(%esp)
085336cb +0x055:  lea    -0x3c(%ebp),%eax
085336ce +0x058:  mov    %eax,(%esp)
085336d1 +0x05b:  call   0853aec4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1150>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1150
085336d6 +0x060:  test   %al,%al
085336d8 +0x062:  je     085336e4 <+0x6e>
085336da +0x064:  mov    $0x0,%ebx
085336df +0x069:  jmp    0853392b <+0x2b5>
085336e4 +0x06e:  lea    -0x3c(%ebp),%eax
085336e7 +0x071:  mov    %eax,(%esp)
085336ea +0x074:  call   0853aed8 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1164>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1164
085336ef +0x079:  mov    0x10(%eax),%eax
085336f2 +0x07c:  test   %eax,%eax
085336f4 +0x07e:  sete   %al
085336f7 +0x081:  test   %al,%al
085336f9 +0x083:  je     08533705 <+0x8f>
085336fb +0x085:  mov    $0x0,%ebx
08533700 +0x08a:  jmp    0853392b <+0x2b5>
08533705 +0x08f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853370a +0x094:  add    $0x540,%eax
0853370f +0x099:  mov    %eax,-0x2c(%ebp)
08533712 +0x09c:  mov    $0x3f800000,%eax
08533717 +0x0a1:  mov    %eax,-0x28(%ebp)
0853371a +0x0a4:  mov    -0x2c(%ebp),%eax
0853371d +0x0a7:  mov    %eax,(%esp)
08533720 +0x0aa:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
08533725 +0x0af:  test   %eax,%eax
08533727 +0x0b1:  setne  %al
0853372a +0x0b4:  test   %al,%al
0853372c +0x0b6:  je     08533808 <+0x192>
08533732 +0x0bc:  mov    -0x2c(%ebp),%eax
08533735 +0x0bf:  mov    %eax,(%esp)
08533738 +0x0c2:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
0853373d +0x0c7:  sub    $0x1,%eax
08533740 +0x0ca:  mov    %eax,-0x14(%ebp)
08533743 +0x0cd:  movl   $0x0,0x4(%esp)
0853374b +0x0d5:  mov    -0x2c(%ebp),%eax
0853374e +0x0d8:  mov    %eax,(%esp)
08533751 +0x0db:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533756 +0x0e0:  mov    (%eax),%eax
08533758 +0x0e2:  cmp    0x10(%ebp),%eax
0853375b +0x0e5:  setl   %al
0853375e +0x0e8:  test   %al,%al
08533760 +0x0ea:  je     08533780 <+0x10a>
08533762 +0x0ec:  movl   $0x0,0x4(%esp)
0853376a +0x0f4:  mov    -0x2c(%ebp),%eax
0853376d +0x0f7:  mov    %eax,(%esp)
08533770 +0x0fa:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533775 +0x0ff:  mov    0x4(%eax),%eax
08533778 +0x102:  mov    %eax,-0x28(%ebp)
0853377b +0x105:  jmp    08533808 <+0x192>
08533780 +0x10a:  mov    -0x14(%ebp),%eax
08533783 +0x10d:  mov    %eax,0x4(%esp)
08533787 +0x111:  mov    -0x2c(%ebp),%eax
0853378a +0x114:  mov    %eax,(%esp)
0853378d +0x117:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533792 +0x11c:  mov    (%eax),%eax
08533794 +0x11e:  cmp    0x10(%ebp),%eax
08533797 +0x121:  setg   %al
0853379a +0x124:  test   %al,%al
0853379c +0x126:  je     085337b8 <+0x142>
0853379e +0x128:  mov    -0x14(%ebp),%eax
085337a1 +0x12b:  mov    %eax,0x4(%esp)
085337a5 +0x12f:  mov    -0x2c(%ebp),%eax
085337a8 +0x132:  mov    %eax,(%esp)
085337ab +0x135:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
085337b0 +0x13a:  mov    0x4(%eax),%eax
085337b3 +0x13d:  mov    %eax,-0x28(%ebp)
085337b6 +0x140:  jmp    08533808 <+0x192>
085337b8 +0x142:  movl   $0x0,-0x10(%ebp)
085337bf +0x149:  jmp    085337fb <+0x185>
085337c1 +0x14b:  mov    -0x10(%ebp),%eax
085337c4 +0x14e:  mov    %eax,0x4(%esp)
085337c8 +0x152:  mov    -0x2c(%ebp),%eax
085337cb +0x155:  mov    %eax,(%esp)
085337ce +0x158:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
085337d3 +0x15d:  mov    (%eax),%eax
085337d5 +0x15f:  cmp    0x10(%ebp),%eax
085337d8 +0x162:  sete   %al
085337db +0x165:  test   %al,%al
085337dd +0x167:  je     085337f7 <+0x181>
085337df +0x169:  mov    -0x10(%ebp),%eax
085337e2 +0x16c:  mov    %eax,0x4(%esp)
085337e6 +0x170:  mov    -0x2c(%ebp),%eax
085337e9 +0x173:  mov    %eax,(%esp)
085337ec +0x176:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
085337f1 +0x17b:  mov    0x4(%eax),%eax
085337f4 +0x17e:  mov    %eax,-0x28(%ebp)
085337f7 +0x181:  addl   $0x1,-0x10(%ebp)
085337fb +0x185:  mov    -0x10(%ebp),%eax
085337fe +0x188:  cmp    -0x14(%ebp),%eax
08533801 +0x18b:  setle  %al
08533804 +0x18e:  test   %al,%al
08533806 +0x190:  jne    085337c1 <+0x14b>
08533808 +0x192:  lea    -0x3c(%ebp),%eax
0853380b +0x195:  mov    %eax,(%esp)
0853380e +0x198:  call   0853aed8 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1164>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1164
08533813 +0x19d:  add    $0x4,%eax
08533816 +0x1a0:  mov    %eax,0x4(%esp)
0853381a +0x1a4:  lea    -0x4c(%ebp),%eax
0853381d +0x1a7:  mov    %eax,(%esp)
08533820 +0x1aa:  call   0853ac12 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe9e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe9e
08533825 +0x1af:  movl   $0x0,0x4(%esp)
0853382d +0x1b7:  lea    -0x4c(%ebp),%eax
08533830 +0x1ba:  mov    %eax,(%esp)
08533833 +0x1bd:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08533838 +0x1c2:  mov    0x4(%eax),%eax
0853383b +0x1c5:  mov    %eax,-0x24(%ebp)
0853383e +0x1c8:  movl   $0x0,0x4(%esp)
08533846 +0x1d0:  lea    -0x4c(%ebp),%eax
08533849 +0x1d3:  mov    %eax,(%esp)
0853384c +0x1d6:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08533851 +0x1db:  mov    %eax,%edx
08533853 +0x1dd:  fildl  -0x24(%ebp)
08533856 +0x1e0:  fmuls  -0x28(%ebp)
08533859 +0x1e3:  fnstcw -0x5a(%ebp)
0853385c +0x1e6:  movzwl -0x5a(%ebp),%eax
08533860 +0x1ea:  mov    $0xc,%ah
08533862 +0x1ec:  mov    %ax,-0x5c(%ebp)
08533866 +0x1f0:  fldcw  -0x5c(%ebp)
08533869 +0x1f3:  fistpl -0x60(%ebp)
0853386c +0x1f6:  fldcw  -0x5a(%ebp)
0853386f +0x1f9:  mov    -0x60(%ebp),%eax
08533872 +0x1fc:  mov    %eax,0x4(%edx)
08533875 +0x1ff:  mov    -0x40(%ebp),%eax
08533878 +0x202:  mov    %eax,%ebx
0853387a +0x204:  sub    -0x24(%ebp),%ebx
0853387d +0x207:  movl   $0x0,0x4(%esp)
08533885 +0x20f:  lea    -0x4c(%ebp),%eax
08533888 +0x212:  mov    %eax,(%esp)
0853388b +0x215:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08533890 +0x21a:  mov    0x4(%eax),%eax
08533893 +0x21d:  lea    (%ebx,%eax,1),%eax
08533896 +0x220:  mov    %eax,-0x40(%ebp)
08533899 +0x223:  mov    -0x40(%ebp),%eax
0853389c +0x226:  mov    %eax,-0x30(%ebp)
0853389f +0x229:  mov    0x8(%ebp),%eax
085338a2 +0x22c:  mov    (%eax),%eax
085338a4 +0x22e:  lea    -0x30(%ebp),%edx
085338a7 +0x231:  mov    %edx,0x4(%esp)
085338ab +0x235:  mov    %eax,(%esp)
085338ae +0x238:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085338b3 +0x23d:  mov    %eax,-0x20(%ebp)
085338b6 +0x240:  lea    -0x4c(%ebp),%eax
085338b9 +0x243:  mov    %eax,(%esp)
085338bc +0x246:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085338c1 +0x24b:  mov    %eax,-0x1c(%ebp)
085338c4 +0x24e:  movl   $0x0,-0x18(%ebp)
085338cb +0x255:  movl   $0x0,-0xc(%ebp)
085338d2 +0x25c:  jmp    0853390e <+0x298>
085338d4 +0x25e:  mov    -0xc(%ebp),%eax
085338d7 +0x261:  mov    %eax,0x4(%esp)
085338db +0x265:  lea    -0x4c(%ebp),%eax
085338de +0x268:  mov    %eax,(%esp)
085338e1 +0x26b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085338e6 +0x270:  mov    0x4(%eax),%eax
085338e9 +0x273:  add    %eax,-0x18(%ebp)
085338ec +0x276:  mov    -0x18(%ebp),%eax
085338ef +0x279:  cmp    -0x20(%ebp),%eax
085338f2 +0x27c:  jl     0853390a <+0x294>
085338f4 +0x27e:  mov    -0xc(%ebp),%eax
085338f7 +0x281:  mov    %eax,0x4(%esp)
085338fb +0x285:  lea    -0x4c(%ebp),%eax
085338fe +0x288:  mov    %eax,(%esp)
08533901 +0x28b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08533906 +0x290:  mov    (%eax),%ebx
08533908 +0x292:  jmp    08533920 <+0x2aa>
0853390a +0x294:  addl   $0x1,-0xc(%ebp)
0853390e +0x298:  mov    -0xc(%ebp),%eax
08533911 +0x29b:  cmp    -0x1c(%ebp),%eax
08533914 +0x29e:  setl   %al
08533917 +0x2a1:  test   %al,%al
08533919 +0x2a3:  jne    085338d4 <+0x25e>
0853391b +0x2a5:  mov    $0x0,%ebx
08533920 +0x2aa:  lea    -0x4c(%ebp),%eax
08533923 +0x2ad:  mov    %eax,(%esp)
08533926 +0x2b0:  call   083cd0ba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x67086>  ; global constructors keyed to CServerEvent::m_nExpRate+0x67086
0853392b +0x2b5:  mov    %ebx,%eax
0853392d +0x2b7:  mov    -0x4(%ebp),%ebx
08533930 +0x2ba:  leave
08533931 +0x2bb:  ret
```

## 反编译 C

```c
// WongWork::GenerateRandomUpgrade::generateUpgrade @ 0x8533676

/* WongWork::GenerateRandomUpgrade::generateUpgrade(ENUM_RARITY, int) */

undefined4 __thiscall
WongWork::GenerateRandomUpgrade::generateUpgrade
          (GenerateRandomUpgrade *this,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ItemFarmingData local_50 [12];
  ulong local_44;
  _Rb_tree_iterator<std::pair<int_const,ItemFarmingData>> local_40 [4];
  undefined4 local_3c;
  map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  local_38 [4];
  ulong local_34;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_3c = param_2;
  G_CDataManager();
  std::map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  ::find((int *)local_40);
  G_CDataManager();
  std::map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator==
                    (local_40,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator->(local_40);
    if (*(int *)(iVar2 + 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = G_CDataManager();
      local_30 = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                 (iVar2 + 0x540);
      local_2c = 1.0;
      iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_30)
      ;
      if (iVar2 != 0) {
        iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                          (local_30);
        local_18 = iVar2 - 1;
        piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_30,0);
        if (*piVar3 < param_3) {
          iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                            (local_30,0);
          local_2c = *(float *)(iVar2 + 4);
        }
        else {
          piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                          operator[](local_30,local_18);
          if (param_3 < *piVar3) {
            iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                    operator[](local_30,local_18);
            local_2c = *(float *)(iVar2 + 4);
          }
          else {
            for (local_14 = 0; (int)local_14 <= (int)local_18; local_14 = local_14 + 1) {
              piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>
                              ::operator[](local_30,local_14);
              if (*piVar3 == param_3) {
                iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_30,local_14);
                local_2c = *(float *)(iVar2 + 4);
              }
            }
          }
        }
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator->(local_40);
      ItemFarmingData::ItemFarmingData(local_50,(ItemFarmingData *)(iVar2 + 4));
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      local_28 = *(int *)(iVar2 + 4);
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      *(int *)(iVar2 + 4) = (int)ROUND((float)local_28 * local_2c);
      iVar6 = local_44 - local_28;
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      local_44 = iVar6 + *(int *)(iVar2 + 4);
      local_34 = local_44;
      local_24 = CMTRand::randInt(*(CMTRand **)this,&local_34);
      local_20 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            local_50);
      local_1c = 0;
      for (local_10 = 0; (int)local_10 < local_20; local_10 = local_10 + 1) {
        iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50
                           ,local_10);
        local_1c = local_1c + *(int *)(iVar2 + 4);
        if (local_24 <= local_1c) {
          puVar4 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              local_50,local_10);
          uVar5 = *puVar4;
          goto LAB_08533920;
        }
      }
      uVar5 = 0;
LAB_08533920:
      ItemFarmingData::~ItemFarmingData(local_50);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
