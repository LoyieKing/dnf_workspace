# copyItemOption

`_ZN5CUser14copyItemOptionER10Inven_ItemS1_`

`CUser::copyItemOption(Inven_Item&, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08671eb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08671eb2  _ZN5CUser14copyItemOptionER10Inven_ItemS1_
#           CUser::copyItemOption(Inven_Item&, Inven_Item&)
# range [0x08671eb2, 0x08671fdd]
08671eb2 +0x000:  push   %ebp
08671eb3 +0x001:  mov    %esp,%ebp
08671eb5 +0x003:  push   %edi
08671eb6 +0x004:  push   %esi
08671eb7 +0x005:  push   %ebx
08671eb8 +0x006:  sub    $0x4c,%esp
08671ebb +0x009:  mov    0x10(%ebp),%eax
08671ebe +0x00c:  mov    %eax,(%esp)
08671ec1 +0x00f:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08671ec6 +0x014:  movzbl %al,%eax
08671ec9 +0x017:  mov    %eax,0x4(%esp)
08671ecd +0x01b:  mov    0xc(%ebp),%eax
08671ed0 +0x01e:  mov    %eax,(%esp)
08671ed3 +0x021:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08671ed8 +0x026:  mov    0x10(%ebp),%eax
08671edb +0x029:  mov    %eax,(%esp)
08671ede +0x02c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08671ee3 +0x031:  mov    %eax,0x4(%esp)
08671ee7 +0x035:  mov    0xc(%ebp),%eax
08671eea +0x038:  mov    %eax,(%esp)
08671eed +0x03b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08671ef2 +0x040:  mov    0x10(%ebp),%eax
08671ef5 +0x043:  movzbl 0x33(%eax),%eax
08671ef9 +0x047:  mov    %eax,%edx
08671efb +0x049:  and    $0x1f,%edx
08671efe +0x04c:  mov    0xc(%ebp),%eax
08671f01 +0x04f:  mov    %edx,%ecx
08671f03 +0x051:  and    $0x1f,%ecx
08671f06 +0x054:  movzbl 0x33(%eax),%edx
08671f0a +0x058:  and    $0xffffffe0,%edx
08671f0d +0x05b:  or     %ecx,%edx
08671f0f +0x05d:  mov    %dl,0x33(%eax)
08671f12 +0x060:  mov    0xc(%ebp),%eax
08671f15 +0x063:  mov    0x10(%ebp),%edx
08671f18 +0x066:  mov    0x11(%edx),%edx
08671f1b +0x069:  mov    %edx,0x11(%eax)
08671f1e +0x06c:  mov    0x10(%ebp),%eax
08671f21 +0x06f:  mov    0xd(%eax),%edx
08671f24 +0x072:  mov    0xc(%ebp),%eax
08671f27 +0x075:  mov    %edx,0xd(%eax)
08671f2a +0x078:  mov    0xc(%ebp),%eax
08671f2d +0x07b:  add    $0x11,%eax
08671f30 +0x07e:  mov    %eax,(%esp)
08671f33 +0x081:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08671f38 +0x086:  movzbl %al,%ebx
08671f3b +0x089:  mov    0xc(%ebp),%eax
08671f3e +0x08c:  add    $0x11,%eax
08671f41 +0x08f:  mov    %eax,(%esp)
08671f44 +0x092:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08671f49 +0x097:  movzwl %ax,%eax
08671f4c +0x09a:  mov    %eax,-0x24(%ebp)
08671f4f +0x09d:  mov    0xc(%ebp),%eax
08671f52 +0x0a0:  add    $0x11,%eax
08671f55 +0x0a3:  mov    %eax,(%esp)
08671f58 +0x0a6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08671f5d +0x0ab:  movzbl %al,%eax
08671f60 +0x0ae:  mov    %eax,-0x20(%ebp)
08671f63 +0x0b1:  mov    0xc(%ebp),%eax
08671f66 +0x0b4:  mov    0xd(%eax),%eax
08671f69 +0x0b7:  mov    %eax,-0x1c(%ebp)
08671f6c +0x0ba:  mov    0xc(%ebp),%eax
08671f6f +0x0bd:  movzbl 0x33(%eax),%eax
08671f73 +0x0c1:  and    $0x1f,%eax
08671f76 +0x0c4:  movzbl %al,%edi
08671f79 +0x0c7:  mov    0xc(%ebp),%eax
08671f7c +0x0ca:  mov    %eax,(%esp)
08671f7f +0x0cd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08671f84 +0x0d2:  mov    %eax,%esi
08671f86 +0x0d4:  mov    0xc(%ebp),%eax
08671f89 +0x0d7:  mov    %eax,(%esp)
08671f8c +0x0da:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08671f91 +0x0df:  movzbl %al,%edx
08671f94 +0x0e2:  mov    0xc(%ebp),%eax
08671f97 +0x0e5:  mov    0x2(%eax),%eax
08671f9a +0x0e8:  mov    %ebx,0x24(%esp)
08671f9e +0x0ec:  mov    -0x24(%ebp),%ecx
08671fa1 +0x0ef:  mov    %ecx,0x20(%esp)
08671fa5 +0x0f3:  mov    -0x20(%ebp),%ecx
08671fa8 +0x0f6:  mov    %ecx,0x1c(%esp)
08671fac +0x0fa:  mov    -0x1c(%ebp),%ecx
08671faf +0x0fd:  mov    %ecx,0x18(%esp)
08671fb3 +0x101:  mov    %edi,0x14(%esp)
08671fb7 +0x105:  mov    %esi,0x10(%esp)
08671fbb +0x109:  mov    %edx,0xc(%esp)
08671fbf +0x10d:  mov    %eax,0x8(%esp)
08671fc3 +0x111:  movl   $"Compound+,%u,%d,%d,%d,%d,%d,%d,%d,",0x4(%esp)
08671fcb +0x119:  mov    0x8(%ebp),%eax
08671fce +0x11c:  mov    %eax,(%esp)
08671fd1 +0x11f:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08671fd6 +0x124:  add    $0x4c,%esp
08671fd9 +0x127:  pop    %ebx
08671fda +0x128:  pop    %esi
08671fdb +0x129:  pop    %edi
08671fdc +0x12a:  pop    %ebp
08671fdd +0x12b:  ret
```

## 反编译 C

```c
// CUser::copyItemOption @ 0x8671eb2

/* CUser::copyItemOption(Inven_Item&, Inven_Item&) */

void __thiscall CUser::copyItemOption(CUser *this,Inven_Item *param_1,Inven_Item *param_2)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar3 = Inven_Item::GetUpgrade(param_2);
  Inven_Item::SetUpgrade(param_1,uVar3);
  iVar4 = Inven_Item::get_add_info(param_2);
  Inven_Item::set_add_info(param_1,iVar4);
  param_1[0x33] = (Inven_Item)((byte)param_1[0x33] & 0xe0 | (byte)param_2[0x33] & 0x1f);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  uVar5 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_1 + 0x11));
  uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_1 + 0x11));
  uVar7 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_1 + 0x11));
  uVar2 = *(undefined4 *)(param_1 + 0xd);
  IVar1 = param_1[0x33];
  uVar8 = Inven_Item::get_add_info(param_1);
  uVar9 = Inven_Item::GetUpgrade(param_1);
  LogHistory(this,"Compound+,%u,%d,%d,%d,%d,%d,%d,%d,",*(undefined4 *)(param_1 + 2),uVar9 & 0xff,
             uVar8,(uint)((byte)IVar1 & 0x1f),uVar2,uVar7 & 0xff,uVar6 & 0xffff,uVar5 & 0xff);
  return;
}
```
