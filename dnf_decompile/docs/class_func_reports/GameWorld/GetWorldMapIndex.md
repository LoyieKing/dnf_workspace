# GetWorldMapIndex

`_ZN9GameWorld16GetWorldMapIndexEP5CUser`

`GameWorld::GetWorldMapIndex(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cebe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cebe0  _ZN9GameWorld16GetWorldMapIndexEP5CUser
#           GameWorld::GetWorldMapIndex(CUser*)
# range [0x086cebe0, 0x086cec83]
086cebe0 +0x00:  push   %ebp
086cebe1 +0x01:  mov    %esp,%ebp
086cebe3 +0x03:  sub    $0x28,%esp
086cebe6 +0x06:  cmpl   $0x0,0xc(%ebp)
086cebea +0x0a:  jne    086cebf6 <+0x16>
086cebec +0x0c:  mov    $0xffffffff,%eax
086cebf1 +0x11:  jmp    086cec82 <+0xa2>
086cebf6 +0x16:  mov    0xc(%ebp),%eax
086cebf9 +0x19:  mov    %eax,(%esp)
086cebfc +0x1c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086cec01 +0x21:  movsbl %al,%eax
086cec04 +0x24:  mov    %eax,-0x18(%ebp)
086cec07 +0x27:  movl   $0x0,0x4(%esp)
086cec0f +0x2f:  mov    0xc(%ebp),%eax
086cec12 +0x32:  mov    %eax,(%esp)
086cec15 +0x35:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086cec1a +0x3a:  mov    %eax,-0x14(%ebp)
086cec1d +0x3d:  mov    -0x14(%ebp),%eax
086cec20 +0x40:  mov    %eax,0x8(%esp)
086cec24 +0x44:  mov    -0x18(%ebp),%eax
086cec27 +0x47:  mov    %eax,0x4(%esp)
086cec2b +0x4b:  mov    0x8(%ebp),%eax
086cec2e +0x4e:  mov    %eax,(%esp)
086cec31 +0x51:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086cec36 +0x56:  test   %al,%al
086cec38 +0x58:  je     086cec7d <+0x9d>
086cec3a +0x5a:  mov    0xc(%ebp),%eax
086cec3d +0x5d:  mov    %eax,0x4(%esp)
086cec41 +0x61:  mov    0x8(%ebp),%eax
086cec44 +0x64:  mov    %eax,(%esp)
086cec47 +0x67:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086cec4c +0x6c:  mov    %eax,-0x10(%ebp)
086cec4f +0x6f:  cmpl   $0x0,-0x10(%ebp)
086cec53 +0x73:  je     086cec7d <+0x9d>
086cec55 +0x75:  mov    -0x14(%ebp),%eax
086cec58 +0x78:  mov    %eax,0x4(%esp)
086cec5c +0x7c:  mov    -0x10(%ebp),%eax
086cec5f +0x7f:  mov    %eax,(%esp)
086cec62 +0x82:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086cec67 +0x87:  mov    %eax,-0xc(%ebp)
086cec6a +0x8a:  cmpl   $0x0,-0xc(%ebp)
086cec6e +0x8e:  je     086cec7d <+0x9d>
086cec70 +0x90:  mov    -0xc(%ebp),%eax
086cec73 +0x93:  mov    %eax,(%esp)
086cec76 +0x96:  call   086d2398 <_GLOBAL__I_MAX_VILLAGE_NUM+0xbc9>  ; global constructors keyed to MAX_VILLAGE_NUM+0xbc9
086cec7b +0x9b:  jmp    086cec82 <+0xa2>
086cec7d +0x9d:  mov    $0xffffffff,%eax
086cec82 +0xa2:  leave
086cec83 +0xa3:  ret
```

## 反编译 C

```c
// GameWorld::GetWorldMapIndex @ 0x86cebe0

/* GameWorld::GetWorldMapIndex(CUser*) */

undefined4 __thiscall GameWorld::GetWorldMapIndex(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  Village *this_00;
  Area *this_01;
  undefined4 uVar3;
  
  if (param_1 != (CUser *)0x0) {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    iVar2 = CUser::get_area(param_1,false);
    cVar1 = check_valid_area(this,(int)cVar1,iVar2);
    if (((cVar1 != '\0') &&
        (this_00 = (Village *)getUserVillage(this,param_1), this_00 != (Village *)0x0)) &&
       (this_01 = (Area *)Village::getArea(this_00,iVar2), this_01 != (Area *)0x0)) {
      uVar3 = Area::get_world_map_index(this_01);
      return uVar3;
    }
  }
  return 0xffffffff;
}
```
