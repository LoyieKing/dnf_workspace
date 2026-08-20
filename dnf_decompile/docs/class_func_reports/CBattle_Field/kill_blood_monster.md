# kill_blood_monster

`_ZN13CBattle_Field18kill_blood_monsterEP5CUseriPt`

`CBattle_Field::kill_blood_monster(CUser*, int, unsigned short*)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830d58c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830d58c  _ZN13CBattle_Field18kill_blood_monsterEP5CUseriPt
#           CBattle_Field::kill_blood_monster(CUser*, int, unsigned short*)
# range [0x0830d58c, 0x0830d703]
0830d58c +0x000:  push   %ebp
0830d58d +0x001:  mov    %esp,%ebp
0830d58f +0x003:  push   %esi
0830d590 +0x004:  push   %ebx
0830d591 +0x005:  sub    $0x380,%esp
0830d597 +0x00b:  mov    0x8(%ebp),%eax
0830d59a +0x00e:  mov    0x188(%eax),%eax
0830d5a0 +0x014:  test   %eax,%eax
0830d5a2 +0x016:  jne    0830d5ae <+0x22>
0830d5a4 +0x018:  mov    $0x0,%eax
0830d5a9 +0x01d:  jmp    0830d6fa <+0x16e>
0830d5ae +0x022:  mov    0x8(%ebp),%eax
0830d5b1 +0x025:  mov    0x188(%eax),%eax
0830d5b7 +0x02b:  movzbl 0x89f(%eax),%eax
0830d5be +0x032:  test   %al,%al
0830d5c0 +0x034:  jne    0830d5cc <+0x40>
0830d5c2 +0x036:  mov    $0x0,%eax
0830d5c7 +0x03b:  jmp    0830d6fa <+0x16e>
0830d5cc +0x040:  movb   $0x0,-0x11(%ebp)
0830d5d0 +0x044:  mov    0x8(%ebp),%eax
0830d5d3 +0x047:  mov    %eax,(%esp)
0830d5d6 +0x04a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830d5db +0x04f:  mov    %eax,-0x10(%ebp)
0830d5de +0x052:  movl   $0x0,-0xc(%ebp)
0830d5e5 +0x059:  jmp    0830d6c1 <+0x135>
0830d5ea +0x05e:  mov    -0xc(%ebp),%eax
0830d5ed +0x061:  add    %eax,%eax
0830d5ef +0x063:  add    0x14(%ebp),%eax
0830d5f2 +0x066:  movzwl (%eax),%eax
0830d5f5 +0x069:  movzwl %ax,%eax
0830d5f8 +0x06c:  mov    %eax,-0x1c(%ebp)
0830d5fb +0x06f:  mov    -0x10(%ebp),%eax
0830d5fe +0x072:  lea    0xc(%eax),%ecx
0830d601 +0x075:  lea    -0x20(%ebp),%eax
0830d604 +0x078:  lea    -0x1c(%ebp),%edx
0830d607 +0x07b:  mov    %edx,0x8(%esp)
0830d60b +0x07f:  mov    %ecx,0x4(%esp)
0830d60f +0x083:  mov    %eax,(%esp)
0830d612 +0x086:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
0830d617 +0x08b:  sub    $0x4,%esp
0830d61a +0x08e:  mov    -0x10(%ebp),%eax
0830d61d +0x091:  lea    0xc(%eax),%edx
0830d620 +0x094:  lea    -0x18(%ebp),%eax
0830d623 +0x097:  mov    %edx,0x4(%esp)
0830d627 +0x09b:  mov    %eax,(%esp)
0830d62a +0x09e:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0830d62f +0x0a3:  sub    $0x4,%esp
0830d632 +0x0a6:  lea    -0x18(%ebp),%eax
0830d635 +0x0a9:  mov    %eax,0x4(%esp)
0830d639 +0x0ad:  lea    -0x20(%ebp),%eax
0830d63c +0x0b0:  mov    %eax,(%esp)
0830d63f +0x0b3:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
0830d644 +0x0b8:  test   %al,%al
0830d646 +0x0ba:  jne    0830d6bc <+0x130>
0830d648 +0x0bc:  lea    -0x20(%ebp),%eax
0830d64b +0x0bf:  mov    %eax,(%esp)
0830d64e +0x0c2:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830d653 +0x0c7:  add    $0x4,%eax
0830d656 +0x0ca:  mov    %eax,0x4(%esp)
0830d65a +0x0ce:  lea    -0x36c(%ebp),%eax
0830d660 +0x0d4:  mov    %eax,(%esp)
0830d663 +0x0d7:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0830d668 +0x0dc:  movzbl -0x28(%ebp),%eax
0830d66c +0x0e0:  xor    $0x1,%eax
0830d66f +0x0e3:  test   %al,%al
0830d671 +0x0e5:  jne    0830d6ac <+0x120>
0830d673 +0x0e7:  mov    -0x10(%ebp),%eax
0830d676 +0x0ea:  lea    0xc(%eax),%edx
0830d679 +0x0ed:  mov    -0x20(%ebp),%eax
0830d67c +0x0f0:  mov    %eax,0x4(%esp)
0830d680 +0x0f4:  mov    %edx,(%esp)
0830d683 +0x0f7:  call   08311946 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x352b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x352b
0830d688 +0x0fc:  movb   $0x1,-0x11(%ebp)
0830d68c +0x100:  jmp    0830d6ac <+0x120>
0830d68e +0x102:  mov    %edx,%ebx
0830d690 +0x104:  mov    %eax,%esi
0830d692 +0x106:  lea    -0x36c(%ebp),%eax
0830d698 +0x10c:  mov    %eax,(%esp)
0830d69b +0x10f:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830d6a0 +0x114:  mov    %esi,%eax
0830d6a2 +0x116:  mov    %ebx,%edx
0830d6a4 +0x118:  mov    %eax,(%esp)
0830d6a7 +0x11b:  call   08ae3750 <_Unwind_Resume>
0830d6ac +0x120:  lea    -0x36c(%ebp),%eax
0830d6b2 +0x126:  mov    %eax,(%esp)
0830d6b5 +0x129:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830d6ba +0x12e:  jmp    0830d6bd <+0x131>
0830d6bc +0x130:  nop
0830d6bd +0x131:  addl   $0x1,-0xc(%ebp)
0830d6c1 +0x135:  mov    -0xc(%ebp),%eax
0830d6c4 +0x138:  cmp    0x10(%ebp),%eax
0830d6c7 +0x13b:  setl   %al
0830d6ca +0x13e:  test   %al,%al
0830d6cc +0x140:  jne    0830d5ea <+0x5e>
0830d6d2 +0x146:  cmpb   $0x0,-0x11(%ebp)
0830d6d6 +0x14a:  je     0830d6f5 <+0x169>
0830d6d8 +0x14c:  mov    -0x10(%ebp),%eax
0830d6db +0x14f:  add    $0xc,%eax
0830d6de +0x152:  mov    %eax,(%esp)
0830d6e1 +0x155:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
0830d6e6 +0x15a:  mov    %eax,0x4(%esp)
0830d6ea +0x15e:  mov    0x8(%ebp),%eax
0830d6ed +0x161:  mov    %eax,(%esp)
0830d6f0 +0x164:  call   08304f8e <_ZN13CBattle_Field29checkKilledSpawnBloodMonstersEi>  ; CBattle_Field::checkKilledSpawnBloodMonsters(int)
0830d6f5 +0x169:  mov    $0x1,%eax
0830d6fa +0x16e:  lea    -0x8(%ebp),%esp
0830d6fd +0x171:  add    $0x0,%esp
0830d700 +0x174:  pop    %ebx
0830d701 +0x175:  pop    %esi
0830d702 +0x176:  pop    %ebp
0830d703 +0x177:  ret
```

