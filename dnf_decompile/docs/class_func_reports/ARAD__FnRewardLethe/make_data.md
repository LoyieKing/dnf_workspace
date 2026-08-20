# make_data

`_ZN4ARAD13FnRewardLethe9make_dataEi`

`ARAD::FnRewardLethe::make_data(int)`

| 类 | 地址 |
|---|---|
| `ARAD::FnRewardLethe` | `0x08195340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195340  _ZN4ARAD13FnRewardLethe9make_dataEi
#           ARAD::FnRewardLethe::make_data(int)
# range [0x08195340, 0x08195379]
08195340 +0x00:  push   %ebp
08195341 +0x01:  mov    %esp,%ebp
08195343 +0x03:  push   %ebx
08195344 +0x04:  sub    $0x14,%esp
08195347 +0x07:  mov    0x8(%ebp),%ebx
0819534a +0x0a:  mov    0xc(%ebp),%eax
0819534d +0x0d:  mov    (%eax),%eax
0819534f +0x0f:  mov    %eax,(%esp)
08195352 +0x12:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08195357 +0x17:  movl   $0x0,0xc(%esp)
0819535f +0x1f:  mov    %eax,0x8(%esp)
08195363 +0x23:  mov    0x10(%ebp),%eax
08195366 +0x26:  mov    %eax,0x4(%esp)
0819536a +0x2a:  mov    %ebx,(%esp)
0819536d +0x2d:  call   08195d94 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x154>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x154
08195372 +0x32:  mov    %ebx,%eax
08195374 +0x34:  add    $0x14,%esp
08195377 +0x37:  pop    %ebx
08195378 +0x38:  pop    %ebp
08195379 +0x39:  ret    $0x4
```

## 反编译 C

```c
// ARAD::FnRewardLethe::make_data @ 0x8195340

/* ARAD::FnRewardLethe::make_data(int) */

int ARAD::FnRewardLethe::make_data(int param_1)

{
  uint uVar1;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = CUser::get_acc_id((CUser *)*in_stack_00000008);
  EventRewardItemArad::EventRewardItemArad((EventRewardItemArad *)param_1,in_stack_0000000c,uVar1,0)
  ;
  return param_1;
}
```
