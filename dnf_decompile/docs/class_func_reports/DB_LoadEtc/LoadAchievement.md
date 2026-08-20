# LoadAchievement

`_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadAchievement(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406422` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406422  _ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadAchievement(SIG_LOAD_ETC*)
# range [0x08406422, 0x084065ff]
08406422 +0x000:  push   %ebp
08406423 +0x001:  mov    %esp,%ebp
08406425 +0x003:  push   %edi
08406426 +0x004:  push   %ebx
08406427 +0x005:  sub    $0x1d00,%esp
0840642d +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08406432 +0x010:  movl   $0x0,0x8(%esp)
0840643a +0x018:  movl   $0x2,0x4(%esp)
08406442 +0x020:  mov    %eax,(%esp)
08406445 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840644a +0x028:  mov    %eax,-0x1c(%ebp)
0840644d +0x02b:  mov    0xc(%ebp),%eax
08406450 +0x02e:  mov    0x4(%eax),%eax
08406453 +0x031:  mov    %eax,0x8(%esp)
08406457 +0x035:  movl   $"seLect achievement, unix_timestamp(last_update_time) from charac_achievement where charac_no=%u",0x4(%esp)
0840645f +0x03d:  mov    -0x1c(%ebp),%eax
08406462 +0x040:  mov    %eax,(%esp)
08406465 +0x043:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840646a +0x048:  movl   $0x1,0x4(%esp)
08406472 +0x050:  mov    -0x1c(%ebp),%eax
08406475 +0x053:  mov    %eax,(%esp)
08406478 +0x056:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840647d +0x05b:  mov    %al,-0x15(%ebp)
08406480 +0x05e:  movzbl -0x15(%ebp),%eax
08406484 +0x062:  xor    $0x1,%eax
08406487 +0x065:  test   %al,%al
08406489 +0x067:  je     08406495 <+0x73>
0840648b +0x069:  mov    $0x0,%eax
08406490 +0x06e:  jmp    084065f6 <+0x1d4>
08406495 +0x073:  mov    -0x1c(%ebp),%eax
08406498 +0x076:  mov    %eax,(%esp)
0840649b +0x079:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084064a0 +0x07e:  test   %eax,%eax
084064a2 +0x080:  sete   %al
084064a5 +0x083:  test   %al,%al
084064a7 +0x085:  je     084064b3 <+0x91>
084064a9 +0x087:  mov    $0x1,%eax
084064ae +0x08c:  jmp    084065f6 <+0x1d4>
084064b3 +0x091:  mov    -0x1c(%ebp),%eax
084064b6 +0x094:  mov    %eax,(%esp)
084064b9 +0x097:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084064be +0x09c:  xor    $0x1,%eax
084064c1 +0x09f:  test   %al,%al
084064c3 +0x0a1:  je     084064cf <+0xad>
084064c5 +0x0a3:  mov    $0x0,%eax
084064ca +0x0a8:  jmp    084065f6 <+0x1d4>
084064cf +0x0ad:  lea    -0x1cf8(%ebp),%ebx
084064d5 +0x0b3:  mov    $0x0,%eax
084064da +0x0b8:  mov    $0x736,%edx
084064df +0x0bd:  mov    %ebx,%edi
084064e1 +0x0bf:  mov    %edx,%ecx
084064e3 +0x0c1:  rep stos %eax,%es:(%edi)
084064e5 +0x0c3:  movl   $0x1cd8,0xc(%esp)
084064ed +0x0cb:  lea    -0x1cf8(%ebp),%eax
084064f3 +0x0d1:  mov    %eax,0x8(%esp)
084064f7 +0x0d5:  movl   $0x0,0x4(%esp)
084064ff +0x0dd:  mov    -0x1c(%ebp),%eax
08406502 +0x0e0:  mov    %eax,(%esp)
08406505 +0x0e3:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840650a +0x0e8:  xor    $0x1,%eax
0840650d +0x0eb:  test   %al,%al
0840650f +0x0ed:  je     0840651b <+0xf9>
08406511 +0x0ef:  mov    $0x0,%eax
08406516 +0x0f4:  jmp    084065f6 <+0x1d4>
0840651b +0x0f9:  movl   $0x0,0x4(%esp)
08406523 +0x101:  mov    -0x1c(%ebp),%eax
08406526 +0x104:  mov    %eax,(%esp)
08406529 +0x107:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840652e +0x10c:  mov    %eax,-0x14(%ebp)
08406531 +0x10f:  movl   $0x1800,-0x20(%ebp)
08406538 +0x116:  mov    0xc(%ebp),%eax
0840653b +0x119:  add    $0xb1a4,%eax
08406540 +0x11e:  mov    -0x14(%ebp),%edx
08406543 +0x121:  mov    %edx,0xc(%esp)
08406547 +0x125:  lea    -0x1cf8(%ebp),%edx
0840654d +0x12b:  mov    %edx,0x8(%esp)
08406551 +0x12f:  lea    -0x20(%ebp),%edx
08406554 +0x132:  mov    %edx,0x4(%esp)
08406558 +0x136:  mov    %eax,(%esp)
0840655b +0x139:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406560 +0x13e:  xor    $0x1,%eax
08406563 +0x141:  test   %al,%al
08406565 +0x143:  je     08406571 <+0x14f>
08406567 +0x145:  mov    $0x0,%eax
0840656c +0x14a:  jmp    084065f6 <+0x1d4>
08406571 +0x14f:  movl   $0x0,-0x10(%ebp)
08406578 +0x156:  movl   $0x0,-0xc(%ebp)
0840657f +0x15d:  jmp    084065a7 <+0x185>
08406581 +0x15f:  mov    -0xc(%ebp),%edx
08406584 +0x162:  mov    0xc(%ebp),%ecx
08406587 +0x165:  mov    %edx,%eax
08406589 +0x167:  add    %eax,%eax
0840658b +0x169:  add    %edx,%eax
0840658d +0x16b:  shl    $0x2,%eax
08406590 +0x16e:  lea    (%ecx,%eax,1),%eax
08406593 +0x171:  add    $0xb1a0,%eax
08406598 +0x176:  mov    0x4(%eax),%eax
0840659b +0x179:  test   %eax,%eax
0840659d +0x17b:  je     084065b7 <+0x195>
0840659f +0x17d:  addl   $0x1,-0x10(%ebp)
084065a3 +0x181:  addl   $0x1,-0xc(%ebp)
084065a7 +0x185:  cmpl   $0x1ff,-0xc(%ebp)
084065ae +0x18c:  setle  %al
084065b1 +0x18f:  test   %al,%al
084065b3 +0x191:  jne    08406581 <+0x15f>
084065b5 +0x193:  jmp    084065b8 <+0x196>
084065b7 +0x195:  nop
084065b8 +0x196:  mov    0xc(%ebp),%eax
084065bb +0x199:  mov    -0x10(%ebp),%edx
084065be +0x19c:  mov    %edx,0xc9a4(%eax)
084065c4 +0x1a2:  mov    0xc(%ebp),%eax
084065c7 +0x1a5:  add    $0xc9a8,%eax
084065cc +0x1aa:  mov    %eax,0x8(%esp)
084065d0 +0x1ae:  movl   $0x1,0x4(%esp)
084065d8 +0x1b6:  mov    -0x1c(%ebp),%eax
084065db +0x1b9:  mov    %eax,(%esp)
084065de +0x1bc:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084065e3 +0x1c1:  xor    $0x1,%eax
084065e6 +0x1c4:  test   %al,%al
084065e8 +0x1c6:  je     084065f1 <+0x1cf>
084065ea +0x1c8:  mov    $0x0,%eax
084065ef +0x1cd:  jmp    084065f6 <+0x1d4>
084065f1 +0x1cf:  mov    $0x1,%eax
084065f6 +0x1d4:  add    $0x1d00,%esp
084065fc +0x1da:  pop    %ebx
084065fd +0x1db:  pop    %edi
084065fe +0x1dc:  pop    %ebp
084065ff +0x1dd:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadAchievement @ 0x8406422

