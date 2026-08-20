# _updateHistory

`_ZN16DB_MouseRegister14_updateHistoryEjiPc`

`DB_MouseRegister::_updateHistory(unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08423914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423914  _ZN16DB_MouseRegister14_updateHistoryEjiPc
#           DB_MouseRegister::_updateHistory(unsigned int, int, char*)
# range [0x08423914, 0x08423abd]
08423914 +0x000:  push   %ebp
08423915 +0x001:  mov    %esp,%ebp
08423917 +0x003:  sub    $0x98,%esp
0842391d +0x009:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
08423922 +0x00e:  mov    %eax,-0xc(%ebp)
08423925 +0x011:  movl   $0x0,0x4(%esp)
0842392d +0x019:  mov    0x8(%ebp),%eax
08423930 +0x01c:  mov    %eax,(%esp)
08423933 +0x01f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423938 +0x024:  mov    %eax,0x8(%esp)
0842393c +0x028:  movl   $"seLect mousepass from member_mousepass where m_id=%s",0x4(%esp)
08423944 +0x030:  mov    -0xc(%ebp),%eax
08423947 +0x033:  mov    %eax,(%esp)
0842394a +0x036:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842394f +0x03b:  movl   $0x1,0x4(%esp)
08423957 +0x043:  mov    -0xc(%ebp),%eax
0842395a +0x046:  mov    %eax,(%esp)
0842395d +0x049:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423962 +0x04e:  xor    $0x1,%eax
08423965 +0x051:  test   %al,%al
08423967 +0x053:  jne    0842398a <+0x76>
08423969 +0x055:  mov    -0xc(%ebp),%eax
0842396c +0x058:  mov    %eax,(%esp)
0842396f +0x05b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08423974 +0x060:  test   %eax,%eax
08423976 +0x062:  je     0842398a <+0x76>
08423978 +0x064:  mov    -0xc(%ebp),%eax
0842397b +0x067:  mov    %eax,(%esp)
0842397e +0x06a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08423983 +0x06f:  xor    $0x1,%eax
08423986 +0x072:  test   %al,%al
08423988 +0x074:  je     08423991 <+0x7d>
0842398a +0x076:  mov    $0x1,%eax
0842398f +0x07b:  jmp    08423996 <+0x82>
08423991 +0x07d:  mov    $0x0,%eax
08423996 +0x082:  test   %al,%al
08423998 +0x084:  je     084239a4 <+0x90>
0842399a +0x086:  mov    $0x0,%eax
0842399f +0x08b:  jmp    08423abb <+0x1a7>
084239a4 +0x090:  movl   $0x24,0xc(%esp)
084239ac +0x098:  lea    -0x40(%ebp),%eax
084239af +0x09b:  mov    %eax,0x8(%esp)
084239b3 +0x09f:  movl   $0x0,0x4(%esp)
084239bb +0x0a7:  mov    -0xc(%ebp),%eax
084239be +0x0aa:  mov    %eax,(%esp)
084239c1 +0x0ad:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084239c6 +0x0b2:  xor    $0x1,%eax
084239c9 +0x0b5:  test   %al,%al
084239cb +0x0b7:  je     084239d7 <+0xc3>
084239cd +0x0b9:  mov    $0x0,%eax
084239d2 +0x0be:  jmp    08423abb <+0x1a7>
084239d7 +0x0c3:  movl   $0x0,-0x16(%ebp)
084239de +0x0ca:  movl   $0x0,-0x12(%ebp)
084239e5 +0x0d1:  movw   $0x0,-0xe(%ebp)
084239eb +0x0d7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084239f2 +0x0de:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084239f7 +0x0e3:  mov    %eax,-0x1c(%ebp)
084239fa +0x0e6:  lea    -0x6c(%ebp),%eax
084239fd +0x0e9:  mov    %eax,0x4(%esp)
08423a01 +0x0ed:  lea    -0x1c(%ebp),%eax
08423a04 +0x0f0:  mov    %eax,(%esp)
08423a07 +0x0f3:  call   0807e360 <_init+0xc58>
08423a0c +0x0f8:  lea    -0x6c(%ebp),%eax
08423a0f +0x0fb:  mov    %eax,0xc(%esp)
08423a13 +0x0ff:  movl   $"%Y%m",0x8(%esp)
08423a1b +0x107:  movl   $0xa,0x4(%esp)
08423a23 +0x10f:  lea    -0x16(%ebp),%eax
08423a26 +0x112:  mov    %eax,(%esp)
08423a29 +0x115:  call   0807dbc0 <_init+0x4b8>
08423a2e +0x11a:  movl   $0x0,0x4(%esp)
08423a36 +0x122:  mov    0x8(%ebp),%eax
08423a39 +0x125:  mov    %eax,(%esp)
08423a3c +0x128:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423a41 +0x12d:  mov    0x10(%ebp),%edx
08423a44 +0x130:  mov    %edx,0x18(%esp)
08423a48 +0x134:  mov    0xc(%ebp),%edx
08423a4b +0x137:  mov    %edx,0x14(%esp)
08423a4f +0x13b:  lea    -0x40(%ebp),%edx
08423a52 +0x13e:  mov    %edx,0x10(%esp)
08423a56 +0x142:  mov    %eax,0xc(%esp)
08423a5a +0x146:  lea    -0x16(%ebp),%eax
08423a5d +0x149:  mov    %eax,0x8(%esp)
08423a61 +0x14d:  movl   $"inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,'%s',%d,'%s','')",0x4(%esp)
08423a69 +0x155:  mov    -0xc(%ebp),%eax
08423a6c +0x158:  mov    %eax,(%esp)
08423a6f +0x15b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423a74 +0x160:  movl   $0x1,0x4(%esp)
08423a7c +0x168:  mov    -0xc(%ebp),%eax
08423a7f +0x16b:  mov    %eax,(%esp)
08423a82 +0x16e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423a87 +0x173:  xor    $0x1,%eax
08423a8a +0x176:  test   %al,%al
08423a8c +0x178:  jne    08423a9f <+0x18b>
08423a8e +0x17a:  mov    -0xc(%ebp),%eax
08423a91 +0x17d:  mov    %eax,(%esp)
08423a94 +0x180:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08423a99 +0x185:  or     %edx,%eax
08423a9b +0x187:  test   %eax,%eax
08423a9d +0x189:  jne    08423aa6 <+0x192>
08423a9f +0x18b:  mov    $0x1,%eax
08423aa4 +0x190:  jmp    08423aab <+0x197>
08423aa6 +0x192:  mov    $0x0,%eax
08423aab +0x197:  test   %al,%al
08423aad +0x199:  je     08423ab6 <+0x1a2>
08423aaf +0x19b:  mov    $0x0,%eax
08423ab4 +0x1a0:  jmp    08423abb <+0x1a7>
08423ab6 +0x1a2:  mov    $0x1,%eax
08423abb +0x1a7:  leave
08423abc +0x1a8:  ret
08423abd +0x1a9:  nop
```

## 反编译 C

```c
// DB_MouseRegister::_updateHistory @ 0x8423914

/* DB_MouseRegister::_updateHistory(unsigned int, int, char*) */

bool DB_MouseRegister::_updateHistory(uint param_1,int param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  tm local_70;
  char local_44 [36];
  time_t local_20;
  char local_1a [10];
  MySQL *local_10;
  
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect mousepass from member_mousepass where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_10), iVar4 != 0)) &&
     (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = MySQL::get_str(local_10,0,local_44,0x24);
    if (cVar2 == '\x01') {
      local_1a[0] = '\0';
      local_1a[1] = '\0';
      local_1a[2] = '\0';
      local_1a[3] = '\0';
      local_1a[4] = '\0';
      local_1a[5] = '\0';
      local_1a[6] = '\0';
      local_1a[7] = '\0';
      local_1a[8] = '\0';
      local_1a[9] = '\0';
      local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_20,&local_70);
      strftime(local_1a,10,"%Y%m",&local_70);
      uVar3 = NumberToString(param_1,0);
      MySQL::set_query(local_10,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_1a,uVar3,local_44,param_2,param_3);
      cVar2 = MySQL::exec(local_10,true);
      if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      return !bVar1;
    }
    return false;
  }
  return false;
}
```
