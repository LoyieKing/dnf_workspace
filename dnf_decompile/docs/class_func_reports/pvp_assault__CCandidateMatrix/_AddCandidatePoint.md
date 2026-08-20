# _AddCandidatePoint

`_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i`

`pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CCandidateMatrix` | `0x082e5894` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5894  _ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i
#           pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
# range [0x082e5894, 0x082e590b]
082e5894 +0x00:  push   %ebp
082e5895 +0x01:  mov    %esp,%ebp
082e5897 +0x03:  push   %ebx
082e5898 +0x04:  sub    $0x24,%esp
082e589b +0x07:  lea    -0x14(%ebp),%eax
082e589e +0x0a:  mov    %eax,(%esp)
082e58a1 +0x0d:  call   082f103c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xdc0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xdc0
082e58a6 +0x12:  mov    0xc(%ebp),%eax
082e58a9 +0x15:  mov    0x4(%eax),%edx
082e58ac +0x18:  mov    (%eax),%eax
082e58ae +0x1a:  mov    %eax,-0x10(%ebp)
082e58b1 +0x1d:  mov    %edx,-0xc(%ebp)
082e58b4 +0x20:  mov    0x18(%ebp),%eax
082e58b7 +0x23:  mov    %eax,-0x14(%ebp)
082e58ba +0x26:  mov    -0x14(%ebp),%ebx
082e58bd +0x29:  mov    0x14(%ebp),%eax
082e58c0 +0x2c:  mov    %eax,0x4(%esp)
082e58c4 +0x30:  mov    0xc(%ebp),%eax
082e58c7 +0x33:  mov    %eax,(%esp)
082e58ca +0x36:  call   082f0486 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x20a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x20a
082e58cf +0x3b:  lea    (%ebx,%eax,1),%eax
082e58d2 +0x3e:  mov    %eax,-0x14(%ebp)
082e58d5 +0x41:  mov    -0x14(%ebp),%ebx
082e58d8 +0x44:  mov    0xc(%ebp),%eax
082e58db +0x47:  mov    %eax,0x4(%esp)
082e58df +0x4b:  mov    0x10(%ebp),%eax
082e58e2 +0x4e:  mov    %eax,(%esp)
082e58e5 +0x51:  call   082f0486 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x20a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x20a
082e58ea +0x56:  mov    %ebx,%edx
082e58ec +0x58:  sub    %eax,%edx
082e58ee +0x5a:  mov    %edx,%eax
082e58f0 +0x5c:  mov    %eax,-0x14(%ebp)
082e58f3 +0x5f:  mov    0x8(%ebp),%eax
082e58f6 +0x62:  lea    -0x14(%ebp),%edx
082e58f9 +0x65:  mov    %edx,0x4(%esp)
082e58fd +0x69:  mov    %eax,(%esp)
082e5900 +0x6c:  call   082f160c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1390>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1390
082e5905 +0x71:  add    $0x24,%esp
082e5908 +0x74:  pop    %ebx
082e5909 +0x75:  pop    %ebp
082e590a +0x76:  ret
082e590b +0x77:  nop
```

## 反编译 C

```c
// pvp_assault::CCandidateMatrix::_AddCandidatePoint @ 0x82e5894

/* pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&,
   pvp_assault::Point2d const&, pvp_assault::Point2d const&, int) */

void __thiscall
pvp_assault::CCandidateMatrix::_AddCandidatePoint
          (CCandidateMatrix *this,Point2d *param_1,Point2d *param_2,Point2d *param_3,int param_4)

{
  int iVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  CandidatePoint::CandidatePoint((CandidatePoint *)&local_18);
  local_10 = *(undefined4 *)(param_1 + 4);
  local_14 = *(undefined4 *)param_1;
  local_18 = param_4;
  iVar1 = Point2d::operator-(param_1,param_3);
  local_18 = param_4 + iVar1;
  local_18 = Point2d::operator-(param_2,param_1);
  local_18 = (param_4 + iVar1) - local_18;
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::push_back
            ((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>> *)this
             ,(CandidatePoint *)&local_18);
  return;
}
```
