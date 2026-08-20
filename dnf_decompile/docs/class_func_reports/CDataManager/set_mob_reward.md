# set_mob_reward

`_ZN12CDataManager14set_mob_rewardEv`

`CDataManager::set_mob_reward()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083605a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083605a8  _ZN12CDataManager14set_mob_rewardEv
#           CDataManager::set_mob_reward()
# range [0x083605a8, 0x08360715]
083605a8 +0x000:  push   %ebp
083605a9 +0x001:  mov    %esp,%ebp
083605ab +0x003:  sub    $0x28,%esp
083605ae +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083605b3 +0x00b:  movl   $0x0,0x8(%esp)
083605bb +0x013:  movl   $0x2,0x4(%esp)
083605c3 +0x01b:  mov    %eax,(%esp)
083605c6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083605cb +0x023:  mov    %eax,-0x14(%ebp)
083605ce +0x026:  movl   $"seLect level, exp from monster_reward_ref",0x4(%esp)
083605d6 +0x02e:  mov    -0x14(%ebp),%eax
083605d9 +0x031:  mov    %eax,(%esp)
083605dc +0x034:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083605e1 +0x039:  movl   $0x1,0x4(%esp)
083605e9 +0x041:  mov    -0x14(%ebp),%eax
083605ec +0x044:  mov    %eax,(%esp)
083605ef +0x047:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083605f4 +0x04c:  mov    %al,-0x15(%ebp)
083605f7 +0x04f:  movzbl -0x15(%ebp),%eax
083605fb +0x053:  xor    $0x1,%eax
083605fe +0x056:  test   %al,%al
08360600 +0x058:  je     0836060c <+0x64>
08360602 +0x05a:  mov    $0x0,%eax
08360607 +0x05f:  jmp    08360713 <+0x16b>
0836060c +0x064:  mov    -0x14(%ebp),%eax
0836060f +0x067:  mov    %eax,(%esp)
08360612 +0x06a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08360617 +0x06f:  mov    %eax,-0x10(%ebp)
0836061a +0x072:  cmpl   $0x0,-0x10(%ebp)
0836061e +0x076:  jg     0836062a <+0x82>
08360620 +0x078:  mov    $0x0,%eax
08360625 +0x07d:  jmp    08360713 <+0x16b>
0836062a +0x082:  movl   $0x0,-0xc(%ebp)
08360631 +0x089:  jmp    083606c8 <+0x120>
08360636 +0x08e:  mov    -0x14(%ebp),%eax
08360639 +0x091:  mov    %eax,(%esp)
0836063c +0x094:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08360641 +0x099:  mov    %al,-0x15(%ebp)
08360644 +0x09c:  movzbl -0x15(%ebp),%eax
08360648 +0x0a0:  xor    $0x1,%eax
0836064b +0x0a3:  test   %al,%al
0836064d +0x0a5:  jne    083606db <+0x133>
08360653 +0x0ab:  lea    -0x18(%ebp),%eax
08360656 +0x0ae:  mov    %eax,0x8(%esp)
0836065a +0x0b2:  movl   $0x0,0x4(%esp)
08360662 +0x0ba:  mov    -0x14(%ebp),%eax
08360665 +0x0bd:  mov    %eax,(%esp)
08360668 +0x0c0:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0836066d +0x0c5:  mov    %al,-0x15(%ebp)
08360670 +0x0c8:  movzbl -0x15(%ebp),%eax
08360674 +0x0cc:  xor    $0x1,%eax
08360677 +0x0cf:  test   %al,%al
08360679 +0x0d1:  je     08360685 <+0xdd>
0836067b +0x0d3:  mov    $0x0,%eax
08360680 +0x0d8:  jmp    08360713 <+0x16b>
08360685 +0x0dd:  movzwl -0x18(%ebp),%eax
08360689 +0x0e1:  cwtl
0836068a +0x0e2:  add    $0x2b68,%eax
0836068f +0x0e7:  shl    $0x2,%eax
08360692 +0x0ea:  add    0x8(%ebp),%eax
08360695 +0x0ed:  add    $0x4,%eax
08360698 +0x0f0:  mov    %eax,0x8(%esp)
0836069c +0x0f4:  movl   $0x1,0x4(%esp)
083606a4 +0x0fc:  mov    -0x14(%ebp),%eax
083606a7 +0x0ff:  mov    %eax,(%esp)
083606aa +0x102:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
083606af +0x107:  mov    %al,-0x15(%ebp)
083606b2 +0x10a:  movzbl -0x15(%ebp),%eax
083606b6 +0x10e:  xor    $0x1,%eax
083606b9 +0x111:  test   %al,%al
083606bb +0x113:  je     083606c4 <+0x11c>
083606bd +0x115:  mov    $0x0,%eax
083606c2 +0x11a:  jmp    08360713 <+0x16b>
083606c4 +0x11c:  addl   $0x1,-0xc(%ebp)
083606c8 +0x120:  mov    -0xc(%ebp),%eax
083606cb +0x123:  cmp    -0x10(%ebp),%eax
083606ce +0x126:  setl   %al
083606d1 +0x129:  test   %al,%al
083606d3 +0x12b:  jne    08360636 <+0x8e>
083606d9 +0x131:  jmp    083606dc <+0x134>
083606db +0x133:  nop
083606dc +0x134:  mov    0x8(%ebp),%eax
083606df +0x137:  movl   $0x0,0xada4(%eax)
083606e9 +0x141:  mov    0x8(%ebp),%eax
083606ec +0x144:  lea    0xada4(%eax),%edx
083606f2 +0x14a:  mov    0x8(%ebp),%eax
083606f5 +0x14d:  add    $0xb0c8,%eax
083606fa +0x152:  movl   $0x324,0x8(%esp)
08360702 +0x15a:  mov    %edx,0x4(%esp)
08360706 +0x15e:  mov    %eax,(%esp)
08360709 +0x161:  call   0807d8a0 <_init+0x198>
0836070e +0x166:  mov    $0x1,%eax
08360713 +0x16b:  leave
08360714 +0x16c:  ret
08360715 +0x16d:  nop
```

## 反编译 C

```c
// CDataManager::set_mob_reward @ 0x83605a8

/* CDataManager::set_mob_reward() */

undefined4 __thiscall CDataManager::set_mob_reward(CDataManager *this)

{
  char cVar1;
  undefined4 uVar2;
  short local_1c;
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,"seLect level, exp from monster_reward_ref");
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 < 1) {
      uVar2 = 0;
    }
    else {
      local_10 = 0;
      while ((local_10 < local_14 && (local_19 = MySQL::fetch(local_18), local_19 == '\x01'))) {
        local_19 = MySQL::get_short(local_18,0,&local_1c);
        if (local_19 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(local_18,1,(int *)(this + (local_1c + 0x2b68) * 4 + 4));
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        local_19 = '\x01';
      }
      *(undefined4 *)(this + 0xada4) = 0;
      memcpy(this + 0xb0c8,this + 0xada4,0x324);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
