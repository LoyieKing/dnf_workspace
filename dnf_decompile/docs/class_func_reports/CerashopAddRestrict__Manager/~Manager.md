# ~Manager

`_ZN19CerashopAddRestrict7ManagerD1Ev`

`CerashopAddRestrict::Manager::~Manager()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0a24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0a24  _ZN19CerashopAddRestrict7ManagerD1Ev
#           CerashopAddRestrict::Manager::~Manager()
# range [0x080e0a24, 0x080e0a42]
080e0a24 +0x00:  push   %ebp
080e0a25 +0x01:  mov    %esp,%ebp
080e0a27 +0x03:  sub    $0x18,%esp
080e0a2a +0x06:  mov    0x8(%ebp),%eax
080e0a2d +0x09:  movl   $&_ZTVN19CerashopAddRestrict7ManagerE+0x8,(%eax)
080e0a33 +0x0f:  mov    0x8(%ebp),%eax
080e0a36 +0x12:  add    $0x4,%eax
080e0a39 +0x15:  mov    %eax,(%esp)
080e0a3c +0x18:  call   080e2428 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1ce>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1ce
080e0a41 +0x1d:  leave
080e0a42 +0x1e:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::~Manager @ 0x80e0a24

/* CerashopAddRestrict::Manager::~Manager() */

void __thiscall CerashopAddRestrict::Manager::~Manager(Manager *this)

{
  *(undefined ***)this = &PTR_Load_08b2db68;
  ScriptLoader::~ScriptLoader((ScriptLoader *)(this + 4));
  return;
}
```
