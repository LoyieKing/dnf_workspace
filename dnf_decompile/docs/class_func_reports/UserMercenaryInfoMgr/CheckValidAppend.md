# CheckValidAppend

`_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY`

`UserMercenaryInfoMgr::CheckValidAppend(CHARAC_LOAD_MERCENARY const&)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b4198` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b4198  _ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY
#           UserMercenaryInfoMgr::CheckValidAppend(CHARAC_LOAD_MERCENARY const&)
# range [0x081b4198, 0x081b4261]
081b4198 +0x00:  push   %ebp
081b4199 +0x01:  mov    %esp,%ebp
081b419b +0x03:  push   %ebx
081b419c +0x04:  sub    $0x24,%esp
081b419f +0x07:  movl   $0x0,-0xc(%ebp)
081b41a6 +0x0e:  jmp    081b423d <+0xa5>
081b41ab +0x13:  mov    0xc(%ebp),%eax
081b41ae +0x16:  mov    (%eax),%ebx
081b41b0 +0x18:  mov    0x8(%ebp),%eax
081b41b3 +0x1b:  mov    -0xc(%ebp),%edx
081b41b6 +0x1e:  mov    %edx,0x4(%esp)
081b41ba +0x22:  mov    %eax,(%esp)
081b41bd +0x25:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b41c2 +0x2a:  mov    (%eax),%eax
081b41c4 +0x2c:  cmp    %eax,%ebx
081b41c6 +0x2e:  sete   %al
081b41c9 +0x31:  test   %al,%al
081b41cb +0x33:  je     081b4239 <+0xa1>
081b41cd +0x35:  mov    0x8(%ebp),%eax
081b41d0 +0x38:  mov    -0xc(%ebp),%edx
081b41d3 +0x3b:  mov    %edx,0x4(%esp)
081b41d7 +0x3f:  mov    %eax,(%esp)
081b41da +0x42:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b41df +0x47:  movzwl 0x4(%eax),%edx
081b41e3 +0x4b:  mov    0xc(%ebp),%eax
081b41e6 +0x4e:  movzwl 0x4(%eax),%eax
081b41ea +0x52:  cmp    %ax,%dx
081b41ed +0x55:  setne  %al
081b41f0 +0x58:  test   %al,%al
081b41f2 +0x5a:  je     081b4232 <+0x9a>
081b41f4 +0x5c:  mov    0x8(%ebp),%eax
081b41f7 +0x5f:  mov    -0xc(%ebp),%edx
081b41fa +0x62:  mov    %edx,0x4(%esp)
081b41fe +0x66:  mov    %eax,(%esp)
081b4201 +0x69:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b4206 +0x6e:  mov    0xc(%ebp),%edx
081b4209 +0x71:  movzwl 0x4(%edx),%edx
081b420d +0x75:  mov    %dx,0x4(%eax)
081b4211 +0x79:  mov    0x8(%ebp),%eax
081b4214 +0x7c:  mov    -0xc(%ebp),%edx
081b4217 +0x7f:  mov    %edx,0x4(%esp)
081b421b +0x83:  mov    %eax,(%esp)
081b421e +0x86:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b4223 +0x8b:  mov    %eax,(%esp)
081b4226 +0x8e:  call   081b47c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3c
081b422b +0x93:  mov    $0x0,%eax
081b4230 +0x98:  jmp    081b425b <+0xc3>
081b4232 +0x9a:  mov    $0x0,%eax
081b4237 +0x9f:  jmp    081b425b <+0xc3>
081b4239 +0xa1:  addl   $0x1,-0xc(%ebp)
081b423d +0xa5:  mov    0x8(%ebp),%eax
081b4240 +0xa8:  mov    %eax,(%esp)
081b4243 +0xab:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
081b4248 +0xb0:  cmp    -0xc(%ebp),%eax
081b424b +0xb3:  seta   %al
081b424e +0xb6:  test   %al,%al
081b4250 +0xb8:  jne    081b41ab <+0x13>
081b4256 +0xbe:  mov    $0x1,%eax
081b425b +0xc3:  add    $0x24,%esp
081b425e +0xc6:  pop    %ebx
081b425f +0xc7:  pop    %ebp
081b4260 +0xc8:  ret
081b4261 +0xc9:  nop
```

## 反编译 C

```c
// UserMercenaryInfoMgr::CheckValidAppend @ 0x81b4198

/* UserMercenaryInfoMgr::CheckValidAppend(CHARAC_LOAD_MERCENARY const&) */

undefined4 __thiscall
UserMercenaryInfoMgr::CheckValidAppend(UserMercenaryInfoMgr *this,CHARAC_LOAD_MERCENARY *param_1)

{
  int *piVar1;
  int iVar2;
  CHARAC_LOAD_MERCENARY *this_00;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (uVar3 <= local_10) {
      return 1;
    }
    iVar2 = *(int *)param_1;
    piVar1 = (int *)std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                    operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>
                                *)this,local_10);
    if (iVar2 == *piVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                    ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                     local_10);
  if (*(short *)(iVar2 + 4) != *(short *)(param_1 + 4)) {
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       local_10);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 4);
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,local_10);
    CHARAC_LOAD_MERCENARY::alter(this_00);
    return 0;
  }
  return 0;
}
```
