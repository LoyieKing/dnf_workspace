# IsIncludeVirtualMoveAreas

`_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i`

`pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int, int&, int&, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault` | `0x082e5a0b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5a0b  _ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i
#           pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int, int&, int&, int)
# range [0x082e5a0b, 0x082e5b4d]
082e5a0b +0x000:  push   %ebp
082e5a0c +0x001:  mov    %esp,%ebp
082e5a0e +0x003:  sub    $0x58,%esp
082e5a11 +0x006:  movl   $0x7fffffff,-0x14(%ebp)
082e5a18 +0x00d:  movl   $0x0,-0x10(%ebp)
082e5a1f +0x014:  movl   $0x0,-0x28(%ebp)
082e5a26 +0x01b:  movl   $0x0,-0x2c(%ebp)
082e5a2d +0x022:  mov    0x14(%ebp),%eax
082e5a30 +0x025:  mov    0xc(%ebp),%edx
082e5a33 +0x028:  mov    %edx,(%eax)
082e5a35 +0x02a:  mov    0x18(%ebp),%eax
082e5a38 +0x02d:  mov    0x10(%ebp),%edx
082e5a3b +0x030:  mov    %edx,(%eax)
082e5a3d +0x032:  movl   $0x0,-0xc(%ebp)
082e5a44 +0x039:  jmp    082e5b2d <+0x122>
082e5a49 +0x03e:  mov    -0xc(%ebp),%eax
082e5a4c +0x041:  mov    %eax,0x4(%esp)
082e5a50 +0x045:  mov    0x8(%ebp),%eax
082e5a53 +0x048:  mov    %eax,(%esp)
082e5a56 +0x04b:  call   082f17e8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x156c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x156c
082e5a5b +0x050:  mov    0x1c(%ebp),%edx
082e5a5e +0x053:  mov    %edx,0x14(%esp)
082e5a62 +0x057:  lea    -0x2c(%ebp),%edx
082e5a65 +0x05a:  mov    %edx,0x10(%esp)
082e5a69 +0x05e:  lea    -0x28(%ebp),%edx
082e5a6c +0x061:  mov    %edx,0xc(%esp)
082e5a70 +0x065:  mov    0x10(%ebp),%edx
082e5a73 +0x068:  mov    %edx,0x8(%esp)
082e5a77 +0x06c:  mov    0xc(%ebp),%edx
082e5a7a +0x06f:  mov    %edx,0x4(%esp)
082e5a7e +0x073:  mov    %eax,(%esp)
082e5a81 +0x076:  call   082f02e6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6a
082e5a86 +0x07b:  test   %al,%al
082e5a88 +0x07d:  je     082e5a94 <+0x89>
082e5a8a +0x07f:  mov    $0x1,%eax
082e5a8f +0x084:  jmp    082e5b4b <+0x140>
082e5a94 +0x089:  mov    -0x2c(%ebp),%edx
082e5a97 +0x08c:  mov    -0x28(%ebp),%eax
082e5a9a +0x08f:  mov    %edx,0x8(%esp)
082e5a9e +0x093:  mov    %eax,0x4(%esp)
082e5aa2 +0x097:  lea    -0x24(%ebp),%eax
082e5aa5 +0x09a:  mov    %eax,(%esp)
082e5aa8 +0x09d:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5aad +0x0a2:  mov    0x10(%ebp),%eax
082e5ab0 +0x0a5:  mov    %eax,0x8(%esp)
082e5ab4 +0x0a9:  mov    0xc(%ebp),%eax
082e5ab7 +0x0ac:  mov    %eax,0x4(%esp)
082e5abb +0x0b0:  lea    -0x1c(%ebp),%eax
082e5abe +0x0b3:  mov    %eax,(%esp)
082e5ac1 +0x0b6:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5ac6 +0x0bb:  mov    -0x24(%ebp),%eax
082e5ac9 +0x0be:  mov    -0x20(%ebp),%edx
082e5acc +0x0c1:  mov    %eax,0x8(%esp)
082e5ad0 +0x0c5:  mov    %edx,0xc(%esp)
082e5ad4 +0x0c9:  mov    -0x1c(%ebp),%eax
082e5ad7 +0x0cc:  mov    -0x18(%ebp),%edx
082e5ada +0x0cf:  mov    %eax,(%esp)
082e5add +0x0d2:  mov    %edx,0x4(%esp)
082e5ae1 +0x0d6:  call   082e59f1 <_Z11GetDistanceN11pvp_assault7Point2dES0_>  ; GetDistance(pvp_assault::Point2d, pvp_assault::Point2d)
082e5ae6 +0x0db:  mov    %eax,-0x10(%ebp)
082e5ae9 +0x0de:  mov    -0x14(%ebp),%eax
082e5aec +0x0e1:  cmp    -0x10(%ebp),%eax
082e5aef +0x0e4:  jle    082e5b29 <+0x11e>
082e5af1 +0x0e6:  cmpl   $0x0,0x1c(%ebp)
082e5af5 +0x0ea:  je     082e5b09 <+0xfe>
082e5af7 +0x0ec:  mov    -0x28(%ebp),%edx
082e5afa +0x0ef:  mov    0x14(%ebp),%eax
082e5afd +0x0f2:  mov    %edx,(%eax)
082e5aff +0x0f4:  mov    -0x2c(%ebp),%edx
082e5b02 +0x0f7:  mov    0x18(%ebp),%eax
082e5b05 +0x0fa:  mov    %edx,(%eax)
082e5b07 +0x0fc:  jmp    082e5b23 <+0x118>
082e5b09 +0x0fe:  mov    -0x28(%ebp),%eax
082e5b0c +0x101:  mov    %eax,%edx
082e5b0e +0x103:  sub    0xc(%ebp),%edx
082e5b11 +0x106:  mov    0x14(%ebp),%eax
082e5b14 +0x109:  mov    %edx,(%eax)
082e5b16 +0x10b:  mov    -0x2c(%ebp),%eax
082e5b19 +0x10e:  mov    %eax,%edx
082e5b1b +0x110:  sub    0x10(%ebp),%edx
082e5b1e +0x113:  mov    0x18(%ebp),%eax
082e5b21 +0x116:  mov    %edx,(%eax)
082e5b23 +0x118:  mov    -0x10(%ebp),%eax
082e5b26 +0x11b:  mov    %eax,-0x14(%ebp)
082e5b29 +0x11e:  addl   $0x1,-0xc(%ebp)
082e5b2d +0x122:  mov    0x8(%ebp),%eax
082e5b30 +0x125:  mov    %eax,(%esp)
082e5b33 +0x128:  call   082f17c6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x154a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x154a
082e5b38 +0x12d:  cmp    -0xc(%ebp),%eax
082e5b3b +0x130:  seta   %al
082e5b3e +0x133:  test   %al,%al
082e5b40 +0x135:  jne    082e5a49 <+0x3e>
082e5b46 +0x13b:  mov    $0x0,%eax
082e5b4b +0x140:  leave
082e5b4c +0x141:  ret
082e5b4d +0x142:  nop
```

