# getCompoundUpgrade

`_ZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipCondition`

`CUser::getCompoundUpgrade(CStackableItem const*, stEquipCondition) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08682082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682082  _ZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipCondition
#           CUser::getCompoundUpgrade(CStackableItem const*, stEquipCondition) const
# range [0x08682082, 0x086822b7]
08682082 +0x000:  push   %ebp
08682083 +0x001:  mov    %esp,%ebp
08682085 +0x003:  push   %ebx
08682086 +0x004:  sub    $0x74,%esp
08682089 +0x007:  movl   $0x0,-0x1c(%ebp)
08682090 +0x00e:  movl   $0x0,-0x18(%ebp)
08682097 +0x015:  mov    0xc(%ebp),%eax
0868209a +0x018:  mov    %eax,(%esp)
0868209d +0x01b:  call   0869475e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xfb3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xfb3
086820a2 +0x020:  test   %al,%al
086820a4 +0x022:  je     08682184 <+0x102>
086820aa +0x028:  movzbl 0x12(%ebp),%eax
086820ae +0x02c:  test   %al,%al
086820b0 +0x02e:  jne    0868211b <+0x99>
086820b2 +0x030:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086820b7 +0x035:  movzbl 0x11(%ebp),%edx
086820bb +0x039:  movzbl %dl,%edx
086820be +0x03c:  shl    $0x7,%edx
086820c1 +0x03f:  add    $0x28c0,%edx
086820c7 +0x045:  add    %edx,%eax
086820c9 +0x047:  add    $0x10,%eax
086820cc +0x04a:  mov    %eax,-0x18(%ebp)
086820cf +0x04d:  mov    0xc(%ebp),%eax
086820d2 +0x050:  mov    %eax,(%esp)
086820d5 +0x053:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
086820da +0x058:  mov    %eax,%ebx
086820dc +0x05a:  movl   $0x0,0xc(%esp)
086820e4 +0x062:  movl   $0x86e5,0x8(%esp)
086820ec +0x06a:  movl   $&_ZZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipConditionE19__PRETTY_FUNCTION__,0x4(%esp)
086820f4 +0x072:  lea    -0x5c(%ebp),%eax
086820f7 +0x075:  mov    %eax,(%esp)
086820fa +0x078:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086820ff +0x07d:  mov    %ebx,0x8(%esp)
08682103 +0x081:  movl   $"RECIPE LOG : (Item:%u)UpgradeTable2nd",0x4(%esp)
0868210b +0x089:  lea    -0x5c(%ebp),%eax
0868210e +0x08c:  mov    %eax,(%esp)
08682111 +0x08f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08682116 +0x094:  jmp    08682256 <+0x1d4>
0868211b +0x099:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08682120 +0x09e:  movzbl 0x11(%ebp),%edx
08682124 +0x0a2:  movzbl %dl,%edx
08682127 +0x0a5:  shl    $0x7,%edx
0868212a +0x0a8:  add    $0x38c0,%edx
08682130 +0x0ae:  add    %edx,%eax
08682132 +0x0b0:  add    $0x10,%eax
08682135 +0x0b3:  mov    %eax,-0x18(%ebp)
08682138 +0x0b6:  mov    0xc(%ebp),%eax
0868213b +0x0b9:  mov    %eax,(%esp)
0868213e +0x0bc:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08682143 +0x0c1:  mov    %eax,%ebx
08682145 +0x0c3:  movl   $0x0,0xc(%esp)
0868214d +0x0cb:  movl   $0x86eb,0x8(%esp)
08682155 +0x0d3:  movl   $&_ZZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipConditionE19__PRETTY_FUNCTION__,0x4(%esp)
0868215d +0x0db:  lea    -0x4c(%ebp),%eax
08682160 +0x0de:  mov    %eax,(%esp)
08682163 +0x0e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08682168 +0x0e6:  mov    %ebx,0x8(%esp)
0868216c +0x0ea:  movl   $"RECIPE LOG : (Item:%u)AmplifyTable2nd",0x4(%esp)
08682174 +0x0f2:  lea    -0x4c(%ebp),%eax
08682177 +0x0f5:  mov    %eax,(%esp)
0868217a +0x0f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0868217f +0x0fd:  jmp    08682256 <+0x1d4>
08682184 +0x102:  movzbl 0x12(%ebp),%eax
08682188 +0x106:  test   %al,%al
0868218a +0x108:  jne    086821f2 <+0x170>
0868218c +0x10a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08682191 +0x10f:  movzbl 0x11(%ebp),%edx
08682195 +0x113:  movzbl %dl,%edx
08682198 +0x116:  shl    $0x7,%edx
0868219b +0x119:  add    $0x8c0,%edx
086821a1 +0x11f:  add    %edx,%eax
086821a3 +0x121:  add    $0x10,%eax
086821a6 +0x124:  mov    %eax,-0x18(%ebp)
086821a9 +0x127:  mov    0xc(%ebp),%eax
086821ac +0x12a:  mov    %eax,(%esp)
086821af +0x12d:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
086821b4 +0x132:  mov    %eax,%ebx
086821b6 +0x134:  movl   $0x0,0xc(%esp)
086821be +0x13c:  movl   $0x86f4,0x8(%esp)
086821c6 +0x144:  movl   $&_ZZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipConditionE19__PRETTY_FUNCTION__,0x4(%esp)
086821ce +0x14c:  lea    -0x3c(%ebp),%eax
086821d1 +0x14f:  mov    %eax,(%esp)
086821d4 +0x152:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086821d9 +0x157:  mov    %ebx,0x8(%esp)
086821dd +0x15b:  movl   $"RECIPE LOG : (Item:%u)UpgradeTable",0x4(%esp)
086821e5 +0x163:  lea    -0x3c(%ebp),%eax
086821e8 +0x166:  mov    %eax,(%esp)
086821eb +0x169:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086821f0 +0x16e:  jmp    08682256 <+0x1d4>
086821f2 +0x170:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086821f7 +0x175:  movzbl 0x11(%ebp),%edx
086821fb +0x179:  movzbl %dl,%edx
086821fe +0x17c:  shl    $0x7,%edx
08682201 +0x17f:  add    $0x18c0,%edx
08682207 +0x185:  add    %edx,%eax
08682209 +0x187:  add    $0x10,%eax
0868220c +0x18a:  mov    %eax,-0x18(%ebp)
0868220f +0x18d:  mov    0xc(%ebp),%eax
08682212 +0x190:  mov    %eax,(%esp)
08682215 +0x193:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0868221a +0x198:  mov    %eax,%ebx
0868221c +0x19a:  movl   $0x0,0xc(%esp)
08682224 +0x1a2:  movl   $0x86fa,0x8(%esp)
0868222c +0x1aa:  movl   $&_ZZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipConditionE19__PRETTY_FUNCTION__,0x4(%esp)
08682234 +0x1b2:  lea    -0x2c(%ebp),%eax
08682237 +0x1b5:  mov    %eax,(%esp)
0868223a +0x1b8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0868223f +0x1bd:  mov    %ebx,0x8(%esp)
08682243 +0x1c1:  movl   $"RECIPE LOG : (Item:%u)AmplifyTable",0x4(%esp)
0868224b +0x1c9:  lea    -0x2c(%ebp),%eax
0868224e +0x1cc:  mov    %eax,(%esp)
08682251 +0x1cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08682256 +0x1d4:  cmpl   $0x0,-0x18(%ebp)
0868225a +0x1d8:  je     086822ae <+0x22c>
0868225c +0x1da:  movl   $0x2710,(%esp)
08682263 +0x1e1:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08682268 +0x1e6:  mov    %eax,-0x14(%ebp)
0868226b +0x1e9:  movl   $0x0,-0x10(%ebp)
08682272 +0x1f0:  movl   $0x0,-0xc(%ebp)
08682279 +0x1f7:  jmp    086822a3 <+0x221>
0868227b +0x1f9:  mov    -0xc(%ebp),%eax
0868227e +0x1fc:  shl    $0x2,%eax
08682281 +0x1ff:  add    -0x18(%ebp),%eax
08682284 +0x202:  mov    (%eax),%edx
08682286 +0x204:  mov    -0x10(%ebp),%eax
08682289 +0x207:  lea    (%edx,%eax,1),%eax
0868228c +0x20a:  mov    %eax,-0x10(%ebp)
0868228f +0x20d:  mov    -0x10(%ebp),%eax
08682292 +0x210:  cmp    -0x14(%ebp),%eax
08682295 +0x213:  jle    0868229f <+0x21d>
08682297 +0x215:  mov    -0xc(%ebp),%eax
0868229a +0x218:  mov    %eax,-0x1c(%ebp)
0868229d +0x21b:  jmp    086822ae <+0x22c>
0868229f +0x21d:  addl   $0x1,-0xc(%ebp)
086822a3 +0x221:  cmpl   $0x1f,-0xc(%ebp)
086822a7 +0x225:  setle  %al
086822aa +0x228:  test   %al,%al
086822ac +0x22a:  jne    0868227b <+0x1f9>
086822ae +0x22c:  mov    -0x1c(%ebp),%eax
086822b1 +0x22f:  add    $0x74,%esp
086822b4 +0x232:  pop    %ebx
086822b5 +0x233:  pop    %ebp
086822b6 +0x234:  ret
086822b7 +0x235:  nop
```

