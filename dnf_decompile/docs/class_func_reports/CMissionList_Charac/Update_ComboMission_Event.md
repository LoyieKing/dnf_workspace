# Update_ComboMission_Event

`_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris`

`CMissionList_Charac::Update_ComboMission_Event(CUser&, int, short)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e6654` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e6654  _ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris
#           CMissionList_Charac::Update_ComboMission_Event(CUser&, int, short)
# range [0x085e6654, 0x085e6837]
085e6654 +0x000:  push   %ebp
085e6655 +0x001:  mov    %esp,%ebp
085e6657 +0x003:  push   %esi
085e6658 +0x004:  push   %ebx
085e6659 +0x005:  sub    $0x60,%esp
085e665c +0x008:  mov    0x14(%ebp),%eax
085e665f +0x00b:  mov    %ax,-0x3c(%ebp)
085e6663 +0x00f:  cmpw   $0x0,-0x3c(%ebp)
085e6668 +0x014:  js     085e682a <+0x1d6>
085e666e +0x01a:  cmpw   $0x8,-0x3c(%ebp)
085e6673 +0x01f:  jg     085e682d <+0x1d9>
085e6679 +0x025:  cmpl   $0x1f,0x10(%ebp)
085e667d +0x029:  je     085e6689 <+0x35>
085e667f +0x02b:  cmpl   $0x20,0x10(%ebp)
085e6683 +0x02f:  jne    085e6830 <+0x1dc>
085e6689 +0x035:  movzwl -0x3c(%ebp),%eax
085e668d +0x039:  mov    %ax,-0xe(%ebp)
085e6691 +0x03d:  mov    0x10(%ebp),%edx
085e6694 +0x040:  mov    0x8(%ebp),%eax
085e6697 +0x043:  movzwl 0x9(%eax,%edx,8),%eax
085e669c +0x048:  mov    %ax,-0xc(%ebp)
085e66a0 +0x04c:  cmpw   $0x3,-0x3c(%ebp)
085e66a5 +0x051:  jle    085e66c1 <+0x6d>
085e66a7 +0x053:  movzwl -0xe(%ebp),%eax
085e66ab +0x057:  sub    $0x4,%eax
085e66ae +0x05a:  mov    %ax,-0xe(%ebp)
085e66b2 +0x05e:  mov    0x10(%ebp),%edx
085e66b5 +0x061:  mov    0x8(%ebp),%eax
085e66b8 +0x064:  movzwl 0xb(%eax,%edx,8),%eax
085e66bd +0x069:  mov    %ax,-0xc(%ebp)
085e66c1 +0x06d:  movswl -0xc(%ebp),%edx
085e66c5 +0x071:  movswl -0xe(%ebp),%eax
085e66c9 +0x075:  mov    $0x3,%ecx
085e66ce +0x07a:  mov    %ecx,%ebx
085e66d0 +0x07c:  sub    %eax,%ebx
085e66d2 +0x07e:  mov    %ebx,%eax
085e66d4 +0x080:  shl    $0x2,%eax
085e66d7 +0x083:  mov    %edx,%ebx
085e66d9 +0x085:  mov    %eax,%ecx
085e66db +0x087:  sar    %cl,%ebx
085e66dd +0x089:  mov    %ebx,%eax
085e66df +0x08b:  and    $0xf,%eax
085e66e2 +0x08e:  mov    %ax,-0xa(%ebp)
085e66e6 +0x092:  movzwl -0xc(%ebp),%edx
085e66ea +0x096:  movswl -0xa(%ebp),%ebx
085e66ee +0x09a:  movswl -0xe(%ebp),%eax
085e66f2 +0x09e:  mov    $0x3,%ecx
085e66f7 +0x0a3:  mov    %ecx,%esi
085e66f9 +0x0a5:  sub    %eax,%esi
085e66fb +0x0a7:  mov    %esi,%eax
085e66fd +0x0a9:  shl    $0x2,%eax
085e6700 +0x0ac:  mov    %ebx,%esi
085e6702 +0x0ae:  mov    %eax,%ecx
085e6704 +0x0b0:  shl    %cl,%esi
085e6706 +0x0b2:  mov    %esi,%eax
085e6708 +0x0b4:  mov    %edx,%ecx
085e670a +0x0b6:  sub    %ax,%cx
085e670d +0x0b9:  mov    %ecx,%eax
085e670f +0x0bb:  mov    %ax,-0xc(%ebp)
085e6713 +0x0bf:  movzwl -0xa(%ebp),%eax
085e6717 +0x0c3:  sub    $0x1,%eax
085e671a +0x0c6:  mov    %ax,-0xa(%ebp)
085e671e +0x0ca:  cmpw   $0x0,-0xa(%ebp)
085e6723 +0x0cf:  jns    085e672b <+0xd7>
085e6725 +0x0d1:  movw   $0x0,-0xa(%ebp)
085e672b +0x0d7:  movswl -0xa(%ebp),%edx
085e672f +0x0db:  movswl -0xe(%ebp),%eax
085e6733 +0x0df:  mov    $0x3,%ecx
085e6738 +0x0e4:  mov    %ecx,%ebx
085e673a +0x0e6:  sub    %eax,%ebx
085e673c +0x0e8:  mov    %ebx,%eax
085e673e +0x0ea:  shl    $0x2,%eax
085e6741 +0x0ed:  mov    %edx,%ebx
085e6743 +0x0ef:  mov    %eax,%ecx
085e6745 +0x0f1:  shl    %cl,%ebx
085e6747 +0x0f3:  mov    %ebx,%eax
085e6749 +0x0f5:  mov    %ax,-0xa(%ebp)
085e674d +0x0f9:  movzwl -0xc(%ebp),%edx
085e6751 +0x0fd:  movzwl -0xa(%ebp),%eax
085e6755 +0x101:  lea    (%edx,%eax,1),%eax
085e6758 +0x104:  mov    %ax,-0xc(%ebp)
085e675c +0x108:  cmpw   $0x3,-0x3c(%ebp)
085e6761 +0x10d:  jle    085e6774 <+0x120>
085e6763 +0x10f:  mov    0x10(%ebp),%edx
085e6766 +0x112:  mov    0x8(%ebp),%eax
085e6769 +0x115:  movzwl -0xc(%ebp),%ecx
085e676d +0x119:  mov    %cx,0xb(%eax,%edx,8)
085e6772 +0x11e:  jmp    085e6783 <+0x12f>
085e6774 +0x120:  mov    0x10(%ebp),%edx
085e6777 +0x123:  mov    0x8(%ebp),%eax
085e677a +0x126:  movzwl -0xc(%ebp),%ecx
085e677e +0x12a:  mov    %cx,0x9(%eax,%edx,8)
085e6783 +0x12f:  movl   $0x1,0x4(%esp)
085e678b +0x137:  lea    -0x1d(%ebp),%eax
085e678e +0x13a:  mov    %eax,(%esp)
085e6791 +0x13d:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085e6796 +0x142:  movb   $0x1,-0x1d(%ebp)
085e679a +0x146:  lea    -0x2c(%ebp),%eax
085e679d +0x149:  mov    %eax,(%esp)
085e67a0 +0x14c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e67a5 +0x151:  mov    0x10(%ebp),%eax
085e67a8 +0x154:  lea    -0x2c(%ebp),%edx
085e67ab +0x157:  mov    %edx,0x10(%esp)
085e67af +0x15b:  lea    -0x1d(%ebp),%edx
085e67b2 +0x15e:  mov    %edx,0xc(%esp)
085e67b6 +0x162:  mov    0xc(%ebp),%edx
085e67b9 +0x165:  mov    %edx,0x8(%esp)
085e67bd +0x169:  mov    %eax,0x4(%esp)
085e67c1 +0x16d:  mov    0x8(%ebp),%eax
085e67c4 +0x170:  mov    %eax,(%esp)
085e67c7 +0x173:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e67cc +0x178:  lea    -0x2c(%ebp),%eax
085e67cf +0x17b:  mov    %eax,(%esp)
085e67d2 +0x17e:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
085e67d7 +0x183:  xor    $0x1,%eax
085e67da +0x186:  test   %al,%al
085e67dc +0x188:  je     085e67f7 <+0x1a3>
085e67de +0x18a:  lea    -0x2c(%ebp),%eax
085e67e1 +0x18d:  mov    %eax,0x8(%esp)
085e67e5 +0x191:  mov    0xc(%ebp),%eax
085e67e8 +0x194:  mov    %eax,0x4(%esp)
085e67ec +0x198:  mov    0x8(%ebp),%eax
085e67ef +0x19b:  mov    %eax,(%esp)
085e67f2 +0x19e:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e67f7 +0x1a3:  mov    0x8(%ebp),%eax
085e67fa +0x1a6:  mov    %eax,(%esp)
085e67fd +0x1a9:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e6802 +0x1ae:  lea    -0x2c(%ebp),%eax
085e6805 +0x1b1:  mov    %eax,(%esp)
085e6808 +0x1b4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e680d +0x1b9:  jmp    085e6831 <+0x1dd>
085e680f +0x1bb:  mov    %edx,%ebx
085e6811 +0x1bd:  mov    %eax,%esi
085e6813 +0x1bf:  lea    -0x2c(%ebp),%eax
085e6816 +0x1c2:  mov    %eax,(%esp)
085e6819 +0x1c5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e681e +0x1ca:  mov    %esi,%eax
085e6820 +0x1cc:  mov    %ebx,%edx
085e6822 +0x1ce:  mov    %eax,(%esp)
085e6825 +0x1d1:  call   08ae3750 <_Unwind_Resume>
085e682a +0x1d6:  nop
085e682b +0x1d7:  jmp    085e6831 <+0x1dd>
085e682d +0x1d9:  nop
085e682e +0x1da:  jmp    085e6831 <+0x1dd>
085e6830 +0x1dc:  nop
085e6831 +0x1dd:  add    $0x60,%esp
085e6834 +0x1e0:  pop    %ebx
085e6835 +0x1e1:  pop    %esi
085e6836 +0x1e2:  pop    %ebp
085e6837 +0x1e3:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_ComboMission_Event @ 0x85e6654

