# execute

`_ZN11game_master12CPvPStartCmd7executeEv`

`game_master::CPvPStartCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CPvPStartCmd` | `0x084a8f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8f6a  _ZN11game_master12CPvPStartCmd7executeEv
#           game_master::CPvPStartCmd::execute()
# range [0x084a8f6a, 0x084a8ff5]
084a8f6a +0x00:  push   %ebp
084a8f6b +0x01:  mov    %esp,%ebp
084a8f6d +0x03:  push   %ebx
084a8f6e +0x04:  sub    $0x34,%esp
084a8f71 +0x07:  mov    0x8(%ebp),%eax
084a8f74 +0x0a:  mov    %eax,(%esp)
084a8f77 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8f7c +0x12:  mov    %eax,(%esp)
084a8f7f +0x15:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
084a8f84 +0x1a:  mov    %eax,-0xc(%ebp)
084a8f87 +0x1d:  cmpl   $0x0,-0xc(%ebp)
084a8f8b +0x21:  jne    084a8fbb <+0x51>
084a8f8d +0x23:  movl   $"PVPRoom pRoom is NULL",0x10(%esp)
084a8f95 +0x2b:  movl   $0x169,0xc(%esp)
084a8f9d +0x33:  movl   $&_ZZN11game_master12CPvPStartCmd7executeEvE19__PRETTY_FUNCTION__,0x8(%esp)
084a8fa5 +0x3b:  movl   $"GameMaster.cpp",0x4(%esp)
084a8fad +0x43:  movl   $0x1,(%esp)
084a8fb4 +0x4a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084a8fb9 +0x4f:  jmp    084a8fef <+0x85>
084a8fbb +0x51:  mov    -0xc(%ebp),%eax
084a8fbe +0x54:  mov    0x6e4(%eax),%eax
084a8fc4 +0x5a:  mov    (%eax),%eax
084a8fc6 +0x5c:  add    $0x30,%eax
084a8fc9 +0x5f:  mov    (%eax),%ebx
084a8fcb +0x61:  mov    0x8(%ebp),%eax
084a8fce +0x64:  mov    %eax,(%esp)
084a8fd1 +0x67:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8fd6 +0x6c:  mov    -0xc(%ebp),%edx
084a8fd9 +0x6f:  mov    0x6e4(%edx),%edx
084a8fdf +0x75:  mov    -0xc(%ebp),%ecx
084a8fe2 +0x78:  mov    %ecx,0x8(%esp)
084a8fe6 +0x7c:  mov    %eax,0x4(%esp)
084a8fea +0x80:  mov    %edx,(%esp)
084a8fed +0x83:  call   *%ebx
084a8fef +0x85:  add    $0x34,%esp
084a8ff2 +0x88:  pop    %ebx
084a8ff3 +0x89:  pop    %ebp
084a8ff4 +0x8a:  ret
084a8ff5 +0x8b:  nop
```

## 反编译 C

```c
// game_master::CPvPStartCmd::execute @ 0x84a8f6a

/* game_master::CPvPStartCmd::execute() */

void __thiscall game_master::CPvPStartCmd::execute(CPvPStartCmd *this)

{
  code *pcVar1;
  CUser *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetPVPRoom(this_00);
  if (iVar2 == 0) {
    LogManager::logFormat
              (1,"GameMaster.cpp","virtual void game_master::CPvPStartCmd::execute()",0x169,
               "PVPRoom pRoom is NULL");
  }
  else {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x6e4) + 0x30);
    uVar3 = CCommand::GetUser((CCommand *)this);
    (*pcVar1)(*(undefined4 *)(iVar2 + 0x6e4),uVar3,iVar2);
  }
  return;
}
```
