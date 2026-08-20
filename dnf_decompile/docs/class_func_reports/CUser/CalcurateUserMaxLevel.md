# CalcurateUserMaxLevel

`_ZN5CUser21CalcurateUserMaxLevelEv`

`CUser::CalcurateUserMaxLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ff04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ff04  _ZN5CUser21CalcurateUserMaxLevelEv
#           CUser::CalcurateUserMaxLevel()
# range [0x0868ff04, 0x0868ff9f]
0868ff04 +0x00:  push   %ebp
0868ff05 +0x01:  mov    %esp,%ebp
0868ff07 +0x03:  sub    $0x28,%esp
0868ff0a +0x06:  movl   $0x0,-0x10(%ebp)
0868ff11 +0x0d:  movl   $0x0,-0xc(%ebp)
0868ff18 +0x14:  jmp    0868ff65 <+0x61>
0868ff1a +0x16:  mov    -0xc(%ebp),%eax
0868ff1d +0x19:  mov    0x8(%ebp),%edx
0868ff20 +0x1c:  add    $0x796e8,%edx
0868ff26 +0x22:  mov    %eax,0x4(%esp)
0868ff2a +0x26:  mov    %edx,(%esp)
0868ff2d +0x29:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0868ff32 +0x2e:  movzwl 0x27(%eax),%eax
0868ff36 +0x32:  cwtl
0868ff37 +0x33:  cmp    -0x10(%ebp),%eax
0868ff3a +0x36:  setg   %al
0868ff3d +0x39:  test   %al,%al
0868ff3f +0x3b:  je     0868ff61 <+0x5d>
0868ff41 +0x3d:  mov    -0xc(%ebp),%eax
0868ff44 +0x40:  mov    0x8(%ebp),%edx
0868ff47 +0x43:  add    $0x796e8,%edx
0868ff4d +0x49:  mov    %eax,0x4(%esp)
0868ff51 +0x4d:  mov    %edx,(%esp)
0868ff54 +0x50:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0868ff59 +0x55:  movzwl 0x27(%eax),%eax
0868ff5d +0x59:  cwtl
0868ff5e +0x5a:  mov    %eax,-0x10(%ebp)
0868ff61 +0x5d:  addl   $0x1,-0xc(%ebp)
0868ff65 +0x61:  mov    0x8(%ebp),%eax
0868ff68 +0x64:  add    $0x796e8,%eax
0868ff6d +0x69:  mov    %eax,(%esp)
0868ff70 +0x6c:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0868ff75 +0x71:  cmp    -0xc(%ebp),%eax
0868ff78 +0x74:  setg   %al
0868ff7b +0x77:  test   %al,%al
0868ff7d +0x79:  jne    0868ff1a <+0x16>
0868ff7f +0x7b:  cmpl   $0x46,-0x10(%ebp)
0868ff83 +0x7f:  jle    0868ff8c <+0x88>
0868ff85 +0x81:  movl   $0x46,-0x10(%ebp)
0868ff8c +0x88:  mov    -0x10(%ebp),%eax
0868ff8f +0x8b:  mov    %eax,0x4(%esp)
0868ff93 +0x8f:  mov    0x8(%ebp),%eax
0868ff96 +0x92:  mov    %eax,(%esp)
0868ff99 +0x95:  call   0868fec8 <_ZN5CUser15SetUserMaxLevelEi>  ; CUser::SetUserMaxLevel(int)
0868ff9e +0x9a:  leave
0868ff9f +0x9b:  ret
```

## 反编译 C

```c
// CUser::CalcurateUserMaxLevel @ 0x868ff04

/* CUser::CalcurateUserMaxLevel() */

void __thiscall CUser::CalcurateUserMaxLevel(CUser *this)

{
  int iVar1;
  int local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (iVar1 <= (int)local_10) break;
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_10);
    if (local_14 < *(short *)(iVar1 + 0x27)) {
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_10);
      local_14 = (int)*(short *)(iVar1 + 0x27);
    }
    local_10 = local_10 + 1;
  }
  if (0x46 < local_14) {
    local_14 = 0x46;
  }
  SetUserMaxLevel(this,local_14);
  return;
}
```
