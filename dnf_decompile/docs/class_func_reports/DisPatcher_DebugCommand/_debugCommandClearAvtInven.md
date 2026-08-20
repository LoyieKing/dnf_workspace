# _debugCommandClearAvtInven

`_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x08590254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08590254  _ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08590254, 0x0859040d]
08590254 +0x000:  push   %ebp
08590255 +0x001:  mov    %esp,%ebp
08590257 +0x003:  push   %ebx
08590258 +0x004:  sub    $0x34,%esp
0859025b +0x007:  movl   $0x0,-0xc(%ebp)
08590262 +0x00e:  jmp    08590387 <+0x133>
08590267 +0x013:  mov    0xc(%ebp),%eax
0859026a +0x016:  mov    %eax,(%esp)
0859026d +0x019:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08590272 +0x01e:  mov    0x654(%eax),%edx
08590278 +0x024:  mov    -0xc(%ebp),%eax
0859027b +0x027:  imul   $0x3d,%eax,%eax
0859027e +0x02a:  lea    (%edx,%eax,1),%eax
08590281 +0x02d:  mov    0x2(%eax),%eax
08590284 +0x030:  test   %eax,%eax
08590286 +0x032:  setne  %al
08590289 +0x035:  test   %al,%al
0859028b +0x037:  je     08590383 <+0x12f>
08590291 +0x03d:  mov    0xc(%ebp),%eax
08590294 +0x040:  mov    %eax,(%esp)
08590297 +0x043:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859029c +0x048:  mov    0x654(%eax),%edx
085902a2 +0x04e:  mov    -0xc(%ebp),%eax
085902a5 +0x051:  imul   $0x3d,%eax,%eax
085902a8 +0x054:  lea    (%edx,%eax,1),%eax
085902ab +0x057:  mov    0x7(%eax),%eax
085902ae +0x05a:  mov    %eax,-0x10(%ebp)
085902b1 +0x05d:  mov    0xc(%ebp),%eax
085902b4 +0x060:  mov    %eax,(%esp)
085902b7 +0x063:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085902bc +0x068:  movl   $0x1,0x14(%esp)
085902c4 +0x070:  movl   $0x3,0x10(%esp)
085902cc +0x078:  movl   $0x1,0xc(%esp)
085902d4 +0x080:  mov    -0xc(%ebp),%edx
085902d7 +0x083:  mov    %edx,0x8(%esp)
085902db +0x087:  movl   $0x2,0x4(%esp)
085902e3 +0x08f:  mov    %eax,(%esp)
085902e6 +0x092:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085902eb +0x097:  xor    $0x1,%eax
085902ee +0x09a:  test   %al,%al
085902f0 +0x09c:  je     08590347 <+0xf3>
085902f2 +0x09e:  mov    0xc(%ebp),%eax
085902f5 +0x0a1:  mov    %eax,(%esp)
085902f8 +0x0a4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085902fd +0x0a9:  movl   $0x0,0x4(%esp)
08590305 +0x0b1:  mov    %eax,(%esp)
08590308 +0x0b4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0859030d +0x0b9:  mov    %eax,0x14(%esp)
08590311 +0x0bd:  movl   $"DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED",0x10(%esp)
08590319 +0x0c5:  movl   $0x40c,0xc(%esp)
08590321 +0x0cd:  movl   $&_ZZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x8(%esp)
08590329 +0x0d5:  movl   $"DisPatcher_DebugCommand_First.h",0x4(%esp)
08590331 +0x0dd:  movl   $0x1,(%esp)
08590338 +0x0e4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859033d +0x0e9:  mov    $0x0,%eax
08590342 +0x0ee:  jmp    08590407 <+0x1b3>
08590347 +0x0f3:  mov    -0xc(%ebp),%eax
0859034a +0x0f6:  lea    0xa(%eax),%ebx
0859034d +0x0f9:  mov    0xc(%ebp),%eax
08590350 +0x0fc:  mov    %eax,(%esp)
08590353 +0x0ff:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08590358 +0x104:  movl   $0x0,0x14(%esp)
08590360 +0x10c:  mov    %ebx,0x10(%esp)
08590364 +0x110:  movl   $0x1,0xc(%esp)
0859036c +0x118:  mov    -0x10(%ebp),%edx
0859036f +0x11b:  mov    %edx,0x8(%esp)
08590373 +0x11f:  movl   $0x36,0x4(%esp)
0859037b +0x127:  mov    %eax,(%esp)
0859037e +0x12a:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08590383 +0x12f:  addl   $0x1,-0xc(%ebp)
08590387 +0x133:  cmpl   $0x68,-0xc(%ebp)
0859038b +0x137:  setle  %al
0859038e +0x13a:  test   %al,%al
08590390 +0x13c:  jne    08590267 <+0x13>
08590396 +0x142:  movl   $0x1,0x4(%esp)
0859039e +0x14a:  mov    0xc(%ebp),%eax
085903a1 +0x14d:  mov    %eax,(%esp)
085903a4 +0x150:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085903a9 +0x155:  xor    $0x1,%eax
085903ac +0x158:  test   %al,%al
085903ae +0x15a:  je     08590402 <+0x1ae>
085903b0 +0x15c:  mov    0xc(%ebp),%eax
085903b3 +0x15f:  mov    %eax,(%esp)
085903b6 +0x162:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085903bb +0x167:  movl   $0x0,0x4(%esp)
085903c3 +0x16f:  mov    %eax,(%esp)
085903c6 +0x172:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085903cb +0x177:  mov    %eax,0x14(%esp)
085903cf +0x17b:  movl   $"DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED",0x10(%esp)
085903d7 +0x183:  movl   $0x417,0xc(%esp)
085903df +0x18b:  movl   $&_ZZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x8(%esp)
085903e7 +0x193:  movl   $"DisPatcher_DebugCommand_First.h",0x4(%esp)
085903ef +0x19b:  movl   $0x1,(%esp)
085903f6 +0x1a2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085903fb +0x1a7:  mov    $0x0,%eax
08590400 +0x1ac:  jmp    08590407 <+0x1b3>
08590402 +0x1ae:  mov    $0x1,%eax
08590407 +0x1b3:  add    $0x34,%esp
0859040a +0x1b6:  pop    %ebx
0859040b +0x1b7:  pop    %ebp
0859040c +0x1b8:  ret
0859040d +0x1b9:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandClearAvtInven @ 0x8590254

/* DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  
  local_10 = 0;
  do {
    if (0x68 < local_10) {
      cVar1 = CUser::send_itemspace((CUser *)param_2,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"DisPatcher_DebugCommand_First.h",
                   "bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)"
                   ,0x417,
                   "DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
                   ,uVar5);
      }
      return cVar1 == '\x01';
    }
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    if (*(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 2) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      cVar1 = CInventory::delete_item(pCVar3,2,local_10,1,3,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"DisPatcher_DebugCommand_First.h",
                   "bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)"
                   ,0x40c,
                   "DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED"
                   ,uVar5);
        return false;
      }
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::SendAvatarEvent(pCVar3,0x36,iVar2,1,local_10 + 10,0);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