## 反编译 C

```c
// CBattle_Field::kill_blood_monster @ 0x830d58c

/* CBattle_Field::kill_blood_monster(CUser*, int, unsigned short*) */

undefined4 __thiscall
CBattle_Field::kill_blood_monster(CBattle_Field *this,CUser *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  map_monster local_370 [836];
  char local_2c;
  int local_24;
  uint local_20;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [7];
  char local_15;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x188) == 0) {
    uVar2 = 0;
  }
  else if (*(char *)(*(int *)(this + 0x188) + 0x89f) == '\0') {
    uVar2 = 0;
  }
  else {
    local_15 = '\0';
    local_14 = GetCurrentMapInfo(this);
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      local_20 = (uint)param_3[local_10];
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      find(&local_24);
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_24,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_24);
        map_monster::map_monster(local_370,(map_monster *)(iVar3 + 4));
        if (local_2c == '\x01') {
                    /* try { // try from 0830d683 to 0830d687 has its CatchHandler @ 0830d68e */
          std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::erase((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(local_14 + 0xc),local_24);
          local_15 = '\x01';
        }
        map_monster::~map_monster(local_370);
      }
    }
    if (local_15 != '\0') {
      iVar3 = std::
              map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
              size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                    *)(local_14 + 0xc));
      checkKilledSpawnBloodMonsters(this,iVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
