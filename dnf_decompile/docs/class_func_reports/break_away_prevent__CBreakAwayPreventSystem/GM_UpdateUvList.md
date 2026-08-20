# GM_UpdateUvList

`_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj`

`break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831ca5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831ca5a  _ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj
#           break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList(unsigned int, unsigned int)
# range [0x0831ca5a, 0x0831cb55]
0831ca5a +0x00:  push   %ebp
0831ca5b +0x01:  mov    %esp,%ebp
0831ca5d +0x03:  sub    $0x18,%esp
0831ca60 +0x06:  mov    0x8(%ebp),%eax
0831ca63 +0x09:  add    $0x30b,%eax
0831ca68 +0x0e:  movl   $0x1f,0x8(%esp)
0831ca70 +0x16:  movl   $0x0,0x4(%esp)
0831ca78 +0x1e:  mov    %eax,(%esp)
0831ca7b +0x21:  call   0807dcc0 <_init+0x5b8>
0831ca80 +0x26:  mov    0x10(%ebp),%eax
0831ca83 +0x29:  cmp    $0x2,%eax
0831ca86 +0x2c:  je     0831cac8 <+0x6e>
0831ca88 +0x2e:  cmp    $0x2,%eax
0831ca8b +0x31:  ja     0831ca97 <+0x3d>
0831ca8d +0x33:  cmp    $0x1,%eax
0831ca90 +0x36:  je     0831caa6 <+0x4c>
0831ca92 +0x38:  jmp    0831cb2c <+0xd2>
0831ca97 +0x3d:  cmp    $0x3,%eax
0831ca9a +0x40:  je     0831caea <+0x90>
0831ca9c +0x42:  cmp    $0x4,%eax
0831ca9f +0x45:  je     0831cb0c <+0xb2>
0831caa1 +0x47:  jmp    0831cb2c <+0xd2>
0831caa6 +0x4c:  mov    0x8(%ebp),%eax
0831caa9 +0x4f:  add    $0x30b,%eax
0831caae +0x54:  movl   $0x1f,0x8(%esp)
0831cab6 +0x5c:  movl   $"000000000000000000111000010001",0x4(%esp)
0831cabe +0x64:  mov    %eax,(%esp)
0831cac1 +0x67:  call   0807d8a0 <_init+0x198>
0831cac6 +0x6c:  jmp    0831cb2c <+0xd2>
0831cac8 +0x6e:  mov    0x8(%ebp),%eax
0831cacb +0x71:  add    $0x30b,%eax
0831cad0 +0x76:  movl   $0x1f,0x8(%esp)
0831cad8 +0x7e:  movl   $"000000000000000000111000010001",0x4(%esp)
0831cae0 +0x86:  mov    %eax,(%esp)
0831cae3 +0x89:  call   0807d8a0 <_init+0x198>
0831cae8 +0x8e:  jmp    0831cb2c <+0xd2>
0831caea +0x90:  mov    0x8(%ebp),%eax
0831caed +0x93:  add    $0x30b,%eax
0831caf2 +0x98:  movl   $0x1f,0x8(%esp)
0831cafa +0xa0:  movl   $"000000000000000000111000010001",0x4(%esp)
0831cb02 +0xa8:  mov    %eax,(%esp)
0831cb05 +0xab:  call   0807d8a0 <_init+0x198>
0831cb0a +0xb0:  jmp    0831cb2c <+0xd2>
0831cb0c +0xb2:  mov    0x8(%ebp),%eax
0831cb0f +0xb5:  add    $0x30b,%eax
0831cb14 +0xba:  movl   $0x1f,0x8(%esp)
0831cb1c +0xc2:  movl   $"000000000000000000111000001000",0x4(%esp)
0831cb24 +0xca:  mov    %eax,(%esp)
0831cb27 +0xcd:  call   0807d8a0 <_init+0x198>
0831cb2c +0xd2:  mov    0x8(%ebp),%eax
0831cb2f +0xd5:  add    $0x30b,%eax
0831cb34 +0xda:  mov    %eax,0x4(%esp)
0831cb38 +0xde:  mov    0xc(%ebp),%eax
0831cb3b +0xe1:  mov    %eax,(%esp)
0831cb3e +0xe4:  call   0843873a <_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc>  ; DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*)
0831cb43 +0xe9:  mov    0xc(%ebp),%eax
0831cb46 +0xec:  mov    %eax,(%esp)
0831cb49 +0xef:  call   08127f42 <_ZN29CLocalChina_DB_BreakAwayReset11makeRequestEj>  ; CLocalChina_DB_BreakAwayReset::makeRequest(unsigned int)
0831cb4e +0xf4:  mov    $0x1,%eax
0831cb53 +0xf9:  leave
0831cb54 +0xfa:  ret
0831cb55 +0xfb:  nop
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList @ 0x831ca5a

/* break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList(unsigned int, unsigned int) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList
          (CBreakAwayPreventSystem *this,uint param_1,uint param_2)

{
  memset(this + 0x30b,0,0x1f);
  if (param_2 == 2) {
    memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
  }
  else if (param_2 < 3) {
    if (param_2 == 1) {
      memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
    }
  }
  else if (param_2 == 3) {
    memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
  }
  else if (param_2 == 4) {
    memcpy(this + 0x30b,"000000000000000000111000001000",0x1f);
  }
  DB_UpdateBreakAwayUvList::makeRequest(param_1,(char *)(this + 0x30b));
  CLocalChina_DB_BreakAwayReset::makeRequest(param_1);
  return 1;
}
```
