# LoadGmList

`_ZN8WongWork11CGMAccounts10LoadGmListEji`

`WongWork::CGMAccounts::LoadGmList(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x081094ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081094ea  _ZN8WongWork11CGMAccounts10LoadGmListEji
#           WongWork::CGMAccounts::LoadGmList(unsigned int, int)
# range [0x081094ea, 0x0810950f]
081094ea +0x00:  push   %ebp
081094eb +0x01:  mov    %esp,%ebp
081094ed +0x03:  sub    $0x28,%esp
081094f0 +0x06:  mov    0xc(%ebp),%eax
081094f3 +0x09:  mov    %eax,-0x10(%ebp)
081094f6 +0x0c:  mov    0x10(%ebp),%eax
081094f9 +0x0f:  mov    %eax,-0xc(%ebp)
081094fc +0x12:  mov    0x8(%ebp),%eax
081094ff +0x15:  lea    -0x10(%ebp),%edx
08109502 +0x18:  mov    %edx,0x4(%esp)
08109506 +0x1c:  mov    %eax,(%esp)
08109509 +0x1f:  call   081096d6 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0xe3>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0xe3
0810950e +0x24:  leave
0810950f +0x25:  ret
```

## 反编译 C

```c
// WongWork::CGMAccounts::LoadGmList @ 0x81094ea

/* WongWork::CGMAccounts::LoadGmList(unsigned int, int) */

void __thiscall WongWork::CGMAccounts::LoadGmList(CGMAccounts *this,uint param_1,int param_2)

{
  uint local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_14);
  return;
}
```
