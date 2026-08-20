# FindIpgNo

`_ZN19CerashopAddRestrict7Manager9FindIpgNoEj`

`CerashopAddRestrict::Manager::FindIpgNo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0e4a  _ZN19CerashopAddRestrict7Manager9FindIpgNoEj
#           CerashopAddRestrict::Manager::FindIpgNo(unsigned int)
# range [0x080e0e4a, 0x080e0e67]
080e0e4a +0x00:  push   %ebp
080e0e4b +0x01:  mov    %esp,%ebp
080e0e4d +0x03:  sub    $0x18,%esp
080e0e50 +0x06:  mov    0x8(%ebp),%eax
080e0e53 +0x09:  lea    0x4(%eax),%edx
080e0e56 +0x0c:  mov    0xc(%ebp),%eax
080e0e59 +0x0f:  mov    %eax,0x4(%esp)
080e0e5d +0x13:  mov    %edx,(%esp)
080e0e60 +0x16:  call   08abf70a <_ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj>  ; CerashopAddRestrict::ScriptLoader::FindIpgNo(unsigned int)
080e0e65 +0x1b:  leave
080e0e66 +0x1c:  ret
080e0e67 +0x1d:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::FindIpgNo @ 0x80e0e4a

/* CerashopAddRestrict::Manager::FindIpgNo(unsigned int) */

void CerashopAddRestrict::Manager::FindIpgNo(uint param_1)

{
  ScriptLoader::FindIpgNo(param_1 + 4);
  return;
}
```
