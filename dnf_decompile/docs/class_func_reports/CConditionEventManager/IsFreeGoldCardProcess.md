# IsFreeGoldCardProcess

`_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE`

`CConditionEventManager::IsFreeGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x0833586c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833586c  _ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE
#           CConditionEventManager::IsFreeGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)
# range [0x0833586c, 0x083358bb]
0833586c +0x00:  push   %ebp
0833586d +0x01:  mov    %esp,%ebp
0833586f +0x03:  sub    $0x28,%esp
08335872 +0x06:  movl   $0x0,-0xc(%ebp)
08335879 +0x0d:  jmp    083358a0 <+0x34>
0833587b +0x0f:  mov    -0xc(%ebp),%eax
0833587e +0x12:  mov    %eax,0x4(%esp)
08335882 +0x16:  mov    0xc(%ebp),%eax
08335885 +0x19:  mov    %eax,(%esp)
08335888 +0x1c:  call   08335f3a <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x3e0>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x3e0
0833588d +0x21:  movzbl 0x8(%eax),%eax
08335891 +0x25:  test   %al,%al
08335893 +0x27:  je     0833589c <+0x30>
08335895 +0x29:  mov    $0x1,%eax
0833589a +0x2e:  jmp    083358ba <+0x4e>
0833589c +0x30:  addl   $0x1,-0xc(%ebp)
083358a0 +0x34:  mov    0xc(%ebp),%eax
083358a3 +0x37:  mov    %eax,(%esp)
083358a6 +0x3a:  call   08335f18 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x3be>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x3be
083358ab +0x3f:  cmp    -0xc(%ebp),%eax
083358ae +0x42:  seta   %al
083358b1 +0x45:  test   %al,%al
083358b3 +0x47:  jne    0833587b <+0xf>
083358b5 +0x49:  mov    $0x0,%eax
083358ba +0x4e:  leave
083358bb +0x4f:  ret
```

## 反编译 C

```c
// CConditionEventManager::IsFreeGoldCardProcess @ 0x833586c

/* CConditionEventManager::IsFreeGoldCardProcess(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&) */

undefined4 __thiscall
CConditionEventManager::IsFreeGoldCardProcess(CConditionEventManager *this,vector *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::size
                      ((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    iVar1 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            operator[]((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1,local_10);
    if (*(char *)(iVar1 + 8) != '\0') break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
