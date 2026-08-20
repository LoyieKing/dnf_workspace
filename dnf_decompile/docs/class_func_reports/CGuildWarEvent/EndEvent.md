# EndEvent

`_ZN14CGuildWarEvent8EndEventEv`

`CGuildWarEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CGuildWarEvent` | `0x0811d28c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d28c  _ZN14CGuildWarEvent8EndEventEv
#           CGuildWarEvent::EndEvent()
# range [0x0811d28c, 0x0811d35b]
0811d28c +0x00:  push   %ebp
0811d28d +0x01:  mov    %esp,%ebp
0811d28f +0x03:  push   %ebx
0811d290 +0x04:  sub    $0x24,%esp
0811d293 +0x07:  mov    0x8(%ebp),%eax
0811d296 +0x0a:  mov    (%eax),%eax
0811d298 +0x0c:  add    $0x34,%eax
0811d29b +0x0f:  mov    (%eax),%edx
0811d29d +0x11:  mov    0x8(%ebp),%eax
0811d2a0 +0x14:  movl   $0x0,0x4(%esp)
0811d2a8 +0x1c:  mov    %eax,(%esp)
0811d2ab +0x1f:  call   *%edx
0811d2ad +0x21:  test   %al,%al
0811d2af +0x23:  je     0811d356 <+0xca>
0811d2b5 +0x29:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0811d2ba +0x2e:  mov    %eax,(%esp)
0811d2bd +0x31:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0811d2c2 +0x36:  cmp    $0x6,%eax
0811d2c5 +0x39:  sete   %al
0811d2c8 +0x3c:  test   %al,%al
0811d2ca +0x3e:  je     0811d2fb <+0x6f>
0811d2cc +0x40:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0811d2d1 +0x45:  mov    0x1b0(%eax),%eax
0811d2d7 +0x4b:  movzbl %al,%ebx
0811d2da +0x4e:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0811d2df +0x53:  movl   $0x0,0x4(%esp)
0811d2e7 +0x5b:  mov    %eax,(%esp)
0811d2ea +0x5e:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0811d2ef +0x63:  mov    %ebx,0x4(%esp)
0811d2f3 +0x67:  mov    %eax,(%esp)
0811d2f6 +0x6a:  call   0846df52 <_ZN17CGuildServerProxy15SendGuildWarEndEh>  ; CGuildServerProxy::SendGuildWarEnd(unsigned char)
0811d2fb +0x6f:  mov    0x8(%ebp),%eax
0811d2fe +0x72:  movl   $0x0,0x4(%esp)
0811d306 +0x7a:  mov    %eax,(%esp)
0811d309 +0x7d:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811d30e +0x82:  mov    0x8(%ebp),%eax
0811d311 +0x85:  movw   $0x0,0xa(%eax)
0811d317 +0x8b:  mov    0x8(%ebp),%eax
0811d31a +0x8e:  movw   $0x0,0xc(%eax)
0811d320 +0x94:  movl   $0x0,0xc(%esp)
0811d328 +0x9c:  movl   $0x49,0x8(%esp)
0811d330 +0xa4:  movl   $&_ZZN14CGuildWarEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0811d338 +0xac:  lea    -0x18(%ebp),%eax
0811d33b +0xaf:  mov    %eax,(%esp)
0811d33e +0xb2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811d343 +0xb7:  movl   $"Guild War Event End",0x4(%esp)
0811d34b +0xbf:  lea    -0x18(%ebp),%eax
0811d34e +0xc2:  mov    %eax,(%esp)
0811d351 +0xc5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811d356 +0xca:  add    $0x24,%esp
0811d359 +0xcd:  pop    %ebx
0811d35a +0xce:  pop    %ebp
0811d35b +0xcf:  ret
```

## 反编译 C

```c
// CGuildWarEvent::EndEvent @ 0x811d28c

/* CGuildWarEvent::EndEvent() */

void __thiscall CGuildWarEvent::EndEvent(CGuildWarEvent *this)

{
  undefined4 uVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [20];
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 != '\0') {
    this_00 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(this_00);
    if (iVar3 == 6) {
      iVar3 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildWarEnd(this_01,(uchar)uVar1);
    }
    CEventBase::SetEventFlag((CEventBase *)this,false);
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::EndEvent()",0x49,0);
    cMyTrace::operator()(local_1c,"Guild War Event End");
  }
  return;
}
```
