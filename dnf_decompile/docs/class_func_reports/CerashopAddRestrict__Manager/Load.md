# Load

`_ZN19CerashopAddRestrict7Manager4LoadEv`

`CerashopAddRestrict::Manager::Load()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0e08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0e08  _ZN19CerashopAddRestrict7Manager4LoadEv
#           CerashopAddRestrict::Manager::Load()
# range [0x080e0e08, 0x080e0e3f]
080e0e08 +0x00:  push   %ebp
080e0e09 +0x01:  mov    %esp,%ebp
080e0e0b +0x03:  sub    $0x18,%esp
080e0e0e +0x06:  movl   $"[!] Loading CeraShop Add Restrict Type script - ",(%esp)
080e0e15 +0x0d:  call   0807db60 <_init+0x458>
080e0e1a +0x12:  mov    0x8(%ebp),%eax
080e0e1d +0x15:  add    $0x4,%eax
080e0e20 +0x18:  mov    %eax,(%esp)
080e0e23 +0x1b:  call   08abf3cc <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv>  ; CerashopAddRestrict::ScriptLoader::LoadScript()
080e0e28 +0x20:  test   %eax,%eax
080e0e2a +0x22:  setne  %al
080e0e2d +0x25:  test   %al,%al
080e0e2f +0x27:  je     080e0e38 <+0x30>
080e0e31 +0x29:  mov    $0x0,%eax
080e0e36 +0x2e:  jmp    080e0e3d <+0x35>
080e0e38 +0x30:  mov    $0x1,%eax
080e0e3d +0x35:  leave
080e0e3e +0x36:  ret
080e0e3f +0x37:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::Load @ 0x80e0e08

/* CerashopAddRestrict::Manager::Load() */

bool __thiscall CerashopAddRestrict::Manager::Load(Manager *this)

{
  int iVar1;
  
  printf("[!] Loading CeraShop Add Restrict Type script - ");
  iVar1 = ScriptLoader::LoadScript((ScriptLoader *)(this + 4));
  return iVar1 == 0;
}
```
