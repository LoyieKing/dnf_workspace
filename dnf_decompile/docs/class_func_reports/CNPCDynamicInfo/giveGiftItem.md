# giveGiftItem

`_ZNK15CNPCDynamicInfo12giveGiftItemEjmjPK5CItemR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST`

`CNPCDynamicInfo::giveGiftItem(unsigned int, unsigned long, unsigned int, CItem const*, ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfo` | `0x085805a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085805a8  _ZNK15CNPCDynamicInfo12giveGiftItemEjmjPK5CItemR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST
#           CNPCDynamicInfo::giveGiftItem(unsigned int, unsigned long, unsigned int, CItem const*, ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const
# range [0x085805a8, 0x08580623]
085805a8 +0x00:  push   %ebp
085805a9 +0x01:  mov    %esp,%ebp
085805ab +0x03:  sub    $0x48,%esp
085805ae +0x06:  mov    0x8(%ebp),%eax
085805b1 +0x09:  mov    (%eax),%eax
085805b3 +0x0b:  mov    0x1c(%ebp),%edx
085805b6 +0x0e:  mov    %edx,0x10(%esp)
085805ba +0x12:  mov    0x14(%ebp),%edx
085805bd +0x15:  mov    %edx,0xc(%esp)
085805c1 +0x19:  mov    0x18(%ebp),%edx
085805c4 +0x1c:  mov    %edx,0x8(%esp)
085805c8 +0x20:  mov    0xc(%ebp),%edx
085805cb +0x23:  mov    %edx,0x4(%esp)
085805cf +0x27:  mov    %eax,(%esp)
085805d2 +0x2a:  call   085809e4 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST>  ; CNPCScript::giveGiftItem(unsigned int, CItem const*, unsigned int, ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const
085805d7 +0x2f:  mov    %ax,-0xa(%ebp)
085805db +0x33:  cmpw   $0x0,-0xa(%ebp)
085805e0 +0x38:  jle    0858061d <+0x75>
085805e2 +0x3a:  filds  -0xa(%ebp)
085805e5 +0x3d:  fstps  -0x20(%ebp)
085805e8 +0x40:  mov    0x8(%ebp),%eax
085805eb +0x43:  mov    %eax,(%esp)
085805ee +0x46:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
085805f3 +0x4b:  mov    0x8(%ebp),%edx
085805f6 +0x4e:  mov    (%edx),%edx
085805f8 +0x50:  mov    %eax,0x4(%esp)
085805fc +0x54:  mov    %edx,(%esp)
085805ff +0x57:  call   085819c6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x158>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x158
08580604 +0x5c:  fmuls  -0x20(%ebp)
08580607 +0x5f:  fnstcw -0x1a(%ebp)
0858060a +0x62:  movzwl -0x1a(%ebp),%eax
0858060e +0x66:  mov    $0xc,%ah
08580610 +0x68:  mov    %ax,-0x1c(%ebp)
08580614 +0x6c:  fldcw  -0x1c(%ebp)
08580617 +0x6f:  fistps -0xa(%ebp)
0858061a +0x72:  fldcw  -0x1a(%ebp)
0858061d +0x75:  movzwl -0xa(%ebp),%eax
08580621 +0x79:  leave
08580622 +0x7a:  ret
08580623 +0x7b:  nop
```

## 反编译 C

```c
// CNPCDynamicInfo::giveGiftItem @ 0x85805a8

/* CNPCDynamicInfo::giveGiftItem(unsigned int, unsigned long, unsigned int, CItem const*,
   ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const */

short __thiscall
CNPCDynamicInfo::giveGiftItem
          (CNPCDynamicInfo *this,uint param_1,ulong param_2,uint param_3,CItem *param_4,
          ENUM_NPC_FAVOR_GIFT_RESULT_CONST *param_5)

{
  undefined4 uVar1;
  longdouble lVar2;
  undefined2 local_e;
  
  local_e = CNPCScript::giveGiftItem(*(CNPCScript **)this,param_1,param_4,param_3,param_5);
  if (0 < local_e) {
    uVar1 = getMood(this);
    lVar2 = (longdouble)CNPCScript::getFavorRatePerMood(*(CNPCScript **)this,uVar1);
    local_e = (short)ROUND(lVar2 * (longdouble)local_e);
  }
  return local_e;
}
```
