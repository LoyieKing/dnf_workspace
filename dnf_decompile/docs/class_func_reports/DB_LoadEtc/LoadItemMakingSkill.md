# LoadItemMakingSkill

`_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084040b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084040b4  _ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)
# range [0x084040b4, 0x0840428f]
084040b4 +0x000:  push   %ebp
084040b5 +0x001:  mov    %esp,%ebp
084040b7 +0x003:  push   %ebx
084040b8 +0x004:  sub    $0x54,%esp
084040bb +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084040c0 +0x00c:  movl   $0x0,0x8(%esp)
084040c8 +0x014:  movl   $0x2,0x4(%esp)
084040d0 +0x01c:  mov    %eax,(%esp)
084040d3 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084040d8 +0x024:  mov    %eax,-0x10(%ebp)
084040db +0x027:  mov    0xc(%ebp),%eax
084040de +0x02a:  mov    0x4(%eax),%eax
084040e1 +0x02d:  mov    %eax,0x8(%esp)
084040e5 +0x031:  movl   $"seLect weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone from item_making_skill_info where charac_no=%u",0x4(%esp)
084040ed +0x039:  mov    -0x10(%ebp),%eax
084040f0 +0x03c:  mov    %eax,(%esp)
084040f3 +0x03f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084040f8 +0x044:  movl   $0x1,0x4(%esp)
08404100 +0x04c:  mov    -0x10(%ebp),%eax
08404103 +0x04f:  mov    %eax,(%esp)
08404106 +0x052:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840410b +0x057:  mov    %al,-0x11(%ebp)
0840410e +0x05a:  movzbl -0x11(%ebp),%eax
08404112 +0x05e:  xor    $0x1,%eax
08404115 +0x061:  test   %al,%al
08404117 +0x063:  je     08404163 <+0xaf>
08404119 +0x065:  mov    0xc(%ebp),%eax
0840411c +0x068:  mov    0x4(%eax),%ebx
0840411f +0x06b:  movl   $0x5,0xc(%esp)
08404127 +0x073:  movl   $0x15dd,0x8(%esp)
0840412f +0x07b:  movl   $&_ZZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404137 +0x083:  lea    -0x44(%ebp),%eax
0840413a +0x086:  mov    %eax,(%esp)
0840413d +0x089:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404142 +0x08e:  mov    %ebx,0x8(%esp)
08404146 +0x092:  movl   $"DB_LoadEtc::LoadItemMakingSkill, exec() ERROR charac_no=%u",0x4(%esp)
0840414e +0x09a:  lea    -0x44(%ebp),%eax
08404151 +0x09d:  mov    %eax,(%esp)
08404154 +0x0a0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404159 +0x0a5:  mov    $0x0,%eax
0840415e +0x0aa:  jmp    0840428a <+0x1d6>
08404163 +0x0af:  mov    -0x10(%ebp),%eax
08404166 +0x0b2:  mov    %eax,(%esp)
08404169 +0x0b5:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840416e +0x0ba:  test   %eax,%eax
08404170 +0x0bc:  sete   %al
08404173 +0x0bf:  test   %al,%al
08404175 +0x0c1:  je     08404181 <+0xcd>
08404177 +0x0c3:  mov    $0x1,%eax
0840417c +0x0c8:  jmp    0840428a <+0x1d6>
08404181 +0x0cd:  mov    -0x10(%ebp),%eax
08404184 +0x0d0:  mov    %eax,(%esp)
08404187 +0x0d3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840418c +0x0d8:  mov    %al,-0x11(%ebp)
0840418f +0x0db:  movzbl -0x11(%ebp),%eax
08404193 +0x0df:  xor    $0x1,%eax
08404196 +0x0e2:  test   %al,%al
08404198 +0x0e4:  je     084041e4 <+0x130>
0840419a +0x0e6:  mov    0xc(%ebp),%eax
0840419d +0x0e9:  mov    0x4(%eax),%ebx
084041a0 +0x0ec:  movl   $0x5,0xc(%esp)
084041a8 +0x0f4:  movl   $0x15e8,0x8(%esp)
084041b0 +0x0fc:  movl   $&_ZZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084041b8 +0x104:  lea    -0x34(%ebp),%eax
084041bb +0x107:  mov    %eax,(%esp)
084041be +0x10a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084041c3 +0x10f:  mov    %ebx,0x8(%esp)
084041c7 +0x113:  movl   $"DB_LoadEtc::LoadItemMakingSkill fetch, exec() ERROR charac_no=%u",0x4(%esp)
084041cf +0x11b:  lea    -0x34(%ebp),%eax
084041d2 +0x11e:  mov    %eax,(%esp)
084041d5 +0x121:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084041da +0x126:  mov    $0x0,%eax
084041df +0x12b:  jmp    0840428a <+0x1d6>
084041e4 +0x130:  movl   $0x0,-0xc(%ebp)
084041eb +0x137:  jmp    08404276 <+0x1c2>
084041f0 +0x13c:  mov    -0xc(%ebp),%eax
084041f3 +0x13f:  add    $0x6b78,%eax
084041f8 +0x144:  add    %eax,%eax
084041fa +0x146:  add    0xc(%ebp),%eax
084041fd +0x149:  add    $0x10,%eax
08404200 +0x14c:  mov    %eax,0x8(%esp)
08404204 +0x150:  mov    -0xc(%ebp),%eax
08404207 +0x153:  mov    %eax,0x4(%esp)
0840420b +0x157:  mov    -0x10(%ebp),%eax
0840420e +0x15a:  mov    %eax,(%esp)
08404211 +0x15d:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08404216 +0x162:  mov    %al,-0x11(%ebp)
08404219 +0x165:  movzbl -0x11(%ebp),%eax
0840421d +0x169:  xor    $0x1,%eax
08404220 +0x16c:  test   %al,%al
08404222 +0x16e:  je     08404272 <+0x1be>
08404224 +0x170:  mov    0xc(%ebp),%eax
08404227 +0x173:  mov    0x4(%eax),%ebx
0840422a +0x176:  movl   $0x5,0xc(%esp)
08404232 +0x17e:  movl   $0x15f2,0x8(%esp)
0840423a +0x186:  movl   $&_ZZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404242 +0x18e:  lea    -0x24(%ebp),%eax
08404245 +0x191:  mov    %eax,(%esp)
08404248 +0x194:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840424d +0x199:  mov    %ebx,0xc(%esp)
08404251 +0x19d:  mov    -0xc(%ebp),%eax
08404254 +0x1a0:  mov    %eax,0x8(%esp)
08404258 +0x1a4:  movl   $"DB_LoadEtc::LoadItemMakingSkill get(%d) ERROR charac_no=%u",0x4(%esp)
08404260 +0x1ac:  lea    -0x24(%ebp),%eax
08404263 +0x1af:  mov    %eax,(%esp)
08404266 +0x1b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840426b +0x1b7:  mov    $0x0,%eax
08404270 +0x1bc:  jmp    0840428a <+0x1d6>
08404272 +0x1be:  addl   $0x1,-0xc(%ebp)
08404276 +0x1c2:  cmpl   $0xa,-0xc(%ebp)
0840427a +0x1c6:  setle  %al
0840427d +0x1c9:  test   %al,%al
0840427f +0x1cb:  jne    084041f0 <+0x13c>
08404285 +0x1d1:  mov    $0x1,%eax
0840428a +0x1d6:  add    $0x54,%esp
0840428d +0x1d9:  pop    %ebx
0840428e +0x1da:  pop    %ebp
0840428f +0x1db:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadItemMakingSkill @ 0x84040b4

/* DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadItemMakingSkill(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_14,
                   "seLect weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone from item_making_skill_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar2 = MySQL::get_n_rows(local_14);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        for (local_10 = 0; local_15 = 1, local_10 < 0xb; local_10 = local_10 + 1) {
          local_15 = MySQL::get_short(local_14,local_10,
                                      (short *)(param_1 + (local_10 + 0x6b78) * 2 + 0x10));
          if (local_15 != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15f2
                               ,5);
            cMyTrace::operator()
                      (local_28,"DB_LoadEtc::LoadItemMakingSkill get(%d) ERROR charac_no=%u",
                       local_10,uVar1);
            return 0;
          }
        }
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15e8,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadEtc::LoadItemMakingSkill fetch, exec() ERROR charac_no=%u",uVar1
                  );
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15dd,5);
    cMyTrace::operator()
              (local_48,"DB_LoadEtc::LoadItemMakingSkill, exec() ERROR charac_no=%u",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}
```
