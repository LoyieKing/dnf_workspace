# SetVirtualMap

`_ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE`

`pvp_assault::CStaticDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CStaticDisposition` | `0x082e6588` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6588  _ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE
#           pvp_assault::CStaticDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
# range [0x082e6588, 0x082e65ed]
082e6588 +0x00:  push   %ebp
082e6589 +0x01:  mov    %esp,%ebp
082e658b +0x03:  sub    $0x28,%esp
082e658e +0x06:  lea    -0x14(%ebp),%eax
082e6591 +0x09:  mov    %eax,(%esp)
082e6594 +0x0c:  call   082f046a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1ee>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1ee
082e6599 +0x11:  movl   $0x0,-0xc(%ebp)
082e65a0 +0x18:  jmp    082e65dc <+0x54>
082e65a2 +0x1a:  lea    -0x14(%ebp),%eax
082e65a5 +0x1d:  mov    %eax,0x8(%esp)
082e65a9 +0x21:  mov    0xc(%ebp),%eax
082e65ac +0x24:  mov    %eax,0x4(%esp)
082e65b0 +0x28:  mov    0x8(%ebp),%eax
082e65b3 +0x2b:  mov    %eax,(%esp)
082e65b6 +0x2e:  call   082e64f2 <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE>  ; pvp_assault::CStaticDisposition::_CheckMatrix(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)
082e65bb +0x33:  test   %al,%al
082e65bd +0x35:  je     082e65c6 <+0x3e>
082e65bf +0x37:  mov    $0x1,%eax
082e65c4 +0x3c:  jmp    082e65ec <+0x64>
082e65c6 +0x3e:  lea    -0x14(%ebp),%eax
082e65c9 +0x41:  mov    %eax,0x4(%esp)
082e65cd +0x45:  mov    0x8(%ebp),%eax
082e65d0 +0x48:  mov    %eax,(%esp)
082e65d3 +0x4b:  call   082e6498 <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE>  ; pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&)
082e65d8 +0x50:  addl   $0x1,-0xc(%ebp)
082e65dc +0x54:  cmpl   $0x4,-0xc(%ebp)
082e65e0 +0x58:  setle  %al
082e65e3 +0x5b:  test   %al,%al
082e65e5 +0x5d:  jne    082e65a2 <+0x1a>
082e65e7 +0x5f:  mov    $0x0,%eax
082e65ec +0x64:  leave
082e65ed +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CStaticDisposition::SetVirtualMap @ 0x82e6588

/* pvp_assault::CStaticDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
    */

undefined4 __thiscall
pvp_assault::CStaticDisposition::SetVirtualMap(CStaticDisposition *this,vector *param_1)

{
  char cVar1;
  Point2d local_18 [8];
  int local_10;
  
  Point2d::Point2d(local_18);
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    cVar1 = _CheckMatrix(this,param_1,local_18);
    if (cVar1 != '\0') break;
    _MoveMatrix(this,local_18);
    local_10 = local_10 + 1;
  }
  return 1;
}
```
