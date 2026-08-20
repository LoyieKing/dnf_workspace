# set_state

`_ZN5CUser9set_stateE8ch_state`

`CUser::set_state(ch_state)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867edb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867edb2  _ZN5CUser9set_stateE8ch_state
#           CUser::set_state(ch_state)
# range [0x0867edb2, 0x0867ee27]
0867edb2 +0x00:  push   %ebp
0867edb3 +0x01:  mov    %esp,%ebp
0867edb5 +0x03:  push   %ebx
0867edb6 +0x04:  sub    $0x14,%esp
0867edb9 +0x07:  mov    0x8(%ebp),%eax
0867edbc +0x0a:  mov    0xc(%ebp),%edx
0867edbf +0x0d:  mov    %edx,0x8cfc4(%eax)
0867edc5 +0x13:  mov    0x8(%ebp),%eax
0867edc8 +0x16:  mov    0x8cfc4(%eax),%eax
0867edce +0x1c:  cmp    $0x5,%eax
0867edd1 +0x1f:  jne    0867edde <+0x2c>
0867edd3 +0x21:  mov    0x8(%ebp),%eax
0867edd6 +0x24:  mov    %eax,(%esp)
0867edd9 +0x27:  call   08697526 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3d7b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3d7b
0867edde +0x2c:  mov    0x8(%ebp),%eax
0867ede1 +0x2f:  mov    %eax,(%esp)
0867ede4 +0x32:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867ede9 +0x37:  test   %eax,%eax
0867edeb +0x39:  sete   %al
0867edee +0x3c:  test   %al,%al
0867edf0 +0x3e:  jne    0867ee21 <+0x6f>
0867edf2 +0x40:  mov    0x8(%ebp),%eax
0867edf5 +0x43:  mov    %eax,(%esp)
0867edf8 +0x46:  call   0867ed68 <_ZN5CUser11is_fightingEv>  ; CUser::is_fighting()
0867edfd +0x4b:  movzbl %al,%ebx
0867ee00 +0x4e:  mov    0x8(%ebp),%eax
0867ee03 +0x51:  mov    %eax,(%esp)
0867ee06 +0x54:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867ee0b +0x59:  mov    %eax,(%esp)
0867ee0e +0x5c:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0867ee13 +0x61:  mov    %ebx,0x4(%esp)
0867ee17 +0x65:  mov    %eax,(%esp)
0867ee1a +0x68:  call   0833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>  ; user_creature::CCreatureMgr::TurnStomach(bool)
0867ee1f +0x6d:  jmp    0867ee22 <+0x70>
0867ee21 +0x6f:  nop
0867ee22 +0x70:  add    $0x14,%esp
0867ee25 +0x73:  pop    %ebx
0867ee26 +0x74:  pop    %ebp
0867ee27 +0x75:  ret
```

## 反编译 C

```c
// CUser::set_state @ 0x867edb2

/* CUser::set_state(ch_state) */

void __thiscall CUser::set_state(CUser *this,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  *(undefined4 *)(this + 0x8cfc4) = param_2;
  if (*(int *)(this + 0x8cfc4) == 5) {
    ClearItemSellCount(this);
  }
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    bVar1 = (bool)is_fighting(this);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
    user_creature::CCreatureMgr::TurnStomach(this_01,bVar1);
  }
  return;
}
```
