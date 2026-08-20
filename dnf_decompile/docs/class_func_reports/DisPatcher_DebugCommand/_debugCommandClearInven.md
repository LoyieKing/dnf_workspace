# _debugCommandClearInven

`_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0859019e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859019e  _ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0859019e, 0x08590253]
0859019e +0x00:  push   %ebp
0859019f +0x01:  mov    %esp,%ebp
085901a1 +0x03:  sub    $0x38,%esp
085901a4 +0x06:  movl   $0x9,-0xc(%ebp)
085901ab +0x0d:  jmp    085901d3 <+0x35>
085901ad +0x0f:  mov    0xc(%ebp),%eax
085901b0 +0x12:  mov    %eax,(%esp)
085901b3 +0x15:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085901b8 +0x1a:  mov    0x650(%eax),%edx
085901be +0x20:  mov    -0xc(%ebp),%eax
085901c1 +0x23:  imul   $0x3d,%eax,%eax
085901c4 +0x26:  lea    (%edx,%eax,1),%eax
085901c7 +0x29:  mov    %eax,(%esp)
085901ca +0x2c:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085901cf +0x31:  addl   $0x1,-0xc(%ebp)
085901d3 +0x35:  cmpl   $0x137,-0xc(%ebp)
085901da +0x3c:  setle  %al
085901dd +0x3f:  test   %al,%al
085901df +0x41:  jne    085901ad <+0xf>
085901e1 +0x43:  movl   $0x0,0x4(%esp)
085901e9 +0x4b:  mov    0xc(%ebp),%eax
085901ec +0x4e:  mov    %eax,(%esp)
085901ef +0x51:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085901f4 +0x56:  xor    $0x1,%eax
085901f7 +0x59:  test   %al,%al
085901f9 +0x5b:  je     0859024d <+0xaf>
085901fb +0x5d:  mov    0xc(%ebp),%eax
085901fe +0x60:  mov    %eax,(%esp)
08590201 +0x63:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08590206 +0x68:  movl   $0x0,0x4(%esp)
0859020e +0x70:  mov    %eax,(%esp)
08590211 +0x73:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08590216 +0x78:  mov    %eax,0x14(%esp)
0859021a +0x7c:  movl   $"DisPatcher_DebugCommand::_debugCommandClearInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED",0x10(%esp)
08590222 +0x84:  movl   $0x3af,0xc(%esp)
0859022a +0x8c:  movl   $&_ZZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x8(%esp)
08590232 +0x94:  movl   $"DisPatcher_DebugCommand_First.h",0x4(%esp)
0859023a +0x9c:  movl   $0x1,(%esp)
08590241 +0xa3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08590246 +0xa8:  mov    $0x0,%eax
0859024b +0xad:  jmp    08590252 <+0xb4>
0859024d +0xaf:  mov    $0x1,%eax
08590252 +0xb4:  leave
08590253 +0xb5:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandClearInven @ 0x859019e

/* DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandClearInven(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10;
  
  for (local_10 = 9; local_10 < 0x138; local_10 = local_10 + 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    Inven_Item::reset((Inven_Item *)(*(int *)(iVar2 + 0x650) + local_10 * 0x3d));
  }
  cVar1 = CUser::send_itemspace((CUser *)param_2,0);
  if (cVar1 != '\x01') {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    LogManager::logFormat
              (1,"DisPatcher_DebugCommand_First.h",
               "bool DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&)",
               0x3af,
               "DisPatcher_DebugCommand::_debugCommandClearInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar4);
  }
  return cVar1 == '\x01';
}
```
