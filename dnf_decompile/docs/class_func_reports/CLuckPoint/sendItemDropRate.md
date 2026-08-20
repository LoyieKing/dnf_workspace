# sendItemDropRate

`_ZN10CLuckPoint16sendItemDropRateEPKc`

`CLuckPoint::sendItemDropRate(char const*)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550ef0  _ZN10CLuckPoint16sendItemDropRateEPKc
#           CLuckPoint::sendItemDropRate(char const*)
# range [0x08550ef0, 0x08550f6c]
08550ef0 +0x00:  push   %ebp
08550ef1 +0x01:  mov    %esp,%ebp
08550ef3 +0x03:  sub    $0x28,%esp
08550ef6 +0x06:  movl   $0x0,-0x10(%ebp)
08550efd +0x0d:  jmp    08550f56 <+0x66>
08550eff +0x0f:  mov    0x8(%ebp),%eax
08550f02 +0x12:  mov    -0x10(%ebp),%edx
08550f05 +0x15:  mov    %edx,0x4(%esp)
08550f09 +0x19:  mov    %eax,(%esp)
08550f0c +0x1c:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550f11 +0x21:  mov    (%eax),%eax
08550f13 +0x23:  mov    %eax,-0xc(%ebp)
08550f16 +0x26:  cmpl   $0x0,-0xc(%ebp)
08550f1a +0x2a:  je     08550f52 <+0x62>
08550f1c +0x2c:  mov    -0xc(%ebp),%eax
08550f1f +0x2f:  mov    %eax,(%esp)
08550f22 +0x32:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08550f27 +0x37:  test   %eax,%eax
08550f29 +0x39:  setne  %al
08550f2c +0x3c:  test   %al,%al
08550f2e +0x3e:  je     08550f52 <+0x62>
08550f30 +0x40:  mov    -0xc(%ebp),%eax
08550f33 +0x43:  mov    %eax,(%esp)
08550f36 +0x46:  call   0855105e <_GLOBAL__I__ZN10CLuckPointC2Ev+0xb1>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xb1
08550f3b +0x4b:  mov    (%eax),%edx
08550f3d +0x4d:  mov    (%edx),%ecx
08550f3f +0x4f:  mov    0xc(%ebp),%edx
08550f42 +0x52:  mov    %edx,0x8(%esp)
08550f46 +0x56:  mov    -0xc(%ebp),%edx
08550f49 +0x59:  mov    %edx,0x4(%esp)
08550f4d +0x5d:  mov    %eax,(%esp)
08550f50 +0x60:  call   *%ecx
08550f52 +0x62:  addl   $0x1,-0x10(%ebp)
08550f56 +0x66:  mov    0x8(%ebp),%eax
08550f59 +0x69:  mov    %eax,(%esp)
08550f5c +0x6c:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550f61 +0x71:  cmp    -0x10(%ebp),%eax
08550f64 +0x74:  seta   %al
08550f67 +0x77:  test   %al,%al
08550f69 +0x79:  jne    08550eff <+0xf>
08550f6b +0x7b:  leave
08550f6c +0x7c:  ret
```

## 反编译 C

```c
// CLuckPoint::sendItemDropRate @ 0x8550ef0

/* CLuckPoint::sendItemDropRate(char const*) */

void __thiscall CLuckPoint::sendItemDropRate(CLuckPoint *this,char *param_1)

{
  CUserCharacInfo *this_00;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  
  local_14 = 0;
  while( true ) {
    uVar3 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    if (uVar3 <= local_14) break;
    puVar1 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)this,local_14);
    this_00 = (CUserCharacInfo *)*puVar1;
    if (this_00 != (CUserCharacInfo *)0x0) {
      iVar2 = CUserCharacInfo::getCurCharacR(this_00);
      if (iVar2 != 0) {
        puVar1 = (undefined4 *)CUser::GetGameMasterCharacter((CUser *)this_00);
        (**(code **)*puVar1)(puVar1,this_00,param_1);
      }
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
