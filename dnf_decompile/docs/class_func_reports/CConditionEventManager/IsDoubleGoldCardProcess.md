# IsDoubleGoldCardProcess

`_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE`

`CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08335a3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335a3a  _ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE
#           CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)
# range [0x08335a3a, 0x08335a89]
08335a3a +0x00:  push   %ebp
08335a3b +0x01:  mov    %esp,%ebp
08335a3d +0x03:  sub    $0x28,%esp
08335a40 +0x06:  movl   $0x0,-0xc(%ebp)
08335a47 +0x0d:  jmp    08335a6e <+0x34>
08335a49 +0x0f:  mov    -0xc(%ebp),%eax
08335a4c +0x12:  mov    %eax,0x4(%esp)
08335a50 +0x16:  mov    0xc(%ebp),%eax
08335a53 +0x19:  mov    %eax,(%esp)
08335a56 +0x1c:  call   08335f3a <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x3e0>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x3e0
08335a5b +0x21:  movzbl 0x9(%eax),%eax
08335a5f +0x25:  test   %al,%al
08335a61 +0x27:  je     08335a6a <+0x30>
08335a63 +0x29:  mov    $0x1,%eax
08335a68 +0x2e:  jmp    08335a88 <+0x4e>
08335a6a +0x30:  addl   $0x1,-0xc(%ebp)
08335a6e +0x34:  mov    0xc(%ebp),%eax
08335a71 +0x37:  mov    %eax,(%esp)
08335a74 +0x3a:  call   08335f18 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x3be>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x3be
08335a79 +0x3f:  cmp    -0xc(%ebp),%eax
08335a7c +0x42:  seta   %al
08335a7f +0x45:  test   %al,%al
08335a81 +0x47:  jne    08335a49 <+0xf>
08335a83 +0x49:  mov    $0x0,%eax
08335a88 +0x4e:  leave
08335a89 +0x4f:  ret
```

## 反编译 C

```c
// CConditionEventManager::IsDoubleGoldCardProcess @ 0x8335a3a

/* CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&) */

undefined4 __thiscall
CConditionEventManager::IsDoubleGoldCardProcess(CConditionEventManager *this,vector *param_1)

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
    if (*(char *)(iVar1 + 9) != '\0') break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
