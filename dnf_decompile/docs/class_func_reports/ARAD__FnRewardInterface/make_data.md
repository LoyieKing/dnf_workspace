# make_data

`_ZN4ARAD17FnRewardInterface9make_dataEi`

`ARAD::FnRewardInterface::make_data(int)`

| 类 | 地址 |
|---|---|
| `ARAD::FnRewardInterface` | `0x08194e58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08194e58  _ZN4ARAD17FnRewardInterface9make_dataEi
#           ARAD::FnRewardInterface::make_data(int)
# range [0x08194e58, 0x08194ee1]
08194e58 +0x00:  push   %ebp
08194e59 +0x01:  mov    %esp,%ebp
08194e5b +0x03:  push   %esi
08194e5c +0x04:  push   %ebx
08194e5d +0x05:  sub    $0x10,%esp
08194e60 +0x08:  mov    0x8(%ebp),%ebx
08194e63 +0x0b:  mov    0xc(%ebp),%eax
08194e66 +0x0e:  movzbl 0x8(%eax),%eax
08194e6a +0x12:  test   %al,%al
08194e6c +0x14:  je     08194ead <+0x55>
08194e6e +0x16:  mov    0xc(%ebp),%eax
08194e71 +0x19:  mov    0x4(%eax),%eax
08194e74 +0x1c:  movl   $0xffffffff,0x4(%esp)
08194e7c +0x24:  mov    %eax,(%esp)
08194e7f +0x27:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08194e84 +0x2c:  mov    %eax,%esi
08194e86 +0x2e:  mov    0xc(%ebp),%eax
08194e89 +0x31:  mov    0x4(%eax),%eax
08194e8c +0x34:  mov    %eax,(%esp)
08194e8f +0x37:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08194e94 +0x3c:  mov    %esi,0xc(%esp)
08194e98 +0x40:  mov    %eax,0x8(%esp)
08194e9c +0x44:  mov    0x10(%ebp),%eax
08194e9f +0x47:  mov    %eax,0x4(%esp)
08194ea3 +0x4b:  mov    %ebx,(%esp)
08194ea6 +0x4e:  call   08195d94 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x154>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x154
08194eab +0x53:  jmp    08194ed6 <+0x7e>
08194ead +0x55:  mov    0xc(%ebp),%eax
08194eb0 +0x58:  mov    0x4(%eax),%eax
08194eb3 +0x5b:  mov    %eax,(%esp)
08194eb6 +0x5e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08194ebb +0x63:  movl   $0x0,0xc(%esp)
08194ec3 +0x6b:  mov    %eax,0x8(%esp)
08194ec7 +0x6f:  mov    0x10(%ebp),%eax
08194eca +0x72:  mov    %eax,0x4(%esp)
08194ece +0x76:  mov    %ebx,(%esp)
08194ed1 +0x79:  call   08195d94 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x154>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x154
08194ed6 +0x7e:  mov    %ebx,%eax
08194ed8 +0x80:  add    $0x10,%esp
08194edb +0x83:  pop    %ebx
08194edc +0x84:  pop    %esi
08194edd +0x85:  pop    %ebp
08194ede +0x86:  ret    $0x4
08194ee1 +0x89:  nop
```

## 反编译 C

```c
// ARAD::FnRewardInterface::make_data @ 0x8194e58

/* ARAD::FnRewardInterface::make_data(int) */

int ARAD::FnRewardInterface::make_data(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(char *)(in_stack_00000008 + 8) == '\0') {
    uVar1 = CUser::get_acc_id(*(CUser **)(in_stack_00000008 + 4));
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)param_1,in_stack_0000000c,uVar1,0);
  }
  else {
    uVar1 = CUser::get_charac_no(*(CUser **)(in_stack_00000008 + 4),-1);
    uVar2 = CUser::get_acc_id(*(CUser **)(in_stack_00000008 + 4));
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)param_1,in_stack_0000000c,uVar2,uVar1);
  }
  return param_1;
}
```
