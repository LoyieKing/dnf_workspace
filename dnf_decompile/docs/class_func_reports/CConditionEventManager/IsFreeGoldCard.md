# IsFreeGoldCard

`_ZN22CConditionEventManager14IsFreeGoldCardEP5CUserc`

`CConditionEventManager::IsFreeGoldCard(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x0833579e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833579e  _ZN22CConditionEventManager14IsFreeGoldCardEP5CUserc
#           CConditionEventManager::IsFreeGoldCard(CUser*, char)
# range [0x0833579e, 0x0833586b]
0833579e +0x00:  push   %ebp
0833579f +0x01:  mov    %esp,%ebp
083357a1 +0x03:  push   %esi
083357a2 +0x04:  push   %ebx
083357a3 +0x05:  sub    $0x40,%esp
083357a6 +0x08:  mov    0x10(%ebp),%eax
083357a9 +0x0b:  mov    %al,-0x1c(%ebp)
083357ac +0x0e:  movsbl -0x1c(%ebp),%eax
083357b0 +0x12:  mov    %eax,0x8(%esp)
083357b4 +0x16:  mov    0xc(%ebp),%eax
083357b7 +0x19:  mov    %eax,0x4(%esp)
083357bb +0x1d:  mov    0x8(%ebp),%eax
083357be +0x20:  mov    %eax,(%esp)
083357c1 +0x23:  call   08335a8a <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc>  ; CConditionEventManager::CheckErrorCardForStep(CUser*, char)
083357c6 +0x28:  mov    %al,-0xb(%ebp)
083357c9 +0x2b:  movzbl -0xb(%ebp),%eax
083357cd +0x2f:  xor    $0x1,%eax
083357d0 +0x32:  test   %al,%al
083357d2 +0x34:  je     083357de <+0x40>
083357d4 +0x36:  mov    $0x0,%ebx
083357d9 +0x3b:  jmp    08335863 <+0xc5>
083357de +0x40:  mov    0x8(%ebp),%eax
083357e1 +0x43:  mov    %eax,(%esp)
083357e4 +0x46:  call   08335754 <_ZN22CConditionEventManager16GetCurEventIndexEv>  ; CConditionEventManager::GetCurEventIndex()
083357e9 +0x4b:  mov    %ax,-0xa(%ebp)
083357ed +0x4f:  lea    -0x18(%ebp),%eax
083357f0 +0x52:  mov    %eax,(%esp)
083357f3 +0x55:  call   08335cc8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x16e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x16e
083357f8 +0x5a:  movsbl -0x1c(%ebp),%edx
083357fc +0x5e:  movswl -0xa(%ebp),%eax
08335800 +0x62:  mov    %edx,0x10(%esp)
08335804 +0x66:  mov    %eax,0xc(%esp)
08335808 +0x6a:  lea    -0x18(%ebp),%eax
0833580b +0x6d:  mov    %eax,0x8(%esp)
0833580f +0x71:  movl   $0x0,0x4(%esp)
08335817 +0x79:  mov    0x8(%ebp),%eax
0833581a +0x7c:  mov    %eax,(%esp)
0833581d +0x7f:  call   083353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>  ; CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)
08335822 +0x84:  lea    -0x18(%ebp),%eax
08335825 +0x87:  mov    %eax,0x4(%esp)
08335829 +0x8b:  mov    0x8(%ebp),%eax
0833582c +0x8e:  mov    %eax,(%esp)
0833582f +0x91:  call   0833586c <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>  ; CConditionEventManager::IsFreeGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)
08335834 +0x96:  mov    %al,-0xb(%ebp)
08335837 +0x99:  movzbl -0xb(%ebp),%ebx
0833583b +0x9d:  lea    -0x18(%ebp),%eax
0833583e +0xa0:  mov    %eax,(%esp)
08335841 +0xa3:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335846 +0xa8:  jmp    08335863 <+0xc5>
08335848 +0xaa:  mov    %edx,%ebx
0833584a +0xac:  mov    %eax,%esi
0833584c +0xae:  lea    -0x18(%ebp),%eax
0833584f +0xb1:  mov    %eax,(%esp)
08335852 +0xb4:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335857 +0xb9:  mov    %esi,%eax
08335859 +0xbb:  mov    %ebx,%edx
0833585b +0xbd:  mov    %eax,(%esp)
0833585e +0xc0:  call   08ae3750 <_Unwind_Resume>
08335863 +0xc5:  mov    %ebx,%eax
08335865 +0xc7:  add    $0x40,%esp
08335868 +0xca:  pop    %ebx
08335869 +0xcb:  pop    %esi
0833586a +0xcc:  pop    %ebp
0833586b +0xcd:  ret
```

## 反编译 C

```c
// CConditionEventManager::IsFreeGoldCard @ 0x833579e

/* CConditionEventManager::IsFreeGoldCard(CUser*, char) */

undefined1 __thiscall
CConditionEventManager::IsFreeGoldCard(CConditionEventManager *this,CUser *param_1,char param_2)

{
  undefined1 uVar1;
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_1c [13];
  char local_f;
  short local_e;
  
  local_f = CheckErrorCardForStep(this,param_1,param_2);
  if (local_f == '\x01') {
    local_e = GetCurEventIndex();
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
              (local_1c);
                    /* try { // try from 0833581d to 08335833 has its CatchHandler @ 08335848 */
    GetConditionRewardInfo(this,'\0',(vector *)local_1c,local_e,param_2);
    uVar1 = IsFreeGoldCardProcess(this,(vector *)local_1c);
    local_f = uVar1;
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
              (local_1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