/* CMissionList_Charac::Update_ComboMission_Event(CUser&, int, short) */

void __thiscall
CMissionList_Charac::Update_ComboMission_Event
          (CMissionList_Charac *this,CUser *param_1,int param_2,short param_3)

{
  char cVar1;
  ushort uVar2;
  vector<int,std::allocator<int>> local_30 [15];
  MissionClearCondition_Parameter local_21 [15];
  short local_12;
  short local_10;
  short local_e;
  
  local_12 = param_3;
  if (((-1 < param_3) && (param_3 < 9)) && ((param_2 == 0x1f || (param_2 == 0x20)))) {
    local_10 = *(short *)(this + param_2 * 8 + 9);
    if (3 < param_3) {
      local_12 = param_3 + -4;
      local_10 = *(short *)(this + param_2 * 8 + 0xb);
    }
    cVar1 = (char)local_12;
    uVar2 = (ushort)((int)local_10 >> (('\x03' - cVar1) * '\x04' & 0x1fU)) & 0xf;
    local_e = uVar2 - 1;
    if (local_e < 0) {
      local_e = 0;
    }
    local_e = (short)((int)local_e << (('\x03' - cVar1) * '\x04' & 0x1fU));
    local_10 = (local_10 - (short)((int)(short)uVar2 << (('\x03' - cVar1) * '\x04' & 0x1fU))) +
               local_e;
    if (param_3 < 4) {
      *(short *)(this + param_2 * 8 + 9) = local_10;
    }
    else {
      *(short *)(this + param_2 * 8 + 0xb) = local_10;
    }
    MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_21,1);
    local_21[0] = (MissionClearCondition_Parameter)0x1;
    std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 085e67c7 to 085e67f6 has its CatchHandler @ 085e680f */
    check_mission_kind(this,param_2,param_1,local_21,(vector *)local_30);
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 != '\x01') {
      Send_Cleared_Mission_List(this,param_1,(vector *)local_30);
    }
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::~vector(local_30);
  }
  return;
}
```
