# getMaxCount

`_ZN17stQuestShopStatus11getMaxCountEi`

`stQuestShopStatus::getMaxCount(int)`

| 类 | 地址 |
|---|---|
| `stQuestShopStatus` | `0x0890f8ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890f8ec  _ZN17stQuestShopStatus11getMaxCountEi
#           stQuestShopStatus::getMaxCount(int)
# range [0x0890f8ec, 0x0890f993]
0890f8ec +0x00:  push   %ebp
0890f8ed +0x01:  mov    %esp,%ebp
0890f8ef +0x03:  sub    $0x28,%esp
0890f8f2 +0x06:  movl   $0x0,-0xc(%ebp)
0890f8f9 +0x0d:  mov    0x8(%ebp),%eax
0890f8fc +0x10:  lea    0x24(%eax),%edx
0890f8ff +0x13:  lea    -0x18(%ebp),%eax
0890f902 +0x16:  mov    %edx,0x4(%esp)
0890f906 +0x1a:  mov    %eax,(%esp)
0890f909 +0x1d:  call   0892068a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7369>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7369
0890f90e +0x22:  sub    $0x4,%esp
0890f911 +0x25:  jmp    0890f960 <+0x74>
0890f913 +0x27:  lea    -0x18(%ebp),%eax
0890f916 +0x2a:  mov    %eax,(%esp)
0890f919 +0x2d:  call   08920734 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7413>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7413
0890f91e +0x32:  movzbl (%eax),%eax
0890f921 +0x35:  movzbl %al,%eax
0890f924 +0x38:  cmp    0xc(%ebp),%eax
0890f927 +0x3b:  setle  %al
0890f92a +0x3e:  test   %al,%al
0890f92c +0x40:  je     0890f943 <+0x57>
0890f92e +0x42:  lea    -0x18(%ebp),%eax
0890f931 +0x45:  mov    %eax,(%esp)
0890f934 +0x48:  call   08920734 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7413>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7413
0890f939 +0x4d:  movzbl 0x1(%eax),%eax
0890f93d +0x51:  movzbl %al,%eax
0890f940 +0x54:  add    %eax,-0xc(%ebp)
0890f943 +0x57:  lea    -0x10(%ebp),%eax
0890f946 +0x5a:  movl   $0x0,0x8(%esp)
0890f94e +0x62:  lea    -0x18(%ebp),%edx
0890f951 +0x65:  mov    %edx,0x4(%esp)
0890f955 +0x69:  mov    %eax,(%esp)
0890f958 +0x6c:  call   08920700 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x73df>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x73df
0890f95d +0x71:  sub    $0x4,%esp
0890f960 +0x74:  mov    0x8(%ebp),%eax
0890f963 +0x77:  lea    0x24(%eax),%edx
0890f966 +0x7a:  lea    -0x14(%ebp),%eax
0890f969 +0x7d:  mov    %edx,0x4(%esp)
0890f96d +0x81:  mov    %eax,(%esp)
0890f970 +0x84:  call   089206ae <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x738d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x738d
0890f975 +0x89:  sub    $0x4,%esp
0890f978 +0x8c:  lea    -0x14(%ebp),%eax
0890f97b +0x8f:  mov    %eax,0x4(%esp)
0890f97f +0x93:  lea    -0x18(%ebp),%eax
0890f982 +0x96:  mov    %eax,(%esp)
0890f985 +0x99:  call   089206d4 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x73b3>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x73b3
0890f98a +0x9e:  test   %al,%al
0890f98c +0xa0:  jne    0890f913 <+0x27>
0890f98e +0xa2:  mov    -0xc(%ebp),%eax
0890f991 +0xa5:  leave
0890f992 +0xa6:  ret
0890f993 +0xa7:  nop
```

## 反编译 C

```c
// stQuestShopStatus::getMaxCount @ 0x890f8ec

/* stQuestShopStatus::getMaxCount(int) */

int __thiscall stQuestShopStatus::getMaxCount(stQuestShopStatus *this,int param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
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
    if (!bVar1) break;
    pbVar2 = (byte *)__gnu_cxx::
                     __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
                     ::operator->(local_1c);
    if ((int)(uint)*pbVar2 <= param_1) {
      iVar3 = __gnu_cxx::
              __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
              ::operator->(local_1c);
      local_10 = local_10 + (uint)*(byte *)(iVar3 + 1);
    }
    __gnu_cxx::
    __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}
```
