# calc_disp_help_abuse_ratio

`_ZN15CUserCharacInfo26calc_disp_help_abuse_ratioEi`

`CUserCharacInfo::calc_disp_help_abuse_ratio(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08658a4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658a4e  _ZN15CUserCharacInfo26calc_disp_help_abuse_ratioEi
#           CUserCharacInfo::calc_disp_help_abuse_ratio(int)
# range [0x08658a4e, 0x08658b29]
08658a4e +0x00:  push   %ebp
08658a4f +0x01:  mov    %esp,%ebp
08658a51 +0x03:  sub    $0x58,%esp
08658a54 +0x06:  mov    0x8(%ebp),%eax
08658a57 +0x09:  mov    %eax,(%esp)
08658a5a +0x0c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08658a5f +0x11:  mov    %eax,0x4(%esp)
08658a63 +0x15:  mov    0x8(%ebp),%eax
08658a66 +0x18:  mov    %eax,(%esp)
08658a69 +0x1b:  call   0864e3ba <_ZN15CUserCharacInfo16get_level_up_expEi>  ; CUserCharacInfo::get_level_up_exp(int)
08658a6e +0x20:  mov    %eax,-0x14(%ebp)
08658a71 +0x23:  mov    0x8(%ebp),%eax
08658a74 +0x26:  mov    %eax,(%esp)
08658a77 +0x29:  call   0869656a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2dbf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2dbf
08658a7c +0x2e:  mov    $0x0,%edx
08658a81 +0x33:  mov    %eax,-0x30(%ebp)
08658a84 +0x36:  mov    %edx,-0x2c(%ebp)
08658a87 +0x39:  fildll -0x30(%ebp)
08658a8a +0x3c:  fildl  -0x14(%ebp)
08658a8d +0x3f:  fdivrp %st,%st(1)
08658a8f +0x41:  fstps  -0x10(%ebp)
08658a92 +0x44:  mov    0x8(%ebp),%eax
08658a95 +0x47:  mov    %eax,(%esp)
08658a98 +0x4a:  call   08696548 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d9d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d9d
08658a9d +0x4f:  mov    $0x0,%edx
08658aa2 +0x54:  mov    %eax,-0x30(%ebp)
08658aa5 +0x57:  mov    %edx,-0x2c(%ebp)
08658aa8 +0x5a:  fildll -0x30(%ebp)
08658aab +0x5d:  flds   -0x10(%ebp)
08658aae +0x60:  flds   &data#f047f151(.rodata)
08658ab4 +0x66:  fmulp  %st,%st(1)
08658ab6 +0x68:  faddp  %st,%st(1)
08658ab8 +0x6a:  fnstcw -0x32(%ebp)
08658abb +0x6d:  movzwl -0x32(%ebp),%eax
08658abf +0x71:  mov    $0xc,%ah
08658ac1 +0x73:  mov    %ax,-0x34(%ebp)
08658ac5 +0x77:  fldcw  -0x34(%ebp)
08658ac8 +0x7a:  fistpl -0xc(%ebp)
08658acb +0x7d:  fldcw  -0x32(%ebp)
08658ace +0x80:  movl   $0x0,-0x1c(%ebp)
08658ad5 +0x87:  mov    0x8(%ebp),%eax
08658ad8 +0x8a:  mov    %eax,(%esp)
08658adb +0x8d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08658ae0 +0x92:  add    0xc(%ebp),%eax
08658ae3 +0x95:  test   %eax,%eax
08658ae5 +0x97:  setg   %al
08658ae8 +0x9a:  test   %al,%al
08658aea +0x9c:  je     08658b0d <+0xbf>
08658aec +0x9e:  mov    0x8(%ebp),%eax
08658aef +0xa1:  mov    %eax,(%esp)
08658af2 +0xa4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08658af7 +0xa9:  mov    0xc(%ebp),%edx
08658afa +0xac:  add    %eax,%edx
08658afc +0xae:  mov    %edx,-0x3c(%ebp)
08658aff +0xb1:  mov    -0xc(%ebp),%eax
08658b02 +0xb4:  mov    %eax,%edx
08658b04 +0xb6:  sar    $0x1f,%edx
08658b07 +0xb9:  idivl  -0x3c(%ebp)
08658b0a +0xbc:  mov    %eax,-0x1c(%ebp)
08658b0d +0xbf:  movl   $0xf4240,-0x18(%ebp)
08658b14 +0xc6:  lea    -0x1c(%ebp),%eax
08658b17 +0xc9:  mov    %eax,0x4(%esp)
08658b1b +0xcd:  lea    -0x18(%ebp),%eax
08658b1e +0xd0:  mov    %eax,(%esp)
08658b21 +0xd3:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08658b26 +0xd8:  mov    (%eax),%eax
08658b28 +0xda:  leave
08658b29 +0xdb:  ret
```

## 反编译 C

```c
// CUserCharacInfo::calc_disp_help_abuse_ratio @ 0x8658a4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::calc_disp_help_abuse_ratio(int) */

int __thiscall CUserCharacInfo::calc_disp_help_abuse_ratio(CUserCharacInfo *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_20 [3];
  float local_14;
  int local_10;
  
  iVar1 = get_charac_level(this);
  local_20[2] = get_level_up_exp(this,iVar1);
  uVar2 = getCurCharacDungeonHelpAbuseExp(this);
  local_14 = (float)uVar2 / (float)local_20[2];
  uVar2 = getCurCharacDungeonHelpAbuseRatio(this);
  local_10 = (int)ROUND(_DAT_08cf395c * local_14 + (float)uVar2);
  local_20[0] = 0;
  iVar1 = get_charac_level(this);
  if (0 < iVar1 + param_1) {
    iVar1 = get_charac_level(this);
    local_20[0] = local_10 / (param_1 + iVar1);
  }
  local_20[1] = 1000000;
  piVar3 = std::min<int>(local_20 + 1,local_20);
  return *piVar3;
}
```
