# RegenVer_get_option_quantity

`_ZN15RegenerationROI28RegenVer_get_option_quantityEii`

`RegenerationROI::RegenVer_get_option_quantity(int, int)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8cb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8cb4  _ZN15RegenerationROI28RegenVer_get_option_quantityEii
#           RegenerationROI::RegenVer_get_option_quantity(int, int)
# range [0x085f8cb4, 0x085f8da5]
085f8cb4 +0x00:  push   %ebp
085f8cb5 +0x01:  mov    %esp,%ebp
085f8cb7 +0x03:  sub    $0x38,%esp
085f8cba +0x06:  cmpl   $0x0,0xc(%ebp)
085f8cbe +0x0a:  js     085f8cc6 <+0x12>
085f8cc0 +0x0c:  cmpl   $0x3,0xc(%ebp)
085f8cc4 +0x10:  jle    085f8cd0 <+0x1c>
085f8cc6 +0x12:  mov    $0x0,%eax
085f8ccb +0x17:  jmp    085f8da4 <+0xf0>
085f8cd0 +0x1c:  cmpl   $0x0,0x10(%ebp)
085f8cd4 +0x20:  js     085f8cdc <+0x28>
085f8cd6 +0x22:  cmpl   $0x3,0x10(%ebp)
085f8cda +0x26:  jle    085f8ce6 <+0x32>
085f8cdc +0x28:  mov    $0x0,%eax
085f8ce1 +0x2d:  jmp    085f8da4 <+0xf0>
085f8ce6 +0x32:  movl   $0x0,-0x18(%ebp)
085f8ced +0x39:  mov    0xc(%ebp),%eax
085f8cf0 +0x3c:  sub    $0x1,%eax
085f8cf3 +0x3f:  mov    %eax,-0x10(%ebp)
085f8cf6 +0x42:  jmp    085f8d16 <+0x62>
085f8cf8 +0x44:  mov    -0x10(%ebp),%eax
085f8cfb +0x47:  mov    0x8(%ebp),%edx
085f8cfe +0x4a:  add    $0x34,%edx
085f8d01 +0x4d:  mov    %eax,0x4(%esp)
085f8d05 +0x51:  mov    %edx,(%esp)
085f8d08 +0x54:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f8d0d +0x59:  mov    (%eax),%eax
085f8d0f +0x5b:  add    %eax,-0x18(%ebp)
085f8d12 +0x5e:  addl   $0x1,-0x10(%ebp)
085f8d16 +0x62:  mov    -0x10(%ebp),%eax
085f8d19 +0x65:  cmp    0x10(%ebp),%eax
085f8d1c +0x68:  setl   %al
085f8d1f +0x6b:  test   %al,%al
085f8d21 +0x6d:  jne    085f8cf8 <+0x44>
085f8d23 +0x6f:  mov    -0x18(%ebp),%eax
085f8d26 +0x72:  mov    %eax,-0x1c(%ebp)
085f8d29 +0x75:  mov    0x8(%ebp),%eax
085f8d2c +0x78:  mov    (%eax),%eax
085f8d2e +0x7a:  lea    -0x1c(%ebp),%edx
085f8d31 +0x7d:  mov    %edx,0x4(%esp)
085f8d35 +0x81:  mov    %eax,(%esp)
085f8d38 +0x84:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f8d3d +0x89:  mov    %eax,-0x18(%ebp)
085f8d40 +0x8c:  movl   $0x0,-0x14(%ebp)
085f8d47 +0x93:  mov    0xc(%ebp),%eax
085f8d4a +0x96:  sub    $0x1,%eax
085f8d4d +0x99:  mov    %eax,-0xc(%ebp)
085f8d50 +0x9c:  jmp    085f8d80 <+0xcc>
085f8d52 +0x9e:  mov    -0xc(%ebp),%eax
085f8d55 +0xa1:  mov    0x8(%ebp),%edx
085f8d58 +0xa4:  add    $0x34,%edx
085f8d5b +0xa7:  mov    %eax,0x4(%esp)
085f8d5f +0xab:  mov    %edx,(%esp)
085f8d62 +0xae:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f8d67 +0xb3:  mov    (%eax),%eax
085f8d69 +0xb5:  add    %eax,-0x14(%ebp)
085f8d6c +0xb8:  mov    -0x18(%ebp),%eax
085f8d6f +0xbb:  cmp    -0x14(%ebp),%eax
085f8d72 +0xbe:  jg     085f8d7c <+0xc8>
085f8d74 +0xc0:  mov    -0xc(%ebp),%eax
085f8d77 +0xc3:  add    $0x1,%eax
085f8d7a +0xc6:  jmp    085f8da4 <+0xf0>
085f8d7c +0xc8:  addl   $0x1,-0xc(%ebp)
085f8d80 +0xcc:  mov    -0xc(%ebp),%eax
085f8d83 +0xcf:  cmp    0x10(%ebp),%eax
085f8d86 +0xd2:  setl   %al
085f8d89 +0xd5:  test   %al,%al
085f8d8b +0xd7:  jne    085f8d52 <+0x9e>
085f8d8d +0xd9:  mov    0xc(%ebp),%eax
085f8d90 +0xdc:  mov    0x8(%ebp),%edx
085f8d93 +0xdf:  add    $0x34,%edx
085f8d96 +0xe2:  mov    %eax,0x4(%esp)
085f8d9a +0xe6:  mov    %edx,(%esp)
085f8d9d +0xe9:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f8da2 +0xee:  mov    (%eax),%eax
085f8da4 +0xf0:  leave
085f8da5 +0xf1:  ret
```

## 反编译 C

```c
// RegenerationROI::RegenVer_get_option_quantity @ 0x85f8cb4

/* RegenerationROI::RegenVer_get_option_quantity(int, int) */

int __thiscall
RegenerationROI::RegenVer_get_option_quantity(RegenerationROI *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong local_20;
  ulong local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  if ((param_1 < 0) || (3 < param_1)) {
    iVar1 = 0;
  }
  else if ((param_2 < 0) || (3 < param_2)) {
    iVar1 = 0;
  }
  else {
    local_1c = 0;
    for (local_14 = param_1 - 1; (int)local_14 < param_2; local_14 = local_14 + 1) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x34),local_14);
      local_1c = local_1c + *piVar2;
    }
    local_20 = local_1c;
    local_1c = CMTRand::randInt(*(CMTRand **)this,&local_20);
    local_18 = 0;
    for (local_10 = param_1 - 1; (int)local_10 < param_2; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x34),local_10);
      local_18 = local_18 + *piVar2;
      if ((int)local_1c <= local_18) {
        return local_10 + 1;
      }
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(this + 0x34),param_1);
    iVar1 = *piVar2;
  }
  return iVar1;
}
```
