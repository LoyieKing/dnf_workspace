# GetPoint

`_ZN18CharacManageScript8GetPointEi`

`CharacManageScript::GetPoint(int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0e0a  _ZN18CharacManageScript8GetPointEi
#           CharacManageScript::GetPoint(int)
# range [0x088e0e0a, 0x088e0ed3]
088e0e0a +0x00:  push   %ebp
088e0e0b +0x01:  mov    %esp,%ebp
088e0e0d +0x03:  sub    $0x38,%esp
088e0e10 +0x06:  movl   $0x0,-0x14(%ebp)
088e0e17 +0x0d:  mov    0x8(%ebp),%edx
088e0e1a +0x10:  lea    -0x20(%ebp),%eax
088e0e1d +0x13:  mov    %edx,0x4(%esp)
088e0e21 +0x17:  mov    %eax,(%esp)
088e0e24 +0x1a:  call   088e1668 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x38f>  ; global constructors keyed to CharacManageScript::instance_+0x38f
088e0e29 +0x1f:  sub    $0x4,%esp
088e0e2c +0x22:  jmp    088e0ea0 <+0x96>
088e0e2e +0x24:  lea    -0x20(%ebp),%eax
088e0e31 +0x27:  mov    %eax,(%esp)
088e0e34 +0x2a:  call   088e1712 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x439>  ; global constructors keyed to CharacManageScript::instance_+0x439
088e0e39 +0x2f:  mov    %eax,-0x10(%ebp)
088e0e3c +0x32:  lea    -0x20(%ebp),%eax
088e0e3f +0x35:  mov    %eax,(%esp)
088e0e42 +0x38:  call   088e171c <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x443>  ; global constructors keyed to CharacManageScript::instance_+0x443
088e0e47 +0x3d:  mov    (%eax),%eax
088e0e49 +0x3f:  mov    %eax,-0xc(%ebp)
088e0e4c +0x42:  jmp    088e0e6b <+0x61>
088e0e4e +0x44:  mov    0xc(%ebp),%eax
088e0e51 +0x47:  cmp    -0xc(%ebp),%eax
088e0e54 +0x4a:  jl     088e0e67 <+0x5d>
088e0e56 +0x4c:  lea    -0x20(%ebp),%eax
088e0e59 +0x4f:  mov    %eax,(%esp)
088e0e5c +0x52:  call   088e171c <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x443>  ; global constructors keyed to CharacManageScript::instance_+0x443
088e0e61 +0x57:  mov    0x8(%eax),%eax
088e0e64 +0x5a:  add    %eax,-0x14(%ebp)
088e0e67 +0x5d:  addl   $0x1,-0xc(%ebp)
088e0e6b +0x61:  lea    -0x20(%ebp),%eax
088e0e6e +0x64:  mov    %eax,(%esp)
088e0e71 +0x67:  call   088e171c <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x443>  ; global constructors keyed to CharacManageScript::instance_+0x443
088e0e76 +0x6c:  mov    0x4(%eax),%eax
088e0e79 +0x6f:  cmp    -0xc(%ebp),%eax
088e0e7c +0x72:  setge  %al
088e0e7f +0x75:  test   %al,%al
088e0e81 +0x77:  jne    088e0e4e <+0x44>
088e0e83 +0x79:  lea    -0x18(%ebp),%eax
088e0e86 +0x7c:  movl   $0x0,0x8(%esp)
088e0e8e +0x84:  lea    -0x20(%ebp),%edx
088e0e91 +0x87:  mov    %edx,0x4(%esp)
088e0e95 +0x8b:  mov    %eax,(%esp)
088e0e98 +0x8e:  call   088e16de <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x405>  ; global constructors keyed to CharacManageScript::instance_+0x405
088e0e9d +0x93:  sub    $0x4,%esp
088e0ea0 +0x96:  mov    0x8(%ebp),%edx
088e0ea3 +0x99:  lea    -0x1c(%ebp),%eax
088e0ea6 +0x9c:  mov    %edx,0x4(%esp)
088e0eaa +0xa0:  mov    %eax,(%esp)
088e0ead +0xa3:  call   088e168c <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x3b3>  ; global constructors keyed to CharacManageScript::instance_+0x3b3
088e0eb2 +0xa8:  sub    $0x4,%esp
088e0eb5 +0xab:  lea    -0x1c(%ebp),%eax
088e0eb8 +0xae:  mov    %eax,0x4(%esp)
088e0ebc +0xb2:  lea    -0x20(%ebp),%eax
088e0ebf +0xb5:  mov    %eax,(%esp)
088e0ec2 +0xb8:  call   088e16b2 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x3d9>  ; global constructors keyed to CharacManageScript::instance_+0x3d9
088e0ec7 +0xbd:  test   %al,%al
088e0ec9 +0xbf:  jne    088e0e2e <+0x24>
088e0ecf +0xc5:  mov    -0x14(%ebp),%eax
088e0ed2 +0xc8:  leave
088e0ed3 +0xc9:  ret
```

## 反编译 C

```c
// CharacManageScript::GetPoint @ 0x88e0e0a

/* CharacManageScript::GetPoint(int) */

int __thiscall CharacManageScript::GetPoint(CharacManageScript *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = 0;
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::begin();
  while( true ) {
    std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::end();
    bVar1 = __gnu_cxx::operator!=(local_24,local_20);
    if (!bVar1) break;
    local_14 = __gnu_cxx::
               __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
               ::operator*(local_24);
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
                    ::operator->(local_24);
    local_10 = *piVar2;
    while( true ) {
      iVar3 = __gnu_cxx::
              __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
              ::operator->(local_24);
      if (*(int *)(iVar3 + 4) < local_10) break;
      if (local_10 <= param_1) {
        iVar3 = __gnu_cxx::
                __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
                ::operator->(local_24);
        local_18 = local_18 + *(int *)(iVar3 + 8);
      }
      local_10 = local_10 + 1;
    }
    __gnu_cxx::
    __normal_iterator<ManagePointBonus*,std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>>
    ::operator++(local_1c,(int)local_24);
  }
  return local_18;
}
```
