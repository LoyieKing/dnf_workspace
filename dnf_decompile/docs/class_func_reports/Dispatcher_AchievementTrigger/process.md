# process

`_ZN29Dispatcher_AchievementTrigger7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_AchievementTrigger::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AchievementTrigger` | `0x081d7f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7f1e  _ZN29Dispatcher_AchievementTrigger7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_AchievementTrigger::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d7f1e, 0x081d7fab]
081d7f1e +0x00:  push   %ebp
081d7f1f +0x01:  mov    %esp,%ebp
081d7f21 +0x03:  push   %edi
081d7f22 +0x04:  push   %esi
081d7f23 +0x05:  push   %ebx
081d7f24 +0x06:  sub    $0x4c,%esp
081d7f27 +0x09:  mov    0x10(%ebp),%eax
081d7f2a +0x0c:  mov    %eax,-0x1c(%ebp)
081d7f2d +0x0f:  mov    0xc(%ebp),%eax
081d7f30 +0x12:  mov    %eax,(%esp)
081d7f33 +0x15:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7f38 +0x1a:  cmp    $0x2,%eax
081d7f3b +0x1d:  setle  %al
081d7f3e +0x20:  test   %al,%al
081d7f40 +0x22:  je     081d7f49 <+0x2b>
081d7f42 +0x24:  mov    $0x0,%eax
081d7f47 +0x29:  jmp    081d7fa3 <+0x85>
081d7f49 +0x2b:  mov    -0x1c(%ebp),%eax
081d7f4c +0x2e:  movzwl 0x15(%eax),%eax
081d7f50 +0x32:  movzwl %ax,%eax
081d7f53 +0x35:  mov    %eax,-0x2c(%ebp)
081d7f56 +0x38:  mov    -0x1c(%ebp),%eax
081d7f59 +0x3b:  movzwl 0x13(%eax),%eax
081d7f5d +0x3f:  movzwl %ax,%edi
081d7f60 +0x42:  mov    -0x1c(%ebp),%eax
081d7f63 +0x45:  movzwl 0x11(%eax),%eax
081d7f67 +0x49:  movzwl %ax,%esi
081d7f6a +0x4c:  mov    -0x1c(%ebp),%eax
081d7f6d +0x4f:  mov    0xd(%eax),%ebx
081d7f70 +0x52:  movl   $0xf,0x4(%esp)
081d7f78 +0x5a:  mov    0xc(%ebp),%eax
081d7f7b +0x5d:  mov    %eax,(%esp)
081d7f7e +0x60:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d7f83 +0x65:  mov    -0x2c(%ebp),%edx
081d7f86 +0x68:  mov    %edx,0x10(%esp)
081d7f8a +0x6c:  mov    %edi,0xc(%esp)
081d7f8e +0x70:  mov    %esi,0x8(%esp)
081d7f92 +0x74:  mov    %ebx,0x4(%esp)
081d7f96 +0x78:  mov    %eax,(%esp)
081d7f99 +0x7b:  call   0828b678 <_ZN12CAchievement10setTriggerEjttt>  ; CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
081d7f9e +0x80:  mov    $0x0,%eax
081d7fa3 +0x85:  add    $0x4c,%esp
081d7fa6 +0x88:  pop    %ebx
081d7fa7 +0x89:  pop    %esi
081d7fa8 +0x8a:  pop    %edi
081d7fa9 +0x8b:  pop    %ebp
081d7faa +0x8c:  ret
081d7fab +0x8d:  nop
```

## 反编译 C

```c
// Dispatcher_AchievementTrigger::process @ 0x81d7f1e

/* Dispatcher_AchievementTrigger::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_AchievementTrigger::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  CAchievement *this;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (2 < iVar5) {
    uVar1 = *(ushort *)(param_3 + 0x15);
    uVar2 = *(ushort *)(param_3 + 0x13);
    uVar3 = *(ushort *)(param_3 + 0x11);
    uVar4 = *(uint *)(param_3 + 0xd);
    this = (CAchievement *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
    CAchievement::setTrigger(this,uVar4,uVar3,uVar2,uVar1);
  }
  return 0;
}
```
