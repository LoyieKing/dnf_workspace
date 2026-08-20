# _loadNPCRelasionship

`_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC`

`DB_LoadEtc::_loadNPCRelasionship(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08407482` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08407482  _ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC
#           DB_LoadEtc::_loadNPCRelasionship(SIG_LOAD_ETC*)
# range [0x08407482, 0x084075c3]
08407482 +0x000:  push   %ebp
08407483 +0x001:  mov    %esp,%ebp
08407485 +0x003:  sub    $0x28,%esp
08407488 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840748d +0x00b:  movl   $0x0,0x8(%esp)
08407495 +0x013:  movl   $0x2,0x4(%esp)
0840749d +0x01b:  mov    %eax,(%esp)
084074a0 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084074a5 +0x023:  mov    %eax,-0x10(%ebp)
084074a8 +0x026:  mov    0xc(%ebp),%eax
084074ab +0x029:  mov    0x4(%eax),%eax
084074ae +0x02c:  mov    %eax,0x8(%esp)
084074b2 +0x030:  movl   $"seLect npc_cnt,npc_data from charac_npc where charac_no=%d",0x4(%esp)
084074ba +0x038:  mov    -0x10(%ebp),%eax
084074bd +0x03b:  mov    %eax,(%esp)
084074c0 +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084074c5 +0x043:  movl   $0x1,0x4(%esp)
084074cd +0x04b:  mov    -0x10(%ebp),%eax
084074d0 +0x04e:  mov    %eax,(%esp)
084074d3 +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084074d8 +0x056:  xor    $0x1,%eax
084074db +0x059:  test   %al,%al
084074dd +0x05b:  je     084074e9 <+0x67>
084074df +0x05d:  mov    $0x1c80,%eax
084074e4 +0x062:  jmp    084075c1 <+0x13f>
084074e9 +0x067:  mov    -0x10(%ebp),%eax
084074ec +0x06a:  mov    %eax,(%esp)
084074ef +0x06d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084074f4 +0x072:  mov    %eax,-0xc(%ebp)
084074f7 +0x075:  cmpl   $0x1,-0xc(%ebp)
084074fb +0x079:  je     08407507 <+0x85>
084074fd +0x07b:  mov    $0x1c84,%eax
08407502 +0x080:  jmp    084075c1 <+0x13f>
08407507 +0x085:  mov    -0x10(%ebp),%eax
0840750a +0x088:  mov    %eax,(%esp)
0840750d +0x08b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08407512 +0x090:  xor    $0x1,%eax
08407515 +0x093:  test   %al,%al
08407517 +0x095:  je     08407523 <+0xa1>
08407519 +0x097:  mov    $0x1c87,%eax
0840751e +0x09c:  jmp    084075c1 <+0x13f>
08407523 +0x0a1:  mov    0xc(%ebp),%eax
08407526 +0x0a4:  add    $0x3e6c,%eax
0840752b +0x0a9:  mov    %eax,0x8(%esp)
0840752f +0x0ad:  movl   $0x0,0x4(%esp)
08407537 +0x0b5:  mov    -0x10(%ebp),%eax
0840753a +0x0b8:  mov    %eax,(%esp)
0840753d +0x0bb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08407542 +0x0c0:  xor    $0x1,%eax
08407545 +0x0c3:  test   %al,%al
08407547 +0x0c5:  je     08407550 <+0xce>
08407549 +0x0c7:  mov    $0x1c8a,%eax
0840754e +0x0cc:  jmp    084075c1 <+0x13f>
08407550 +0x0ce:  movl   $0x1,0x4(%esp)
08407558 +0x0d6:  mov    -0x10(%ebp),%eax
0840755b +0x0d9:  mov    %eax,(%esp)
0840755e +0x0dc:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08407563 +0x0e1:  mov    %eax,%ecx
08407565 +0x0e3:  mov    0xc(%ebp),%eax
08407568 +0x0e6:  mov    0x3e6c(%eax),%edx
0840756e +0x0ec:  mov    %edx,%eax
08407570 +0x0ee:  add    %eax,%eax
08407572 +0x0f0:  add    %edx,%eax
08407574 +0x0f2:  shl    $0x2,%eax
08407577 +0x0f5:  cmp    %eax,%ecx
08407579 +0x0f7:  setne  %al
0840757c +0x0fa:  test   %al,%al
0840757e +0x0fc:  je     08407587 <+0x105>
08407580 +0x0fe:  mov    $0x1c8d,%eax
08407585 +0x103:  jmp    084075c1 <+0x13f>
08407587 +0x105:  mov    0xc(%ebp),%eax
0840758a +0x108:  add    $0x3e70,%eax
0840758f +0x10d:  movl   $0x258,0xc(%esp)
08407597 +0x115:  mov    %eax,0x8(%esp)
0840759b +0x119:  movl   $0x1,0x4(%esp)
084075a3 +0x121:  mov    -0x10(%ebp),%eax
084075a6 +0x124:  mov    %eax,(%esp)
084075a9 +0x127:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084075ae +0x12c:  xor    $0x1,%eax
084075b1 +0x12f:  test   %al,%al
084075b3 +0x131:  je     084075bc <+0x13a>
084075b5 +0x133:  mov    $0x1c90,%eax
084075ba +0x138:  jmp    084075c1 <+0x13f>
084075bc +0x13a:  mov    $0x0,%eax
084075c1 +0x13f:  leave
084075c2 +0x140:  ret
084075c3 +0x141:  nop
```

## 反编译 C

```c
// DB_LoadEtc::_loadNPCRelasionship @ 0x8407482

/* DB_LoadEtc::_loadNPCRelasionship(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::_loadNPCRelasionship(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect npc_cnt,npc_data from charac_npc where charac_no=%d",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(this_00,0,(uint *)(param_1 + 0x3e6c));
        if (cVar1 == '\x01') {
          iVar3 = MySQL::get_binary_length(this_00,1);
          if (iVar3 == *(int *)(param_1 + 0x3e6c) * 0xc) {
            cVar1 = MySQL::get_binary(this_00,1,param_1 + 0x3e70,600);
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = 0x1c90;
            }
          }
          else {
            uVar2 = 0x1c8d;
          }
        }
        else {
          uVar2 = 0x1c8a;
        }
      }
      else {
        uVar2 = 0x1c87;
      }
    }
    else {
      uVar2 = 0x1c84;
    }
  }
  else {
    uVar2 = 0x1c80;
  }
  return uVar2;
}
```
