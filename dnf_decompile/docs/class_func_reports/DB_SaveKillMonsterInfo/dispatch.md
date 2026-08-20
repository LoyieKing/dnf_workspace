# dispatch

`_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream`

`DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveKillMonsterInfo` | `0x08441200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08441200  _ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream
#           DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)
# range [0x08441200, 0x084414df]
08441200 +0x000:  push   %ebp
08441201 +0x001:  mov    %esp,%ebp
08441203 +0x003:  push   %ebx
08441204 +0x004:  sub    $0x74,%esp
08441207 +0x007:  mov    0x14(%ebp),%eax
0844120a +0x00a:  mov    %eax,(%esp)
0844120d +0x00d:  call   08453d76 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x698c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x698c
08441212 +0x012:  mov    %eax,-0x18(%ebp)
08441215 +0x015:  cmpl   $0x0,-0x18(%ebp)
08441219 +0x019:  jne    08441225 <+0x25>
0844121b +0x01b:  mov    $0x0,%eax
08441220 +0x020:  jmp    084414da <+0x2da>
08441225 +0x025:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844122a +0x02a:  movl   $0x0,0x8(%esp)
08441232 +0x032:  movl   $0x2,0x4(%esp)
0844123a +0x03a:  mov    %eax,(%esp)
0844123d +0x03d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08441242 +0x042:  mov    %eax,-0x14(%ebp)
08441245 +0x045:  movl   $0x5,-0x10(%ebp)
0844124c +0x04c:  movb   $0x0,-0x9(%ebp)
08441250 +0x050:  movl   $0x0,-0x4c(%ebp)
08441257 +0x057:  movl   $0x0,-0x50(%ebp)
0844125e +0x05e:  movl   $0x0,-0x54(%ebp)
08441265 +0x065:  mov    -0x18(%ebp),%eax
08441268 +0x068:  lea    -0x4c(%ebp),%edx
0844126b +0x06b:  mov    %edx,0x10(%esp)
0844126f +0x06f:  movl   $0x1d4c,0xc(%esp)
08441277 +0x077:  mov    %eax,0x8(%esp)
0844127b +0x07b:  movl   $0x0,0x4(%esp)
08441283 +0x083:  mov    -0x14(%ebp),%eax
08441286 +0x086:  mov    %eax,(%esp)
08441289 +0x089:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
0844128e +0x08e:  mov    %al,-0x9(%ebp)
08441291 +0x091:  movzbl -0x9(%ebp),%eax
08441295 +0x095:  xor    $0x1,%eax
08441298 +0x098:  test   %al,%al
0844129a +0x09a:  je     084412f1 <+0xf1>
0844129c +0x09c:  mov    -0x18(%ebp),%eax
0844129f +0x09f:  mov    0xafc8(%eax),%ebx
084412a5 +0x0a5:  movl   $0x5,0xc(%esp)
084412ad +0x0ad:  movl   $0xa010,0x8(%esp)
084412b5 +0x0b5:  movl   $&_ZZN22DB_SaveKillMonsterInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084412bd +0x0bd:  lea    -0x48(%ebp),%eax
084412c0 +0x0c0:  mov    %eax,(%esp)
084412c3 +0x0c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084412c8 +0x0c8:  mov    %ebx,0xc(%esp)
084412cc +0x0cc:  movl   $0x0,0x8(%esp)
084412d4 +0x0d4:  movl   $"DB_SaveKillMonsterInfo::dispatch boss_info compress_zip(%u) ERROR charac_no=%u",0x4(%esp)
084412dc +0x0dc:  lea    -0x48(%ebp),%eax
084412df +0x0df:  mov    %eax,(%esp)
084412e2 +0x0e2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084412e7 +0x0e7:  mov    $0x0,%eax
084412ec +0x0ec:  jmp    084414da <+0x2da>
084412f1 +0x0f1:  mov    -0x18(%ebp),%eax
084412f4 +0x0f4:  add    $0x1d4c,%eax
084412f9 +0x0f9:  lea    -0x50(%ebp),%edx
084412fc +0x0fc:  mov    %edx,0x10(%esp)
08441300 +0x100:  movl   $0x7530,0xc(%esp)
08441308 +0x108:  mov    %eax,0x8(%esp)
0844130c +0x10c:  movl   $0x1,0x4(%esp)
08441314 +0x114:  mov    -0x14(%ebp),%eax
08441317 +0x117:  mov    %eax,(%esp)
0844131a +0x11a:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
0844131f +0x11f:  mov    %al,-0x9(%ebp)
08441322 +0x122:  movzbl -0x9(%ebp),%eax
08441326 +0x126:  xor    $0x1,%eax
08441329 +0x129:  test   %al,%al
0844132b +0x12b:  je     08441382 <+0x182>
0844132d +0x12d:  mov    -0x18(%ebp),%eax
08441330 +0x130:  mov    0xafc8(%eax),%ebx
08441336 +0x136:  movl   $0x5,0xc(%esp)
0844133e +0x13e:  movl   $0xa01a,0x8(%esp)
08441346 +0x146:  movl   $&_ZZN22DB_SaveKillMonsterInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844134e +0x14e:  lea    -0x38(%ebp),%eax
08441351 +0x151:  mov    %eax,(%esp)
08441354 +0x154:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08441359 +0x159:  mov    %ebx,0xc(%esp)
0844135d +0x15d:  movl   $0x1,0x8(%esp)
08441365 +0x165:  movl   $"DB_SaveKillMonsterInfo::dispatch named_info compress_zip(%u) ERROR charac_no=%u",0x4(%esp)
0844136d +0x16d:  lea    -0x38(%ebp),%eax
08441370 +0x170:  mov    %eax,(%esp)
08441373 +0x173:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441378 +0x178:  mov    $0x0,%eax
0844137d +0x17d:  jmp    084414da <+0x2da>
08441382 +0x182:  mov    -0x18(%ebp),%eax
08441385 +0x185:  add    $0x927c,%eax
0844138a +0x18a:  lea    -0x54(%ebp),%edx
0844138d +0x18d:  mov    %edx,0x10(%esp)
08441391 +0x191:  movl   $0x1d4c,0xc(%esp)
08441399 +0x199:  mov    %eax,0x8(%esp)
0844139d +0x19d:  movl   $0x2,0x4(%esp)
084413a5 +0x1a5:  mov    -0x14(%ebp),%eax
084413a8 +0x1a8:  mov    %eax,(%esp)
084413ab +0x1ab:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
084413b0 +0x1b0:  mov    %al,-0x9(%ebp)
084413b3 +0x1b3:  movzbl -0x9(%ebp),%eax
084413b7 +0x1b7:  xor    $0x1,%eax
084413ba +0x1ba:  test   %al,%al
084413bc +0x1bc:  je     08441413 <+0x213>
084413be +0x1be:  mov    -0x18(%ebp),%eax
084413c1 +0x1c1:  mov    0xafc8(%eax),%ebx
084413c7 +0x1c7:  movl   $0x5,0xc(%esp)
084413cf +0x1cf:  movl   $0xa024,0x8(%esp)
084413d7 +0x1d7:  movl   $&_ZZN22DB_SaveKillMonsterInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084413df +0x1df:  lea    -0x28(%ebp),%eax
084413e2 +0x1e2:  mov    %eax,(%esp)
084413e5 +0x1e5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084413ea +0x1ea:  mov    %ebx,0xc(%esp)
084413ee +0x1ee:  movl   $0x2,0x8(%esp)
084413f6 +0x1f6:  movl   $"DB_SaveKillMonsterInfo::dispatch apc_boss_info compress_zip(%u) ERROR charac_no=%u",0x4(%esp)
084413fe +0x1fe:  lea    -0x28(%ebp),%eax
08441401 +0x201:  mov    %eax,(%esp)
08441404 +0x204:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441409 +0x209:  mov    $0x0,%eax
0844140e +0x20e:  jmp    084414da <+0x2da>
08441413 +0x213:  mov    -0x18(%ebp),%eax
08441416 +0x216:  mov    0xafc8(%eax),%ebx
0844141c +0x21c:  mov    -0x54(%ebp),%ecx
0844141f +0x21f:  mov    -0x50(%ebp),%edx
08441422 +0x222:  mov    -0x4c(%ebp),%eax
08441425 +0x225:  mov    %ebx,0x14(%esp)
08441429 +0x229:  mov    %ecx,0x10(%esp)
0844142d +0x22d:  mov    %edx,0xc(%esp)
08441431 +0x231:  mov    %eax,0x8(%esp)
08441435 +0x235:  movl   $"upDate charac_kill_monster_info set boss_info='%s', named_info='%s', apc_boss_info='%s' where charac_no=%u",0x4(%esp)
0844143d +0x23d:  mov    -0x14(%ebp),%eax
08441440 +0x240:  mov    %eax,(%esp)
08441443 +0x243:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441448 +0x248:  movl   $0x1,0x4(%esp)
08441450 +0x250:  mov    -0x14(%ebp),%eax
08441453 +0x253:  mov    %eax,(%esp)
08441456 +0x256:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844145b +0x25b:  xor    $0x1,%eax
0844145e +0x25e:  test   %al,%al
08441460 +0x260:  je     08441469 <+0x269>
08441462 +0x262:  mov    $0x0,%eax
08441467 +0x267:  jmp    084414da <+0x2da>
08441469 +0x269:  mov    -0x14(%ebp),%eax
0844146c +0x26c:  mov    %eax,(%esp)
0844146f +0x26f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08441474 +0x274:  or     %edx,%eax
08441476 +0x276:  test   %eax,%eax
08441478 +0x278:  sete   %al
0844147b +0x27b:  test   %al,%al
0844147d +0x27d:  je     084414d5 <+0x2d5>
0844147f +0x27f:  mov    -0x54(%ebp),%ebx
08441482 +0x282:  mov    -0x50(%ebp),%ecx
08441485 +0x285:  mov    -0x4c(%ebp),%edx
08441488 +0x288:  mov    -0x18(%ebp),%eax
0844148b +0x28b:  mov    0xafc8(%eax),%eax
08441491 +0x291:  mov    %ebx,0x14(%esp)
08441495 +0x295:  mov    %ecx,0x10(%esp)
08441499 +0x299:  mov    %edx,0xc(%esp)
0844149d +0x29d:  mov    %eax,0x8(%esp)
084414a1 +0x2a1:  movl   $"inSert into charac_kill_monster_info(charac_no, boss_info, named_info, apc_boss_info) values(%u, '%s', '%s', '%s')",0x4(%esp)
084414a9 +0x2a9:  mov    -0x14(%ebp),%eax
084414ac +0x2ac:  mov    %eax,(%esp)
084414af +0x2af:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084414b4 +0x2b4:  movl   $0x1,0x4(%esp)
084414bc +0x2bc:  mov    -0x14(%ebp),%eax
084414bf +0x2bf:  mov    %eax,(%esp)
084414c2 +0x2c2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084414c7 +0x2c7:  xor    $0x1,%eax
084414ca +0x2ca:  test   %al,%al
084414cc +0x2cc:  je     084414d5 <+0x2d5>
084414ce +0x2ce:  mov    $0x0,%eax
084414d3 +0x2d3:  jmp    084414da <+0x2da>
084414d5 +0x2d5:  mov    $0x1,%eax
084414da +0x2da:  add    $0x74,%esp
084414dd +0x2dd:  pop    %ebx
084414de +0x2de:  pop    %ebp
084414df +0x2df:  ret
```

