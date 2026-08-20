# _MoveUser

`_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii`

`pvp_assault::CAssaultPlace::_MoveUser(pvp_assault::CDisposition*, int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e782a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e782a  _ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii
#           pvp_assault::CAssaultPlace::_MoveUser(pvp_assault::CDisposition*, int, int)
# range [0x082e782a, 0x082e7917]
082e782a +0x00:  push   %ebp
082e782b +0x01:  mov    %esp,%ebp
082e782d +0x03:  sub    $0x48,%esp
082e7830 +0x06:  movl   $0x0,-0x14(%ebp)
082e7837 +0x0d:  movl   $0x0,-0x10(%ebp)
082e783e +0x14:  movl   $0x0,-0xc(%ebp)
082e7845 +0x1b:  jmp    082e7907 <+0xdd>
082e784a +0x20:  mov    -0xc(%ebp),%eax
082e784d +0x23:  shl    $0x5,%eax
082e7850 +0x26:  add    0x8(%ebp),%eax
082e7853 +0x29:  mov    %eax,(%esp)
082e7856 +0x2c:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e785b +0x31:  test   %al,%al
082e785d +0x33:  jne    082e7902 <+0xd8>
082e7863 +0x39:  mov    -0xc(%ebp),%eax
082e7866 +0x3c:  shl    $0x5,%eax
082e7869 +0x3f:  add    0x8(%ebp),%eax
082e786c +0x42:  mov    %eax,(%esp)
082e786f +0x45:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e7874 +0x4a:  mov    %eax,-0x34(%ebp)
082e7877 +0x4d:  mov    -0xc(%ebp),%eax
082e787a +0x50:  shl    $0x5,%eax
082e787d +0x53:  add    0x8(%ebp),%eax
082e7880 +0x56:  mov    %eax,(%esp)
082e7883 +0x59:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e7888 +0x5e:  mov    -0x14(%ebp,%eax,4),%eax
082e788c +0x62:  mov    %eax,-0x30(%ebp)
082e788f +0x65:  mov    -0xc(%ebp),%eax
082e7892 +0x68:  shl    $0x5,%eax
082e7895 +0x6b:  add    0x8(%ebp),%eax
082e7898 +0x6e:  mov    %eax,(%esp)
082e789b +0x71:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e78a0 +0x76:  mov    %eax,-0x2c(%ebp)
082e78a3 +0x79:  mov    0x10(%ebp),%eax
082e78a6 +0x7c:  mov    %eax,-0x28(%ebp)
082e78a9 +0x7f:  mov    0x14(%ebp),%eax
082e78ac +0x82:  mov    %eax,-0x24(%ebp)
082e78af +0x85:  mov    -0xc(%ebp),%eax
082e78b2 +0x88:  shl    $0x5,%eax
082e78b5 +0x8b:  add    0x8(%ebp),%eax
082e78b8 +0x8e:  mov    %eax,(%esp)
082e78bb +0x91:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e78c0 +0x96:  mov    %eax,(%esp)
082e78c3 +0x99:  call   082e564c <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM>  ; pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)
082e78c8 +0x9e:  mov    %eax,-0x18(%ebp)
082e78cb +0xa1:  mov    0xc(%ebp),%eax
082e78ce +0xa4:  mov    (%eax),%eax
082e78d0 +0xa6:  add    $0x8,%eax
082e78d3 +0xa9:  mov    (%eax),%edx
082e78d5 +0xab:  lea    -0x34(%ebp),%eax
082e78d8 +0xae:  mov    %eax,0x4(%esp)
082e78dc +0xb2:  mov    0xc(%ebp),%eax
082e78df +0xb5:  mov    %eax,(%esp)
082e78e2 +0xb8:  call   *%edx
082e78e4 +0xba:  mov    -0xc(%ebp),%eax
082e78e7 +0xbd:  shl    $0x5,%eax
082e78ea +0xc0:  add    0x8(%ebp),%eax
082e78ed +0xc3:  mov    %eax,(%esp)
082e78f0 +0xc6:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e78f5 +0xcb:  mov    -0x14(%ebp,%eax,4),%edx
082e78f9 +0xcf:  add    $0x1,%edx
082e78fc +0xd2:  mov    %edx,-0x14(%ebp,%eax,4)
082e7900 +0xd6:  jmp    082e7903 <+0xd9>
082e7902 +0xd8:  nop
082e7903 +0xd9:  addl   $0x1,-0xc(%ebp)
082e7907 +0xdd:  cmpl   $0x7,-0xc(%ebp)
082e790b +0xe1:  setle  %al
082e790e +0xe4:  test   %al,%al
082e7910 +0xe6:  jne    082e784a <+0x20>
082e7916 +0xec:  leave
082e7917 +0xed:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MoveUser @ 0x82e782a

/* pvp_assault::CAssaultPlace::_MoveUser(pvp_assault::CDisposition*, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MoveUser
          (CAssaultPlace *this,CDisposition *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  for (local_18[2] = 0; local_18[2] < 8; local_18[2] = local_18[2] + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_18[2] * 0x20));
    if (cVar1 == '\0') {
      local_38 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_34 = local_18[iVar2];
      local_30 = CAssaulter::GetUser((CAssaulter *)(this + local_18[2] * 0x20));
      local_2c = param_2;
      local_28 = param_3;
      uVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_1c = GetDirectionByTeam(uVar3);
      (**(code **)(*(int *)param_1 + 8))(param_1,&local_38);
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_18[iVar2] = local_18[iVar2] + 1;
    }
  }
  return;
}
```
