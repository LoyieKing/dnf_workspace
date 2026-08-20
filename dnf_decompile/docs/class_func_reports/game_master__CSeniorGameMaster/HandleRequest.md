# HandleRequest

`_ZN11game_master17CSeniorGameMaster13HandleRequestEPNS_8CCommandE`

`game_master::CSeniorGameMaster::HandleRequest(game_master::CCommand*)`

| 类 | 地址 |
|---|---|
| `game_master::CSeniorGameMaster` | `0x084a8c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8c44  _ZN11game_master17CSeniorGameMaster13HandleRequestEPNS_8CCommandE
#           game_master::CSeniorGameMaster::HandleRequest(game_master::CCommand*)
# range [0x084a8c44, 0x084a8c6d]
084a8c44 +0x00:  push   %ebp
084a8c45 +0x01:  mov    %esp,%ebp
084a8c47 +0x03:  sub    $0x18,%esp
084a8c4a +0x06:  mov    0xc(%ebp),%eax
084a8c4d +0x09:  mov    (%eax),%eax
084a8c4f +0x0b:  add    $0xc,%eax
084a8c52 +0x0e:  mov    (%eax),%edx
084a8c54 +0x10:  mov    0xc(%ebp),%eax
084a8c57 +0x13:  mov    %eax,(%esp)
084a8c5a +0x16:  call   *%edx
084a8c5c +0x18:  test   %al,%al
084a8c5e +0x1a:  je     084a8c6b <+0x27>
084a8c60 +0x1c:  mov    0xc(%ebp),%eax
084a8c63 +0x1f:  mov    %eax,(%esp)
084a8c66 +0x22:  call   084b3f90 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x43>  ; global constructors keyed to game_master::CMacro::Reset()+0x43
084a8c6b +0x27:  leave
084a8c6c +0x28:  ret
084a8c6d +0x29:  nop
```

## 反编译 C

```c
// game_master::CSeniorGameMaster::HandleRequest @ 0x84a8c44

/* game_master::CSeniorGameMaster::HandleRequest(game_master::CCommand*) */

void __thiscall
game_master::CSeniorGameMaster::HandleRequest(CSeniorGameMaster *this,CCommand *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  if (cVar1 != '\0') {
    CCommand::executeTemplate(param_1);
  }
  return;
}
```