## 反编译 C

```c
// pvp_assault::IsIncludeVirtualMoveAreas @ 0x82e5a0b

/* pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int,
   int&, int&, int) */

undefined4
pvp_assault::IsIncludeVirtualMoveAreas
          (vector *param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  char cVar1;
  MapArea *this;
  uint uVar2;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_18 = 0x7fffffff;
  local_14 = 0;
  local_2c = 0;
  local_30 = 0;
  *param_4 = param_2;
  *param_5 = param_3;
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<MapArea,std::allocator<MapArea>>::size
                      ((vector<MapArea,std::allocator<MapArea>> *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    this = (MapArea *)
           std::vector<MapArea,std::allocator<MapArea>>::at
                     ((vector<MapArea,std::allocator<MapArea>> *)param_1,local_10);
    cVar1 = MapArea::include(this,param_2,param_3,&local_2c,&local_30,param_6);
    if (cVar1 != '\0') break;
    Point2d::Point2d((Point2d *)&local_28,local_2c,local_30);
    Point2d::Point2d((Point2d *)&local_20,param_2,param_3);
    local_14 = GetDistance(local_20,local_1c,local_28,local_24);
    if (local_14 < local_18) {
      local_18 = local_14;
      if (param_6 == 0) {
        *param_4 = local_2c - param_2;
        *param_5 = local_30 - param_3;
      }
      else {
        *param_4 = local_2c;
        *param_5 = local_30;
      }
    }
    local_10 = local_10 + 1;
  }
  return 1;
}
```
