# join_user

`_ZN6CParty9join_userEP5CUser`

`CParty::join_user(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b2b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b2b6  _ZN6CParty9join_userEP5CUser
#           CParty::join_user(CUser*)
# range [0x0859b2b6, 0x0859b3e3]
0859b2b6 +0x000:  push   %ebp
0859b2b7 +0x001:  mov    %esp,%ebp
0859b2b9 +0x003:  push   %ebx
0859b2ba +0x004:  sub    $0x34,%esp
0859b2bd +0x007:  cmpl   $0x0,0xc(%ebp)
0859b2c1 +0x00b:  jne    0859b2f9 <+0x43>
0859b2c3 +0x00d:  movl   $"Null user",0x10(%esp)
0859b2cb +0x015:  movl   $0x419,0xc(%esp)
0859b2d3 +0x01d:  movl   $&_ZZN6CParty9join_userEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0859b2db +0x025:  movl   $"party.cpp",0x4(%esp)
0859b2e3 +0x02d:  movl   $0x1,(%esp)
0859b2ea +0x034:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859b2ef +0x039:  mov    $0xffffffff,%eax
0859b2f4 +0x03e:  jmp    0859b3de <+0x128>
0859b2f9 +0x043:  mov    0x8(%ebp),%eax
0859b2fc +0x046:  movzbl 0x6a(%eax),%eax
0859b300 +0x04a:  cmp    $0x2,%al
0859b302 +0x04c:  jne    0859b30e <+0x58>
0859b304 +0x04e:  mov    $0xfffffffe,%eax
0859b309 +0x053:  jmp    0859b3de <+0x128>
0859b30e +0x058:  mov    0x8(%ebp),%eax
0859b311 +0x05b:  mov    %eax,(%esp)
0859b314 +0x05e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859b319 +0x063:  mov    0x8(%ebp),%edx
0859b31c +0x066:  movzbl 0x13d(%edx),%edx
0859b323 +0x06d:  movzbl %dl,%edx
0859b326 +0x070:  cmp    %edx,%eax
0859b328 +0x072:  setge  %al
0859b32b +0x075:  test   %al,%al
0859b32d +0x077:  je     0859b339 <+0x83>
0859b32f +0x079:  mov    $0xffffffff,%eax
0859b334 +0x07e:  jmp    0859b3de <+0x128>
0859b339 +0x083:  movl   $0x0,-0xc(%ebp)
0859b340 +0x08a:  jmp    0859b3ca <+0x114>
0859b345 +0x08f:  mov    -0xc(%ebp),%edx
0859b348 +0x092:  mov    0x8(%ebp),%ecx
0859b34b +0x095:  mov    %edx,%eax
0859b34d +0x097:  add    %eax,%eax
0859b34f +0x099:  add    %edx,%eax
0859b351 +0x09b:  shl    $0x3,%eax
0859b354 +0x09e:  lea    (%ecx,%eax,1),%eax
0859b357 +0x0a1:  add    $0x78,%eax
0859b35a +0x0a4:  mov    (%eax),%eax
0859b35c +0x0a6:  test   %eax,%eax
0859b35e +0x0a8:  jne    0859b3c6 <+0x110>
0859b360 +0x0aa:  mov    -0xc(%ebp),%edx
0859b363 +0x0ad:  mov    0x8(%ebp),%ecx
0859b366 +0x0b0:  mov    %edx,%eax
0859b368 +0x0b2:  add    %eax,%eax
0859b36a +0x0b4:  add    %edx,%eax
0859b36c +0x0b6:  shl    $0x3,%eax
0859b36f +0x0b9:  lea    (%ecx,%eax,1),%eax
0859b372 +0x0bc:  lea    0x78(%eax),%edx
0859b375 +0x0bf:  mov    0xc(%ebp),%eax
0859b378 +0x0c2:  mov    %eax,(%edx)
0859b37a +0x0c4:  mov    -0xc(%ebp),%ebx
0859b37d +0x0c7:  mov    0xc(%ebp),%eax
0859b380 +0x0ca:  mov    %eax,(%esp)
0859b383 +0x0cd:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0859b388 +0x0d2:  mov    %eax,%edx
0859b38a +0x0d4:  mov    0x8(%ebp),%ecx
0859b38d +0x0d7:  mov    %ebx,%eax
0859b38f +0x0d9:  add    %eax,%eax
0859b391 +0x0db:  add    %ebx,%eax
0859b393 +0x0dd:  shl    $0x3,%eax
0859b396 +0x0e0:  lea    (%ecx,%eax,1),%eax
0859b399 +0x0e3:  sub    $0xffffff80,%eax
0859b39c +0x0e6:  mov    %edx,(%eax)
0859b39e +0x0e8:  mov    0x8(%ebp),%eax
0859b3a1 +0x0eb:  mov    0x64(%eax),%eax
0859b3a4 +0x0ee:  cwtl
0859b3a5 +0x0ef:  mov    %eax,0x4(%esp)
0859b3a9 +0x0f3:  mov    0xc(%ebp),%eax
0859b3ac +0x0f6:  mov    %eax,(%esp)
0859b3af +0x0f9:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b3b4 +0x0fe:  mov    0xc(%ebp),%eax
0859b3b7 +0x101:  mov    %eax,(%esp)
0859b3ba +0x104:  call   082f0a5c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7e0
0859b3bf +0x109:  mov    $0x1,%eax
0859b3c4 +0x10e:  jmp    0859b3de <+0x128>
0859b3c6 +0x110:  addl   $0x1,-0xc(%ebp)
0859b3ca +0x114:  cmpl   $0x3,-0xc(%ebp)
0859b3ce +0x118:  setle  %al
0859b3d1 +0x11b:  test   %al,%al
0859b3d3 +0x11d:  jne    0859b345 <+0x8f>
0859b3d9 +0x123:  mov    $0x0,%eax
0859b3de +0x128:  add    $0x34,%esp
0859b3e1 +0x12b:  pop    %ebx
0859b3e2 +0x12c:  pop    %ebp
0859b3e3 +0x12d:  ret
```

## 反编译 C

```c
// CParty::join_user @ 0x859b2b6

/* CParty::join_user(CUser*) */

undefined4 __thiscall CParty::join_user(CParty *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat(1,"party.cpp","int CParty::join_user(CUser*)",0x419,"Null user");
    uVar1 = 0xffffffff;
  }
  else if (this[0x6a] == (CParty)0x2) {
    uVar1 = 0xfffffffe;
  }
  else {
    iVar2 = get_member_count(this);
    if (iVar2 < (int)(uint)(byte)this[0x13d]) {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if (*(int *)(this + local_10 * 0x18 + 0x78) == 0) {
          *(CUser **)(this + local_10 * 0x18 + 0x78) = param_1;
          uVar1 = CUser::GetUID(param_1);
          *(undefined4 *)(this + local_10 * 0x18 + 0x80) = uVar1;
          CUser::SetPartyIndex(param_1,(short)*(undefined4 *)(this + 100));
          CUserCharacInfo::resetStraightVictories((CUserCharacInfo *)param_1);
          return 1;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
