# CheckQuestConnection

`_ZN6CParty20CheckQuestConnectionEi20ENUM_MAZE_QUEST_TYPE`

`CParty::CheckQuestConnection(int, ENUM_MAZE_QUEST_TYPE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b6478` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b6478  _ZN6CParty20CheckQuestConnectionEi20ENUM_MAZE_QUEST_TYPE
#           CParty::CheckQuestConnection(int, ENUM_MAZE_QUEST_TYPE)
# range [0x085b6478, 0x085b653f]
085b6478 +0x00:  push   %ebp
085b6479 +0x01:  mov    %esp,%ebp
085b647b +0x03:  sub    $0x28,%esp
085b647e +0x06:  movl   $0x0,-0xc(%ebp)
085b6485 +0x0d:  jmp    085b6529 <+0xb1>
085b648a +0x12:  mov    -0xc(%ebp),%eax
085b648d +0x15:  mov    %eax,0x4(%esp)
085b6491 +0x19:  mov    0x8(%ebp),%eax
085b6494 +0x1c:  mov    %eax,(%esp)
085b6497 +0x1f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b649c +0x24:  test   %al,%al
085b649e +0x26:  je     085b6525 <+0xad>
085b64a4 +0x2c:  mov    0x10(%ebp),%eax
085b64a7 +0x2f:  test   %eax,%eax
085b64a9 +0x31:  je     085b64b2 <+0x3a>
085b64ab +0x33:  cmp    $0x1,%eax
085b64ae +0x36:  je     085b64eb <+0x73>
085b64b0 +0x38:  jmp    085b6525 <+0xad>
085b64b2 +0x3a:  mov    -0xc(%ebp),%edx
085b64b5 +0x3d:  mov    0x8(%ebp),%ecx
085b64b8 +0x40:  mov    %edx,%eax
085b64ba +0x42:  add    %eax,%eax
085b64bc +0x44:  add    %edx,%eax
085b64be +0x46:  shl    $0x3,%eax
085b64c1 +0x49:  lea    (%ecx,%eax,1),%eax
085b64c4 +0x4c:  add    $0x78,%eax
085b64c7 +0x4f:  mov    (%eax),%eax
085b64c9 +0x51:  mov    %eax,(%esp)
085b64cc +0x54:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085b64d1 +0x59:  mov    0xc(%ebp),%edx
085b64d4 +0x5c:  mov    %edx,0x4(%esp)
085b64d8 +0x60:  mov    %eax,(%esp)
085b64db +0x63:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
085b64e0 +0x68:  test   %al,%al
085b64e2 +0x6a:  je     085b6524 <+0xac>
085b64e4 +0x6c:  mov    $0x1,%eax
085b64e9 +0x71:  jmp    085b653d <+0xc5>
085b64eb +0x73:  mov    -0xc(%ebp),%edx
085b64ee +0x76:  mov    0x8(%ebp),%ecx
085b64f1 +0x79:  mov    %edx,%eax
085b64f3 +0x7b:  add    %eax,%eax
085b64f5 +0x7d:  add    %edx,%eax
085b64f7 +0x7f:  shl    $0x3,%eax
085b64fa +0x82:  lea    (%ecx,%eax,1),%eax
085b64fd +0x85:  add    $0x78,%eax
085b6500 +0x88:  mov    (%eax),%eax
085b6502 +0x8a:  mov    %eax,(%esp)
085b6505 +0x8d:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085b650a +0x92:  mov    0xc(%ebp),%edx
085b650d +0x95:  mov    %edx,0x4(%esp)
085b6511 +0x99:  mov    %eax,(%esp)
085b6514 +0x9c:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
085b6519 +0xa1:  test   %al,%al
085b651b +0xa3:  je     085b6525 <+0xad>
085b651d +0xa5:  mov    $0x1,%eax
085b6522 +0xaa:  jmp    085b653d <+0xc5>
085b6524 +0xac:  nop
085b6525 +0xad:  addl   $0x1,-0xc(%ebp)
085b6529 +0xb1:  cmpl   $0x3,-0xc(%ebp)
085b652d +0xb5:  setle  %al
085b6530 +0xb8:  test   %al,%al
085b6532 +0xba:  jne    085b648a <+0x12>
085b6538 +0xc0:  mov    $0x0,%eax
085b653d +0xc5:  leave
085b653e +0xc6:  ret
085b653f +0xc7:  nop
```

## 反编译 C

```c
// CParty::CheckQuestConnection @ 0x85b6478

/* CParty::CheckQuestConnection(int, ENUM_MAZE_QUEST_TYPE) */

undefined4 __thiscall CParty::CheckQuestConnection(CParty *this,int param_1,int param_3)

{
  char cVar1;
  UserQuest *pUVar2;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      if (param_3 == 0) {
        pUVar2 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)(this + local_10 * 0x18 + 0x78));
        cVar1 = UserQuest::IsDoingQuest(pUVar2,param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      else if (param_3 == 1) {
        pUVar2 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)(this + local_10 * 0x18 + 0x78));
        cVar1 = UserQuest::isClearQuest(pUVar2,param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
