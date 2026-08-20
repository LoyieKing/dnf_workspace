# getRestrictValue

`_ZN24AuthMobileRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE`

`AuthMobileRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d9a0  _ZN24AuthMobileRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE
#           AuthMobileRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)
# range [0x0816d9a0, 0x0816da4f]
0816d9a0 +0x00:  push   %ebp
0816d9a1 +0x01:  mov    %esp,%ebp
0816d9a3 +0x03:  push   %ebx
0816d9a4 +0x04:  sub    $0x24,%esp
0816d9a7 +0x07:  mov    0x8(%ebp),%eax
0816d9aa +0x0a:  mov    %eax,(%esp)
0816d9ad +0x0d:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816d9b2 +0x12:  mov    %eax,%edx
0816d9b4 +0x14:  mov    0xc(%ebp),%eax
0816d9b7 +0x17:  mov    %edx,(%eax)
0816d9b9 +0x19:  mov    0xc(%ebp),%eax
0816d9bc +0x1c:  movl   $0x0,0x4(%eax)
0816d9c3 +0x23:  movl   $0x1,-0xc(%ebp)
0816d9ca +0x2a:  jmp    0816da31 <+0x91>
0816d9cc +0x2c:  mov    -0xc(%ebp),%eax
0816d9cf +0x2f:  mov    %eax,(%esp)
0816d9d2 +0x32:  call   0816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>  ; MobileRestrict::enumToString(MobileRestrict::Enum)
0816d9d7 +0x37:  mov    -0xc(%ebp),%edx
0816d9da +0x3a:  imul   $0x2d,%edx,%edx
0816d9dd +0x3d:  add    0xc(%ebp),%edx
0816d9e0 +0x40:  add    $0x8,%edx
0816d9e3 +0x43:  movl   $0x2d,0x8(%esp)
0816d9eb +0x4b:  mov    %eax,0x4(%esp)
0816d9ef +0x4f:  mov    %edx,(%esp)
0816d9f2 +0x52:  call   0807d8d0 <_init+0x1c8>
0816d9f7 +0x57:  mov    -0xc(%ebp),%ebx
0816d9fa +0x5a:  mov    0x8(%ebp),%eax
0816d9fd +0x5d:  lea    0xc(%eax),%edx
0816da00 +0x60:  mov    -0xc(%ebp),%eax
0816da03 +0x63:  mov    %eax,0x4(%esp)
0816da07 +0x67:  mov    %edx,(%esp)
0816da0a +0x6a:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816da0f +0x6f:  movzwl (%eax),%eax
0816da12 +0x72:  mov    %eax,%edx
0816da14 +0x74:  mov    0xc(%ebp),%eax
0816da17 +0x77:  mov    %dl,0x119c(%eax,%ebx,1)
0816da1e +0x7e:  mov    0xc(%ebp),%eax
0816da21 +0x81:  mov    0x4(%eax),%eax
0816da24 +0x84:  lea    0x1(%eax),%edx
0816da27 +0x87:  mov    0xc(%ebp),%eax
0816da2a +0x8a:  mov    %edx,0x4(%eax)
0816da2d +0x8d:  addl   $0x1,-0xc(%ebp)
0816da31 +0x91:  mov    0x8(%ebp),%eax
0816da34 +0x94:  add    $0xc,%eax
0816da37 +0x97:  mov    %eax,(%esp)
0816da3a +0x9a:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
0816da3f +0x9f:  cmp    -0xc(%ebp),%eax
0816da42 +0xa2:  seta   %al
0816da45 +0xa5:  test   %al,%al
0816da47 +0xa7:  jne    0816d9cc <+0x2c>
0816da49 +0xa9:  add    $0x24,%esp
0816da4c +0xac:  pop    %ebx
0816da4d +0xad:  pop    %ebp
0816da4e +0xae:  ret
0816da4f +0xaf:  nop
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::getRestrictValue @ 0x816d9a0

/* AuthMobileRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
AuthMobileRestrictPolicy::getRestrictValue
          (AuthMobileRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

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
    __src = (char *)MobileRestrict::enumToString(local_10);
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
