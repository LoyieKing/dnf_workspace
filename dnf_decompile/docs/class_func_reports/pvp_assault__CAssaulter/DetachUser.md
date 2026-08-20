# DetachUser

`_ZN11pvp_assault10CAssaulter10DetachUserEv`

`pvp_assault::CAssaulter::DetachUser()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6812` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6812  _ZN11pvp_assault10CAssaulter10DetachUserEv
#           pvp_assault::CAssaulter::DetachUser()
# range [0x082e6812, 0x082e6867]
082e6812 +0x00:  push   %ebp
082e6813 +0x01:  mov    %esp,%ebp
082e6815 +0x03:  sub    $0x18,%esp
082e6818 +0x06:  mov    0x8(%ebp),%eax
082e681b +0x09:  mov    (%eax),%eax
082e681d +0x0b:  mov    %eax,(%esp)
082e6820 +0x0e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e6825 +0x13:  test   %eax,%eax
082e6827 +0x15:  setne  %al
082e682a +0x18:  test   %al,%al
082e682c +0x1a:  je     082e6853 <+0x41>
082e682e +0x1c:  mov    0x8(%ebp),%eax
082e6831 +0x1f:  mov    (%eax),%eax
082e6833 +0x21:  mov    %eax,(%esp)
082e6836 +0x24:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082e683b +0x29:  mov    %eax,(%esp)
082e683e +0x2c:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
082e6843 +0x31:  movl   $0x0,0x4(%esp)
082e684b +0x39:  mov    %eax,(%esp)
082e684e +0x3c:  call   0833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>  ; user_creature::CCreatureMgr::TurnStomach(bool)
082e6853 +0x41:  mov    0x8(%ebp),%eax
082e6856 +0x44:  movl   $0x0,(%eax)
082e685c +0x4a:  mov    0x8(%ebp),%eax
082e685f +0x4d:  movl   $0x0,0x4(%eax)
082e6866 +0x54:  leave
082e6867 +0x55:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaulter::DetachUser @ 0x82e6812

/* pvp_assault::CAssaulter::DetachUser() */

void __thiscall pvp_assault::CAssaulter::DetachUser(CAssaulter *this)

{
  int iVar1;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  if (iVar1 != 0) {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
    user_creature::CCreatureMgr::TurnStomach(this_01,false);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
