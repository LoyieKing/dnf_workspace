# CheckCharacIndex

`_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh`

`UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b4262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b4262  _ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh
#           UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
# range [0x081b4262, 0x081b42ad]
081b4262 +0x00:  push   %ebp
081b4263 +0x01:  mov    %esp,%ebp
081b4265 +0x03:  sub    $0x28,%esp
081b4268 +0x06:  mov    0xc(%ebp),%eax
081b426b +0x09:  mov    %al,-0xc(%ebp)
081b426e +0x0c:  mov    0x8(%ebp),%eax
081b4271 +0x0f:  mov    %eax,(%esp)
081b4274 +0x12:  call   081b4b5a <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ce>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ce
081b4279 +0x17:  test   %al,%al
081b427b +0x19:  jne    081b4290 <+0x2e>
081b427d +0x1b:  mov    0x8(%ebp),%eax
081b4280 +0x1e:  mov    %eax,(%esp)
081b4283 +0x21:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
081b4288 +0x26:  movzbl -0xc(%ebp),%edx
081b428c +0x2a:  cmp    %edx,%eax
081b428e +0x2c:  jae    081b4297 <+0x35>
081b4290 +0x2e:  mov    $0x1,%eax
081b4295 +0x33:  jmp    081b429c <+0x3a>
081b4297 +0x35:  mov    $0x0,%eax
081b429c +0x3a:  test   %al,%al
081b429e +0x3c:  je     081b42a7 <+0x45>
081b42a0 +0x3e:  mov    $0x0,%eax
081b42a5 +0x43:  jmp    081b42ac <+0x4a>
081b42a7 +0x45:  mov    $0x1,%eax
081b42ac +0x4a:  leave
081b42ad +0x4b:  ret
```

## 反编译 C

```c
// UserMercenaryInfoMgr::CheckCharacIndex @ 0x81b4262

/* UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const */

bool __thiscall UserMercenaryInfoMgr::CheckCharacIndex(UserMercenaryInfoMgr *this,uchar param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::empty();
  if ((cVar2 == '\0') &&
     (uVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                        ), param_1 <= uVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
