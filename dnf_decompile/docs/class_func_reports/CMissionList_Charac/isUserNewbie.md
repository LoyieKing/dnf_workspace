# isUserNewbie

`_ZNK19CMissionList_Charac12isUserNewbieEv`

`CMissionList_Charac::isUserNewbie() const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4a04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4a04  _ZNK19CMissionList_Charac12isUserNewbieEv
#           CMissionList_Charac::isUserNewbie() const
# range [0x085e4a04, 0x085e4ac3]
085e4a04 +0x00:  push   %ebp
085e4a05 +0x01:  mov    %esp,%ebp
085e4a07 +0x03:  push   %edi
085e4a08 +0x04:  push   %esi
085e4a09 +0x05:  push   %ebx
085e4a0a +0x06:  sub    $0x1c,%esp
085e4a0d +0x09:  mov    $&_ZGVZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,%eax
085e4a12 +0x0e:  movzbl (%eax),%eax
085e4a15 +0x11:  test   %al,%al
085e4a17 +0x13:  jne    085e4a75 <+0x71>
085e4a19 +0x15:  movl   $&_ZGVZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,(%esp)
085e4a20 +0x1c:  call   08725330 <__cxa_guard_acquire>
085e4a25 +0x21:  test   %eax,%eax
085e4a27 +0x23:  setne  %al
085e4a2a +0x26:  test   %al,%al
085e4a2c +0x28:  je     085e4a75 <+0x71>
085e4a2e +0x2a:  mov    $0x0,%ebx
085e4a33 +0x2f:  movl   $0x0,0x4(%esp)
085e4a3b +0x37:  movl   $&_ZZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,(%esp)
085e4a42 +0x3e:  call   085e8082 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x180a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x180a
085e4a47 +0x43:  movl   $&_ZGVZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,(%esp)
085e4a4e +0x4a:  call   08725250 <__cxa_guard_release>
085e4a53 +0x4f:  jmp    085e4a75 <+0x71>
085e4a55 +0x51:  mov    %edx,%esi
085e4a57 +0x53:  mov    %eax,%edi
085e4a59 +0x55:  test   %bl,%bl
085e4a5b +0x57:  jne    085e4a69 <+0x65>
085e4a5d +0x59:  movl   $&_ZGVZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,(%esp)
085e4a64 +0x60:  call   087252c0 <__cxa_guard_abort>
085e4a69 +0x65:  mov    %edi,%eax
085e4a6b +0x67:  mov    %esi,%edx
085e4a6d +0x69:  mov    %eax,(%esp)
085e4a70 +0x6c:  call   08ae3750 <_Unwind_Resume>
085e4a75 +0x71:  mov    0x8(%ebp),%eax
085e4a78 +0x74:  mov    %eax,(%esp)
085e4a7b +0x77:  call   085e5724 <_ZNK19CMissionList_Charac14empty_progressEv>  ; CMissionList_Charac::empty_progress() const
085e4a80 +0x7c:  test   %al,%al
085e4a82 +0x7e:  je     085e4aa7 <+0xa3>
085e4a84 +0x80:  mov    0x8(%ebp),%eax
085e4a87 +0x83:  add    $0x128,%eax
085e4a8c +0x88:  mov    %eax,0x4(%esp)
085e4a90 +0x8c:  movl   $&_ZZNK19CMissionList_Charac12isUserNewbieEvE7zeroBit,(%esp)
085e4a97 +0x93:  call   085e80a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1830>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1830
085e4a9c +0x98:  test   %al,%al
085e4a9e +0x9a:  je     085e4aa7 <+0xa3>
085e4aa0 +0x9c:  mov    $0x1,%eax
085e4aa5 +0xa1:  jmp    085e4aac <+0xa8>
085e4aa7 +0xa3:  mov    $0x0,%eax
085e4aac +0xa8:  test   %al,%al
085e4aae +0xaa:  je     085e4ab7 <+0xb3>
085e4ab0 +0xac:  mov    $0x1,%eax
085e4ab5 +0xb1:  jmp    085e4abc <+0xb8>
085e4ab7 +0xb3:  mov    $0x0,%eax
085e4abc +0xb8:  add    $0x1c,%esp
085e4abf +0xbb:  pop    %ebx
085e4ac0 +0xbc:  pop    %esi
085e4ac1 +0xbd:  pop    %edi
085e4ac2 +0xbe:  pop    %ebp
085e4ac3 +0xbf:  ret
```

## 反编译 C

```c
// CMissionList_Charac::isUserNewbie @ 0x85e4a04

/* CMissionList_Charac::isUserNewbie() const */

undefined1 __thiscall CMissionList_Charac::isUserNewbie(CMissionList_Charac *this)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  if ((isUserNewbie()::zeroBit == '\0') &&
     (iVar3 = __cxa_guard_acquire(&isUserNewbie()::zeroBit), iVar3 != 0)) {
                    /* try { // try from 085e4a42 to 085e4a46 has its CatchHandler @ 085e4a55 */
    std::bitset<256u>::bitset((bitset<256u> *)isUserNewbie()::zeroBit,0);
    __cxa_guard_release(&isUserNewbie()::zeroBit);
  }
  cVar2 = empty_progress(this);
  if ((cVar2 == '\0') ||
     (cVar2 = std::bitset<256u>::operator==
                        ((bitset<256u> *)isUserNewbie()::zeroBit,(bitset *)(this + 0x128)),
     cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
