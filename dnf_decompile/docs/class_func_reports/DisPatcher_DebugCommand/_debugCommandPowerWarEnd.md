# _debugCommandPowerWarEnd

`_ZN23DisPatcher_DebugCommand24_debugCommandPowerWarEndEP5CUser`

`DisPatcher_DebugCommand::_debugCommandPowerWarEnd(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0859044e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859044e  _ZN23DisPatcher_DebugCommand24_debugCommandPowerWarEndEP5CUser
#           DisPatcher_DebugCommand::_debugCommandPowerWarEnd(CUser*)
# range [0x0859044e, 0x0859048d]
0859044e +0x00:  push   %ebp
0859044f +0x01:  mov    %esp,%ebp
08590451 +0x03:  push   %ebx
08590452 +0x04:  sub    $0x14,%esp
08590455 +0x07:  mov    0xc(%ebp),%eax
08590458 +0x0a:  mov    %eax,(%esp)
0859045b +0x0d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08590460 +0x12:  mov    %eax,%ebx
08590462 +0x14:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08590467 +0x19:  movl   $0x0,0x4(%esp)
0859046f +0x21:  mov    %eax,(%esp)
08590472 +0x24:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08590477 +0x29:  mov    %ebx,0x4(%esp)
0859047b +0x2d:  mov    %eax,(%esp)
0859047e +0x30:  call   0846dece <_ZN17CGuildServerProxy15SendPowerWarEndEj>  ; CGuildServerProxy::SendPowerWarEnd(unsigned int)
08590483 +0x35:  mov    $0x1,%eax
08590488 +0x3a:  add    $0x14,%esp
0859048b +0x3d:  pop    %ebx
0859048c +0x3e:  pop    %ebp
0859048d +0x3f:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandPowerWarEnd @ 0x859044e

/* DisPatcher_DebugCommand::_debugCommandPowerWarEnd(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPowerWarEnd(DisPatcher_DebugCommand *this,CUser *param_1)

{
  uint uVar1;
  CGuildServerProxy *this_00;
  
  uVar1 = CUser::get_acc_id(param_1);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendPowerWarEnd(this_00,uVar1);
  return 1;
}
```
