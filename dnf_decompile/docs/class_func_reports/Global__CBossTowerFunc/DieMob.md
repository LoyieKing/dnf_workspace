# DieMob

`_ZN6Global14CBossTowerFunc6DieMobEP5CUserttRK15MSG_MONSTER_DIEPi`

`Global::CBossTowerFunc::DieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x081468aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081468aa  _ZN6Global14CBossTowerFunc6DieMobEP5CUserttRK15MSG_MONSTER_DIEPi
#           Global::CBossTowerFunc::DieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
# range [0x081468aa, 0x08146915]
081468aa +0x00:  push   %ebp
081468ab +0x01:  mov    %esp,%ebp
081468ad +0x03:  push   %ebx
081468ae +0x04:  sub    $0x44,%esp
081468b1 +0x07:  mov    0xc(%ebp),%edx
081468b4 +0x0a:  mov    0x10(%ebp),%eax
081468b7 +0x0d:  mov    %dx,-0x1c(%ebp)
081468bb +0x11:  mov    %ax,-0x20(%ebp)
081468bf +0x15:  mov    0x8(%ebp),%eax
081468c2 +0x18:  mov    %eax,(%esp)
081468c5 +0x1b:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
081468ca +0x20:  mov    %eax,-0xc(%ebp)
081468cd +0x23:  cmpl   $0x0,-0xc(%ebp)
081468d1 +0x27:  je     0814690b <+0x61>
081468d3 +0x29:  mov    -0xc(%ebp),%eax
081468d6 +0x2c:  mov    (%eax),%eax
081468d8 +0x2e:  add    $0x24,%eax
081468db +0x31:  mov    (%eax),%ebx
081468dd +0x33:  movzwl -0x20(%ebp),%edx
081468e1 +0x37:  movzwl -0x1c(%ebp),%eax
081468e5 +0x3b:  movl   $0x0,0x14(%esp)
081468ed +0x43:  mov    0x14(%ebp),%ecx
081468f0 +0x46:  mov    %ecx,0x10(%esp)
081468f4 +0x4a:  mov    %edx,0xc(%esp)
081468f8 +0x4e:  mov    %eax,0x8(%esp)
081468fc +0x52:  mov    0x8(%ebp),%eax
081468ff +0x55:  mov    %eax,0x4(%esp)
08146903 +0x59:  mov    -0xc(%ebp),%eax
08146906 +0x5c:  mov    %eax,(%esp)
08146909 +0x5f:  call   *%ebx
0814690b +0x61:  mov    $0x1,%eax
08146910 +0x66:  add    $0x44,%esp
08146913 +0x69:  pop    %ebx
08146914 +0x6a:  pop    %ebp
08146915 +0x6b:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::DieMob @ 0x81468aa

/* Global::CBossTowerFunc::DieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&,
   int*) */

undefined4
Global::CBossTowerFunc::DieMob
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  int *piVar1;
  
  piVar1 = (int *)CUser::getBossTower(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,param_1,param_2,param_3,param_4,0);
  }
  return 1;
}
```
