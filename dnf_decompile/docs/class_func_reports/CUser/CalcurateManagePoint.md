# CalcurateManagePoint

`_ZN5CUser20CalcurateManagePointEv`

`CUser::CalcurateManagePoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ffa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ffa0  _ZN5CUser20CalcurateManagePointEv
#           CUser::CalcurateManagePoint()
# range [0x0868ffa0, 0x08690025]
0868ffa0 +0x00:  push   %ebp
0868ffa1 +0x01:  mov    %esp,%ebp
0868ffa3 +0x03:  push   %ebx
0868ffa4 +0x04:  sub    $0x24,%esp
0868ffa7 +0x07:  movl   $0x0,-0x10(%ebp)
0868ffae +0x0e:  movl   $0x0,-0xc(%ebp)
0868ffb5 +0x15:  jmp    0868fff4 <+0x54>
0868ffb7 +0x17:  mov    -0xc(%ebp),%eax
0868ffba +0x1a:  mov    0x8(%ebp),%edx
0868ffbd +0x1d:  add    $0x796e8,%edx
0868ffc3 +0x23:  mov    %eax,0x4(%esp)
0868ffc7 +0x27:  mov    %edx,(%esp)
0868ffca +0x2a:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0868ffcf +0x2f:  movzwl 0x27(%eax),%eax
0868ffd3 +0x33:  movswl %ax,%ebx
0868ffd6 +0x36:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868ffdb +0x3b:  mov    0x6394(%eax),%eax
0868ffe1 +0x41:  mov    %ebx,0x4(%esp)
0868ffe5 +0x45:  mov    %eax,(%esp)
0868ffe8 +0x48:  call   088e0e0a <_ZN18CharacManageScript8GetPointEi>  ; CharacManageScript::GetPoint(int)
0868ffed +0x4d:  add    %eax,-0x10(%ebp)
0868fff0 +0x50:  addl   $0x1,-0xc(%ebp)
0868fff4 +0x54:  mov    0x8(%ebp),%eax
0868fff7 +0x57:  add    $0x796e8,%eax
0868fffc +0x5c:  mov    %eax,(%esp)
0868ffff +0x5f:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08690004 +0x64:  cmp    -0xc(%ebp),%eax
08690007 +0x67:  setg   %al
0869000a +0x6a:  test   %al,%al
0869000c +0x6c:  jne    0868ffb7 <+0x17>
0869000e +0x6e:  mov    -0x10(%ebp),%eax
08690011 +0x71:  mov    %eax,0x4(%esp)
08690015 +0x75:  mov    0x8(%ebp),%eax
08690018 +0x78:  mov    %eax,(%esp)
0869001b +0x7b:  call   0868fe72 <_ZN5CUser14SetManagePointEi>  ; CUser::SetManagePoint(int)
08690020 +0x80:  add    $0x24,%esp
08690023 +0x83:  pop    %ebx
08690024 +0x84:  pop    %ebp
08690025 +0x85:  ret
```

## 反编译 C

```c
// CUser::CalcurateManagePoint @ 0x868ffa0

/* CUser::CalcurateManagePoint() */

void __thiscall CUser::CalcurateManagePoint(CUser *this)

{
  short sVar1;
  int iVar2;
  int local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (iVar2 <= (int)local_10) break;
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_10);
    sVar1 = *(short *)(iVar2 + 0x27);
    iVar2 = G_CDataManager();
    iVar2 = CharacManageScript::GetPoint(*(CharacManageScript **)(iVar2 + 0x6394),(int)sVar1);
    local_14 = local_14 + iVar2;
    local_10 = local_10 + 1;
  }
  SetManagePoint(this,local_14);
  return;
}
```
