# MovePoint

`_ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE`

`pvp_assault::CExtraMatrix::MovePoint(pvp_assault::Point2d const&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CExtraMatrix` | `0x082e597c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e597c  _ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE
#           pvp_assault::CExtraMatrix::MovePoint(pvp_assault::Point2d const&)
# range [0x082e597c, 0x082e59f0]
082e597c +0x00:  push   %ebp
082e597d +0x01:  mov    %esp,%ebp
082e597f +0x03:  sub    $0x28,%esp
082e5982 +0x06:  mov    0x8(%ebp),%edx
082e5985 +0x09:  lea    -0x14(%ebp),%eax
082e5988 +0x0c:  mov    %edx,0x4(%esp)
082e598c +0x10:  mov    %eax,(%esp)
082e598f +0x13:  call   082f1730 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14b4
082e5994 +0x18:  sub    $0x4,%esp
082e5997 +0x1b:  jmp    082e59c4 <+0x48>
082e5999 +0x1d:  lea    -0x14(%ebp),%eax
082e599c +0x20:  mov    %eax,(%esp)
082e599f +0x23:  call   082f17bc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1540>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1540
082e59a4 +0x28:  mov    %eax,-0xc(%ebp)
082e59a7 +0x2b:  mov    0xc(%ebp),%eax
082e59aa +0x2e:  mov    %eax,0x4(%esp)
082e59ae +0x32:  mov    -0xc(%ebp),%eax
082e59b1 +0x35:  mov    %eax,(%esp)
082e59b4 +0x38:  call   082f04c0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x244>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x244
082e59b9 +0x3d:  lea    -0x14(%ebp),%eax
082e59bc +0x40:  mov    %eax,(%esp)
082e59bf +0x43:  call   082f17a6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x152a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x152a
082e59c4 +0x48:  mov    0x8(%ebp),%edx
082e59c7 +0x4b:  lea    -0x10(%ebp),%eax
082e59ca +0x4e:  mov    %edx,0x4(%esp)
082e59ce +0x52:  mov    %eax,(%esp)
082e59d1 +0x55:  call   082f1754 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14d8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14d8
082e59d6 +0x5a:  sub    $0x4,%esp
082e59d9 +0x5d:  lea    -0x10(%ebp),%eax
082e59dc +0x60:  mov    %eax,0x4(%esp)
082e59e0 +0x64:  lea    -0x14(%ebp),%eax
082e59e3 +0x67:  mov    %eax,(%esp)
082e59e6 +0x6a:  call   082f177a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14fe
082e59eb +0x6f:  test   %al,%al
082e59ed +0x71:  jne    082e5999 <+0x1d>
082e59ef +0x73:  leave
082e59f0 +0x74:  ret
```

## 反编译 C

```c
// pvp_assault::CExtraMatrix::MovePoint @ 0x82e597c

/* pvp_assault::CExtraMatrix::MovePoint(pvp_assault::Point2d const&) */

void __thiscall pvp_assault::CExtraMatrix::MovePoint(CExtraMatrix *this,Point2d *param_1)

{
  bool bVar1;
  __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  Point2d *local_10;
  
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::begin();
  while( true ) {
    std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    local_10 = (Point2d *)
               __gnu_cxx::
               __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
               ::operator*(local_18);
    Point2d::operator+=(local_10,param_1);
    __gnu_cxx::
    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
    ::operator++(local_18);
  }
  return;
}
```
