# swap

`_ZN14AvatarRoulette4swapEPS_`

`AvatarRoulette::swap(AvatarRoulette*)`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911e4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911e4e  _ZN14AvatarRoulette4swapEPS_
#           AvatarRoulette::swap(AvatarRoulette*)
# range [0x08911e4e, 0x08911ee2]
08911e4e +0x00:  push   %ebp
08911e4f +0x01:  mov    %esp,%ebp
08911e51 +0x03:  sub    $0x28,%esp
08911e54 +0x06:  mov    0xc(%ebp),%eax
08911e57 +0x09:  mov    (%eax),%edx
08911e59 +0x0b:  mov    0x8(%ebp),%eax
08911e5c +0x0e:  mov    %edx,(%eax)
08911e5e +0x10:  mov    0xc(%ebp),%eax
08911e61 +0x13:  mov    0x4(%eax),%edx
08911e64 +0x16:  mov    0x8(%ebp),%eax
08911e67 +0x19:  mov    %edx,0x4(%eax)
08911e6a +0x1c:  mov    0xc(%ebp),%eax
08911e6d +0x1f:  mov    0x8(%eax),%edx
08911e70 +0x22:  mov    0x8(%ebp),%eax
08911e73 +0x25:  mov    %edx,0x8(%eax)
08911e76 +0x28:  mov    0xc(%ebp),%eax
08911e79 +0x2b:  mov    0xc(%eax),%edx
08911e7c +0x2e:  mov    0x8(%ebp),%eax
08911e7f +0x31:  mov    %edx,0xc(%eax)
08911e82 +0x34:  mov    0xc(%ebp),%eax
08911e85 +0x37:  mov    0x10(%eax),%edx
08911e88 +0x3a:  mov    0x8(%ebp),%eax
08911e8b +0x3d:  mov    %edx,0x10(%eax)
08911e8e +0x40:  movl   $0x0,-0xc(%ebp)
08911e95 +0x47:  jmp    08911ed1 <+0x83>
08911e97 +0x49:  mov    -0xc(%ebp),%edx
08911e9a +0x4c:  mov    %edx,%eax
08911e9c +0x4e:  add    %eax,%eax
08911e9e +0x50:  add    %edx,%eax
08911ea0 +0x52:  shl    $0x2,%eax
08911ea3 +0x55:  add    $0x10,%eax
08911ea6 +0x58:  add    0xc(%ebp),%eax
08911ea9 +0x5b:  lea    0x4(%eax),%ecx
08911eac +0x5e:  mov    -0xc(%ebp),%edx
08911eaf +0x61:  mov    %edx,%eax
08911eb1 +0x63:  add    %eax,%eax
08911eb3 +0x65:  add    %edx,%eax
08911eb5 +0x67:  shl    $0x2,%eax
08911eb8 +0x6a:  add    $0x10,%eax
08911ebb +0x6d:  add    0x8(%ebp),%eax
08911ebe +0x70:  add    $0x4,%eax
08911ec1 +0x73:  mov    %ecx,0x4(%esp)
08911ec5 +0x77:  mov    %eax,(%esp)
08911ec8 +0x7a:  call   08921044 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7d23>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7d23
08911ecd +0x7f:  addl   $0x1,-0xc(%ebp)
08911ed1 +0x83:  cmpl   $0xa,-0xc(%ebp)
08911ed5 +0x87:  setle  %al
08911ed8 +0x8a:  test   %al,%al
08911eda +0x8c:  jne    08911e97 <+0x49>
08911edc +0x8e:  mov    $0x1,%eax
08911ee1 +0x93:  leave
08911ee2 +0x94:  ret
```

## 反编译 C

```c
// AvatarRoulette::swap @ 0x8911e4e

/* AvatarRoulette::swap(AvatarRoulette*) */

undefined4 __thiscall AvatarRoulette::swap(AvatarRoulette *this,AvatarRoulette *param_1)

{
  int local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::swap((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            *)(this + local_10 * 0xc + 0x14),(vector *)(param_1 + local_10 * 0xc + 0x14));
  }
  return 1;
}
```
