# QueryConnInfo

`_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE`

`CDBConnector::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080eca6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eca6c  _ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE
#           CDBConnector::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)
# range [0x080eca6c, 0x080eccda]
080eca6c +0x000:  push   %ebp
080eca6d +0x001:  mov    %esp,%ebp
080eca6f +0x003:  push   %edi
080eca70 +0x004:  push   %esi
080eca71 +0x005:  push   %ebx
080eca72 +0x006:  sub    $0x1cc,%esp
080eca78 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080eca7d +0x011:  movl   $0x0,0x8(%esp)
080eca85 +0x019:  movl   $0x0,0x4(%esp)
080eca8d +0x021:  mov    %eax,(%esp)
080eca90 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080eca95 +0x029:  mov    %eax,-0x20(%ebp)
080eca98 +0x02c:  mov    0xc(%ebp),%edx
080eca9b +0x02f:  mov    0x10(%ebp),%eax
080eca9e +0x032:  mov    %edx,0xc(%esp)
080ecaa2 +0x036:  mov    %eax,0x8(%esp)
080ecaa6 +0x03a:  movl   $"seLect db_name,db_ip,db_port,db_userid,db_passwd from db_connect where db_server_group = %d and db_type = %d",0x4(%esp)
080ecaae +0x042:  mov    -0x20(%ebp),%eax
080ecab1 +0x045:  mov    %eax,(%esp)
080ecab4 +0x048:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080ecab9 +0x04d:  xor    $0x1,%eax
080ecabc +0x050:  test   %al,%al
080ecabe +0x052:  je     080ecaca <+0x5e>
080ecac0 +0x054:  mov    $0x0,%eax
080ecac5 +0x059:  jmp    080eccd0 <+0x264>
080ecaca +0x05e:  movl   $0x1,0x4(%esp)
080ecad2 +0x066:  mov    -0x20(%ebp),%eax
080ecad5 +0x069:  mov    %eax,(%esp)
080ecad8 +0x06c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080ecadd +0x071:  xor    $0x1,%eax
080ecae0 +0x074:  test   %al,%al
080ecae2 +0x076:  je     080ecaee <+0x82>
080ecae4 +0x078:  mov    $0x0,%eax
080ecae9 +0x07d:  jmp    080eccd0 <+0x264>
080ecaee +0x082:  mov    -0x20(%ebp),%eax
080ecaf1 +0x085:  mov    %eax,(%esp)
080ecaf4 +0x088:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
080ecaf9 +0x08d:  xor    $0x1,%eax
080ecafc +0x090:  test   %al,%al
080ecafe +0x092:  je     080ecb0a <+0x9e>
080ecb00 +0x094:  mov    $0x0,%eax
080ecb05 +0x099:  jmp    080eccd0 <+0x264>
080ecb0a +0x09e:  mov    -0x20(%ebp),%eax
080ecb0d +0x0a1:  mov    %eax,(%esp)
080ecb10 +0x0a4:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
080ecb15 +0x0a9:  cmp    $0x1,%eax
080ecb18 +0x0ac:  setne  %al
080ecb1b +0x0af:  test   %al,%al
080ecb1d +0x0b1:  je     080ecb29 <+0xbd>
080ecb1f +0x0b3:  mov    $0x0,%eax
080ecb24 +0x0b8:  jmp    080eccd0 <+0x264>
080ecb29 +0x0bd:  movl   $0x0,-0x1c(%ebp)
080ecb30 +0x0c4:  lea    -0x1c8(%ebp),%eax
080ecb36 +0x0ca:  mov    %eax,(%esp)
080ecb39 +0x0cd:  call   080ecd38 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1d
080ecb3e +0x0d2:  mov    -0x1c(%ebp),%eax
080ecb41 +0x0d5:  addl   $0x1,-0x1c(%ebp)
080ecb45 +0x0d9:  movl   $0x1f,0xc(%esp)
080ecb4d +0x0e1:  lea    -0x1c8(%ebp),%edx
080ecb53 +0x0e7:  add    $0x42,%edx
080ecb56 +0x0ea:  mov    %edx,0x8(%esp)
080ecb5a +0x0ee:  mov    %eax,0x4(%esp)
080ecb5e +0x0f2:  mov    -0x20(%ebp),%eax
080ecb61 +0x0f5:  mov    %eax,(%esp)
080ecb64 +0x0f8:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080ecb69 +0x0fd:  xor    $0x1,%eax
080ecb6c +0x100:  test   %al,%al
080ecb6e +0x102:  je     080ecb7a <+0x10e>
080ecb70 +0x104:  mov    $0x0,%eax
080ecb75 +0x109:  jmp    080eccd0 <+0x264>
080ecb7a +0x10e:  mov    -0x1c(%ebp),%eax
080ecb7d +0x111:  addl   $0x1,-0x1c(%ebp)
080ecb81 +0x115:  movl   $0x11,0xc(%esp)
080ecb89 +0x11d:  lea    -0x1c8(%ebp),%edx
080ecb8f +0x123:  mov    %edx,0x8(%esp)
080ecb93 +0x127:  mov    %eax,0x4(%esp)
080ecb97 +0x12b:  mov    -0x20(%ebp),%eax
080ecb9a +0x12e:  mov    %eax,(%esp)
080ecb9d +0x131:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080ecba2 +0x136:  xor    $0x1,%eax
080ecba5 +0x139:  test   %al,%al
080ecba7 +0x13b:  je     080ecbb3 <+0x147>
080ecba9 +0x13d:  mov    $0x0,%eax
080ecbae +0x142:  jmp    080eccd0 <+0x264>
080ecbb3 +0x147:  mov    -0x1c(%ebp),%eax
080ecbb6 +0x14a:  addl   $0x1,-0x1c(%ebp)
080ecbba +0x14e:  lea    -0x1c8(%ebp),%edx
080ecbc0 +0x154:  add    $0x14,%edx
080ecbc3 +0x157:  mov    %edx,0x8(%esp)
080ecbc7 +0x15b:  mov    %eax,0x4(%esp)
080ecbcb +0x15f:  mov    -0x20(%ebp),%eax
080ecbce +0x162:  mov    %eax,(%esp)
080ecbd1 +0x165:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080ecbd6 +0x16a:  xor    $0x1,%eax
080ecbd9 +0x16d:  test   %al,%al
080ecbdb +0x16f:  je     080ecbe7 <+0x17b>
080ecbdd +0x171:  mov    $0x0,%eax
080ecbe2 +0x176:  jmp    080eccd0 <+0x264>
080ecbe7 +0x17b:  mov    -0x1c(%ebp),%eax
080ecbea +0x17e:  addl   $0x1,-0x1c(%ebp)
080ecbee +0x182:  movl   $0x15,0xc(%esp)
080ecbf6 +0x18a:  lea    -0x1c8(%ebp),%edx
080ecbfc +0x190:  add    $0x18,%edx
080ecbff +0x193:  mov    %edx,0x8(%esp)
080ecc03 +0x197:  mov    %eax,0x4(%esp)
080ecc07 +0x19b:  mov    -0x20(%ebp),%eax
080ecc0a +0x19e:  mov    %eax,(%esp)
080ecc0d +0x1a1:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080ecc12 +0x1a6:  xor    $0x1,%eax
080ecc15 +0x1a9:  test   %al,%al
080ecc17 +0x1ab:  je     080ecc23 <+0x1b7>
080ecc19 +0x1ad:  mov    $0x0,%eax
080ecc1e +0x1b2:  jmp    080eccd0 <+0x264>
080ecc23 +0x1b7:  lea    -0x60(%ebp),%ebx
080ecc26 +0x1ba:  mov    $0x0,%eax
080ecc2b +0x1bf:  mov    $0xf,%edx
080ecc30 +0x1c4:  mov    %ebx,%edi
080ecc32 +0x1c6:  mov    %edx,%ecx
080ecc34 +0x1c8:  rep stos %eax,%es:(%edi)
080ecc36 +0x1ca:  mov    -0x1c(%ebp),%eax
080ecc39 +0x1cd:  addl   $0x1,-0x1c(%ebp)
080ecc3d +0x1d1:  movl   $0x3c,0xc(%esp)
080ecc45 +0x1d9:  lea    -0x60(%ebp),%edx
080ecc48 +0x1dc:  mov    %edx,0x8(%esp)
080ecc4c +0x1e0:  mov    %eax,0x4(%esp)
080ecc50 +0x1e4:  mov    -0x20(%ebp),%eax
080ecc53 +0x1e7:  mov    %eax,(%esp)
080ecc56 +0x1ea:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080ecc5b +0x1ef:  xor    $0x1,%eax
080ecc5e +0x1f2:  test   %al,%al
080ecc60 +0x1f4:  je     080ecc69 <+0x1fd>
080ecc62 +0x1f6:  mov    $0x0,%eax
080ecc67 +0x1fb:  jmp    080eccd0 <+0x264>
080ecc69 +0x1fd:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080ecc6e +0x202:  lea    -0x1c8(%ebp),%edx
080ecc74 +0x208:  add    $0x2d,%edx
080ecc77 +0x20b:  mov    %edx,0x8(%esp)
080ecc7b +0x20f:  lea    -0x60(%ebp),%edx
080ecc7e +0x212:  mov    %edx,0x4(%esp)
080ecc82 +0x216:  mov    %eax,(%esp)
080ecc85 +0x219:  call   08292fd4 <_ZN12CEnvironment12DecryptValueEPKcPc>  ; CEnvironment::DecryptValue(char const*, char*)
080ecc8a +0x21e:  xor    $0x1,%eax
080ecc8d +0x221:  test   %al,%al
080ecc8f +0x223:  je     080ecc98 <+0x22c>
080ecc91 +0x225:  mov    $0x0,%eax
080ecc96 +0x22a:  jmp    080eccd0 <+0x264>
080ecc98 +0x22c:  mov    0x10(%ebp),%eax
080ecc9b +0x22f:  mov    %eax,-0x64(%ebp)
080ecc9e +0x232:  mov    0xc(%ebp),%eax
080ecca1 +0x235:  mov    %eax,-0x24(%ebp)
080ecca4 +0x238:  lea    -0x24(%ebp),%eax
080ecca7 +0x23b:  mov    %eax,0x4(%esp)
080eccab +0x23f:  mov    0x14(%ebp),%eax
080eccae +0x242:  mov    %eax,(%esp)
080eccb1 +0x245:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
080eccb6 +0x24a:  mov    %eax,%edx
080eccb8 +0x24c:  lea    -0x1c8(%ebp),%ebx
080eccbe +0x252:  mov    $0x5a,%eax
080eccc3 +0x257:  mov    %edx,%edi
080eccc5 +0x259:  mov    %ebx,%esi
080eccc7 +0x25b:  mov    %eax,%ecx
080eccc9 +0x25d:  rep movsl %ds:(%esi),%es:(%edi)
080ecccb +0x25f:  mov    $0x1,%eax
080eccd0 +0x264:  add    $0x1cc,%esp
080eccd6 +0x26a:  pop    %ebx
080eccd7 +0x26b:  pop    %esi
080eccd8 +0x26c:  pop    %edi
080eccd9 +0x26d:  pop    %ebp
080eccda +0x26e:  ret
```

