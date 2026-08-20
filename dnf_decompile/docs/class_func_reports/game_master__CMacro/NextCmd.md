# NextCmd

`_ZN11game_master6CMacro7NextCmdEv`

`game_master::CMacro::NextCmd()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a86fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a86fe  _ZN11game_master6CMacro7NextCmdEv
#           game_master::CMacro::NextCmd()
# range [0x084a86fe, 0x084a87e1]
084a86fe +0x00:  push   %ebp
084a86ff +0x01:  mov    %esp,%ebp
084a8701 +0x03:  push   %ebx
084a8702 +0x04:  sub    $0x24,%esp
084a8705 +0x07:  mov    0x8(%ebp),%eax
084a8708 +0x0a:  mov    0x10(%eax),%ebx
084a870b +0x0d:  mov    0x8(%ebp),%eax
084a870e +0x10:  add    $0x4,%eax
084a8711 +0x13:  mov    %eax,(%esp)
084a8714 +0x16:  call   084b4644 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6f7>  ; global constructors keyed to game_master::CMacro::Reset()+0x6f7
084a8719 +0x1b:  cmp    %eax,%ebx
084a871b +0x1d:  setae  %al
084a871e +0x20:  test   %al,%al
084a8720 +0x22:  je     084a873a <+0x3c>
084a8722 +0x24:  mov    0x8(%ebp),%eax
084a8725 +0x27:  movl   $0x0,(%eax)
084a872b +0x2d:  mov    0x8(%ebp),%eax
084a872e +0x30:  movl   $0x0,0x10(%eax)
084a8735 +0x37:  jmp    084a87dc <+0xde>
084a873a +0x3c:  mov    0x8(%ebp),%eax
084a873d +0x3f:  mov    0x10(%eax),%eax
084a8740 +0x42:  mov    0x8(%ebp),%edx
084a8743 +0x45:  add    $0x4,%edx
084a8746 +0x48:  mov    %eax,0x4(%esp)
084a874a +0x4c:  mov    %edx,(%esp)
084a874d +0x4f:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a8752 +0x54:  mov    %eax,-0xc(%ebp)
084a8755 +0x57:  mov    -0xc(%ebp),%eax
084a8758 +0x5a:  mov    0x4(%eax),%eax
084a875b +0x5d:  test   %eax,%eax
084a875d +0x5f:  je     084a877e <+0x80>
084a875f +0x61:  mov    -0xc(%ebp),%eax
084a8762 +0x64:  mov    0x8(%eax),%edx
084a8765 +0x67:  mov    -0xc(%ebp),%eax
084a8768 +0x6a:  mov    0x4(%eax),%eax
084a876b +0x6d:  mov    %edx,0x8(%esp)
084a876f +0x71:  mov    %eax,0x4(%esp)
084a8773 +0x75:  mov    0x8(%ebp),%eax
084a8776 +0x78:  mov    %eax,(%esp)
084a8779 +0x7b:  call   084a8924 <_ZN11game_master6CMacro10SendPacketEPKci>  ; game_master::CMacro::SendPacket(char const*, int)
084a877e +0x80:  mov    0x8(%ebp),%eax
084a8781 +0x83:  mov    0x10(%eax),%eax
084a8784 +0x86:  lea    0x1(%eax),%ebx
084a8787 +0x89:  mov    0x8(%ebp),%eax
084a878a +0x8c:  add    $0x4,%eax
084a878d +0x8f:  mov    %eax,(%esp)
084a8790 +0x92:  call   084b4644 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6f7>  ; global constructors keyed to game_master::CMacro::Reset()+0x6f7
084a8795 +0x97:  cmp    %eax,%ebx
084a8797 +0x99:  setb   %al
084a879a +0x9c:  test   %al,%al
084a879c +0x9e:  je     084a87dc <+0xde>
084a879e +0xa0:  mov    0x8(%ebp),%eax
084a87a1 +0xa3:  mov    0x10(%eax),%eax
084a87a4 +0xa6:  lea    0x1(%eax),%edx
084a87a7 +0xa9:  mov    0x8(%ebp),%eax
084a87aa +0xac:  mov    %edx,0x10(%eax)
084a87ad +0xaf:  mov    0x8(%ebp),%eax
084a87b0 +0xb2:  mov    0x10(%eax),%eax
084a87b3 +0xb5:  mov    0x8(%ebp),%edx
084a87b6 +0xb8:  add    $0x4,%edx
084a87b9 +0xbb:  mov    %eax,0x4(%esp)
084a87bd +0xbf:  mov    %edx,(%esp)
084a87c0 +0xc2:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a87c5 +0xc7:  mov    0x4(%eax),%eax
084a87c8 +0xca:  test   %eax,%eax
084a87ca +0xcc:  setne  %al
084a87cd +0xcf:  test   %al,%al
084a87cf +0xd1:  je     084a87dc <+0xde>
084a87d1 +0xd3:  mov    0x8(%ebp),%eax
084a87d4 +0xd6:  mov    %eax,(%esp)
084a87d7 +0xd9:  call   084a86fe <+0x0>
084a87dc +0xde:  add    $0x24,%esp
084a87df +0xe1:  pop    %ebx
084a87e0 +0xe2:  pop    %ebp
084a87e1 +0xe3:  ret
```

## 反编译 C

```c
// game_master::CMacro::NextCmd @ 0x84a86fe

/* game_master::CMacro::NextCmd() */

void __thiscall game_master::CMacro::NextCmd(CMacro *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x10);
  uVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                    ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                     (this + 4));
  if (uVar3 < uVar1) {
    iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
            operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4),*(uint *)(this + 0x10));
    if (*(int *)(iVar2 + 4) != 0) {
      SendPacket(this,*(char **)(iVar2 + 4),*(int *)(iVar2 + 8));
    }
    iVar2 = *(int *)(this + 0x10);
    uVar3 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                      ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4));
    if (iVar2 + 1U < uVar3) {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
              operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4),*(uint *)(this + 0x10));
      if (*(int *)(iVar2 + 4) != 0) {
        NextCmd(this);
      }
    }
  }
  else {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}
```
