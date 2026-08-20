# LoadPvPMissionList

`_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406cce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406cce  _ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)
# range [0x08406cce, 0x08406eeb]
08406cce +0x000:  push   %ebp
08406ccf +0x001:  mov    %esp,%ebp
08406cd1 +0x003:  push   %edi
08406cd2 +0x004:  push   %ebx
08406cd3 +0x005:  sub    $0x1f0,%esp
08406cd9 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08406cde +0x010:  movl   $0x0,0x8(%esp)
08406ce6 +0x018:  movl   $0x3,0x4(%esp)
08406cee +0x020:  mov    %eax,(%esp)
08406cf1 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406cf6 +0x028:  mov    %eax,-0x14(%ebp)
08406cf9 +0x02b:  mov    0xc(%ebp),%eax
08406cfc +0x02e:  mov    0x4(%eax),%eax
08406cff +0x031:  mov    %eax,0x8(%esp)
08406d03 +0x035:  movl   $"seLect pvp_mission_info from fair_pvp_score where charac_no=%u",0x4(%esp)
08406d0b +0x03d:  mov    -0x14(%ebp),%eax
08406d0e +0x040:  mov    %eax,(%esp)
08406d11 +0x043:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08406d16 +0x048:  movl   $0x1,0x4(%esp)
08406d1e +0x050:  mov    -0x14(%ebp),%eax
08406d21 +0x053:  mov    %eax,(%esp)
08406d24 +0x056:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08406d29 +0x05b:  mov    %al,-0xd(%ebp)
08406d2c +0x05e:  movzbl -0xd(%ebp),%eax
08406d30 +0x062:  xor    $0x1,%eax
08406d33 +0x065:  test   %al,%al
08406d35 +0x067:  je     08406d81 <+0xb3>
08406d37 +0x069:  mov    0xc(%ebp),%eax
08406d3a +0x06c:  mov    0x4(%eax),%ebx
08406d3d +0x06f:  movl   $0x5,0xc(%esp)
08406d45 +0x077:  movl   $0x1b3f,0x8(%esp)
08406d4d +0x07f:  movl   $&_ZZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406d55 +0x087:  lea    -0x44(%ebp),%eax
08406d58 +0x08a:  mov    %eax,(%esp)
08406d5b +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406d60 +0x092:  mov    %ebx,0x8(%esp)
08406d64 +0x096:  movl   $"LoadPvPMissionList, exec() ERROR charac_no=%u",0x4(%esp)
08406d6c +0x09e:  lea    -0x44(%ebp),%eax
08406d6f +0x0a1:  mov    %eax,(%esp)
08406d72 +0x0a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406d77 +0x0a9:  mov    $0x0,%eax
08406d7c +0x0ae:  jmp    08406ee2 <+0x214>
08406d81 +0x0b3:  mov    -0x14(%ebp),%eax
08406d84 +0x0b6:  mov    %eax,(%esp)
08406d87 +0x0b9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406d8c +0x0be:  test   %eax,%eax
08406d8e +0x0c0:  sete   %al
08406d91 +0x0c3:  test   %al,%al
08406d93 +0x0c5:  je     08406d9f <+0xd1>
08406d95 +0x0c7:  mov    $0x0,%eax
08406d9a +0x0cc:  jmp    08406ee2 <+0x214>
08406d9f +0x0d1:  mov    -0x14(%ebp),%eax
08406da2 +0x0d4:  mov    %eax,(%esp)
08406da5 +0x0d7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08406daa +0x0dc:  mov    %al,-0xd(%ebp)
08406dad +0x0df:  movzbl -0xd(%ebp),%eax
08406db1 +0x0e3:  xor    $0x1,%eax
08406db4 +0x0e6:  test   %al,%al
08406db6 +0x0e8:  je     08406e02 <+0x134>
08406db8 +0x0ea:  mov    0xc(%ebp),%eax
08406dbb +0x0ed:  mov    0x4(%eax),%ebx
08406dbe +0x0f0:  movl   $0x5,0xc(%esp)
08406dc6 +0x0f8:  movl   $0x1b49,0x8(%esp)
08406dce +0x100:  movl   $&_ZZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406dd6 +0x108:  lea    -0x34(%ebp),%eax
08406dd9 +0x10b:  mov    %eax,(%esp)
08406ddc +0x10e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406de1 +0x113:  mov    %ebx,0x8(%esp)
08406de5 +0x117:  movl   $"LoadPvPMissionList, fetch() ERROR charac_no=%u",0x4(%esp)
08406ded +0x11f:  lea    -0x34(%ebp),%eax
08406df0 +0x122:  mov    %eax,(%esp)
08406df3 +0x125:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406df8 +0x12a:  mov    $0x0,%eax
08406dfd +0x12f:  jmp    08406ee2 <+0x214>
08406e02 +0x134:  lea    -0x1e0(%ebp),%ebx
08406e08 +0x13a:  mov    $0x0,%eax
08406e0d +0x13f:  mov    $0x66,%edx
08406e12 +0x144:  mov    %ebx,%edi
08406e14 +0x146:  mov    %edx,%ecx
08406e16 +0x148:  rep stos %eax,%es:(%edi)
08406e18 +0x14a:  movl   $0x198,-0x48(%ebp)
08406e1f +0x151:  mov    -0x48(%ebp),%eax
08406e22 +0x154:  mov    %eax,0xc(%esp)
08406e26 +0x158:  lea    -0x1e0(%ebp),%eax
08406e2c +0x15e:  mov    %eax,0x8(%esp)
08406e30 +0x162:  movl   $0x0,0x4(%esp)
08406e38 +0x16a:  mov    -0x14(%ebp),%eax
08406e3b +0x16d:  mov    %eax,(%esp)
08406e3e +0x170:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08406e43 +0x175:  xor    $0x1,%eax
08406e46 +0x178:  test   %al,%al
08406e48 +0x17a:  je     08406e91 <+0x1c3>
08406e4a +0x17c:  mov    0xc(%ebp),%eax
08406e4d +0x17f:  mov    0x4(%eax),%ebx
08406e50 +0x182:  movl   $0x5,0xc(%esp)
08406e58 +0x18a:  movl   $0x1b51,0x8(%esp)
08406e60 +0x192:  movl   $&_ZZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406e68 +0x19a:  lea    -0x24(%ebp),%eax
08406e6b +0x19d:  mov    %eax,(%esp)
08406e6e +0x1a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406e73 +0x1a5:  mov    %ebx,0x8(%esp)
08406e77 +0x1a9:  movl   $"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",0x4(%esp)
08406e7f +0x1b1:  lea    -0x24(%ebp),%eax
08406e82 +0x1b4:  mov    %eax,(%esp)
08406e85 +0x1b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406e8a +0x1bc:  mov    $0x0,%eax
08406e8f +0x1c1:  jmp    08406ee2 <+0x214>
08406e91 +0x1c3:  movl   $0x0,0x4(%esp)
08406e99 +0x1cb:  mov    -0x14(%ebp),%eax
08406e9c +0x1ce:  mov    %eax,(%esp)
08406e9f +0x1d1:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08406ea4 +0x1d6:  mov    %eax,-0xc(%ebp)
08406ea7 +0x1d9:  mov    0xc(%ebp),%eax
08406eaa +0x1dc:  add    $0xcdd5,%eax
08406eaf +0x1e1:  mov    -0xc(%ebp),%edx
08406eb2 +0x1e4:  mov    %edx,0xc(%esp)
08406eb6 +0x1e8:  lea    -0x1e0(%ebp),%edx
08406ebc +0x1ee:  mov    %edx,0x8(%esp)
08406ec0 +0x1f2:  lea    -0x48(%ebp),%edx
08406ec3 +0x1f5:  mov    %edx,0x4(%esp)
08406ec7 +0x1f9:  mov    %eax,(%esp)
08406eca +0x1fc:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406ecf +0x201:  xor    $0x1,%eax
08406ed2 +0x204:  test   %al,%al
08406ed4 +0x206:  je     08406edd <+0x20f>
08406ed6 +0x208:  mov    $0x0,%eax
08406edb +0x20d:  jmp    08406ee2 <+0x214>
08406edd +0x20f:  mov    $0x1,%eax
08406ee2 +0x214:  add    $0x1f0,%esp
08406ee8 +0x21a:  pop    %ebx
08406ee9 +0x21b:  pop    %edi
08406eea +0x21c:  pop    %ebp
08406eeb +0x21d:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadPvPMissionList @ 0x8406cce

/* DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadPvPMissionList(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1e4 [408];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  uint local_10;
  
  bVar5 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect pvp_mission_info from fair_pvp_score where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  local_11 = MySQL::exec(local_18,true);
  if (local_11 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_11 = MySQL::fetch(local_18);
      if (local_11 == '\x01') {
        local_11 = 1;
        pcVar4 = local_1e4;
        for (iVar3 = 0x66; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        local_4c = 0x198;
        cVar1 = MySQL::get_binary(local_18,0,local_1e4,0x198);
        if (cVar1 == '\x01') {
          local_10 = MySQL::get_binary_length(local_18,0);
          cVar1 = uncompress_zip((char *)(param_1 + 0xcdd5),&local_4c,local_1e4,local_10);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b51,5)
          ;
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b49,5);
        cMyTrace::operator()(local_38,"LoadPvPMissionList, fetch() ERROR charac_no=%u",uVar2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b3f,5);
    cMyTrace::operator()(local_48,"LoadPvPMissionList, exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
