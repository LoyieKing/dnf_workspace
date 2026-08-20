# LoadBoosterGage

`_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08446d9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446d9e  _ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*)
# range [0x08446d9e, 0x08446eeb]
08446d9e +0x000:  push   %ebp
08446d9f +0x001:  mov    %esp,%ebp
08446da1 +0x003:  push   %ebx
08446da2 +0x004:  sub    $0x34,%esp
08446da5 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446daa +0x00c:  movl   $0x0,0x8(%esp)
08446db2 +0x014:  movl   $0x2,0x4(%esp)
08446dba +0x01c:  mov    %eax,(%esp)
08446dbd +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08446dc2 +0x024:  mov    %eax,-0x14(%ebp)
08446dc5 +0x027:  mov    0xc(%ebp),%eax
08446dc8 +0x02a:  mov    (%eax),%eax
08446dca +0x02c:  mov    %eax,0x8(%esp)
08446dce +0x030:  movl   $"seLect gage from member_booster_gage where m_id=%u",0x4(%esp)
08446dd6 +0x038:  mov    -0x14(%ebp),%eax
08446dd9 +0x03b:  mov    %eax,(%esp)
08446ddc +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446de1 +0x043:  movl   $0x1,0x4(%esp)
08446de9 +0x04b:  mov    -0x14(%ebp),%eax
08446dec +0x04e:  mov    %eax,(%esp)
08446def +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446df4 +0x056:  mov    %al,-0x15(%ebp)
08446df7 +0x059:  movzbl -0x15(%ebp),%eax
08446dfb +0x05d:  xor    $0x1,%eax
08446dfe +0x060:  test   %al,%al
08446e00 +0x062:  je     08446e0c <+0x6e>
08446e02 +0x064:  mov    $0x0,%eax
08446e07 +0x069:  jmp    08446ee5 <+0x147>
08446e0c +0x06e:  mov    -0x14(%ebp),%eax
08446e0f +0x071:  mov    %eax,(%esp)
08446e12 +0x074:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08446e17 +0x079:  mov    %eax,-0x10(%ebp)
08446e1a +0x07c:  cmpl   $0x1,-0x10(%ebp)
08446e1e +0x080:  je     08446e2a <+0x8c>
08446e20 +0x082:  mov    $0x0,%eax
08446e25 +0x087:  jmp    08446ee5 <+0x147>
08446e2a +0x08c:  movzbl -0x15(%ebp),%eax
08446e2e +0x090:  xor    $0x1,%eax
08446e31 +0x093:  test   %al,%al
08446e33 +0x095:  je     08446e3f <+0xa1>
08446e35 +0x097:  mov    $0x0,%eax
08446e3a +0x09c:  jmp    08446ee5 <+0x147>
08446e3f +0x0a1:  movl   $0x0,-0xc(%ebp)
08446e46 +0x0a8:  mov    -0x14(%ebp),%eax
08446e49 +0x0ab:  mov    %eax,(%esp)
08446e4c +0x0ae:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08446e51 +0x0b3:  xor    $0x1,%eax
08446e54 +0x0b6:  test   %al,%al
08446e56 +0x0b8:  je     08446e62 <+0xc4>
08446e58 +0x0ba:  mov    $0x0,%eax
08446e5d +0x0bf:  jmp    08446ee5 <+0x147>
08446e62 +0x0c4:  mov    0xc(%ebp),%eax
08446e65 +0x0c7:  lea    0xeccc(%eax),%edx
08446e6b +0x0cd:  mov    -0xc(%ebp),%eax
08446e6e +0x0d0:  addl   $0x1,-0xc(%ebp)
08446e72 +0x0d4:  mov    %edx,0x8(%esp)
08446e76 +0x0d8:  mov    %eax,0x4(%esp)
08446e7a +0x0dc:  mov    -0x14(%ebp),%eax
08446e7d +0x0df:  mov    %eax,(%esp)
08446e80 +0x0e2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08446e85 +0x0e7:  mov    %al,-0x15(%ebp)
08446e88 +0x0ea:  movzbl -0x15(%ebp),%eax
08446e8c +0x0ee:  xor    $0x1,%eax
08446e8f +0x0f1:  test   %al,%al
08446e91 +0x0f3:  je     08446ee0 <+0x142>
08446e93 +0x0f5:  mov    0xc(%ebp),%eax
08446e96 +0x0f8:  mov    (%eax),%ebx
08446e98 +0x0fa:  movl   $0x5,0xc(%esp)
08446ea0 +0x102:  movl   $0xafc4,0x8(%esp)
08446ea8 +0x10a:  movl   $&_ZZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08446eb0 +0x112:  lea    -0x28(%ebp),%eax
08446eb3 +0x115:  mov    %eax,(%esp)
08446eb6 +0x118:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08446ebb +0x11d:  mov    %ebx,0xc(%esp)
08446ebf +0x121:  mov    -0xc(%ebp),%eax
08446ec2 +0x124:  mov    %eax,0x8(%esp)
08446ec6 +0x128:  movl   $"DB_LoadEtc::LoadBoosterGage, get(%d) ERROR m_id=%u",0x4(%esp)
08446ece +0x130:  lea    -0x28(%ebp),%eax
08446ed1 +0x133:  mov    %eax,(%esp)
08446ed4 +0x136:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08446ed9 +0x13b:  mov    $0x0,%eax
08446ede +0x140:  jmp    08446ee5 <+0x147>
08446ee0 +0x142:  mov    $0x1,%eax
08446ee5 +0x147:  add    $0x34,%esp
08446ee8 +0x14a:  pop    %ebx
08446ee9 +0x14b:  pop    %ebp
08446eea +0x14c:  ret
08446eeb +0x14d:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadBoosterGage @ 0x8446d9e

/* DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadBoosterGage(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,"seLect gage from member_booster_gage where m_id=%u",
                   *(undefined4 *)param_1);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 1) {
      if (local_19 == '\x01') {
        local_10 = 0;
        cVar2 = MySQL::fetch(local_18);
        iVar1 = local_10;
        if (cVar2 == '\x01') {
          local_10 = local_10 + 1;
          local_19 = MySQL::get_int(local_18,iVar1,(int *)(param_1 + 0xeccc));
          if (local_19 == '\x01') {
            uVar3 = 1;
          }
          else {
            uVar3 = *(undefined4 *)param_1;
            cMyTrace::cMyTrace(local_2c,"bool DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*)",0xafc4,5);
            cMyTrace::operator()
                      (local_2c,"DB_LoadEtc::LoadBoosterGage, get(%d) ERROR m_id=%u",local_10,uVar3)
            ;
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
