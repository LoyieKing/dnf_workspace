# init

`_ZN6Taiwan10TaiwanCash4initEPcjS1_S1_S1_`

`Taiwan::TaiwanCash::init(char*, unsigned int, char*, char*, char*)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173686` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173686  _ZN6Taiwan10TaiwanCash4initEPcjS1_S1_S1_
#           Taiwan::TaiwanCash::init(char*, unsigned int, char*, char*, char*)
# range [0x08173686, 0x081736cd]
08173686 +0x00:  push   %ebp
08173687 +0x01:  mov    %esp,%ebp
08173689 +0x03:  sub    $0x28,%esp
0817368c +0x06:  mov    0x8(%ebp),%eax
0817368f +0x09:  add    $0x8,%eax
08173692 +0x0c:  mov    %eax,(%esp)
08173695 +0x0f:  call   083f3ce4 <_ZN5MySQL4initEv>  ; MySQL::init()
0817369a +0x14:  mov    0x8(%ebp),%eax
0817369d +0x17:  lea    0x8(%eax),%edx
081736a0 +0x1a:  mov    0x1c(%ebp),%eax
081736a3 +0x1d:  mov    %eax,0x14(%esp)
081736a7 +0x21:  mov    0x18(%ebp),%eax
081736aa +0x24:  mov    %eax,0x10(%esp)
081736ae +0x28:  mov    0x14(%ebp),%eax
081736b1 +0x2b:  mov    %eax,0xc(%esp)
081736b5 +0x2f:  mov    0x10(%ebp),%eax
081736b8 +0x32:  mov    %eax,0x8(%esp)
081736bc +0x36:  mov    0xc(%ebp),%eax
081736bf +0x39:  mov    %eax,0x4(%esp)
081736c3 +0x3d:  mov    %edx,(%esp)
081736c6 +0x40:  call   083f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>  ; MySQL::open(char*, unsigned int, char*, char*, char*)
081736cb +0x45:  leave
081736cc +0x46:  ret
081736cd +0x47:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::init @ 0x8173686

/* Taiwan::TaiwanCash::init(char*, unsigned int, char*, char*, char*) */

void __thiscall
Taiwan::TaiwanCash::init
          (TaiwanCash *this,char *param_1,uint param_2,char *param_3,char *param_4,char *param_5)

{
  MySQL::init((MySQL *)(this + 8));
  MySQL::open((MySQL *)(this + 8),param_1,param_2,param_3,param_4,param_5);
  return;
}
```
