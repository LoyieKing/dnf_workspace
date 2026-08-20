# _debugCommandOff

`_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858e918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858e918  _ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858e918, 0x0858e9c3]
0858e918 +0x00:  push   %ebp
0858e919 +0x01:  mov    %esp,%ebp
0858e91b +0x03:  push   %esi
0858e91c +0x04:  push   %ebx
0858e91d +0x05:  sub    $0x20,%esp
0858e920 +0x08:  mov    0xc(%ebp),%eax
0858e923 +0x0b:  mov    %eax,(%esp)
0858e926 +0x0e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858e92b +0x13:  xor    $0x1,%eax
0858e92e +0x16:  test   %al,%al
0858e930 +0x18:  je     0858e93c <+0x24>
0858e932 +0x1a:  mov    $0x0,%eax
0858e937 +0x1f:  jmp    0858e9bc <+0xa4>
0858e93c +0x24:  mov    0xc(%ebp),%eax
0858e93f +0x27:  mov    %eax,(%esp)
0858e942 +0x2a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858e947 +0x2f:  mov    %eax,%esi
0858e949 +0x31:  mov    0xc(%ebp),%eax
0858e94c +0x34:  mov    %eax,(%esp)
0858e94f +0x37:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858e954 +0x3c:  movl   $0x0,0x4(%esp)
0858e95c +0x44:  mov    %eax,(%esp)
0858e95f +0x47:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858e964 +0x4c:  mov    %eax,%ebx
0858e966 +0x4e:  movl   $0x0,0xc(%esp)
0858e96e +0x56:  movl   $0x41,0x8(%esp)
0858e976 +0x5e:  movl   $&_ZZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
0858e97e +0x66:  lea    -0x18(%ebp),%eax
0858e981 +0x69:  mov    %eax,(%esp)
0858e984 +0x6c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858e989 +0x71:  mov    %esi,0xc(%esp)
0858e98d +0x75:  mov    %ebx,0x8(%esp)
0858e991 +0x79:  movl   $"%s:'%s' GM Mode OFF.",0x4(%esp)
0858e999 +0x81:  lea    -0x18(%ebp),%eax
0858e99c +0x84:  mov    %eax,(%esp)
0858e99f +0x87:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858e9a4 +0x8c:  movl   $0x0,0x4(%esp)
0858e9ac +0x94:  mov    0xc(%ebp),%eax
0858e9af +0x97:  mov    %eax,(%esp)
0858e9b2 +0x9a:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
0858e9b7 +0x9f:  mov    $0x1,%eax
0858e9bc +0xa4:  add    $0x20,%esp
0858e9bf +0xa7:  pop    %ebx
0858e9c0 +0xa8:  pop    %esi
0858e9c1 +0xa9:  pop    %ebp
0858e9c2 +0xaa:  ret
0858e9c3 +0xab:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandOff @ 0x858e918

/* DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandOff(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)",
                       0x41,0);
    cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode OFF.",uVar4,uVar2);
    CUser::SetGameMasterMode((CUser *)param_2,false);
  }
  return cVar1 == '\x01';
}
```
