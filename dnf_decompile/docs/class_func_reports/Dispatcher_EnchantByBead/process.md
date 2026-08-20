# process

`_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnchantByBead` | `0x081d24b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d24b8  _ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d24b8, 0x081d25af]
081d24b8 +0x00:  push   %ebp
081d24b9 +0x01:  mov    %esp,%ebp
081d24bb +0x03:  push   %esi
081d24bc +0x04:  push   %ebx
081d24bd +0x05:  sub    $0x30,%esp
081d24c0 +0x08:  mov    0x14(%ebp),%eax
081d24c3 +0x0b:  mov    %eax,-0x14(%ebp)
081d24c6 +0x0e:  mov    0x14(%ebp),%eax
081d24c9 +0x11:  mov    %eax,0xc(%esp)
081d24cd +0x15:  mov    0x10(%ebp),%eax
081d24d0 +0x18:  mov    %eax,0x8(%esp)
081d24d4 +0x1c:  mov    0xc(%ebp),%eax
081d24d7 +0x1f:  mov    %eax,0x4(%esp)
081d24db +0x23:  mov    0x8(%ebp),%eax
081d24de +0x26:  mov    %eax,(%esp)
081d24e1 +0x29:  call   081d233a <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_EnchantByBead::check_error(CUser*, MSG_BASE&, ParamBase&)
081d24e6 +0x2e:  mov    %eax,%edx
081d24e8 +0x30:  mov    -0x14(%ebp),%eax
081d24eb +0x33:  mov    %edx,0x4(%eax)
081d24ee +0x36:  mov    -0x14(%ebp),%eax
081d24f1 +0x39:  mov    0x4(%eax),%eax
081d24f4 +0x3c:  test   %eax,%eax
081d24f6 +0x3e:  jle    081d2502 <+0x4a>
081d24f8 +0x40:  mov    $0x0,%eax
081d24fd +0x45:  jmp    081d25a9 <+0xf1>
081d2502 +0x4a:  mov    -0x14(%ebp),%eax
081d2505 +0x4d:  mov    0x4(%eax),%eax
081d2508 +0x50:  test   %eax,%eax
081d250a +0x52:  jns    081d2534 <+0x7c>
081d250c +0x54:  mov    -0x14(%ebp),%eax
081d250f +0x57:  mov    0x4(%eax),%eax
081d2512 +0x5a:  movl   $0x0,0xc(%esp)
081d251a +0x62:  mov    %eax,0x8(%esp)
081d251e +0x66:  movl   $&_ZZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d2526 +0x6e:  movl   $0x2f61,(%esp)
081d252d +0x75:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2532 +0x7a:  jmp    081d25a9 <+0xf1>
081d2534 +0x7c:  mov    0x10(%ebp),%eax
081d2537 +0x7f:  mov    %eax,-0x10(%ebp)
081d253a +0x82:  movl   $0x0,-0xc(%ebp)
081d2541 +0x89:  mov    -0x10(%ebp),%eax
081d2544 +0x8c:  movzwl 0x12(%eax),%eax
081d2548 +0x90:  movswl %ax,%esi
081d254b +0x93:  mov    -0x10(%ebp),%eax
081d254e +0x96:  movzbl 0x10(%eax),%eax
081d2552 +0x9a:  movsbl %al,%ebx
081d2555 +0x9d:  mov    -0x10(%ebp),%eax
081d2558 +0xa0:  movzwl 0xe(%eax),%eax
081d255c +0xa4:  movswl %ax,%ecx
081d255f +0xa7:  mov    -0x10(%ebp),%eax
081d2562 +0xaa:  movzbl 0xd(%eax),%eax
081d2566 +0xae:  movsbl %al,%edx
081d2569 +0xb1:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081d256e +0xb6:  mov    %esi,0x14(%esp)
081d2572 +0xba:  mov    %ebx,0x10(%esp)
081d2576 +0xbe:  mov    %ecx,0xc(%esp)
081d257a +0xc2:  mov    %edx,0x8(%esp)
081d257e +0xc6:  mov    0xc(%ebp),%edx
081d2581 +0xc9:  mov    %edx,0x4(%esp)
081d2585 +0xcd:  mov    %eax,(%esp)
081d2588 +0xd0:  call   0849ed1a <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii>  ; expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int)
081d258d +0xd5:  mov    %eax,-0xc(%ebp)
081d2590 +0xd8:  cmpl   $0x0,-0xc(%ebp)
081d2594 +0xdc:  setne  %al
081d2597 +0xdf:  test   %al,%al
081d2599 +0xe1:  je     081d25a4 <+0xec>
081d259b +0xe3:  mov    -0xc(%ebp),%edx
081d259e +0xe6:  mov    -0x14(%ebp),%eax
081d25a1 +0xe9:  mov    %edx,0x4(%eax)
081d25a4 +0xec:  mov    $0x0,%eax
081d25a9 +0xf1:  add    $0x30,%esp
081d25ac +0xf4:  pop    %ebx
081d25ad +0xf5:  pop    %esi
081d25ae +0xf6:  pop    %ebp
081d25af +0xf7:  ret
```

## 反编译 C

```c
// Dispatcher_EnchantByBead::process @ 0x81d24b8

/* Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_EnchantByBead::process
          (Dispatcher_EnchantByBead *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x2f61,
                       "virtual int Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      iVar2 = expert_job::CExpertJobMgr::OnEnchantByBead
                        (GlobalData::s_ExpertJobMgr,param_1,(int)(char)param_2[0xd],
                         (int)*(short *)(param_2 + 0xe),(int)(char)param_2[0x10],
                         (int)*(short *)(param_2 + 0x12));
      if (iVar2 != 0) {
        *(int *)(param_3 + 4) = iVar2;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
