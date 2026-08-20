# CDynamicDisposition

`_ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi`

`pvp_assault::CDynamicDisposition::CDynamicDisposition(CUser**, int*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CDynamicDisposition` | `0x082e6032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6032  _ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi
#           pvp_assault::CDynamicDisposition::CDynamicDisposition(CUser**, int*)
# range [0x082e6032, 0x082e624b]
082e6032 +0x000:  push   %ebp
082e6033 +0x001:  mov    %esp,%ebp
082e6035 +0x003:  push   %esi
082e6036 +0x004:  push   %ebx
082e6037 +0x005:  sub    $0x40,%esp
082e603a +0x008:  mov    0x8(%ebp),%eax
082e603d +0x00b:  mov    %eax,(%esp)
082e6040 +0x00e:  call   082f1052 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xdd6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xdd6
082e6045 +0x013:  mov    0x8(%ebp),%eax
082e6048 +0x016:  movl   $&_ZTVN11pvp_assault19CDynamicDispositionE+0x8,(%eax)
082e604e +0x01c:  mov    0x8(%ebp),%eax
082e6051 +0x01f:  add    $0xc,%eax
082e6054 +0x022:  mov    %eax,(%esp)
082e6057 +0x025:  call   082f046a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1ee>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1ee
082e605c +0x02a:  mov    0x8(%ebp),%eax
082e605f +0x02d:  add    $0x14,%eax
082e6062 +0x030:  mov    %eax,(%esp)
082e6065 +0x033:  call   082f1060 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xde4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xde4
082e606a +0x038:  mov    0x8(%ebp),%eax
082e606d +0x03b:  add    $0x20,%eax
082e6070 +0x03e:  mov    %eax,(%esp)
082e6073 +0x041:  call   082f1060 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xde4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xde4
082e6078 +0x046:  movl   $0x0,-0xc(%ebp)
082e607f +0x04d:  jmp    082e609a <+0x68>
082e6081 +0x04f:  mov    -0xc(%ebp),%edx
082e6084 +0x052:  mov    -0xc(%ebp),%eax
082e6087 +0x055:  shl    $0x2,%eax
082e608a +0x058:  add    0xc(%ebp),%eax
082e608d +0x05b:  mov    (%eax),%ecx
082e608f +0x05d:  mov    0x8(%ebp),%eax
082e6092 +0x060:  mov    %ecx,0x4(%eax,%edx,4)
082e6096 +0x064:  addl   $0x1,-0xc(%ebp)
082e609a +0x068:  cmpl   $0x1,-0xc(%ebp)
082e609e +0x06c:  setle  %al
082e60a1 +0x06f:  test   %al,%al
082e60a3 +0x071:  jne    082e6081 <+0x4f>
082e60a5 +0x073:  mov    0x8(%ebp),%eax
082e60a8 +0x076:  mov    0x4(%eax),%eax
082e60ab +0x079:  mov    %eax,(%esp)
082e60ae +0x07c:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e60b3 +0x081:  movzwl %ax,%ebx
082e60b6 +0x084:  mov    0x8(%ebp),%eax
082e60b9 +0x087:  mov    0x8(%eax),%eax
082e60bc +0x08a:  mov    %eax,(%esp)
082e60bf +0x08d:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e60c4 +0x092:  shr    %ax
082e60c7 +0x095:  movzwl %ax,%eax
082e60ca +0x098:  lea    (%ebx,%eax,1),%edx
082e60cd +0x09b:  mov    0x8(%ebp),%eax
082e60d0 +0x09e:  mov    %edx,0xc(%eax)
082e60d3 +0x0a1:  mov    0x8(%ebp),%eax
082e60d6 +0x0a4:  mov    0x4(%eax),%eax
082e60d9 +0x0a7:  mov    %eax,(%esp)
082e60dc +0x0aa:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e60e1 +0x0af:  movzwl %ax,%ebx
082e60e4 +0x0b2:  mov    0x8(%ebp),%eax
082e60e7 +0x0b5:  mov    0x8(%eax),%eax
082e60ea +0x0b8:  mov    %eax,(%esp)
082e60ed +0x0bb:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e60f2 +0x0c0:  shr    %ax
082e60f5 +0x0c3:  movzwl %ax,%eax
082e60f8 +0x0c6:  lea    (%ebx,%eax,1),%edx
082e60fb +0x0c9:  mov    0x8(%ebp),%eax
082e60fe +0x0cc:  mov    %edx,0x10(%eax)
082e6101 +0x0cf:  mov    0x8(%ebp),%eax
082e6104 +0x0d2:  mov    0x8(%eax),%eax
082e6107 +0x0d5:  mov    %eax,(%esp)
082e610a +0x0d8:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e610f +0x0dd:  movzwl %ax,%ebx
082e6112 +0x0e0:  mov    0x8(%ebp),%eax
082e6115 +0x0e3:  mov    0x8(%eax),%eax
082e6118 +0x0e6:  mov    %eax,(%esp)
082e611b +0x0e9:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e6120 +0x0ee:  movzwl %ax,%eax
082e6123 +0x0f1:  mov    %ebx,0x8(%esp)
082e6127 +0x0f5:  mov    %eax,0x4(%esp)
082e612b +0x0f9:  lea    -0x2c(%ebp),%eax
082e612e +0x0fc:  mov    %eax,(%esp)
082e6131 +0x0ff:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e6136 +0x104:  mov    0x8(%ebp),%eax
082e6139 +0x107:  mov    0x4(%eax),%eax
082e613c +0x10a:  mov    %eax,(%esp)
082e613f +0x10d:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e6144 +0x112:  movzwl %ax,%ebx
082e6147 +0x115:  mov    0x8(%ebp),%eax
082e614a +0x118:  mov    0x4(%eax),%eax
082e614d +0x11b:  mov    %eax,(%esp)
082e6150 +0x11e:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e6155 +0x123:  movzwl %ax,%eax
082e6158 +0x126:  mov    %ebx,0x8(%esp)
082e615c +0x12a:  mov    %eax,0x4(%esp)
082e6160 +0x12e:  lea    -0x24(%ebp),%eax
082e6163 +0x131:  mov    %eax,(%esp)
082e6166 +0x134:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e616b +0x139:  mov    0x8(%ebp),%eax
082e616e +0x13c:  lea    0x14(%eax),%edx
082e6171 +0x13f:  lea    -0x2c(%ebp),%eax
082e6174 +0x142:  mov    %eax,0x8(%esp)
082e6178 +0x146:  lea    -0x24(%ebp),%eax
082e617b +0x149:  mov    %eax,0x4(%esp)
082e617f +0x14d:  mov    %edx,(%esp)
082e6182 +0x150:  call   082e5ca8 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_>  ; pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&)
082e6187 +0x155:  mov    0x8(%ebp),%eax
082e618a +0x158:  mov    0x4(%eax),%eax
082e618d +0x15b:  mov    %eax,(%esp)
082e6190 +0x15e:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e6195 +0x163:  movzwl %ax,%ebx
082e6198 +0x166:  mov    0x8(%ebp),%eax
082e619b +0x169:  mov    0x4(%eax),%eax
082e619e +0x16c:  mov    %eax,(%esp)
082e61a1 +0x16f:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e61a6 +0x174:  movzwl %ax,%eax
082e61a9 +0x177:  mov    %ebx,0x8(%esp)
082e61ad +0x17b:  mov    %eax,0x4(%esp)
082e61b1 +0x17f:  lea    -0x1c(%ebp),%eax
082e61b4 +0x182:  mov    %eax,(%esp)
082e61b7 +0x185:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e61bc +0x18a:  mov    0x8(%ebp),%eax
082e61bf +0x18d:  mov    0x8(%eax),%eax
082e61c2 +0x190:  mov    %eax,(%esp)
082e61c5 +0x193:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e61ca +0x198:  movzwl %ax,%ebx
082e61cd +0x19b:  mov    0x8(%ebp),%eax
082e61d0 +0x19e:  mov    0x8(%eax),%eax
082e61d3 +0x1a1:  mov    %eax,(%esp)
082e61d6 +0x1a4:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e61db +0x1a9:  movzwl %ax,%eax
082e61de +0x1ac:  mov    %ebx,0x8(%esp)
082e61e2 +0x1b0:  mov    %eax,0x4(%esp)
082e61e6 +0x1b4:  lea    -0x14(%ebp),%eax
082e61e9 +0x1b7:  mov    %eax,(%esp)
082e61ec +0x1ba:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e61f1 +0x1bf:  mov    0x8(%ebp),%eax
082e61f4 +0x1c2:  lea    0x20(%eax),%edx
082e61f7 +0x1c5:  lea    -0x1c(%ebp),%eax
082e61fa +0x1c8:  mov    %eax,0x8(%esp)
082e61fe +0x1cc:  lea    -0x14(%ebp),%eax
082e6201 +0x1cf:  mov    %eax,0x4(%esp)
082e6205 +0x1d3:  mov    %edx,(%esp)
082e6208 +0x1d6:  call   082e5ca8 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_>  ; pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&)
082e620d +0x1db:  jmp    082e6245 <+0x213>
082e620f +0x1dd:  mov    %edx,%ebx
082e6211 +0x1df:  mov    %eax,%esi
082e6213 +0x1e1:  mov    0x8(%ebp),%eax
082e6216 +0x1e4:  add    $0x20,%eax
082e6219 +0x1e7:  mov    %eax,(%esp)
082e621c +0x1ea:  call   082f1074 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xdf8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xdf8
082e6221 +0x1ef:  mov    %esi,%eax
082e6223 +0x1f1:  mov    %ebx,%edx
082e6225 +0x1f3:  jmp    082e6227 <+0x1f5>
082e6227 +0x1f5:  mov    %edx,%ebx
082e6229 +0x1f7:  mov    %eax,%esi
082e622b +0x1f9:  mov    0x8(%ebp),%eax
082e622e +0x1fc:  add    $0x14,%eax
082e6231 +0x1ff:  mov    %eax,(%esp)
082e6234 +0x202:  call   082f1074 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xdf8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xdf8
082e6239 +0x207:  mov    %esi,%eax
082e623b +0x209:  mov    %ebx,%edx
082e623d +0x20b:  mov    %eax,(%esp)
082e6240 +0x20e:  call   08ae3750 <_Unwind_Resume>
082e6245 +0x213:  add    $0x40,%esp
082e6248 +0x216:  pop    %ebx
082e6249 +0x217:  pop    %esi
082e624a +0x218:  pop    %ebp
082e624b +0x219:  ret
```

