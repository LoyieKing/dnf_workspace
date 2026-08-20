# IsWaitingStateCharac

`_ZN20UserMercenaryInfoMgr20IsWaitingStateCharacEj`

`UserMercenaryInfoMgr::IsWaitingStateCharac(unsigned int)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b45ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b45ce  _ZN20UserMercenaryInfoMgr20IsWaitingStateCharacEj
#           UserMercenaryInfoMgr::IsWaitingStateCharac(unsigned int)
# range [0x081b45ce, 0x081b462d]
081b45ce +0x00:  push   %ebp
081b45cf +0x01:  mov    %esp,%ebp
081b45d1 +0x03:  sub    $0x28,%esp
081b45d4 +0x06:  mov    0xc(%ebp),%eax
081b45d7 +0x09:  mov    %eax,0x4(%esp)
081b45db +0x0d:  mov    0x8(%ebp),%eax
081b45de +0x10:  mov    %eax,(%esp)
081b45e1 +0x13:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
081b45e6 +0x18:  mov    %eax,-0xc(%ebp)
081b45e9 +0x1b:  mov    -0xc(%ebp),%eax
081b45ec +0x1e:  movzbl %al,%eax
081b45ef +0x21:  mov    %eax,0x4(%esp)
081b45f3 +0x25:  mov    0x8(%ebp),%eax
081b45f6 +0x28:  mov    %eax,(%esp)
081b45f9 +0x2b:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
081b45fe +0x30:  xor    $0x1,%eax
081b4601 +0x33:  test   %al,%al
081b4603 +0x35:  je     081b460c <+0x3e>
081b4605 +0x37:  mov    $0x1,%eax
081b460a +0x3c:  jmp    081b462b <+0x5d>
081b460c +0x3e:  mov    -0xc(%ebp),%edx
081b460f +0x41:  mov    0x8(%ebp),%eax
081b4612 +0x44:  mov    %edx,0x4(%esp)
081b4616 +0x48:  mov    %eax,(%esp)
081b4619 +0x4b:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b461e +0x50:  mov    %eax,(%esp)
081b4621 +0x53:  call   081b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>  ; CHARAC_LOAD_MERCENARY::GetCompetitionState() const
081b4626 +0x58:  test   %eax,%eax
081b4628 +0x5a:  sete   %al
081b462b +0x5d:  leave
081b462c +0x5e:  ret
081b462d +0x5f:  nop
```

## 反编译 C

```c
// UserMercenaryInfoMgr::IsWaitingStateCharac @ 0x81b45ce

/* UserMercenaryInfoMgr::IsWaitingStateCharac(unsigned int) */

bool __thiscall UserMercenaryInfoMgr::IsWaitingStateCharac(UserMercenaryInfoMgr *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  CHARAC_LOAD_MERCENARY *this_00;
  int iVar3;
  bool bVar4;
  
  uVar2 = FindIndexByCharacNo(this,param_1);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,uVar2);
    iVar3 = CHARAC_LOAD_MERCENARY::GetCompetitionState(this_00);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}
```
