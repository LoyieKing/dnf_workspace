# CStaticDisposition

`_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi`

`pvp_assault::CStaticDisposition::CStaticDisposition(CUser**, int*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CStaticDisposition` | `0x082e62aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e62aa  _ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi
#           pvp_assault::CStaticDisposition::CStaticDisposition(CUser**, int*)
# range [0x082e62aa, 0x082e6497]
082e62aa +0x000:  push   %ebp
082e62ab +0x001:  mov    %esp,%ebp
082e62ad +0x003:  push   %edi
082e62ae +0x004:  push   %esi
082e62af +0x005:  push   %ebx
082e62b0 +0x006:  sub    $0x4c,%esp
082e62b3 +0x009:  mov    0x8(%ebp),%eax
082e62b6 +0x00c:  mov    %eax,(%esp)
082e62b9 +0x00f:  call   082f1052 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xdd6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xdd6
082e62be +0x014:  mov    0x8(%ebp),%eax
082e62c1 +0x017:  movl   $&_ZTVN11pvp_assault18CStaticDispositionE+0x8,(%eax)
082e62c7 +0x01d:  mov    0x8(%ebp),%eax
082e62ca +0x020:  add    $0xc,%eax
082e62cd +0x023:  mov    %eax,(%esp)
082e62d0 +0x026:  call   082f046a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1ee>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1ee
082e62d5 +0x02b:  mov    0x8(%ebp),%eax
082e62d8 +0x02e:  lea    0x14(%eax),%esi
082e62db +0x031:  mov    %esi,%edi
082e62dd +0x033:  mov    $0x1,%ebx
082e62e2 +0x038:  jmp    082e62f2 <+0x48>
082e62e4 +0x03a:  mov    %edi,(%esp)
082e62e7 +0x03d:  call   082f1088 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe0c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe0c
082e62ec +0x042:  add    $0xc,%edi
082e62ef +0x045:  sub    $0x1,%ebx
082e62f2 +0x048:  cmp    $0xffffffff,%ebx
082e62f5 +0x04b:  setne  %al
082e62f8 +0x04e:  test   %al,%al
082e62fa +0x050:  jne    082e62e4 <+0x3a>
082e62fc +0x052:  jmp    082e633a <+0x90>
082e62fe +0x054:  mov    %edx,%edi
082e6300 +0x056:  mov    %eax,-0x3c(%ebp)
082e6303 +0x059:  test   %esi,%esi
082e6305 +0x05b:  je     082e632d <+0x83>
082e6307 +0x05d:  mov    $0x1,%eax
082e630c +0x062:  sub    %ebx,%eax
082e630e +0x064:  mov    %eax,%edx
082e6310 +0x066:  mov    %edx,%eax
082e6312 +0x068:  add    %eax,%eax
082e6314 +0x06a:  add    %edx,%eax
082e6316 +0x06c:  shl    $0x2,%eax
082e6319 +0x06f:  lea    (%esi,%eax,1),%ebx
082e631c +0x072:  cmp    %esi,%ebx
082e631e +0x074:  je     082e632d <+0x83>
082e6320 +0x076:  sub    $0xc,%ebx
082e6323 +0x079:  mov    %ebx,(%esp)
082e6326 +0x07c:  call   082f109c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe20>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe20
082e632b +0x081:  jmp    082e631c <+0x72>
082e632d +0x083:  mov    -0x3c(%ebp),%eax
082e6330 +0x086:  mov    %edi,%edx
082e6332 +0x088:  mov    %eax,(%esp)
082e6335 +0x08b:  call   08ae3750 <_Unwind_Resume>
082e633a +0x090:  mov    &_ZN11pvp_assaultL23ASSAULT_RECT_ICON_POINTE,%edx
082e6340 +0x096:  mov    0x8(%ebp),%eax
082e6343 +0x099:  mov    %edx,0xc(%eax)
082e6346 +0x09c:  mov    &_ZN11pvp_assaultL23ASSAULT_RECT_ICON_POINTE+0x4,%edx
082e634c +0x0a2:  mov    0x8(%ebp),%eax
082e634f +0x0a5:  mov    %edx,0x10(%eax)
082e6352 +0x0a8:  movl   $0x0,-0x20(%ebp)
082e6359 +0x0af:  jmp    082e6402 <+0x158>
082e635e +0x0b4:  movl   $0x0,-0x1c(%ebp)
082e6365 +0x0bb:  jmp    082e63d4 <+0x12a>
082e6367 +0x0bd:  mov    -0x20(%ebp),%edx
082e636a +0x0c0:  mov    -0x1c(%ebp),%eax
082e636d +0x0c3:  shl    $0x2,%edx
082e6370 +0x0c6:  lea    (%edx,%eax,1),%eax
082e6373 +0x0c9:  add    %eax,%eax
082e6375 +0x0cb:  add    $0x1,%eax
082e6378 +0x0ce:  mov    &_ZN11pvp_assaultL25ASSAULT_RECT_PLAYER_POINTE(,%eax,4),%edx
082e637f +0x0d5:  mov    -0x20(%ebp),%ecx
082e6382 +0x0d8:  mov    -0x1c(%ebp),%eax
082e6385 +0x0db:  shl    $0x2,%ecx
082e6388 +0x0de:  lea    (%ecx,%eax,1),%eax
082e638b +0x0e1:  mov    &_ZN11pvp_assaultL25ASSAULT_RECT_PLAYER_POINTE(,%eax,8),%eax
082e6392 +0x0e8:  mov    %edx,0x8(%esp)
082e6396 +0x0ec:  mov    %eax,0x4(%esp)
082e639a +0x0f0:  lea    -0x30(%ebp),%eax
082e639d +0x0f3:  mov    %eax,(%esp)
082e63a0 +0x0f6:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e63a5 +0x0fb:  mov    -0x20(%ebp),%edx
082e63a8 +0x0fe:  mov    %edx,%eax
082e63aa +0x100:  add    %eax,%eax
082e63ac +0x102:  add    %edx,%eax
082e63ae +0x104:  shl    $0x2,%eax
082e63b1 +0x107:  add    $0x10,%eax
082e63b4 +0x10a:  add    0x8(%ebp),%eax
082e63b7 +0x10d:  lea    0x4(%eax),%ecx
082e63ba +0x110:  mov    -0x30(%ebp),%eax
082e63bd +0x113:  mov    -0x2c(%ebp),%edx
082e63c0 +0x116:  mov    %eax,0x4(%esp)
082e63c4 +0x11a:  mov    %edx,0x8(%esp)
082e63c8 +0x11e:  mov    %ecx,(%esp)
082e63cb +0x121:  call   082e5962 <_ZN11pvp_assault12CExtraMatrix8AddPointENS_7Point2dE>  ; pvp_assault::CExtraMatrix::AddPoint(pvp_assault::Point2d)
082e63d0 +0x126:  addl   $0x1,-0x1c(%ebp)
082e63d4 +0x12a:  mov    -0x20(%ebp),%eax
082e63d7 +0x12d:  shl    $0x2,%eax
082e63da +0x130:  add    0x10(%ebp),%eax
082e63dd +0x133:  mov    (%eax),%eax
082e63df +0x135:  cmp    -0x1c(%ebp),%eax
082e63e2 +0x138:  jle    082e63f1 <+0x147>
082e63e4 +0x13a:  cmpl   $0x3,-0x1c(%ebp)
082e63e8 +0x13e:  jg     082e63f1 <+0x147>
082e63ea +0x140:  mov    $0x1,%eax
082e63ef +0x145:  jmp    082e63f6 <+0x14c>
082e63f1 +0x147:  mov    $0x0,%eax
082e63f6 +0x14c:  test   %al,%al
082e63f8 +0x14e:  jne    082e6367 <+0xbd>
082e63fe +0x154:  addl   $0x1,-0x20(%ebp)
082e6402 +0x158:  cmpl   $0x1,-0x20(%ebp)
082e6406 +0x15c:  setle  %al
082e6409 +0x15f:  test   %al,%al
082e640b +0x161:  jne    082e635e <+0xb4>
082e6411 +0x167:  mov    0xc(%ebp),%eax
082e6414 +0x16a:  mov    (%eax),%eax
082e6416 +0x16c:  mov    %eax,(%esp)
082e6419 +0x16f:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
082e641e +0x174:  movzwl %ax,%ebx
082e6421 +0x177:  mov    0xc(%ebp),%eax
082e6424 +0x17a:  mov    (%eax),%eax
082e6426 +0x17c:  mov    %eax,(%esp)
082e6429 +0x17f:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e642e +0x184:  movzwl %ax,%eax
082e6431 +0x187:  mov    %ebx,0x8(%esp)
082e6435 +0x18b:  mov    %eax,0x4(%esp)
082e6439 +0x18f:  lea    -0x28(%ebp),%eax
082e643c +0x192:  mov    %eax,(%esp)
082e643f +0x195:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e6444 +0x19a:  lea    -0x28(%ebp),%eax
082e6447 +0x19d:  mov    %eax,0x4(%esp)
082e644b +0x1a1:  mov    0x8(%ebp),%eax
082e644e +0x1a4:  mov    %eax,(%esp)
082e6451 +0x1a7:  call   082e6498 <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE>  ; pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&)
082e6456 +0x1ac:  jmp    082e648f <+0x1e5>
082e6458 +0x1ae:  mov    %edx,%esi
082e645a +0x1b0:  mov    %eax,%edi
082e645c +0x1b2:  mov    0x8(%ebp),%eax
082e645f +0x1b5:  add    $0x14,%eax
082e6462 +0x1b8:  test   %eax,%eax
082e6464 +0x1ba:  je     082e6483 <+0x1d9>
082e6466 +0x1bc:  mov    0x8(%ebp),%eax
082e6469 +0x1bf:  lea    0x2c(%eax),%ebx
082e646c +0x1c2:  mov    0x8(%ebp),%eax
082e646f +0x1c5:  add    $0x14,%eax
082e6472 +0x1c8:  cmp    %eax,%ebx
082e6474 +0x1ca:  je     082e6483 <+0x1d9>
082e6476 +0x1cc:  sub    $0xc,%ebx
082e6479 +0x1cf:  mov    %ebx,(%esp)
082e647c +0x1d2:  call   082f109c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe20>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe20
082e6481 +0x1d7:  jmp    082e646c <+0x1c2>
082e6483 +0x1d9:  mov    %edi,%eax
082e6485 +0x1db:  mov    %esi,%edx
082e6487 +0x1dd:  mov    %eax,(%esp)
082e648a +0x1e0:  call   08ae3750 <_Unwind_Resume>
082e648f +0x1e5:  add    $0x4c,%esp
082e6492 +0x1e8:  pop    %ebx
082e6493 +0x1e9:  pop    %esi
082e6494 +0x1ea:  pop    %edi
082e6495 +0x1eb:  pop    %ebp
082e6496 +0x1ec:  ret
082e6497 +0x1ed:  nop
```

