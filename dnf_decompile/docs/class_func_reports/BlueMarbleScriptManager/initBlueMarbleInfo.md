# initBlueMarbleInfo

`_ZN23BlueMarbleScriptManager18initBlueMarbleInfoEPKcS1_`

`BlueMarbleScriptManager::initBlueMarbleInfo(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d6622` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d6622  _ZN23BlueMarbleScriptManager18initBlueMarbleInfoEPKcS1_
#           BlueMarbleScriptManager::initBlueMarbleInfo(char const*, char const*)
# range [0x088d6622, 0x088d6645]
088d6622 +0x00:  push   %ebp
088d6623 +0x01:  mov    %esp,%ebp
088d6625 +0x03:  sub    $0x18,%esp
088d6628 +0x06:  mov    0x8(%ebp),%eax
088d662b +0x09:  lea    0x30(%eax),%edx
088d662e +0x0c:  mov    0x10(%ebp),%eax
088d6631 +0x0f:  mov    %eax,0x8(%esp)
088d6635 +0x13:  mov    0xc(%ebp),%eax
088d6638 +0x16:  mov    %eax,0x4(%esp)
088d663c +0x1a:  mov    %edx,(%esp)
088d663f +0x1d:  call   088d589c <_ZN20BlueMarbleInfoScript12importScriptEPKcS1_>  ; BlueMarbleInfoScript::importScript(char const*, char const*)
088d6644 +0x22:  leave
088d6645 +0x23:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::initBlueMarbleInfo @ 0x88d6622

/* BlueMarbleScriptManager::initBlueMarbleInfo(char const*, char const*) */

void __thiscall
BlueMarbleScriptManager::initBlueMarbleInfo
          (BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  BlueMarbleInfoScript::importScript((BlueMarbleInfoScript *)(this + 0x30),param_1,param_2);
  return;
}
```
