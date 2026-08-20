# dispatch

`_ZN21DB_InsertResponseTime8dispatchEiiP6Stream`

`DB_InsertResponseTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertResponseTime` | `0x0843fc26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843fc26  _ZN21DB_InsertResponseTime8dispatchEiiP6Stream
#           DB_InsertResponseTime::dispatch(int, int, Stream*)
# range [0x0843fc26, 0x0843feb9]
0843fc26 +0x000:  push   %ebp
0843fc27 +0x001:  mov    %esp,%ebp
0843fc29 +0x003:  push   %edi
0843fc2a +0x004:  push   %esi
0843fc2b +0x005:  push   %ebx
0843fc2c +0x006:  sub    $0x19c,%esp
0843fc32 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843fc37 +0x011:  movl   $0x0,0x8(%esp)
0843fc3f +0x019:  movl   $0x4,0x4(%esp)
0843fc47 +0x021:  mov    %eax,(%esp)
0843fc4a +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843fc4f +0x029:  mov    %eax,-0x24(%ebp)
0843fc52 +0x02c:  mov    0x14(%ebp),%eax
0843fc55 +0x02f:  mov    %eax,(%esp)
0843fc58 +0x032:  call   08453c64 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x687a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x687a
0843fc5d +0x037:  mov    %eax,-0x20(%ebp)
0843fc60 +0x03a:  lea    -0x28(%ebp),%eax
0843fc63 +0x03d:  mov    %eax,(%esp)
0843fc66 +0x040:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0843fc6b +0x045:  lea    -0x163(%ebp),%edx
0843fc71 +0x04b:  mov    $0xff,%ebx
0843fc76 +0x050:  mov    $0x0,%eax
0843fc7b +0x055:  mov    %edx,%ecx
0843fc7d +0x057:  and    $0x1,%ecx
0843fc80 +0x05a:  test   %ecx,%ecx
0843fc82 +0x05c:  je     0843fc8c <+0x66>
0843fc84 +0x05e:  mov    %al,(%edx)
0843fc86 +0x060:  add    $0x1,%edx
0843fc89 +0x063:  sub    $0x1,%ebx
0843fc8c +0x066:  mov    %edx,%ecx
0843fc8e +0x068:  and    $0x2,%ecx
0843fc91 +0x06b:  test   %ecx,%ecx
0843fc93 +0x06d:  je     0843fc9e <+0x78>
0843fc95 +0x06f:  mov    %ax,(%edx)
0843fc98 +0x072:  add    $0x2,%edx
0843fc9b +0x075:  sub    $0x2,%ebx
0843fc9e +0x078:  mov    %ebx,%ecx
0843fca0 +0x07a:  shr    $0x2,%ecx
0843fca3 +0x07d:  mov    %edx,%edi
0843fca5 +0x07f:  rep stos %eax,%es:(%edi)
0843fca7 +0x081:  mov    %edi,%edx
0843fca9 +0x083:  mov    %ebx,%ecx
0843fcab +0x085:  and    $0x2,%ecx
0843fcae +0x088:  test   %ecx,%ecx
0843fcb0 +0x08a:  je     0843fcb8 <+0x92>
0843fcb2 +0x08c:  mov    %ax,(%edx)
0843fcb5 +0x08f:  add    $0x2,%edx
0843fcb8 +0x092:  mov    %ebx,%ecx
0843fcba +0x094:  and    $0x1,%ecx
0843fcbd +0x097:  test   %ecx,%ecx
0843fcbf +0x099:  je     0843fcc6 <+0xa0>
0843fcc1 +0x09b:  mov    %al,(%edx)
0843fcc3 +0x09d:  add    $0x1,%edx
0843fcc6 +0x0a0:  movl   $0x0,-0x1c(%ebp)
0843fccd +0x0a7:  jmp    0843fdd8 <+0x1b2>
0843fcd2 +0x0ac:  lea    -0x28(%ebp),%eax
0843fcd5 +0x0af:  mov    %eax,(%esp)
0843fcd8 +0x0b2:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0843fcdd +0x0b7:  xor    $0x1,%eax
0843fce0 +0x0ba:  test   %al,%al
0843fce2 +0x0bc:  je     0843fcf7 <+0xd1>
0843fce4 +0x0be:  movl   $",",0x4(%esp)
0843fcec +0x0c6:  lea    -0x28(%ebp),%eax
0843fcef +0x0c9:  mov    %eax,(%esp)
0843fcf2 +0x0cc:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0843fcf7 +0x0d1:  mov    -0x1c(%ebp),%edx
0843fcfa +0x0d4:  mov    -0x20(%ebp),%ecx
0843fcfd +0x0d7:  mov    %edx,%eax
0843fcff +0x0d9:  shl    $0x2,%eax
0843fd02 +0x0dc:  add    %edx,%eax
0843fd04 +0x0de:  shl    $0x2,%eax
0843fd07 +0x0e1:  lea    (%ecx,%eax,1),%eax
0843fd0a +0x0e4:  add    $0x18,%eax
0843fd0d +0x0e7:  mov    (%eax),%eax
0843fd0f +0x0e9:  mov    %eax,-0x174(%ebp)
0843fd15 +0x0ef:  mov    -0x1c(%ebp),%edx
0843fd18 +0x0f2:  mov    -0x20(%ebp),%ecx
0843fd1b +0x0f5:  mov    %edx,%eax
0843fd1d +0x0f7:  shl    $0x2,%eax
0843fd20 +0x0fa:  add    %edx,%eax
0843fd22 +0x0fc:  shl    $0x2,%eax
0843fd25 +0x0ff:  mov    0x10(%eax,%ecx,1),%ebx
0843fd29 +0x103:  mov    0x14(%eax,%ecx,1),%esi
0843fd2d +0x107:  mov    -0x1c(%ebp),%edx
0843fd30 +0x10a:  mov    -0x20(%ebp),%ecx
0843fd33 +0x10d:  mov    %edx,%eax
0843fd35 +0x10f:  shl    $0x2,%eax
0843fd38 +0x112:  add    %edx,%eax
0843fd3a +0x114:  shl    $0x2,%eax
0843fd3d +0x117:  lea    (%ecx,%eax,1),%eax
0843fd40 +0x11a:  add    $0xc,%eax
0843fd43 +0x11d:  mov    (%eax),%eax
0843fd45 +0x11f:  mov    %eax,-0x170(%ebp)
0843fd4b +0x125:  mov    -0x1c(%ebp),%edx
0843fd4e +0x128:  mov    -0x20(%ebp),%ecx
0843fd51 +0x12b:  mov    %edx,%eax
0843fd53 +0x12d:  shl    $0x2,%eax
0843fd56 +0x130:  add    %edx,%eax
0843fd58 +0x132:  shl    $0x2,%eax
0843fd5b +0x135:  lea    (%ecx,%eax,1),%eax
0843fd5e +0x138:  add    $0x8,%eax
0843fd61 +0x13b:  mov    (%eax),%eax
0843fd63 +0x13d:  mov    %eax,-0x16c(%ebp)
0843fd69 +0x143:  mov    -0x20(%ebp),%eax
0843fd6c +0x146:  mov    (%eax),%edi
0843fd6e +0x148:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0843fd73 +0x14d:  mov    %eax,(%esp)
0843fd76 +0x150:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0843fd7b +0x155:  mov    -0x174(%ebp),%edx
0843fd81 +0x15b:  mov    %edx,0x20(%esp)
0843fd85 +0x15f:  mov    %ebx,0x18(%esp)
0843fd89 +0x163:  mov    %esi,0x1c(%esp)
0843fd8d +0x167:  mov    -0x170(%ebp),%edx
0843fd93 +0x16d:  mov    %edx,0x14(%esp)
0843fd97 +0x171:  mov    -0x16c(%ebp),%edx
0843fd9d +0x177:  mov    %edx,0x10(%esp)
0843fda1 +0x17b:  mov    %edi,0xc(%esp)
0843fda5 +0x17f:  mov    %eax,0x8(%esp)
0843fda9 +0x183:  movl   $"(%d,from_unixtime(%d),%u,%u,%llu,%u)",0x4(%esp)
0843fdb1 +0x18b:  lea    -0x163(%ebp),%eax
0843fdb7 +0x191:  mov    %eax,(%esp)
0843fdba +0x194:  call   0807e440 <_init+0xd38>
0843fdbf +0x199:  lea    -0x163(%ebp),%eax
0843fdc5 +0x19f:  mov    %eax,0x4(%esp)
0843fdc9 +0x1a3:  lea    -0x28(%ebp),%eax
0843fdcc +0x1a6:  mov    %eax,(%esp)
0843fdcf +0x1a9:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0843fdd4 +0x1ae:  addl   $0x1,-0x1c(%ebp)
0843fdd8 +0x1b2:  cmpl   $0x63,-0x1c(%ebp)
0843fddc +0x1b6:  jg     0843fdf0 <+0x1ca>
0843fdde +0x1b8:  mov    -0x20(%ebp),%eax
0843fde1 +0x1bb:  mov    0x4(%eax),%eax
0843fde4 +0x1be:  cmp    -0x1c(%ebp),%eax
0843fde7 +0x1c1:  jle    0843fdf0 <+0x1ca>
0843fde9 +0x1c3:  mov    $0x1,%eax
0843fdee +0x1c8:  jmp    0843fdf5 <+0x1cf>
0843fdf0 +0x1ca:  mov    $0x0,%eax
0843fdf5 +0x1cf:  test   %al,%al
0843fdf7 +0x1d1:  jne    0843fcd2 <+0xac>
0843fdfd +0x1d7:  movl   $0x0,-0x32(%ebp)
0843fe04 +0x1de:  movl   $0x0,-0x2e(%ebp)
0843fe0b +0x1e5:  movw   $0x0,-0x2a(%ebp)
0843fe11 +0x1eb:  mov    -0x20(%ebp),%eax
0843fe14 +0x1ee:  mov    (%eax),%eax
0843fe16 +0x1f0:  mov    %eax,-0x38(%ebp)
0843fe19 +0x1f3:  lea    -0x64(%ebp),%eax
0843fe1c +0x1f6:  mov    %eax,0x4(%esp)
0843fe20 +0x1fa:  lea    -0x38(%ebp),%eax
0843fe23 +0x1fd:  mov    %eax,(%esp)
0843fe26 +0x200:  call   0807e360 <_init+0xc58>
0843fe2b +0x205:  lea    -0x64(%ebp),%eax
0843fe2e +0x208:  mov    %eax,0xc(%esp)
0843fe32 +0x20c:  movl   $"%Y%m",0x8(%esp)
0843fe3a +0x214:  movl   $0xa,0x4(%esp)
0843fe42 +0x21c:  lea    -0x32(%ebp),%eax
0843fe45 +0x21f:  mov    %eax,(%esp)
0843fe48 +0x222:  call   0807dbc0 <_init+0x4b8>
0843fe4d +0x227:  lea    -0x28(%ebp),%eax
0843fe50 +0x22a:  mov    %eax,(%esp)
0843fe53 +0x22d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0843fe58 +0x232:  mov    %eax,0xc(%esp)
0843fe5c +0x236:  lea    -0x32(%ebp),%eax
0843fe5f +0x239:  mov    %eax,0x8(%esp)
0843fe63 +0x23d:  movl   $"inSert into log_response_time_%s(channel_no,occ_time,packet_id,packet_count,total_response_time,avg_response_time) values%s",0x4(%esp)
0843fe6b +0x245:  mov    -0x24(%ebp),%eax
0843fe6e +0x248:  mov    %eax,(%esp)
0843fe71 +0x24b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843fe76 +0x250:  movl   $0x1,0x4(%esp)
0843fe7e +0x258:  mov    -0x24(%ebp),%eax
0843fe81 +0x25b:  mov    %eax,(%esp)
0843fe84 +0x25e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843fe89 +0x263:  mov    %eax,%ebx
0843fe8b +0x265:  lea    -0x28(%ebp),%eax
0843fe8e +0x268:  mov    %eax,(%esp)
0843fe91 +0x26b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0843fe96 +0x270:  mov    %ebx,%eax
0843fe98 +0x272:  add    $0x19c,%esp
0843fe9e +0x278:  pop    %ebx
0843fe9f +0x279:  pop    %esi
0843fea0 +0x27a:  pop    %edi
0843fea1 +0x27b:  pop    %ebp
0843fea2 +0x27c:  ret
0843fea3 +0x27d:  mov    %edx,%ebx
0843fea5 +0x27f:  mov    %eax,%esi
0843fea7 +0x281:  lea    -0x28(%ebp),%eax
0843feaa +0x284:  mov    %eax,(%esp)
0843fead +0x287:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0843feb2 +0x28c:  mov    %esi,%eax
0843feb4 +0x28e:  mov    %ebx,%edx
0843feb6 +0x290:  mov    %eax,(%esp)
0843feb9 +0x293:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_InsertResponseTime::dispatch @ 0x843fc26

/* DB_InsertResponseTime::dispatch(int, int, Stream*) */

undefined4 DB_InsertResponseTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CEnvironment *this;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  Stream *in_stack_00000010;
  char local_167;
  char local_166 [254];
  tm local_68;
  time_t local_3c;
  char local_36 [10];
  string local_2c [4];
  MySQL *local_28;
  SIG_INSERT_RESPONSE_TIME *local_24;
  int local_20;
  
  bVar13 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = Stream::GetOutBuffer<SIG_INSERT_RESPONSE_TIME>(in_stack_00000010);
  std::string::string(local_2c);
  pcVar10 = &local_167;
  uVar11 = 0xff;
  bVar12 = ((uint)pcVar10 & 1) != 0;
  if (bVar12) {
    local_167 = '\0';
    pcVar10 = local_166;
    uVar11 = 0xfe;
  }
  if (((uint)pcVar10 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
    uVar11 = uVar11 - 2;
  }
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
  }
  if ((uVar11 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
  }
  if (!bVar12) {
    *pcVar10 = '\0';
  }
  local_20 = 0;
  while( true ) {
    if ((local_20 < 100) && (local_20 < *(int *)(local_24 + 4))) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (!bVar12) break;
                    /* try { // try from 0843fcd8 to 0843fe88 has its CatchHandler @ 0843fea3 */
    cVar6 = std::string::empty(local_2c);
    if (cVar6 != '\x01') {
      std::string::operator+=(local_2c,",");
    }
    uVar8 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x18);
    uVar1 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x10);
    uVar2 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0x14);
    uVar3 = *(undefined4 *)(local_24 + local_20 * 0x14 + 0xc);
    uVar4 = *(undefined4 *)(local_24 + local_20 * 0x14 + 8);
    uVar5 = *(undefined4 *)local_24;
    this = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this);
    sprintf(&local_167,"(%d,from_unixtime(%d),%u,%u,%llu,%u)",uVar7,uVar5,uVar4,uVar3,uVar1,uVar2,
            uVar8);
    std::string::operator+=(local_2c,&local_167);
    local_20 = local_20 + 1;
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
  local_3c = *(time_t *)local_24;
  localtime_r(&local_3c,&local_68);
  strftime(local_36,10,"%Y%m",&local_68);
  uVar8 = std::string::c_str(local_2c);
  MySQL::set_query(local_28,
                   "inSert into log_response_time_%s(channel_no,occ_time,packet_id,packet_count,total_response_time,avg_response_time) values%s"
                   ,local_36,uVar8);
  uVar8 = MySQL::exec(local_28,true);
  std::string::~string(local_2c);
  return uVar8;
}
```
