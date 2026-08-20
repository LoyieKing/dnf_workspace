# check_error

`_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseCoin::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081ca7d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca7d6  _ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseCoin::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ca7d6, 0x081ca851]
081ca7d6 +0x00:  push   %ebp
081ca7d7 +0x01:  mov    %esp,%ebp
081ca7d9 +0x03:  sub    $0x18,%esp
081ca7dc +0x06:  mov    0xc(%ebp),%eax
081ca7df +0x09:  mov    %eax,(%esp)
081ca7e2 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ca7e7 +0x11:  cmp    $0x5,%eax
081ca7ea +0x14:  sete   %al
081ca7ed +0x17:  test   %al,%al
081ca7ef +0x19:  je     081ca813 <+0x3d>
081ca7f1 +0x1b:  mov    0x14(%ebp),%eax
081ca7f4 +0x1e:  mov    %eax,0xc(%esp)
081ca7f8 +0x22:  mov    0x10(%ebp),%eax
081ca7fb +0x25:  mov    %eax,0x8(%esp)
081ca7ff +0x29:  mov    0xc(%ebp),%eax
081ca802 +0x2c:  mov    %eax,0x4(%esp)
081ca806 +0x30:  mov    0x8(%ebp),%eax
081ca809 +0x33:  mov    %eax,(%esp)
081ca80c +0x36:  call   081ca63a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_UseCoin::Dungeon_check_error(CUser*, MSG_BASE&, ParamBase&)
081ca811 +0x3b:  jmp    081ca84f <+0x79>
081ca813 +0x3d:  mov    0xc(%ebp),%eax
081ca816 +0x40:  mov    %eax,(%esp)
081ca819 +0x43:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ca81e +0x48:  cmp    $0x8,%eax
081ca821 +0x4b:  sete   %al
081ca824 +0x4e:  test   %al,%al
081ca826 +0x50:  je     081ca84a <+0x74>
081ca828 +0x52:  mov    0x14(%ebp),%eax
081ca82b +0x55:  mov    %eax,0xc(%esp)
081ca82f +0x59:  mov    0x10(%ebp),%eax
081ca832 +0x5c:  mov    %eax,0x8(%esp)
081ca836 +0x60:  mov    0xc(%ebp),%eax
081ca839 +0x63:  mov    %eax,0x4(%esp)
081ca83d +0x67:  mov    0x8(%ebp),%eax
081ca840 +0x6a:  mov    %eax,(%esp)
081ca843 +0x6d:  call   081ca75c <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_UseCoin::WarRoom_check_error(CUser*, MSG_BASE&, ParamBase&)
081ca848 +0x72:  jmp    081ca84f <+0x79>
081ca84a +0x74:  mov    $0x13,%eax
081ca84f +0x79:  leave
081ca850 +0x7a:  ret
081ca851 +0x7b:  nop
```

## 反编译 C

```c
// DisPatcher_UseCoin::check_error @ 0x81ca7d6

/* DisPatcher_UseCoin::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DisPatcher_UseCoin::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = Dungeon_check_error(param_1,param_2,param_3);
  }
  else {
    iVar1 = CUser::get_state((CUser *)param_2);
    if (iVar1 == 8) {
      uVar2 = WarRoom_check_error(param_1,param_2,param_3);
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
```
