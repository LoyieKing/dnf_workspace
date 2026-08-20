# dispatch

`_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream`

`DB_UpdateFairPvPScore::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateFairPvPScore` | `0x0843fa78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843fa78  _ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream
#           DB_UpdateFairPvPScore::dispatch(int, int, Stream*)
# range [0x0843fa78, 0x0843fc25]
0843fa78 +0x000:  push   %ebp
0843fa79 +0x001:  mov    %esp,%ebp
0843fa7b +0x003:  push   %edi
0843fa7c +0x004:  push   %esi
0843fa7d +0x005:  push   %ebx
0843fa7e +0x006:  sub    $0x9c,%esp
0843fa84 +0x00c:  mov    0x14(%ebp),%eax
0843fa87 +0x00f:  mov    %eax,(%esp)
0843fa8a +0x012:  call   08453c10 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6826>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6826
0843fa8f +0x017:  mov    %eax,-0x20(%ebp)
0843fa92 +0x01a:  cmpl   $0x0,-0x20(%ebp)
0843fa96 +0x01e:  jne    0843faa2 <+0x2a>
0843fa98 +0x020:  mov    $0x0,%eax
0843fa9d +0x025:  jmp    0843fc1b <+0x1a3>
0843faa2 +0x02a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843faa7 +0x02f:  movl   $0x0,0x8(%esp)
0843faaf +0x037:  movl   $0x3,0x4(%esp)
0843fab7 +0x03f:  mov    %eax,(%esp)
0843faba +0x042:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843fabf +0x047:  mov    %eax,-0x1c(%ebp)
0843fac2 +0x04a:  movl   $0x0,-0x28(%ebp)
0843fac9 +0x051:  mov    -0x20(%ebp),%eax
0843facc +0x054:  add    $0x2c,%eax
0843facf +0x057:  lea    -0x28(%ebp),%edx
0843fad2 +0x05a:  mov    %edx,0x10(%esp)
0843fad6 +0x05e:  movl   $0x650,0xc(%esp)
0843fade +0x066:  mov    %eax,0x8(%esp)
0843fae2 +0x06a:  movl   $0x0,0x4(%esp)
0843faea +0x072:  mov    -0x1c(%ebp),%eax
0843faed +0x075:  mov    %eax,(%esp)
0843faf0 +0x078:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
0843faf5 +0x07d:  xor    $0x1,%eax
0843faf8 +0x080:  test   %al,%al
0843fafa +0x082:  je     0843fb06 <+0x8e>
0843fafc +0x084:  mov    $0x0,%eax
0843fb01 +0x089:  jmp    0843fc1b <+0x1a3>
0843fb06 +0x08e:  mov    -0x20(%ebp),%eax
0843fb09 +0x091:  mov    (%eax),%edi
0843fb0b +0x093:  mov    -0x20(%ebp),%eax
0843fb0e +0x096:  movzbl 0x684(%eax),%eax
0843fb15 +0x09d:  movzbl %al,%eax
0843fb18 +0x0a0:  mov    %eax,-0x4c(%ebp)
0843fb1b +0x0a3:  mov    -0x20(%ebp),%eax
0843fb1e +0x0a6:  mov    0x680(%eax),%eax
0843fb24 +0x0ac:  mov    %eax,-0x48(%ebp)
0843fb27 +0x0af:  mov    -0x20(%ebp),%eax
0843fb2a +0x0b2:  mov    0x67c(%eax),%eax
0843fb30 +0x0b8:  mov    %eax,-0x44(%ebp)
0843fb33 +0x0bb:  mov    -0x28(%ebp),%eax
0843fb36 +0x0be:  mov    %eax,-0x40(%ebp)
0843fb39 +0x0c1:  mov    -0x20(%ebp),%eax
0843fb3c +0x0c4:  mov    0x28(%eax),%eax
0843fb3f +0x0c7:  mov    %eax,-0x3c(%ebp)
0843fb42 +0x0ca:  mov    -0x20(%ebp),%eax
0843fb45 +0x0cd:  mov    0x24(%eax),%eax
0843fb48 +0x0d0:  mov    %eax,-0x38(%ebp)
0843fb4b +0x0d3:  mov    -0x20(%ebp),%eax
0843fb4e +0x0d6:  mov    0x20(%eax),%eax
0843fb51 +0x0d9:  mov    %eax,-0x34(%ebp)
0843fb54 +0x0dc:  mov    -0x20(%ebp),%eax
0843fb57 +0x0df:  mov    0x1c(%eax),%eax
0843fb5a +0x0e2:  mov    %eax,-0x30(%ebp)
0843fb5d +0x0e5:  mov    -0x20(%ebp),%eax
0843fb60 +0x0e8:  mov    0x18(%eax),%eax
0843fb63 +0x0eb:  mov    %eax,-0x2c(%ebp)
0843fb66 +0x0ee:  mov    -0x20(%ebp),%eax
0843fb69 +0x0f1:  mov    0x14(%eax),%esi
0843fb6c +0x0f4:  mov    -0x20(%ebp),%eax
0843fb6f +0x0f7:  mov    0x10(%eax),%ebx
0843fb72 +0x0fa:  mov    -0x20(%ebp),%eax
0843fb75 +0x0fd:  mov    0xc(%eax),%ecx
0843fb78 +0x100:  mov    -0x20(%ebp),%eax
0843fb7b +0x103:  mov    0x8(%eax),%edx
0843fb7e +0x106:  mov    -0x20(%ebp),%eax
0843fb81 +0x109:  mov    0x4(%eax),%eax
0843fb84 +0x10c:  mov    %edi,0x40(%esp)
0843fb88 +0x110:  mov    -0x4c(%ebp),%edi
0843fb8b +0x113:  mov    %edi,0x3c(%esp)
0843fb8f +0x117:  mov    -0x48(%ebp),%edi
0843fb92 +0x11a:  mov    %edi,0x38(%esp)
0843fb96 +0x11e:  mov    -0x44(%ebp),%edi
0843fb99 +0x121:  mov    %edi,0x34(%esp)
0843fb9d +0x125:  mov    -0x40(%ebp),%edi
0843fba0 +0x128:  mov    %edi,0x30(%esp)
0843fba4 +0x12c:  mov    -0x3c(%ebp),%edi
0843fba7 +0x12f:  mov    %edi,0x2c(%esp)
0843fbab +0x133:  mov    -0x38(%ebp),%edi
0843fbae +0x136:  mov    %edi,0x28(%esp)
0843fbb2 +0x13a:  mov    -0x34(%ebp),%edi
0843fbb5 +0x13d:  mov    %edi,0x24(%esp)
0843fbb9 +0x141:  mov    -0x30(%ebp),%edi
0843fbbc +0x144:  mov    %edi,0x20(%esp)
0843fbc0 +0x148:  mov    -0x2c(%ebp),%edi
0843fbc3 +0x14b:  mov    %edi,0x1c(%esp)
0843fbc7 +0x14f:  mov    %esi,0x18(%esp)
0843fbcb +0x153:  mov    %ebx,0x14(%esp)
0843fbcf +0x157:  mov    %ecx,0x10(%esp)
0843fbd3 +0x15b:  mov    %edx,0xc(%esp)
0843fbd7 +0x15f:  mov    %eax,0x8(%esp)
0843fbdb +0x163:  movl   $"upDate fair_pvp_score set private_win=%u,private_lose=%u,private_draw=%u,relay_battle_win=%u,relay_battle_lose=%u,relay_battle_draw=%u,relay_battle_2kill=%u,relay_battle_3kill=%u,successive_win=%u,max_successive_win=%u,job_score='%s',daily_play_count =%u, last_play_time=from_unixtime(%d),give_item=%d where charac_no=%u",0x4(%esp)
0843fbe3 +0x16b:  mov    -0x1c(%ebp),%eax
0843fbe6 +0x16e:  mov    %eax,(%esp)
0843fbe9 +0x171:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843fbee +0x176:  movl   $0x1,0x4(%esp)
0843fbf6 +0x17e:  mov    -0x1c(%ebp),%eax
0843fbf9 +0x181:  mov    %eax,(%esp)
0843fbfc +0x184:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843fc01 +0x189:  mov    %al,-0x21(%ebp)
0843fc04 +0x18c:  movzbl -0x21(%ebp),%eax
0843fc08 +0x190:  xor    $0x1,%eax
0843fc0b +0x193:  test   %al,%al
0843fc0d +0x195:  je     0843fc16 <+0x19e>
0843fc0f +0x197:  mov    $0x0,%eax
0843fc14 +0x19c:  jmp    0843fc1b <+0x1a3>
0843fc16 +0x19e:  mov    $0x1,%eax
0843fc1b +0x1a3:  add    $0x9c,%esp
0843fc21 +0x1a9:  pop    %ebx
0843fc22 +0x1aa:  pop    %esi
0843fc23 +0x1ab:  pop    %edi
0843fc24 +0x1ac:  pop    %ebp
0843fc25 +0x1ad:  ret
```

