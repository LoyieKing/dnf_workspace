# checkEquipmentState

`_ZN10CInventory19checkEquipmentStateEiiRiS0_S0_S0_S0_S0_`

`CInventory::checkEquipmentState(int, int, int&, int&, int&, int&, int&, int&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850ce40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850ce40  _ZN10CInventory19checkEquipmentStateEiiRiS0_S0_S0_S0_S0_
#           CInventory::checkEquipmentState(int, int, int&, int&, int&, int&, int&, int&)
# range [0x0850ce40, 0x0850d055]
0850ce40 +0x000:  push   %ebp
0850ce41 +0x001:  mov    %esp,%ebp
0850ce43 +0x003:  push   %ebx
0850ce44 +0x004:  sub    $0x24,%esp
0850ce47 +0x007:  cmpl   $0x8,0xc(%ebp)
0850ce4b +0x00b:  jg     0850d04c <+0x20c>
0850ce51 +0x011:  cmpl   $0x4,0x10(%ebp)
0850ce55 +0x015:  jg     0850d04f <+0x20f>
0850ce5b +0x01b:  mov    0x8(%ebp),%eax
0850ce5e +0x01e:  mov    0x280(%eax),%eax
0850ce64 +0x024:  test   %eax,%eax
0850ce66 +0x026:  jne    0850ce77 <+0x37>
0850ce68 +0x028:  mov    0x14(%ebp),%eax
0850ce6b +0x02b:  mov    (%eax),%eax
0850ce6d +0x02d:  lea    0x1(%eax),%edx
0850ce70 +0x030:  mov    0x14(%ebp),%eax
0850ce73 +0x033:  mov    %edx,(%eax)
0850ce75 +0x035:  jmp    0850ce93 <+0x53>
0850ce77 +0x037:  mov    0x8(%ebp),%eax
0850ce7a +0x03a:  movzwl 0x289(%eax),%eax
0850ce81 +0x041:  test   %ax,%ax
0850ce84 +0x044:  jne    0850ce93 <+0x53>
0850ce86 +0x046:  mov    0x20(%ebp),%eax
0850ce89 +0x049:  mov    (%eax),%eax
0850ce8b +0x04b:  lea    0x1(%eax),%edx
0850ce8e +0x04e:  mov    0x20(%ebp),%eax
0850ce91 +0x051:  mov    %edx,(%eax)
0850ce93 +0x053:  movl   $0xc,-0x14(%ebp)
0850ce9a +0x05a:  jmp    0850d03b <+0x1fb>
0850ce9f +0x05f:  cmpl   $0x13,-0x14(%ebp)
0850cea3 +0x063:  jle    0850ced1 <+0x91>
0850cea5 +0x065:  mov    -0x14(%ebp),%eax
0850cea8 +0x068:  mov    0x8(%ebp),%edx
0850ceab +0x06b:  imul   $0x3d,%eax,%eax
0850ceae +0x06e:  lea    (%edx,%eax,1),%eax
0850ceb1 +0x071:  add    $0x10,%eax
0850ceb4 +0x074:  mov    0xe(%eax),%eax
0850ceb7 +0x077:  test   %eax,%eax
0850ceb9 +0x079:  je     0850d033 <+0x1f3>
0850cebf +0x07f:  mov    0x24(%ebp),%eax
0850cec2 +0x082:  mov    (%eax),%eax
0850cec4 +0x084:  lea    0x1(%eax),%edx
0850cec7 +0x087:  mov    0x24(%ebp),%eax
0850ceca +0x08a:  mov    %edx,(%eax)
0850cecc +0x08c:  jmp    0850d037 <+0x1f7>
0850ced1 +0x091:  mov    -0x14(%ebp),%eax
0850ced4 +0x094:  mov    0x8(%ebp),%edx
0850ced7 +0x097:  imul   $0x3d,%eax,%eax
0850ceda +0x09a:  lea    (%edx,%eax,1),%eax
0850cedd +0x09d:  add    $0x10,%eax
0850cee0 +0x0a0:  mov    0xe(%eax),%eax
0850cee3 +0x0a3:  test   %eax,%eax
0850cee5 +0x0a5:  jne    0850cef4 <+0xb4>
0850cee7 +0x0a7:  mov    0x14(%ebp),%eax
0850ceea +0x0aa:  mov    (%eax),%eax
0850ceec +0x0ac:  lea    0x1(%eax),%edx
0850ceef +0x0af:  mov    0x14(%ebp),%eax
0850cef2 +0x0b2:  mov    %edx,(%eax)
0850cef4 +0x0b4:  cmpl   $0x10,-0x14(%ebp)
0850cef8 +0x0b8:  jg     0850d036 <+0x1f6>
0850cefe +0x0be:  mov    -0x14(%ebp),%eax
0850cf01 +0x0c1:  mov    0x8(%ebp),%edx
0850cf04 +0x0c4:  imul   $0x3d,%eax,%eax
0850cf07 +0x0c7:  lea    (%edx,%eax,1),%eax
0850cf0a +0x0ca:  add    $0x10,%eax
0850cf0d +0x0cd:  mov    0xe(%eax),%eax
0850cf10 +0x0d0:  mov    %eax,%ebx
0850cf12 +0x0d2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850cf17 +0x0d7:  mov    %ebx,0x4(%esp)
0850cf1b +0x0db:  mov    %eax,(%esp)
0850cf1e +0x0de:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850cf23 +0x0e3:  mov    %eax,-0x10(%ebp)
0850cf26 +0x0e6:  cmpl   $0x0,-0x10(%ebp)
0850cf2a +0x0ea:  je     0850d037 <+0x1f7>
0850cf30 +0x0f0:  mov    -0x14(%ebp),%eax
0850cf33 +0x0f3:  mov    0x8(%ebp),%edx
0850cf36 +0x0f6:  imul   $0x3d,%eax,%eax
0850cf39 +0x0f9:  lea    (%edx,%eax,1),%eax
0850cf3c +0x0fc:  add    $0x10,%eax
0850cf3f +0x0ff:  movzwl 0x17(%eax),%eax
0850cf43 +0x103:  test   %ax,%ax
0850cf46 +0x106:  jne    0850cf55 <+0x115>
0850cf48 +0x108:  mov    0x20(%ebp),%eax
0850cf4b +0x10b:  mov    (%eax),%eax
0850cf4d +0x10d:  lea    0x1(%eax),%edx
0850cf50 +0x110:  mov    0x20(%ebp),%eax
0850cf53 +0x113:  mov    %edx,(%eax)
0850cf55 +0x115:  mov    -0x10(%ebp),%eax
0850cf58 +0x118:  mov    %eax,(%esp)
0850cf5b +0x11b:  call   0833eecc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf99
0850cf60 +0x120:  mov    %eax,-0xc(%ebp)
0850cf63 +0x123:  cmpl   $0x4,0xc(%ebp)
0850cf67 +0x127:  jne    0850cfaf <+0x16f>
0850cf69 +0x129:  cmpl   $0x3,0x10(%ebp)
0850cf6d +0x12d:  jne    0850cfaf <+0x16f>
0850cf6f +0x12f:  cmpl   $0x0,-0xc(%ebp)
0850cf73 +0x133:  je     0850cf81 <+0x141>
0850cf75 +0x135:  cmpl   $0x3,-0xc(%ebp)
0850cf79 +0x139:  je     0850cf81 <+0x141>
0850cf7b +0x13b:  cmpl   $0x4,-0xc(%ebp)
0850cf7f +0x13f:  jne    0850cf94 <+0x154>
0850cf81 +0x141:  mov    0x28(%ebp),%eax
0850cf84 +0x144:  mov    (%eax),%eax
0850cf86 +0x146:  lea    0x1(%eax),%edx
0850cf89 +0x149:  mov    0x28(%ebp),%eax
0850cf8c +0x14c:  mov    %edx,(%eax)
0850cf8e +0x14e:  nop
0850cf8f +0x14f:  jmp    0850d037 <+0x1f7>
0850cf94 +0x154:  mov    0x18(%ebp),%eax
0850cf97 +0x157:  mov    (%eax),%eax
0850cf99 +0x159:  lea    0x2(%eax),%edx
0850cf9c +0x15c:  mov    0x18(%ebp),%eax
0850cf9f +0x15f:  mov    %edx,(%eax)
0850cfa1 +0x161:  mov    0x1c(%ebp),%eax
0850cfa4 +0x164:  movl   $0x2,(%eax)
0850cfaa +0x16a:  jmp    0850d037 <+0x1f7>
0850cfaf +0x16f:  mov    0xc(%ebp),%edx
0850cfb2 +0x172:  mov    0x10(%ebp),%ecx
0850cfb5 +0x175:  mov    %edx,%eax
0850cfb7 +0x177:  shl    $0x2,%eax
0850cfba +0x17a:  add    %edx,%eax
0850cfbc +0x17c:  add    %ecx,%eax
0850cfbe +0x17e:  mov    &_ZL21_S_CHARAC_JOB_MASTARY(,%eax,4),%eax
0850cfc5 +0x185:  cmp    -0xc(%ebp),%eax
0850cfc8 +0x188:  jne    0850cfd9 <+0x199>
0850cfca +0x18a:  mov    0x28(%ebp),%eax
0850cfcd +0x18d:  mov    (%eax),%eax
0850cfcf +0x18f:  lea    0x1(%eax),%edx
0850cfd2 +0x192:  mov    0x28(%ebp),%eax
0850cfd5 +0x195:  mov    %edx,(%eax)
0850cfd7 +0x197:  jmp    0850d037 <+0x1f7>
0850cfd9 +0x199:  mov    0xc(%ebp),%edx
0850cfdc +0x19c:  mov    %edx,%eax
0850cfde +0x19e:  shl    $0x2,%eax
0850cfe1 +0x1a1:  add    %edx,%eax
0850cfe3 +0x1a3:  shl    $0x2,%eax
0850cfe6 +0x1a6:  mov    &_ZL21_S_CHARAC_JOB_MASTARY(%eax),%eax
0850cfec +0x1ac:  cmp    -0xc(%ebp),%eax
0850cfef +0x1af:  jne    0850d01b <+0x1db>
0850cff1 +0x1b1:  mov    0x18(%ebp),%eax
0850cff4 +0x1b4:  mov    (%eax),%eax
0850cff6 +0x1b6:  lea    0x1(%eax),%edx
0850cff9 +0x1b9:  mov    0x18(%ebp),%eax
0850cffc +0x1bc:  mov    %edx,(%eax)
0850cffe +0x1be:  mov    0x1c(%ebp),%eax
0850d001 +0x1c1:  mov    (%eax),%eax
0850d003 +0x1c3:  cmp    $0x2,%eax
0850d006 +0x1c6:  jne    0850d00f <+0x1cf>
0850d008 +0x1c8:  mov    $0x2,%eax
0850d00d +0x1cd:  jmp    0850d014 <+0x1d4>
0850d00f +0x1cf:  mov    $0x1,%eax
0850d014 +0x1d4:  mov    0x1c(%ebp),%edx
0850d017 +0x1d7:  mov    %eax,(%edx)
0850d019 +0x1d9:  jmp    0850d037 <+0x1f7>
0850d01b +0x1db:  mov    0x18(%ebp),%eax
0850d01e +0x1de:  mov    (%eax),%eax
0850d020 +0x1e0:  lea    0x2(%eax),%edx
0850d023 +0x1e3:  mov    0x18(%ebp),%eax
0850d026 +0x1e6:  mov    %edx,(%eax)
0850d028 +0x1e8:  mov    0x1c(%ebp),%eax
0850d02b +0x1eb:  movl   $0x2,(%eax)
0850d031 +0x1f1:  jmp    0850d037 <+0x1f7>
0850d033 +0x1f3:  nop
0850d034 +0x1f4:  jmp    0850d037 <+0x1f7>
0850d036 +0x1f6:  nop
0850d037 +0x1f7:  addl   $0x1,-0x14(%ebp)
0850d03b +0x1fb:  cmpl   $0x15,-0x14(%ebp)
0850d03f +0x1ff:  setle  %al
0850d042 +0x202:  test   %al,%al
0850d044 +0x204:  jne    0850ce9f <+0x5f>
0850d04a +0x20a:  jmp    0850d050 <+0x210>
0850d04c +0x20c:  nop
0850d04d +0x20d:  jmp    0850d050 <+0x210>
0850d04f +0x20f:  nop
0850d050 +0x210:  add    $0x24,%esp
0850d053 +0x213:  pop    %ebx
0850d054 +0x214:  pop    %ebp
0850d055 +0x215:  ret
```

