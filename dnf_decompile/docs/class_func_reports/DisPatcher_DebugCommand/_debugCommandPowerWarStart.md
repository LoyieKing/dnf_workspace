# _debugCommandPowerWarStart

`_ZN23DisPatcher_DebugCommand26_debugCommandPowerWarStartEP5CUser`

`DisPatcher_DebugCommand::_debugCommandPowerWarStart(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0859040e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859040e  _ZN23DisPatcher_DebugCommand26_debugCommandPowerWarStartEP5CUser
#           DisPatcher_DebugCommand::_debugCommandPowerWarStart(CUser*)
# range [0x0859040e, 0x0859044d]
0859040e +0x00:  push   %ebp
0859040f +0x01:  mov    %esp,%ebp
08590411 +0x03:  push   %ebx
08590412 +0x04:  sub    $0x14,%esp
08590415 +0x07:  mov    0xc(%ebp),%eax
08590418 +0x0a:  mov    %eax,(%esp)
0859041b +0x0d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08590420 +0x12:  mov    %eax,%ebx
08590422 +0x14:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08590427 +0x19:  movl   $0x0,0x4(%esp)
0859042f +0x21:  mov    %eax,(%esp)
08590432 +0x24:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08590437 +0x29:  mov    %ebx,0x4(%esp)
0859043b +0x2d:  mov    %eax,(%esp)
0859043e +0x30:  call   0846de80 <_ZN17CGuildServerProxy17SendPowerWarStartEj>  ; CGuildServerProxy::SendPowerWarStart(unsigned int)
08590443 +0x35:  mov    $0x1,%eax
08590448 +0x3a:  add    $0x14,%esp
0859044b +0x3d:  pop    %ebx
0859044c +0x3e:  pop    %ebp
0859044d +0x3f:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandPowerWarStart @ 0x859040e

/* DisPatcher_DebugCommand::_debugCommandPowerWarStart(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPowerWarStart(DisPatcher_DebugCommand *this,CUser *param_1)

{
  uint uVar1;
  CGuildServerProxy *this_00;
  
  uVar1 = CUser::get_acc_id(param_1);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendPowerWarStart(this_00,uVar1);
  return 1;
}
```
