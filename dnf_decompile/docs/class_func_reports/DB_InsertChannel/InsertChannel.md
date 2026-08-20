# InsertChannel

`_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL`

`DB_InsertChannel::InsertChannel(SIG_INSERT_CHANNEL*)`

| 类 | 地址 |
|---|---|
| `DB_InsertChannel` | `0x08403734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403734  _ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL
#           DB_InsertChannel::InsertChannel(SIG_INSERT_CHANNEL*)
# range [0x08403734, 0x08403a4d]
08403734 +0x000:  push   %ebp
08403735 +0x001:  mov    %esp,%ebp
08403737 +0x003:  push   %edi
08403738 +0x004:  push   %esi
08403739 +0x005:  push   %ebx
0840373a +0x006:  sub    $0xdc,%esp
08403740 +0x00c:  mov    0xc(%ebp),%eax
08403743 +0x00f:  mov    0x58(%eax),%edx
08403746 +0x012:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840374b +0x017:  mov    %edx,0x8(%esp)
0840374f +0x01b:  movl   $0x2,0x4(%esp)
08403757 +0x023:  mov    %eax,(%esp)
0840375a +0x026:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840375f +0x02b:  mov    %eax,-0x20(%ebp)
08403762 +0x02e:  mov    0xc(%ebp),%eax
08403765 +0x031:  mov    0x54(%eax),%ebx
08403768 +0x034:  mov    0xc(%ebp),%eax
0840376b +0x037:  add    $0x3b,%eax
0840376e +0x03a:  mov    %eax,-0xb0(%ebp)
08403774 +0x040:  mov    0xc(%ebp),%eax
08403777 +0x043:  movzwl 0x39(%eax),%eax
0840377b +0x047:  cwtl
0840377c +0x048:  mov    %eax,-0xac(%ebp)
08403782 +0x04e:  mov    0xc(%ebp),%eax
08403785 +0x051:  add    $0x1b,%eax
08403788 +0x054:  mov    %eax,-0xa8(%ebp)
0840378e +0x05a:  mov    0xc(%ebp),%eax
08403791 +0x05d:  movzbl 0x1a(%eax),%eax
08403795 +0x061:  movsbl %al,%edi
08403798 +0x064:  mov    0xc(%ebp),%eax
0840379b +0x067:  movzwl 0x18(%eax),%eax
0840379f +0x06b:  movswl %ax,%esi
084037a2 +0x06e:  mov    0xc(%ebp),%eax
084037a5 +0x071:  movzwl 0x16(%eax),%eax
084037a9 +0x075:  movzwl %ax,%ecx
084037ac +0x078:  mov    0xc(%ebp),%eax
084037af +0x07b:  lea    0x6(%eax),%edx
084037b2 +0x07e:  mov    0xc(%ebp),%eax
084037b5 +0x081:  mov    (%eax),%eax
084037b7 +0x083:  mov    %ebx,0x28(%esp)
084037bb +0x087:  mov    -0xb0(%ebp),%ebx
084037c1 +0x08d:  mov    %ebx,0x24(%esp)
084037c5 +0x091:  mov    -0xac(%ebp),%ebx
084037cb +0x097:  mov    %ebx,0x20(%esp)
084037cf +0x09b:  mov    -0xa8(%ebp),%ebx
084037d5 +0x0a1:  mov    %ebx,0x1c(%esp)
084037d9 +0x0a5:  mov    %edi,0x18(%esp)
084037dd +0x0a9:  mov    %esi,0x14(%esp)
084037e1 +0x0ad:  mov    %ecx,0x10(%esp)
084037e5 +0x0b1:  mov    %edx,0xc(%esp)
084037e9 +0x0b5:  mov    %eax,0x8(%esp)
084037ed +0x0b9:  movl   $"inSert into game_channel (gc_no,gc_now,gc_ip,gc_port,gc_max,gc_game,gc_channel,gc_ch_group,gc_channeltype,gc_up_time, gc_type) values(%d,0,'%s',%d,%d,%d,'%s',%d,'%s',now(),%d)",0x4(%esp)
084037f5 +0x0c1:  mov    -0x20(%ebp),%eax
084037f8 +0x0c4:  mov    %eax,(%esp)
084037fb +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403800 +0x0cc:  movl   $0x1,0x4(%esp)
08403808 +0x0d4:  mov    -0x20(%ebp),%eax
0840380b +0x0d7:  mov    %eax,(%esp)
0840380e +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08403813 +0x0df:  mov    %al,-0x21(%ebp)
08403816 +0x0e2:  movzbl -0x21(%ebp),%eax
0840381a +0x0e6:  xor    $0x1,%eax
0840381d +0x0e9:  test   %al,%al
0840381f +0x0eb:  je     084038ee <+0x1ba>
08403825 +0x0f1:  mov    0xc(%ebp),%eax
08403828 +0x0f4:  mov    (%eax),%ebx
0840382a +0x0f6:  mov    0xc(%ebp),%eax
0840382d +0x0f9:  mov    0x54(%eax),%esi
08403830 +0x0fc:  mov    0xc(%ebp),%eax
08403833 +0x0ff:  add    $0x3b,%eax
08403836 +0x102:  mov    %eax,-0xa4(%ebp)
0840383c +0x108:  mov    0xc(%ebp),%eax
0840383f +0x10b:  movzwl 0x39(%eax),%eax
08403843 +0x10f:  cwtl
08403844 +0x110:  mov    %eax,-0xa0(%ebp)
0840384a +0x116:  mov    0xc(%ebp),%eax
0840384d +0x119:  add    $0x1b,%eax
08403850 +0x11c:  mov    %eax,-0x9c(%ebp)
08403856 +0x122:  mov    0xc(%ebp),%eax
08403859 +0x125:  movzbl 0x1a(%eax),%eax
0840385d +0x129:  movsbl %al,%edi
08403860 +0x12c:  mov    0xc(%ebp),%eax
08403863 +0x12f:  movzwl 0x18(%eax),%eax
08403867 +0x133:  movswl %ax,%ecx
0840386a +0x136:  mov    0xc(%ebp),%eax
0840386d +0x139:  movzwl 0x16(%eax),%eax
08403871 +0x13d:  movzwl %ax,%edx
08403874 +0x140:  mov    0xc(%ebp),%eax
08403877 +0x143:  add    $0x6,%eax
0840387a +0x146:  mov    %ebx,0x28(%esp)
0840387e +0x14a:  mov    %esi,0x24(%esp)
08403882 +0x14e:  mov    -0xa4(%ebp),%ebx
08403888 +0x154:  mov    %ebx,0x20(%esp)
0840388c +0x158:  mov    -0xa0(%ebp),%ebx
08403892 +0x15e:  mov    %ebx,0x1c(%esp)
08403896 +0x162:  mov    -0x9c(%ebp),%ebx
0840389c +0x168:  mov    %ebx,0x18(%esp)
084038a0 +0x16c:  mov    %edi,0x14(%esp)
084038a4 +0x170:  mov    %ecx,0x10(%esp)
084038a8 +0x174:  mov    %edx,0xc(%esp)
084038ac +0x178:  mov    %eax,0x8(%esp)
084038b0 +0x17c:  movl   $"upDate game_channel set gc_now=0,gc_ip='%s',gc_port=%d,gc_max=%d,gc_game=%d,gc_channel='%s',gc_ch_group=%d,gc_channeltype='%s',gc_up_time=now(),gc_type=%d where gc_no=%d",0x4(%esp)
084038b8 +0x184:  mov    -0x20(%ebp),%eax
084038bb +0x187:  mov    %eax,(%esp)
084038be +0x18a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084038c3 +0x18f:  movl   $0x1,0x4(%esp)
084038cb +0x197:  mov    -0x20(%ebp),%eax
084038ce +0x19a:  mov    %eax,(%esp)
084038d1 +0x19d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084038d6 +0x1a2:  mov    %al,-0x21(%ebp)
084038d9 +0x1a5:  movzbl -0x21(%ebp),%eax
084038dd +0x1a9:  xor    $0x1,%eax
084038e0 +0x1ac:  test   %al,%al
084038e2 +0x1ae:  je     084038ee <+0x1ba>
084038e4 +0x1b0:  mov    $0x0,%ebx
084038e9 +0x1b5:  jmp    08403a41 <+0x30d>
084038ee +0x1ba:  lea    -0x28(%ebp),%eax
084038f1 +0x1bd:  mov    %eax,(%esp)
084038f4 +0x1c0:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084038f9 +0x1c5:  lea    -0x28(%ebp),%eax
084038fc +0x1c8:  mov    %eax,(%esp)
084038ff +0x1cb:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08403904 +0x1d0:  movl   $0x0,-0x1c(%ebp)
0840390b +0x1d7:  jmp    08403980 <+0x24c>
0840390d +0x1d9:  lea    -0x8c(%ebp),%ebx
08403913 +0x1df:  mov    $0x0,%eax
08403918 +0x1e4:  mov    $0x19,%edx
0840391d +0x1e9:  mov    %ebx,%edi
0840391f +0x1eb:  mov    %edx,%ecx
08403921 +0x1ed:  rep stos %eax,%es:(%edi)
08403923 +0x1ef:  mov    -0x1c(%ebp),%eax
08403926 +0x1f2:  lea    0x1(%eax),%edx
08403929 +0x1f5:  mov    0xc(%ebp),%eax
0840392c +0x1f8:  mov    (%eax),%eax
0840392e +0x1fa:  mov    %edx,0xc(%esp)
08403932 +0x1fe:  mov    %eax,0x8(%esp)
08403936 +0x202:  movl   $"(%d, %d, 0)",0x4(%esp)
0840393e +0x20a:  lea    -0x8c(%ebp),%eax
08403944 +0x210:  mov    %eax,(%esp)
08403947 +0x213:  call   0807e440 <_init+0xd38>
0840394c +0x218:  lea    -0x8c(%ebp),%eax
08403952 +0x21e:  mov    %eax,0x4(%esp)
08403956 +0x222:  lea    -0x28(%ebp),%eax
08403959 +0x225:  mov    %eax,(%esp)
0840395c +0x228:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
08403961 +0x22d:  mov    -0x1c(%ebp),%eax
08403964 +0x230:  cmp    $0x62,%eax
08403967 +0x233:  ja     0840397c <+0x248>
08403969 +0x235:  movl   $", ",0x4(%esp)
08403971 +0x23d:  lea    -0x28(%ebp),%eax
08403974 +0x240:  mov    %eax,(%esp)
08403977 +0x243:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
0840397c +0x248:  addl   $0x1,-0x1c(%ebp)
08403980 +0x24c:  mov    -0x1c(%ebp),%eax
08403983 +0x24f:  cmp    $0x63,%eax
08403986 +0x252:  setbe  %al
08403989 +0x255:  test   %al,%al
0840398b +0x257:  jne    0840390d <+0x1d9>
0840398d +0x259:  lea    -0x28(%ebp),%eax
08403990 +0x25c:  mov    %eax,(%esp)
08403993 +0x25f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08403998 +0x264:  mov    %eax,0x8(%esp)
0840399c +0x268:  movl   $"inSert into channel_occ_info (gc_no, age, occ_num) values %s",0x4(%esp)
084039a4 +0x270:  mov    -0x20(%ebp),%eax
084039a7 +0x273:  mov    %eax,(%esp)
084039aa +0x276:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084039af +0x27b:  movl   $0x1,0x4(%esp)
084039b7 +0x283:  mov    -0x20(%ebp),%eax
084039ba +0x286:  mov    %eax,(%esp)
084039bd +0x289:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084039c2 +0x28e:  mov    %al,-0x21(%ebp)
084039c5 +0x291:  movzbl -0x21(%ebp),%eax
084039c9 +0x295:  xor    $0x1,%eax
084039cc +0x298:  test   %al,%al
084039ce +0x29a:  je     08403a14 <+0x2e0>
084039d0 +0x29c:  mov    0xc(%ebp),%eax
084039d3 +0x29f:  mov    (%eax),%eax
084039d5 +0x2a1:  mov    %eax,0x8(%esp)
084039d9 +0x2a5:  movl   $"upDate channel_occ_info set occ_num = 0 where gc_no = %d",0x4(%esp)
084039e1 +0x2ad:  mov    -0x20(%ebp),%eax
084039e4 +0x2b0:  mov    %eax,(%esp)
084039e7 +0x2b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084039ec +0x2b8:  movl   $0x1,0x4(%esp)
084039f4 +0x2c0:  mov    -0x20(%ebp),%eax
084039f7 +0x2c3:  mov    %eax,(%esp)
084039fa +0x2c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084039ff +0x2cb:  mov    %al,-0x21(%ebp)
08403a02 +0x2ce:  movzbl -0x21(%ebp),%eax
08403a06 +0x2d2:  xor    $0x1,%eax
08403a09 +0x2d5:  test   %al,%al
08403a0b +0x2d7:  je     08403a14 <+0x2e0>
08403a0d +0x2d9:  mov    $0x0,%ebx
08403a12 +0x2de:  jmp    08403a36 <+0x302>
08403a14 +0x2e0:  mov    $0x1,%ebx
08403a19 +0x2e5:  jmp    08403a36 <+0x302>
08403a1b +0x2e7:  mov    %edx,%ebx
08403a1d +0x2e9:  mov    %eax,%esi
08403a1f +0x2eb:  lea    -0x28(%ebp),%eax
08403a22 +0x2ee:  mov    %eax,(%esp)
08403a25 +0x2f1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08403a2a +0x2f6:  mov    %esi,%eax
08403a2c +0x2f8:  mov    %ebx,%edx
08403a2e +0x2fa:  mov    %eax,(%esp)
08403a31 +0x2fd:  call   08ae3750 <_Unwind_Resume>
08403a36 +0x302:  lea    -0x28(%ebp),%eax
08403a39 +0x305:  mov    %eax,(%esp)
08403a3c +0x308:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08403a41 +0x30d:  mov    %ebx,%eax
08403a43 +0x30f:  add    $0xdc,%esp
08403a49 +0x315:  pop    %ebx
08403a4a +0x316:  pop    %esi
08403a4b +0x317:  pop    %edi
08403a4c +0x318:  pop    %ebp
08403a4d +0x319:  ret
```

