# getGenuineUpgradeDamage

`_ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib`

`GenuineDamageUpgradeTable::getGenuineUpgradeDamage(ENUM_RARITY, int, int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `GenuineDamageUpgradeTable` | `0x08912a54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08912a54  _ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib
#           GenuineDamageUpgradeTable::getGenuineUpgradeDamage(ENUM_RARITY, int, int, int, int, bool)
# range [0x08912a54, 0x08912b87]
08912a54 +0x000:  push   %ebp
08912a55 +0x001:  mov    %esp,%ebp
08912a57 +0x003:  push   %ebx
08912a58 +0x004:  sub    $0x34,%esp
08912a5b +0x007:  mov    0x20(%ebp),%eax
08912a5e +0x00a:  mov    %al,-0x1c(%ebp)
08912a61 +0x00d:  mov    $0x0,%eax
08912a66 +0x012:  mov    %eax,-0x10(%ebp)
08912a69 +0x015:  flds   &_ZZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiibE9pointFive
08912a6f +0x01b:  flds   &_ZZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiibE3two
08912a75 +0x021:  fmulp  %st,%st(1)
08912a77 +0x023:  fstps  -0xc(%ebp)
08912a7a +0x026:  mov    0x18(%ebp),%eax
08912a7d +0x029:  test   %eax,%eax
08912a7f +0x02b:  jne    08912a8b <+0x37>
08912a81 +0x02d:  mov    $0x0,%eax
08912a86 +0x032:  jmp    08912b82 <+0x12e>
08912a8b +0x037:  cmpb   $0x0,-0x1c(%ebp)
08912a8f +0x03b:  je     08912af6 <+0xa2>
08912a91 +0x03d:  mov    0x8(%ebp),%eax
08912a94 +0x040:  lea    0x158(%eax),%edx
08912a9a +0x046:  lea    0x18(%ebp),%eax
08912a9d +0x049:  mov    %eax,0x4(%esp)
08912aa1 +0x04d:  mov    %edx,(%esp)
08912aa4 +0x050:  call   089213bc <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x809b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x809b
08912aa9 +0x055:  mov    0x4(%eax),%eax
08912aac +0x058:  mov    %eax,-0x24(%ebp)
08912aaf +0x05b:  fildl  -0x24(%ebp)
08912ab2 +0x05e:  fildl  0x1c(%ebp)
08912ab5 +0x061:  mov    0x8(%ebp),%eax
08912ab8 +0x064:  mov    (%eax),%eax
08912aba +0x066:  mov    %eax,-0x24(%ebp)
08912abd +0x069:  fildl  -0x24(%ebp)
08912ac0 +0x06c:  fdivrp %st,%st(1)
08912ac2 +0x06e:  fadds  -0xc(%ebp)
08912ac5 +0x071:  fmulp  %st,%st(1)
08912ac7 +0x073:  mov    0x10(%ebp),%edx
08912aca +0x076:  mov    0x14(%ebp),%ebx
08912acd +0x079:  mov    0x8(%ebp),%ecx
08912ad0 +0x07c:  mov    %edx,%eax
08912ad2 +0x07e:  add    %eax,%eax
08912ad4 +0x080:  add    %edx,%eax
08912ad6 +0x082:  add    %eax,%eax
08912ad8 +0x084:  add    %ebx,%eax
08912ada +0x086:  add    $0xc,%eax
08912add +0x089:  flds   0x8(%ecx,%eax,4)
08912ae1 +0x08d:  fmulp  %st,%st(1)
08912ae3 +0x08f:  mov    0xc(%ebp),%edx
08912ae6 +0x092:  mov    0x8(%ebp),%eax
08912ae9 +0x095:  add    $0x8,%edx
08912aec +0x098:  flds   (%eax,%edx,4)
08912aef +0x09b:  fmulp  %st,%st(1)
08912af1 +0x09d:  fstps  -0x10(%ebp)
08912af4 +0x0a0:  jmp    08912b58 <+0x104>
08912af6 +0x0a2:  mov    0x8(%ebp),%eax
08912af9 +0x0a5:  lea    0x158(%eax),%edx
08912aff +0x0ab:  lea    0x18(%ebp),%eax
08912b02 +0x0ae:  mov    %eax,0x4(%esp)
08912b06 +0x0b2:  mov    %edx,(%esp)
08912b09 +0x0b5:  call   089213bc <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x809b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x809b
08912b0e +0x0ba:  mov    (%eax),%eax
08912b10 +0x0bc:  mov    %eax,-0x24(%ebp)
08912b13 +0x0bf:  fildl  -0x24(%ebp)
08912b16 +0x0c2:  fildl  0x1c(%ebp)
08912b19 +0x0c5:  mov    0x8(%ebp),%eax
08912b1c +0x0c8:  mov    (%eax),%eax
08912b1e +0x0ca:  mov    %eax,-0x24(%ebp)
08912b21 +0x0cd:  fildl  -0x24(%ebp)
08912b24 +0x0d0:  fdivrp %st,%st(1)
08912b26 +0x0d2:  fadds  -0xc(%ebp)
08912b29 +0x0d5:  fmulp  %st,%st(1)
08912b2b +0x0d7:  mov    0x10(%ebp),%edx
08912b2e +0x0da:  mov    0x14(%ebp),%ebx
08912b31 +0x0dd:  mov    0x8(%ebp),%ecx
08912b34 +0x0e0:  mov    %edx,%eax
08912b36 +0x0e2:  add    %eax,%eax
08912b38 +0x0e4:  add    %edx,%eax
08912b3a +0x0e6:  add    %eax,%eax
08912b3c +0x0e8:  add    %ebx,%eax
08912b3e +0x0ea:  add    $0xc,%eax
08912b41 +0x0ed:  flds   0x8(%ecx,%eax,4)
08912b45 +0x0f1:  fmulp  %st,%st(1)
08912b47 +0x0f3:  mov    0xc(%ebp),%edx
08912b4a +0x0f6:  mov    0x8(%ebp),%eax
08912b4d +0x0f9:  add    $0x8,%edx
08912b50 +0x0fc:  flds   (%eax,%edx,4)
08912b53 +0x0ff:  fmulp  %st,%st(1)
08912b55 +0x101:  fstps  -0x10(%ebp)
08912b58 +0x104:  flds   -0x10(%ebp)
08912b5b +0x107:  flds   &data#1c22afcb(.rodata)
08912b61 +0x10d:  faddp  %st,%st(1)
08912b63 +0x10f:  fstps  -0x10(%ebp)
08912b66 +0x112:  flds   -0x10(%ebp)
08912b69 +0x115:  fnstcw -0x1e(%ebp)
08912b6c +0x118:  movzwl -0x1e(%ebp),%eax
08912b70 +0x11c:  mov    $0xc,%ah
08912b72 +0x11e:  mov    %ax,-0x20(%ebp)
08912b76 +0x122:  fldcw  -0x20(%ebp)
08912b79 +0x125:  fistpl -0x24(%ebp)
08912b7c +0x128:  fldcw  -0x1e(%ebp)
08912b7f +0x12b:  mov    -0x24(%ebp),%eax
08912b82 +0x12e:  add    $0x34,%esp
08912b85 +0x131:  pop    %ebx
08912b86 +0x132:  pop    %ebp
08912b87 +0x133:  ret
```

## 反编译 C

```c
// GenuineDamageUpgradeTable::getGenuineUpgradeDamage @ 0x8912a54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenuineDamageUpgradeTable::getGenuineUpgradeDamage(ENUM_RARITY, int, int, int, int, bool) */

