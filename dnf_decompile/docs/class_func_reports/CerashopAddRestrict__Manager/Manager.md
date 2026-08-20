# Manager

`_ZN19CerashopAddRestrict7ManagerC1Ev`

`CerashopAddRestrict::Manager::Manager()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e09bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e09bc  _ZN19CerashopAddRestrict7ManagerC1Ev
#           CerashopAddRestrict::Manager::Manager()
# range [0x080e09bc, 0x080e0a23]
080e09bc +0x00:  push   %ebp
080e09bd +0x01:  mov    %esp,%ebp
080e09bf +0x03:  sub    $0x18,%esp
080e09c2 +0x06:  mov    0x8(%ebp),%eax
080e09c5 +0x09:  mov    %eax,(%esp)
080e09c8 +0x0c:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
080e09cd +0x11:  mov    0x8(%ebp),%eax
080e09d0 +0x14:  mov    %eax,(%esp)
080e09d3 +0x17:  call   080e25f0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x396>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x396
080e09d8 +0x1c:  mov    0x8(%ebp),%eax
080e09db +0x1f:  movl   $&_ZTVN19CerashopAddRestrict7ManagerE+0x8,(%eax)
080e09e1 +0x25:  mov    0x8(%ebp),%eax
080e09e4 +0x28:  movl   $0x0,0x8(%eax)
080e09eb +0x2f:  mov    0x8(%ebp),%eax
080e09ee +0x32:  movl   $0x0,0xc(%eax)
080e09f5 +0x39:  mov    0x8(%ebp),%eax
080e09f8 +0x3c:  movl   $0x0,0x10(%eax)
080e09ff +0x43:  mov    0x8(%ebp),%eax
080e0a02 +0x46:  movl   $0x0,0x14(%eax)
080e0a09 +0x4d:  mov    0x8(%ebp),%eax
080e0a0c +0x50:  movl   $0x0,0x18(%eax)
080e0a13 +0x57:  mov    0x8(%ebp),%eax
080e0a16 +0x5a:  add    $0x4,%eax
080e0a19 +0x5d:  mov    %eax,(%esp)
080e0a1c +0x60:  call   080e2414 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1ba>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1ba
080e0a21 +0x65:  leave
080e0a22 +0x66:  ret
080e0a23 +0x67:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::Manager @ 0x80e09bc

/* CerashopAddRestrict::Manager::Manager() */

void __thiscall CerashopAddRestrict::Manager::Manager(Manager *this)

{
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  ARAD::Singleton<CerashopAddRestrict::Manager>::Singleton();
  *(undefined ***)this = &PTR_Load_08b2db68;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  ScriptLoader::ScriptLoader((ScriptLoader *)(this + 4));
  return;
}
```
