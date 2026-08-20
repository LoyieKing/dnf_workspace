# LoadTitleBook

`_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406092  _ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*)
# range [0x08406092, 0x08406421]
08406092 +0x000:  push   %ebp
08406093 +0x001:  mov    %esp,%ebp
08406095 +0x003:  push   %edi
08406096 +0x004:  push   %ebx
08406097 +0x005:  sub    $0x3990,%esp
0840609d +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084060a2 +0x010:  movl   $0x0,0x8(%esp)
084060aa +0x018:  movl   $0x2,0x4(%esp)
084060b2 +0x020:  mov    %eax,(%esp)
084060b5 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084060ba +0x028:  mov    %eax,-0x20(%ebp)
084060bd +0x02b:  mov    0xc(%ebp),%eax
084060c0 +0x02e:  mov    0x4(%eax),%eax
084060c3 +0x031:  mov    %eax,0x8(%esp)
084060c7 +0x035:  movl   $"seLect general_section, specific_section, despair, event from charac_titlebook where charac_no=%u",0x4(%esp)
084060cf +0x03d:  mov    -0x20(%ebp),%eax
084060d2 +0x040:  mov    %eax,(%esp)
084060d5 +0x043:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084060da +0x048:  movl   $0x1,0x4(%esp)
084060e2 +0x050:  mov    -0x20(%ebp),%eax
084060e5 +0x053:  mov    %eax,(%esp)
084060e8 +0x056:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084060ed +0x05b:  mov    %al,-0x19(%ebp)
084060f0 +0x05e:  movzbl -0x19(%ebp),%eax
084060f4 +0x062:  xor    $0x1,%eax
084060f7 +0x065:  test   %al,%al
084060f9 +0x067:  je     08406145 <+0xb3>
084060fb +0x069:  mov    0xc(%ebp),%eax
084060fe +0x06c:  mov    0x4(%eax),%ebx
08406101 +0x06f:  movl   $0x5,0xc(%esp)
08406109 +0x077:  movl   $0x19c0,0x8(%esp)
08406111 +0x07f:  movl   $&_ZZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406119 +0x087:  lea    -0x30(%ebp),%eax
0840611c +0x08a:  mov    %eax,(%esp)
0840611f +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406124 +0x092:  mov    %ebx,0x8(%esp)
08406128 +0x096:  movl   $"LoadTitleBook(), exec() ERROR charac_no=%u",0x4(%esp)
08406130 +0x09e:  lea    -0x30(%ebp),%eax
08406133 +0x0a1:  mov    %eax,(%esp)
08406136 +0x0a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840613b +0x0a9:  mov    $0x0,%eax
08406140 +0x0ae:  jmp    08406418 <+0x386>
08406145 +0x0b3:  mov    -0x20(%ebp),%eax
08406148 +0x0b6:  mov    %eax,(%esp)
0840614b +0x0b9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406150 +0x0be:  test   %eax,%eax
08406152 +0x0c0:  sete   %al
08406155 +0x0c3:  test   %al,%al
08406157 +0x0c5:  je     08406163 <+0xd1>
08406159 +0x0c7:  mov    $0x0,%eax
0840615e +0x0cc:  jmp    08406418 <+0x386>
08406163 +0x0d1:  mov    -0x20(%ebp),%eax
08406166 +0x0d4:  mov    %eax,(%esp)
08406169 +0x0d7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840616e +0x0dc:  xor    $0x1,%eax
08406171 +0x0df:  test   %al,%al
08406173 +0x0e1:  je     0840617f <+0xed>
08406175 +0x0e3:  mov    $0x0,%eax
0840617a +0x0e8:  jmp    08406418 <+0x386>
0840617f +0x0ed:  lea    -0x397c(%ebp),%ebx
08406185 +0x0f3:  mov    $0x0,%eax
0840618a +0x0f8:  mov    $0x504,%edx
0840618f +0x0fd:  mov    %ebx,%edi
08406191 +0x0ff:  mov    %edx,%ecx
08406193 +0x101:  rep stos %eax,%es:(%edi)
08406195 +0x103:  movl   $0x1410,0xc(%esp)
0840619d +0x10b:  lea    -0x397c(%ebp),%eax
084061a3 +0x111:  mov    %eax,0x8(%esp)
084061a7 +0x115:  movl   $0x0,0x4(%esp)
084061af +0x11d:  mov    -0x20(%ebp),%eax
084061b2 +0x120:  mov    %eax,(%esp)
084061b5 +0x123:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084061ba +0x128:  xor    $0x1,%eax
084061bd +0x12b:  test   %al,%al
084061bf +0x12d:  je     084061cb <+0x139>
084061c1 +0x12f:  mov    $0x0,%eax
084061c6 +0x134:  jmp    08406418 <+0x386>
084061cb +0x139:  movl   $0x0,0x4(%esp)
084061d3 +0x141:  mov    -0x20(%ebp),%eax
084061d6 +0x144:  mov    %eax,(%esp)
084061d9 +0x147:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
084061de +0x14c:  mov    %eax,-0x18(%ebp)
084061e1 +0x14f:  movl   $0x10ae,-0x34(%ebp)
084061e8 +0x156:  mov    0xc(%ebp),%eax
084061eb +0x159:  add    $0x466a,%eax
084061f0 +0x15e:  mov    -0x18(%ebp),%edx
084061f3 +0x161:  mov    %edx,0xc(%esp)
084061f7 +0x165:  lea    -0x397c(%ebp),%edx
084061fd +0x16b:  mov    %edx,0x8(%esp)
08406201 +0x16f:  lea    -0x34(%ebp),%edx
08406204 +0x172:  mov    %edx,0x4(%esp)
08406208 +0x176:  mov    %eax,(%esp)
0840620b +0x179:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406210 +0x17e:  xor    $0x1,%eax
08406213 +0x181:  test   %al,%al
08406215 +0x183:  je     08406221 <+0x18f>
08406217 +0x185:  mov    $0x0,%eax
0840621c +0x18a:  jmp    08406418 <+0x386>
08406221 +0x18f:  lea    -0x397c(%ebp),%eax
08406227 +0x195:  mov    $0x393c,%edx
0840622c +0x19a:  mov    %edx,0x8(%esp)
08406230 +0x19e:  movl   $0x0,0x4(%esp)
08406238 +0x1a6:  mov    %eax,(%esp)
0840623b +0x1a9:  call   0807dcc0 <_init+0x5b8>
08406240 +0x1ae:  movl   $0x393c,0xc(%esp)
08406248 +0x1b6:  lea    -0x397c(%ebp),%eax
0840624e +0x1bc:  mov    %eax,0x8(%esp)
08406252 +0x1c0:  movl   $0x1,0x4(%esp)
0840625a +0x1c8:  mov    -0x20(%ebp),%eax
0840625d +0x1cb:  mov    %eax,(%esp)
08406260 +0x1ce:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08406265 +0x1d3:  xor    $0x1,%eax
08406268 +0x1d6:  test   %al,%al
0840626a +0x1d8:  je     08406276 <+0x1e4>
0840626c +0x1da:  mov    $0x0,%eax
08406271 +0x1df:  jmp    08406418 <+0x386>
08406276 +0x1e4:  movl   $0x1,0x4(%esp)
0840627e +0x1ec:  mov    -0x20(%ebp),%eax
08406281 +0x1ef:  mov    %eax,(%esp)
08406284 +0x1f2:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08406289 +0x1f7:  mov    %eax,-0x14(%ebp)
0840628c +0x1fa:  movl   $0x2fa8,-0x38(%ebp)
08406293 +0x201:  mov    0xc(%ebp),%eax
08406296 +0x204:  add    $0x5718,%eax
0840629b +0x209:  mov    -0x14(%ebp),%edx
0840629e +0x20c:  mov    %edx,0xc(%esp)
084062a2 +0x210:  lea    -0x397c(%ebp),%edx
084062a8 +0x216:  mov    %edx,0x8(%esp)
084062ac +0x21a:  lea    -0x38(%ebp),%edx
084062af +0x21d:  mov    %edx,0x4(%esp)
084062b3 +0x221:  mov    %eax,(%esp)
084062b6 +0x224:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
084062bb +0x229:  xor    $0x1,%eax
084062be +0x22c:  test   %al,%al
084062c0 +0x22e:  je     084062cc <+0x23a>
084062c2 +0x230:  mov    $0x0,%eax
084062c7 +0x235:  jmp    08406418 <+0x386>
084062cc +0x23a:  lea    -0x397c(%ebp),%eax
084062d2 +0x240:  mov    $0x225c,%edx
084062d7 +0x245:  mov    %edx,0x8(%esp)
084062db +0x249:  movl   $0x0,0x4(%esp)
084062e3 +0x251:  mov    %eax,(%esp)
084062e6 +0x254:  call   0807dcc0 <_init+0x5b8>
084062eb +0x259:  movl   $0x225c,0xc(%esp)
084062f3 +0x261:  lea    -0x397c(%ebp),%eax
084062f9 +0x267:  mov    %eax,0x8(%esp)
084062fd +0x26b:  movl   $0x2,0x4(%esp)
08406305 +0x273:  mov    -0x20(%ebp),%eax
08406308 +0x276:  mov    %eax,(%esp)
0840630b +0x279:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08406310 +0x27e:  xor    $0x1,%eax
08406313 +0x281:  test   %al,%al
08406315 +0x283:  je     08406321 <+0x28f>
08406317 +0x285:  mov    $0x0,%eax
0840631c +0x28a:  jmp    08406418 <+0x386>
08406321 +0x28f:  movl   $0x2,0x4(%esp)
08406329 +0x297:  mov    -0x20(%ebp),%eax
0840632c +0x29a:  mov    %eax,(%esp)
0840632f +0x29d:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08406334 +0x2a2:  mov    %eax,-0x10(%ebp)
08406337 +0x2a5:  movl   $0x1c98,-0x3c(%ebp)
0840633e +0x2ac:  mov    0xc(%ebp),%eax
08406341 +0x2af:  add    $0x86c0,%eax
08406346 +0x2b4:  mov    -0x10(%ebp),%edx
08406349 +0x2b7:  mov    %edx,0xc(%esp)
0840634d +0x2bb:  lea    -0x397c(%ebp),%edx
08406353 +0x2c1:  mov    %edx,0x8(%esp)
08406357 +0x2c5:  lea    -0x3c(%ebp),%edx
0840635a +0x2c8:  mov    %edx,0x4(%esp)
0840635e +0x2cc:  mov    %eax,(%esp)
08406361 +0x2cf:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406366 +0x2d4:  xor    $0x1,%eax
08406369 +0x2d7:  test   %al,%al
0840636b +0x2d9:  je     08406377 <+0x2e5>
0840636d +0x2db:  mov    $0x0,%eax
08406372 +0x2e0:  jmp    08406418 <+0x386>
08406377 +0x2e5:  lea    -0x397c(%ebp),%ebx
0840637d +0x2eb:  mov    $0x0,%eax
08406382 +0x2f0:  mov    $0x44d,%edx
08406387 +0x2f5:  mov    %ebx,%edi
08406389 +0x2f7:  mov    %edx,%ecx
0840638b +0x2f9:  rep stos %eax,%es:(%edi)
0840638d +0x2fb:  movl   $0x1134,0xc(%esp)
08406395 +0x303:  lea    -0x397c(%ebp),%eax
0840639b +0x309:  mov    %eax,0x8(%esp)
0840639f +0x30d:  movl   $0x3,0x4(%esp)
084063a7 +0x315:  mov    -0x20(%ebp),%eax
084063aa +0x318:  mov    %eax,(%esp)
084063ad +0x31b:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084063b2 +0x320:  xor    $0x1,%eax
084063b5 +0x323:  test   %al,%al
084063b7 +0x325:  je     084063c0 <+0x32e>
084063b9 +0x327:  mov    $0x0,%eax
084063be +0x32c:  jmp    08406418 <+0x386>
084063c0 +0x32e:  movl   $0x3,0x4(%esp)
084063c8 +0x336:  mov    -0x20(%ebp),%eax
084063cb +0x339:  mov    %eax,(%esp)
084063ce +0x33c:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
084063d3 +0x341:  mov    %eax,-0xc(%ebp)
084063d6 +0x344:  movl   $0xe4c,-0x40(%ebp)
084063dd +0x34b:  mov    0xc(%ebp),%eax
084063e0 +0x34e:  add    $0xa358,%eax
084063e5 +0x353:  mov    -0xc(%ebp),%edx
084063e8 +0x356:  mov    %edx,0xc(%esp)
084063ec +0x35a:  lea    -0x397c(%ebp),%edx
084063f2 +0x360:  mov    %edx,0x8(%esp)
084063f6 +0x364:  lea    -0x40(%ebp),%edx
084063f9 +0x367:  mov    %edx,0x4(%esp)
084063fd +0x36b:  mov    %eax,(%esp)
08406400 +0x36e:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406405 +0x373:  xor    $0x1,%eax
08406408 +0x376:  test   %al,%al
0840640a +0x378:  je     08406413 <+0x381>
0840640c +0x37a:  mov    $0x0,%eax
08406411 +0x37f:  jmp    08406418 <+0x386>
08406413 +0x381:  mov    $0x1,%eax
08406418 +0x386:  add    $0x3990,%esp
0840641e +0x38c:  pop    %ebx
0840641f +0x38d:  pop    %edi
08406420 +0x38e:  pop    %ebp
08406421 +0x38f:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadTitleBook @ 0x8406092

/* DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadTitleBook(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_3980 [14652];
  uint local_44 [4];
  cMyTrace local_34 [16];
  MySQL *local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_24,
                   "seLect general_section, specific_section, despair, event from charac_titlebook where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_1d = MySQL::exec(local_24,true);
  if (local_1d == '\x01') {
    iVar3 = MySQL::get_n_rows(local_24);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 == '\x01') {
        pcVar4 = local_3980;
        for (iVar3 = 0x504; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        cVar1 = MySQL::get_binary(local_24,0,local_3980,0x1410);
        if (cVar1 == '\x01') {
          local_1c = MySQL::get_binary_length(local_24,0);
          local_44[3] = 0x10ae;
          cVar1 = uncompress_zip((char *)(param_1 + 0x466a),local_44 + 3,local_3980,local_1c);
          if (cVar1 == '\x01') {
            memset(local_3980,0,0x393c);
            cVar1 = MySQL::get_binary(local_24,1,local_3980,0x393c);
            if (cVar1 == '\x01') {
              local_18 = MySQL::get_binary_length(local_24,1);
              local_44[2] = 0x2fa8;
              cVar1 = uncompress_zip((char *)(param_1 + 0x5718),local_44 + 2,local_3980,local_18);
              if (cVar1 == '\x01') {
                memset(local_3980,0,0x225c);
                cVar1 = MySQL::get_binary(local_24,2,local_3980,0x225c);
                if (cVar1 == '\x01') {
                  local_14 = MySQL::get_binary_length(local_24,2);
                  local_44[1] = 0x1c98;
                  cVar1 = uncompress_zip((char *)(param_1 + 0x86c0),local_44 + 1,local_3980,local_14
                                        );
                  if (cVar1 == '\x01') {
                    pcVar4 = local_3980;
                    for (iVar3 = 0x44d; iVar3 != 0; iVar3 = iVar3 + -1) {
                      pcVar4[0] = '\0';
                      pcVar4[1] = '\0';
                      pcVar4[2] = '\0';
                      pcVar4[3] = '\0';
                      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
                    }
                    cVar1 = MySQL::get_binary(local_24,3,local_3980,0x1134);
                    if (cVar1 == '\x01') {
                      local_10 = MySQL::get_binary_length(local_24,3);
                      local_44[0] = 0xe4c;
                      cVar1 = uncompress_zip((char *)(param_1 + 0xa358),local_44,local_3980,local_10
                                            );
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
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_34,"bool DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*)",0x19c0,5);
    cMyTrace::operator()(local_34,"LoadTitleBook(), exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
