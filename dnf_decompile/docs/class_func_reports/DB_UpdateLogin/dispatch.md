# dispatch

`_ZN14DB_UpdateLogin8dispatchEiiP6Stream`

`DB_UpdateLogin::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogin` | `0x0841826a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841826a  _ZN14DB_UpdateLogin8dispatchEiiP6Stream
#           DB_UpdateLogin::dispatch(int, int, Stream*)
# range [0x0841826a, 0x084183d7]
0841826a +0x000:  push   %ebp
0841826b +0x001:  mov    %esp,%ebp
0841826d +0x003:  push   %esi
0841826e +0x004:  push   %ebx
0841826f +0x005:  sub    $0x30,%esp
08418272 +0x008:  mov    0x14(%ebp),%eax
08418275 +0x00b:  mov    %eax,(%esp)
08418278 +0x00e:  call   08450e24 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3a3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3a3a
0841827d +0x013:  mov    %eax,-0x14(%ebp)
08418280 +0x016:  cmpl   $0x0,-0x14(%ebp)
08418284 +0x01a:  jne    08418290 <+0x26>
08418286 +0x01c:  mov    $0x0,%eax
0841828b +0x021:  jmp    084183d0 <+0x166>
08418290 +0x026:  movl   $0x0,-0x10(%ebp)
08418297 +0x02d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841829c +0x032:  mov    %eax,(%esp)
0841829f +0x035:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084182a4 +0x03a:  test   %al,%al
084182a6 +0x03c:  je     084182b3 <+0x49>
084182a8 +0x03e:  mov    -0x14(%ebp),%eax
084182ab +0x041:  mov    0x8(%eax),%eax
084182ae +0x044:  mov    %eax,-0x10(%ebp)
084182b1 +0x047:  jmp    084182c1 <+0x57>
084182b3 +0x049:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084182b8 +0x04e:  mov    0x378(%eax),%eax
084182be +0x054:  mov    %eax,-0x10(%ebp)
084182c1 +0x057:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084182c6 +0x05c:  movl   $0x0,0x8(%esp)
084182ce +0x064:  movl   $0x6,0x4(%esp)
084182d6 +0x06c:  mov    %eax,(%esp)
084182d9 +0x06f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084182de +0x074:  mov    %eax,-0xc(%ebp)
084182e1 +0x077:  mov    -0x14(%ebp),%eax
084182e4 +0x07a:  mov    (%eax),%eax
084182e6 +0x07c:  movl   $0x0,0x4(%esp)
084182ee +0x084:  mov    %eax,(%esp)
084182f1 +0x087:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084182f6 +0x08c:  mov    -0x14(%ebp),%edx
084182f9 +0x08f:  lea    0xc(%edx),%ebx
084182fc +0x092:  mov    -0x14(%ebp),%edx
084182ff +0x095:  mov    0x4(%edx),%ecx
08418302 +0x098:  mov    -0x10(%ebp),%edx
08418305 +0x09b:  mov    %eax,0x14(%esp)
08418309 +0x09f:  mov    %ebx,0x10(%esp)
0841830d +0x0a3:  mov    %ecx,0xc(%esp)
08418311 +0x0a7:  mov    %edx,0x8(%esp)
08418315 +0x0ab:  movl   $"upDate login_account_%d set m_channel_no=%d,login_status=1,last_login_date=now(),login_ip='%s' where m_id=%s",0x4(%esp)
0841831d +0x0b3:  mov    -0xc(%ebp),%eax
08418320 +0x0b6:  mov    %eax,(%esp)
08418323 +0x0b9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08418328 +0x0be:  movl   $0x1,0x4(%esp)
08418330 +0x0c6:  mov    -0xc(%ebp),%eax
08418333 +0x0c9:  mov    %eax,(%esp)
08418336 +0x0cc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841833b +0x0d1:  xor    $0x1,%eax
0841833e +0x0d4:  test   %al,%al
08418340 +0x0d6:  jne    08418353 <+0xe9>
08418342 +0x0d8:  mov    -0xc(%ebp),%eax
08418345 +0x0db:  mov    %eax,(%esp)
08418348 +0x0de:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0841834d +0x0e3:  or     %edx,%eax
0841834f +0x0e5:  test   %eax,%eax
08418351 +0x0e7:  jne    0841835a <+0xf0>
08418353 +0x0e9:  mov    $0x1,%eax
08418358 +0x0ee:  jmp    0841835f <+0xf5>
0841835a +0x0f0:  mov    $0x0,%eax
0841835f +0x0f5:  test   %al,%al
08418361 +0x0f7:  je     084183cb <+0x161>
08418363 +0x0f9:  mov    -0x14(%ebp),%eax
08418366 +0x0fc:  lea    0xc(%eax),%esi
08418369 +0x0ff:  mov    -0x14(%ebp),%eax
0841836c +0x102:  mov    0x4(%eax),%ebx
0841836f +0x105:  mov    -0x14(%ebp),%eax
08418372 +0x108:  mov    (%eax),%eax
08418374 +0x10a:  movl   $0x0,0x4(%esp)
0841837c +0x112:  mov    %eax,(%esp)
0841837f +0x115:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08418384 +0x11a:  mov    -0x10(%ebp),%edx
08418387 +0x11d:  mov    %esi,0x14(%esp)
0841838b +0x121:  mov    %ebx,0x10(%esp)
0841838f +0x125:  mov    %eax,0xc(%esp)
08418393 +0x129:  mov    %edx,0x8(%esp)
08418397 +0x12d:  movl   $"inSert into login_account_%d (m_id,m_channel_no,login_status,last_login_date,login_ip) values(%s,%d,1,now(),'%s')",0x4(%esp)
0841839f +0x135:  mov    -0xc(%ebp),%eax
084183a2 +0x138:  mov    %eax,(%esp)
084183a5 +0x13b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084183aa +0x140:  movl   $0x1,0x4(%esp)
084183b2 +0x148:  mov    -0xc(%ebp),%eax
084183b5 +0x14b:  mov    %eax,(%esp)
084183b8 +0x14e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084183bd +0x153:  xor    $0x1,%eax
084183c0 +0x156:  test   %al,%al
084183c2 +0x158:  je     084183cb <+0x161>
084183c4 +0x15a:  mov    $0x0,%eax
084183c9 +0x15f:  jmp    084183d0 <+0x166>
084183cb +0x161:  mov    $0x1,%eax
084183d0 +0x166:  add    $0x30,%esp
084183d3 +0x169:  pop    %ebx
084183d4 +0x16a:  pop    %esi
084183d5 +0x16b:  pop    %ebp
084183d6 +0x16c:  ret
084183d7 +0x16d:  nop
```

