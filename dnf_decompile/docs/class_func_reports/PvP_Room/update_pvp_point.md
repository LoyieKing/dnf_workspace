# update_pvp_point

`_ZN8PvP_Room16update_pvp_pointEv`

`PvP_Room::update_pvp_point()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc866  _ZN8PvP_Room16update_pvp_pointEv
#           PvP_Room::update_pvp_point()
# range [0x085dc866, 0x085dca47]
085dc866 +0x000:  push   %ebp
085dc867 +0x001:  mov    %esp,%ebp
085dc869 +0x003:  push   %ebx
085dc86a +0x004:  sub    $0x24,%esp
085dc86d +0x007:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dc872 +0x00c:  mov    %eax,(%esp)
085dc875 +0x00f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085dc87a +0x014:  test   %al,%al
085dc87c +0x016:  je     085dc8ec <+0x86>
085dc87e +0x018:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dc883 +0x01d:  mov    %eax,(%esp)
085dc886 +0x020:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
085dc88b +0x025:  test   %al,%al
085dc88d +0x027:  je     085dc8ec <+0x86>
085dc88f +0x029:  movl   $0x0,-0x14(%ebp)
085dc896 +0x030:  jmp    085dc8dc <+0x76>
085dc898 +0x032:  mov    -0x14(%ebp),%edx
085dc89b +0x035:  mov    0x8(%ebp),%eax
085dc89e +0x038:  add    $0xc,%edx
085dc8a1 +0x03b:  mov    (%eax,%edx,4),%eax
085dc8a4 +0x03e:  test   %eax,%eax
085dc8a6 +0x040:  je     085dc8d4 <+0x6e>
085dc8a8 +0x042:  mov    -0x14(%ebp),%eax
085dc8ab +0x045:  mov    %eax,0x4(%esp)
085dc8af +0x049:  mov    0x8(%ebp),%eax
085dc8b2 +0x04c:  mov    %eax,(%esp)
085dc8b5 +0x04f:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dc8ba +0x054:  test   %al,%al
085dc8bc +0x056:  jne    085dc8d7 <+0x71>
085dc8be +0x058:  mov    -0x14(%ebp),%edx
085dc8c1 +0x05b:  mov    0x8(%ebp),%eax
085dc8c4 +0x05e:  add    $0xc,%edx
085dc8c7 +0x061:  mov    (%eax,%edx,4),%eax
085dc8ca +0x064:  mov    %eax,(%esp)
085dc8cd +0x067:  call   0865cfac <_ZN5CUser20update_old_pvp_pointEv>  ; CUser::update_old_pvp_point()
085dc8d2 +0x06c:  jmp    085dc8d8 <+0x72>
085dc8d4 +0x06e:  nop
085dc8d5 +0x06f:  jmp    085dc8d8 <+0x72>
085dc8d7 +0x071:  nop
085dc8d8 +0x072:  addl   $0x1,-0x14(%ebp)
085dc8dc +0x076:  cmpl   $0x7,-0x14(%ebp)
085dc8e0 +0x07a:  setle  %al
085dc8e3 +0x07d:  test   %al,%al
085dc8e5 +0x07f:  jne    085dc898 <+0x32>
085dc8e7 +0x081:  jmp    085dca42 <+0x1dc>
085dc8ec +0x086:  movl   $0x0,-0x10(%ebp)
085dc8f3 +0x08d:  jmp    085dca33 <+0x1cd>
085dc8f8 +0x092:  mov    -0x10(%ebp),%edx
085dc8fb +0x095:  mov    0x8(%ebp),%eax
085dc8fe +0x098:  add    $0xc,%edx
085dc901 +0x09b:  mov    (%eax,%edx,4),%eax
085dc904 +0x09e:  test   %eax,%eax
085dc906 +0x0a0:  je     085dca2b <+0x1c5>
085dc90c +0x0a6:  mov    -0x10(%ebp),%eax
085dc90f +0x0a9:  mov    %eax,0x4(%esp)
085dc913 +0x0ad:  mov    0x8(%ebp),%eax
085dc916 +0x0b0:  mov    %eax,(%esp)
085dc919 +0x0b3:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085dc91e +0x0b8:  test   %al,%al
085dc920 +0x0ba:  jne    085dca2e <+0x1c8>
085dc926 +0x0c0:  mov    -0x10(%ebp),%edx
085dc929 +0x0c3:  mov    0x8(%ebp),%eax
085dc92c +0x0c6:  add    $0xc,%edx
085dc92f +0x0c9:  mov    (%eax,%edx,4),%eax
085dc932 +0x0cc:  mov    %eax,(%esp)
085dc935 +0x0cf:  call   0865cfac <_ZN5CUser20update_old_pvp_pointEv>  ; CUser::update_old_pvp_point()
085dc93a +0x0d4:  mov    0x8(%ebp),%eax
085dc93d +0x0d7:  mov    0x4(%eax),%eax
085dc940 +0x0da:  cmp    $0x1,%eax
085dc943 +0x0dd:  je     085dc950 <+0xea>
085dc945 +0x0df:  mov    0x8(%ebp),%eax
085dc948 +0x0e2:  mov    0x4(%eax),%eax
085dc94b +0x0e5:  cmp    $0x4,%eax
085dc94e +0x0e8:  jne    085dc9a5 <+0x13f>
085dc950 +0x0ea:  mov    -0x10(%ebp),%edx
085dc953 +0x0ed:  mov    0x8(%ebp),%eax
085dc956 +0x0f0:  add    $0xc,%edx
085dc959 +0x0f3:  mov    (%eax,%edx,4),%eax
085dc95c +0x0f6:  mov    %eax,(%esp)
085dc95f +0x0f9:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085dc964 +0x0fe:  mov    0x8(%ebp),%edx
085dc967 +0x101:  add    $0x268,%edx
085dc96d +0x107:  mov    %eax,0xc(%esp)
085dc971 +0x10b:  movl   $0x0,0x8(%esp)
085dc979 +0x113:  mov    -0x10(%ebp),%eax
085dc97c +0x116:  mov    %eax,0x4(%esp)
085dc980 +0x11a:  mov    %edx,(%esp)
085dc983 +0x11d:  call   085d5064 <_ZN12PvpUserTable9GetResultEibi>  ; PvpUserTable::GetResult(int, bool, int)
085dc988 +0x122:  mov    -0x10(%ebp),%ecx
085dc98b +0x125:  mov    0x8(%ebp),%edx
085dc98e +0x128:  add    $0xc,%ecx
085dc991 +0x12b:  mov    (%edx,%ecx,4),%edx
085dc994 +0x12e:  mov    %eax,0x4(%esp)
085dc998 +0x132:  mov    %edx,(%esp)
085dc99b +0x135:  call   0865cfd8 <_ZN5CUser16update_pvp_pointEi>  ; CUser::update_pvp_point(int)
085dc9a0 +0x13a:  jmp    085dca2f <+0x1c9>
085dc9a5 +0x13f:  movb   $0x0,-0x9(%ebp)
085dc9a9 +0x143:  mov    -0x10(%ebp),%edx
085dc9ac +0x146:  mov    0x8(%ebp),%eax
085dc9af +0x149:  add    $0xc,%edx
085dc9b2 +0x14c:  mov    (%eax,%edx,4),%eax
085dc9b5 +0x14f:  mov    %eax,(%esp)
085dc9b8 +0x152:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085dc9bd +0x157:  cmp    $0xa,%eax
085dc9c0 +0x15a:  setg   %al
085dc9c3 +0x15d:  test   %al,%al
085dc9c5 +0x15f:  je     085dc9cb <+0x165>
085dc9c7 +0x161:  movb   $0x1,-0x9(%ebp)
085dc9cb +0x165:  mov    -0x10(%ebp),%edx
085dc9ce +0x168:  mov    0x8(%ebp),%eax
085dc9d1 +0x16b:  add    $0xc,%edx
085dc9d4 +0x16e:  mov    (%eax,%edx,4),%eax
085dc9d7 +0x171:  mov    %eax,(%esp)
085dc9da +0x174:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085dc9df +0x179:  movzbl -0x9(%ebp),%ecx
085dc9e3 +0x17d:  mov    -0x10(%ebp),%edx
085dc9e6 +0x180:  mov    0x8(%ebp),%ebx
085dc9e9 +0x183:  movzbl 0x5d0(%ebx,%edx,1),%edx
085dc9f1 +0x18b:  movzbl %dl,%edx
085dc9f4 +0x18e:  mov    0x8(%ebp),%ebx
085dc9f7 +0x191:  add    $0x268,%ebx
085dc9fd +0x197:  mov    %eax,0xc(%esp)
085dca01 +0x19b:  mov    %ecx,0x8(%esp)
085dca05 +0x19f:  mov    %edx,0x4(%esp)
085dca09 +0x1a3:  mov    %ebx,(%esp)
085dca0c +0x1a6:  call   085d5064 <_ZN12PvpUserTable9GetResultEibi>  ; PvpUserTable::GetResult(int, bool, int)
085dca11 +0x1ab:  mov    -0x10(%ebp),%ecx
085dca14 +0x1ae:  mov    0x8(%ebp),%edx
085dca17 +0x1b1:  add    $0xc,%ecx
085dca1a +0x1b4:  mov    (%edx,%ecx,4),%edx
085dca1d +0x1b7:  mov    %eax,0x4(%esp)
085dca21 +0x1bb:  mov    %edx,(%esp)
085dca24 +0x1be:  call   0865cfd8 <_ZN5CUser16update_pvp_pointEi>  ; CUser::update_pvp_point(int)
085dca29 +0x1c3:  jmp    085dca2f <+0x1c9>
085dca2b +0x1c5:  nop
085dca2c +0x1c6:  jmp    085dca2f <+0x1c9>
085dca2e +0x1c8:  nop
085dca2f +0x1c9:  addl   $0x1,-0x10(%ebp)
085dca33 +0x1cd:  cmpl   $0x7,-0x10(%ebp)
085dca37 +0x1d1:  setle  %al
085dca3a +0x1d4:  test   %al,%al
085dca3c +0x1d6:  jne    085dc8f8 <+0x92>
085dca42 +0x1dc:  add    $0x24,%esp
085dca45 +0x1df:  pop    %ebx
085dca46 +0x1e0:  pop    %ebp
085dca47 +0x1e1:  ret
```

