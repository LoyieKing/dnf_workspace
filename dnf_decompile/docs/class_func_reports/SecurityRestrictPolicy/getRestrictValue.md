# getRestrictValue

`_ZN22SecurityRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE`

`SecurityRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816dd22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816dd22  _ZN22SecurityRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE
#           SecurityRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)
# range [0x0816dd22, 0x0816ddd1]
0816dd22 +0x00:  push   %ebp
0816dd23 +0x01:  mov    %esp,%ebp
0816dd25 +0x03:  push   %ebx
0816dd26 +0x04:  sub    $0x24,%esp
0816dd29 +0x07:  mov    0x8(%ebp),%eax
0816dd2c +0x0a:  mov    %eax,(%esp)
0816dd2f +0x0d:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816dd34 +0x12:  mov    %eax,%edx
0816dd36 +0x14:  mov    0xc(%ebp),%eax
0816dd39 +0x17:  mov    %edx,(%eax)
0816dd3b +0x19:  mov    0xc(%ebp),%eax
0816dd3e +0x1c:  movl   $0x0,0x4(%eax)
0816dd45 +0x23:  movl   $0x1,-0xc(%ebp)
0816dd4c +0x2a:  jmp    0816ddb3 <+0x91>
0816dd4e +0x2c:  mov    -0xc(%ebp),%eax
0816dd51 +0x2f:  mov    %eax,(%esp)
0816dd54 +0x32:  call   0816d481 <_ZN16SecurityRestrict12enumToStringENS_4EnumE>  ; SecurityRestrict::enumToString(SecurityRestrict::Enum)
0816dd59 +0x37:  mov    -0xc(%ebp),%edx
0816dd5c +0x3a:  imul   $0x2d,%edx,%edx
0816dd5f +0x3d:  add    0xc(%ebp),%edx
0816dd62 +0x40:  add    $0x8,%edx
0816dd65 +0x43:  movl   $0x2d,0x8(%esp)
0816dd6d +0x4b:  mov    %eax,0x4(%esp)
0816dd71 +0x4f:  mov    %edx,(%esp)
0816dd74 +0x52:  call   0807d8d0 <_init+0x1c8>
0816dd79 +0x57:  mov    -0xc(%ebp),%ebx
0816dd7c +0x5a:  mov    0x8(%ebp),%eax
0816dd7f +0x5d:  lea    0xc(%eax),%edx
0816dd82 +0x60:  mov    -0xc(%ebp),%eax
0816dd85 +0x63:  mov    %eax,0x4(%esp)
0816dd89 +0x67:  mov    %edx,(%esp)
0816dd8c +0x6a:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816dd91 +0x6f:  movzwl (%eax),%eax
0816dd94 +0x72:  mov    %eax,%edx
0816dd96 +0x74:  mov    0xc(%ebp),%eax
0816dd99 +0x77:  mov    %dl,0x119c(%eax,%ebx,1)
0816dda0 +0x7e:  mov    0xc(%ebp),%eax
0816dda3 +0x81:  mov    0x4(%eax),%eax
0816dda6 +0x84:  lea    0x1(%eax),%edx
0816dda9 +0x87:  mov    0xc(%ebp),%eax
0816ddac +0x8a:  mov    %edx,0x4(%eax)
0816ddaf +0x8d:  addl   $0x1,-0xc(%ebp)
0816ddb3 +0x91:  mov    0x8(%ebp),%eax
0816ddb6 +0x94:  add    $0xc,%eax
0816ddb9 +0x97:  mov    %eax,(%esp)
0816ddbc +0x9a:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
0816ddc1 +0x9f:  cmp    -0xc(%ebp),%eax
0816ddc4 +0xa2:  seta   %al
0816ddc7 +0xa5:  test   %al,%al
0816ddc9 +0xa7:  jne    0816dd4e <+0x2c>
0816ddcb +0xa9:  add    $0x24,%esp
0816ddce +0xac:  pop    %ebx
0816ddcf +0xad:  pop    %ebp
0816ddd0 +0xae:  ret
0816ddd1 +0xaf:  nop
```

## 反编译 C

```c
// SecurityRestrictPolicy::getRestrictValue @ 0x816dd22

/* SecurityRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
SecurityRestrictPolicy::getRestrictValue
          (SecurityRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

{
  undefined4 uVar1;
  char *__src;
  undefined2 *puVar2;
  uint uVar3;
  uint local_10;
  
  uVar1 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  local_10 = 1;
  while( true ) {
    uVar3 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar3 <= local_10) break;
    __src = (char *)SecurityRestrict::enumToString(local_10);
    strncpy((char *)(param_1 + local_10 * 0x2d + 8),__src,0x2d);
    puVar2 = (undefined2 *)
             std::vector<short,std::allocator<short>>::operator[]
                       ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    param_1[local_10 + 0x119c] = SUB21(*puVar2,0);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    local_10 = local_10 + 1;
  }
  return;
}
```