## 反编译 C

```c
// DB_UpdateLogin::dispatch @ 0x841826a

/* DB_UpdateLogin::dispatch(int, int, Stream*) */

undefined4 DB_UpdateLogin::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_UPDATE_LOGIN *pSVar3;
  GameWorld *this;
  int iVar4;
  MySQL *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  undefined4 local_14;
  
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_LOGIN>(in_stack_00000010);
  if (pSVar3 == (SIG_UPDATE_LOGIN *)0x0) {
    return 0;
  }
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    local_14 = *(undefined4 *)(iVar4 + 0x378);
  }
  else {
    local_14 = *(undefined4 *)(pSVar3 + 8);
  }
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this_00,
                   "upDate login_account_%d set m_channel_no=%d,login_status=1,last_login_date=now(),login_ip=\'%s\' where m_id=%s"
                   ,local_14,*(undefined4 *)(pSVar3 + 4),pSVar3 + 0xc,uVar5);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(this_00), lVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar5 = *(undefined4 *)(pSVar3 + 4);
    uVar6 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(this_00,
                     "inSert into login_account_%d (m_id,m_channel_no,login_status,last_login_date,login_ip) values(%s,%d,1,now(),\'%s\')"
                     ,local_14,uVar6,uVar5,pSVar3 + 0xc);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