/* DB_LoadEtc::LoadAchievement(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadAchievement(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1cfc [7384];
  uint local_24;
  MySQL *local_20;
  char local_19;
  uint local_18;
  int local_14;
  int local_10;
  
  bVar5 = 0;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,
                   "seLect achievement, unix_timestamp(last_update_time) from charac_achievement where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_19 = MySQL::exec(local_20,true);
  if (local_19 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_20);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 == '\x01') {
        pcVar4 = local_1cfc;
        for (iVar3 = 0x736; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        cVar1 = MySQL::get_binary(local_20,0,local_1cfc,0x1cd8);
        if (cVar1 == '\x01') {
          local_18 = MySQL::get_binary_length(local_20,0);
          local_24 = 0x1800;
          cVar1 = uncompress_zip((char *)(param_1 + 0xb1a4),&local_24,local_1cfc,local_18);
          if (cVar1 == '\x01') {
            local_14 = 0;
            local_10 = 0;
            while ((local_10 < 0x200 && (*(int *)(param_1 + local_10 * 0xc + 0xb1a4) != 0))) {
              local_14 = local_14 + 1;
              local_10 = local_10 + 1;
            }
            *(int *)(param_1 + 0xc9a4) = local_14;
            cVar1 = MySQL::get_uint(local_20,1,(uint *)(param_1 + 0xc9a8));
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
