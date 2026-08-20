# RudMacro

`_ZN11game_master6CMacro8RudMacroEv`

`game_master::CMacro::RudMacro()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a8686` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8686  _ZN11game_master6CMacro8RudMacroEv
#           game_master::CMacro::RudMacro()
# range [0x084a8686, 0x084a86fd]
084a8686 +0x00:  push   %ebp
084a8687 +0x01:  mov    %esp,%ebp
084a8689 +0x03:  sub    $0x28,%esp
084a868c +0x06:  mov    0x8(%ebp),%eax
084a868f +0x09:  movl   $0x2,(%eax)
084a8695 +0x0f:  movl   $0x0,-0x10(%ebp)
084a869c +0x16:  jmp    084a86e3 <+0x5d>
084a869e +0x18:  mov    0x8(%ebp),%eax
084a86a1 +0x1b:  lea    0x4(%eax),%edx
084a86a4 +0x1e:  mov    -0x10(%ebp),%eax
084a86a7 +0x21:  mov    %eax,0x4(%esp)
084a86ab +0x25:  mov    %edx,(%esp)
084a86ae +0x28:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a86b3 +0x2d:  mov    %eax,-0xc(%ebp)
084a86b6 +0x30:  mov    -0xc(%ebp),%eax
084a86b9 +0x33:  mov    0x4(%eax),%eax
084a86bc +0x36:  test   %eax,%eax
084a86be +0x38:  je     084a86df <+0x59>
084a86c0 +0x3a:  mov    -0xc(%ebp),%eax
084a86c3 +0x3d:  mov    0x8(%eax),%edx
084a86c6 +0x40:  mov    -0xc(%ebp),%eax
084a86c9 +0x43:  mov    0x4(%eax),%eax
084a86cc +0x46:  mov    %edx,0x8(%esp)
084a86d0 +0x4a:  mov    %eax,0x4(%esp)
084a86d4 +0x4e:  mov    0x8(%ebp),%eax
084a86d7 +0x51:  mov    %eax,(%esp)
084a86da +0x54:  call   084a8924 <_ZN11game_master6CMacro10SendPacketEPKci>  ; game_master::CMacro::SendPacket(char const*, int)
084a86df +0x59:  addl   $0x1,-0x10(%ebp)
084a86e3 +0x5d:  mov    0x8(%ebp),%eax
084a86e6 +0x60:  add    $0x4,%eax
084a86e9 +0x63:  mov    %eax,(%esp)
084a86ec +0x66:  call   084b4644 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6f7>  ; global constructors keyed to game_master::CMacro::Reset()+0x6f7
084a86f1 +0x6b:  cmp    -0x10(%ebp),%eax
084a86f4 +0x6e:  seta   %al
084a86f7 +0x71:  test   %al,%al
084a86f9 +0x73:  jne    084a869e <+0x18>
084a86fb +0x75:  leave
084a86fc +0x76:  ret
084a86fd +0x77:  nop
```

## 反编译 C

```c
// game_master::CMacro::RudMacro @ 0x84a8686

/* game_master::CMacro::RudMacro() */

void __thiscall game_master::CMacro::RudMacro(CMacro *this)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  
  *(undefined4 *)this = 2;
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                      ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4));
    if (uVar2 <= local_14) break;
    iVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
            operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4),local_14);
    if (*(int *)(iVar1 + 4) != 0) {
      SendPacket(this,*(char **)(iVar1 + 4),*(int *)(iVar1 + 8));
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
