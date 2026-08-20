# clear

`_ZN14AvatarRoulette5clearEv`

`AvatarRoulette::clear()`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911cf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911cf6  _ZN14AvatarRoulette5clearEv
#           AvatarRoulette::clear()
# range [0x08911cf6, 0x08911d9f]
08911cf6 +0x00:  push   %ebp
08911cf7 +0x01:  mov    %esp,%ebp
08911cf9 +0x03:  sub    $0x28,%esp
08911cfc +0x06:  movl   $0x0,-0x14(%ebp)
08911d03 +0x0d:  jmp    08911d8f <+0x99>
08911d08 +0x12:  movl   $0x0,-0x10(%ebp)
08911d0f +0x19:  mov    -0x14(%ebp),%edx
08911d12 +0x1c:  mov    %edx,%eax
08911d14 +0x1e:  add    %eax,%eax
08911d16 +0x20:  add    %edx,%eax
08911d18 +0x22:  shl    $0x2,%eax
08911d1b +0x25:  add    $0x10,%eax
08911d1e +0x28:  add    0x8(%ebp),%eax
08911d21 +0x2b:  add    $0x4,%eax
08911d24 +0x2e:  mov    %eax,(%esp)
08911d27 +0x31:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
08911d2c +0x36:  mov    %eax,-0xc(%ebp)
08911d2f +0x39:  jmp    08911d61 <+0x6b>
08911d31 +0x3b:  mov    -0x10(%ebp),%ecx
08911d34 +0x3e:  mov    -0x14(%ebp),%edx
08911d37 +0x41:  mov    %edx,%eax
08911d39 +0x43:  add    %eax,%eax
08911d3b +0x45:  add    %edx,%eax
08911d3d +0x47:  shl    $0x2,%eax
08911d40 +0x4a:  add    $0x10,%eax
08911d43 +0x4d:  add    0x8(%ebp),%eax
08911d46 +0x50:  add    $0x4,%eax
08911d49 +0x53:  mov    %ecx,0x4(%esp)
08911d4d +0x57:  mov    %eax,(%esp)
08911d50 +0x5a:  call   08180782 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x419>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x419
08911d55 +0x5f:  mov    %eax,(%esp)
08911d58 +0x62:  call   08920d9a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7a79>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7a79
08911d5d +0x67:  addl   $0x1,-0x10(%ebp)
08911d61 +0x6b:  mov    -0x10(%ebp),%eax
08911d64 +0x6e:  cmp    -0xc(%ebp),%eax
08911d67 +0x71:  setl   %al
08911d6a +0x74:  test   %al,%al
08911d6c +0x76:  jne    08911d31 <+0x3b>
08911d6e +0x78:  mov    -0x14(%ebp),%edx
08911d71 +0x7b:  mov    %edx,%eax
08911d73 +0x7d:  add    %eax,%eax
08911d75 +0x7f:  add    %edx,%eax
08911d77 +0x81:  shl    $0x2,%eax
08911d7a +0x84:  add    $0x10,%eax
08911d7d +0x87:  add    0x8(%ebp),%eax
08911d80 +0x8a:  add    $0x4,%eax
08911d83 +0x8d:  mov    %eax,(%esp)
08911d86 +0x90:  call   08920db6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7a95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7a95
08911d8b +0x95:  addl   $0x1,-0x14(%ebp)
08911d8f +0x99:  cmpl   $0xa,-0x14(%ebp)
08911d93 +0x9d:  setle  %al
08911d96 +0xa0:  test   %al,%al
08911d98 +0xa2:  jne    08911d08 <+0x12>
08911d9e +0xa8:  leave
08911d9f +0xa9:  ret
```

## 反编译 C

```c
// AvatarRoulette::clear @ 0x8911cf6

/* AvatarRoulette::clear() */

void __thiscall AvatarRoulette::clear(AvatarRoulette *this)

{
  int iVar1;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *this_00;
  int local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
    local_14 = 0;
    iVar1 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(this + local_18 * 0xc + 0x14));
    for (; (int)local_14 < iVar1; local_14 = local_14 + 1) {
      this_00 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *
                )std::
                 vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                               *)(this + local_18 * 0xc + 0x14),local_14);
      std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>::clear
                (this_00);
    }
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::clear((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
             *)(this + local_18 * 0xc + 0x14));
  }
  return;
}
```