## 反编译 C

```c
// pvp_assault::CDynamicDisposition::CDynamicDisposition @ 0x82e6032

/* pvp_assault::CDynamicDisposition::CDynamicDisposition(CUser**, int*) */

void __thiscall
pvp_assault::CDynamicDisposition::CDynamicDisposition
          (CDynamicDisposition *this,CUser **param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  Point2d local_30 [8];
  Point2d local_28 [8];
  Point2d local_20 [8];
  Point2d local_18 [8];
  int local_10;
  
  CDisposition::CDisposition((CDisposition *)this);
  *(undefined ***)this = &PTR_SetVirtualMap_08c1d1b0;
  Point2d::Point2d((Point2d *)(this + 0xc));
  CCandidateMatrix::CCandidateMatrix((CCandidateMatrix *)(this + 0x14));
                    /* try { // try from 082e6073 to 082e6077 has its CatchHandler @ 082e6227 */
  CCandidateMatrix::CCandidateMatrix((CCandidateMatrix *)(this + 0x20));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(CUser **)(this + local_10 * 4 + 4) = param_1[local_10];
  }
  uVar2 = CUser::get_posX(*(CUser **)(this + 4));
  uVar1 = CUser::get_posX(*(CUser **)(this + 8));
  *(uint *)(this + 0xc) = (uVar2 & 0xffff) + (uint)(uVar1 >> 1);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar1 = CUser::get_posY(*(CUser **)(this + 8));
  *(uint *)(this + 0x10) = (uVar2 & 0xffff) + (uint)(uVar1 >> 1);
  uVar2 = CUser::get_posY(*(CUser **)(this + 8));
  uVar3 = CUser::get_posX(*(CUser **)(this + 8));
  Point2d::Point2d(local_30,uVar3 & 0xffff,uVar2 & 0xffff);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar3 = CUser::get_posX(*(CUser **)(this + 4));
  Point2d::Point2d(local_28,uVar3 & 0xffff,uVar2 & 0xffff);
                    /* try { // try from 082e6182 to 082e620c has its CatchHandler @ 082e620f */
  CCandidateMatrix::MakeCandidatePoint((CCandidateMatrix *)(this + 0x14),local_28,local_30);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar3 = CUser::get_posX(*(CUser **)(this + 4));
  Point2d::Point2d(local_20,uVar3 & 0xffff,uVar2 & 0xffff);
  uVar2 = CUser::get_posY(*(CUser **)(this + 8));
  uVar3 = CUser::get_posX(*(CUser **)(this + 8));
  Point2d::Point2d(local_18,uVar3 & 0xffff,uVar2 & 0xffff);
  CCandidateMatrix::MakeCandidatePoint((CCandidateMatrix *)(this + 0x20),local_18,local_20);
  return;
}
```
