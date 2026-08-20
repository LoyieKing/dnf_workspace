# GetPremiumInfoList

`_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi`

`WongWork::CUserPremium::GetPremiumInfoList(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ade9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ade9c  _ZNK8WongWork12CUserPremium18GetPremiumInfoListEi
#           WongWork::CUserPremium::GetPremiumInfoList(int) const
# range [0x086ade9c, 0x086adf4f]
086ade9c +0x00:  push   %ebp
086ade9d +0x01:  mov    %esp,%ebp
086ade9f +0x03:  push   %edi
086adea0 +0x04:  push   %esi
086adea1 +0x05:  push   %ebx
086adea2 +0x06:  sub    $0x2c,%esp
086adea5 +0x09:  mov    0x8(%ebp),%ebx
086adea8 +0x0c:  mov    %ebx,%eax
086adeaa +0x0e:  mov    %eax,(%esp)
086adead +0x11:  call   083284f6 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x44f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x44f
086adeb2 +0x16:  movl   $0x1,-0x1c(%ebp)
086adeb9 +0x1d:  jmp    086adf1d <+0x81>
086adebb +0x1f:  mov    -0x1c(%ebp),%edx
086adebe +0x22:  mov    0xc(%ebp),%ecx
086adec1 +0x25:  mov    %edx,%eax
086adec3 +0x27:  shl    $0x2,%eax
086adec6 +0x2a:  add    %edx,%eax
086adec8 +0x2c:  shl    $0x2,%eax
086adecb +0x2f:  mov    (%eax,%ecx,1),%eax
086adece +0x32:  test   %eax,%eax
086aded0 +0x34:  je     086adf15 <+0x79>
086aded2 +0x36:  cmpl   $0x270f,0x10(%ebp)
086aded9 +0x3d:  je     086adef3 <+0x57>
086adedb +0x3f:  mov    -0x1c(%ebp),%edx
086adede +0x42:  mov    0xc(%ebp),%ecx
086adee1 +0x45:  mov    %edx,%eax
086adee3 +0x47:  shl    $0x2,%eax
086adee6 +0x4a:  add    %edx,%eax
086adee8 +0x4c:  shl    $0x2,%eax
086adeeb +0x4f:  mov    (%eax,%ecx,1),%eax
086adeee +0x52:  cmp    0x10(%ebp),%eax
086adef1 +0x55:  jne    086adf18 <+0x7c>
086adef3 +0x57:  mov    -0x1c(%ebp),%edx
086adef6 +0x5a:  mov    %edx,%eax
086adef8 +0x5c:  shl    $0x2,%eax
086adefb +0x5f:  add    %edx,%eax
086adefd +0x61:  shl    $0x2,%eax
086adf00 +0x64:  mov    %eax,%edx
086adf02 +0x66:  add    0xc(%ebp),%edx
086adf05 +0x69:  mov    %ebx,%eax
086adf07 +0x6b:  mov    %edx,0x4(%esp)
086adf0b +0x6f:  mov    %eax,(%esp)
086adf0e +0x72:  call   08328568 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x4c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x4c1
086adf13 +0x77:  jmp    086adf19 <+0x7d>
086adf15 +0x79:  nop
086adf16 +0x7a:  jmp    086adf19 <+0x7d>
086adf18 +0x7c:  nop
086adf19 +0x7d:  addl   $0x1,-0x1c(%ebp)
086adf1d +0x81:  cmpl   $0x69,-0x1c(%ebp)
086adf21 +0x85:  setle  %al
086adf24 +0x88:  test   %al,%al
086adf26 +0x8a:  jne    086adebb <+0x1f>
086adf28 +0x8c:  jmp    086adf44 <+0xa8>
086adf2a +0x8e:  mov    %edx,%esi
086adf2c +0x90:  mov    %eax,%edi
086adf2e +0x92:  mov    %ebx,%eax
086adf30 +0x94:  mov    %eax,(%esp)
086adf33 +0x97:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
086adf38 +0x9c:  mov    %edi,%eax
086adf3a +0x9e:  mov    %esi,%edx
086adf3c +0xa0:  mov    %eax,(%esp)
086adf3f +0xa3:  call   08ae3750 <_Unwind_Resume>
086adf44 +0xa8:  mov    %ebx,%eax
086adf46 +0xaa:  mov    %ebx,%eax
086adf48 +0xac:  add    $0x2c,%esp
086adf4b +0xaf:  pop    %ebx
086adf4c +0xb0:  pop    %esi
086adf4d +0xb1:  pop    %edi
086adf4e +0xb2:  pop    %ebp
086adf4f +0xb3:  ret    $0x4
```

## 反编译 C

```c
// WongWork::CUserPremium::GetPremiumInfoList @ 0x86ade9c

/* WongWork::CUserPremium::GetPremiumInfoList(int) const */

int WongWork::CUserPremium::GetPremiumInfoList(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_20;
  
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            ((vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> *)
             param_1);
  for (local_20 = 1; local_20 < 0x6a; local_20 = local_20 + 1) {
    if ((*(int *)(local_20 * 0x14 + in_stack_00000008) != 0) &&
       ((in_stack_0000000c == 9999 ||
        (*(int *)(local_20 * 0x14 + in_stack_00000008) == in_stack_0000000c)))) {
                    /* try { // try from 086adf0e to 086adf12 has its CatchHandler @ 086adf2a */
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
                ((vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> *)
                 param_1,(SUserPremiumInfo *)(local_20 * 0x14 + in_stack_00000008));
    }
  }
  return param_1;
}
```
