# FindIndexByCharacNo

`_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj`

`UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b42ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b42ae  _ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj
#           UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
# range [0x081b42ae, 0x081b42ff]
081b42ae +0x00:  push   %ebp
081b42af +0x01:  mov    %esp,%ebp
081b42b1 +0x03:  sub    $0x28,%esp
081b42b4 +0x06:  movl   $0x0,-0xc(%ebp)
081b42bb +0x0d:  jmp    081b42e4 <+0x36>
081b42bd +0x0f:  mov    0x8(%ebp),%eax
081b42c0 +0x12:  mov    -0xc(%ebp),%edx
081b42c3 +0x15:  mov    %edx,0x4(%esp)
081b42c7 +0x19:  mov    %eax,(%esp)
081b42ca +0x1c:  call   081b4b9e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x412>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x412
081b42cf +0x21:  mov    (%eax),%eax
081b42d1 +0x23:  cmp    0xc(%ebp),%eax
081b42d4 +0x26:  sete   %al
081b42d7 +0x29:  test   %al,%al
081b42d9 +0x2b:  je     081b42e0 <+0x32>
081b42db +0x2d:  mov    -0xc(%ebp),%eax
081b42de +0x30:  jmp    081b42fe <+0x50>
081b42e0 +0x32:  addl   $0x1,-0xc(%ebp)
081b42e4 +0x36:  mov    0x8(%ebp),%eax
081b42e7 +0x39:  mov    %eax,(%esp)
081b42ea +0x3c:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
081b42ef +0x41:  cmp    -0xc(%ebp),%eax
081b42f2 +0x44:  seta   %al
081b42f5 +0x47:  test   %al,%al
081b42f7 +0x49:  jne    081b42bd <+0xf>
081b42f9 +0x4b:  mov    $0xffffffff,%eax
081b42fe +0x50:  leave
081b42ff +0x51:  ret
```

## 反编译 C

```c
// UserMercenaryInfoMgr::FindIndexByCharacNo @ 0x81b42ae

/* UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const */

uint __thiscall UserMercenaryInfoMgr::FindIndexByCharacNo(UserMercenaryInfoMgr *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (uVar2 <= local_10) {
      return 0xffffffff;
    }
    puVar1 = (uint *)std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                     operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>
                                 *)this,local_10);
    if (*puVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
