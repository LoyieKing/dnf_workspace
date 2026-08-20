# GetTotalSkillMaterial

`_ZN13CBattle_Field21GetTotalSkillMaterialEv`

`CBattle_Field::GetTotalSkillMaterial()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830de1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830de1c  _ZN13CBattle_Field21GetTotalSkillMaterialEv
#           CBattle_Field::GetTotalSkillMaterial()
# range [0x0830de1c, 0x0830df2d]
0830de1c +0x000:  push   %ebp
0830de1d +0x001:  mov    %esp,%ebp
0830de1f +0x003:  push   %esi
0830de20 +0x004:  push   %ebx
0830de21 +0x005:  sub    $0x120,%esp
0830de27 +0x00b:  lea    -0x100(%ebp),%eax
0830de2d +0x011:  mov    %eax,(%esp)
0830de30 +0x014:  call   08151394 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xcc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xcc9
0830de35 +0x019:  movl   $0x0,-0xc(%ebp)
0830de3c +0x020:  lea    -0x14(%ebp),%eax
0830de3f +0x023:  mov    %eax,(%esp)
0830de42 +0x026:  call   0831200e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bf3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bf3
0830de47 +0x02b:  mov    0x8(%ebp),%eax
0830de4a +0x02e:  lea    0x78(%eax),%edx
0830de4d +0x031:  lea    -0x10c(%ebp),%eax
0830de53 +0x037:  mov    %edx,0x4(%esp)
0830de57 +0x03b:  mov    %eax,(%esp)
0830de5a +0x03e:  call   0831201c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3c01>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3c01
0830de5f +0x043:  sub    $0x4,%esp
0830de62 +0x046:  mov    -0x10c(%ebp),%eax
0830de68 +0x04c:  mov    %eax,-0x14(%ebp)
0830de6b +0x04f:  jmp    0830dec0 <+0xa4>
0830de6d +0x051:  lea    -0x14(%ebp),%eax
0830de70 +0x054:  mov    %eax,(%esp)
0830de73 +0x057:  call   08235cee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb398>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb398
0830de78 +0x05c:  add    $0x4,%eax
0830de7b +0x05f:  mov    %eax,0x4(%esp)
0830de7f +0x063:  lea    -0x100(%ebp),%eax
0830de85 +0x069:  mov    %eax,(%esp)
0830de88 +0x06c:  call   0830eea2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa87>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa87
0830de8d +0x071:  movzbl -0xbb(%ebp),%eax
0830de94 +0x078:  xor    $0x1,%eax
0830de97 +0x07b:  test   %al,%al
0830de99 +0x07d:  je     0830deb5 <+0x99>
0830de9b +0x07f:  movzbl -0xff(%ebp),%eax
0830dea2 +0x086:  test   %al,%al
0830dea4 +0x088:  je     0830deb5 <+0x99>
0830dea6 +0x08a:  mov    -0xb4(%ebp),%edx
0830deac +0x090:  mov    -0xc(%ebp),%eax
0830deaf +0x093:  lea    (%edx,%eax,1),%eax
0830deb2 +0x096:  mov    %eax,-0xc(%ebp)
0830deb5 +0x099:  lea    -0x14(%ebp),%eax
0830deb8 +0x09c:  mov    %eax,(%esp)
0830debb +0x09f:  call   08312042 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3c27>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3c27
0830dec0 +0x0a4:  mov    0x8(%ebp),%eax
0830dec3 +0x0a7:  lea    0x78(%eax),%edx
0830dec6 +0x0aa:  lea    -0x10(%ebp),%eax
0830dec9 +0x0ad:  mov    %edx,0x4(%esp)
0830decd +0x0b1:  mov    %eax,(%esp)
0830ded0 +0x0b4:  call   08235cb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb35e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb35e
0830ded5 +0x0b9:  sub    $0x4,%esp
0830ded8 +0x0bc:  lea    -0x10(%ebp),%eax
0830dedb +0x0bf:  mov    %eax,0x4(%esp)
0830dedf +0x0c3:  lea    -0x14(%ebp),%eax
0830dee2 +0x0c6:  mov    %eax,(%esp)
0830dee5 +0x0c9:  call   08235cda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb384>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb384
0830deea +0x0ce:  test   %al,%al
0830deec +0x0d0:  jne    0830de6d <+0x51>
0830def2 +0x0d6:  mov    -0xc(%ebp),%ebx
0830def5 +0x0d9:  lea    -0x100(%ebp),%eax
0830defb +0x0df:  mov    %eax,(%esp)
0830defe +0x0e2:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0830df03 +0x0e7:  mov    %ebx,%eax
0830df05 +0x0e9:  lea    -0x8(%ebp),%esp
0830df08 +0x0ec:  add    $0x0,%esp
0830df0b +0x0ef:  pop    %ebx
0830df0c +0x0f0:  pop    %esi
0830df0d +0x0f1:  pop    %ebp
0830df0e +0x0f2:  ret
0830df0f +0x0f3:  mov    %edx,%ebx
0830df11 +0x0f5:  mov    %eax,%esi
0830df13 +0x0f7:  lea    -0x100(%ebp),%eax
0830df19 +0x0fd:  mov    %eax,(%esp)
0830df1c +0x100:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0830df21 +0x105:  mov    %esi,%eax
0830df23 +0x107:  mov    %ebx,%edx
0830df25 +0x109:  mov    %eax,(%esp)
0830df28 +0x10c:  call   08ae3750 <_Unwind_Resume>
0830df2d +0x111:  nop
```

## 反编译 C

```c
// CBattle_Field::GetTotalSkillMaterial @ 0x830de1c

/* CBattle_Field::GetTotalSkillMaterial() */

int CBattle_Field::GetTotalSkillMaterial(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_110 [3];
  MapInfo local_104;
  char local_103;
  char local_bf;
  int local_b8;
  undefined4 local_18;
  map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>> local_14 [4];
  int local_10;
  
  MapInfo::MapInfo(&local_104);
  local_10 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_18);
                    /* try { // try from 0830de5a to 0830ded4 has its CatchHandler @ 0830df0f */
  std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::begin
            ((map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>> *)
             local_110);
  local_18 = local_110[0];
  while( true ) {
    std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::end(local_14)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_18,
                       (_Rb_tree_iterator *)local_14);
    iVar2 = local_10;
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_18);
    MapInfo::operator=(&local_104,(MapInfo *)(iVar2 + 4));
    if ((local_bf != '\x01') && (local_103 != '\0')) {
      local_10 = local_b8 + local_10;
    }
    std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_18);
  }
  MapInfo::~MapInfo(&local_104);
  return iVar2;
}
```