## 反编译 C

```c
// CDBConnector::QueryConnInfo @ 0x80eca6c

/* CDBConnector::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::map<ENUM_DB_HANDLE_IDX,
   STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const,
   STDBConnInfo> > >&) */

undefined4 __thiscall
CDBConnector::QueryConnInfo
          (undefined4 this,undefined4 param_2,undefined4 param_3,
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CEnvironment *this_00;
  undefined4 *puVar5;
  STDBConnInfo *pSVar6;
  char *pcVar7;
  byte bVar8;
  STDBConnInfo local_1cc [20];
  uint uStack_1b8;
  char acStack_1b4 [21];
  char acStack_19f [21];
  char acStack_18a [290];
  undefined4 local_68;
  char local_64 [60];
  undefined4 local_28;
  MySQL *local_24;
  int local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0,0);
  cVar2 = MySQL::set_query(local_24,
                           "seLect db_name,db_ip,db_port,db_userid,db_passwd from db_connect where db_server_group = %d and db_type = %d"
                           ,param_3,param_2);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::exec(local_24,true);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::fetch(local_24);
      if (cVar2 == '\x01') {
        iVar4 = MySQL::get_n_rows(local_24);
        if (iVar4 == 1) {
          local_20 = 0;
          STDBConnInfo::STDBConnInfo(local_1cc);
          iVar4 = local_20;
          local_20 = local_20 + 1;
          cVar2 = MySQL::get_str(local_24,iVar4,acStack_18a,0x1f);
          iVar4 = local_20;
          if (cVar2 == '\x01') {
            local_20 = local_20 + 1;
            cVar2 = MySQL::get_str(local_24,iVar4,(char *)local_1cc,0x11);
            iVar4 = local_20;
            if (cVar2 == '\x01') {
              local_20 = local_20 + 1;
              cVar2 = MySQL::get_int(local_24,iVar4,&uStack_1b8);
              iVar4 = local_20;
              if (cVar2 == '\x01') {
                local_20 = local_20 + 1;
                cVar2 = MySQL::get_str(local_24,iVar4,acStack_1b4,0x15);
                if (cVar2 == '\x01') {
                  pcVar7 = local_64;
                  for (iVar4 = 0xf; iVar1 = local_20, iVar4 != 0; iVar4 = iVar4 + -1) {
                    pcVar7[0] = '\0';
                    pcVar7[1] = '\0';
                    pcVar7[2] = '\0';
                    pcVar7[3] = '\0';
                    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
                  }
                  local_20 = local_20 + 1;
                  cVar2 = MySQL::get_str(local_24,iVar1,local_64,0x3c);
                  if (cVar2 == '\x01') {
                    this_00 = (CEnvironment *)G_CEnvironment();
                    cVar2 = CEnvironment::DecryptValue(this_00,local_64,acStack_19f);
                    if (cVar2 == '\x01') {
                      local_68 = param_3;
                      local_28 = param_2;
                      puVar5 = (undefined4 *)
                               std::
                               map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                               ::operator[](param_4,(ENUM_DB_HANDLE_IDX *)&local_28);
                      pSVar6 = local_1cc;
                      for (iVar4 = 0x5a; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar5 = *(undefined4 *)pSVar6;
                        pSVar6 = pSVar6 + ((uint)bVar8 * -2 + 1) * 4;
                        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
                      }
                      uVar3 = 1;
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
