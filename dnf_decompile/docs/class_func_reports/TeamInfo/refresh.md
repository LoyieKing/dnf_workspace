# refresh

`_ZN8TeamInfo7refreshEv`

`TeamInfo::refresh()`

| 类 | 地址 |
|---|---|
| `TeamInfo` | `0x0855c9ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855c9ae  _ZN8TeamInfo7refreshEv
#           TeamInfo::refresh()
# range [0x0855c9ae, 0x0855cb15]
0855c9ae +0x000:  push   %ebp
0855c9af +0x001:  mov    %esp,%ebp
0855c9b1 +0x003:  push   %esi
0855c9b2 +0x004:  push   %ebx
0855c9b3 +0x005:  sub    $0x20,%esp
0855c9b6 +0x008:  movl   $0x0,-0xc(%ebp)
0855c9bd +0x00f:  jmp    0855cb00 <+0x152>
0855c9c2 +0x014:  mov    -0xc(%ebp),%eax
0855c9c5 +0x017:  mov    0x8(%ebp),%ecx
0855c9c8 +0x01a:  lea    0x0(,%eax,4),%edx
0855c9cf +0x021:  lea    0x0(,%edx,8),%eax
0855c9d6 +0x028:  sub    %edx,%eax
0855c9d8 +0x02a:  movzbl 0xc(%eax,%ecx,1),%eax
0855c9dd +0x02f:  test   %al,%al
0855c9df +0x031:  je     0855cafc <+0x14e>
0855c9e5 +0x037:  mov    -0xc(%ebp),%esi
0855c9e8 +0x03a:  mov    -0xc(%ebp),%eax
0855c9eb +0x03d:  mov    0x8(%ebp),%ecx
0855c9ee +0x040:  lea    0x0(,%eax,4),%edx
0855c9f5 +0x047:  lea    0x0(,%edx,8),%eax
0855c9fc +0x04e:  sub    %edx,%eax
0855c9fe +0x050:  lea    (%ecx,%eax,1),%eax
0855ca01 +0x053:  add    $0x8,%eax
0855ca04 +0x056:  mov    (%eax),%eax
0855ca06 +0x058:  mov    %eax,(%esp)
0855ca09 +0x05b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0855ca0e +0x060:  mov    %eax,%ecx
0855ca10 +0x062:  mov    0x8(%ebp),%ebx
0855ca13 +0x065:  mov    %esi,%eax
0855ca15 +0x067:  lea    0x0(,%eax,4),%edx
0855ca1c +0x06e:  lea    0x0(,%edx,8),%eax
0855ca23 +0x075:  sub    %edx,%eax
0855ca25 +0x077:  mov    %ecx,(%eax,%ebx,1)
0855ca28 +0x07a:  mov    -0xc(%ebp),%ebx
0855ca2b +0x07d:  mov    -0xc(%ebp),%eax
0855ca2e +0x080:  mov    0x8(%ebp),%ecx
0855ca31 +0x083:  lea    0x0(,%eax,4),%edx
0855ca38 +0x08a:  lea    0x0(,%edx,8),%eax
0855ca3f +0x091:  sub    %edx,%eax
0855ca41 +0x093:  lea    (%ecx,%eax,1),%eax
0855ca44 +0x096:  add    $0x8,%eax
0855ca47 +0x099:  mov    (%eax),%eax
0855ca49 +0x09b:  mov    %eax,(%esp)
0855ca4c +0x09e:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
0855ca51 +0x0a3:  mov    0x8(%ebp),%ecx
0855ca54 +0x0a6:  mov    %ebx,%eax
0855ca56 +0x0a8:  lea    0x0(,%eax,4),%edx
0855ca5d +0x0af:  lea    0x0(,%edx,8),%eax
0855ca64 +0x0b6:  sub    %edx,%eax
0855ca66 +0x0b8:  lea    (%ecx,%eax,1),%eax
0855ca69 +0x0bb:  add    $0x4,%eax
0855ca6c +0x0be:  fstps  (%eax)
0855ca6e +0x0c0:  mov    -0xc(%ebp),%esi
0855ca71 +0x0c3:  mov    -0xc(%ebp),%eax
0855ca74 +0x0c6:  mov    0x8(%ebp),%ecx
0855ca77 +0x0c9:  lea    0x0(,%eax,4),%edx
0855ca7e +0x0d0:  lea    0x0(,%edx,8),%eax
0855ca85 +0x0d7:  sub    %edx,%eax
0855ca87 +0x0d9:  lea    (%ecx,%eax,1),%eax
0855ca8a +0x0dc:  add    $0x8,%eax
0855ca8d +0x0df:  mov    (%eax),%eax
0855ca8f +0x0e1:  mov    %eax,(%esp)
0855ca92 +0x0e4:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0855ca97 +0x0e9:  mov    %eax,%ecx
0855ca99 +0x0eb:  mov    0x8(%ebp),%ebx
0855ca9c +0x0ee:  mov    %esi,%eax
0855ca9e +0x0f0:  lea    0x0(,%eax,4),%edx
0855caa5 +0x0f7:  lea    0x0(,%edx,8),%eax
0855caac +0x0fe:  sub    %edx,%eax
0855caae +0x100:  lea    (%ebx,%eax,1),%eax
0855cab1 +0x103:  add    $0x10,%eax
0855cab4 +0x106:  mov    %ecx,(%eax)
0855cab6 +0x108:  mov    -0xc(%ebp),%eax
0855cab9 +0x10b:  lea    0x0(,%eax,4),%edx
0855cac0 +0x112:  lea    0x0(,%edx,8),%eax
0855cac7 +0x119:  sub    %edx,%eax
0855cac9 +0x11b:  add    $0x10,%eax
0855cacc +0x11e:  add    0x8(%ebp),%eax
0855cacf +0x121:  lea    0x4(%eax),%ecx
0855cad2 +0x124:  mov    -0xc(%ebp),%eax
0855cad5 +0x127:  mov    0x8(%ebp),%ebx
0855cad8 +0x12a:  lea    0x0(,%eax,4),%edx
0855cadf +0x131:  lea    0x0(,%edx,8),%eax
0855cae6 +0x138:  sub    %edx,%eax
0855cae8 +0x13a:  lea    (%ebx,%eax,1),%eax
0855caeb +0x13d:  add    $0x8,%eax
0855caee +0x140:  mov    (%eax),%eax
0855caf0 +0x142:  mov    %ecx,0x4(%esp)
0855caf4 +0x146:  mov    %eax,(%esp)
0855caf7 +0x149:  call   08568e0c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7d6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7d6
0855cafc +0x14e:  addl   $0x1,-0xc(%ebp)
0855cb00 +0x152:  cmpl   $0x3,-0xc(%ebp)
0855cb04 +0x156:  setle  %al
0855cb07 +0x159:  test   %al,%al
0855cb09 +0x15b:  jne    0855c9c2 <+0x14>
0855cb0f +0x161:  add    $0x20,%esp
0855cb12 +0x164:  pop    %ebx
0855cb13 +0x165:  pop    %esi
0855cb14 +0x166:  pop    %ebp
0855cb15 +0x167:  ret
```

## 反编译 C

```c
// TeamInfo::refresh @ 0x855c9ae

/* TeamInfo::refresh() */

void __thiscall TeamInfo::refresh(TeamInfo *this)

{
  undefined4 uVar1;
  longdouble lVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (this[local_10 * 0x1c + 0xc] != (TeamInfo)0x0) {
      uVar1 = CUser::get_acc_id(*(CUser **)(this + local_10 * 0x1c + 8));
      *(undefined4 *)(this + local_10 * 0x1c) = uVar1;
      lVar2 = (longdouble)CUser::GetRating(*(CUser **)(this + local_10 * 0x1c + 8));
      *(float *)(this + local_10 * 0x1c + 4) = (float)lVar2;
      uVar1 = CUser::GetSchoolNo(*(CUser **)(this + local_10 * 0x1c + 8));
      *(undefined4 *)(this + local_10 * 0x1c + 0x10) = uVar1;
      CUser::GetDailyBadge
                (*(CUser **)(this + local_10 * 0x1c + 8),(short *)(this + local_10 * 0x1c + 0x14));
    }
  }
  return;
}
```
