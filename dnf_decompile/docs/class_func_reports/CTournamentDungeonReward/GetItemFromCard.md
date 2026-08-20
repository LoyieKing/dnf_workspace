# GetItemFromCard

`_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj`

`CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x0828502e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828502e  _ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj
#           CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*, unsigned int)
# range [0x0828502e, 0x0828523b]
0828502e +0x000:  push   %ebp
0828502f +0x001:  mov    %esp,%ebp
08285031 +0x003:  push   %esi
08285032 +0x004:  push   %ebx
08285033 +0x005:  sub    $0x20,%esp
08285036 +0x008:  cmpl   $0x2,0x18(%ebp)
0828503a +0x00c:  jbe    08285046 <+0x18>
0828503c +0x00e:  mov    $0x0,%eax
08285041 +0x013:  jmp    08285235 <+0x207>
08285046 +0x018:  mov    0xc(%ebp),%eax
08285049 +0x01b:  test   %eax,%eax
0828504b +0x01d:  js     08285055 <+0x27>
0828504d +0x01f:  mov    0xc(%ebp),%eax
08285050 +0x022:  cmp    $0x1,%eax
08285053 +0x025:  jle    0828505f <+0x31>
08285055 +0x027:  mov    $0x0,%eax
0828505a +0x02c:  jmp    08285235 <+0x207>
0828505f +0x031:  movl   $0x0,-0xc(%ebp)
08285066 +0x038:  jmp    08285221 <+0x1f3>
0828506b +0x03d:  mov    0xc(%ebp),%edx
0828506e +0x040:  mov    -0xc(%ebp),%ecx
08285071 +0x043:  mov    0x8(%ebp),%ebx
08285074 +0x046:  mov    %ecx,%eax
08285076 +0x048:  add    %eax,%eax
08285078 +0x04a:  add    %ecx,%eax
0828507a +0x04c:  lea    0x0(,%eax,4),%ecx
08285081 +0x053:  mov    %edx,%eax
08285083 +0x055:  add    %eax,%eax
08285085 +0x057:  add    %edx,%eax
08285087 +0x059:  shl    $0x3,%eax
0828508a +0x05c:  lea    (%ecx,%eax,1),%eax
0828508d +0x05f:  movzbl 0x10(%eax,%ebx,1),%eax
08285092 +0x064:  movsbl %al,%eax
08285095 +0x067:  cmp    0x10(%ebp),%eax
08285098 +0x06a:  jne    0828521d <+0x1ef>
0828509e +0x070:  mov    0xc(%ebp),%edx
082850a1 +0x073:  mov    -0xc(%ebp),%ecx
082850a4 +0x076:  mov    0x8(%ebp),%ebx
082850a7 +0x079:  mov    %ecx,%eax
082850a9 +0x07b:  add    %eax,%eax
082850ab +0x07d:  add    %ecx,%eax
082850ad +0x07f:  lea    0x0(,%eax,4),%ecx
082850b4 +0x086:  mov    %edx,%eax
082850b6 +0x088:  add    %eax,%eax
082850b8 +0x08a:  add    %edx,%eax
082850ba +0x08c:  shl    $0x3,%eax
082850bd +0x08f:  lea    (%ecx,%eax,1),%eax
082850c0 +0x092:  lea    (%ebx,%eax,1),%eax
082850c3 +0x095:  add    $0x8,%eax
082850c6 +0x098:  mov    (%eax),%eax
082850c8 +0x09a:  test   %eax,%eax
082850ca +0x09c:  jne    08285128 <+0xfa>
082850cc +0x09e:  mov    0x14(%ebp),%eax
082850cf +0x0a1:  mov    %eax,(%esp)
082850d2 +0x0a4:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
082850d7 +0x0a9:  mov    0xc(%ebp),%edx
082850da +0x0ac:  mov    -0xc(%ebp),%ecx
082850dd +0x0af:  mov    0x8(%ebp),%ebx
082850e0 +0x0b2:  mov    %ecx,%eax
082850e2 +0x0b4:  add    %eax,%eax
082850e4 +0x0b6:  add    %ecx,%eax
082850e6 +0x0b8:  lea    0x0(,%eax,4),%ecx
082850ed +0x0bf:  mov    %edx,%eax
082850ef +0x0c1:  add    %eax,%eax
082850f1 +0x0c3:  add    %edx,%eax
082850f3 +0x0c5:  shl    $0x3,%eax
082850f6 +0x0c8:  lea    (%ecx,%eax,1),%eax
082850f9 +0x0cb:  lea    (%ebx,%eax,1),%eax
082850fc +0x0ce:  add    $0xc,%eax
082850ff +0x0d1:  mov    (%eax),%eax
08285101 +0x0d3:  mov    %eax,0x4(%esp)
08285105 +0x0d7:  mov    0x14(%ebp),%eax
08285108 +0x0da:  mov    %eax,(%esp)
0828510b +0x0dd:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08285110 +0x0e2:  mov    0x14(%ebp),%eax
08285113 +0x0e5:  add    $0x3d,%eax
08285116 +0x0e8:  mov    %eax,(%esp)
08285119 +0x0eb:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0828511e +0x0f0:  mov    $0x1,%eax
08285123 +0x0f5:  jmp    08285235 <+0x207>
08285128 +0x0fa:  mov    0xc(%ebp),%edx
0828512b +0x0fd:  mov    -0xc(%ebp),%ecx
0828512e +0x100:  mov    0x8(%ebp),%ebx
08285131 +0x103:  mov    %ecx,%eax
08285133 +0x105:  add    %eax,%eax
08285135 +0x107:  add    %ecx,%eax
08285137 +0x109:  lea    0x0(,%eax,4),%ecx
0828513e +0x110:  mov    %edx,%eax
08285140 +0x112:  add    %eax,%eax
08285142 +0x114:  add    %edx,%eax
08285144 +0x116:  shl    $0x3,%eax
08285147 +0x119:  lea    (%ecx,%eax,1),%eax
0828514a +0x11c:  lea    (%ebx,%eax,1),%eax
0828514d +0x11f:  add    $0x8,%eax
08285150 +0x122:  mov    (%eax),%eax
08285152 +0x124:  cmp    $0xffffffff,%eax
08285155 +0x127:  jne    0828517a <+0x14c>
08285157 +0x129:  mov    0x14(%ebp),%eax
0828515a +0x12c:  mov    %eax,(%esp)
0828515d +0x12f:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08285162 +0x134:  mov    0x14(%ebp),%eax
08285165 +0x137:  add    $0x3d,%eax
08285168 +0x13a:  mov    %eax,(%esp)
0828516b +0x13d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08285170 +0x142:  mov    $0x0,%eax
08285175 +0x147:  jmp    08285235 <+0x207>
0828517a +0x14c:  mov    0x14(%ebp),%eax
0828517d +0x14f:  mov    %eax,(%esp)
08285180 +0x152:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08285185 +0x157:  mov    0x14(%ebp),%eax
08285188 +0x15a:  add    $0x3d,%eax
0828518b +0x15d:  mov    %eax,(%esp)
0828518e +0x160:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08285193 +0x165:  mov    0x14(%ebp),%eax
08285196 +0x168:  lea    0x3d(%eax),%ebx
08285199 +0x16b:  mov    0xc(%ebp),%edx
0828519c +0x16e:  mov    -0xc(%ebp),%ecx
0828519f +0x171:  mov    0x8(%ebp),%esi
082851a2 +0x174:  mov    %ecx,%eax
082851a4 +0x176:  add    %eax,%eax
082851a6 +0x178:  add    %ecx,%eax
082851a8 +0x17a:  lea    0x0(,%eax,4),%ecx
082851af +0x181:  mov    %edx,%eax
082851b1 +0x183:  add    %eax,%eax
082851b3 +0x185:  add    %edx,%eax
082851b5 +0x187:  shl    $0x3,%eax
082851b8 +0x18a:  lea    (%ecx,%eax,1),%eax
082851bb +0x18d:  lea    (%esi,%eax,1),%eax
082851be +0x190:  add    $0x8,%eax
082851c1 +0x193:  mov    (%eax),%eax
082851c3 +0x195:  mov    %eax,0x2(%ebx)
082851c6 +0x198:  mov    0xc(%ebp),%edx
082851c9 +0x19b:  mov    -0xc(%ebp),%ecx
082851cc +0x19e:  mov    0x8(%ebp),%ebx
082851cf +0x1a1:  mov    %ecx,%eax
082851d1 +0x1a3:  add    %eax,%eax
082851d3 +0x1a5:  add    %ecx,%eax
082851d5 +0x1a7:  lea    0x0(,%eax,4),%ecx
082851dc +0x1ae:  mov    %edx,%eax
082851de +0x1b0:  add    %eax,%eax
082851e0 +0x1b2:  add    %edx,%eax
082851e2 +0x1b4:  shl    $0x3,%eax
082851e5 +0x1b7:  lea    (%ecx,%eax,1),%eax
082851e8 +0x1ba:  lea    (%ebx,%eax,1),%eax
082851eb +0x1bd:  add    $0xc,%eax
082851ee +0x1c0:  mov    (%eax),%ebx
082851f0 +0x1c2:  mov    0x14(%ebp),%eax
082851f3 +0x1c5:  lea    0x3d(%eax),%esi
082851f6 +0x1c8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082851fb +0x1cd:  mov    0xc(%eax),%eax
082851fe +0x1d0:  mov    %ebx,0xc(%esp)
08285202 +0x1d4:  mov    %esi,0x8(%esp)
08285206 +0x1d8:  movl   $0x1,0x4(%esp)
0828520e +0x1e0:  mov    %eax,(%esp)
08285211 +0x1e3:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08285216 +0x1e8:  mov    $0x1,%eax
0828521b +0x1ed:  jmp    08285235 <+0x207>
0828521d +0x1ef:  addl   $0x1,-0xc(%ebp)
08285221 +0x1f3:  cmpl   $0x1,-0xc(%ebp)
08285225 +0x1f7:  setle  %al
08285228 +0x1fa:  test   %al,%al
0828522a +0x1fc:  jne    0828506b <+0x3d>
08285230 +0x202:  mov    $0x0,%eax
08285235 +0x207:  add    $0x20,%esp
08285238 +0x20a:  pop    %ebx
08285239 +0x20b:  pop    %esi
0828523a +0x20c:  pop    %ebp
0828523b +0x20d:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::GetItemFromCard @ 0x828502e

/* CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*,
   unsigned int) */

undefined4 __thiscall
CTournamentDungeonReward::GetItemFromCard
          (CTournamentDungeonReward *this,int param_2,int param_3,Inven_Item *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  if (((param_5 < 3) && (-1 < param_2)) && (param_2 < 2)) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if ((char)this[local_10 * 0xc + param_2 * 0x18 + 0x10] == param_3) {
        if (*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8) == 0) {
          Inven_Item::reset(param_4);
          Inven_Item::set_add_info(param_4,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc));
          Inven_Item::reset(param_4 + 0x3d);
          return 1;
        }
        if (*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8) != -1) {
          Inven_Item::reset(param_4);
          Inven_Item::reset(param_4 + 0x3d);
          *(undefined4 *)(param_4 + 0x3f) =
               *(undefined4 *)(this + local_10 * 0xc + param_2 * 0x18 + 8);
          uVar1 = *(undefined4 *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc);
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,param_4 + 0x3d,uVar1);
          return 1;
        }
        Inven_Item::reset(param_4);
        Inven_Item::reset(param_4 + 0x3d);
        return 0;
      }
    }
  }
  return 0;
}
```
