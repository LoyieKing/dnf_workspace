# getEffectInfo

`_ZN25GenuineDamageUpgradeTable13getEffectInfoEi`

`GenuineDamageUpgradeTable::getEffectInfo(int)`

| 类 | 地址 |
|---|---|
| `GenuineDamageUpgradeTable` | `0x08912d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08912d10  _ZN25GenuineDamageUpgradeTable13getEffectInfoEi
#           GenuineDamageUpgradeTable::getEffectInfo(int)
# range [0x08912d10, 0x08912e44]
08912d10 +0x000:  push   %ebp
08912d11 +0x001:  mov    %esp,%ebp
08912d13 +0x003:  push   %ebx
08912d14 +0x004:  sub    $0x24,%esp
08912d17 +0x007:  mov    0x8(%ebp),%ebx
08912d1a +0x00a:  mov    $&_ZGVZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,%eax
08912d1f +0x00f:  movzbl (%eax),%eax
08912d22 +0x012:  test   %al,%al
08912d24 +0x014:  jne    08912d53 <+0x43>
08912d26 +0x016:  movl   $&_ZGVZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,(%esp)
08912d2d +0x01d:  call   08725330 <__cxa_guard_acquire>
08912d32 +0x022:  test   %eax,%eax
08912d34 +0x024:  setne  %al
08912d37 +0x027:  test   %al,%al
08912d39 +0x029:  je     08912d53 <+0x43>
08912d3b +0x02b:  movl   $&_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,(%esp)
08912d42 +0x032:  call   0891bb1e <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x27fd>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x27fd
08912d47 +0x037:  movl   $&_ZGVZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,(%esp)
08912d4e +0x03e:  call   08725250 <__cxa_guard_release>
08912d53 +0x043:  mov    0xc(%ebp),%eax
08912d56 +0x046:  mov    0x4(%eax),%edx
08912d59 +0x049:  mov    0x10(%ebp),%eax
08912d5c +0x04c:  cmp    %eax,%edx
08912d5e +0x04e:  jge    08912d84 <+0x74>
08912d60 +0x050:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,%eax
08912d65 +0x055:  mov    %eax,(%ebx)
08912d67 +0x057:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0x4,%eax
08912d6c +0x05c:  mov    %eax,0x4(%ebx)
08912d6f +0x05f:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0x8,%eax
08912d74 +0x064:  mov    %eax,0x8(%ebx)
08912d77 +0x067:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0xc,%eax
08912d7c +0x06c:  mov    %eax,0xc(%ebx)
08912d7f +0x06f:  jmp    08912e3e <+0x12e>
08912d84 +0x074:  mov    0xc(%ebp),%eax
08912d87 +0x077:  lea    0x170(%eax),%ecx
08912d8d +0x07d:  lea    -0x14(%ebp),%eax
08912d90 +0x080:  lea    0x10(%ebp),%edx
08912d93 +0x083:  mov    %edx,0x8(%esp)
08912d97 +0x087:  mov    %ecx,0x4(%esp)
08912d9b +0x08b:  mov    %eax,(%esp)
08912d9e +0x08e:  call   089214b6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8195>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8195
08912da3 +0x093:  sub    $0x4,%esp
08912da6 +0x096:  lea    -0x14(%ebp),%eax
08912da9 +0x099:  mov    %eax,0x4(%esp)
08912dad +0x09d:  lea    -0x18(%ebp),%eax
08912db0 +0x0a0:  mov    %eax,(%esp)
08912db3 +0x0a3:  call   089214e2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x81c1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x81c1
08912db8 +0x0a8:  mov    0xc(%ebp),%eax
08912dbb +0x0ab:  lea    0x170(%eax),%edx
08912dc1 +0x0b1:  lea    -0xc(%ebp),%eax
08912dc4 +0x0b4:  mov    %edx,0x4(%esp)
08912dc8 +0x0b8:  mov    %eax,(%esp)
08912dcb +0x0bb:  call   089214f2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x81d1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x81d1
08912dd0 +0x0c0:  sub    $0x4,%esp
08912dd3 +0x0c3:  lea    -0xc(%ebp),%eax
08912dd6 +0x0c6:  mov    %eax,0x4(%esp)
08912dda +0x0ca:  lea    -0x10(%ebp),%eax
08912ddd +0x0cd:  mov    %eax,(%esp)
08912de0 +0x0d0:  call   089214e2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x81c1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x81c1
08912de5 +0x0d5:  lea    -0x10(%ebp),%eax
08912de8 +0x0d8:  mov    %eax,0x4(%esp)
08912dec +0x0dc:  lea    -0x18(%ebp),%eax
08912def +0x0df:  mov    %eax,(%esp)
08912df2 +0x0e2:  call   08921518 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x81f7>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x81f7
08912df7 +0x0e7:  test   %al,%al
08912df9 +0x0e9:  je     08912e1f <+0x10f>
08912dfb +0x0eb:  lea    -0x18(%ebp),%eax
08912dfe +0x0ee:  mov    %eax,(%esp)
08912e01 +0x0f1:  call   0892152c <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x820b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x820b
08912e06 +0x0f6:  mov    0x4(%eax),%edx
08912e09 +0x0f9:  mov    %edx,(%ebx)
08912e0b +0x0fb:  mov    0x8(%eax),%edx
08912e0e +0x0fe:  mov    %edx,0x4(%ebx)
08912e11 +0x101:  mov    0xc(%eax),%edx
08912e14 +0x104:  mov    %edx,0x8(%ebx)
08912e17 +0x107:  mov    0x10(%eax),%eax
08912e1a +0x10a:  mov    %eax,0xc(%ebx)
08912e1d +0x10d:  jmp    08912e3e <+0x12e>
08912e1f +0x10f:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp,%eax
08912e24 +0x114:  mov    %eax,(%ebx)
08912e26 +0x116:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0x4,%eax
08912e2b +0x11b:  mov    %eax,0x4(%ebx)
08912e2e +0x11e:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0x8,%eax
08912e33 +0x123:  mov    %eax,0x8(%ebx)
08912e36 +0x126:  mov    &_ZZN25GenuineDamageUpgradeTable13getEffectInfoEiE4temp+0xc,%eax
08912e3b +0x12b:  mov    %eax,0xc(%ebx)
08912e3e +0x12e:  mov    %ebx,%eax
08912e40 +0x130:  mov    -0x4(%ebp),%ebx
08912e43 +0x133:  leave
08912e44 +0x134:  ret    $0x4
```