## 反编译 C

```c
// pvp_assault::CStaticDisposition::CStaticDisposition @ 0x82e62aa

/* pvp_assault::CStaticDisposition::CStaticDisposition(CUser**, int*) */

void __thiscall
pvp_assault::CStaticDisposition::CStaticDisposition
          (CStaticDisposition *this,CUser **param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CExtraMatrix *this_00;
  undefined4 local_34;
  undefined4 local_30;
  Point2d local_2c [8];
  int local_24;
  int local_20;
  
  CDisposition::CDisposition((CDisposition *)this);
  *(undefined ***)this = &PTR_SetVirtualMap_08c1d198;
  Point2d::Point2d((Point2d *)(this + 0xc));
  this_00 = (CExtraMatrix *)(this + 0x14);
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 082e62e7 to 082e62eb has its CatchHandler @ 082e62fe */
    CExtraMatrix::CExtraMatrix(this_00);
    this_00 = this_00 + 0xc;
  }
  *(undefined4 *)(this + 0xc) = pvp_assault::ASSAULT_RECT_ICON_POINT;
  *(undefined4 *)(this + 0x10) = DAT_08c1cd24;
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    local_20 = 0;
    while( true ) {
      if ((local_20 < param_2[local_24]) && (local_20 < 4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      Point2d::Point2d((Point2d *)&local_34,
                       *(int *)(pvp_assault::ASSAULT_RECT_PLAYER_POINT +
                               (local_24 * 4 + local_20) * 8),
                       *(int *)(pvp_assault::ASSAULT_RECT_PLAYER_POINT +
                               ((local_24 * 4 + local_20) * 2 + 1) * 4));
                    /* try { // try from 082e63cb to 082e6455 has its CatchHandler @ 082e6458 */
      CExtraMatrix::AddPoint(this + local_24 * 0xc + 0x14,local_34,local_30);
      local_20 = local_20 + 1;
    }
  }
  uVar2 = CUser::get_posY(*param_1);
  uVar3 = CUser::get_posX(*param_1);
  Point2d::Point2d(local_2c,uVar3 & 0xffff,uVar2 & 0xffff);
  _MoveMatrix(this,local_2c);
  return;
}
```
