# getRewardExp

`_ZN20QuestParameterScript12getRewardExpEi`

`QuestParameterScript::getRewardExp(int)`

| 类 | 地址 |
|---|---|
| `QuestParameterScript` | `0x08a6bd86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6bd86  _ZN20QuestParameterScript12getRewardExpEi
#           QuestParameterScript::getRewardExp(int)
# range [0x08a6bd86, 0x08a6bda5]
08a6bd86 +0x00:  push   %ebp
08a6bd87 +0x01:  mov    %esp,%ebp
08a6bd89 +0x03:  sub    $0x18,%esp
08a6bd8c +0x06:  mov    0xc(%ebp),%eax
08a6bd8f +0x09:  mov    0x8(%ebp),%edx
08a6bd92 +0x0c:  add    $0x24,%edx
08a6bd95 +0x0f:  mov    %eax,0x4(%esp)
08a6bd99 +0x13:  mov    %edx,(%esp)
08a6bd9c +0x16:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08a6bda1 +0x1b:  mov    (%eax),%eax
08a6bda3 +0x1d:  leave
08a6bda4 +0x1e:  ret
08a6bda5 +0x1f:  nop
```

## 反编译 C

```c
// QuestParameterScript::getRewardExp @ 0x8a6bd86

/* QuestParameterScript::getRewardExp(int) */

undefined4 __thiscall QuestParameterScript::getRewardExp(QuestParameterScript *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + 0x24),param_1);
  return *puVar1;
}
```