## 反编译 C

```c
// CUser::getCompoundUpgrade @ 0x8682082

/* CUser::getCompoundUpgrade(CStackableItem const*, stEquipCondition) const */

int __thiscall CUser::getCompoundUpgrade(undefined4 this,CStackableItem *param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  cVar1 = CStackableItem::IsUse2ndUpgradeTableRecipe(param_1);
  if (cVar1 == '\0') {
    if (param_3._2_1_ == '\0') {
      iVar2 = G_CDataManager();
      local_1c = iVar2 + (uint)param_3._1_1_ * 0x80 + 0x8d0;
      uVar3 = CItem::get_index((CItem *)param_1);
      cMyTrace::cMyTrace(local_40,
                         "int CUser::getCompoundUpgrade(const CStackableItem*, stEquipCondition) const"
                         ,0x86f4,0);
      cMyTrace::operator()(local_40,"RECIPE LOG : (Item:%u)UpgradeTable",uVar3);
    }
    else {
      iVar2 = G_CDataManager();
      local_1c = iVar2 + (uint)param_3._1_1_ * 0x80 + 0x18d0;
      uVar3 = CItem::get_index((CItem *)param_1);
      cMyTrace::cMyTrace(local_30,
                         "int CUser::getCompoundUpgrade(const CStackableItem*, stEquipCondition) const"
                         ,0x86fa,0);
      cMyTrace::operator()(local_30,"RECIPE LOG : (Item:%u)AmplifyTable",uVar3);
    }
  }
  else if (param_3._2_1_ == '\0') {
    iVar2 = G_CDataManager();
    local_1c = iVar2 + (uint)param_3._1_1_ * 0x80 + 0x28d0;
    uVar3 = CItem::get_index((CItem *)param_1);
    cMyTrace::cMyTrace(local_60,
                       "int CUser::getCompoundUpgrade(const CStackableItem*, stEquipCondition) const"
                       ,0x86e5,0);
    cMyTrace::operator()(local_60,"RECIPE LOG : (Item:%u)UpgradeTable2nd",uVar3);
  }
  else {
    iVar2 = G_CDataManager();
    local_1c = iVar2 + (uint)param_3._1_1_ * 0x80 + 0x38d0;
    uVar3 = CItem::get_index((CItem *)param_1);
    cMyTrace::cMyTrace(local_50,
                       "int CUser::getCompoundUpgrade(const CStackableItem*, stEquipCondition) const"
                       ,0x86eb,0);
    cMyTrace::operator()(local_50,"RECIPE LOG : (Item:%u)AmplifyTable2nd",uVar3);
  }
  if (local_1c != 0) {
    iVar2 = get_rand_int(10000);
    local_14 = 0;
    for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
      local_14 = *(int *)(local_10 * 4 + local_1c) + local_14;
      if (iVar2 < local_14) {
        return local_10;
      }
    }
  }
  return local_20;
}
```
