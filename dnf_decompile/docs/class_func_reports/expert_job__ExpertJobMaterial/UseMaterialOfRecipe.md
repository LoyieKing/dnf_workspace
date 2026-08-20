# UseMaterialOfRecipe

`_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard`

`expert_job::ExpertJobMaterial::UseMaterialOfRecipe(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c536  _ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard
#           expert_job::ExpertJobMaterial::UseMaterialOfRecipe(PacketGuard*)
# range [0x0849c536, 0x0849c611]
0849c536 +0x00:  push   %ebp
0849c537 +0x01:  mov    %esp,%ebp
0849c539 +0x03:  push   %ebx
0849c53a +0x04:  sub    $0x34,%esp
0849c53d +0x07:  mov    0x8(%ebp),%eax
0849c540 +0x0a:  mov    %eax,(%esp)
0849c543 +0x0d:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849c548 +0x12:  test   %al,%al
0849c54a +0x14:  je     0849c556 <+0x20>
0849c54c +0x16:  mov    $0x11,%eax
0849c551 +0x1b:  jmp    0849c60b <+0xd5>
0849c556 +0x20:  movl   $0x0,-0xc(%ebp)
0849c55d +0x27:  mov    0x8(%ebp),%eax
0849c560 +0x2a:  mov    %eax,(%esp)
0849c563 +0x2d:  call   0849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>  ; expert_job::ExpertJobMaterial::IsRecipe()
0849c568 +0x32:  mov    %eax,-0xc(%ebp)
0849c56b +0x35:  cmpl   $0x0,-0xc(%ebp)
0849c56f +0x39:  setne  %al
0849c572 +0x3c:  test   %al,%al
0849c574 +0x3e:  je     0849c57e <+0x48>
0849c576 +0x40:  mov    -0xc(%ebp),%eax
0849c579 +0x43:  jmp    0849c60b <+0xd5>
0849c57e +0x48:  mov    0x8(%ebp),%eax
0849c581 +0x4b:  mov    (%eax),%eax
0849c583 +0x4d:  mov    %eax,(%esp)
0849c586 +0x50:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849c58b +0x55:  test   %eax,%eax
0849c58d +0x57:  sete   %al
0849c590 +0x5a:  test   %al,%al
0849c592 +0x5c:  je     0849c59b <+0x65>
0849c594 +0x5e:  mov    $0x3,%eax
0849c599 +0x63:  jmp    0849c60b <+0xd5>
0849c59b +0x65:  mov    0x8(%ebp),%eax
0849c59e +0x68:  movzwl 0xc(%eax),%eax
0849c5a2 +0x6c:  movzwl %ax,%edx
0849c5a5 +0x6f:  mov    0x8(%ebp),%eax
0849c5a8 +0x72:  mov    0x4(%eax),%eax
0849c5ab +0x75:  lea    0x174(%eax),%ebx
0849c5b1 +0x7b:  mov    0x8(%ebp),%eax
0849c5b4 +0x7e:  mov    (%eax),%eax
0849c5b6 +0x80:  lea    -0xd(%ebp),%ecx
0849c5b9 +0x83:  mov    %ecx,0x14(%esp)
0849c5bd +0x87:  mov    0xc(%ebp),%ecx
0849c5c0 +0x8a:  mov    %ecx,0x10(%esp)
0849c5c4 +0x8e:  mov    %edx,0xc(%esp)
0849c5c8 +0x92:  mov    %ebx,0x8(%esp)
0849c5cc +0x96:  mov    %eax,0x4(%esp)
0849c5d0 +0x9a:  mov    0x8(%ebp),%eax
0849c5d3 +0x9d:  mov    %eax,(%esp)
0849c5d6 +0xa0:  call   0849c204 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb>  ; expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int, PacketGuard*, bool&)
0849c5db +0xa5:  xor    $0x1,%eax
0849c5de +0xa8:  test   %al,%al
0849c5e0 +0xaa:  je     0849c5e9 <+0xb3>
0849c5e2 +0xac:  mov    $0x11,%eax
0849c5e7 +0xb1:  jmp    0849c60b <+0xd5>
0849c5e9 +0xb3:  movzbl -0xd(%ebp),%eax
0849c5ed +0xb7:  test   %al,%al
0849c5ef +0xb9:  je     0849c606 <+0xd0>
0849c5f1 +0xbb:  mov    0x8(%ebp),%eax
0849c5f4 +0xbe:  mov    (%eax),%eax
0849c5f6 +0xc0:  movl   $0x16,0x4(%esp)
0849c5fe +0xc8:  mov    %eax,(%esp)
0849c601 +0xcb:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0849c606 +0xd0:  mov    $0x0,%eax
0849c60b +0xd5:  add    $0x34,%esp
0849c60e +0xd8:  pop    %ebx
0849c60f +0xd9:  pop    %ebp
0849c610 +0xda:  ret
0849c611 +0xdb:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::UseMaterialOfRecipe @ 0x849c536

/* expert_job::ExpertJobMaterial::UseMaterialOfRecipe(PacketGuard*) */

int __thiscall
expert_job::ExpertJobMaterial::UseMaterialOfRecipe(ExpertJobMaterial *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  bool local_11;
  int local_10;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    local_10 = 0;
    local_10 = IsRecipe(this);
    if (local_10 == 0) {
      iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
      if (iVar2 == 0) {
        local_10 = 3;
      }
      else {
        cVar1 = DelMaterialOfRecipe(this,*(CUser **)this,(vector *)(*(int *)(this + 4) + 0x174),
                                    (uint)*(ushort *)(this + 0xc),param_1,&local_11);
        if (cVar1 == '\x01') {
          if (local_11 != false) {
            CUser::send_equip(*(CUser **)this,0x16);
          }
          local_10 = 0;
        }
        else {
          local_10 = 0x11;
        }
      }
    }
  }
  else {
    local_10 = 0x11;
  }
  return local_10;
}
```
