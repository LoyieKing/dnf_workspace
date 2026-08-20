# defaultSkillCommand

`_ZN5CUser19defaultSkillCommandEv`

`CUser::defaultSkillCommand()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086550ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086550ee  _ZN5CUser19defaultSkillCommandEv
#           CUser::defaultSkillCommand()
# range [0x086550ee, 0x0865514b]
086550ee +0x00:  push   %ebp
086550ef +0x01:  mov    %esp,%ebp
086550f1 +0x03:  sub    $0x28,%esp
086550f4 +0x06:  mov    0x8(%ebp),%eax
086550f7 +0x09:  mov    %eax,(%esp)
086550fa +0x0c:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
086550ff +0x11:  mov    %eax,-0xc(%ebp)
08655102 +0x14:  cmpl   $0x0,-0xc(%ebp)
08655106 +0x18:  je     08655117 <+0x29>
08655108 +0x1a:  mov    -0xc(%ebp),%eax
0865510b +0x1d:  mov    %eax,(%esp)
0865510e +0x20:  call   0869ac5e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x74b3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x74b3
08655113 +0x25:  test   %al,%al
08655115 +0x27:  je     0865511e <+0x30>
08655117 +0x29:  mov    $0x1,%eax
0865511c +0x2e:  jmp    08655123 <+0x35>
0865511e +0x30:  mov    $0x0,%eax
08655123 +0x35:  test   %al,%al
08655125 +0x37:  je     0865512e <+0x40>
08655127 +0x39:  mov    $0x0,%eax
0865512c +0x3e:  jmp    08655149 <+0x5b>
0865512e +0x40:  mov    -0xc(%ebp),%eax
08655131 +0x43:  mov    %eax,(%esp)
08655134 +0x46:  call   0869ac72 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x74c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x74c7
08655139 +0x4b:  mov    0x8(%ebp),%eax
0865513c +0x4e:  mov    %eax,(%esp)
0865513f +0x51:  call   0822f27a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4924>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4924
08655144 +0x56:  mov    $0x1,%eax
08655149 +0x5b:  leave
0865514a +0x5c:  ret
0865514b +0x5d:  nop
```

## 反编译 C

```c
// CUser::defaultSkillCommand @ 0x86550ee

/* CUser::defaultSkillCommand() */

bool __thiscall CUser::defaultSkillCommand(CUser *this)

{
  bool bVar1;
  char cVar2;
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  *this_00;
  
  this_00 = (map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
             *)CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if ((this_00 ==
       (map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
        *)0x0) ||
     (cVar2 = std::
              map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
              ::empty(this_00), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::clear(this_00);
    CUserCharacInfo::enableSaveSkill((CUserCharacInfo *)this);
  }
  return !bVar1;
}
```
