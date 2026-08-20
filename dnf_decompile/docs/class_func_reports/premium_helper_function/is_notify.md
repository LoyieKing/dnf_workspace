# is_notify

`_ZN23premium_helper_function9is_notifyEP5CUseri`

`premium_helper_function::is_notify(CUser*, int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827d29d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d29d  _ZN23premium_helper_function9is_notifyEP5CUseri
#           premium_helper_function::is_notify(CUser*, int)
# range [0x0827d29d, 0x0827d2de]
0827d29d +0x00:  push   %ebp
0827d29e +0x01:  mov    %esp,%ebp
0827d2a0 +0x03:  sub    $0x28,%esp
0827d2a3 +0x06:  mov    0x8(%ebp),%eax
0827d2a6 +0x09:  mov    %eax,(%esp)
0827d2a9 +0x0c:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0827d2ae +0x11:  mov    0xc(%ebp),%edx
0827d2b1 +0x14:  mov    %edx,0x4(%esp)
0827d2b5 +0x18:  mov    %eax,(%esp)
0827d2b8 +0x1b:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
0827d2bd +0x20:  mov    %eax,-0xc(%ebp)
0827d2c0 +0x23:  mov    -0xc(%ebp),%eax
0827d2c3 +0x26:  mov    (%eax),%eax
0827d2c5 +0x28:  cmp    0xc(%ebp),%eax
0827d2c8 +0x2b:  jne    0827d2d8 <+0x3b>
0827d2ca +0x2d:  mov    -0xc(%ebp),%eax
0827d2cd +0x30:  mov    0x10(%eax),%eax
0827d2d0 +0x33:  cmp    $0x2,%eax
0827d2d3 +0x36:  sete   %al
0827d2d6 +0x39:  jmp    0827d2dd <+0x40>
0827d2d8 +0x3b:  mov    $0x0,%eax
0827d2dd +0x40:  leave
0827d2de +0x41:  ret
```

## 反编译 C

```c
// premium_helper_function::is_notify @ 0x827d29d

/* premium_helper_function::is_notify(CUser*, int) */

undefined4 premium_helper_function::is_notify(CUser *param_1,int param_2)

{
  CUserPremium *this;
  int *piVar1;
  undefined4 uVar2;
  
  this = (CUserPremium *)CUser::GetPremiumInfo(param_1);
  piVar1 = (int *)WongWork::CUserPremium::GetPremiumInfo(this,param_2);
  if (*piVar1 == param_2) {
    uVar2 = CONCAT31((int3)((uint)piVar1[4] >> 8),piVar1[4] == 2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
