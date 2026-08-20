# checkGameOverForTeamPlay

`_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh`

`CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df126` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df126  _ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh
#           CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)
# range [0x085df126, 0x085df295]
085df126 +0x000:  push   %ebp
085df127 +0x001:  mov    %esp,%ebp
085df129 +0x003:  sub    $0x38,%esp
085df12c +0x006:  cmpl   $0xffffffff,0x10(%ebp)
085df130 +0x00a:  jne    085df13c <+0x16>
085df132 +0x00c:  mov    $0x1,%eax
085df137 +0x011:  jmp    085df294 <+0x16e>
085df13c +0x016:  movl   $0x0,-0x18(%ebp)
085df143 +0x01d:  movl   $0x0,-0x14(%ebp)
085df14a +0x024:  movl   $0x0,-0x10(%ebp)
085df151 +0x02b:  movl   $0x0,-0xc(%ebp)
085df158 +0x032:  jmp    085df1fc <+0xd6>
085df15d +0x037:  mov    -0xc(%ebp),%eax
085df160 +0x03a:  shl    $0x2,%eax
085df163 +0x03d:  add    0xc(%ebp),%eax
085df166 +0x040:  mov    (%eax),%eax
085df168 +0x042:  test   %eax,%eax
085df16a +0x044:  jne    085df17a <+0x54>
085df16c +0x046:  mov    -0xc(%ebp),%edx
085df16f +0x049:  mov    0x8(%ebp),%eax
085df172 +0x04c:  mov    0x4(%eax,%edx,4),%eax
085df176 +0x050:  test   %eax,%eax
085df178 +0x052:  je     085df1f7 <+0xd1>
085df17a +0x054:  mov    -0xc(%ebp),%eax
085df17d +0x057:  add    0x14(%ebp),%eax
085df180 +0x05a:  movzbl (%eax),%eax
085df183 +0x05d:  cmp    $0x1,%al
085df185 +0x05f:  jne    085df196 <+0x70>
085df187 +0x061:  mov    -0xc(%ebp),%edx
085df18a +0x064:  mov    0x8(%ebp),%eax
085df18d +0x067:  mov    0x4(%eax,%edx,4),%eax
085df191 +0x06b:  add    %eax,-0x18(%ebp)
085df194 +0x06e:  jmp    085df1f8 <+0xd2>
085df196 +0x070:  mov    -0xc(%ebp),%eax
085df199 +0x073:  add    0x14(%ebp),%eax
085df19c +0x076:  movzbl (%eax),%eax
085df19f +0x079:  cmp    $0x2,%al
085df1a1 +0x07b:  jne    085df1b2 <+0x8c>
085df1a3 +0x07d:  mov    -0xc(%ebp),%edx
085df1a6 +0x080:  mov    0x8(%ebp),%eax
085df1a9 +0x083:  mov    0x4(%eax,%edx,4),%eax
085df1ad +0x087:  add    %eax,-0x14(%ebp)
085df1b0 +0x08a:  jmp    085df1f8 <+0xd2>
085df1b2 +0x08c:  mov    -0xc(%ebp),%eax
085df1b5 +0x08f:  add    0x14(%ebp),%eax
085df1b8 +0x092:  movzbl (%eax),%eax
085df1bb +0x095:  movzbl %al,%eax
085df1be +0x098:  mov    %eax,0x18(%esp)
085df1c2 +0x09c:  mov    -0xc(%ebp),%eax
085df1c5 +0x09f:  mov    %eax,0x14(%esp)
085df1c9 +0x0a3:  movl   $"CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",0x10(%esp)
085df1d1 +0x0ab:  movl   $0x157f,0xc(%esp)
085df1d9 +0x0b3:  movl   $&_ZZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPhE19__PRETTY_FUNCTION__,0x8(%esp)
085df1e1 +0x0bb:  movl   $"pvp.cpp",0x4(%esp)
085df1e9 +0x0c3:  movl   $0x1,(%esp)
085df1f0 +0x0ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085df1f5 +0x0cf:  jmp    085df1f8 <+0xd2>
085df1f7 +0x0d1:  nop
085df1f8 +0x0d2:  addl   $0x1,-0xc(%ebp)
085df1fc +0x0d6:  cmpl   $0x7,-0xc(%ebp)
085df200 +0x0da:  setle  %al
085df203 +0x0dd:  test   %al,%al
085df205 +0x0df:  jne    085df15d <+0x37>
085df20b +0x0e5:  mov    -0x18(%ebp),%eax
085df20e +0x0e8:  cmp    -0x14(%ebp),%eax
085df211 +0x0eb:  jle    085df21b <+0xf5>
085df213 +0x0ed:  mov    -0x18(%ebp),%eax
085df216 +0x0f0:  mov    %eax,-0x10(%ebp)
085df219 +0x0f3:  jmp    085df221 <+0xfb>
085df21b +0x0f5:  mov    -0x14(%ebp),%eax
085df21e +0x0f8:  mov    %eax,-0x10(%ebp)
085df221 +0x0fb:  mov    0x10(%ebp),%eax
085df224 +0x0fe:  cmp    $0x2,%eax
085df227 +0x101:  je     085df267 <+0x141>
085df229 +0x103:  cmp    $0x2,%eax
085df22c +0x106:  jg     085df235 <+0x10f>
085df22e +0x108:  cmp    $0x1,%eax
085df231 +0x10b:  je     085df27b <+0x155>
085df233 +0x10d:  jmp    085df28f <+0x169>
085df235 +0x10f:  cmp    $0x3,%eax
085df238 +0x112:  je     085df253 <+0x12d>
085df23a +0x114:  cmp    $0x4,%eax
085df23d +0x117:  jne    085df28f <+0x169>
085df23f +0x119:  cmpl   $0x9,-0x10(%ebp)
085df243 +0x11d:  jle    085df24c <+0x126>
085df245 +0x11f:  mov    $0x1,%eax
085df24a +0x124:  jmp    085df294 <+0x16e>
085df24c +0x126:  mov    $0x0,%eax
085df251 +0x12b:  jmp    085df294 <+0x16e>
085df253 +0x12d:  cmpl   $0x7,-0x10(%ebp)
085df257 +0x131:  jle    085df260 <+0x13a>
085df259 +0x133:  mov    $0x1,%eax
085df25e +0x138:  jmp    085df294 <+0x16e>
085df260 +0x13a:  mov    $0x0,%eax
085df265 +0x13f:  jmp    085df294 <+0x16e>
085df267 +0x141:  cmpl   $0x4,-0x10(%ebp)
085df26b +0x145:  jle    085df274 <+0x14e>
085df26d +0x147:  mov    $0x1,%eax
085df272 +0x14c:  jmp    085df294 <+0x16e>
085df274 +0x14e:  mov    $0x0,%eax
085df279 +0x153:  jmp    085df294 <+0x16e>
085df27b +0x155:  cmpl   $0x1,-0x10(%ebp)
085df27f +0x159:  jle    085df288 <+0x162>
085df281 +0x15b:  mov    $0x1,%eax
085df286 +0x160:  jmp    085df294 <+0x16e>
085df288 +0x162:  mov    $0x0,%eax
085df28d +0x167:  jmp    085df294 <+0x16e>
085df28f +0x169:  mov    $0x1,%eax
085df294 +0x16e:  leave
085df295 +0x16f:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::checkGameOverForTeamPlay @ 0x85df126

/* CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*) */

undefined4 __thiscall
CDeathMatchBattleMgr::checkGameOverForTeamPlay
          (CDeathMatchBattleMgr *this,CUser **param_1,int param_2,uchar *param_3)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == -1) {
    uVar1 = 1;
  }
  else {
    local_1c = 0;
    local_18 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((param_1[local_10] != (CUser *)0x0) || (*(int *)(this + local_10 * 4 + 4) != 0)) {
        if (param_3[local_10] == '\x01') {
          local_1c = local_1c + *(int *)(this + local_10 * 4 + 4);
        }
        else if (param_3[local_10] == '\x02') {
          local_18 = local_18 + *(int *)(this + local_10 * 4 + 4);
        }
        else {
          LogManager::logFormat
                    (1,"pvp.cpp",
                     "bool CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)"
                     ,0x157f,
                     "CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",
                     local_10,(uint)param_3[local_10]);
        }
      }
    }
    if (local_18 < local_1c) {
      local_14 = local_1c;
    }
    else {
      local_14 = local_18;
    }
    if (param_2 == 2) {
      if (local_14 < 5) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      if (param_2 < 3) {
        if (param_2 == 1) {
          if (1 < local_14) {
            return 1;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 3) {
          if (7 < local_14) {
            return 1;
          }
          return 0;
        }
        if (param_2 == 4) {
          if (9 < local_14) {
            return 1;
          }
          return 0;
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
