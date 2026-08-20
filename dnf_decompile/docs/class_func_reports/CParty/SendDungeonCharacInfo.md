# SendDungeonCharacInfo

`_ZN6CParty21SendDungeonCharacInfoEP5CUserb`

`CParty::SendDungeonCharacInfo(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b5098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b5098  _ZN6CParty21SendDungeonCharacInfoEP5CUserb
#           CParty::SendDungeonCharacInfo(CUser*, bool)
# range [0x085b5098, 0x085b5157]
085b5098 +0x00:  push   %ebp
085b5099 +0x01:  mov    %esp,%ebp
085b509b +0x03:  sub    $0x28,%esp
085b509e +0x06:  mov    0x10(%ebp),%eax
085b50a1 +0x09:  mov    %al,-0xc(%ebp)
085b50a4 +0x0c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b50ab +0x13:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085b50b0 +0x18:  mov    0x8(%ebp),%edx
085b50b3 +0x1b:  mov    0x185c(%edx),%edx
085b50b9 +0x21:  mov    %eax,%ecx
085b50bb +0x23:  sub    %edx,%ecx
085b50bd +0x25:  mov    %ecx,%edx
085b50bf +0x27:  mov    0xc(%ebp),%eax
085b50c2 +0x2a:  mov    %edx,0x8e034(%eax)
085b50c8 +0x30:  mov    0xc(%ebp),%eax
085b50cb +0x33:  mov    %eax,(%esp)
085b50ce +0x36:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b50d3 +0x3b:  mov    0xc(%ebp),%edx
085b50d6 +0x3e:  mov    %eax,0x8e058(%edx)
085b50dc +0x44:  mov    0xc(%ebp),%eax
085b50df +0x47:  mov    0x8e054(%eax),%eax
085b50e5 +0x4d:  test   %eax,%eax
085b50e7 +0x4f:  je     085b5103 <+0x6b>
085b50e9 +0x51:  movzbl -0xc(%ebp),%eax
085b50ed +0x55:  mov    0xc(%ebp),%edx
085b50f0 +0x58:  mov    %edx,0x8(%esp)
085b50f4 +0x5c:  mov    %eax,0x4(%esp)
085b50f8 +0x60:  mov    0x8(%ebp),%eax
085b50fb +0x63:  mov    %eax,(%esp)
085b50fe +0x66:  call   085b5158 <_ZN6CParty25SendDungeonStatisticPartyEbP5CUser>  ; CParty::SendDungeonStatisticParty(bool, CUser*)
085b5103 +0x6b:  mov    0xc(%ebp),%eax
085b5106 +0x6e:  mov    0x8e054(%eax),%eax
085b510c +0x74:  test   %eax,%eax
085b510e +0x76:  je     085b512a <+0x92>
085b5110 +0x78:  movzbl -0xc(%ebp),%eax
085b5114 +0x7c:  mov    0xc(%ebp),%edx
085b5117 +0x7f:  mov    %edx,0x8(%esp)
085b511b +0x83:  mov    %eax,0x4(%esp)
085b511f +0x87:  mov    0x8(%ebp),%eax
085b5122 +0x8a:  mov    %eax,(%esp)
085b5125 +0x8d:  call   085b52a6 <_ZN6CParty28SendDungeonStatisticPartyJobEbP5CUser>  ; CParty::SendDungeonStatisticPartyJob(bool, CUser*)
085b512a +0x92:  mov    0xc(%ebp),%eax
085b512d +0x95:  mov    0x8e054(%eax),%eax
085b5133 +0x9b:  test   %eax,%eax
085b5135 +0x9d:  je     085b5151 <+0xb9>
085b5137 +0x9f:  movzbl -0xc(%ebp),%eax
085b513b +0xa3:  mov    0xc(%ebp),%edx
085b513e +0xa6:  mov    %edx,0x8(%esp)
085b5142 +0xaa:  mov    %eax,0x4(%esp)
085b5146 +0xae:  mov    0x8(%ebp),%eax
085b5149 +0xb1:  mov    %eax,(%esp)
085b514c +0xb4:  call   085b53aa <_ZN6CParty31SendDungeonStatisticPartyCharacEbP5CUser>  ; CParty::SendDungeonStatisticPartyCharac(bool, CUser*)
085b5151 +0xb9:  mov    $0x1,%eax
085b5156 +0xbe:  leave
085b5157 +0xbf:  ret
```

## 反编译 C

```c
// CParty::SendDungeonCharacInfo @ 0x85b5098

/* CParty::SendDungeonCharacInfo(CUser*, bool) */

undefined4 __thiscall CParty::SendDungeonCharacInfo(CParty *this,CUser *param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(int *)(param_1 + 0x8e034) = iVar1 - *(int *)(this + 0x185c);
  uVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  *(undefined4 *)(param_1 + 0x8e058) = uVar2;
  if (*(int *)(param_1 + 0x8e054) != 0) {
    SendDungeonStatisticParty(this,param_2,param_1);
  }
  if (*(int *)(param_1 + 0x8e054) != 0) {
    SendDungeonStatisticPartyJob(this,param_2,param_1);
  }
  if (*(int *)(param_1 + 0x8e054) != 0) {
    SendDungeonStatisticPartyCharac(this,param_2,param_1);
  }
  return 1;
}
```
