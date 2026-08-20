# _analyzeEquipmentUpgradeHack

`_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt`

`WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(unsigned short const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7e18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7e18  _ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt
#           WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(unsigned short const*)
# range [0x080f7e18, 0x080f7eb5]
080f7e18 +0x00:  push   %ebp
080f7e19 +0x01:  mov    %esp,%ebp
080f7e1b +0x03:  sub    $0x28,%esp
080f7e1e +0x06:  movl   $0x4,0x4(%esp)
080f7e26 +0x0e:  mov    0x8(%ebp),%eax
080f7e29 +0x11:  mov    %eax,(%esp)
080f7e2c +0x14:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f7e31 +0x19:  test   %al,%al
080f7e33 +0x1b:  jne    080f7eb3 <+0x9b>
080f7e35 +0x1d:  mov    0x8(%ebp),%eax
080f7e38 +0x20:  mov    (%eax),%eax
080f7e3a +0x22:  mov    %eax,(%esp)
080f7e3d +0x25:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
080f7e42 +0x2a:  mov    %eax,-0x10(%ebp)
080f7e45 +0x2d:  movl   $0x0,-0xc(%ebp)
080f7e4c +0x34:  jmp    080f7ea6 <+0x8e>
080f7e4e +0x36:  mov    -0xc(%ebp),%eax
080f7e51 +0x39:  imul   $0x3d,%eax,%eax
080f7e54 +0x3c:  add    $0x10,%eax
080f7e57 +0x3f:  add    -0x10(%ebp),%eax
080f7e5a +0x42:  add    $0xc,%eax
080f7e5d +0x45:  mov    %eax,(%esp)
080f7e60 +0x48:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
080f7e65 +0x4d:  movzbl %al,%edx
080f7e68 +0x50:  mov    -0xc(%ebp),%eax
080f7e6b +0x53:  add    %eax,%eax
080f7e6d +0x55:  add    0xc(%ebp),%eax
080f7e70 +0x58:  movzwl (%eax),%eax
080f7e73 +0x5b:  cmp    %ax,%dx
080f7e76 +0x5e:  setne  %al
080f7e79 +0x61:  test   %al,%al
080f7e7b +0x63:  je     080f7ea2 <+0x8a>
080f7e7d +0x65:  movl   $0x0,0xc(%esp)
080f7e85 +0x6d:  movl   $0x3c3,0x8(%esp)
080f7e8d +0x75:  movl   $0x4,0x4(%esp)
080f7e95 +0x7d:  mov    0x8(%ebp),%eax
080f7e98 +0x80:  mov    %eax,(%esp)
080f7e9b +0x83:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7ea0 +0x88:  jmp    080f7eb4 <+0x9c>
080f7ea2 +0x8a:  addl   $0x1,-0xc(%ebp)
080f7ea6 +0x8e:  cmpl   $0x15,-0xc(%ebp)
080f7eaa +0x92:  setle  %al
080f7ead +0x95:  test   %al,%al
080f7eaf +0x97:  jne    080f7e4e <+0x36>
080f7eb1 +0x99:  jmp    080f7eb4 <+0x9c>
080f7eb3 +0x9b:  nop
080f7eb4 +0x9c:  leave
080f7eb5 +0x9d:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack @ 0x80f7e18

/* WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(unsigned short const*) */

void __thiscall
WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(CHackAnalyzer *this,ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int local_10;
  
  cVar1 = checkCollectedHack(this,4);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    for (local_10 = 0; local_10 < 0x16; local_10 = local_10 + 1) {
      uVar2 = Inven_Item::GetUpgrade((Inven_Item *)(local_10 * 0x3d + iVar3 + 0x1c));
      if ((uVar2 & 0xff) != param_1[local_10]) {
        _addHackInfo(this,4,0x3c3,0);
        return;
      }
    }
  }
  return;
}
```
