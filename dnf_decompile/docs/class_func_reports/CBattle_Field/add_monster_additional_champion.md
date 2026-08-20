# add_monster_additional_champion

`_ZN13CBattle_Field31add_monster_additional_championERSt6vectorIiSaIiEEi`

`CBattle_Field::add_monster_additional_champion(std::vector<int, std::allocator<int> >&, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083022a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083022a8  _ZN13CBattle_Field31add_monster_additional_championERSt6vectorIiSaIiEEi
#           CBattle_Field::add_monster_additional_champion(std::vector<int, std::allocator<int> >&, int)
# range [0x083022a8, 0x083023eb]
083022a8 +0x000:  push   %ebp
083022a9 +0x001:  mov    %esp,%ebp
083022ab +0x003:  push   %ebx
083022ac +0x004:  sub    $0x54,%esp
083022af +0x007:  movl   $0x0,-0x10(%ebp)
083022b6 +0x00e:  jmp    083023d3 <+0x12b>
083022bb +0x013:  mov    0xc(%ebp),%eax
083022be +0x016:  mov    %eax,(%esp)
083022c1 +0x019:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083022c6 +0x01e:  test   %eax,%eax
083022c8 +0x020:  sete   %al
083022cb +0x023:  test   %al,%al
083022cd +0x025:  jne    083023e6 <+0x13e>
083022d3 +0x02b:  call   0807dca0 <_init+0x598>
083022d8 +0x030:  mov    %eax,%ebx
083022da +0x032:  mov    0xc(%ebp),%eax
083022dd +0x035:  mov    %eax,(%esp)
083022e0 +0x038:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083022e5 +0x03d:  mov    %eax,-0x2c(%ebp)
083022e8 +0x040:  mov    %ebx,%eax
083022ea +0x042:  mov    $0x0,%edx
083022ef +0x047:  divl   -0x2c(%ebp)
083022f2 +0x04a:  mov    %edx,%ecx
083022f4 +0x04c:  mov    %ecx,%eax
083022f6 +0x04e:  mov    %eax,-0x20(%ebp)
083022f9 +0x051:  mov    -0x20(%ebp),%eax
083022fc +0x054:  mov    %eax,0x4(%esp)
08302300 +0x058:  mov    0xc(%ebp),%eax
08302303 +0x05b:  mov    %eax,(%esp)
08302306 +0x05e:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0830230b +0x063:  mov    (%eax),%eax
0830230d +0x065:  mov    %eax,-0x24(%ebp)
08302310 +0x068:  lea    -0x14(%ebp),%eax
08302313 +0x06b:  mov    0xc(%ebp),%edx
08302316 +0x06e:  mov    %edx,0x4(%esp)
0830231a +0x072:  mov    %eax,(%esp)
0830231d +0x075:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08302322 +0x07a:  sub    $0x4,%esp
08302325 +0x07d:  lea    -0x18(%ebp),%eax
08302328 +0x080:  lea    -0x20(%ebp),%edx
0830232b +0x083:  mov    %edx,0x8(%esp)
0830232f +0x087:  lea    -0x14(%ebp),%edx
08302332 +0x08a:  mov    %edx,0x4(%esp)
08302336 +0x08e:  mov    %eax,(%esp)
08302339 +0x091:  call   080ea9a2 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5db>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5db
0830233e +0x096:  sub    $0x4,%esp
08302341 +0x099:  lea    -0x1c(%ebp),%eax
08302344 +0x09c:  mov    -0x18(%ebp),%edx
08302347 +0x09f:  mov    %edx,0x8(%esp)
0830234b +0x0a3:  mov    0xc(%ebp),%edx
0830234e +0x0a6:  mov    %edx,0x4(%esp)
08302352 +0x0aa:  mov    %eax,(%esp)
08302355 +0x0ad:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
0830235a +0x0b2:  sub    $0x4,%esp
0830235d +0x0b5:  mov    0x8(%ebp),%eax
08302360 +0x0b8:  mov    %eax,(%esp)
08302363 +0x0bb:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302368 +0x0c0:  lea    0xc(%eax),%edx
0830236b +0x0c3:  lea    -0x24(%ebp),%eax
0830236e +0x0c6:  mov    %eax,0x4(%esp)
08302372 +0x0ca:  mov    %edx,(%esp)
08302375 +0x0cd:  call   08310676 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x225b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x225b
0830237a +0x0d2:  mov    %eax,-0xc(%ebp)
0830237d +0x0d5:  mov    -0xc(%ebp),%eax
08302380 +0x0d8:  movzbl 0x13(%eax),%eax
08302384 +0x0dc:  test   %al,%al
08302386 +0x0de:  jne    08302391 <+0xe9>
08302388 +0x0e0:  mov    -0xc(%ebp),%eax
0830238b +0x0e3:  movb   $0x1,0x8(%eax)
0830238f +0x0e7:  jmp    083023cf <+0x127>
08302391 +0x0e9:  mov    -0xc(%ebp),%eax
08302394 +0x0ec:  movzbl 0x8(%eax),%eax
08302398 +0x0f0:  cmp    $0x1,%al
0830239a +0x0f2:  jne    083023cf <+0x127>
0830239c +0x0f4:  mov    -0x24(%ebp),%eax
0830239f +0x0f7:  mov    %eax,0x14(%esp)
083023a3 +0x0fb:  movl   $"Box Monster is Champion! id(%d)",0x10(%esp)
083023ab +0x103:  movl   $0x6bf,0xc(%esp)
083023b3 +0x10b:  movl   $&_ZZN13CBattle_Field31add_monster_additional_championERSt6vectorIiSaIiEEiE19__PRETTY_FUNCTION__,0x8(%esp)
083023bb +0x113:  movl   $"battle_field.cpp",0x4(%esp)
083023c3 +0x11b:  movl   $0x1,(%esp)
083023ca +0x122:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083023cf +0x127:  addl   $0x1,-0x10(%ebp)
083023d3 +0x12b:  mov    -0x10(%ebp),%eax
083023d6 +0x12e:  cmp    0x10(%ebp),%eax
083023d9 +0x131:  setl   %al
083023dc +0x134:  test   %al,%al
083023de +0x136:  jne    083022bb <+0x13>
083023e4 +0x13c:  jmp    083023e7 <+0x13f>
083023e6 +0x13e:  nop
083023e7 +0x13f:  mov    -0x4(%ebp),%ebx
083023ea +0x142:  leave
083023eb +0x143:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_additional_champion @ 0x83022a8

/* CBattle_Field::add_monster_additional_champion(std::vector<int, std::allocator<int> >&, int) */

void __thiscall
CBattle_Field::add_monster_additional_champion(CBattle_Field *this,vector *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_28;
  uint local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  while ((local_14 < param_2 &&
         (iVar1 = std::vector<int,std::allocator<int>>::size
                            ((vector<int,std::allocator<int>> *)param_1), iVar1 != 0))) {
    uVar2 = rand();
    local_24 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_24 = uVar2 % local_24;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_24);
    local_28 = *piVar3;
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_1c,&local_18);
    std::vector<int,std::allocator<int>>::erase(local_20,param_1,local_1c);
    iVar1 = GetCurrentMapInfo(this);
    local_10 = std::
               map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
               ::operator[]((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                             *)(iVar1 + 0xc),&local_28);
    if (*(char *)(local_10 + 0x13) == '\0') {
      *(undefined1 *)(local_10 + 8) = 1;
    }
    else if (*(char *)(local_10 + 8) == '\x01') {
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "void CBattle_Field::add_monster_additional_champion(std::vector<int, std::allocator<int> >&, int)"
                 ,0x6bf,"Box Monster is Champion! id(%d)",local_28);
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
