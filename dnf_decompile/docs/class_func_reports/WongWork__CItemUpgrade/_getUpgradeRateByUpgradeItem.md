# _getUpgradeRateByUpgradeItem

`_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR`

`WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08548ffa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08548ffa  _ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR
#           WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)
# range [0x08548ffa, 0x08549147]
08548ffa +0x000:  push   %ebp
08548ffb +0x001:  mov    %esp,%ebp
08548ffd +0x003:  push   %ebx
08548ffe +0x004:  sub    $0x34,%esp
08549001 +0x007:  movb   $0x0,-0x19(%ebp)
08549005 +0x00b:  mov    0xc(%ebp),%eax
08549008 +0x00e:  add    $0x11,%eax
0854900b +0x011:  mov    %eax,(%esp)
0854900e +0x014:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08549013 +0x019:  test   %al,%al
08549015 +0x01b:  jne    0854905d <+0x63>
08549017 +0x01d:  mov    0x10(%ebp),%eax
0854901a +0x020:  mov    0x2(%eax),%eax
0854901d +0x023:  cmp    $0x1d29,%eax
08549022 +0x028:  je     0854904c <+0x52>
08549024 +0x02a:  cmp    $0x1d29,%eax
08549029 +0x02f:  ja     08549037 <+0x3d>
0854902b +0x031:  sub    $0x1c69,%eax
08549030 +0x036:  cmp    $0x2,%eax
08549033 +0x039:  ja     08549059 <+0x5f>
08549035 +0x03b:  jmp    0854904c <+0x52>
08549037 +0x03d:  cmp    $0x1e3f,%eax
0854903c +0x042:  jb     08549059 <+0x5f>
0854903e +0x044:  cmp    $0x1e40,%eax
08549043 +0x049:  jbe    0854904c <+0x52>
08549045 +0x04b:  cmp    $0x1e86,%eax
0854904a +0x050:  jne    08549059 <+0x5f>
0854904c +0x052:  movb   $0x64,-0x19(%ebp)
08549050 +0x056:  movzbl -0x19(%ebp),%eax
08549054 +0x05a:  jmp    08549142 <+0x148>
08549059 +0x05f:  movb   $0x0,-0x19(%ebp)
0854905d +0x063:  mov    0x10(%ebp),%eax
08549060 +0x066:  mov    0x2(%eax),%eax
08549063 +0x069:  mov    %eax,%ebx
08549065 +0x06b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854906a +0x070:  mov    %ebx,0x4(%esp)
0854906e +0x074:  mov    %eax,(%esp)
08549071 +0x077:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08549076 +0x07c:  mov    %eax,-0x18(%ebp)
08549079 +0x07f:  cmpl   $0x0,-0x18(%ebp)
0854907d +0x083:  je     08549095 <+0x9b>
0854907f +0x085:  mov    -0x18(%ebp),%eax
08549082 +0x088:  mov    %eax,(%esp)
08549085 +0x08b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0854908a +0x090:  test   %al,%al
0854908c +0x092:  je     08549095 <+0x9b>
0854908e +0x094:  mov    $0x1,%eax
08549093 +0x099:  jmp    0854909a <+0xa0>
08549095 +0x09b:  mov    $0x0,%eax
0854909a +0x0a0:  test   %al,%al
0854909c +0x0a2:  je     0854913e <+0x144>
085490a2 +0x0a8:  mov    -0x18(%ebp),%eax
085490a5 +0x0ab:  mov    %eax,-0x14(%ebp)
085490a8 +0x0ae:  mov    -0x14(%ebp),%eax
085490ab +0x0b1:  mov    %eax,(%esp)
085490ae +0x0b4:  call   084b4222 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2d5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2d5
085490b3 +0x0b9:  test   %al,%al
085490b5 +0x0bb:  je     085490e1 <+0xe7>
085490b7 +0x0bd:  mov    -0x14(%ebp),%eax
085490ba +0x0c0:  mov    %eax,(%esp)
085490bd +0x0c3:  call   084b4232 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2e5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2e5
085490c2 +0x0c8:  mov    %al,-0xd(%ebp)
085490c5 +0x0cb:  cmpb   $0x0,-0xd(%ebp)
085490c9 +0x0cf:  js     085490d1 <+0xd7>
085490cb +0x0d1:  cmpb   $0x64,-0xd(%ebp)
085490cf +0x0d5:  jle    085490d8 <+0xde>
085490d1 +0x0d7:  movb   $0x0,-0x19(%ebp)
085490d5 +0x0db:  nop
085490d6 +0x0dc:  jmp    0854913e <+0x144>
085490d8 +0x0de:  movzbl -0xd(%ebp),%eax
085490dc +0x0e2:  mov    %al,-0x19(%ebp)
085490df +0x0e5:  jmp    0854913e <+0x144>
085490e1 +0x0e7:  mov    -0x14(%ebp),%eax
085490e4 +0x0ea:  mov    %eax,(%esp)
085490e7 +0x0ed:  call   084b4242 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2f5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2f5
085490ec +0x0f2:  test   %al,%al
085490ee +0x0f4:  je     0854913e <+0x144>
085490f0 +0x0f6:  mov    0xc(%ebp),%eax
085490f3 +0x0f9:  add    $0x11,%eax
085490f6 +0x0fc:  mov    %eax,(%esp)
085490f9 +0x0ff:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
085490fe +0x104:  xor    $0x1,%eax
08549101 +0x107:  test   %al,%al
08549103 +0x109:  je     08549115 <+0x11b>
08549105 +0x10b:  mov    0x14(%ebp),%eax
08549108 +0x10e:  movl   $0x13,(%eax)
0854910e +0x114:  mov    $0x0,%eax
08549113 +0x119:  jmp    08549142 <+0x148>
08549115 +0x11b:  mov    -0x14(%ebp),%eax
08549118 +0x11e:  mov    %eax,(%esp)
0854911b +0x121:  call   084b4252 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x305>  ; global constructors keyed to game_master::CMacro::Reset()+0x305
08549120 +0x126:  movsbl %al,%eax
08549123 +0x129:  mov    %eax,-0xc(%ebp)
08549126 +0x12c:  cmpl   $0x0,-0xc(%ebp)
0854912a +0x130:  js     08549132 <+0x138>
0854912c +0x132:  cmpl   $0x64,-0xc(%ebp)
08549130 +0x136:  jle    08549138 <+0x13e>
08549132 +0x138:  movb   $0x0,-0x19(%ebp)
08549136 +0x13c:  jmp    0854913e <+0x144>
08549138 +0x13e:  mov    -0xc(%ebp),%eax
0854913b +0x141:  mov    %al,-0x19(%ebp)
0854913e +0x144:  movzbl -0x19(%ebp),%eax
08549142 +0x148:  add    $0x34,%esp
08549145 +0x14b:  pop    %ebx
08549146 +0x14c:  pop    %ebp
08549147 +0x14d:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem @ 0x8548ffa

/* WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem(Inven_Item const&, Inven_Item const&,
   ENUM_ERROR&) */

char __thiscall
WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,ENUM_ERROR *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *this_01;
  char local_1d;
  
  cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
  if (cVar4 != '\0') goto LAB_0854905d;
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0x1d29) {
LAB_0854904c:
    local_1d = 'd';
  }
  else {
    if (uVar1 < 0x1d2a) {
      if (uVar1 - 0x1c69 < 3) goto LAB_0854904c;
    }
    else if ((0x1e3e < uVar1) && ((uVar1 < 0x1e41 || (uVar1 == 0x1e86)))) goto LAB_0854904c;
LAB_0854905d:
    local_1d = '\0';
    iVar2 = *(int *)(param_2 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if ((this_01 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_01), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = CStackableItem::IsReinforceTicket((CStackableItem *)this_01);
      if (cVar4 == '\0') {
        cVar4 = CStackableItem::IsAmplifyReinforceTicket((CStackableItem *)this_01);
        if (cVar4 != '\0') {
          cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
          if (cVar4 == '\x01') {
            local_1d = CStackableItem::GetAmplifyReinforceRate((CStackableItem *)this_01);
            if ((local_1d < '\0') || ('d' < local_1d)) {
              local_1d = '\0';
            }
          }
          else {
            *(undefined4 *)param_3 = 0x13;
            local_1d = '\0';
          }
        }
      }
      else {
        local_1d = CStackableItem::GetReinforceRate((CStackableItem *)this_01);
        if ((local_1d < '\0') || ('d' < local_1d)) {
          local_1d = '\0';
        }
      }
    }
  }
  return local_1d;
}
```
