# get_area_center_point

`_ZNK9GameWorld21get_area_center_pointEiiRiS0_`

`GameWorld::get_area_center_point(int, int, int&, int&) const`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c471e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c471e  _ZNK9GameWorld21get_area_center_pointEiiRiS0_
#           GameWorld::get_area_center_point(int, int, int&, int&) const
# range [0x086c471e, 0x086c4813]
086c471e +0x00:  push   %ebp
086c471f +0x01:  mov    %esp,%ebp
086c4721 +0x03:  sub    $0x28,%esp
086c4724 +0x06:  cmpl   $0x0,0xc(%ebp)
086c4728 +0x0a:  js     086c4734 <+0x16>
086c472a +0x0c:  mov    &MAX_VILLAGE_NUM,%eax
086c472f +0x11:  cmp    %eax,0xc(%ebp)
086c4732 +0x14:  jl     086c473e <+0x20>
086c4734 +0x16:  mov    $0x0,%eax
086c4739 +0x1b:  jmp    086c4812 <+0xf4>
086c473e +0x20:  mov    0x8(%ebp),%eax
086c4741 +0x23:  mov    0x1c(%eax),%edx
086c4744 +0x26:  mov    0xc(%ebp),%eax
086c4747 +0x29:  imul   $0x34,%eax,%eax
086c474a +0x2c:  add    %eax,%edx
086c474c +0x2e:  mov    0x10(%ebp),%eax
086c474f +0x31:  mov    %eax,0x4(%esp)
086c4753 +0x35:  mov    %edx,(%esp)
086c4756 +0x38:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c475b +0x3d:  add    $0x7c,%eax
086c475e +0x40:  mov    %eax,(%esp)
086c4761 +0x43:  call   086d3e46 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2677>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2677
086c4766 +0x48:  test   %al,%al
086c4768 +0x4a:  je     086c4774 <+0x56>
086c476a +0x4c:  mov    $0x0,%eax
086c476f +0x51:  jmp    086c4812 <+0xf4>
086c4774 +0x56:  mov    0x8(%ebp),%eax
086c4777 +0x59:  mov    0x1c(%eax),%edx
086c477a +0x5c:  mov    0xc(%ebp),%eax
086c477d +0x5f:  imul   $0x34,%eax,%eax
086c4780 +0x62:  add    %eax,%edx
086c4782 +0x64:  mov    0x10(%ebp),%eax
086c4785 +0x67:  mov    %eax,0x4(%esp)
086c4789 +0x6b:  mov    %edx,(%esp)
086c478c +0x6e:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c4791 +0x73:  test   %eax,%eax
086c4793 +0x75:  sete   %al
086c4796 +0x78:  test   %al,%al
086c4798 +0x7a:  je     086c47a1 <+0x83>
086c479a +0x7c:  mov    $0x0,%eax
086c479f +0x81:  jmp    086c4812 <+0xf4>
086c47a1 +0x83:  mov    0x8(%ebp),%eax
086c47a4 +0x86:  mov    0x1c(%eax),%edx
086c47a7 +0x89:  mov    0xc(%ebp),%eax
086c47aa +0x8c:  imul   $0x34,%eax,%eax
086c47ad +0x8f:  add    %eax,%edx
086c47af +0x91:  mov    0x10(%ebp),%eax
086c47b2 +0x94:  mov    %eax,0x4(%esp)
086c47b6 +0x98:  mov    %edx,(%esp)
086c47b9 +0x9b:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c47be +0xa0:  add    $0x7c,%eax
086c47c1 +0xa3:  movl   $0x0,0x4(%esp)
086c47c9 +0xab:  mov    %eax,(%esp)
086c47cc +0xae:  call   082f17e8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x156c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x156c
086c47d1 +0xb3:  mov    %eax,-0xc(%ebp)
086c47d4 +0xb6:  mov    -0xc(%ebp),%eax
086c47d7 +0xb9:  mov    (%eax),%edx
086c47d9 +0xbb:  mov    -0xc(%ebp),%eax
086c47dc +0xbe:  mov    0x8(%eax),%eax
086c47df +0xc1:  mov    %eax,%ecx
086c47e1 +0xc3:  shr    $0x1f,%ecx
086c47e4 +0xc6:  lea    (%ecx,%eax,1),%eax
086c47e7 +0xc9:  sar    %eax
086c47e9 +0xcb:  add    %eax,%edx
086c47eb +0xcd:  mov    0x14(%ebp),%eax
086c47ee +0xd0:  mov    %edx,(%eax)
086c47f0 +0xd2:  mov    -0xc(%ebp),%eax
086c47f3 +0xd5:  mov    0x4(%eax),%edx
086c47f6 +0xd8:  mov    -0xc(%ebp),%eax
086c47f9 +0xdb:  mov    0xc(%eax),%eax
086c47fc +0xde:  mov    %eax,%ecx
086c47fe +0xe0:  shr    $0x1f,%ecx
086c4801 +0xe3:  lea    (%ecx,%eax,1),%eax
086c4804 +0xe6:  sar    %eax
086c4806 +0xe8:  add    %eax,%edx
086c4808 +0xea:  mov    0x18(%ebp),%eax
086c480b +0xed:  mov    %edx,(%eax)
086c480d +0xef:  mov    $0x1,%eax
086c4812 +0xf4:  leave
086c4813 +0xf5:  ret
```

## 反编译 C

```c
// GameWorld::get_area_center_point @ 0x86c471e

/* GameWorld::get_area_center_point(int, int, int&, int&) const */

undefined4 __thiscall
GameWorld::get_area_center_point(GameWorld *this,int param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 < 0) || (MAX_VILLAGE_NUM <= param_1)) {
    uVar2 = 0;
  }
  else {
    Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
    cVar1 = std::vector<MapArea,std::allocator<MapArea>>::empty();
    if (cVar1 == '\0') {
      iVar3 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        iVar3 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
        piVar4 = (int *)std::vector<MapArea,std::allocator<MapArea>>::at
                                  ((vector<MapArea,std::allocator<MapArea>> *)(iVar3 + 0x7c),0);
        *param_3 = *piVar4 + piVar4[2] / 2;
        *param_4 = piVar4[1] + piVar4[3] / 2;
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
