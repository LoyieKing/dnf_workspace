# HandleRequest

`_ZN11game_master17CJuniorGameMaster13HandleRequestEPNS_8CCommandE`

`game_master::CJuniorGameMaster::HandleRequest(game_master::CCommand*)`

| 类 | 地址 |
|---|---|
| `game_master::CJuniorGameMaster` | `0x084a8c06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8c06  _ZN11game_master17CJuniorGameMaster13HandleRequestEPNS_8CCommandE
#           game_master::CJuniorGameMaster::HandleRequest(game_master::CCommand*)
# range [0x084a8c06, 0x084a8c43]
084a8c06 +0x00:  push   %ebp
084a8c07 +0x01:  mov    %esp,%ebp
084a8c09 +0x03:  sub    $0x18,%esp
084a8c0c +0x06:  mov    0xc(%ebp),%eax
084a8c0f +0x09:  mov    (%eax),%eax
084a8c11 +0x0b:  add    $0x8,%eax
084a8c14 +0x0e:  mov    (%eax),%edx
084a8c16 +0x10:  mov    0xc(%ebp),%eax
084a8c19 +0x13:  mov    %eax,(%esp)
084a8c1c +0x16:  call   *%edx
084a8c1e +0x18:  test   %al,%al
084a8c20 +0x1a:  je     084a8c2f <+0x29>
084a8c22 +0x1c:  mov    0xc(%ebp),%eax
084a8c25 +0x1f:  mov    %eax,(%esp)
084a8c28 +0x22:  call   084b3f90 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x43>  ; global constructors keyed to game_master::CMacro::Reset()+0x43
084a8c2d +0x27:  jmp    084a8c41 <+0x3b>
084a8c2f +0x29:  mov    0x8(%ebp),%eax
084a8c32 +0x2c:  mov    0xc(%ebp),%edx
084a8c35 +0x2f:  mov    %edx,0x4(%esp)
084a8c39 +0x33:  mov    %eax,(%esp)
084a8c3c +0x36:  call   082a7ed6 <_GLOBAL__I__ZN4CLog5this_E+0x42fd>  ; global constructors keyed to CLog::this_+0x42fd
084a8c41 +0x3b:  leave
084a8c42 +0x3c:  ret
084a8c43 +0x3d:  nop
```

## 反编译 C

```c
// game_master::CJuniorGameMaster::HandleRequest @ 0x84a8c06

/* game_master::CJuniorGameMaster::HandleRequest(game_master::CCommand*) */

void __thiscall
game_master::CJuniorGameMaster::HandleRequest(CJuniorGameMaster *this,CCommand *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)param_1 + 8))(param_1);
  if (cVar1 == '\0') {
    IGameMaster::HandleRequest((IGameMaster *)this,param_1);
  }
  else {
    CCommand::executeTemplate(param_1);
  }
  return;
}
```
