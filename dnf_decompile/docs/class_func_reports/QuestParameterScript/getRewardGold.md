# getRewardGold

`_ZN20QuestParameterScript13getRewardGoldEi`

`QuestParameterScript::getRewardGold(int)`

| 类 | 地址 |
|---|---|
| `QuestParameterScript` | `0x08a6bda6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6bda6  _ZN20QuestParameterScript13getRewardGoldEi
#           QuestParameterScript::getRewardGold(int)
# range [0x08a6bda6, 0x08a6bdc5]
08a6bda6 +0x00:  push   %ebp
08a6bda7 +0x01:  mov    %esp,%ebp
08a6bda9 +0x03:  sub    $0x18,%esp
08a6bdac +0x06:  mov    0xc(%ebp),%eax
08a6bdaf +0x09:  mov    0x8(%ebp),%edx
08a6bdb2 +0x0c:  add    $0x30,%edx
08a6bdb5 +0x0f:  mov    %eax,0x4(%esp)
08a6bdb9 +0x13:  mov    %edx,(%esp)
08a6bdbc +0x16:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08a6bdc1 +0x1b:  mov    (%eax),%eax
08a6bdc3 +0x1d:  leave
08a6bdc4 +0x1e:  ret
08a6bdc5 +0x1f:  nop
```

## 反编译 C

```c
// QuestParameterScript::getRewardGold @ 0x8a6bda6

/* QuestParameterScript::getRewardGold(int) */

undefined4 __thiscall QuestParameterScript::getRewardGold(QuestParameterScript *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + 0x30),param_1);
  return *puVar1;
}
```
