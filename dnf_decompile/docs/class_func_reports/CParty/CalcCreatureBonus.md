# CalcCreatureBonus

`_ZN6CParty17CalcCreatureBonusEP5CUser`

`CParty::CalcCreatureBonus(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ad084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ad084  _ZN6CParty17CalcCreatureBonusEP5CUser
#           CParty::CalcCreatureBonus(CUser*)
# range [0x085ad084, 0x085ad0bd]
085ad084 +0x00:  push   %ebp
085ad085 +0x01:  mov    %esp,%ebp
085ad087 +0x03:  sub    $0x28,%esp
085ad08a +0x06:  mov    0xc(%ebp),%eax
085ad08d +0x09:  mov    %eax,(%esp)
085ad090 +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ad095 +0x11:  mov    %eax,(%esp)
085ad098 +0x14:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085ad09d +0x19:  mov    %eax,(%esp)
085ad0a0 +0x1c:  call   0822d3a8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a52>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a52
085ad0a5 +0x21:  test   %al,%al
085ad0a7 +0x23:  je     085ad0b0 <+0x2c>
085ad0a9 +0x25:  mov    $0x3d4ccccd,%eax
085ad0ae +0x2a:  jmp    085ad0b5 <+0x31>
085ad0b0 +0x2c:  mov    $0x0,%eax
085ad0b5 +0x31:  mov    %eax,-0xc(%ebp)
085ad0b8 +0x34:  flds   -0xc(%ebp)
085ad0bb +0x37:  leave
085ad0bc +0x38:  ret
085ad0bd +0x39:  nop
```

## 反编译 C

```c
// CParty::CalcCreatureBonus @ 0x85ad084

/* CParty::CalcCreatureBonus(CUser*) */

longdouble __thiscall CParty::CalcCreatureBonus(CParty *this,CUser *param_1)

{
  char cVar1;
  CInventory *this_00;
  CCreatureMgr *this_01;
  float fVar2;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
  cVar1 = user_creature::CCreatureMgr::IsEquippedCreature(this_01);
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.05;
  }
  return (longdouble)fVar2;
}
```
