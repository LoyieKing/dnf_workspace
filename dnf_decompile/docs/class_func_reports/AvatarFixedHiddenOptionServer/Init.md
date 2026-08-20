# Init

`_ZN29AvatarFixedHiddenOptionServer4InitEv`

`AvatarFixedHiddenOptionServer::Init()`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e3e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e3e8  _ZN29AvatarFixedHiddenOptionServer4InitEv
#           AvatarFixedHiddenOptionServer::Init()
# range [0x0817e3e8, 0x0817e4c5]
0817e3e8 +0x00:  push   %ebp
0817e3e9 +0x01:  mov    %esp,%ebp
0817e3eb +0x03:  sub    $0x28,%esp
0817e3ee +0x06:  movl   $0x0,-0x14(%ebp)
0817e3f5 +0x0d:  jmp    0817e4b0 <+0xc8>
0817e3fa +0x12:  movl   $0x0,-0x18(%ebp)
0817e401 +0x19:  mov    -0x14(%ebp),%edx
0817e404 +0x1c:  mov    %edx,%eax
0817e406 +0x1e:  add    %eax,%eax
0817e408 +0x20:  add    %edx,%eax
0817e40a +0x22:  shl    $0x2,%eax
0817e40d +0x25:  add    0x8(%ebp),%eax
0817e410 +0x28:  add    $0x4,%eax
0817e413 +0x2b:  mov    %eax,(%esp)
0817e416 +0x2e:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
0817e41b +0x33:  mov    %eax,-0x10(%ebp)
0817e41e +0x36:  mov    -0x10(%ebp),%eax
0817e421 +0x39:  sub    $0x1,%eax
0817e424 +0x3c:  mov    %eax,%ecx
0817e426 +0x3e:  mov    -0x14(%ebp),%edx
0817e429 +0x41:  mov    %edx,%eax
0817e42b +0x43:  add    %eax,%eax
0817e42d +0x45:  add    %edx,%eax
0817e42f +0x47:  shl    $0x2,%eax
0817e432 +0x4a:  add    $0x50,%eax
0817e435 +0x4d:  add    0x8(%ebp),%eax
0817e438 +0x50:  mov    %ecx,0x4(%esp)
0817e43c +0x54:  mov    %eax,(%esp)
0817e43f +0x57:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
0817e444 +0x5c:  movl   $0x1,-0xc(%ebp)
0817e44b +0x63:  jmp    0817e49f <+0xb7>
0817e44d +0x65:  mov    -0xc(%ebp),%ecx
0817e450 +0x68:  mov    -0x14(%ebp),%edx
0817e453 +0x6b:  mov    %edx,%eax
0817e455 +0x6d:  add    %eax,%eax
0817e457 +0x6f:  add    %edx,%eax
0817e459 +0x71:  shl    $0x2,%eax
0817e45c +0x74:  add    0x8(%ebp),%eax
0817e45f +0x77:  add    $0x4,%eax
0817e462 +0x7a:  mov    %ecx,0x4(%esp)
0817e466 +0x7e:  mov    %eax,(%esp)
0817e469 +0x81:  call   0817f08a <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2bb>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2bb
0817e46e +0x86:  mov    0x10(%eax),%edx
0817e471 +0x89:  mov    -0x18(%ebp),%eax
0817e474 +0x8c:  lea    (%edx,%eax,1),%eax
0817e477 +0x8f:  mov    %eax,-0x18(%ebp)
0817e47a +0x92:  mov    -0x14(%ebp),%edx
0817e47d +0x95:  mov    %edx,%eax
0817e47f +0x97:  add    %eax,%eax
0817e481 +0x99:  add    %edx,%eax
0817e483 +0x9b:  shl    $0x2,%eax
0817e486 +0x9e:  add    $0x50,%eax
0817e489 +0xa1:  add    0x8(%ebp),%eax
0817e48c +0xa4:  lea    -0x18(%ebp),%edx
0817e48f +0xa7:  mov    %edx,0x4(%esp)
0817e493 +0xab:  mov    %eax,(%esp)
0817e496 +0xae:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0817e49b +0xb3:  addl   $0x1,-0xc(%ebp)
0817e49f +0xb7:  mov    -0xc(%ebp),%eax
0817e4a2 +0xba:  cmp    -0x10(%ebp),%eax
0817e4a5 +0xbd:  setl   %al
0817e4a8 +0xc0:  test   %al,%al
0817e4aa +0xc2:  jne    0817e44d <+0x65>
0817e4ac +0xc4:  addl   $0x1,-0x14(%ebp)
0817e4b0 +0xc8:  cmpl   $0x5,-0x14(%ebp)
0817e4b4 +0xcc:  setle  %al
0817e4b7 +0xcf:  test   %al,%al
0817e4b9 +0xd1:  jne    0817e3fa <+0x12>
0817e4bf +0xd7:  mov    $0x1,%eax
0817e4c4 +0xdc:  leave
0817e4c5 +0xdd:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::Init @ 0x817e3e8

/* AvatarFixedHiddenOptionServer::Init() */

undefined4 __thiscall AvatarFixedHiddenOptionServer::Init(AvatarFixedHiddenOptionServer *this)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    local_1c = 0;
    local_14 = std::
               vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               ::size((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                       *)(this + local_18 * 0xc + 4));
    std::vector<int,std::allocator<int>>::reserve
              ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x50),local_14 - 1);
    for (local_10 = 1; (int)local_10 < local_14; local_10 = local_10 + 1) {
      iVar1 = std::
              vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
              ::operator[]((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                            *)(this + local_18 * 0xc + 4),local_10);
      local_1c = *(int *)(iVar1 + 0x10) + local_1c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x50),&local_1c);
    }
  }
  return 1;
}
```
