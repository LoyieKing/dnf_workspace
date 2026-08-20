# isGrowCreatureMaxLevel

`_ZN21GiveGrowCreatureEvent22isGrowCreatureMaxLevelER5CUser`

`GiveGrowCreatureEvent::isGrowCreatureMaxLevel(CUser&)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b7156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b7156  _ZN21GiveGrowCreatureEvent22isGrowCreatureMaxLevelER5CUser
#           GiveGrowCreatureEvent::isGrowCreatureMaxLevel(CUser&)
# range [0x081b7156, 0x081b7179]
081b7156 +0x00:  push   %ebp
081b7157 +0x01:  mov    %esp,%ebp
081b7159 +0x03:  sub    $0x18,%esp
081b715c +0x06:  mov    0xc(%ebp),%eax
081b715f +0x09:  mov    %eax,(%esp)
081b7162 +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081b7167 +0x11:  mov    %eax,(%esp)
081b716a +0x14:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
081b716f +0x19:  mov    %eax,(%esp)
081b7172 +0x1c:  call   0833bbb2 <_ZNK13user_creature12CCreatureMgr22isGrowCreatureMaxLevelEv>  ; user_creature::CCreatureMgr::isGrowCreatureMaxLevel() const
081b7177 +0x21:  leave
081b7178 +0x22:  ret
081b7179 +0x23:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::isGrowCreatureMaxLevel @ 0x81b7156

/* GiveGrowCreatureEvent::isGrowCreatureMaxLevel(CUser&) */

void __thiscall
GiveGrowCreatureEvent::isGrowCreatureMaxLevel(GiveGrowCreatureEvent *this,CUser *param_1)

{
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
  user_creature::CCreatureMgr::isGrowCreatureMaxLevel(this_01);
  return;
}
```
