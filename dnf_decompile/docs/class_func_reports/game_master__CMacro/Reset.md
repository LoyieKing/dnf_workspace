# Reset

`_ZN11game_master6CMacro5ResetEv`

`game_master::CMacro::Reset()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a85b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a85b4  _ZN11game_master6CMacro5ResetEv
#           game_master::CMacro::Reset()
# range [0x084a85b4, 0x084a865b]
084a85b4 +0x00:  push   %ebp
084a85b5 +0x01:  mov    %esp,%ebp
084a85b7 +0x03:  sub    $0x28,%esp
084a85ba +0x06:  mov    0x8(%ebp),%eax
084a85bd +0x09:  add    $0x4,%eax
084a85c0 +0x0c:  mov    %eax,(%esp)
084a85c3 +0x0f:  call   084b4600 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6b3>  ; global constructors keyed to game_master::CMacro::Reset()+0x6b3
084a85c8 +0x14:  xor    $0x1,%eax
084a85cb +0x17:  test   %al,%al
084a85cd +0x19:  je     084a8647 <+0x93>
084a85cf +0x1b:  movl   $0x0,-0xc(%ebp)
084a85d6 +0x22:  jmp    084a8621 <+0x6d>
084a85d8 +0x24:  mov    0x8(%ebp),%eax
084a85db +0x27:  lea    0x4(%eax),%edx
084a85de +0x2a:  mov    -0xc(%ebp),%eax
084a85e1 +0x2d:  mov    %eax,0x4(%esp)
084a85e5 +0x31:  mov    %edx,(%esp)
084a85e8 +0x34:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a85ed +0x39:  mov    0x4(%eax),%eax
084a85f0 +0x3c:  test   %eax,%eax
084a85f2 +0x3e:  setne  %al
084a85f5 +0x41:  test   %al,%al
084a85f7 +0x43:  je     084a861d <+0x69>
084a85f9 +0x45:  mov    0x8(%ebp),%eax
084a85fc +0x48:  lea    0x4(%eax),%edx
084a85ff +0x4b:  mov    -0xc(%ebp),%eax
084a8602 +0x4e:  mov    %eax,0x4(%esp)
084a8606 +0x52:  mov    %edx,(%esp)
084a8609 +0x55:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a860e +0x5a:  mov    0x4(%eax),%eax
084a8611 +0x5d:  test   %eax,%eax
084a8613 +0x5f:  je     084a861d <+0x69>
084a8615 +0x61:  mov    %eax,(%esp)
084a8618 +0x64:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
084a861d +0x69:  addl   $0x1,-0xc(%ebp)
084a8621 +0x6d:  mov    0x8(%ebp),%eax
084a8624 +0x70:  add    $0x4,%eax
084a8627 +0x73:  mov    %eax,(%esp)
084a862a +0x76:  call   084b4644 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6f7>  ; global constructors keyed to game_master::CMacro::Reset()+0x6f7
084a862f +0x7b:  cmp    -0xc(%ebp),%eax
084a8632 +0x7e:  seta   %al
084a8635 +0x81:  test   %al,%al
084a8637 +0x83:  jne    084a85d8 <+0x24>
084a8639 +0x85:  mov    0x8(%ebp),%eax
084a863c +0x88:  add    $0x4,%eax
084a863f +0x8b:  mov    %eax,(%esp)
084a8642 +0x8e:  call   084b4680 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x733>  ; global constructors keyed to game_master::CMacro::Reset()+0x733
084a8647 +0x93:  mov    0x8(%ebp),%eax
084a864a +0x96:  movl   $0x0,0x10(%eax)
084a8651 +0x9d:  mov    0x8(%ebp),%eax
084a8654 +0xa0:  movl   $0x0,(%eax)
084a865a +0xa6:  leave
084a865b +0xa7:  ret
```

## 反编译 C

```c
// game_master::CMacro::Reset @ 0x84a85b4

/* game_master::CMacro::Reset() */

void __thiscall game_master::CMacro::Reset(CMacro *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  cVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::empty();
  if (cVar1 != '\x01') {
    local_10 = 0;
    while( true ) {
      uVar3 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                        ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4));
      if (uVar3 <= local_10) break;
      iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
              operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4),local_10);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
                operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                            *)(this + 4),local_10);
        if (*(void **)(iVar2 + 4) != (void *)0x0) {
          operator_delete__(*(void **)(iVar2 + 4));
        }
      }
      local_10 = local_10 + 1;
    }
    std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::clear
              ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
               (this + 4));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this = 0;
  return;
}
```
