# AddRoom

`_ZN20CLeagueMatchRoomList7AddRoomEP6IMatch`

`CLeagueMatchRoomList::AddRoom(IMatch*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatchRoomList` | `0x08567e9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567e9e  _ZN20CLeagueMatchRoomList7AddRoomEP6IMatch
#           CLeagueMatchRoomList::AddRoom(IMatch*)
# range [0x08567e9e, 0x08567f71]
08567e9e +0x00:  push   %ebp
08567e9f +0x01:  mov    %esp,%ebp
08567ea1 +0x03:  sub    $0x58,%esp
08567ea4 +0x06:  movl   $0x1,-0x20(%ebp)
08567eab +0x0d:  lea    -0x28(%ebp),%eax
08567eae +0x10:  lea    -0x20(%ebp),%edx
08567eb1 +0x13:  mov    %edx,0x8(%esp)
08567eb5 +0x17:  lea    0xc(%ebp),%edx
08567eb8 +0x1a:  mov    %edx,0x4(%esp)
08567ebc +0x1e:  mov    %eax,(%esp)
08567ebf +0x21:  call   08569c76 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1640>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1640
08567ec4 +0x26:  sub    $0x4,%esp
08567ec7 +0x29:  lea    -0x28(%ebp),%eax
08567eca +0x2c:  mov    %eax,0x4(%esp)
08567ece +0x30:  lea    -0x30(%ebp),%eax
08567ed1 +0x33:  mov    %eax,(%esp)
08567ed4 +0x36:  call   08569cb8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1682>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1682
08567ed9 +0x3b:  mov    0x8(%ebp),%eax
08567edc +0x3e:  lea    0x4(%eax),%ecx
08567edf +0x41:  lea    -0x38(%ebp),%eax
08567ee2 +0x44:  lea    -0x30(%ebp),%edx
08567ee5 +0x47:  mov    %edx,0x8(%esp)
08567ee9 +0x4b:  mov    %ecx,0x4(%esp)
08567eed +0x4f:  mov    %eax,(%esp)
08567ef0 +0x52:  call   08569ce8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x16b2>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x16b2
08567ef5 +0x57:  sub    $0x4,%esp
08567ef8 +0x5a:  movl   $0x1,-0xc(%ebp)
08567eff +0x61:  lea    -0x14(%ebp),%eax
08567f02 +0x64:  lea    -0xc(%ebp),%edx
08567f05 +0x67:  mov    %edx,0x8(%esp)
08567f09 +0x6b:  lea    0xc(%ebp),%edx
08567f0c +0x6e:  mov    %edx,0x4(%esp)
08567f10 +0x72:  mov    %eax,(%esp)
08567f13 +0x75:  call   08569c76 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1640>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1640
08567f18 +0x7a:  sub    $0x4,%esp
08567f1b +0x7d:  lea    -0x14(%ebp),%eax
08567f1e +0x80:  mov    %eax,0x4(%esp)
08567f22 +0x84:  lea    -0x1c(%ebp),%eax
08567f25 +0x87:  mov    %eax,(%esp)
08567f28 +0x8a:  call   08569cb8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1682>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1682
08567f2d +0x8f:  mov    0x8(%ebp),%eax
08567f30 +0x92:  lea    0x4(%eax),%ecx
08567f33 +0x95:  lea    -0x40(%ebp),%eax
08567f36 +0x98:  lea    -0x1c(%ebp),%edx
08567f39 +0x9b:  mov    %edx,0x8(%esp)
08567f3d +0x9f:  mov    %ecx,0x4(%esp)
08567f41 +0xa3:  mov    %eax,(%esp)
08567f44 +0xa6:  call   08569ce8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x16b2>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x16b2
08567f49 +0xab:  sub    $0x4,%esp
08567f4c +0xae:  movzbl -0x3c(%ebp),%eax
08567f50 +0xb2:  xor    $0x1,%eax
08567f53 +0xb5:  test   %al,%al
08567f55 +0xb7:  je     08567f6b <+0xcd>
08567f57 +0xb9:  lea    -0x40(%ebp),%eax
08567f5a +0xbc:  mov    %eax,(%esp)
08567f5d +0xbf:  call   08569c4e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1618>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1618
08567f62 +0xc4:  mov    0x4(%eax),%edx
08567f65 +0xc7:  add    $0x1,%edx
08567f68 +0xca:  mov    %edx,0x4(%eax)
08567f6b +0xcd:  mov    $0x1,%eax
08567f70 +0xd2:  leave
08567f71 +0xd3:  ret
```

## 反编译 C

```c
// CLeagueMatchRoomList::AddRoom @ 0x8567e9e

/* CLeagueMatchRoomList::AddRoom(IMatch*) */

undefined4 CLeagueMatchRoomList::AddRoom(IMatch *param_1)

{
  int iVar1;
  _Rb_tree_iterator<std::pair<IMatch*const,int>> local_44 [4];
  char local_40;
  pair local_3c [8];
  pair<IMatch*const,int> local_34 [8];
  IMatch *local_2c [2];
  undefined4 local_24;
  pair<IMatch*const,int> local_20 [8];
  IMatch *local_18 [2];
  undefined4 local_10;
  
  local_24 = 1;
  std::make_pair<IMatch*&,int>(local_2c,(int *)&stack0x00000008);
  std::pair<IMatch*const,int>::pair<IMatch*,int>(local_34,(pair *)local_2c);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::insert
            (local_3c);
  local_10 = 1;
  std::make_pair<IMatch*&,int>(local_18,(int *)&stack0x00000008);
  std::pair<IMatch*const,int>::pair<IMatch*,int>(local_20,(pair *)local_18);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::insert
            (local_44);
  if (local_40 != '\x01') {
    iVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->(local_44);
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return 1;
}
```
