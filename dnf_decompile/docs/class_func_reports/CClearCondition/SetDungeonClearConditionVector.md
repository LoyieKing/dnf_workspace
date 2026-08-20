# SetDungeonClearConditionVector

`_ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE`

`CClearCondition::SetDungeonClearConditionVector(std::vector<DungeonClearCondition, std::allocator<DungeonClearCondition> >&)`

| 类 | 地址 |
|---|---|
| `CClearCondition` | `0x082fef12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fef12  _ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE
#           CClearCondition::SetDungeonClearConditionVector(std::vector<DungeonClearCondition, std::allocator<DungeonClearCondition> >&)
# range [0x082fef12, 0x082fefcd]
082fef12 +0x00:  push   %ebp
082fef13 +0x01:  mov    %esp,%ebp
082fef15 +0x03:  sub    $0x28,%esp
082fef18 +0x06:  mov    0x8(%ebp),%eax
082fef1b +0x09:  mov    %eax,(%esp)
082fef1e +0x0c:  call   082a438a <_GLOBAL__I__ZN4CLog5this_E+0x7b1>  ; global constructors keyed to CLog::this_+0x7b1
082fef23 +0x11:  mov    0xc(%ebp),%eax
082fef26 +0x14:  mov    %eax,(%esp)
082fef29 +0x17:  call   0830f7f2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x13d7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x13d7
082fef2e +0x1c:  xor    $0x1,%eax
082fef31 +0x1f:  test   %al,%al
082fef33 +0x21:  je     082fefcb <+0xb9>
082fef39 +0x27:  mov    0x8(%ebp),%eax
082fef3c +0x2a:  mov    0xc(%ebp),%edx
082fef3f +0x2d:  mov    %edx,0x14(%eax)
082fef42 +0x30:  lea    -0x14(%ebp),%eax
082fef45 +0x33:  mov    0xc(%ebp),%edx
082fef48 +0x36:  mov    %edx,0x4(%esp)
082fef4c +0x3a:  mov    %eax,(%esp)
082fef4f +0x3d:  call   0830f836 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x141b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x141b
082fef54 +0x42:  sub    $0x4,%esp
082fef57 +0x45:  lea    -0x18(%ebp),%eax
082fef5a +0x48:  mov    0xc(%ebp),%edx
082fef5d +0x4b:  mov    %edx,0x4(%esp)
082fef61 +0x4f:  mov    %eax,(%esp)
082fef64 +0x52:  call   0830f85a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x143f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x143f
082fef69 +0x57:  sub    $0x4,%esp
082fef6c +0x5a:  jmp    082fefb5 <+0xa3>
082fef6e +0x5c:  lea    -0x14(%ebp),%eax
082fef71 +0x5f:  mov    %eax,(%esp)
082fef74 +0x62:  call   0830f8c2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14a7
082fef79 +0x67:  mov    %eax,-0xc(%ebp)
082fef7c +0x6a:  mov    0x8(%ebp),%eax
082fef7f +0x6d:  mov    (%eax),%edx
082fef81 +0x6f:  mov    -0xc(%ebp),%eax
082fef84 +0x72:  mov    0x8(%eax),%eax
082fef87 +0x75:  add    %eax,%edx
082fef89 +0x77:  mov    0x8(%ebp),%eax
082fef8c +0x7a:  mov    %edx,(%eax)
082fef8e +0x7c:  movl   $0x0,-0x10(%ebp)
082fef95 +0x83:  mov    0x8(%ebp),%eax
082fef98 +0x86:  lea    0x8(%eax),%edx
082fef9b +0x89:  lea    -0x10(%ebp),%eax
082fef9e +0x8c:  mov    %eax,0x4(%esp)
082fefa2 +0x90:  mov    %edx,(%esp)
082fefa5 +0x93:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
082fefaa +0x98:  lea    -0x14(%ebp),%eax
082fefad +0x9b:  mov    %eax,(%esp)
082fefb0 +0x9e:  call   0830f8ac <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1491>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1491
082fefb5 +0xa3:  lea    -0x18(%ebp),%eax
082fefb8 +0xa6:  mov    %eax,0x4(%esp)
082fefbc +0xaa:  lea    -0x14(%ebp),%eax
082fefbf +0xad:  mov    %eax,(%esp)
082fefc2 +0xb0:  call   0830f880 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1465>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1465
082fefc7 +0xb5:  test   %al,%al
082fefc9 +0xb7:  jne    082fef6e <+0x5c>
082fefcb +0xb9:  leave
082fefcc +0xba:  ret
082fefcd +0xbb:  nop
```

## 反编译 C

```c
// CClearCondition::SetDungeonClearConditionVector @ 0x82fef12

/* CClearCondition::SetDungeonClearConditionVector(std::vector<DungeonClearCondition,
   std::allocator<DungeonClearCondition> >&) */

void __thiscall
CClearCondition::SetDungeonClearConditionVector(CClearCondition *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_1c [4];
  __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  Clear(this);
  cVar1 = std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::empty();
  if (cVar1 != '\x01') {
    *(vector **)(this + 0x14) = param_1;
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::begin();
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_18,local_1c);
      if (!bVar2) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
                 ::operator*(local_18);
      *(int *)this = *(int *)this + *(int *)(local_10 + 8);
      local_14 = 0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 8),&local_14);
      __gnu_cxx::
      __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
      ::operator++(local_18);
    }
  }
  return;
}
```
