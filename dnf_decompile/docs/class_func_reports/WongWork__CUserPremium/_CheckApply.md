# _CheckApply

`_ZN8WongWork12CUserPremium11_CheckApplyEi2tm`

`WongWork::CUserPremium::_CheckApply(int, tm)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ae834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ae834  _ZN8WongWork12CUserPremium11_CheckApplyEi2tm
#           WongWork::CUserPremium::_CheckApply(int, tm)
# range [0x086ae834, 0x086ae8c5]
086ae834 +0x00:  push   %ebp
086ae835 +0x01:  mov    %esp,%ebp
086ae837 +0x03:  sub    $0x10,%esp
086ae83a +0x06:  movb   $0x0,-0x5(%ebp)
086ae83e +0x0a:  mov    0xc(%ebp),%edx
086ae841 +0x0d:  mov    %edx,%eax
086ae843 +0x0f:  shl    $0x3,%eax
086ae846 +0x12:  add    %edx,%eax
086ae848 +0x14:  shl    $0x5,%eax
086ae84b +0x17:  mov    &g_SPremiumInfo+0xac(%eax),%eax
086ae851 +0x1d:  cmp    $0xffffffff,%eax
086ae854 +0x20:  jne    086ae85d <+0x29>
086ae856 +0x22:  mov    $0x1,%eax
086ae85b +0x27:  jmp    086ae8c4 <+0x90>
086ae85d +0x29:  movl   $0x0,-0x4(%ebp)
086ae864 +0x30:  jmp    086ae8b2 <+0x7e>
086ae866 +0x32:  mov    0xc(%ebp),%edx
086ae869 +0x35:  mov    -0x4(%ebp),%ecx
086ae86c +0x38:  mov    %edx,%eax
086ae86e +0x3a:  shl    $0x3,%eax
086ae871 +0x3d:  add    %edx,%eax
086ae873 +0x3f:  shl    $0x3,%eax
086ae876 +0x42:  add    %ecx,%eax
086ae878 +0x44:  add    $0x28,%eax
086ae87b +0x47:  mov    &g_SPremiumInfo+0xc(,%eax,4),%eax
086ae882 +0x4e:  cmp    $0xffffffff,%eax
086ae885 +0x51:  je     086ae8bf <+0x8b>
086ae887 +0x53:  mov    0xc(%ebp),%edx
086ae88a +0x56:  mov    -0x4(%ebp),%ecx
086ae88d +0x59:  mov    %edx,%eax
086ae88f +0x5b:  shl    $0x3,%eax
086ae892 +0x5e:  add    %edx,%eax
086ae894 +0x60:  shl    $0x3,%eax
086ae897 +0x63:  add    %ecx,%eax
086ae899 +0x65:  add    $0x28,%eax
086ae89c +0x68:  mov    &g_SPremiumInfo+0xc(,%eax,4),%edx
086ae8a3 +0x6f:  mov    0x28(%ebp),%eax
086ae8a6 +0x72:  cmp    %eax,%edx
086ae8a8 +0x74:  jne    086ae8ae <+0x7a>
086ae8aa +0x76:  movb   $0x1,-0x5(%ebp)
086ae8ae +0x7a:  addl   $0x1,-0x4(%ebp)
086ae8b2 +0x7e:  cmpl   $0x6,-0x4(%ebp)
086ae8b6 +0x82:  setle  %al
086ae8b9 +0x85:  test   %al,%al
086ae8bb +0x87:  jne    086ae866 <+0x32>
086ae8bd +0x89:  jmp    086ae8c0 <+0x8c>
086ae8bf +0x8b:  nop
086ae8c0 +0x8c:  movzbl -0x5(%ebp),%eax
086ae8c4 +0x90:  leave
086ae8c5 +0x91:  ret
```

## 反编译 C

```c
// WongWork::CUserPremium::_CheckApply @ 0x86ae834

/* WongWork::CUserPremium::_CheckApply(int, tm) */

undefined1 WongWork::CUserPremium::_CheckApply(int param_1,tm param_2)

{
  undefined1 local_9;
  int local_8;
  
  local_9 = 0;
  if (*(int *)(g_SPremiumInfo + param_2.tm_sec * 0x120 + 0xac) == -1) {
    local_9 = 1;
  }
  else {
    local_8 = 0;
    while ((local_8 < 7 &&
           (*(int *)(g_SPremiumInfo + (param_2.tm_sec * 0x48 + local_8 + 0x28) * 4 + 0xc) != -1))) {
      if (*(int *)(g_SPremiumInfo + (param_2.tm_sec * 0x48 + local_8 + 0x28) * 4 + 0xc) ==
          param_2.tm_yday) {
        local_9 = 1;
      }
      local_8 = local_8 + 1;
    }
  }
  return local_9;
}
```
