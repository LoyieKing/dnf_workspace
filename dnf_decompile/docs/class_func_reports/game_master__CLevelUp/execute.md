# execute

`_ZN11game_master8CLevelUp7executeEv`

`game_master::CLevelUp::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CLevelUp` | `0x084b38e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b38e2  _ZN11game_master8CLevelUp7executeEv
#           game_master::CLevelUp::execute()
# range [0x084b38e2, 0x084b395b]
084b38e2 +0x00:  push   %ebp
084b38e3 +0x01:  mov    %esp,%ebp
084b38e5 +0x03:  push   %esi
084b38e6 +0x04:  push   %ebx
084b38e7 +0x05:  sub    $0x20,%esp
084b38ea +0x08:  mov    0x8(%ebp),%eax
084b38ed +0x0b:  mov    %eax,(%esp)
084b38f0 +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b38f5 +0x13:  mov    %eax,-0xc(%ebp)
084b38f8 +0x16:  cmpl   $0x0,-0xc(%ebp)
084b38fc +0x1a:  je     084b3954 <+0x72>
084b38fe +0x1c:  lea    -0x10(%ebp),%eax
084b3901 +0x1f:  mov    %eax,(%esp)
084b3904 +0x22:  call   08233412 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8abc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8abc
084b3909 +0x27:  mov    0x8(%ebp),%eax
084b390c +0x2a:  mov    %eax,(%esp)
084b390f +0x2d:  call   084b398e <_ZN11game_master8CLevelUp8getLevelEv>  ; game_master::CLevelUp::getLevel()
084b3914 +0x32:  mov    %eax,0x8(%esp)
084b3918 +0x36:  mov    -0xc(%ebp),%eax
084b391b +0x39:  mov    %eax,0x4(%esp)
084b391f +0x3d:  lea    -0x10(%ebp),%eax
084b3922 +0x40:  mov    %eax,(%esp)
084b3925 +0x43:  call   0858efde <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri>  ; DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int)
084b392a +0x48:  jmp    084b3947 <+0x65>
084b392c +0x4a:  mov    %edx,%ebx
084b392e +0x4c:  mov    %eax,%esi
084b3930 +0x4e:  lea    -0x10(%ebp),%eax
084b3933 +0x51:  mov    %eax,(%esp)
084b3936 +0x54:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
084b393b +0x59:  mov    %esi,%eax
084b393d +0x5b:  mov    %ebx,%edx
084b393f +0x5d:  mov    %eax,(%esp)
084b3942 +0x60:  call   08ae3750 <_Unwind_Resume>
084b3947 +0x65:  lea    -0x10(%ebp),%eax
084b394a +0x68:  mov    %eax,(%esp)
084b394d +0x6b:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
084b3952 +0x70:  jmp    084b3955 <+0x73>
084b3954 +0x72:  nop
084b3955 +0x73:  add    $0x20,%esp
084b3958 +0x76:  pop    %ebx
084b3959 +0x77:  pop    %esi
084b395a +0x78:  pop    %ebp
084b395b +0x79:  ret
```

## 反编译 C

```c
// game_master::CLevelUp::execute @ 0x84b38e2

/* game_master::CLevelUp::execute() */

void __thiscall game_master::CLevelUp::execute(CLevelUp *this)

{
  int iVar1;
  DisPatcher_DebugCommand local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_14);
    iVar1 = getLevel(this);
                    /* try { // try from 084b3925 to 084b3929 has its CatchHandler @ 084b392c */
    DisPatcher_DebugCommand::_debugCommandSetLevel(local_14,local_10,iVar1);
    DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_14);
  }
  return;
}
```
