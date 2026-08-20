# LoadEventServerMessageInfo

`_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadEventServerMessageInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084356a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084356a2  _ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadEventServerMessageInfo(SIG_LOAD_ETC*)
# range [0x084356a2, 0x08435a01]
084356a2 +0x000:  push   %ebp
084356a3 +0x001:  mov    %esp,%ebp
084356a5 +0x003:  push   %edi
084356a6 +0x004:  push   %ebx
084356a7 +0x005:  add    $0xffffff80,%esp
084356aa +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084356af +0x00d:  movl   $0x0,0x8(%esp)
084356b7 +0x015:  movl   $0x6,0x4(%esp)
084356bf +0x01d:  mov    %eax,(%esp)
084356c2 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084356c7 +0x025:  mov    %eax,-0x1c(%ebp)
084356ca +0x028:  mov    0xc(%ebp),%eax
084356cd +0x02b:  mov    0x2d34(%eax),%edx
084356d3 +0x031:  mov    0xc(%ebp),%eax
084356d6 +0x034:  mov    0x2d30(%eax),%eax
084356dc +0x03a:  mov    %edx,0xc(%esp)
084356e0 +0x03e:  mov    %eax,0x8(%esp)
084356e4 +0x042:  movl   $"seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)",0x4(%esp)
084356ec +0x04a:  mov    -0x1c(%ebp),%eax
084356ef +0x04d:  mov    %eax,(%esp)
084356f2 +0x050:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084356f7 +0x055:  movl   $0x1,0x4(%esp)
084356ff +0x05d:  mov    -0x1c(%ebp),%eax
08435702 +0x060:  mov    %eax,(%esp)
08435705 +0x063:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843570a +0x068:  xor    $0x1,%eax
0843570d +0x06b:  test   %al,%al
0843570f +0x06d:  je     0843571b <+0x79>
08435711 +0x06f:  mov    $0x0,%eax
08435716 +0x074:  jmp    084359fa <+0x358>
0843571b +0x079:  mov    -0x1c(%ebp),%eax
0843571e +0x07c:  mov    %eax,(%esp)
08435721 +0x07f:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08435726 +0x084:  mov    %eax,-0x18(%ebp)
08435729 +0x087:  movb   $0x0,-0x11(%ebp)
0843572d +0x08b:  movb   $0x0,-0x1d(%ebp)
08435731 +0x08f:  movb   $0x0,-0x1e(%ebp)
08435735 +0x093:  lea    -0x6a(%ebp),%edx
08435738 +0x096:  mov    $0x32,%ebx
0843573d +0x09b:  mov    $0x0,%eax
08435742 +0x0a0:  mov    %edx,%ecx
08435744 +0x0a2:  and    $0x2,%ecx
08435747 +0x0a5:  test   %ecx,%ecx
08435749 +0x0a7:  je     08435754 <+0xb2>
0843574b +0x0a9:  mov    %ax,(%edx)
0843574e +0x0ac:  add    $0x2,%edx
08435751 +0x0af:  sub    $0x2,%ebx
08435754 +0x0b2:  mov    %ebx,%ecx
08435756 +0x0b4:  shr    $0x2,%ecx
08435759 +0x0b7:  mov    %edx,%edi
0843575b +0x0b9:  rep stos %eax,%es:(%edi)
0843575d +0x0bb:  mov    %edi,%edx
0843575f +0x0bd:  mov    %ebx,%ecx
08435761 +0x0bf:  and    $0x2,%ecx
08435764 +0x0c2:  test   %ecx,%ecx
08435766 +0x0c4:  je     0843576e <+0xcc>
08435768 +0x0c6:  mov    %ax,(%edx)
0843576b +0x0c9:  add    $0x2,%edx
0843576e +0x0cc:  mov    %ebx,%ecx
08435770 +0x0ce:  and    $0x1,%ecx
08435773 +0x0d1:  test   %ecx,%ecx
08435775 +0x0d3:  je     0843577c <+0xda>
08435777 +0x0d5:  mov    %al,(%edx)
08435779 +0x0d7:  add    $0x1,%edx
0843577c +0x0da:  movl   $0x0,-0x32(%ebp)
08435783 +0x0e1:  movl   $0x0,-0x2e(%ebp)
0843578a +0x0e8:  movl   $0x0,-0x2a(%ebp)
08435791 +0x0ef:  movl   $0x0,-0x26(%ebp)
08435798 +0x0f6:  movl   $0x0,-0x22(%ebp)
0843579f +0x0fd:  movl   $0x0,-0x38(%ebp)
084357a6 +0x104:  movl   $0x0,-0x10(%ebp)
084357ad +0x10b:  movl   $0x0,-0xc(%ebp)
084357b4 +0x112:  jmp    084359d6 <+0x334>
084357b9 +0x117:  mov    -0x1c(%ebp),%eax
084357bc +0x11a:  mov    %eax,(%esp)
084357bf +0x11d:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084357c4 +0x122:  mov    %al,-0x11(%ebp)
084357c7 +0x125:  movzbl -0x11(%ebp),%eax
084357cb +0x129:  xor    $0x1,%eax
084357ce +0x12c:  test   %al,%al
084357d0 +0x12e:  je     084357dc <+0x13a>
084357d2 +0x130:  mov    $0x0,%eax
084357d7 +0x135:  jmp    084359fa <+0x358>
084357dc +0x13a:  lea    -0x1d(%ebp),%eax
084357df +0x13d:  mov    %eax,0x8(%esp)
084357e3 +0x141:  movl   $0x0,0x4(%esp)
084357eb +0x149:  mov    -0x1c(%ebp),%eax
084357ee +0x14c:  mov    %eax,(%esp)
084357f1 +0x14f:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084357f6 +0x154:  mov    %al,-0x11(%ebp)
084357f9 +0x157:  movzbl -0x11(%ebp),%eax
084357fd +0x15b:  xor    $0x1,%eax
08435800 +0x15e:  test   %al,%al
08435802 +0x160:  je     0843580e <+0x16c>
08435804 +0x162:  mov    $0x0,%eax
08435809 +0x167:  jmp    084359fa <+0x358>
0843580e +0x16c:  lea    -0x1e(%ebp),%eax
08435811 +0x16f:  mov    %eax,0x8(%esp)
08435815 +0x173:  movl   $0x1,0x4(%esp)
0843581d +0x17b:  mov    -0x1c(%ebp),%eax
08435820 +0x17e:  mov    %eax,(%esp)
08435823 +0x181:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08435828 +0x186:  mov    %al,-0x11(%ebp)
0843582b +0x189:  movzbl -0x11(%ebp),%eax
0843582f +0x18d:  xor    $0x1,%eax
08435832 +0x190:  test   %al,%al
08435834 +0x192:  je     08435840 <+0x19e>
08435836 +0x194:  mov    $0x0,%eax
0843583b +0x199:  jmp    084359fa <+0x358>
08435840 +0x19e:  movl   $0x14,0xc(%esp)
08435848 +0x1a6:  lea    -0x32(%ebp),%eax
0843584b +0x1a9:  mov    %eax,0x8(%esp)
0843584f +0x1ad:  movl   $0x2,0x4(%esp)
08435857 +0x1b5:  mov    -0x1c(%ebp),%eax
0843585a +0x1b8:  mov    %eax,(%esp)
0843585d +0x1bb:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08435862 +0x1c0:  mov    %al,-0x11(%ebp)
08435865 +0x1c3:  movzbl -0x11(%ebp),%eax
08435869 +0x1c7:  xor    $0x1,%eax
0843586c +0x1ca:  test   %al,%al
0843586e +0x1cc:  je     0843587a <+0x1d8>
08435870 +0x1ce:  mov    $0x0,%eax
08435875 +0x1d3:  jmp    084359fa <+0x358>
0843587a +0x1d8:  movl   $0x32,0xc(%esp)
08435882 +0x1e0:  lea    -0x6a(%ebp),%eax
08435885 +0x1e3:  mov    %eax,0x8(%esp)
08435889 +0x1e7:  movl   $0x3,0x4(%esp)
08435891 +0x1ef:  mov    -0x1c(%ebp),%eax
08435894 +0x1f2:  mov    %eax,(%esp)
08435897 +0x1f5:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843589c +0x1fa:  mov    %al,-0x11(%ebp)
0843589f +0x1fd:  movzbl -0x11(%ebp),%eax
084358a3 +0x201:  xor    $0x1,%eax
084358a6 +0x204:  test   %al,%al
084358a8 +0x206:  je     084358b4 <+0x212>
084358aa +0x208:  mov    $0x0,%eax
084358af +0x20d:  jmp    084359fa <+0x358>
084358b4 +0x212:  lea    -0x38(%ebp),%eax
084358b7 +0x215:  mov    %eax,0x8(%esp)
084358bb +0x219:  movl   $0x4,0x4(%esp)
084358c3 +0x221:  mov    -0x1c(%ebp),%eax
084358c6 +0x224:  mov    %eax,(%esp)
084358c9 +0x227:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084358ce +0x22c:  mov    %al,-0x11(%ebp)
084358d1 +0x22f:  movzbl -0x11(%ebp),%eax
084358d5 +0x233:  xor    $0x1,%eax
084358d8 +0x236:  test   %al,%al
084358da +0x238:  je     084358e6 <+0x244>
084358dc +0x23a:  mov    $0x0,%eax
084358e1 +0x23f:  jmp    084359fa <+0x358>
084358e6 +0x244:  mov    -0x10(%ebp),%edx
084358e9 +0x247:  movzbl -0x1d(%ebp),%eax
084358ed +0x24b:  mov    0xc(%ebp),%ecx
084358f0 +0x24e:  imul   $0x58,%edx,%edx
084358f3 +0x251:  lea    (%ecx,%edx,1),%edx
084358f6 +0x254:  add    $0x2d3c,%edx
084358fc +0x25a:  mov    %al,(%edx)
084358fe +0x25c:  mov    -0x10(%ebp),%edx
08435901 +0x25f:  movzbl -0x1e(%ebp),%eax
08435905 +0x263:  mov    0xc(%ebp),%ecx
08435908 +0x266:  imul   $0x58,%edx,%edx
0843590b +0x269:  lea    (%ecx,%edx,1),%edx
0843590e +0x26c:  add    $0x2d3d,%edx
08435914 +0x272:  mov    %al,(%edx)
08435916 +0x274:  mov    -0x10(%ebp),%ebx
08435919 +0x277:  lea    -0x6a(%ebp),%eax
0843591c +0x27a:  mov    %eax,(%esp)
0843591f +0x27d:  call   0807e3b0 <_init+0xca8>
08435924 +0x282:  mov    0xc(%ebp),%ecx
08435927 +0x285:  imul   $0x58,%ebx,%edx
0843592a +0x288:  lea    (%ecx,%edx,1),%edx
0843592d +0x28b:  add    $0x2d30,%edx
08435933 +0x291:  mov    %eax,0x10(%edx)
08435936 +0x294:  lea    -0x6a(%ebp),%eax
08435939 +0x297:  mov    %eax,(%esp)
0843593c +0x29a:  call   0807e3b0 <_init+0xca8>
08435941 +0x29f:  mov    -0x10(%ebp),%edx
08435944 +0x2a2:  imul   $0x58,%edx,%edx
08435947 +0x2a5:  add    $0x2d30,%edx
0843594d +0x2ab:  add    0xc(%ebp),%edx
08435950 +0x2ae:  add    $0x14,%edx
08435953 +0x2b1:  mov    %eax,0x8(%esp)
08435957 +0x2b5:  lea    -0x6a(%ebp),%eax
0843595a +0x2b8:  mov    %eax,0x4(%esp)
0843595e +0x2bc:  mov    %edx,(%esp)
08435961 +0x2bf:  call   0807d8d0 <_init+0x1c8>
08435966 +0x2c4:  mov    -0x10(%ebp),%ebx
08435969 +0x2c7:  lea    -0x32(%ebp),%eax
0843596c +0x2ca:  mov    %eax,(%esp)
0843596f +0x2cd:  call   0807e3b0 <_init+0xca8>
08435974 +0x2d2:  mov    0xc(%ebp),%ecx
08435977 +0x2d5:  imul   $0x58,%ebx,%edx
0843597a +0x2d8:  lea    (%ecx,%edx,1),%edx
0843597d +0x2db:  add    $0x2d60,%edx
08435983 +0x2e1:  mov    %eax,0x18(%edx)
08435986 +0x2e4:  lea    -0x32(%ebp),%eax
08435989 +0x2e7:  mov    %eax,(%esp)
0843598c +0x2ea:  call   0807e3b0 <_init+0xca8>
08435991 +0x2ef:  mov    -0x10(%ebp),%edx
08435994 +0x2f2:  imul   $0x58,%edx,%edx
08435997 +0x2f5:  add    $0x2d70,%edx
0843599d +0x2fb:  add    0xc(%ebp),%edx
084359a0 +0x2fe:  add    $0xc,%edx
084359a3 +0x301:  mov    %eax,0x8(%esp)
084359a7 +0x305:  lea    -0x32(%ebp),%eax
084359aa +0x308:  mov    %eax,0x4(%esp)
084359ae +0x30c:  mov    %edx,(%esp)
084359b1 +0x30f:  call   0807d8d0 <_init+0x1c8>
084359b6 +0x314:  mov    -0x10(%ebp),%edx
084359b9 +0x317:  mov    -0x38(%ebp),%eax
084359bc +0x31a:  mov    0xc(%ebp),%ecx
084359bf +0x31d:  imul   $0x58,%edx,%edx
084359c2 +0x320:  lea    (%ecx,%edx,1),%edx
084359c5 +0x323:  add    $0x2d80,%edx
084359cb +0x329:  mov    %eax,0x10(%edx)
084359ce +0x32c:  addl   $0x1,-0x10(%ebp)
084359d2 +0x330:  addl   $0x1,-0xc(%ebp)
084359d6 +0x334:  mov    -0xc(%ebp),%eax
084359d9 +0x337:  cmp    -0x18(%ebp),%eax
084359dc +0x33a:  setl   %al
084359df +0x33d:  test   %al,%al
084359e1 +0x33f:  jne    084357b9 <+0x117>
084359e7 +0x345:  mov    -0x18(%ebp),%eax
084359ea +0x348:  mov    %eax,%edx
084359ec +0x34a:  mov    0xc(%ebp),%eax
084359ef +0x34d:  mov    %dl,0x2d38(%eax)
084359f5 +0x353:  mov    $0x1,%eax
084359fa +0x358:  sub    $0xffffff80,%esp
084359fd +0x35b:  pop    %ebx
084359fe +0x35c:  pop    %edi
084359ff +0x35d:  pop    %ebp
08435a00 +0x35e:  ret
08435a01 +0x35f:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadEventServerMessageInfo @ 0x84356a2

/* WARNING: Removing unreachable block (ram,0x08435777) */
/* DB_LoadEtc::LoadEventServerMessageInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadEventServerMessageInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_6e [50];
  int local_3c;
  char local_36 [20];
  SIG_LOAD_ETC local_22;
  SIG_LOAD_ETC local_21;
  MySQL *local_20;
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  bVar8 = 0;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_20,
                   "seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)"
                   ,*(undefined4 *)(param_1 + 0x2d30),*(undefined4 *)(param_1 + 0x2d34));
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    local_1c = MySQL::get_n_rows(local_20);
    local_15 = '\0';
    local_21 = (SIG_LOAD_ETC)0x0;
    local_22 = (SIG_LOAD_ETC)0x0;
    pcVar5 = local_6e;
    uVar6 = 0x32;
    bVar7 = ((uint)pcVar5 & 2) != 0;
    if (bVar7) {
      local_6e[0] = '\0';
      local_6e[1] = '\0';
      pcVar5 = local_6e + 2;
      uVar6 = 0x30;
    }
    for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if (!bVar7) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
    }
    local_36[0] = '\0';
    local_36[1] = '\0';
    local_36[2] = '\0';
    local_36[3] = '\0';
    local_36[4] = '\0';
    local_36[5] = '\0';
    local_36[6] = '\0';
    local_36[7] = '\0';
    local_36[8] = '\0';
    local_36[9] = '\0';
    local_36[10] = '\0';
    local_36[0xb] = '\0';
    local_36[0xc] = '\0';
    local_36[0xd] = '\0';
    local_36[0xe] = '\0';
    local_36[0xf] = '\0';
    local_36[0x10] = '\0';
    local_36[0x11] = '\0';
    local_36[0x12] = '\0';
    local_36[0x13] = '\0';
    local_3c = 0;
    local_14 = 0;
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_15 = MySQL::fetch(local_20);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_byte(local_20,0,(char *)&local_21);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_byte(local_20,1,(char *)&local_22);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_str(local_20,2,local_36,0x14);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_str(local_20,3,local_6e,0x32);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_int(local_20,4,&local_3c);
      iVar1 = local_14;
      if (local_15 != '\x01') {
        return 0;
      }
      param_1[local_14 * 0x58 + 0x2d3c] = local_21;
      param_1[local_14 * 0x58 + 0x2d3d] = local_22;
      sVar4 = strlen(local_6e);
      *(size_t *)(param_1 + iVar1 * 0x58 + 0x2d40) = sVar4;
      sVar4 = strlen(local_6e);
      strncpy((char *)(param_1 + local_14 * 0x58 + 0x2d44),local_6e,sVar4);
      iVar1 = local_14;
      sVar4 = strlen(local_36);
      *(size_t *)(param_1 + iVar1 * 0x58 + 0x2d78) = sVar4;
      sVar4 = strlen(local_36);
      strncpy((char *)(param_1 + local_14 * 0x58 + 0x2d7c),local_36,sVar4);
      *(int *)(param_1 + local_14 * 0x58 + 0x2d90) = local_3c;
      local_14 = local_14 + 1;
    }
    param_1[0x2d38] = SUB41(local_1c,0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