int __thiscall
GenuineDamageUpgradeTable::getGenuineUpgradeDamage
          (GenuineDamageUpgradeTable *this,int param_2,int param_3,int param_4,int param_5,
          int param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float local_14;
  
  fVar1 = getGenuineUpgradeDamage(ENUM_RARITY,int,int,int,int,bool)::two *
          getGenuineUpgradeDamage(ENUM_RARITY,int,int,int,int,bool)::pointFive;
  if (param_5 == 0) {
    iVar2 = 0;
  }
  else {
    if ((char)param_7 == '\0') {
      piVar3 = (int *)std::
                      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                      ::operator[]((map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                                    *)(this + 0x158),&param_5);
      local_14 = *(float *)(this + (param_2 + 8) * 4) *
                 *(float *)(this + (param_3 * 6 + param_4) * 4 + 0x38) *
                 ((float)param_6 / (float)*(int *)this + fVar1) * (float)*piVar3;
    }
    else {
      iVar2 = std::
              map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
              ::operator[]((map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                            *)(this + 0x158),&param_5);
      local_14 = *(float *)(this + (param_2 + 8) * 4) *
                 *(float *)(this + (param_3 * 6 + param_4) * 4 + 0x38) *
                 ((float)param_6 / (float)*(int *)this + fVar1) * (float)*(int *)(iVar2 + 4);
    }
    iVar2 = (int)ROUND(_DAT_08e122e8 + local_14);
  }
  return iVar2;
}
```
