# UpdateClientCrashDown

`_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv`

`CClientCrashDownLogStatistic::UpdateClientCrashDown()`

| 类 | 地址 |
|---|---|
| `CClientCrashDownLogStatistic` | `0x0860d444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d444  _ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv
#           CClientCrashDownLogStatistic::UpdateClientCrashDown()
# range [0x0860d444, 0x0860d5ee]
0860d444 +0x000:  push   %ebp
0860d445 +0x001:  mov    %esp,%ebp
0860d447 +0x003:  push   %edi
0860d448 +0x004:  push   %esi
0860d449 +0x005:  push   %ebx
0860d44a +0x006:  sub    $0x7c,%esp
0860d44d +0x009:  mov    0x8(%ebp),%eax
0860d450 +0x00c:  add    $0x18,%eax
0860d453 +0x00f:  mov    %eax,(%esp)
0860d456 +0x012:  call   08611246 <_GLOBAL__I__ZN10StatisticsC2Ev+0x12c4>  ; global constructors keyed to Statistics::Statistics()+0x12c4
0860d45b +0x017:  xor    $0x1,%eax
0860d45e +0x01a:  test   %al,%al
0860d460 +0x01c:  je     0860d5e2 <+0x19e>
0860d466 +0x022:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0860d46b +0x027:  movl   $0x0,0x8(%esp)
0860d473 +0x02f:  movl   $0x4,0x4(%esp)
0860d47b +0x037:  mov    %eax,(%esp)
0860d47e +0x03a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0860d483 +0x03f:  mov    %eax,-0x20(%ebp)
0860d486 +0x042:  lea    -0x2c(%ebp),%eax
0860d489 +0x045:  mov    %eax,(%esp)
0860d48c +0x048:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0860d491 +0x04d:  lea    -0x71(%ebp),%eax
0860d494 +0x050:  mov    $"inSert into log_client_ting(occ_time,channel_no,reason,cnt) values%s",%edx
0860d499 +0x055:  mov    $0x45,%ebx
0860d49e +0x05a:  mov    %eax,%ecx
0860d4a0 +0x05c:  and    $0x1,%ecx
0860d4a3 +0x05f:  test   %ecx,%ecx
0860d4a5 +0x061:  je     0860d4b5 <+0x71>
0860d4a7 +0x063:  movzbl (%edx),%ecx
0860d4aa +0x066:  mov    %cl,(%eax)
0860d4ac +0x068:  add    $0x1,%eax
0860d4af +0x06b:  add    $0x1,%edx
0860d4b2 +0x06e:  sub    $0x1,%ebx
0860d4b5 +0x071:  mov    %eax,%ecx
0860d4b7 +0x073:  and    $0x2,%ecx
0860d4ba +0x076:  test   %ecx,%ecx
0860d4bc +0x078:  je     0860d4cd <+0x89>
0860d4be +0x07a:  movzwl (%edx),%ecx
0860d4c1 +0x07d:  mov    %cx,(%eax)
0860d4c4 +0x080:  add    $0x2,%eax
0860d4c7 +0x083:  add    $0x2,%edx
0860d4ca +0x086:  sub    $0x2,%ebx
0860d4cd +0x089:  mov    %ebx,%ecx
0860d4cf +0x08b:  shr    $0x2,%ecx
0860d4d2 +0x08e:  mov    %eax,%edi
0860d4d4 +0x090:  mov    %edx,%esi
0860d4d6 +0x092:  rep movsl %ds:(%esi),%es:(%edi)
0860d4d8 +0x094:  mov    %esi,%edx
0860d4da +0x096:  mov    %edi,%eax
0860d4dc +0x098:  mov    $0x0,%ecx
0860d4e1 +0x09d:  mov    %ebx,%esi
0860d4e3 +0x09f:  and    $0x2,%esi
0860d4e6 +0x0a2:  test   %esi,%esi
0860d4e8 +0x0a4:  je     0860d4f5 <+0xb1>
0860d4ea +0x0a6:  movzwl (%edx,%ecx,1),%esi
0860d4ee +0x0aa:  mov    %si,(%eax,%ecx,1)
0860d4f2 +0x0ae:  add    $0x2,%ecx
0860d4f5 +0x0b1:  and    $0x1,%ebx
0860d4f8 +0x0b4:  test   %ebx,%ebx
0860d4fa +0x0b6:  je     0860d503 <+0xbf>
0860d4fc +0x0b8:  movzbl (%edx,%ecx,1),%edx
0860d500 +0x0bc:  mov    %dl,(%eax,%ecx,1)
0860d503 +0x0bf:  lea    -0x71(%ebp),%eax
0860d506 +0x0c2:  mov    %eax,(%esp)
0860d509 +0x0c5:  call   0807e3b0 <_init+0xca8>
0860d50e +0x0ca:  mov    %eax,0x8(%esp)
0860d512 +0x0ce:  lea    -0x2c(%ebp),%eax
0860d515 +0x0d1:  mov    %eax,0x4(%esp)
0860d519 +0x0d5:  mov    0x8(%ebp),%eax
0860d51c +0x0d8:  mov    %eax,(%esp)
0860d51f +0x0db:  call   0860d1fe <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi>  ; CClientCrashDownLogStatistic::MakeClientCrashDownQuery(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, int)
0860d524 +0x0e0:  movl   $0x0,-0x1c(%ebp)
0860d52b +0x0e7:  jmp    0860d597 <+0x153>
0860d52d +0x0e9:  mov    -0x1c(%ebp),%eax
0860d530 +0x0ec:  mov    %eax,0x4(%esp)
0860d534 +0x0f0:  lea    -0x2c(%ebp),%eax
0860d537 +0x0f3:  mov    %eax,(%esp)
0860d53a +0x0f6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0860d53f +0x0fb:  mov    %eax,(%esp)
0860d542 +0x0fe:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0860d547 +0x103:  test   %eax,%eax
0860d549 +0x105:  setne  %al
0860d54c +0x108:  test   %al,%al
0860d54e +0x10a:  je     0860d593 <+0x14f>
0860d550 +0x10c:  mov    -0x1c(%ebp),%eax
0860d553 +0x10f:  mov    %eax,0x4(%esp)
0860d557 +0x113:  lea    -0x2c(%ebp),%eax
0860d55a +0x116:  mov    %eax,(%esp)
0860d55d +0x119:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0860d562 +0x11e:  mov    %eax,(%esp)
0860d565 +0x121:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0860d56a +0x126:  mov    %eax,0x8(%esp)
0860d56e +0x12a:  lea    -0x71(%ebp),%eax
0860d571 +0x12d:  mov    %eax,0x4(%esp)
0860d575 +0x131:  mov    -0x20(%ebp),%eax
0860d578 +0x134:  mov    %eax,(%esp)
0860d57b +0x137:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0860d580 +0x13c:  movl   $0x1,0x4(%esp)
0860d588 +0x144:  mov    -0x20(%ebp),%eax
0860d58b +0x147:  mov    %eax,(%esp)
0860d58e +0x14a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0860d593 +0x14f:  addl   $0x1,-0x1c(%ebp)
0860d597 +0x153:  lea    -0x2c(%ebp),%eax
0860d59a +0x156:  mov    %eax,(%esp)
0860d59d +0x159:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0860d5a2 +0x15e:  cmp    -0x1c(%ebp),%eax
0860d5a5 +0x161:  seta   %al
0860d5a8 +0x164:  test   %al,%al
0860d5aa +0x166:  jne    0860d52d <+0xe9>
0860d5ac +0x168:  mov    0x8(%ebp),%eax
0860d5af +0x16b:  add    $0x18,%eax
0860d5b2 +0x16e:  mov    %eax,(%esp)
0860d5b5 +0x171:  call   0861128a <_GLOBAL__I__ZN10StatisticsC2Ev+0x1308>  ; global constructors keyed to Statistics::Statistics()+0x1308
0860d5ba +0x176:  jmp    0860d5d7 <+0x193>
0860d5bc +0x178:  mov    %edx,%ebx
0860d5be +0x17a:  mov    %eax,%esi
0860d5c0 +0x17c:  lea    -0x2c(%ebp),%eax
0860d5c3 +0x17f:  mov    %eax,(%esp)
0860d5c6 +0x182:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0860d5cb +0x187:  mov    %esi,%eax
0860d5cd +0x189:  mov    %ebx,%edx
0860d5cf +0x18b:  mov    %eax,(%esp)
0860d5d2 +0x18e:  call   08ae3750 <_Unwind_Resume>
0860d5d7 +0x193:  lea    -0x2c(%ebp),%eax
0860d5da +0x196:  mov    %eax,(%esp)
0860d5dd +0x199:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0860d5e2 +0x19e:  mov    $0x1,%eax
0860d5e7 +0x1a3:  add    $0x7c,%esp
0860d5ea +0x1a6:  pop    %ebx
0860d5eb +0x1a7:  pop    %esi
0860d5ec +0x1a8:  pop    %edi
0860d5ed +0x1a9:  pop    %ebp
0860d5ee +0x1aa:  ret
```

