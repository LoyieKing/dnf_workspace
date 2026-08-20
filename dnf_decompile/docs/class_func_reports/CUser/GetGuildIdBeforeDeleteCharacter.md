# GetGuildIdBeforeDeleteCharacter

`_ZN5CUser31GetGuildIdBeforeDeleteCharacterEi`

`CUser::GetGuildIdBeforeDeleteCharacter(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a956  _ZN5CUser31GetGuildIdBeforeDeleteCharacterEi
#           CUser::GetGuildIdBeforeDeleteCharacter(int)
# range [0x0864a956, 0x0864a97b]
0864a956 +0x00:  push   %ebp
0864a957 +0x01:  mov    %esp,%ebp
0864a959 +0x03:  sub    $0x18,%esp
0864a95c +0x06:  mov    0xc(%ebp),%eax
0864a95f +0x09:  mov    0x8(%ebp),%edx
0864a962 +0x0c:  add    $0x796e8,%edx
0864a968 +0x12:  mov    %eax,0x4(%esp)
0864a96c +0x16:  mov    %edx,(%esp)
0864a96f +0x19:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a974 +0x1e:  mov    0xdbe(%eax),%eax
0864a97a +0x24:  leave
0864a97b +0x25:  ret
```

## 反编译 C

```c
// CUser::GetGuildIdBeforeDeleteCharacter @ 0x864a956

/* CUser::GetGuildIdBeforeDeleteCharacter(int) */

undefined4 __thiscall CUser::GetGuildIdBeforeDeleteCharacter(CUser *this,int param_1)

{
  int iVar1;
  
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1);
  return *(undefined4 *)(iVar1 + 0xdbe);
}
```
