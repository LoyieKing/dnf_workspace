# arad_sp_update_history

`_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c76f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c76f  _ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int)
# range [0x0818c76f, 0x0818c8b7]
0818c76f +0x000:  push   %ebp
0818c770 +0x001:  mov    %esp,%ebp
0818c772 +0x003:  push   %edi
0818c773 +0x004:  push   %ebx
0818c774 +0x005:  sub    $0x50,%esp
0818c777 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c77c +0x00d:  movl   $0x0,0x8(%esp)
0818c784 +0x015:  movl   $0x6,0x4(%esp)
0818c78c +0x01d:  mov    %eax,(%esp)
0818c78f +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c794 +0x025:  mov    %eax,-0xc(%ebp)
0818c797 +0x028:  cmpl   $0x0,-0xc(%ebp)
0818c79b +0x02c:  jne    0818c7db <+0x6c>
0818c79d +0x02e:  movl   $"Database null!!",0x14(%esp)
0818c7a5 +0x036:  movl   $"%s",0x10(%esp)
0818c7ad +0x03e:  movl   $0x37c,0xc(%esp)
0818c7b5 +0x046:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAiE19__PRETTY_FUNCTION__,0x8(%esp)
0818c7bd +0x04e:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c7c5 +0x056:  movl   $0x1,(%esp)
0818c7cc +0x05d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c7d1 +0x062:  mov    $0xffffffff,%eax
0818c7d6 +0x067:  jmp    0818c8b1 <+0x142>
0818c7db +0x06c:  mov    0x8(%ebp),%eax
0818c7de +0x06f:  mov    0xc0(%eax),%eax
0818c7e4 +0x075:  mov    %eax,0x8(%esp)
0818c7e8 +0x079:  movl   $"seLect mousepass from member_mousepass  where m_id=%d",0x4(%esp)
0818c7f0 +0x081:  mov    -0xc(%ebp),%eax
0818c7f3 +0x084:  mov    %eax,(%esp)
0818c7f6 +0x087:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818c7fb +0x08c:  test   %eax,%eax
0818c7fd +0x08e:  setne  %al
0818c800 +0x091:  test   %al,%al
0818c802 +0x093:  je     0818c80e <+0x9f>
0818c804 +0x095:  mov    $0xffffffff,%eax
0818c809 +0x09a:  jmp    0818c8b1 <+0x142>
0818c80e +0x09f:  lea    -0x30(%ebp),%ebx
0818c811 +0x0a2:  mov    $0x0,%eax
0818c816 +0x0a7:  mov    $0x9,%edx
0818c81b +0x0ac:  mov    %ebx,%edi
0818c81d +0x0ae:  mov    %edx,%ecx
0818c81f +0x0b0:  rep stos %eax,%es:(%edi)
0818c821 +0x0b2:  movl   $0x24,0xc(%esp)
0818c829 +0x0ba:  lea    -0x30(%ebp),%eax
0818c82c +0x0bd:  mov    %eax,0x8(%esp)
0818c830 +0x0c1:  movl   $0x0,0x4(%esp)
0818c838 +0x0c9:  mov    -0xc(%ebp),%eax
0818c83b +0x0cc:  mov    %eax,(%esp)
0818c83e +0x0cf:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818c843 +0x0d4:  xor    $0x1,%eax
0818c846 +0x0d7:  test   %al,%al
0818c848 +0x0d9:  je     0818c851 <+0xe2>
0818c84a +0x0db:  mov    $0xffffffff,%eax
0818c84f +0x0e0:  jmp    0818c8b1 <+0x142>
0818c851 +0x0e2:  mov    0x8(%ebp),%eax
0818c854 +0x0e5:  mov    0xc0(%eax),%eax
0818c85a +0x0eb:  mov    0xc(%ebp),%edx
0818c85d +0x0ee:  mov    %edx,0x10(%esp)
0818c861 +0x0f2:  lea    -0x30(%ebp),%edx
0818c864 +0x0f5:  mov    %edx,0xc(%esp)
0818c868 +0x0f9:  mov    %eax,0x8(%esp)
0818c86c +0x0fd:  movl   $"inSert into member_mousepass_history(occ_time, m_id, pre_mousepass, modify_type)  values (now(),%d,'%s',%d)",0x4(%esp)
0818c874 +0x105:  mov    -0xc(%ebp),%eax
0818c877 +0x108:  mov    %eax,(%esp)
0818c87a +0x10b:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818c87f +0x110:  test   %eax,%eax
0818c881 +0x112:  setne  %al
0818c884 +0x115:  test   %al,%al
0818c886 +0x117:  je     0818c88f <+0x120>
0818c888 +0x119:  mov    $0xffffffff,%eax
0818c88d +0x11e:  jmp    0818c8b1 <+0x142>
0818c88f +0x120:  mov    -0xc(%ebp),%eax
0818c892 +0x123:  mov    %eax,(%esp)
0818c895 +0x126:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0818c89a +0x12b:  or     %edx,%eax
0818c89c +0x12d:  test   %eax,%eax
0818c89e +0x12f:  sete   %al
0818c8a1 +0x132:  test   %al,%al
0818c8a3 +0x134:  je     0818c8ac <+0x13d>
0818c8a5 +0x136:  mov    $0xffffffff,%eax
0818c8aa +0x13b:  jmp    0818c8b1 <+0x142>
0818c8ac +0x13d:  mov    $0x0,%eax
0818c8b1 +0x142:  add    $0x50,%esp
0818c8b4 +0x145:  pop    %ebx
0818c8b5 +0x146:  pop    %edi
0818c8b6 +0x147:  pop    %ebp
0818c8b7 +0x148:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history @ 0x818c76f

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  char local_34 [36];
  MySQL *local_10;
  
  bVar5 = 0;
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int)",0x37c
               ,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(local_10,"seLect mousepass from member_mousepass  where m_id=%d",
                          *(undefined4 *)(param_1 + 0xc0));
    if (iVar3 == 0) {
      pcVar4 = local_34;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
      }
      cVar1 = MySQL::get_str(local_10,0,local_34,0x24);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::select(local_10,
                              "inSert into member_mousepass_history(occ_time, m_id, pre_mousepass, modify_type)  values (now(),%d,\'%s\',%d)"
                              ,*(undefined4 *)(param_1 + 0xc0),local_34,param_2);
        if (iVar3 == 0) {
          lVar6 = MySQL::getAffectedRowCount(local_10);
          if (lVar6 == 0) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