## 反编译 C

```c
// CClientCrashDownLogStatistic::UpdateClientCrashDown @ 0x860d444

/* CClientCrashDownLogStatistic::UpdateClientCrashDown() */

undefined4 __thiscall
CClientCrashDownLogStatistic::UpdateClientCrashDown(CClientCrashDownLogStatistic *this)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  string *psVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_75;
  char local_74 [68];
  vector<std::string,std::allocator<std::string>> local_30 [12];
  MySQL *local_24;
  uint local_20;
  
  bVar11 = 0;
  cVar1 = std::
          vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
          ::empty();
  if (cVar1 != '\x01') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    std::vector<std::string,std::allocator<std::string>>::vector(local_30);
    pcVar2 = &local_75;
    pcVar8 = "inSert into log_client_ting(occ_time,channel_no,reason,cnt) values%s";
    uVar9 = 0x45;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_75 = s_inSert_into_log_client_ting_occ__08ce0294[0];
      pcVar2 = local_74;
      pcVar8 = "nSert into log_client_ting(occ_time,channel_no,reason,cnt) values%s";
      uVar9 = 0x44;
    }
    if (((uint)pcVar2 & 2) != 0) {
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar8;
      pcVar2 = pcVar2 + 2;
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    iVar7 = 0;
    if ((uVar9 & 2) != 0) {
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar8;
      iVar7 = 2;
    }
    if (!bVar10) {
      pcVar2[iVar7] = pcVar8[iVar7];
    }
    sVar3 = strlen(&local_75);
                    /* try { // try from 0860d51f to 0860d5b9 has its CatchHandler @ 0860d5bc */
    MakeClientCrashDownQuery(this,(vector *)local_30,sVar3);
    local_20 = 0;
    while( true ) {
      uVar9 = std::vector<std::string,std::allocator<std::string>>::size(local_30);
      if (uVar9 <= local_20) break;
      psVar4 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[](local_30,local_20);
      iVar7 = std::string::size(psVar4);
      if (iVar7 != 0) {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[](local_30,local_20)
        ;
        uVar5 = std::string::c_str(psVar4);
        MySQL::set_query(local_24,&local_75,uVar5);
        MySQL::exec(local_24,true);
      }
      local_20 = local_20 + 1;
    }
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::clear((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
             *)(this + 0x18));
    std::vector<std::string,std::allocator<std::string>>::~vector(local_30);
  }
  return 1;
}
```
