# getNextLevel

`_ZN17stQuestShopStatus12getNextLevelEi`

`stQuestShopStatus::getNextLevel(int)`

| 类 | 地址 |
|---|---|
| `stQuestShopStatus` | `0x0890f994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890f994  _ZN17stQuestShopStatus12getNextLevelEi
#           stQuestShopStatus::getNextLevel(int)
# range [0x0890f994, 0x0890fa3c]
0890f994 +0x00:  push   %ebp
0890f995 +0x01:  mov    %esp,%ebp
0890f997 +0x03:  sub    $0x28,%esp
0890f99a +0x06:  movl   $0x0,-0xc(%ebp)
0890f9a1 +0x0d:  mov    0x8(%ebp),%eax
0890f9a4 +0x10:  lea    0x24(%eax),%edx
0890f9a7 +0x13:  lea    -0x18(%ebp),%eax
0890f9aa +0x16:  mov    %edx,0x4(%esp)
0890f9ae +0x1a:  mov    %eax,(%esp)
0890f9b1 +0x1d:  call   0892068a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7369>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7369
0890f9b6 +0x22:  sub    $0x4,%esp
0890f9b9 +0x25:  jmp    0890fa08 <+0x74>
0890f9bb +0x27:  lea    -0x18(%ebp),%eax
0890f9be +0x2a:  mov    %eax,(%esp)
0890f9c1 +0x2d:  call   08920734 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7413>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7413
0890f9c6 +0x32:  movzbl 0x1(%eax),%eax
0890f9ca +0x36:  movzbl %al,%eax
0890f9cd +0x39:  add    %eax,-0xc(%ebp)
0890f9d0 +0x3c:  mov    -0xc(%ebp),%eax
0890f9d3 +0x3f:  cmp    0xc(%ebp),%eax
0890f9d6 +0x42:  jle    0890f9eb <+0x57>
0890f9d8 +0x44:  lea    -0x18(%ebp),%eax
0890f9db +0x47:  mov    %eax,(%esp)
0890f9de +0x4a:  call   08920734 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7413>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7413
0890f9e3 +0x4f:  movzbl (%eax),%eax
0890f9e6 +0x52:  movzbl %al,%eax
0890f9e9 +0x55:  jmp    0890fa3b <+0xa7>
0890f9eb +0x57:  lea    -0x10(%ebp),%eax
0890f9ee +0x5a:  movl   $0x0,0x8(%esp)
0890f9f6 +0x62:  lea    -0x18(%ebp),%edx
0890f9f9 +0x65:  mov    %edx,0x4(%esp)
0890f9fd +0x69:  mov    %eax,(%esp)
0890fa00 +0x6c:  call   08920700 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x73df>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x73df
0890fa05 +0x71:  sub    $0x4,%esp
0890fa08 +0x74:  mov    0x8(%ebp),%eax
0890fa0b +0x77:  lea    0x24(%eax),%edx
0890fa0e +0x7a:  lea    -0x14(%ebp),%eax
0890fa11 +0x7d:  mov    %edx,0x4(%esp)
0890fa15 +0x81:  mov    %eax,(%esp)
0890fa18 +0x84:  call   089206ae <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x738d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x738d
0890fa1d +0x89:  sub    $0x4,%esp
0890fa20 +0x8c:  lea    -0x14(%ebp),%eax
0890fa23 +0x8f:  mov    %eax,0x4(%esp)
0890fa27 +0x93:  lea    -0x18(%ebp),%eax
0890fa2a +0x96:  mov    %eax,(%esp)
0890fa2d +0x99:  call   089206d4 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x73b3>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x73b3
0890fa32 +0x9e:  test   %al,%al
0890fa34 +0xa0:  jne    0890f9bb <+0x27>
0890fa36 +0xa2:  mov    $0xffffffff,%eax
0890fa3b +0xa7:  leave
0890fa3c +0xa8:  ret
```

## 反编译 C

```c
// stQuestShopStatus::getNextLevel @ 0x890f994

/* stQuestShopStatus::getNextLevel(int) */

uint __thiscall stQuestShopStatus::getNextLevel(stQuestShopStatus *this,int param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::begin();
  while( true ) {
    std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0xffffffff;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
            ::operator->(local_1c);
    local_10 = local_10 + (uint)*(byte *)(iVar2 + 1);
    if (param_1 < local_10) break;
    __gnu_cxx::
    __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  pbVar3 = (byte *)__gnu_cxx::
                   __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
                   ::operator->(local_1c);
  return (uint)*pbVar3;
}
```