## 反编译 C

```c
// PvP_Room::update_pvp_point @ 0x85dc866

/* PvP_Room::update_pvp_point() */

void __thiscall PvP_Room::update_pvp_point(PvP_Room *this)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if (cVar1 != '\0') {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsFreePvPChannel(pGVar2);
    if (cVar1 != '\0') {
      for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
        if ((*(int *)(this + (local_18 + 0xc) * 4) != 0) &&
           (cVar1 = IsPvpObserver(this,local_18), cVar1 == '\0')) {
          CUser::update_old_pvp_point(*(CUser **)(this + (local_18 + 0xc) * 4));
        }
      }
      return;
    }
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((*(int *)(this + (local_14 + 0xc) * 4) != 0) &&
       (cVar1 = IsPvpObserver(this,local_14), cVar1 == '\0')) {
      CUser::update_old_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4));
      if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
        iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar3 = PvpUserTable::GetResult((PvpUserTable *)(this + 0x268),local_14,false,iVar3);
        CUser::update_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4),iVar3);
      }
      else {
        iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar4 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar3 = PvpUserTable::GetResult
                          ((PvpUserTable *)(this + 0x268),(uint)(byte)this[local_14 + 0x5d0],
                           10 < iVar3,iVar4);
        CUser::update_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4),iVar3);
      }
    }
  }
  return;
}
```
