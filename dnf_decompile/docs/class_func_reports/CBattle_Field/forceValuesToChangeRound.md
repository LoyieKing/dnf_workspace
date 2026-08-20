# forceValuesToChangeRound

`_ZN13CBattle_Field24forceValuesToChangeRoundEssi`

`CBattle_Field::forceValuesToChangeRound(short, short, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08305f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08305f50  _ZN13CBattle_Field24forceValuesToChangeRoundEssi
#           CBattle_Field::forceValuesToChangeRound(short, short, int)
# range [0x08305f50, 0x08306155]
08305f50 +0x000:  push   %ebp
08305f51 +0x001:  mov    %esp,%ebp
08305f53 +0x003:  sub    $0x58,%esp
08305f56 +0x006:  mov    0xc(%ebp),%edx
08305f59 +0x009:  mov    0x10(%ebp),%eax
08305f5c +0x00c:  mov    %dx,-0x2c(%ebp)
08305f60 +0x010:  mov    %ax,-0x30(%ebp)
08305f64 +0x014:  mov    0x14(%ebp),%eax
08305f67 +0x017:  mov    %eax,-0x18(%ebp)
08305f6a +0x01a:  movswl -0x2c(%ebp),%eax
08305f6e +0x01e:  mov    -0x18(%ebp),%edx
08305f71 +0x021:  mov    %edx,0x8(%esp)
08305f75 +0x025:  mov    %eax,0x4(%esp)
08305f79 +0x029:  mov    0x8(%ebp),%eax
08305f7c +0x02c:  mov    %eax,(%esp)
08305f7f +0x02f:  call   08306212 <_ZN13CBattle_Field22getNextSamllRoundOrderEsi>  ; CBattle_Field::getNextSamllRoundOrder(short, int)
08305f84 +0x034:  mov    %ax,-0x14(%ebp)
08305f88 +0x038:  movw   $0x0,-0x12(%ebp)
08305f8e +0x03e:  cmpw   $0x0,-0x14(%ebp)
08305f93 +0x043:  jne    08305fd3 <+0x83>
08305f95 +0x045:  movswl -0x2c(%ebp),%eax
08305f99 +0x049:  mov    %eax,0x14(%esp)
08305f9d +0x04d:  movl   $"ULTIMATE_LOG : blood_round_order (%d) forceValuesToChangeRound ERROR!!\n",0x10(%esp)
08305fa5 +0x055:  movl   $0xe7e,0xc(%esp)
08305fad +0x05d:  movl   $&_ZZN13CBattle_Field24forceValuesToChangeRoundEssiE19__PRETTY_FUNCTION__,0x8(%esp)
08305fb5 +0x065:  movl   $"battle_field.cpp",0x4(%esp)
08305fbd +0x06d:  movl   $0x1,(%esp)
08305fc4 +0x074:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08305fc9 +0x079:  mov    $0x0,%eax
08305fce +0x07e:  jmp    08306154 <+0x204>
08305fd3 +0x083:  movzwl -0x14(%ebp),%eax
08305fd7 +0x087:  cmp    -0x30(%ebp),%ax
08305fdb +0x08b:  jle    08306136 <+0x1e6>
08305fe1 +0x091:  movl   $0x0,-0xc(%ebp)
08305fe8 +0x098:  jmp    08306023 <+0xd3>
08305fea +0x09a:  mov    -0xc(%ebp),%edx
08305fed +0x09d:  mov    0x8(%ebp),%eax
08305ff0 +0x0a0:  lea    0x264(%eax),%ecx
08305ff6 +0x0a6:  lea    -0x20(%ebp),%eax
08305ff9 +0x0a9:  mov    %edx,0x8(%esp)
08305ffd +0x0ad:  mov    %ecx,0x4(%esp)
08306001 +0x0b1:  mov    %eax,(%esp)
08306004 +0x0b4:  call   083118f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34db
08306009 +0x0b9:  sub    $0x4,%esp
0830600c +0x0bc:  movl   $0x1,0x4(%esp)
08306014 +0x0c4:  lea    -0x20(%ebp),%eax
08306017 +0x0c7:  mov    %eax,(%esp)
0830601a +0x0ca:  call   0814a2ae <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4d>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4d
0830601f +0x0cf:  addl   $0x1,-0xc(%ebp)
08306023 +0x0d3:  movswl -0x14(%ebp),%eax
08306027 +0x0d7:  cmp    -0xc(%ebp),%eax
0830602a +0x0da:  setg   %al
0830602d +0x0dd:  test   %al,%al
0830602f +0x0df:  jne    08305fea <+0x9a>
08306031 +0x0e1:  mov    0x8(%ebp),%eax
08306034 +0x0e4:  mov    %eax,(%esp)
08306037 +0x0e7:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830603c +0x0ec:  mov    %eax,-0x10(%ebp)
0830603f +0x0ef:  mov    0x8(%ebp),%eax
08306042 +0x0f2:  mov    %eax,(%esp)
08306045 +0x0f5:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830604a +0x0fa:  lea    0xc(%eax),%edx
0830604d +0x0fd:  lea    -0x24(%ebp),%eax
08306050 +0x100:  mov    %edx,0x4(%esp)
08306054 +0x104:  mov    %eax,(%esp)
08306057 +0x107:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
0830605c +0x10c:  sub    $0x4,%esp
0830605f +0x10f:  lea    -0x24(%ebp),%eax
08306062 +0x112:  mov    %eax,(%esp)
08306065 +0x115:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830606a +0x11a:  movzwl 0x34a(%eax),%eax
08306071 +0x121:  cmp    -0x2c(%ebp),%ax
08306075 +0x125:  setle  %al
08306078 +0x128:  test   %al,%al
0830607a +0x12a:  je     08306132 <+0x1e2>
08306080 +0x130:  lea    -0x24(%ebp),%eax
08306083 +0x133:  mov    %eax,(%esp)
08306086 +0x136:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830608b +0x13b:  movzwl 0x34a(%eax),%eax
08306092 +0x142:  cmp    -0x2c(%ebp),%ax
08306096 +0x146:  jne    083060b9 <+0x169>
08306098 +0x148:  lea    -0x24(%ebp),%eax
0830609b +0x14b:  mov    %eax,(%esp)
0830609e +0x14e:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
083060a3 +0x153:  movzbl 0x34c(%eax),%eax
083060aa +0x15a:  movsbl %al,%eax
083060ad +0x15d:  cmp    0x14(%ebp),%eax
083060b0 +0x160:  jne    083060b9 <+0x169>
083060b2 +0x162:  mov    $0x1,%eax
083060b7 +0x167:  jmp    083060be <+0x16e>
083060b9 +0x169:  mov    $0x0,%eax
083060be +0x16e:  test   %al,%al
083060c0 +0x170:  jne    08306135 <+0x1e5>
083060c2 +0x172:  lea    -0x24(%ebp),%eax
083060c5 +0x175:  mov    %eax,(%esp)
083060c8 +0x178:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
083060cd +0x17d:  lea    0x8(%eax),%ecx
083060d0 +0x180:  mov    -0x10(%ebp),%eax
083060d3 +0x183:  lea    0xc(%eax),%edx
083060d6 +0x186:  lea    -0x28(%ebp),%eax
083060d9 +0x189:  mov    %ecx,0x8(%esp)
083060dd +0x18d:  mov    %edx,0x4(%esp)
083060e1 +0x191:  mov    %eax,(%esp)
083060e4 +0x194:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
083060e9 +0x199:  sub    $0x4,%esp
083060ec +0x19c:  mov    -0x10(%ebp),%eax
083060ef +0x19f:  lea    0xc(%eax),%edx
083060f2 +0x1a2:  mov    -0x28(%ebp),%eax
083060f5 +0x1a5:  mov    %eax,0x4(%esp)
083060f9 +0x1a9:  mov    %edx,(%esp)
083060fc +0x1ac:  call   08311946 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x352b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x352b
08306101 +0x1b1:  mov    0x8(%ebp),%eax
08306104 +0x1b4:  mov    %eax,(%esp)
08306107 +0x1b7:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830610c +0x1bc:  lea    0xc(%eax),%edx
0830610f +0x1bf:  lea    -0x34(%ebp),%eax
08306112 +0x1c2:  mov    %edx,0x4(%esp)
08306116 +0x1c6:  mov    %eax,(%esp)
08306119 +0x1c9:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
0830611e +0x1ce:  sub    $0x4,%esp
08306121 +0x1d1:  mov    -0x34(%ebp),%eax
08306124 +0x1d4:  mov    %eax,-0x24(%ebp)
08306127 +0x1d7:  movw   $0x0,-0x12(%ebp)
0830612d +0x1dd:  jmp    0830605f <+0x10f>
08306132 +0x1e2:  nop
08306133 +0x1e3:  jmp    08306136 <+0x1e6>
08306135 +0x1e5:  nop
08306136 +0x1e6:  movswl -0x14(%ebp),%eax
0830613a +0x1ea:  mov    0x8(%ebp),%edx
0830613d +0x1ed:  add    $0x2ac,%edx
08306143 +0x1f3:  mov    %eax,0x4(%esp)
08306147 +0x1f7:  mov    %edx,(%esp)
0830614a +0x1fa:  call   0830eba8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x78d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x78d
0830614f +0x1ff:  mov    $0x1,%eax
08306154 +0x204:  leave
08306155 +0x205:  ret
```

