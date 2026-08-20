# ReCalcEmoticonConf

`_ZN12CDataManager18ReCalcEmoticonConfER23CChattingEmoticonConfigRK5CUser`

`CDataManager::ReCalcEmoticonConf(CChattingEmoticonConfig&, CUser const&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fc76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fc76  _ZN12CDataManager18ReCalcEmoticonConfER23CChattingEmoticonConfigRK5CUser
#           CDataManager::ReCalcEmoticonConf(CChattingEmoticonConfig&, CUser const&)
# range [0x0835fc76, 0x0835fc99]
0835fc76 +0x00:  push   %ebp
0835fc77 +0x01:  mov    %esp,%ebp
0835fc79 +0x03:  sub    $0x18,%esp
0835fc7c +0x06:  mov    0x8(%ebp),%eax
0835fc7f +0x09:  mov    0x28(%eax),%eax
0835fc82 +0x0c:  mov    0x10(%ebp),%edx
0835fc85 +0x0f:  mov    %edx,0x8(%esp)
0835fc89 +0x13:  mov    0xc(%ebp),%edx
0835fc8c +0x16:  mov    %edx,0x4(%esp)
0835fc90 +0x1a:  mov    %eax,(%esp)
0835fc93 +0x1d:  call   080e5880 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser>  ; CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&)
0835fc98 +0x22:  leave
0835fc99 +0x23:  ret
```

## 反编译 C

```c
// CDataManager::ReCalcEmoticonConf @ 0x835fc76

/* CDataManager::ReCalcEmoticonConf(CChattingEmoticonConfig&, CUser const&) */

void __thiscall
CDataManager::ReCalcEmoticonConf(CDataManager *this,CChattingEmoticonConfig *param_1,CUser *param_2)

{
  CChattingEmoticonList::ReCalc(*(CChattingEmoticonList **)(this + 0x28),param_1,param_2);
  return;
}
```
