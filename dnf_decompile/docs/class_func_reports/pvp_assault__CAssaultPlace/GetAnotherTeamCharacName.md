# GetAnotherTeamCharacName

`_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi`

`pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb3ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb3ba  _ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi
#           pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(int)
# range [0x082eb3ba, 0x082eb44f]
082eb3ba +0x00:  push   %ebp
082eb3bb +0x01:  mov    %esp,%ebp
082eb3bd +0x03:  push   %ebx
082eb3be +0x04:  sub    $0x24,%esp
082eb3c1 +0x07:  mov    0xc(%ebp),%eax
082eb3c4 +0x0a:  shl    $0x5,%eax
082eb3c7 +0x0d:  add    0x8(%ebp),%eax
082eb3ca +0x10:  mov    %eax,(%esp)
082eb3cd +0x13:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eb3d2 +0x18:  xor    $0x1,%eax
082eb3d5 +0x1b:  test   %al,%al
082eb3d7 +0x1d:  je     082eb445 <+0x8b>
082eb3d9 +0x1f:  movl   $0x0,-0x10(%ebp)
082eb3e0 +0x26:  jmp    082eb43a <+0x80>
082eb3e2 +0x28:  mov    -0x10(%ebp),%eax
082eb3e5 +0x2b:  shl    $0x5,%eax
082eb3e8 +0x2e:  add    0x8(%ebp),%eax
082eb3eb +0x31:  mov    %eax,(%esp)
082eb3ee +0x34:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082eb3f3 +0x39:  mov    %eax,%ebx
082eb3f5 +0x3b:  mov    0xc(%ebp),%eax
082eb3f8 +0x3e:  shl    $0x5,%eax
082eb3fb +0x41:  add    0x8(%ebp),%eax
082eb3fe +0x44:  mov    %eax,(%esp)
082eb401 +0x47:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082eb406 +0x4c:  cmp    %eax,%ebx
082eb408 +0x4e:  setne  %al
082eb40b +0x51:  test   %al,%al
082eb40d +0x53:  je     082eb436 <+0x7c>
082eb40f +0x55:  mov    -0x10(%ebp),%eax
082eb412 +0x58:  shl    $0x5,%eax
082eb415 +0x5b:  add    0x8(%ebp),%eax
082eb418 +0x5e:  mov    %eax,(%esp)
082eb41b +0x61:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb420 +0x66:  mov    %eax,-0xc(%ebp)
082eb423 +0x69:  cmpl   $0x0,-0xc(%ebp)
082eb427 +0x6d:  je     082eb436 <+0x7c>
082eb429 +0x6f:  mov    -0xc(%ebp),%eax
082eb42c +0x72:  mov    %eax,(%esp)
082eb42f +0x75:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082eb434 +0x7a:  jmp    082eb44a <+0x90>
082eb436 +0x7c:  addl   $0x1,-0x10(%ebp)
082eb43a +0x80:  cmpl   $0x7,-0x10(%ebp)
082eb43e +0x84:  setle  %al
082eb441 +0x87:  test   %al,%al
082eb443 +0x89:  jne    082eb3e2 <+0x28>
082eb445 +0x8b:  mov    $"",%eax
082eb44a +0x90:  add    $0x24,%esp
082eb44d +0x93:  pop    %ebx
082eb44e +0x94:  pop    %ebp
082eb44f +0x95:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::GetAnotherTeamCharacName @ 0x82eb3ba

/* pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(int) */

undefined * __thiscall
pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(CAssaultPlace *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CUserCharacInfo *this_00;
  undefined *puVar4;
  int local_14;
  
  cVar1 = CAssaulter::Empty((CAssaulter *)(this + param_1 * 0x20));
  if (cVar1 != '\x01') {
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
      if ((iVar2 != iVar3) &&
         (this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20)),
         this_00 != (CUserCharacInfo *)0x0)) {
        puVar4 = (undefined *)CUserCharacInfo::getCurCharacName(this_00);
        return puVar4;
      }
    }
  }
  return &DAT_08c1bca0;
}
```
