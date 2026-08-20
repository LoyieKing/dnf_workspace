# LoadAccountFirstLogin

`_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi`

`DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08405c6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08405c6e  _ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi
#           DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int)
# range [0x08405c6e, 0x08405e09]
08405c6e +0x000:  push   %ebp
08405c6f +0x001:  mov    %esp,%ebp
08405c71 +0x003:  push   %ebx
08405c72 +0x004:  sub    $0x24,%esp
08405c75 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08405c7a +0x00c:  mov    %eax,(%esp)
08405c7d +0x00f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08405c82 +0x014:  mov    0x10(%ebp),%edx
08405c85 +0x017:  mov    %edx,0x4(%esp)
08405c89 +0x01b:  mov    %eax,(%esp)
08405c8c +0x01e:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08405c91 +0x023:  xor    $0x1,%eax
08405c94 +0x026:  test   %al,%al
08405c96 +0x028:  je     08405ca2 <+0x34>
08405c98 +0x02a:  mov    $0x0,%eax
08405c9d +0x02f:  jmp    08405e04 <+0x196>
08405ca2 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08405ca7 +0x039:  mov    %eax,(%esp)
08405caa +0x03c:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08405caf +0x041:  mov    %eax,-0x18(%ebp)
08405cb2 +0x044:  mov    0x10(%ebp),%eax
08405cb5 +0x047:  mov    %eax,0x4(%esp)
08405cb9 +0x04b:  mov    -0x18(%ebp),%eax
08405cbc +0x04e:  mov    %eax,(%esp)
08405cbf +0x051:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
08405cc4 +0x056:  mov    %eax,-0x14(%ebp)
08405cc7 +0x059:  cmpl   $0x0,-0x14(%ebp)
08405ccb +0x05d:  jne    08405cd7 <+0x69>
08405ccd +0x05f:  mov    $0x0,%eax
08405cd2 +0x064:  jmp    08405e04 <+0x196>
08405cd7 +0x069:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08405cdc +0x06e:  movl   $0x0,0x8(%esp)
08405ce4 +0x076:  movl   $0x9,0x4(%esp)
08405cec +0x07e:  mov    %eax,(%esp)
08405cef +0x081:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08405cf4 +0x086:  mov    %eax,-0x10(%ebp)
08405cf7 +0x089:  mov    0xc(%ebp),%eax
08405cfa +0x08c:  mov    (%eax),%eax
08405cfc +0x08e:  movl   $0x0,0x4(%esp)
08405d04 +0x096:  mov    %eax,(%esp)
08405d07 +0x099:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08405d0c +0x09e:  mov    %eax,%ebx
08405d0e +0x0a0:  mov    -0x14(%ebp),%eax
08405d11 +0x0a3:  mov    (%eax),%eax
08405d13 +0x0a5:  add    $0x20,%eax
08405d16 +0x0a8:  mov    (%eax),%edx
08405d18 +0x0aa:  mov    -0x14(%ebp),%eax
08405d1b +0x0ad:  mov    %eax,(%esp)
08405d1e +0x0b0:  call   *%edx
08405d20 +0x0b2:  mov    %eax,(%esp)
08405d23 +0x0b5:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08405d28 +0x0ba:  mov    %ebx,0xc(%esp)
08405d2c +0x0be:  mov    %eax,0x8(%esp)
08405d30 +0x0c2:  movl   $"seLect m_id from %s where m_id=%s",0x4(%esp)
08405d38 +0x0ca:  mov    -0x10(%ebp),%eax
08405d3b +0x0cd:  mov    %eax,(%esp)
08405d3e +0x0d0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08405d43 +0x0d5:  movl   $0x1,0x4(%esp)
08405d4b +0x0dd:  mov    -0x10(%ebp),%eax
08405d4e +0x0e0:  mov    %eax,(%esp)
08405d51 +0x0e3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08405d56 +0x0e8:  xor    $0x1,%eax
08405d59 +0x0eb:  test   %al,%al
08405d5b +0x0ed:  je     08405d93 <+0x125>
08405d5d +0x0ef:  mov    0x10(%ebp),%eax
08405d60 +0x0f2:  mov    %eax,0x4(%esp)
08405d64 +0x0f6:  mov    -0x18(%ebp),%eax
08405d67 +0x0f9:  mov    %eax,(%esp)
08405d6a +0x0fc:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
08405d6f +0x101:  mov    0xc(%ebp),%edx
08405d72 +0x104:  add    $0xc9bc,%edx
08405d78 +0x10a:  movl   $0x1,0x8(%esp)
08405d80 +0x112:  mov    %eax,0x4(%esp)
08405d84 +0x116:  mov    %edx,(%esp)
08405d87 +0x119:  call   084506e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x32fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x32fa
08405d8c +0x11e:  mov    $0x0,%eax
08405d91 +0x123:  jmp    08405e04 <+0x196>
08405d93 +0x125:  mov    -0x10(%ebp),%eax
08405d96 +0x128:  mov    %eax,(%esp)
08405d99 +0x12b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08405d9e +0x130:  mov    %eax,-0xc(%ebp)
08405da1 +0x133:  cmpl   $0x0,-0xc(%ebp)
08405da5 +0x137:  je     08405dd8 <+0x16a>
08405da7 +0x139:  mov    0x10(%ebp),%eax
08405daa +0x13c:  mov    %eax,0x4(%esp)
08405dae +0x140:  mov    -0x18(%ebp),%eax
08405db1 +0x143:  mov    %eax,(%esp)
08405db4 +0x146:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
08405db9 +0x14b:  mov    0xc(%ebp),%edx
08405dbc +0x14e:  add    $0xc9bc,%edx
08405dc2 +0x154:  movl   $0x1,0x8(%esp)
08405dca +0x15c:  mov    %eax,0x4(%esp)
08405dce +0x160:  mov    %edx,(%esp)
08405dd1 +0x163:  call   084506e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x32fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x32fa
08405dd6 +0x168:  jmp    08405dff <+0x191>
08405dd8 +0x16a:  mov    0x10(%ebp),%eax
08405ddb +0x16d:  mov    %eax,0x4(%esp)
08405ddf +0x171:  mov    -0x18(%ebp),%eax
08405de2 +0x174:  mov    %eax,(%esp)
08405de5 +0x177:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
08405dea +0x17c:  mov    0xc(%ebp),%edx
08405ded +0x17f:  add    $0xc9bc,%edx
08405df3 +0x185:  mov    %eax,0x4(%esp)
08405df7 +0x189:  mov    %edx,(%esp)
08405dfa +0x18c:  call   0845071e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3334>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3334
08405dff +0x191:  mov    $0x1,%eax
08405e04 +0x196:  add    $0x24,%esp
08405e07 +0x199:  pop    %ebx
08405e08 +0x19a:  pop    %ebp
08405e09 +0x19b:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadAccountFirstLogin @ 0x8405c6e

/* DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int) */

undefined4 __thiscall
DB_LoadEtc::LoadAccountFirstLogin(DB_LoadEtc *this,SIG_LOAD_ETC *param_1,int param_2)

{
  char cVar1;
  CDataManager *pCVar2;
  CEventScriptMng *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  MySQL *this_00;
  string *sSrc;
  TCHAR *pTVar6;
  uint uVar7;
  int iVar8;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
  cVar1 = EventClassify::CEventScriptMng::is_eventing(pCVar3,param_2);
  if (cVar1 == '\x01') {
    pCVar2 = (CDataManager *)G_CDataManager();
    pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
    piVar5 = (int *)EventClassify::CEventScriptMng::get_event_entity((int)pCVar3);
    if (piVar5 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      uVar4 = NumberToString(*(uint *)param_1,0);
      sSrc = (string *)(**(code **)(*piVar5 + 0x20))(piVar5);
      pTVar6 = toTString(sSrc);
      MySQL::set_query(this_00,"seLect m_id from %s where m_id=%s",pTVar6,uVar4);
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        iVar8 = MySQL::get_n_rows(this_00);
        if (iVar8 == 0) {
          uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
          std::bitset<32u>::reset((bitset<32u> *)(param_1 + 0xc9bc),uVar7);
        }
        else {
          uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
          std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar7,true);
        }
        uVar4 = 1;
      }
      else {
        uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
        std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar7,true);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