## 反编译 C

```c
// DB_SaveKillMonsterInfo::dispatch @ 0x8441200

/* DB_SaveKillMonsterInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveKillMonsterInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_58;
  char *local_54;
  char *local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  SIG_LOAD_KILL_MONSTER_INFO *local_1c;
  MySQL *local_18;
  undefined4 local_14;
  char local_d;
  
  local_1c = Stream::GetOutBuffer<SIG_LOAD_KILL_MONSTER_INFO>(in_stack_00000010);
  if (local_1c == (SIG_LOAD_KILL_MONSTER_INFO *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_14 = 5;
    local_d = 0;
    local_50 = (char *)0x0;
    local_54 = (char *)0x0;
    local_58 = (char *)0x0;
    local_d = put_compressed_blob_data(local_18,0,(char *)local_1c,0x1d4c,&local_50);
    if (local_d == '\x01') {
      local_d = put_compressed_blob_data(local_18,1,(char *)(local_1c + 0x1d4c),30000,&local_54);
      if (local_d == '\x01') {
        local_d = put_compressed_blob_data(local_18,2,(char *)(local_1c + 0x927c),0x1d4c,&local_58);
        if (local_d == '\x01') {
          MySQL::set_query(local_18,
                           "upDate charac_kill_monster_info set boss_info=\'%s\', named_info=\'%s\', apc_boss_info=\'%s\' where charac_no=%u"
                           ,local_50,local_54,local_58,*(undefined4 *)(local_1c + 45000));
          cVar1 = MySQL::exec(local_18,true);
          if (cVar1 == '\x01') {
            lVar3 = MySQL::getAffectedRowCount(local_18);
            if (lVar3 == 0) {
              MySQL::set_query(local_18,
                               "inSert into charac_kill_monster_info(charac_no, boss_info, named_info, apc_boss_info) values(%u, \'%s\', \'%s\', \'%s\')"
                               ,*(undefined4 *)(local_1c + 45000),local_50,local_54,local_58);
              cVar1 = MySQL::exec(local_18,true);
              if (cVar1 != '\x01') {
                return 0;
              }
            }
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(local_1c + 45000);
          cMyTrace::cMyTrace(local_2c,
                             "virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)",
                             0xa024,5);
          cMyTrace::operator()
                    (local_2c,
                     "DB_SaveKillMonsterInfo::dispatch apc_boss_info compress_zip(%u) ERROR charac_no=%u"
                     ,2,uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(local_1c + 45000);
        cMyTrace::cMyTrace(local_3c,
                           "virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)",0xa01a
                           ,5);
        cMyTrace::operator()
                  (local_3c,
                   "DB_SaveKillMonsterInfo::dispatch named_info compress_zip(%u) ERROR charac_no=%u"
                   ,1,uVar2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = *(undefined4 *)(local_1c + 45000);
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)"
                         ,0xa010,5);
      cMyTrace::operator()
                (local_4c,
                 "DB_SaveKillMonsterInfo::dispatch boss_info compress_zip(%u) ERROR charac_no=%u",0,
                 uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
