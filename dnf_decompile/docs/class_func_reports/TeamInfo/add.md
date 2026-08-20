# add

`_ZN8TeamInfo3addEP5CUser`

`TeamInfo::add(CUser*)`

| 类 | 地址 |
|---|---|
| `TeamInfo` | `0x0855cb54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cb54  _ZN8TeamInfo3addEP5CUser
#           TeamInfo::add(CUser*)
# range [0x0855cb54, 0x0855cc9b]
0855cb54 +0x000:  push   %ebp
0855cb55 +0x001:  mov    %esp,%ebp
0855cb57 +0x003:  push   %esi
0855cb58 +0x004:  push   %ebx
0855cb59 +0x005:  sub    $0x20,%esp
0855cb5c +0x008:  movl   $0x0,-0xc(%ebp)
0855cb63 +0x00f:  jmp    0855cc80 <+0x12c>
0855cb68 +0x014:  mov    -0xc(%ebp),%eax
0855cb6b +0x017:  mov    0x8(%ebp),%ecx
0855cb6e +0x01a:  lea    0x0(,%eax,4),%edx
0855cb75 +0x021:  lea    0x0(,%edx,8),%eax
0855cb7c +0x028:  sub    %edx,%eax
0855cb7e +0x02a:  movzbl 0xc(%eax,%ecx,1),%eax
0855cb83 +0x02f:  xor    $0x1,%eax
0855cb86 +0x032:  test   %al,%al
0855cb88 +0x034:  je     0855cc7c <+0x128>
0855cb8e +0x03a:  mov    -0xc(%ebp),%eax
0855cb91 +0x03d:  mov    0x8(%ebp),%ecx
0855cb94 +0x040:  lea    0x0(,%eax,4),%edx
0855cb9b +0x047:  lea    0x0(,%edx,8),%eax
0855cba2 +0x04e:  sub    %edx,%eax
0855cba4 +0x050:  movb   $0x1,0xc(%eax,%ecx,1)
0855cba9 +0x055:  mov    -0xc(%ebp),%eax
0855cbac +0x058:  mov    0x8(%ebp),%ecx
0855cbaf +0x05b:  lea    0x0(,%eax,4),%edx
0855cbb6 +0x062:  lea    0x0(,%edx,8),%eax
0855cbbd +0x069:  sub    %edx,%eax
0855cbbf +0x06b:  lea    (%ecx,%eax,1),%eax
0855cbc2 +0x06e:  lea    0x8(%eax),%edx
0855cbc5 +0x071:  mov    0xc(%ebp),%eax
0855cbc8 +0x074:  mov    %eax,(%edx)
0855cbca +0x076:  mov    -0xc(%ebp),%esi
0855cbcd +0x079:  mov    0xc(%ebp),%eax
0855cbd0 +0x07c:  mov    %eax,(%esp)
0855cbd3 +0x07f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0855cbd8 +0x084:  mov    %eax,%ecx
0855cbda +0x086:  mov    0x8(%ebp),%ebx
0855cbdd +0x089:  mov    %esi,%eax
0855cbdf +0x08b:  lea    0x0(,%eax,4),%edx
0855cbe6 +0x092:  lea    0x0(,%edx,8),%eax
0855cbed +0x099:  sub    %edx,%eax
0855cbef +0x09b:  mov    %ecx,(%eax,%ebx,1)
0855cbf2 +0x09e:  mov    -0xc(%ebp),%ebx
0855cbf5 +0x0a1:  mov    0xc(%ebp),%eax
0855cbf8 +0x0a4:  mov    %eax,(%esp)
0855cbfb +0x0a7:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
0855cc00 +0x0ac:  mov    0x8(%ebp),%ecx
0855cc03 +0x0af:  mov    %ebx,%eax
0855cc05 +0x0b1:  lea    0x0(,%eax,4),%edx
0855cc0c +0x0b8:  lea    0x0(,%edx,8),%eax
0855cc13 +0x0bf:  sub    %edx,%eax
0855cc15 +0x0c1:  lea    (%ecx,%eax,1),%eax
0855cc18 +0x0c4:  add    $0x4,%eax
0855cc1b +0x0c7:  fstps  (%eax)
0855cc1d +0x0c9:  mov    -0xc(%ebp),%esi
0855cc20 +0x0cc:  mov    0xc(%ebp),%eax
0855cc23 +0x0cf:  mov    %eax,(%esp)
0855cc26 +0x0d2:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0855cc2b +0x0d7:  mov    %eax,%ecx
0855cc2d +0x0d9:  mov    0x8(%ebp),%ebx
0855cc30 +0x0dc:  mov    %esi,%eax
0855cc32 +0x0de:  lea    0x0(,%eax,4),%edx
0855cc39 +0x0e5:  lea    0x0(,%edx,8),%eax
0855cc40 +0x0ec:  sub    %edx,%eax
0855cc42 +0x0ee:  lea    (%ebx,%eax,1),%eax
0855cc45 +0x0f1:  add    $0x10,%eax
0855cc48 +0x0f4:  mov    %ecx,(%eax)
0855cc4a +0x0f6:  mov    -0xc(%ebp),%eax
0855cc4d +0x0f9:  lea    0x0(,%eax,4),%edx
0855cc54 +0x100:  lea    0x0(,%edx,8),%eax
0855cc5b +0x107:  sub    %edx,%eax
0855cc5d +0x109:  add    $0x10,%eax
0855cc60 +0x10c:  add    0x8(%ebp),%eax
0855cc63 +0x10f:  add    $0x4,%eax
0855cc66 +0x112:  mov    %eax,0x4(%esp)
0855cc6a +0x116:  mov    0xc(%ebp),%eax
0855cc6d +0x119:  mov    %eax,(%esp)
0855cc70 +0x11c:  call   08568e0c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7d6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7d6
0855cc75 +0x121:  mov    $0x1,%eax
0855cc7a +0x126:  jmp    0855cc94 <+0x140>
0855cc7c +0x128:  addl   $0x1,-0xc(%ebp)
0855cc80 +0x12c:  cmpl   $0x3,-0xc(%ebp)
0855cc84 +0x130:  setle  %al
0855cc87 +0x133:  test   %al,%al
0855cc89 +0x135:  jne    0855cb68 <+0x14>
0855cc8f +0x13b:  mov    $0x0,%eax
0855cc94 +0x140:  add    $0x20,%esp
0855cc97 +0x143:  pop    %ebx
0855cc98 +0x144:  pop    %esi
0855cc99 +0x145:  pop    %ebp
0855cc9a +0x146:  ret
0855cc9b +0x147:  nop
```

## 反编译 C

```c
// TeamInfo::add @ 0x855cb54

/* TeamInfo::add(CUser*) */

undefined4 __thiscall TeamInfo::add(TeamInfo *this,CUser *param_1)

{
  undefined4 uVar1;
  longdouble lVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    if (this[local_10 * 0x1c + 0xc] != (TeamInfo)0x1) break;
    local_10 = local_10 + 1;
  }
  this[local_10 * 0x1c + 0xc] = (TeamInfo)0x1;
  *(CUser **)(this + local_10 * 0x1c + 8) = param_1;
  uVar1 = CUser::get_acc_id(param_1);
  *(undefined4 *)(this + local_10 * 0x1c) = uVar1;
  lVar2 = (longdouble)CUser::GetRating(param_1);
  *(float *)(this + local_10 * 0x1c + 4) = (float)lVar2;
  uVar1 = CUser::GetSchoolNo(param_1);
  *(undefined4 *)(this + local_10 * 0x1c + 0x10) = uVar1;
  CUser::GetDailyBadge(param_1,(short *)(this + local_10 * 0x1c + 0x14));
  return 1;
}
```
