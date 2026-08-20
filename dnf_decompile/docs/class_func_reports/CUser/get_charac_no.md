# get_charac_no

`_ZN5CUser13get_charac_noEi`

`CUser::get_charac_no(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864dfa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864dfa0  _ZN5CUser13get_charac_noEi
#           CUser::get_charac_no(int)
# range [0x0864dfa0, 0x0864e023]
0864dfa0 +0x00:  push   %ebp
0864dfa1 +0x01:  mov    %esp,%ebp
0864dfa3 +0x03:  sub    $0x18,%esp
0864dfa6 +0x06:  cmpl   $0xffffffff,0xc(%ebp)
0864dfaa +0x0a:  jne    0864dfd6 <+0x36>
0864dfac +0x0c:  mov    0x8(%ebp),%eax
0864dfaf +0x0f:  mov    %eax,(%esp)
0864dfb2 +0x12:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864dfb7 +0x17:  test   %eax,%eax
0864dfb9 +0x19:  sete   %al
0864dfbc +0x1c:  test   %al,%al
0864dfbe +0x1e:  je     0864dfc7 <+0x27>
0864dfc0 +0x20:  mov    $0x0,%eax
0864dfc5 +0x25:  jmp    0864e022 <+0x82>
0864dfc7 +0x27:  mov    0x8(%ebp),%eax
0864dfca +0x2a:  mov    %eax,(%esp)
0864dfcd +0x2d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864dfd2 +0x32:  mov    (%eax),%eax
0864dfd4 +0x34:  jmp    0864e022 <+0x82>
0864dfd6 +0x36:  cmpl   $0x0,0xc(%ebp)
0864dfda +0x3a:  js     0864dff1 <+0x51>
0864dfdc +0x3c:  mov    0x8(%ebp),%eax
0864dfdf +0x3f:  add    $0x796e8,%eax
0864dfe4 +0x44:  mov    %eax,(%esp)
0864dfe7 +0x47:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864dfec +0x4c:  cmp    0xc(%ebp),%eax
0864dfef +0x4f:  jg     0864dff8 <+0x58>
0864dff1 +0x51:  mov    $0x1,%eax
0864dff6 +0x56:  jmp    0864dffd <+0x5d>
0864dff8 +0x58:  mov    $0x0,%eax
0864dffd +0x5d:  test   %al,%al
0864dfff +0x5f:  je     0864e008 <+0x68>
0864e001 +0x61:  mov    $0x0,%eax
0864e006 +0x66:  jmp    0864e022 <+0x82>
0864e008 +0x68:  mov    0xc(%ebp),%eax
0864e00b +0x6b:  mov    0x8(%ebp),%edx
0864e00e +0x6e:  add    $0x796e8,%edx
0864e014 +0x74:  mov    %eax,0x4(%esp)
0864e018 +0x78:  mov    %edx,(%esp)
0864e01b +0x7b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864e020 +0x80:  mov    (%eax),%eax
0864e022 +0x82:  leave
0864e023 +0x83:  ret
```

## 反编译 C

```c
// CUser::get_charac_no @ 0x864dfa0

/* CUser::get_charac_no(int) */

undefined4 __thiscall CUser::get_charac_no(CUser *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1 != -1) {
    if ((param_1 < 0) ||
       (iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
       iVar2 <= param_1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined4 *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1);
      uVar4 = *puVar3;
    }
    return uVar4;
  }
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  return *puVar3;
}
```
