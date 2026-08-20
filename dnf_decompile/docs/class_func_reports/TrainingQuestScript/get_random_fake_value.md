# get_random_fake_value

`_ZN19TrainingQuestScript21get_random_fake_valueEii`

`TrainingQuestScript::get_random_fake_value(int, int)`

| 类 | 地址 |
|---|---|
| `TrainingQuestScript` | `0x08aafc90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aafc90  _ZN19TrainingQuestScript21get_random_fake_valueEii
#           TrainingQuestScript::get_random_fake_value(int, int)
# range [0x08aafc90, 0x08aafcbb]
08aafc90 +0x00:  push   %ebp
08aafc91 +0x01:  mov    %esp,%ebp
08aafc93 +0x03:  sub    $0x18,%esp
08aafc96 +0x06:  mov    0xc(%ebp),%ecx
08aafc99 +0x09:  mov    0x10(%ebp),%edx
08aafc9c +0x0c:  mov    %edx,%eax
08aafc9e +0x0e:  add    %eax,%eax
08aafca0 +0x10:  add    %edx,%eax
08aafca2 +0x12:  shl    $0x2,%eax
08aafca5 +0x15:  add    $0x10,%eax
08aafca8 +0x18:  add    0x8(%ebp),%eax
08aafcab +0x1b:  mov    %ecx,0x4(%esp)
08aafcaf +0x1f:  mov    %eax,(%esp)
08aafcb2 +0x22:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08aafcb7 +0x27:  mov    (%eax),%eax
08aafcb9 +0x29:  leave
08aafcba +0x2a:  ret
08aafcbb +0x2b:  nop
```

## 反编译 C

```c
// TrainingQuestScript::get_random_fake_value @ 0x8aafc90

/* TrainingQuestScript::get_random_fake_value(int, int) */

undefined4 __thiscall
TrainingQuestScript::get_random_fake_value(TrainingQuestScript *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + param_2 * 0xc + 0x10),param_1);
  return *puVar1;
}
```