## 反编译 C

```c
// DB_UpdateFairPvPScore::dispatch @ 0x843fa78

/* DB_UpdateFairPvPScore::dispatch(int, int, Stream*) */

undefined4 DB_UpdateFairPvPScore::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  char *local_2c [2];
  SIG_FAIR_PVP_SCORE *local_24;
  MySQL *local_20;
  
  local_24 = Stream::GetOutBuffer<SIG_FAIR_PVP_SCORE>(in_stack_00000010);
  if (local_24 == (SIG_FAIR_PVP_SCORE *)0x0) {
    uVar2 = 0;
  }
  else {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    local_2c[0] = (char *)0x0;
    cVar1 = put_compressed_blob_data(local_20,0,(char *)(local_24 + 0x2c),0x650,local_2c);
    if (cVar1 == '\x01') {
      MySQL::set_query(local_20,
                       "upDate fair_pvp_score set private_win=%u,private_lose=%u,private_draw=%u,relay_battle_win=%u,relay_battle_lose=%u,relay_battle_draw=%u,relay_battle_2kill=%u,relay_battle_3kill=%u,successive_win=%u,max_successive_win=%u,job_score=\'%s\',daily_play_count =%u, last_play_time=from_unixtime(%d),give_item=%d where charac_no=%u"
                       ,*(undefined4 *)(local_24 + 4),*(undefined4 *)(local_24 + 8),
                       *(undefined4 *)(local_24 + 0xc),*(undefined4 *)(local_24 + 0x10),
                       *(undefined4 *)(local_24 + 0x14),*(undefined4 *)(local_24 + 0x18),
                       *(undefined4 *)(local_24 + 0x1c),*(undefined4 *)(local_24 + 0x20),
                       *(undefined4 *)(local_24 + 0x24),*(undefined4 *)(local_24 + 0x28),local_2c[0]
                       ,*(undefined4 *)(local_24 + 0x67c),*(undefined4 *)(local_24 + 0x680),
                       (uint)(byte)local_24[0x684],*(undefined4 *)local_24);
      cVar1 = MySQL::exec(local_20,true);
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
  return uVar2;
}
```