## 反编译 C

```c
// CBattle_Field::forceValuesToChangeRound @ 0x8305f50

/* CBattle_Field::forceValuesToChangeRound(short, short, int) */

undefined4 __thiscall
CBattle_Field::forceValuesToChangeRound(CBattle_Field *this,short param_1,short param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_38 [4];
  short local_34;
  short local_30;
  int local_2c;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  _Bit_reference local_24 [8];
  int local_1c;
  short local_18;
  undefined2 local_16;
  int local_14;
  int local_10;
  
  local_30 = param_1;
  local_34 = param_2;
  local_1c = param_3;
  local_18 = getNextSamllRoundOrder(this,param_1,param_3);
  local_16 = 0;
  if (local_18 == 0) {
    LogManager::logFormat
              (1,"battle_field.cpp",
               "bool CBattle_Field::forceValuesToChangeRound(short int, short int, int)",0xe7e,
               "ULTIMATE_LOG : blood_round_order (%d) forceValuesToChangeRound ERROR!!\n",
               (int)local_30);
    uVar2 = 0;
  }
  else {
    if (local_34 < local_18) {
      for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
        std::vector<bool,std::allocator<bool>>::operator[]((uint)local_24);
        std::_Bit_reference::operator=(local_24,true);
      }
      local_14 = GetCurrentMapInfo(this);
      GetCurrentMapInfo(this);
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_28);
      while (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                               ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28),
            *(short *)(iVar3 + 0x34a) <= local_30) {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
        if ((*(short *)(iVar3 + 0x34a) == local_30) &&
           (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28),
           *(char *)(iVar3 + 0x34c) == param_3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
        iVar3 = iVar3 + 8;
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        find(&local_2c);
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        erase((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
               *)(local_14 + 0xc),local_2c,iVar3);
        GetCurrentMapInfo(this);
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        begin(local_38);
        local_16 = 0;
      }
    }
    CBloodRound::setBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac),local_18);
    uVar2 = 1;
  }
  return uVar2;
}
```
