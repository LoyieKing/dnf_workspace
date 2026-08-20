# get_reseal_cost

`_ZN14reseal_table_t15get_reseal_costEhhh`

`reseal_table_t::get_reseal_cost(unsigned char, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `reseal_table_t` | `0x08900b02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08900b02  _ZN14reseal_table_t15get_reseal_costEhhh
#           reseal_table_t::get_reseal_cost(unsigned char, unsigned char, unsigned char)
# range [0x08900b02, 0x08900bdf]
08900b02 +0x00:  push   %ebp
08900b03 +0x01:  mov    %esp,%ebp
08900b05 +0x03:  sub    $0x38,%esp
08900b08 +0x06:  mov    0xc(%ebp),%ecx
08900b0b +0x09:  mov    0x10(%ebp),%edx
08900b0e +0x0c:  mov    0x14(%ebp),%eax
08900b11 +0x0f:  mov    %cl,-0x1c(%ebp)
08900b14 +0x12:  mov    %dl,-0x20(%ebp)
08900b17 +0x15:  mov    %al,-0x24(%ebp)
08900b1a +0x18:  cmpb   $0x0,-0x20(%ebp)
08900b1e +0x1c:  jne    08900b2a <+0x28>
08900b20 +0x1e:  mov    $0xffffffff,%eax
08900b25 +0x23:  jmp    08900bdd <+0xdb>
08900b2a +0x28:  cmpb   $0x5,-0x1c(%ebp)
08900b2e +0x2c:  jbe    08900b3a <+0x38>
08900b30 +0x2e:  mov    $0xfffffffe,%eax
08900b35 +0x33:  jmp    08900bdd <+0xdb>
08900b3a +0x38:  cmpb   $0x63,-0x20(%ebp)
08900b3e +0x3c:  jbe    08900b4a <+0x48>
08900b40 +0x3e:  mov    $0xfffffffd,%eax
08900b45 +0x43:  jmp    08900bdd <+0xdb>
08900b4a +0x48:  cmpb   $0x6,-0x24(%ebp)
08900b4e +0x4c:  jbe    08900b5a <+0x58>
08900b50 +0x4e:  mov    $0xfffffffc,%eax
08900b55 +0x53:  jmp    08900bdd <+0xdb>
08900b5a +0x58:  movzbl -0x20(%ebp),%eax
08900b5e +0x5c:  lea    -0x1(%eax),%ecx
08900b61 +0x5f:  mov    $0x66666667,%edx
08900b66 +0x64:  mov    %ecx,%eax
08900b68 +0x66:  imul   %edx
08900b6a +0x68:  sar    $0x2,%edx
08900b6d +0x6b:  mov    %ecx,%eax
08900b6f +0x6d:  sar    $0x1f,%eax
08900b72 +0x70:  mov    %edx,%ecx
08900b74 +0x72:  sub    %eax,%ecx
08900b76 +0x74:  mov    %ecx,%eax
08900b78 +0x76:  mov    %eax,-0xc(%ebp)
08900b7b +0x79:  mov    0x8(%ebp),%eax
08900b7e +0x7c:  mov    %eax,(%esp)
08900b81 +0x7f:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
08900b86 +0x84:  cmp    -0xc(%ebp),%eax
08900b89 +0x87:  setbe  %al
08900b8c +0x8a:  test   %al,%al
08900b8e +0x8c:  je     08900ba1 <+0x9f>
08900b90 +0x8e:  mov    0x8(%ebp),%eax
08900b93 +0x91:  mov    %eax,(%esp)
08900b96 +0x94:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
08900b9b +0x99:  sub    $0x1,%eax
08900b9e +0x9c:  mov    %eax,-0xc(%ebp)
08900ba1 +0x9f:  mov    0x8(%ebp),%eax
08900ba4 +0xa2:  mov    -0xc(%ebp),%edx
08900ba7 +0xa5:  mov    %edx,0x4(%esp)
08900bab +0xa9:  mov    %eax,(%esp)
08900bae +0xac:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
08900bb3 +0xb1:  mov    (%eax),%ecx
08900bb5 +0xb3:  movzbl -0x1c(%ebp),%edx
08900bb9 +0xb7:  mov    0x8(%ebp),%eax
08900bbc +0xba:  mov    0xc(%eax,%edx,4),%eax
08900bc0 +0xbe:  mov    %ecx,%edx
08900bc2 +0xc0:  imul   %eax,%edx
08900bc5 +0xc3:  movzbl -0x1c(%ebp),%ecx
08900bc9 +0xc7:  mov    0x8(%ebp),%eax
08900bcc +0xca:  add    $0x8,%ecx
08900bcf +0xcd:  mov    0x4(%eax,%ecx,4),%ecx
08900bd3 +0xd1:  movzbl -0x24(%ebp),%eax
08900bd7 +0xd5:  imul   %ecx,%eax
08900bda +0xd8:  lea    (%edx,%eax,1),%eax
08900bdd +0xdb:  leave
08900bde +0xdc:  ret
08900bdf +0xdd:  nop
```

## 反编译 C

```c
// reseal_table_t::get_reseal_cost @ 0x8900b02

/* reseal_table_t::get_reseal_cost(unsigned char, unsigned char, unsigned char) */

int __thiscall
reseal_table_t::get_reseal_cost(reseal_table_t *this,uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint local_10;
  
  if (param_2 == '\0') {
    iVar1 = -1;
  }
  else if (param_1 < 6) {
    if (param_2 < 100) {
      if (param_3 < 7) {
        local_10 = (int)(param_2 - 1) / 10;
        uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
        if (uVar2 <= local_10) {
          iVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
          local_10 = iVar1 - 1;
        }
        piVar3 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)this,
                                   local_10);
        iVar1 = *piVar3 * *(int *)(this + (uint)param_1 * 4 + 0xc) +
                (uint)param_3 * *(int *)(this + (param_1 + 8) * 4 + 4);
      }
      else {
        iVar1 = -4;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}
```
