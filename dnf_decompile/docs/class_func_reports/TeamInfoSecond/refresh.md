# refresh

`_ZN14TeamInfoSecond7refreshEv`

`TeamInfoSecond::refresh()`

| 类 | 地址 |
|---|---|
| `TeamInfoSecond` | `0x0855fcf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fcf6  _ZN14TeamInfoSecond7refreshEv
#           TeamInfoSecond::refresh()
# range [0x0855fcf6, 0x0855fdbf]
0855fcf6 +0x00:  push   %ebp
0855fcf7 +0x01:  mov    %esp,%ebp
0855fcf9 +0x03:  sub    $0x28,%esp
0855fcfc +0x06:  movl   $0x0,-0x10(%ebp)
0855fd03 +0x0d:  movl   $0x0,-0xc(%ebp)
0855fd0a +0x14:  jmp    0855fd3c <+0x46>
0855fd0c +0x16:  mov    -0xc(%ebp),%edx
0855fd0f +0x19:  mov    0x8(%ebp),%eax
0855fd12 +0x1c:  movzbl 0xc(%eax,%edx,8),%eax
0855fd17 +0x21:  test   %al,%al
0855fd19 +0x23:  je     0855fd38 <+0x42>
0855fd1b +0x25:  mov    -0xc(%ebp),%edx
0855fd1e +0x28:  mov    0x8(%ebp),%eax
0855fd21 +0x2b:  mov    0x8(%eax,%edx,8),%eax
0855fd25 +0x2f:  test   %eax,%eax
0855fd27 +0x31:  je     0855fd38 <+0x42>
0855fd29 +0x33:  mov    -0xc(%ebp),%edx
0855fd2c +0x36:  mov    0x8(%ebp),%eax
0855fd2f +0x39:  mov    0x8(%eax,%edx,8),%eax
0855fd33 +0x3d:  mov    %eax,-0x10(%ebp)
0855fd36 +0x40:  jmp    0855fd47 <+0x51>
0855fd38 +0x42:  addl   $0x1,-0xc(%ebp)
0855fd3c +0x46:  cmpl   $0x3,-0xc(%ebp)
0855fd40 +0x4a:  setle  %al
0855fd43 +0x4d:  test   %al,%al
0855fd45 +0x4f:  jne    0855fd0c <+0x16>
0855fd47 +0x51:  cmpl   $0x0,-0x10(%ebp)
0855fd4b +0x55:  je     0855fdbd <+0xc7>
0855fd4d +0x57:  mov    -0x10(%ebp),%eax
0855fd50 +0x5a:  mov    %eax,(%esp)
0855fd53 +0x5d:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
0855fd58 +0x62:  mov    0x8(%ebp),%edx
0855fd5b +0x65:  mov    %eax,(%edx)
0855fd5d +0x67:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0855fd62 +0x6c:  cmp    $0x1,%al
0855fd64 +0x6e:  sete   %al
0855fd67 +0x71:  test   %al,%al
0855fd69 +0x73:  je     0855fd8e <+0x98>
0855fd6b +0x75:  movl   $0x4,0x4(%esp)
0855fd73 +0x7d:  mov    -0x10(%ebp),%eax
0855fd76 +0x80:  mov    %eax,(%esp)
0855fd79 +0x83:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0855fd7e +0x88:  mov    %eax,(%esp)
0855fd81 +0x8b:  call   08568f02 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8cc>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8cc
0855fd86 +0x90:  mov    0x8(%ebp),%eax
0855fd89 +0x93:  fstps  0x4(%eax)
0855fd8c +0x96:  jmp    0855fdbe <+0xc8>
0855fd8e +0x98:  mov    -0x10(%ebp),%eax
0855fd91 +0x9b:  mov    %eax,(%esp)
0855fd94 +0x9e:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0855fd99 +0xa3:  test   %eax,%eax
0855fd9b +0xa5:  setne  %al
0855fd9e +0xa8:  test   %al,%al
0855fda0 +0xaa:  je     0855fdbe <+0xc8>
0855fda2 +0xac:  mov    -0x10(%ebp),%eax
0855fda5 +0xaf:  mov    %eax,(%esp)
0855fda8 +0xb2:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0855fdad +0xb7:  mov    %eax,(%esp)
0855fdb0 +0xba:  call   08568eee <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8b8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8b8
0855fdb5 +0xbf:  mov    0x8(%ebp),%eax
0855fdb8 +0xc2:  fstps  0x4(%eax)
0855fdbb +0xc5:  jmp    0855fdbe <+0xc8>
0855fdbd +0xc7:  nop
0855fdbe +0xc8:  leave
0855fdbf +0xc9:  ret
```

## 反编译 C

```c
// TeamInfoSecond::refresh @ 0x855fcf6

/* TeamInfoSecond::refresh() */

void __thiscall TeamInfoSecond::refresh(TeamInfoSecond *this)

{
  char cVar1;
  undefined4 uVar2;
  COnlinePreliminaryMember *this_00;
  int iVar3;
  COnlinePreliminaryTeam *this_01;
  longdouble lVar4;
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_0855fd47:
      if (local_14 != (CUser *)0x0) {
        uVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)local_14);
        *(undefined4 *)this = uVar2;
        cVar1 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
        if (cVar1 == '\x01') {
          this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(local_14,4);
          lVar4 = (longdouble)online_preliminary::COnlinePreliminaryMember::GetRating(this_00);
          *(float *)(this + 4) = (float)lVar4;
        }
        else {
          iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)local_14);
          if (iVar3 != 0) {
            this_01 = (COnlinePreliminaryTeam *)
                      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam
                                ((CUserCharacInfo *)local_14);
            lVar4 = (longdouble)online_preliminary::COnlinePreliminaryTeam::GetRating(this_01);
            *(float *)(this + 4) = (float)lVar4;
          }
        }
      }
      return;
    }
    if ((this[local_10 * 8 + 0xc] != (TeamInfoSecond)0x0) &&
       (*(int *)(this + local_10 * 8 + 8) != 0)) {
      local_14 = *(CUser **)(this + local_10 * 8 + 8);
      goto LAB_0855fd47;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