## 反编译 C

```c
// DB_InsertChannel::InsertChannel @ 0x8403734

/* DB_InsertChannel::InsertChannel(SIG_INSERT_CHANNEL*) */

undefined4 __thiscall
DB_InsertChannel::InsertChannel(DB_InsertChannel *this,SIG_INSERT_CHANNEL *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_90 [100];
  string local_2c [7];
  char local_25;
  MySQL *local_24;
  uint local_20;
  
  bVar4 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,*(undefined4 *)(param_1 + 0x58));
  MySQL::set_query(local_24,
                   "inSert into game_channel (gc_no,gc_now,gc_ip,gc_port,gc_max,gc_game,gc_channel,gc_ch_group,gc_channeltype,gc_up_time, gc_type) values(%d,0,\'%s\',%d,%d,%d,\'%s\',%d,\'%s\',now(),%d)"
                   ,*(undefined4 *)param_1,param_1 + 6,(uint)*(ushort *)(param_1 + 0x16),
                   (int)*(short *)(param_1 + 0x18),(int)(char)param_1[0x1a],param_1 + 0x1b,
                   (int)*(short *)(param_1 + 0x39),param_1 + 0x3b,*(undefined4 *)(param_1 + 0x54));
  local_25 = MySQL::exec(local_24,true);
  if (local_25 != '\x01') {
    MySQL::set_query(local_24,
                     "upDate game_channel set gc_now=0,gc_ip=\'%s\',gc_port=%d,gc_max=%d,gc_game=%d,gc_channel=\'%s\',gc_ch_group=%d,gc_channeltype=\'%s\',gc_up_time=now(),gc_type=%d where gc_no=%d"
                     ,param_1 + 6,(uint)*(ushort *)(param_1 + 0x16),(int)*(short *)(param_1 + 0x18),
                     (int)(char)param_1[0x1a],param_1 + 0x1b,(int)*(short *)(param_1 + 0x39),
                     param_1 + 0x3b,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)param_1);
    local_25 = MySQL::exec(local_24,true);
    if (local_25 != '\x01') {
      return 0;
    }
  }
  std::string::string(local_2c);
                    /* try { // try from 084038ff to 084039fe has its CatchHandler @ 08403a1b */
  std::string::clear(local_2c);
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    pcVar3 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    sprintf(local_90,"(%d, %d, 0)",*(undefined4 *)param_1,local_20 + 1);
    std::string::append(local_2c,local_90);
    if (local_20 < 99) {
      std::string::append(local_2c,", ");
    }
  }
  uVar1 = std::string::c_str(local_2c);
  MySQL::set_query(local_24,"inSert into channel_occ_info (gc_no, age, occ_num) values %s",uVar1);
  local_25 = MySQL::exec(local_24,true);
  if (local_25 != '\x01') {
    MySQL::set_query(local_24,"upDate channel_occ_info set occ_num = 0 where gc_no = %d",
                     *(undefined4 *)param_1);
    local_25 = MySQL::exec(local_24,true);
    if (local_25 != '\x01') {
      uVar1 = 0;
      goto LAB_08403a36;
    }
  }
  uVar1 = 1;
LAB_08403a36:
  std::string::~string(local_2c);
  return uVar1;
}
```
