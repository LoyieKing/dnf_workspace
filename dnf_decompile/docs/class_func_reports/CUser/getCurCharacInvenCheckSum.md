# getCurCharacInvenCheckSum

`_ZNK5CUser25getCurCharacInvenCheckSumEv`

`CUser::getCurCharacInvenCheckSum() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864e0b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e0b6  _ZNK5CUser25getCurCharacInvenCheckSumEv
#           CUser::getCurCharacInvenCheckSum() const
# range [0x0864e0b6, 0x0864e113]
0864e0b6 +0x00:  push   %ebp
0864e0b7 +0x01:  mov    %esp,%ebp
0864e0b9 +0x03:  push   %esi
0864e0ba +0x04:  push   %ebx
0864e0bb +0x05:  sub    $0x10,%esp
0864e0be +0x08:  mov    0x8(%ebp),%eax
0864e0c1 +0x0b:  mov    %eax,(%esp)
0864e0c4 +0x0e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864e0c9 +0x13:  test   %eax,%eax
0864e0cb +0x15:  sete   %al
0864e0ce +0x18:  test   %al,%al
0864e0d0 +0x1a:  je     0864e0d9 <+0x23>
0864e0d2 +0x1c:  mov    $0x0,%eax
0864e0d7 +0x21:  jmp    0864e10d <+0x57>
0864e0d9 +0x23:  mov    0x8(%ebp),%eax
0864e0dc +0x26:  mov    0x796e0(%eax),%eax
0864e0e2 +0x2c:  mov    %eax,%esi
0864e0e4 +0x2e:  mov    0x8(%ebp),%eax
0864e0e7 +0x31:  mov    %eax,(%esp)
0864e0ea +0x34:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0864e0ef +0x39:  mov    0x58(%eax),%ebx
0864e0f2 +0x3c:  mov    0x8(%ebp),%eax
0864e0f5 +0x3f:  mov    %eax,(%esp)
0864e0f8 +0x42:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864e0fd +0x47:  mov    %esi,0x8(%esp)
0864e101 +0x4b:  mov    %ebx,0x4(%esp)
0864e105 +0x4f:  mov    %eax,(%esp)
0864e108 +0x52:  call   0850ae7a <_ZNK10CInventory12makeCheckSumEii>  ; CInventory::makeCheckSum(int, int) const
0864e10d +0x57:  add    $0x10,%esp
0864e110 +0x5a:  pop    %ebx
0864e111 +0x5b:  pop    %esi
0864e112 +0x5c:  pop    %ebp
0864e113 +0x5d:  ret
```

## 反编译 C

```c
// CUser::getCurCharacInvenCheckSum @ 0x864e0b6

/* CUser::getCurCharacInvenCheckSum() const */

undefined4 __thiscall CUser::getCurCharacInvenCheckSum(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *this_00;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x796e0);
    iVar3 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    iVar3 = *(int *)(iVar3 + 0x58);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar2 = CInventory::makeCheckSum(this_00,iVar3,iVar1);
  }
  return uVar2;
}
```