## 反编译 C

```c
// CInventory::checkEquipmentState @ 0x850ce40

/* CInventory::checkEquipmentState(int, int, int&, int&, int&, int&, int&, int&) */

void __thiscall
CInventory::checkEquipmentState
          (CInventory *this,int param_1,int param_2,int *param_3,int *param_4,int *param_5,
          int *param_6,int *param_7,int *param_8)

{
  CDataManager *this_00;
  CEquipItem *this_01;
  int iVar1;
  int local_18;
  
  if ((param_1 < 9) && (param_2 < 5)) {
    if (*(int *)(this + 0x280) == 0) {
      *param_3 = *param_3 + 1;
    }
    else if (*(short *)(this + 0x289) == 0) {
      *param_6 = *param_6 + 1;
    }
    for (local_18 = 0xc; local_18 < 0x16; local_18 = local_18 + 1) {
      if (local_18 < 0x14) {
        if (*(int *)(this + local_18 * 0x3d + 0x1e) == 0) {
          *param_3 = *param_3 + 1;
        }
        if (local_18 < 0x11) {
          iVar1 = *(int *)(this + local_18 * 0x3d + 0x1e);
          this_00 = (CDataManager *)G_CDataManager();
          this_01 = (CEquipItem *)CDataManager::find_item(this_00,iVar1);
          if (this_01 != (CEquipItem *)0x0) {
            if (*(short *)(this + local_18 * 0x3d + 0x27) == 0) {
              *param_6 = *param_6 + 1;
            }
            iVar1 = CEquipItem::get_sub_type(this_01);
            if ((param_1 == 4) && (param_2 == 3)) {
              if (((iVar1 == 0) || (iVar1 == 3)) || (iVar1 == 4)) {
                *param_8 = *param_8 + 1;
              }
              else {
                *param_4 = *param_4 + 2;
                *param_5 = 2;
              }
            }
            else if (*(int *)(::_S_CHARAC_JOB_MASTARY + (param_1 * 5 + param_2) * 4) == iVar1) {
              *param_8 = *param_8 + 1;
            }
            else if (*(int *)(::_S_CHARAC_JOB_MASTARY + param_1 * 0x14) == iVar1) {
              *param_4 = *param_4 + 1;
              if (*param_5 == 2) {
                iVar1 = 2;
              }
              else {
                iVar1 = 1;
              }
              *param_5 = iVar1;
            }
            else {
              *param_4 = *param_4 + 2;
              *param_5 = 2;
            }
          }
        }
      }
      else if (*(int *)(this + local_18 * 0x3d + 0x1e) != 0) {
        *param_7 = *param_7 + 1;
      }
    }
  }
  return;
}
```
