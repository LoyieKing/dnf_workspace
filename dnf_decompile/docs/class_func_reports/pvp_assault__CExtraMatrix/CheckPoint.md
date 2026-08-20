# CheckPoint

`_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE`

`pvp_assault::CExtraMatrix::CheckPoint(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CExtraMatrix` | `0x082e5b4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5b4e  _ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE
#           pvp_assault::CExtraMatrix::CheckPoint(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)
# range [0x082e5b4e, 0x082e5c09]
082e5b4e +0x00:  push   %ebp
082e5b4f +0x01:  mov    %esp,%ebp
082e5b51 +0x03:  push   %edi
082e5b52 +0x04:  push   %esi
082e5b53 +0x05:  push   %ebx
082e5b54 +0x06:  sub    $0x3c,%esp
082e5b57 +0x09:  mov    0x8(%ebp),%edx
082e5b5a +0x0c:  lea    -0x20(%ebp),%eax
082e5b5d +0x0f:  mov    %edx,0x4(%esp)
082e5b61 +0x13:  mov    %eax,(%esp)
082e5b64 +0x16:  call   082f1730 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14b4
082e5b69 +0x1b:  sub    $0x4,%esp
082e5b6c +0x1e:  jmp    082e5bcb <+0x7d>
082e5b6e +0x20:  mov    0x10(%ebp),%eax
082e5b71 +0x23:  lea    0x4(%eax),%edi
082e5b74 +0x26:  mov    0x10(%ebp),%esi
082e5b77 +0x29:  lea    -0x20(%ebp),%eax
082e5b7a +0x2c:  mov    %eax,(%esp)
082e5b7d +0x2f:  call   082f17bc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1540>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1540
082e5b82 +0x34:  mov    0x4(%eax),%ebx
082e5b85 +0x37:  lea    -0x20(%ebp),%eax
082e5b88 +0x3a:  mov    %eax,(%esp)
082e5b8b +0x3d:  call   082f17bc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1540>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1540
082e5b90 +0x42:  mov    (%eax),%eax
082e5b92 +0x44:  movl   $0x0,0x14(%esp)
082e5b9a +0x4c:  mov    %edi,0x10(%esp)
082e5b9e +0x50:  mov    %esi,0xc(%esp)
082e5ba2 +0x54:  mov    %ebx,0x8(%esp)
082e5ba6 +0x58:  mov    %eax,0x4(%esp)
082e5baa +0x5c:  mov    0xc(%ebp),%eax
082e5bad +0x5f:  mov    %eax,(%esp)
082e5bb0 +0x62:  call   082e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>  ; pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int, int&, int&, int)
082e5bb5 +0x67:  test   %al,%al
082e5bb7 +0x69:  je     082e5bc0 <+0x72>
082e5bb9 +0x6b:  mov    $0x1,%eax
082e5bbe +0x70:  jmp    082e5bff <+0xb1>
082e5bc0 +0x72:  lea    -0x20(%ebp),%eax
082e5bc3 +0x75:  mov    %eax,(%esp)
082e5bc6 +0x78:  call   082f17a6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x152a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x152a
082e5bcb +0x7d:  mov    0x8(%ebp),%edx
082e5bce +0x80:  lea    -0x1c(%ebp),%eax
082e5bd1 +0x83:  mov    %edx,0x4(%esp)
082e5bd5 +0x87:  mov    %eax,(%esp)
082e5bd8 +0x8a:  call   082f1754 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14d8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14d8
082e5bdd +0x8f:  sub    $0x4,%esp
082e5be0 +0x92:  lea    -0x1c(%ebp),%eax
082e5be3 +0x95:  mov    %eax,0x4(%esp)
082e5be7 +0x99:  lea    -0x20(%ebp),%eax
082e5bea +0x9c:  mov    %eax,(%esp)
082e5bed +0x9f:  call   082f177a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x14fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x14fe
082e5bf2 +0xa4:  test   %al,%al
082e5bf4 +0xa6:  jne    082e5b6e <+0x20>
082e5bfa +0xac:  mov    $0x0,%eax
082e5bff +0xb1:  lea    -0xc(%ebp),%esp
082e5c02 +0xb4:  add    $0x0,%esp
082e5c05 +0xb7:  pop    %ebx
082e5c06 +0xb8:  pop    %esi
082e5c07 +0xb9:  pop    %edi
082e5c08 +0xba:  pop    %ebp
082e5c09 +0xbb:  ret
```

## 反编译 C

```c
// pvp_assault::CExtraMatrix::CheckPoint @ 0x82e5b4e

/* pvp_assault::CExtraMatrix::CheckPoint(std::vector<MapArea, std::allocator<MapArea> >*,
   pvp_assault::Point2d&) */

undefined4 __thiscall
pvp_assault::CExtraMatrix::CheckPoint(CExtraMatrix *this,vector *param_1,Point2d *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
  local_24 [4];
  __normal_iterator local_20 [16];
  
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::begin();
  while( true ) {
    std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::end();
    bVar2 = __gnu_cxx::operator!=(local_24,local_20);
    if (!bVar2) {
      return 0;
    }
    iVar3 = __gnu_cxx::
            __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
            ::operator*(local_24);
    iVar3 = *(int *)(iVar3 + 4);
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
                    ::operator*(local_24);
    cVar1 = IsIncludeVirtualMoveAreas(param_1,*piVar4,iVar3,(int *)param_2,(int *)(param_2 + 4),0);
    if (cVar1 != '\0') break;
    __gnu_cxx::
    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
    ::operator++(local_24);
  }
  return 1;
}
```