## 反编译 C

```c
// GenuineDamageUpgradeTable::getEffectInfo @ 0x8912d10

/* GenuineDamageUpgradeTable::getEffectInfo(int) */

int GenuineDamageUpgradeTable::getEffectInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  _Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>> local_14 [4];
  map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
  local_10 [8];
  
  if (getEffectInfo(int)::temp == '\0') {
    iVar2 = __cxa_guard_acquire(&getEffectInfo(int)::temp);
    if (iVar2 != 0) {
      OutLineEFFECTInfoTemp::OutLineEFFECTInfoTemp
                ((OutLineEFFECTInfoTemp *)&getEffectInfo(int)::temp);
      __cxa_guard_release(&getEffectInfo(int)::temp);
    }
  }
  if (*(int *)(in_stack_00000008 + 4) < in_stack_0000000c) {
    *(undefined4 *)param_1 = getEffectInfo(int)::temp;
    *(undefined4 *)(param_1 + 4) = DAT_094f72dc;
    *(undefined4 *)(param_1 + 8) = DAT_094f72e0;
    *(undefined4 *)(param_1 + 0xc) = DAT_094f72e4;
  }
  else {
    std::
    map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
    ::find((int *)local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::
    _Rb_tree_const_iterator(local_1c,local_18);
    std::
    map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::
    _Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::operator!=
                      (local_1c,(_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      *(undefined4 *)param_1 = getEffectInfo(int)::temp;
      *(undefined4 *)(param_1 + 4) = DAT_094f72dc;
      *(undefined4 *)(param_1 + 8) = DAT_094f72e0;
      *(undefined4 *)(param_1 + 0xc) = DAT_094f72e4;
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::operator->
                        (local_1c);
      *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  return param_1;
}
```
