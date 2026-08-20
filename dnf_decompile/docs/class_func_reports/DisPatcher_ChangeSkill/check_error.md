# check_error

`_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_ChangeSkill::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ChangeSkill` | `0x081c0196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0196  _ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_ChangeSkill::check_error(CUser*, MSG_BASE&)
# range [0x081c0196, 0x081c01eb]
081c0196 +0x00:  push   %ebp
081c0197 +0x01:  mov    %esp,%ebp
081c0199 +0x03:  sub    $0x28,%esp
081c019c +0x06:  mov    0x10(%ebp),%eax
081c019f +0x09:  mov    %eax,-0x10(%ebp)
081c01a2 +0x0c:  mov    0xc(%ebp),%eax
081c01a5 +0x0f:  mov    %eax,(%esp)
081c01a8 +0x12:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081c01ad +0x17:  mov    %eax,-0xc(%ebp)
081c01b0 +0x1a:  mov    -0xc(%ebp),%eax
081c01b3 +0x1d:  cmp    $0xffffffff,%eax
081c01b6 +0x20:  je     081c01bf <+0x29>
081c01b8 +0x22:  mov    -0xc(%ebp),%eax
081c01bb +0x25:  test   %eax,%eax
081c01bd +0x27:  jne    081c01d1 <+0x3b>
081c01bf +0x29:  mov    -0x10(%ebp),%eax
081c01c2 +0x2c:  movzbl 0xd(%eax),%eax
081c01c6 +0x30:  cmp    $0x1,%al
081c01c8 +0x32:  jne    081c01e3 <+0x4d>
081c01ca +0x34:  mov    $0x13,%eax
081c01cf +0x39:  jmp    081c01e9 <+0x53>
081c01d1 +0x3b:  mov    -0x10(%ebp),%eax
081c01d4 +0x3e:  movzbl 0xd(%eax),%eax
081c01d8 +0x42:  cmp    $0x1,%al
081c01da +0x44:  je     081c01e4 <+0x4e>
081c01dc +0x46:  mov    $0x13,%eax
081c01e1 +0x4b:  jmp    081c01e9 <+0x53>
081c01e3 +0x4d:  nop
081c01e4 +0x4e:  mov    $0x0,%eax
081c01e9 +0x53:  leave
081c01ea +0x54:  ret
081c01eb +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_ChangeSkill::check_error @ 0x81c0196

/* DisPatcher_ChangeSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_ChangeSkill::check_error(DisPatcher_ChangeSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    if (param_2[0xd] == (MSG_BASE)0x1) {
      return 0x13;
    }
  }
  else if (param_2[0xd] != (MSG_BASE)0x1) {
    return 0x13;
  }
  return 0;
}
```
